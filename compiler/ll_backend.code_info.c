/*
** Automatically generated from `code_info.m'
** by the Mercury compiler,
** version rotd-2016-06-30
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module ll_backend.code_info. */
/* :- implementation. */

/*
INIT mercury__ll_backend__code_info__init
ENDINIT
*/

#include "ll_backend.code_info.mih"


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
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
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




static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__code_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

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

static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_persistent_0_0;

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_persistent_0_0[1];

static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_persistent_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_persistent_0[1];

static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_persistent_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1ll_backend__trace_gen__type_ctor_info_trace_info_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_typed_rval_0;

static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_static_0_0[21];

static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_static_0_0[21];

static const MR_DuArgLocn ll_backend__code_info__ll_backend__code_info__field_locns_code_info_static_0_0[21];

static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_static_0_0;

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_static_0_0[1];

static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_static_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_static_0[1];

static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_static_0[1];

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_0_0_10001(
  MR_Box ll_backend__code_info__wrapper_arg_1,
  MR_Box ll_backend__code_info__wrapper_arg_2);

static void MR_CALL 
ll_backend__code_info____Compare____code_info_0_0_10001(
  MR_Box * ll_backend__code_info__wrapper_arg_1,
  MR_Box ll_backend__code_info__wrapper_arg_2,
  MR_Box ll_backend__code_info__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0_10001(
  MR_Box ll_backend__code_info__wrapper_arg_1,
  MR_Box ll_backend__code_info__wrapper_arg_2);

static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0_10001(
  MR_Box * ll_backend__code_info__wrapper_arg_1,
  MR_Box ll_backend__code_info__wrapper_arg_2,
  MR_Box ll_backend__code_info__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0_10001(
  MR_Box ll_backend__code_info__wrapper_arg_1,
  MR_Box ll_backend__code_info__wrapper_arg_2);

static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0_10001(
  MR_Box * ll_backend__code_info__wrapper_arg_1,
  MR_Box ll_backend__code_info__wrapper_arg_2,
  MR_Box ll_backend__code_info__wrapper_arg_3);

static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0(
  MR_Word * ll_backend__code_info__HeadVar__1_1,
  MR_Word ll_backend__code_info__HeadVar__2_2,
  MR_Word ll_backend__code_info__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0(
  MR_Word ll_backend__code_info__HeadVar__1_1,
  MR_Word ll_backend__code_info__HeadVar__2_2);

static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0(
  MR_Word * ll_backend__code_info__HeadVar__1_1,
  MR_Word ll_backend__code_info__HeadVar__2_2,
  MR_Word ll_backend__code_info__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0(
  MR_Word ll_backend__code_info__HeadVar__1_1,
  MR_Word ll_backend__code_info__HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__code_info__filter_region_vars_2_f_0_1(
  MR_Box ll_backend__code_info__closure_arg,
  MR_Box ll_backend__code_info__wrapper_arg_1);

static void MR_CALL 
ll_backend__code_info__init_maybe_trace_info_8_p_0(
  MR_Word ll_backend__code_info__TraceLevel_9,
  MR_Word ll_backend__code_info__Globals_10,
  MR_Word ll_backend__code_info__ModuleInfo_11,
  MR_Word ll_backend__code_info__PredInfo_12,
  MR_Word ll_backend__code_info__ProcInfo_13,
  MR_Word * ll_backend__code_info__TraceSlotInfo_14,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_21,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_22);

static void MR_CALL 
ll_backend__code_info__max_var_slot_2_3_p_0(
  MR_Word ll_backend__code_info__HeadVar__1_1,
  MR_Integer ll_backend__code_info__STATE_VARIABLE_Max_0_2,
  MR_Integer * ll_backend__code_info__STATE_VARIABLE_Max_3);

static MR_Word MR_CALL 
ll_backend__code_info__init_exprn_opts_1_f_0(
  MR_Word ll_backend__code_info__Globals_3);

static void MR_CALL 
ll_backend__code_info__set_layout_info_3_p_0(
  MR_Word ll_backend__code_info__X_4,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7);


static /* final */ const MR_Box ll_backend__code_info_scalar_common_1[10][2];

static /* final */ const MR_Box ll_backend__code_info_scalar_common_2[5][3];

static /* final */ const MR_Box ll_backend__code_info_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__code_info_scalar_common_4[1][5];




static /* final */ const MR_Box ll_backend__code_info_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_info_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_info_scalar_common_2[3]))
  },
};

static /* final */ const MR_Box ll_backend__code_info_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__code_info_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__code_info_scalar_common_3[1][6] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__code_info_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__code_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ll_backend__code_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__code_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__code_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_static_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_persistent_0
};

static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_0_0[2] = {
  (MR_String) "code_info_static",
  (MR_String) "code_info_persistent"
};

static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_0_0 = {
  (MR_String) "code_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__code_info__ll_backend__code_info__field_types_code_info_0_0,
  ll_backend__code_info__ll_backend__code_info__field_names_code_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_0_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_0_0
};

static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_0_0
};

static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_info____Unify____code_info_0_0_10001)),
  ((MR_Box) (ll_backend__code_info____Compare____code_info_0_0_10001)),
  (MR_String) "ll_backend.code_info",
  (MR_String) "code_info",
  {     ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_0 },
  {     ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__continuation_info__type_ctor_info_slot_contents_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_persistent_0_0[18] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__continuation_info__type_ctor_info_slot_contents_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
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

static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_persistent_0_0 = {
  (MR_String) "code_info_persistent",
  (MR_Integer) 18,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__code_info__ll_backend__code_info__field_types_code_info_persistent_0_0,
  ll_backend__code_info__ll_backend__code_info__field_names_code_info_persistent_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_persistent_0_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_persistent_0_0
};

static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_persistent_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_persistent_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_persistent_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_persistent_0_0
};

static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_persistent_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_persistent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_info____Unify____code_info_persistent_0_0_10001)),
  ((MR_Box) (ll_backend__code_info____Compare____code_info_persistent_0_0_10001)),
  (MR_String) "ll_backend.code_info",
  (MR_String) "code_info_persistent",
  {     ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_persistent_0 },
  {     ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_persistent_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_persistent_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__code_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1ll_backend__trace_gen__type_ctor_info_trace_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__code_info__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_static_0_0[21] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_exprn_opts_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__maybe__ti_maybe_1ll_backend__trace_gen__type_ctor_info_trace_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_add_trail_ops_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_add_region_ops_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_typed_rval_0
};

static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_static_0_0[21] = {
  (MR_String) "cis_module_info",
  (MR_String) "cis_globals",
  (MR_String) "cis_exprn_opts",
  (MR_String) "cis_pred_id",
  (MR_String) "cis_proc_id",
  (MR_String) "cis_pred_info",
  (MR_String) "cis_proc_info",
  (MR_String) "cis_proc_label",
  (MR_String) "cis_varset",
  (MR_String) "cis_vartypes",
  (MR_String) "cis_var_slot_count",
  (MR_String) "cis_maybe_trace_info",
  (MR_String) "cis_opt_no_return_calls",
  (MR_String) "cis_emit_trail_ops",
  (MR_String) "cis_opt_trail_ops",
  (MR_String) "cis_emit_region_ops",
  (MR_String) "cis_opt_region_ops",
  (MR_String) "cis_auto_comments",
  (MR_String) "cis_lcmc_null",
  (MR_String) "cis_containing_goal_map",
  (MR_String) "cis_const_struct_map"
};

static const MR_DuArgLocn ll_backend__code_info__ll_backend__code_info__field_locns_code_info_static_0_0[21] = {
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
    (MR_Integer) 0
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
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 6,
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
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_static_0_0 = {
  (MR_String) "code_info_static",
  (MR_Integer) 21,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__code_info__ll_backend__code_info__field_types_code_info_static_0_0,
  ll_backend__code_info__ll_backend__code_info__field_names_code_info_static_0_0,
  ll_backend__code_info__ll_backend__code_info__field_locns_code_info_static_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_static_0_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_static_0_0
};

static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_static_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_static_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_static_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_static_0_0
};

static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_static_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_static_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_info____Unify____code_info_static_0_0_10001)),
  ((MR_Box) (ll_backend__code_info____Compare____code_info_static_0_0_10001)),
  (MR_String) "ll_backend.code_info",
  (MR_String) "code_info_static",
  {     ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_static_0 },
  {     ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_static_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_static_0
};

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_0_0_10001(
  MR_Box ll_backend__code_info__wrapper_arg_1,
  MR_Box ll_backend__code_info__wrapper_arg_2)
{
  {
    MR_bool ll_backend__code_info__succeeded;

    {
      ll_backend__code_info__succeeded = ll_backend__code_info____Unify____code_info_0_0(((MR_Word) ll_backend__code_info__wrapper_arg_1), ((MR_Word) ll_backend__code_info__wrapper_arg_2));
    }
    return ll_backend__code_info__succeeded;
  }
}

static void MR_CALL 
ll_backend__code_info____Compare____code_info_0_0_10001(
  MR_Box * ll_backend__code_info__wrapper_arg_1,
  MR_Box ll_backend__code_info__wrapper_arg_2,
  MR_Box ll_backend__code_info__wrapper_arg_3)
{
  {
    MR_Word ll_backend__code_info__conv0_HeadVar__1_1;

    {
      ll_backend__code_info____Compare____code_info_0_0(&ll_backend__code_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__code_info__wrapper_arg_2), ((MR_Word) ll_backend__code_info__wrapper_arg_3));
    }
    *ll_backend__code_info__wrapper_arg_1 = ((MR_Box) (ll_backend__code_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0_10001(
  MR_Box ll_backend__code_info__wrapper_arg_1,
  MR_Box ll_backend__code_info__wrapper_arg_2)
{
  {
    MR_bool ll_backend__code_info__succeeded;

    {
      ll_backend__code_info__succeeded = ll_backend__code_info____Unify____code_info_persistent_0_0(((MR_Word) ll_backend__code_info__wrapper_arg_1), ((MR_Word) ll_backend__code_info__wrapper_arg_2));
    }
    return ll_backend__code_info__succeeded;
  }
}

static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0_10001(
  MR_Box * ll_backend__code_info__wrapper_arg_1,
  MR_Box ll_backend__code_info__wrapper_arg_2,
  MR_Box ll_backend__code_info__wrapper_arg_3)
{
  {
    MR_Word ll_backend__code_info__conv0_HeadVar__1_1;

    {
      ll_backend__code_info____Compare____code_info_persistent_0_0(&ll_backend__code_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__code_info__wrapper_arg_2), ((MR_Word) ll_backend__code_info__wrapper_arg_3));
    }
    *ll_backend__code_info__wrapper_arg_1 = ((MR_Box) (ll_backend__code_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0_10001(
  MR_Box ll_backend__code_info__wrapper_arg_1,
  MR_Box ll_backend__code_info__wrapper_arg_2)
{
  {
    MR_bool ll_backend__code_info__succeeded;

    {
      ll_backend__code_info__succeeded = ll_backend__code_info____Unify____code_info_static_0_0(((MR_Word) ll_backend__code_info__wrapper_arg_1), ((MR_Word) ll_backend__code_info__wrapper_arg_2));
    }
    return ll_backend__code_info__succeeded;
  }
}

static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0_10001(
  MR_Box * ll_backend__code_info__wrapper_arg_1,
  MR_Box ll_backend__code_info__wrapper_arg_2,
  MR_Box ll_backend__code_info__wrapper_arg_3)
{
  {
    MR_Word ll_backend__code_info__conv0_HeadVar__1_1;

    {
      ll_backend__code_info____Compare____code_info_static_0_0(&ll_backend__code_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__code_info__wrapper_arg_2), ((MR_Word) ll_backend__code_info__wrapper_arg_3));
    }
    *ll_backend__code_info__wrapper_arg_1 = ((MR_Box) (ll_backend__code_info__conv0_HeadVar__1_1));
  }
}

MR_Word MR_CALL 
ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_114_101_103_105_111_110_95_111_112_115_95_95_91_50_93_95_48_2_f_0(
  MR_Word ll_backend__code_info__CodeInfo_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__AddRegionOps_6;
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo_4, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo_4, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;

    ll_backend__code_info__AddRegionOps_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
    return ll_backend__code_info__AddRegionOps_6;
  }
}

MR_Word MR_CALL 
ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_116_114_97_105_108_95_111_112_115_95_95_91_50_93_95_48_2_f_0(
  MR_Word ll_backend__code_info__CodeInfo_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__AddTrailOps_6;
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo_4, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo_4, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;

    ll_backend__code_info__AddTrailOps_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
    return ll_backend__code_info__AddTrailOps_6;
  }
}

static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0(
  MR_Word * ll_backend__code_info__HeadVar__1_1,
  MR_Word ll_backend__code_info__HeadVar__2_2,
  MR_Word ll_backend__code_info__HeadVar__3_3)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Integer ll_backend__code_info__CastX_66 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;
    MR_Integer ll_backend__code_info__CastY_67 = (MR_Integer) ll_backend__code_info__HeadVar__3_3;

    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_66 == ll_backend__code_info__CastY_67);
    if (ll_backend__code_info__succeeded)
      *ll_backend__code_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer ll_backend__code_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer ll_backend__code_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word ll_backend__code_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 13)));
        MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 14)));
        MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer ll_backend__code_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 9)));
        MR_Integer ll_backend__code_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 10)));
        MR_Word ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 11)));
        MR_Word ll_backend__code_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 13)));
        MR_Word ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 14)));
        MR_Word ll_backend__code_info__V_46_46;

        {
          hlds__hlds_module____Compare____module_info_0_0(&ll_backend__code_info__V_46_46, ll_backend__code_info__V_4_4, ll_backend__code_info__V_25_25);
        }
        ll_backend__code_info__succeeded = (ll_backend__code_info__V_46_46 == (MR_Integer) 0);
        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
        if (ll_backend__code_info__succeeded)
          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_46_46;
        else
          {
            MR_Word ll_backend__code_info__V_47_47;

            {
              libs__globals____Compare____globals_0_0(&ll_backend__code_info__V_47_47, ll_backend__code_info__V_5_5, ll_backend__code_info__V_26_26);
            }
            ll_backend__code_info__succeeded = (ll_backend__code_info__V_47_47 == (MR_Integer) 0);
            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
            if (ll_backend__code_info__succeeded)
              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_47_47;
            else
              {
                MR_Word ll_backend__code_info__V_48_48;

                {
                  ll_backend__llds____Compare____exprn_opts_0_0(&ll_backend__code_info__V_48_48, ll_backend__code_info__V_6_6, ll_backend__code_info__V_27_27);
                }
                ll_backend__code_info__succeeded = (ll_backend__code_info__V_48_48 == (MR_Integer) 0);
                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                if (ll_backend__code_info__succeeded)
                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_48_48;
                else
                  {
                    MR_Word ll_backend__code_info__V_49_49;

                    {
                      hlds__hlds_pred____Compare____pred_id_0_0(&ll_backend__code_info__V_49_49, ll_backend__code_info__V_7_7, ll_backend__code_info__V_28_28);
                    }
                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_49_49 == (MR_Integer) 0);
                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                    if (ll_backend__code_info__succeeded)
                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_49_49;
                    else
                      {
                        MR_Word ll_backend__code_info__V_50_50;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_50_50, ll_backend__code_info__V_8_8, ll_backend__code_info__V_29_29);
                        }
                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_50_50 == (MR_Integer) 0);
                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                        if (ll_backend__code_info__succeeded)
                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_50_50;
                        else
                          {
                            MR_Word ll_backend__code_info__V_51_51;

                            {
                              hlds__hlds_pred____Compare____pred_info_0_0(&ll_backend__code_info__V_51_51, ll_backend__code_info__V_9_9, ll_backend__code_info__V_30_30);
                            }
                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_51_51 == (MR_Integer) 0);
                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                            if (ll_backend__code_info__succeeded)
                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_51_51;
                            else
                              {
                                MR_Word ll_backend__code_info__V_52_52;

                                {
                                  hlds__hlds_pred____Compare____proc_info_0_0(&ll_backend__code_info__V_52_52, ll_backend__code_info__V_10_10, ll_backend__code_info__V_31_31);
                                }
                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_52_52 == (MR_Integer) 0);
                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                if (ll_backend__code_info__succeeded)
                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_52_52;
                                else
                                  {
                                    MR_Word ll_backend__code_info__V_53_53;

                                    {
                                      mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__code_info__V_53_53, ll_backend__code_info__V_11_11, ll_backend__code_info__V_32_32);
                                    }
                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_53_53 == (MR_Integer) 0);
                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                    if (ll_backend__code_info__succeeded)
                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_53_53;
                                    else
                                      {
                                        MR_Word ll_backend__code_info__V_54_54;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[7], &ll_backend__code_info__V_54_54, ((MR_Box) (ll_backend__code_info__V_12_12)), ((MR_Box) (ll_backend__code_info__V_33_33)));
                                        }
                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_54_54 == (MR_Integer) 0);
                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                        if (ll_backend__code_info__succeeded)
                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_54_54;
                                        else
                                          {
                                            MR_Word ll_backend__code_info__V_55_55;

                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[2], &ll_backend__code_info__V_55_55, ((MR_Box) (ll_backend__code_info__V_13_13)), ((MR_Box) (ll_backend__code_info__V_34_34)));
                                            }
                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_55_55 == (MR_Integer) 0);
                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                            if (ll_backend__code_info__succeeded)
                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_55_55;
                                            else
                                              {
                                                MR_Word ll_backend__code_info__V_56_56;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_56_56, ll_backend__code_info__V_14_14, ll_backend__code_info__V_35_35);
                                                }
                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_56_56 == (MR_Integer) 0);
                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                if (ll_backend__code_info__succeeded)
                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_56_56;
                                                else
                                                  {
                                                    MR_Word ll_backend__code_info__V_57_57;

                                                    {
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[8], &ll_backend__code_info__V_57_57, ((MR_Box) (ll_backend__code_info__V_15_15)), ((MR_Box) (ll_backend__code_info__V_36_36)));
                                                    }
                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_57_57 == (MR_Integer) 0);
                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                    if (ll_backend__code_info__succeeded)
                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_57_57;
                                                    else
                                                      {
                                                        MR_Word ll_backend__code_info__V_58_58;
                                                        MR_Integer ll_backend__code_info__V_89_89 = (MR_Integer) ll_backend__code_info__V_16_16;
                                                        MR_Integer ll_backend__code_info__V_90_90 = (MR_Integer) ll_backend__code_info__V_37_37;

                                                        {
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_58_58, ll_backend__code_info__V_89_89, ll_backend__code_info__V_90_90);
                                                        }
                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_58_58 == (MR_Integer) 0);
                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                        if (ll_backend__code_info__succeeded)
                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_58_58;
                                                        else
                                                          {
                                                            MR_Word ll_backend__code_info__V_59_59;
                                                            MR_Integer ll_backend__code_info__V_91_91 = (MR_Integer) ll_backend__code_info__V_17_17;
                                                            MR_Integer ll_backend__code_info__V_92_92 = (MR_Integer) ll_backend__code_info__V_38_38;

                                                            {
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_59_59, ll_backend__code_info__V_91_91, ll_backend__code_info__V_92_92);
                                                            }
                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_59_59 == (MR_Integer) 0);
                                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                            if (ll_backend__code_info__succeeded)
                                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_59_59;
                                                            else
                                                              {
                                                                MR_Word ll_backend__code_info__V_60_60;
                                                                MR_Integer ll_backend__code_info__V_93_93 = (MR_Integer) ll_backend__code_info__V_18_18;
                                                                MR_Integer ll_backend__code_info__V_94_94 = (MR_Integer) ll_backend__code_info__V_39_39;

                                                                {
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_60_60, ll_backend__code_info__V_93_93, ll_backend__code_info__V_94_94);
                                                                }
                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_60_60 == (MR_Integer) 0);
                                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                                if (ll_backend__code_info__succeeded)
                                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_60_60;
                                                                else
                                                                  {
                                                                    MR_Word ll_backend__code_info__V_61_61;
                                                                    MR_Integer ll_backend__code_info__V_95_95 = (MR_Integer) ll_backend__code_info__V_19_19;
                                                                    MR_Integer ll_backend__code_info__V_96_96 = (MR_Integer) ll_backend__code_info__V_40_40;

                                                                    {
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_61_61, ll_backend__code_info__V_95_95, ll_backend__code_info__V_96_96);
                                                                    }
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_61_61 == (MR_Integer) 0);
                                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                                    if (ll_backend__code_info__succeeded)
                                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_61_61;
                                                                    else
                                                                      {
                                                                        MR_Word ll_backend__code_info__V_62_62;
                                                                        MR_Integer ll_backend__code_info__V_97_97 = (MR_Integer) ll_backend__code_info__V_20_20;
                                                                        MR_Integer ll_backend__code_info__V_98_98 = (MR_Integer) ll_backend__code_info__V_41_41;

                                                                        {
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_62_62, ll_backend__code_info__V_97_97, ll_backend__code_info__V_98_98);
                                                                        }
                                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_62_62 == (MR_Integer) 0);
                                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                                        if (ll_backend__code_info__succeeded)
                                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_62_62;
                                                                        else
                                                                          {
                                                                            MR_Word ll_backend__code_info__V_63_63;
                                                                            MR_Integer ll_backend__code_info__V_99_99 = (MR_Integer) ll_backend__code_info__V_21_21;
                                                                            MR_Integer ll_backend__code_info__V_100_100 = (MR_Integer) ll_backend__code_info__V_42_42;

                                                                            {
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_63_63, ll_backend__code_info__V_99_99, ll_backend__code_info__V_100_100);
                                                                            }
                                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_63_63 == (MR_Integer) 0);
                                                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                                            if (ll_backend__code_info__succeeded)
                                                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_63_63;
                                                                            else
                                                                              {
                                                                                MR_Word ll_backend__code_info__V_64_64;
                                                                                MR_Integer ll_backend__code_info__V_101_101 = (MR_Integer) ll_backend__code_info__V_22_22;
                                                                                MR_Integer ll_backend__code_info__V_102_102 = (MR_Integer) ll_backend__code_info__V_43_43;

                                                                                {
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_64_64, ll_backend__code_info__V_101_101, ll_backend__code_info__V_102_102);
                                                                                }
                                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_64_64 == (MR_Integer) 0);
                                                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                                                if (ll_backend__code_info__succeeded)
                                                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_64_64;
                                                                                else
                                                                                  {
                                                                                    MR_Word ll_backend__code_info__V_65_65;

                                                                                    {
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[9], &ll_backend__code_info__V_65_65, ((MR_Box) (ll_backend__code_info__V_23_23)), ((MR_Box) (ll_backend__code_info__V_44_44)));
                                                                                    }
                                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_65_65 == (MR_Integer) 0);
                                                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                                                    if (ll_backend__code_info__succeeded)
                                                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_65_65;
                                                                                    else
                                                                                      {
                                                                                        {
                                                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[4], ll_backend__code_info__HeadVar__1_1, ((MR_Box) (ll_backend__code_info__V_24_24)), ((MR_Box) (ll_backend__code_info__V_45_45)));
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

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0(
  MR_Word ll_backend__code_info__HeadVar__1_1,
  MR_Word ll_backend__code_info__HeadVar__2_2)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Integer ll_backend__code_info__CastX_45 = (MR_Integer) ll_backend__code_info__HeadVar__1_1;
    MR_Integer ll_backend__code_info__CastY_46 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;

    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_45 == ll_backend__code_info__CastY_46);
    if (ll_backend__code_info__succeeded)
      ll_backend__code_info__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__code_info__TypeInfo_54_54;
        MR_Word ll_backend__code_info__TypeInfo_55_55;
        MR_Word ll_backend__code_info__TypeInfo_56_56;
        MR_Word ll_backend__code_info__TypeInfo_57_57;
        MR_Word ll_backend__code_info__TypeInfo_58_58;
        MR_Word ll_backend__code_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer ll_backend__code_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 9)));
        MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 10)));
        MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 11)));
        MR_Word ll_backend__code_info__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 13)));
        MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 14)));
        MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer ll_backend__code_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer ll_backend__code_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word ll_backend__code_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 13)));
        MR_Word ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 14)));

        {
          ll_backend__code_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__code_info__V_3_3, ll_backend__code_info__V_24_24);
        }
        if (ll_backend__code_info__succeeded)
          {
            {
              ll_backend__code_info__succeeded = libs__globals____Unify____globals_0_0(ll_backend__code_info__V_4_4, ll_backend__code_info__V_25_25);
            }
            if (ll_backend__code_info__succeeded)
              {
                {
                  ll_backend__code_info__succeeded = ll_backend__llds____Unify____exprn_opts_0_0(ll_backend__code_info__V_5_5, ll_backend__code_info__V_26_26);
                }
                if (ll_backend__code_info__succeeded)
                  {
                    {
                      ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__code_info__V_6_6, ll_backend__code_info__V_27_27);
                    }
                    if (ll_backend__code_info__succeeded)
                      {
                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_7_7 == ll_backend__code_info__V_28_28);
                        if (ll_backend__code_info__succeeded)
                          {
                            {
                              ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ll_backend__code_info__V_8_8, ll_backend__code_info__V_29_29);
                            }
                            if (ll_backend__code_info__succeeded)
                              {
                                {
                                  ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ll_backend__code_info__V_9_9, ll_backend__code_info__V_30_30);
                                }
                                if (ll_backend__code_info__succeeded)
                                  {
                                    {
                                      ll_backend__code_info__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__code_info__V_10_10, ll_backend__code_info__V_31_31);
                                    }
                                    if (ll_backend__code_info__succeeded)
                                      {
                                        ll_backend__code_info__TypeInfo_54_54 = (MR_Word) &ll_backend__code_info_scalar_common_1[7];
                                        {
                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_54_54, ((MR_Box) (ll_backend__code_info__V_11_11)), ((MR_Box) (ll_backend__code_info__V_32_32)));
                                        }
                                        if (ll_backend__code_info__succeeded)
                                          {
                                            ll_backend__code_info__TypeInfo_55_55 = (MR_Word) &ll_backend__code_info_scalar_common_2[2];
                                            {
                                              ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_55_55, ((MR_Box) (ll_backend__code_info__V_12_12)), ((MR_Box) (ll_backend__code_info__V_33_33)));
                                            }
                                            if (ll_backend__code_info__succeeded)
                                              {
                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_13_13 == ll_backend__code_info__V_34_34);
                                                if (ll_backend__code_info__succeeded)
                                                  {
                                                    ll_backend__code_info__TypeInfo_56_56 = (MR_Word) &ll_backend__code_info_scalar_common_1[8];
                                                    {
                                                      ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_56_56, ((MR_Box) (ll_backend__code_info__V_14_14)), ((MR_Box) (ll_backend__code_info__V_35_35)));
                                                    }
                                                    if (ll_backend__code_info__succeeded)
                                                      {
                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_15_15 == ll_backend__code_info__V_36_36);
                                                        if (ll_backend__code_info__succeeded)
                                                          {
                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_16_16 == ll_backend__code_info__V_37_37);
                                                            if (ll_backend__code_info__succeeded)
                                                              {
                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_17_17 == ll_backend__code_info__V_38_38);
                                                                if (ll_backend__code_info__succeeded)
                                                                  {
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_18_18 == ll_backend__code_info__V_39_39);
                                                                    if (ll_backend__code_info__succeeded)
                                                                      {
                                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_19_19 == ll_backend__code_info__V_40_40);
                                                                        if (ll_backend__code_info__succeeded)
                                                                          {
                                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_20_20 == ll_backend__code_info__V_41_41);
                                                                            if (ll_backend__code_info__succeeded)
                                                                              {
                                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_21_21 == ll_backend__code_info__V_42_42);
                                                                                if (ll_backend__code_info__succeeded)
                                                                                  {
                                                                                    ll_backend__code_info__TypeInfo_57_57 = (MR_Word) &ll_backend__code_info_scalar_common_1[9];
                                                                                    {
                                                                                      ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_57_57, ((MR_Box) (ll_backend__code_info__V_22_22)), ((MR_Box) (ll_backend__code_info__V_43_43)));
                                                                                    }
                                                                                    if (ll_backend__code_info__succeeded)
                                                                                      {
                                                                                        ll_backend__code_info__TypeInfo_58_58 = (MR_Word) &ll_backend__code_info_scalar_common_2[4];
                                                                                        {
                                                                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_58_58, ((MR_Box) (ll_backend__code_info__V_23_23)), ((MR_Box) (ll_backend__code_info__V_44_44)));
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
    return ll_backend__code_info__succeeded;
  }
}

static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0(
  MR_Word * ll_backend__code_info__HeadVar__1_1,
  MR_Word ll_backend__code_info__HeadVar__2_2,
  MR_Word ll_backend__code_info__HeadVar__3_3)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Integer ll_backend__code_info__CastX_57 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;
    MR_Integer ll_backend__code_info__CastY_58 = (MR_Integer) ll_backend__code_info__HeadVar__3_3;

    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_57 == ll_backend__code_info__CastY_58);
    if (ll_backend__code_info__succeeded)
      *ll_backend__code_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer ll_backend__code_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer ll_backend__code_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)));
        MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 13)));
        MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 14)));
        MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 15)));
        MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 16)));
        MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 17)));
        MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer ll_backend__code_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer ll_backend__code_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 10)));
        MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 11)));
        MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)));
        MR_Word ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 13)));
        MR_Word ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 14)));
        MR_Integer ll_backend__code_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 15)));
        MR_Word ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 16)));
        MR_Word ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 17)));
        MR_Word ll_backend__code_info__V_40_40;

        {
          mercury__counter____Compare____counter_0_0(&ll_backend__code_info__V_40_40, ll_backend__code_info__V_4_4, ll_backend__code_info__V_22_22);
        }
        ll_backend__code_info__succeeded = (ll_backend__code_info__V_40_40 == (MR_Integer) 0);
        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
        if (ll_backend__code_info__succeeded)
          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_40_40;
        else
          {
            MR_Word ll_backend__code_info__V_41_41;
            MR_Integer ll_backend__code_info__V_77_77 = (MR_Integer) ll_backend__code_info__V_5_5;
            MR_Integer ll_backend__code_info__V_78_78 = (MR_Integer) ll_backend__code_info__V_23_23;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_41_41, ll_backend__code_info__V_77_77, ll_backend__code_info__V_78_78);
            }
            ll_backend__code_info__succeeded = (ll_backend__code_info__V_41_41 == (MR_Integer) 0);
            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
            if (ll_backend__code_info__succeeded)
              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_41_41;
            else
              {
                MR_Word ll_backend__code_info__V_42_42;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[0], &ll_backend__code_info__V_42_42, ((MR_Box) (ll_backend__code_info__V_6_6)), ((MR_Box) (ll_backend__code_info__V_24_24)));
                }
                ll_backend__code_info__succeeded = (ll_backend__code_info__V_42_42 == (MR_Integer) 0);
                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                if (ll_backend__code_info__succeeded)
                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_42_42;
                else
                  {
                    MR_Word ll_backend__code_info__V_43_43;
                    MR_Integer ll_backend__code_info__V_79_79 = (MR_Integer) ll_backend__code_info__V_7_7;
                    MR_Integer ll_backend__code_info__V_80_80 = (MR_Integer) ll_backend__code_info__V_25_25;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_43_43, ll_backend__code_info__V_79_79, ll_backend__code_info__V_80_80);
                    }
                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_43_43 == (MR_Integer) 0);
                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                    if (ll_backend__code_info__succeeded)
                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_43_43;
                    else
                      {
                        MR_Word ll_backend__code_info__V_44_44;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_44_44, ll_backend__code_info__V_8_8, ll_backend__code_info__V_26_26);
                        }
                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_44_44 == (MR_Integer) 0);
                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                        if (ll_backend__code_info__succeeded)
                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_44_44;
                        else
                          {
                            MR_Word ll_backend__code_info__V_45_45;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_45_45, ll_backend__code_info__V_9_9, ll_backend__code_info__V_27_27);
                            }
                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_45_45 == (MR_Integer) 0);
                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                            if (ll_backend__code_info__succeeded)
                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_45_45;
                            else
                              {
                                MR_Word ll_backend__code_info__V_46_46;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_46_46, ll_backend__code_info__V_10_10, ll_backend__code_info__V_28_28);
                                }
                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_46_46 == (MR_Integer) 0);
                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                if (ll_backend__code_info__succeeded)
                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_46_46;
                                else
                                  {
                                    MR_Word ll_backend__code_info__V_47_47;

                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[1], &ll_backend__code_info__V_47_47, ((MR_Box) (ll_backend__code_info__V_11_11)), ((MR_Box) (ll_backend__code_info__V_29_29)));
                                    }
                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_47_47 == (MR_Integer) 0);
                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                    if (ll_backend__code_info__succeeded)
                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_47_47;
                                    else
                                      {
                                        MR_Word ll_backend__code_info__V_48_48;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[1], &ll_backend__code_info__V_48_48, ((MR_Box) (ll_backend__code_info__V_12_12)), ((MR_Box) (ll_backend__code_info__V_30_30)));
                                        }
                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_48_48 == (MR_Integer) 0);
                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                        if (ll_backend__code_info__succeeded)
                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_48_48;
                                        else
                                          {
                                            MR_Word ll_backend__code_info__V_49_49;

                                            {
                                              mercury__counter____Compare____counter_0_0(&ll_backend__code_info__V_49_49, ll_backend__code_info__V_13_13, ll_backend__code_info__V_31_31);
                                            }
                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_49_49 == (MR_Integer) 0);
                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                            if (ll_backend__code_info__succeeded)
                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_49_49;
                                            else
                                              {
                                                MR_Word ll_backend__code_info__V_50_50;

                                                {
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[2], &ll_backend__code_info__V_50_50, ((MR_Box) (ll_backend__code_info__V_14_14)), ((MR_Box) (ll_backend__code_info__V_32_32)));
                                                }
                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_50_50 == (MR_Integer) 0);
                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                if (ll_backend__code_info__succeeded)
                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_50_50;
                                                else
                                                  {
                                                    MR_Word ll_backend__code_info__V_51_51;
                                                    MR_Integer ll_backend__code_info__V_81_81 = (MR_Integer) ll_backend__code_info__V_15_15;
                                                    MR_Integer ll_backend__code_info__V_82_82 = (MR_Integer) ll_backend__code_info__V_33_33;

                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_51_51, ll_backend__code_info__V_81_81, ll_backend__code_info__V_82_82);
                                                    }
                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_51_51 == (MR_Integer) 0);
                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                    if (ll_backend__code_info__succeeded)
                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_51_51;
                                                    else
                                                      {
                                                        MR_Word ll_backend__code_info__V_52_52;

                                                        {
                                                          ll_backend__global_data____Compare____static_cell_info_0_0(&ll_backend__code_info__V_52_52, ll_backend__code_info__V_16_16, ll_backend__code_info__V_34_34);
                                                        }
                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_52_52 == (MR_Integer) 0);
                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                        if (ll_backend__code_info__succeeded)
                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_52_52;
                                                        else
                                                          {
                                                            MR_Word ll_backend__code_info__V_53_53;

                                                            {
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[3], &ll_backend__code_info__V_53_53, ((MR_Box) (ll_backend__code_info__V_17_17)), ((MR_Box) (ll_backend__code_info__V_35_35)));
                                                            }
                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_53_53 == (MR_Integer) 0);
                                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                            if (ll_backend__code_info__succeeded)
                                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_53_53;
                                                            else
                                                              {
                                                                MR_Word ll_backend__code_info__V_54_54;

                                                                {
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[4], &ll_backend__code_info__V_54_54, ((MR_Box) (ll_backend__code_info__V_18_18)), ((MR_Box) (ll_backend__code_info__V_36_36)));
                                                                }
                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_54_54 == (MR_Integer) 0);
                                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                                if (ll_backend__code_info__succeeded)
                                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_54_54;
                                                                else
                                                                  {
                                                                    MR_Word ll_backend__code_info__V_55_55;

                                                                    {
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_55_55, ll_backend__code_info__V_19_19, ll_backend__code_info__V_37_37);
                                                                    }
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_55_55 == (MR_Integer) 0);
                                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                                    if (ll_backend__code_info__succeeded)
                                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_55_55;
                                                                    else
                                                                      {
                                                                        MR_Word ll_backend__code_info__V_56_56;

                                                                        {
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[5], &ll_backend__code_info__V_56_56, ((MR_Box) (ll_backend__code_info__V_20_20)), ((MR_Box) (ll_backend__code_info__V_38_38)));
                                                                        }
                                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_56_56 == (MR_Integer) 0);
                                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                                        if (ll_backend__code_info__succeeded)
                                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_56_56;
                                                                        else
                                                                          {
                                                                            {
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[6], ll_backend__code_info__HeadVar__1_1, ((MR_Box) (ll_backend__code_info__V_21_21)), ((MR_Box) (ll_backend__code_info__V_39_39)));
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

static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0(
  MR_Word ll_backend__code_info__HeadVar__1_1,
  MR_Word ll_backend__code_info__HeadVar__2_2)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Integer ll_backend__code_info__CastX_39 = (MR_Integer) ll_backend__code_info__HeadVar__1_1;
    MR_Integer ll_backend__code_info__CastY_40 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;

    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_39 == ll_backend__code_info__CastY_40);
    if (ll_backend__code_info__succeeded)
      ll_backend__code_info__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__code_info__TypeInfo_42_42;
        MR_Word ll_backend__code_info__TypeInfo_43_43;
        MR_Word ll_backend__code_info__TypeInfo_44_44;
        MR_Word ll_backend__code_info__TypeInfo_46_46;
        MR_Word ll_backend__code_info__TypeInfo_48_48;
        MR_Word ll_backend__code_info__TypeInfo_49_49;
        MR_Word ll_backend__code_info__TypeInfo_50_50;
        MR_Word ll_backend__code_info__TypeInfo_51_51;
        MR_Word ll_backend__code_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer ll_backend__code_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer ll_backend__code_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer ll_backend__code_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 10)));
        MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 11)));
        MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)));
        MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 13)));
        MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 14)));
        MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 15)));
        MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 16)));
        MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 17)));
        MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer ll_backend__code_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer ll_backend__code_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)));
        MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 13)));
        MR_Word ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 14)));
        MR_Integer ll_backend__code_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 15)));
        MR_Word ll_backend__code_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 16)));
        MR_Word ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 17)));

        {
          ll_backend__code_info__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__code_info__V_3_3, ll_backend__code_info__V_21_21);
        }
        if (ll_backend__code_info__succeeded)
          {
            ll_backend__code_info__succeeded = (ll_backend__code_info__V_4_4 == ll_backend__code_info__V_22_22);
            if (ll_backend__code_info__succeeded)
              {
                ll_backend__code_info__TypeInfo_42_42 = (MR_Word) &ll_backend__code_info_scalar_common_2[0];
                {
                  ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_42_42, ((MR_Box) (ll_backend__code_info__V_5_5)), ((MR_Box) (ll_backend__code_info__V_23_23)));
                }
                if (ll_backend__code_info__succeeded)
                  {
                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_6_6 == ll_backend__code_info__V_24_24);
                    if (ll_backend__code_info__succeeded)
                      {
                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_7_7 == ll_backend__code_info__V_25_25);
                        if (ll_backend__code_info__succeeded)
                          {
                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_8_8 == ll_backend__code_info__V_26_26);
                            if (ll_backend__code_info__succeeded)
                              {
                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_9_9 == ll_backend__code_info__V_27_27);
                                if (ll_backend__code_info__succeeded)
                                  {
                                    ll_backend__code_info__TypeInfo_43_43 = (MR_Word) &ll_backend__code_info_scalar_common_2[1];
                                    {
                                      ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_43_43, ((MR_Box) (ll_backend__code_info__V_10_10)), ((MR_Box) (ll_backend__code_info__V_28_28)));
                                    }
                                    if (ll_backend__code_info__succeeded)
                                      {
                                        ll_backend__code_info__TypeInfo_44_44 = (MR_Word) &ll_backend__code_info_scalar_common_1[1];
                                        {
                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_44_44, ((MR_Box) (ll_backend__code_info__V_11_11)), ((MR_Box) (ll_backend__code_info__V_29_29)));
                                        }
                                        if (ll_backend__code_info__succeeded)
                                          {
                                            {
                                              ll_backend__code_info__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__code_info__V_12_12, ll_backend__code_info__V_30_30);
                                            }
                                            if (ll_backend__code_info__succeeded)
                                              {
                                                ll_backend__code_info__TypeInfo_46_46 = (MR_Word) &ll_backend__code_info_scalar_common_1[2];
                                                {
                                                  ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_46_46, ((MR_Box) (ll_backend__code_info__V_13_13)), ((MR_Box) (ll_backend__code_info__V_31_31)));
                                                }
                                                if (ll_backend__code_info__succeeded)
                                                  {
                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_14_14 == ll_backend__code_info__V_32_32);
                                                    if (ll_backend__code_info__succeeded)
                                                      {
                                                        {
                                                          ll_backend__code_info__succeeded = ll_backend__global_data____Unify____static_cell_info_0_0(ll_backend__code_info__V_15_15, ll_backend__code_info__V_33_33);
                                                        }
                                                        if (ll_backend__code_info__succeeded)
                                                          {
                                                            ll_backend__code_info__TypeInfo_48_48 = (MR_Word) &ll_backend__code_info_scalar_common_1[3];
                                                            {
                                                              ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_48_48, ((MR_Box) (ll_backend__code_info__V_16_16)), ((MR_Box) (ll_backend__code_info__V_34_34)));
                                                            }
                                                            if (ll_backend__code_info__succeeded)
                                                              {
                                                                ll_backend__code_info__TypeInfo_49_49 = (MR_Word) &ll_backend__code_info_scalar_common_1[4];
                                                                {
                                                                  ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_49_49, ((MR_Box) (ll_backend__code_info__V_17_17)), ((MR_Box) (ll_backend__code_info__V_35_35)));
                                                                }
                                                                if (ll_backend__code_info__succeeded)
                                                                  {
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_18_18 == ll_backend__code_info__V_36_36);
                                                                    if (ll_backend__code_info__succeeded)
                                                                      {
                                                                        ll_backend__code_info__TypeInfo_50_50 = (MR_Word) &ll_backend__code_info_scalar_common_1[5];
                                                                        {
                                                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_50_50, ((MR_Box) (ll_backend__code_info__V_19_19)), ((MR_Box) (ll_backend__code_info__V_37_37)));
                                                                        }
                                                                        if (ll_backend__code_info__succeeded)
                                                                          {
                                                                            ll_backend__code_info__TypeInfo_51_51 = (MR_Word) &ll_backend__code_info_scalar_common_1[6];
                                                                            {
                                                                              ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_51_51, ((MR_Box) (ll_backend__code_info__V_20_20)), ((MR_Box) (ll_backend__code_info__V_38_38)));
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
    return ll_backend__code_info__succeeded;
  }
}

void MR_CALL 
ll_backend__code_info____Compare____code_info_0_0(
  MR_Word * ll_backend__code_info__HeadVar__1_1,
  MR_Word ll_backend__code_info__HeadVar__2_2,
  MR_Word ll_backend__code_info__HeadVar__3_3)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Integer ll_backend__code_info__CastX_9 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;
    MR_Integer ll_backend__code_info__CastY_10 = (MR_Integer) ll_backend__code_info__HeadVar__3_3;

    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_9 == ll_backend__code_info__CastY_10);
    if (ll_backend__code_info__succeeded)
      *ll_backend__code_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__code_info__V_8_8;

        {
          ll_backend__code_info____Compare____code_info_static_0_0(&ll_backend__code_info__V_8_8, ll_backend__code_info__V_4_4, ll_backend__code_info__V_6_6);
        }
        ll_backend__code_info__succeeded = (ll_backend__code_info__V_8_8 == (MR_Integer) 0);
        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
        if (ll_backend__code_info__succeeded)
          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_8_8;
        else
          {
            MR_Integer ll_backend__code_info__CastX_66 = (MR_Integer) ll_backend__code_info__V_5_5;
            MR_Integer ll_backend__code_info__CastY_67 = (MR_Integer) ll_backend__code_info__V_7_7;

            ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_66 == ll_backend__code_info__CastY_67);
            if (ll_backend__code_info__succeeded)
              *ll_backend__code_info__HeadVar__1_1 = (MR_Integer) 0;
            else
              {
                MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
                MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
                MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
                MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
                MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
                MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
                MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
                MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
                MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
                MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
                MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
                MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
                MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
                MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
                MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
                MR_Integer ll_backend__code_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
                MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
                MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
                MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 0)));
                MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 1)));
                MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 2)));
                MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 3)));
                MR_Integer ll_backend__code_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 4)));
                MR_Integer ll_backend__code_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 5)));
                MR_Integer ll_backend__code_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 6)));
                MR_Word ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 7)));
                MR_Word ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 8)));
                MR_Word ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 9)));
                MR_Word ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 10)));
                MR_Word ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 11)));
                MR_Word ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 12)));
                MR_Word ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 13)));
                MR_Word ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 14)));
                MR_Integer ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 15)));
                MR_Word ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 16)));
                MR_Word ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 17)));
                MR_Word ll_backend__code_info__V_49_49;

                {
                  mercury__counter____Compare____counter_0_0(&ll_backend__code_info__V_49_49, ll_backend__code_info__V_13_13, ll_backend__code_info__V_31_31);
                }
                ll_backend__code_info__succeeded = (ll_backend__code_info__V_49_49 == (MR_Integer) 0);
                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                if (ll_backend__code_info__succeeded)
                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_49_49;
                else
                  {
                    MR_Word ll_backend__code_info__V_50_50;
                    MR_Integer ll_backend__code_info__V_86_86 = (MR_Integer) ll_backend__code_info__V_14_14;
                    MR_Integer ll_backend__code_info__V_87_87 = (MR_Integer) ll_backend__code_info__V_32_32;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_50_50, ll_backend__code_info__V_86_86, ll_backend__code_info__V_87_87);
                    }
                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_50_50 == (MR_Integer) 0);
                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                    if (ll_backend__code_info__succeeded)
                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_50_50;
                    else
                      {
                        MR_Word ll_backend__code_info__V_51_51;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[0], &ll_backend__code_info__V_51_51, ((MR_Box) (ll_backend__code_info__V_15_15)), ((MR_Box) (ll_backend__code_info__V_33_33)));
                        }
                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_51_51 == (MR_Integer) 0);
                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                        if (ll_backend__code_info__succeeded)
                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_51_51;
                        else
                          {
                            MR_Word ll_backend__code_info__V_52_52;
                            MR_Integer ll_backend__code_info__V_88_88 = (MR_Integer) ll_backend__code_info__V_16_16;
                            MR_Integer ll_backend__code_info__V_89_89 = (MR_Integer) ll_backend__code_info__V_34_34;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_52_52, ll_backend__code_info__V_88_88, ll_backend__code_info__V_89_89);
                            }
                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_52_52 == (MR_Integer) 0);
                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                            if (ll_backend__code_info__succeeded)
                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_52_52;
                            else
                              {
                                MR_Word ll_backend__code_info__V_53_53;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_53_53, ll_backend__code_info__V_17_17, ll_backend__code_info__V_35_35);
                                }
                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_53_53 == (MR_Integer) 0);
                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                if (ll_backend__code_info__succeeded)
                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_53_53;
                                else
                                  {
                                    MR_Word ll_backend__code_info__V_54_54;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_54_54, ll_backend__code_info__V_18_18, ll_backend__code_info__V_36_36);
                                    }
                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_54_54 == (MR_Integer) 0);
                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                    if (ll_backend__code_info__succeeded)
                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_54_54;
                                    else
                                      {
                                        MR_Word ll_backend__code_info__V_55_55;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_55_55, ll_backend__code_info__V_19_19, ll_backend__code_info__V_37_37);
                                        }
                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_55_55 == (MR_Integer) 0);
                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                        if (ll_backend__code_info__succeeded)
                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_55_55;
                                        else
                                          {
                                            MR_Word ll_backend__code_info__V_56_56;

                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[1], &ll_backend__code_info__V_56_56, ((MR_Box) (ll_backend__code_info__V_20_20)), ((MR_Box) (ll_backend__code_info__V_38_38)));
                                            }
                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_56_56 == (MR_Integer) 0);
                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                            if (ll_backend__code_info__succeeded)
                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_56_56;
                                            else
                                              {
                                                MR_Word ll_backend__code_info__V_57_57;

                                                {
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[1], &ll_backend__code_info__V_57_57, ((MR_Box) (ll_backend__code_info__V_21_21)), ((MR_Box) (ll_backend__code_info__V_39_39)));
                                                }
                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_57_57 == (MR_Integer) 0);
                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                if (ll_backend__code_info__succeeded)
                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_57_57;
                                                else
                                                  {
                                                    MR_Word ll_backend__code_info__V_58_58;

                                                    {
                                                      mercury__counter____Compare____counter_0_0(&ll_backend__code_info__V_58_58, ll_backend__code_info__V_22_22, ll_backend__code_info__V_40_40);
                                                    }
                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_58_58 == (MR_Integer) 0);
                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                    if (ll_backend__code_info__succeeded)
                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_58_58;
                                                    else
                                                      {
                                                        MR_Word ll_backend__code_info__V_59_59;

                                                        {
                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[2], &ll_backend__code_info__V_59_59, ((MR_Box) (ll_backend__code_info__V_23_23)), ((MR_Box) (ll_backend__code_info__V_41_41)));
                                                        }
                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_59_59 == (MR_Integer) 0);
                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                        if (ll_backend__code_info__succeeded)
                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_59_59;
                                                        else
                                                          {
                                                            MR_Word ll_backend__code_info__V_60_60;
                                                            MR_Integer ll_backend__code_info__V_90_90 = (MR_Integer) ll_backend__code_info__V_24_24;
                                                            MR_Integer ll_backend__code_info__V_91_91 = (MR_Integer) ll_backend__code_info__V_42_42;

                                                            {
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_60_60, ll_backend__code_info__V_90_90, ll_backend__code_info__V_91_91);
                                                            }
                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_60_60 == (MR_Integer) 0);
                                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                            if (ll_backend__code_info__succeeded)
                                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_60_60;
                                                            else
                                                              {
                                                                MR_Word ll_backend__code_info__V_61_61;

                                                                {
                                                                  ll_backend__global_data____Compare____static_cell_info_0_0(&ll_backend__code_info__V_61_61, ll_backend__code_info__V_25_25, ll_backend__code_info__V_43_43);
                                                                }
                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_61_61 == (MR_Integer) 0);
                                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                                if (ll_backend__code_info__succeeded)
                                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_61_61;
                                                                else
                                                                  {
                                                                    MR_Word ll_backend__code_info__V_62_62;

                                                                    {
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[3], &ll_backend__code_info__V_62_62, ((MR_Box) (ll_backend__code_info__V_26_26)), ((MR_Box) (ll_backend__code_info__V_44_44)));
                                                                    }
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_62_62 == (MR_Integer) 0);
                                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                                    if (ll_backend__code_info__succeeded)
                                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_62_62;
                                                                    else
                                                                      {
                                                                        MR_Word ll_backend__code_info__V_63_63;

                                                                        {
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[4], &ll_backend__code_info__V_63_63, ((MR_Box) (ll_backend__code_info__V_27_27)), ((MR_Box) (ll_backend__code_info__V_45_45)));
                                                                        }
                                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_63_63 == (MR_Integer) 0);
                                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                                        if (ll_backend__code_info__succeeded)
                                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_63_63;
                                                                        else
                                                                          {
                                                                            MR_Word ll_backend__code_info__V_64_64;

                                                                            {
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_64_64, ll_backend__code_info__V_28_28, ll_backend__code_info__V_46_46);
                                                                            }
                                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_64_64 == (MR_Integer) 0);
                                                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                                            if (ll_backend__code_info__succeeded)
                                                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_64_64;
                                                                            else
                                                                              {
                                                                                MR_Word ll_backend__code_info__V_65_65;

                                                                                {
                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[5], &ll_backend__code_info__V_65_65, ((MR_Box) (ll_backend__code_info__V_29_29)), ((MR_Box) (ll_backend__code_info__V_47_47)));
                                                                                }
                                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_65_65 == (MR_Integer) 0);
                                                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
                                                                                if (ll_backend__code_info__succeeded)
                                                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_65_65;
                                                                                else
                                                                                  {
                                                                                    {
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[6], ll_backend__code_info__HeadVar__1_1, ((MR_Box) (ll_backend__code_info__V_30_30)), ((MR_Box) (ll_backend__code_info__V_48_48)));
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
  MR_Word ll_backend__code_info__HeadVar__1_1,
  MR_Word ll_backend__code_info__HeadVar__2_2)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Integer ll_backend__code_info__CastX_7 = (MR_Integer) ll_backend__code_info__HeadVar__1_1;
    MR_Integer ll_backend__code_info__CastY_8 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;

    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_7 == ll_backend__code_info__CastY_8);
    if (ll_backend__code_info__succeeded)
      ll_backend__code_info__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__code_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer ll_backend__code_info__CastX_51 = (MR_Integer) ll_backend__code_info__V_3_3;
        MR_Integer ll_backend__code_info__CastY_52 = (MR_Integer) ll_backend__code_info__V_5_5;

        ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_51 == ll_backend__code_info__CastY_52);
        if (ll_backend__code_info__succeeded)
          ll_backend__code_info__succeeded = MR_TRUE;
        else
          {
            MR_Word ll_backend__code_info__TypeInfo_54_60;
            MR_Word ll_backend__code_info__TypeInfo_55_61;
            MR_Word ll_backend__code_info__TypeInfo_56_62;
            MR_Word ll_backend__code_info__TypeInfo_57_63;
            MR_Word ll_backend__code_info__TypeInfo_58_64;
            MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 0)));
            MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 1)));
            MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 2)));
            MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 3)));
            MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 4)));
            MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 5)));
            MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 6)));
            MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 7)));
            MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 8)));
            MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 9)));
            MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 10)));
            MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 11)));
            MR_Word ll_backend__code_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) & (MR_Integer) 1);
            MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            MR_Word ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
            MR_Word ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
            MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 13)));
            MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 14)));
            MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
            MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
            MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
            MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
            MR_Integer ll_backend__code_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
            MR_Word ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
            MR_Word ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
            MR_Word ll_backend__code_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
            MR_Word ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
            MR_Word ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
            MR_Integer ll_backend__code_info__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
            MR_Word ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
            MR_Word ll_backend__code_info__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
            MR_Word ll_backend__code_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word ll_backend__code_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word ll_backend__code_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word ll_backend__code_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            MR_Word ll_backend__code_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
            MR_Word ll_backend__code_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
            MR_Word ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
            MR_Word ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));

            {
              ll_backend__code_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__code_info__V_9_9, ll_backend__code_info__V_30_30);
            }
            if (ll_backend__code_info__succeeded)
              {
                {
                  ll_backend__code_info__succeeded = libs__globals____Unify____globals_0_0(ll_backend__code_info__V_10_10, ll_backend__code_info__V_31_31);
                }
                if (ll_backend__code_info__succeeded)
                  {
                    {
                      ll_backend__code_info__succeeded = ll_backend__llds____Unify____exprn_opts_0_0(ll_backend__code_info__V_11_11, ll_backend__code_info__V_32_32);
                    }
                    if (ll_backend__code_info__succeeded)
                      {
                        {
                          ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__code_info__V_12_12, ll_backend__code_info__V_33_33);
                        }
                        if (ll_backend__code_info__succeeded)
                          {
                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_13_13 == ll_backend__code_info__V_34_34);
                            if (ll_backend__code_info__succeeded)
                              {
                                {
                                  ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ll_backend__code_info__V_14_14, ll_backend__code_info__V_35_35);
                                }
                                if (ll_backend__code_info__succeeded)
                                  {
                                    {
                                      ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ll_backend__code_info__V_15_15, ll_backend__code_info__V_36_36);
                                    }
                                    if (ll_backend__code_info__succeeded)
                                      {
                                        {
                                          ll_backend__code_info__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__code_info__V_16_16, ll_backend__code_info__V_37_37);
                                        }
                                        if (ll_backend__code_info__succeeded)
                                          {
                                            ll_backend__code_info__TypeInfo_54_60 = (MR_Word) &ll_backend__code_info_scalar_common_1[7];
                                            {
                                              ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_54_60, ((MR_Box) (ll_backend__code_info__V_17_17)), ((MR_Box) (ll_backend__code_info__V_38_38)));
                                            }
                                            if (ll_backend__code_info__succeeded)
                                              {
                                                ll_backend__code_info__TypeInfo_55_61 = (MR_Word) &ll_backend__code_info_scalar_common_2[2];
                                                {
                                                  ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_55_61, ((MR_Box) (ll_backend__code_info__V_18_18)), ((MR_Box) (ll_backend__code_info__V_39_39)));
                                                }
                                                if (ll_backend__code_info__succeeded)
                                                  {
                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_19_19 == ll_backend__code_info__V_40_40);
                                                    if (ll_backend__code_info__succeeded)
                                                      {
                                                        ll_backend__code_info__TypeInfo_56_62 = (MR_Word) &ll_backend__code_info_scalar_common_1[8];
                                                        {
                                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_56_62, ((MR_Box) (ll_backend__code_info__V_20_20)), ((MR_Box) (ll_backend__code_info__V_41_41)));
                                                        }
                                                        if (ll_backend__code_info__succeeded)
                                                          {
                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_21_21 == ll_backend__code_info__V_42_42);
                                                            if (ll_backend__code_info__succeeded)
                                                              {
                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_22_22 == ll_backend__code_info__V_43_43);
                                                                if (ll_backend__code_info__succeeded)
                                                                  {
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_23_23 == ll_backend__code_info__V_44_44);
                                                                    if (ll_backend__code_info__succeeded)
                                                                      {
                                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_24_24 == ll_backend__code_info__V_45_45);
                                                                        if (ll_backend__code_info__succeeded)
                                                                          {
                                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_25_25 == ll_backend__code_info__V_46_46);
                                                                            if (ll_backend__code_info__succeeded)
                                                                              {
                                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_26_26 == ll_backend__code_info__V_47_47);
                                                                                if (ll_backend__code_info__succeeded)
                                                                                  {
                                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_27_27 == ll_backend__code_info__V_48_48);
                                                                                    if (ll_backend__code_info__succeeded)
                                                                                      {
                                                                                        ll_backend__code_info__TypeInfo_57_63 = (MR_Word) &ll_backend__code_info_scalar_common_1[9];
                                                                                        {
                                                                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_57_63, ((MR_Box) (ll_backend__code_info__V_28_28)), ((MR_Box) (ll_backend__code_info__V_49_49)));
                                                                                        }
                                                                                        if (ll_backend__code_info__succeeded)
                                                                                          {
                                                                                            ll_backend__code_info__TypeInfo_58_64 = (MR_Word) &ll_backend__code_info_scalar_common_2[4];
                                                                                            {
                                                                                              ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_58_64, ((MR_Box) (ll_backend__code_info__V_29_29)), ((MR_Box) (ll_backend__code_info__V_50_50)));
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
        if (ll_backend__code_info__succeeded)
          {
            ll_backend__code_info__succeeded = ll_backend__code_info____Unify____code_info_persistent_0_0(ll_backend__code_info__V_4_4, ll_backend__code_info__V_6_6);
          }
      }
    return ll_backend__code_info__succeeded;
  }
}

MR_Integer MR_CALL 
ll_backend__code_info__round_det_stack_frame_size_2_f_0(
  MR_Word ll_backend__code_info__CI_4,
  MR_Integer ll_backend__code_info__NumSlots_5)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Integer ll_backend__code_info__NumSlotsRoundup_6;
    MR_Word ll_backend__code_info__ExprnOpts_7;
    MR_Word ll_backend__code_info__V_8_8;
    MR_Word ll_backend__code_info__V_12_12;
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Word ll_backend__code_info__V_16_16;
    MR_Integer ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Integer ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Word ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_32_32;
    MR_Word ll_backend__code_info__V_33_33;

    {
      ll_backend__code_info__succeeded = mercury__int__odd_1_p_0(ll_backend__code_info__NumSlots_5);
    }
    if (ll_backend__code_info__succeeded)
      {
        ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
        ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
        ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 0)));
        ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 1)));
        ll_backend__code_info__ExprnOpts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 2)));
        ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 3)));
        ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 4)));
        ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 5)));
        ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 6)));
        ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 7)));
        ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 8)));
        ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 9)));
        ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 10)));
        ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 11)));
        ll_backend__code_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) & (MR_Integer) 1);
        ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 13)));
        ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 14)));
        {
          ll_backend__code_info__V_8_8 = ll_backend__llds__get_det_stack_float_width_1_f_0(ll_backend__code_info__ExprnOpts_7);
        }
        ll_backend__code_info__succeeded = (ll_backend__code_info__V_8_8 == (MR_Integer) 1);
      }
    if (ll_backend__code_info__succeeded)
      {
        ll_backend__code_info__NumSlotsRoundup_6 = (ll_backend__code_info__NumSlots_5 + (MR_Integer) 1);
      }
    else
      ll_backend__code_info__NumSlotsRoundup_6 = ll_backend__code_info__NumSlots_5;
    return ll_backend__code_info__NumSlotsRoundup_6;
  }
}

void MR_CALL 
ll_backend__code_info__get_total_stackslot_count_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Integer * ll_backend__code_info__NumSlots_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Integer ll_backend__code_info__SlotsForVars_5;
    MR_Integer ll_backend__code_info__SlotsForTemps_6;
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Word ll_backend__code_info__V_35_35;
    MR_Word ll_backend__code_info__V_36_36;
    MR_Word ll_backend__code_info__V_37_37;
    MR_Word ll_backend__code_info__V_38_38;
    MR_Integer ll_backend__code_info__V_39_39;
    MR_Integer ll_backend__code_info__V_40_40;
    MR_Word ll_backend__code_info__V_41_41;
    MR_Word ll_backend__code_info__V_42_42;
    MR_Word ll_backend__code_info__V_43_43;
    MR_Word ll_backend__code_info__V_44_44;
    MR_Word ll_backend__code_info__V_45_45;
    MR_Word ll_backend__code_info__V_46_46;
    MR_Word ll_backend__code_info__V_47_47;
    MR_Word ll_backend__code_info__V_48_48;
    MR_Integer ll_backend__code_info__V_49_49;
    MR_Word ll_backend__code_info__V_50_50;
    MR_Word ll_backend__code_info__V_51_51;

    ll_backend__code_info__SlotsForVars_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
    ll_backend__code_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 0)));
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 1)));
    ll_backend__code_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 2)));
    ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 3)));
    ll_backend__code_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 4)));
    ll_backend__code_info__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 5)));
    ll_backend__code_info__SlotsForTemps_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 6)));
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 7)));
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 8)));
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 9)));
    ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 10)));
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 11)));
    ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)));
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 13)));
    ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 14)));
    ll_backend__code_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 15)));
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 16)));
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 17)));
    *ll_backend__code_info__NumSlots_4 = (ll_backend__code_info__SlotsForVars_5 + ll_backend__code_info__SlotsForTemps_6);
  }
}

void MR_CALL 
ll_backend__code_info__get_variable_slot_3_p_0(
  MR_Word ll_backend__code_info__CI_4,
  MR_Word ll_backend__code_info__Var_5,
  MR_Word * ll_backend__code_info__Slot_6)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__StackSlots_7;
    MR_Word ll_backend__code_info__ProcInfo_28;
    MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_39_39;
    MR_Word ll_backend__code_info__V_40_40;
    MR_Word ll_backend__code_info__V_41_41;
    MR_Integer ll_backend__code_info__V_42_42;
    MR_Word ll_backend__code_info__V_43_43;
    MR_Word ll_backend__code_info__V_44_44;
    MR_Word ll_backend__code_info__V_45_45;
    MR_Word ll_backend__code_info__V_46_46;
    MR_Word ll_backend__code_info__V_47_47;
    MR_Word ll_backend__code_info__V_48_48;
    MR_Word ll_backend__code_info__V_49_49;
    MR_Word ll_backend__code_info__V_50_50;
    MR_Word ll_backend__code_info__V_51_51;
    MR_Word ll_backend__code_info__V_52_52;
    MR_Word ll_backend__code_info__SlotLocn_8;
    MR_Box ll_backend__code_info__conv0_SlotLocn_8;

    ll_backend__code_info__ProcInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 6)));
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 7)));
    ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 8)));
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 9)));
    ll_backend__code_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 10)));
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 11)));
    ll_backend__code_info__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 13)));
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 14)));
    {
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__code_info__ProcInfo_28, &ll_backend__code_info__StackSlots_7);
    }
    {
      ll_backend__code_info__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__code_info__StackSlots_7, ((MR_Box) (ll_backend__code_info__Var_5)), &ll_backend__code_info__conv0_SlotLocn_8);
    }
    if (ll_backend__code_info__succeeded)
      {
        ll_backend__code_info__SlotLocn_8 = ((MR_Word) ll_backend__code_info__conv0_SlotLocn_8);
        ll_backend__code_info__succeeded = MR_TRUE;
      }
    if (ll_backend__code_info__succeeded)
      {
        *ll_backend__code_info__Slot_6 = ll_backend__llds__stack_slot_to_lval_1_f_0(ll_backend__code_info__SlotLocn_8);
      }
    else
      {
        MR_String ll_backend__code_info__Name_9;
        MR_Integer ll_backend__code_info__Num_10;
        MR_String ll_backend__code_info__NumStr_11;
        MR_String ll_backend__code_info__Str_12;
        MR_String ll_backend__code_info__V_14_14;
        MR_String ll_backend__code_info__V_15_15;
        MR_String ll_backend__code_info__V_17_17;
        MR_String ll_backend__code_info__V_19_19;
        MR_Word ll_backend__code_info__Varset_56;
        MR_Word ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
        MR_Word ll_backend__code_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 1)));
        MR_Word ll_backend__code_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 2)));
        MR_Word ll_backend__code_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 3)));
        MR_Integer ll_backend__code_info__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 4)));
        MR_Word ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 5)));
        MR_Word ll_backend__code_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 6)));
        MR_Word ll_backend__code_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 7)));
        MR_Word ll_backend__code_info__V_70_70;
        MR_Integer ll_backend__code_info__V_71_71;
        MR_Word ll_backend__code_info__V_72_72;
        MR_Word ll_backend__code_info__V_73_73;
        MR_Word ll_backend__code_info__V_74_74;
        MR_Word ll_backend__code_info__V_75_75;
        MR_Word ll_backend__code_info__V_76_76;
        MR_Word ll_backend__code_info__V_77_77;
        MR_Word ll_backend__code_info__V_78_78;
        MR_Word ll_backend__code_info__V_79_79;
        MR_Word ll_backend__code_info__V_80_80;
        MR_Word ll_backend__code_info__V_81_81;

        ll_backend__code_info__Varset_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 8)));
        ll_backend__code_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 9)));
        ll_backend__code_info__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 10)));
        ll_backend__code_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 11)));
        ll_backend__code_info__V_73_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) & (MR_Integer) 1);
        ll_backend__code_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        ll_backend__code_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        ll_backend__code_info__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        ll_backend__code_info__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        ll_backend__code_info__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        ll_backend__code_info__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        ll_backend__code_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 13)));
        ll_backend__code_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 14)));
        {
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__code_info__Varset_56, ll_backend__code_info__Var_5, &ll_backend__code_info__Name_9);
        }
        {
          mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__code_info__Var_5, &ll_backend__code_info__Num_10);
        }
        {
          mercury__string__int_to_string_2_p_0(ll_backend__code_info__Num_10, &ll_backend__code_info__NumStr_11);
        }
        {
          ll_backend__code_info__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__code_info__NumStr_11, (MR_String) ") not found");
        }
        {
          ll_backend__code_info__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__code_info__V_19_19);
        }
        {
          ll_backend__code_info__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "\' ", ll_backend__code_info__V_17_17);
        }
        {
          ll_backend__code_info__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__code_info__Name_9, ll_backend__code_info__V_15_15);
        }
        {
          ll_backend__code_info__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "variable \140", ll_backend__code_info__V_14_14);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.get_variable_slot\'/3", ll_backend__code_info__Str_12);
          return;
        }
      }
  }
}

void MR_CALL 
ll_backend__code_info__add_out_of_line_code_3_p_0(
  MR_Word ll_backend__code_info__NewCode_4,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_8,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_9)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__Code0_6;
    MR_Word ll_backend__code_info__Code_7;
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_12_12;
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_32_32;
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 13)));
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 14)));
    MR_Integer ll_backend__code_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 15)));
    MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 16)));
    MR_Word ll_backend__code_info__V_33_33;
    MR_Word ll_backend__code_info__V_34_34;
    MR_Word ll_backend__code_info__V_35_35;
    MR_Word ll_backend__code_info__V_36_36;
    MR_Integer ll_backend__code_info__V_37_37;
    MR_Integer ll_backend__code_info__V_38_38;
    MR_Integer ll_backend__code_info__V_39_39;
    MR_Word ll_backend__code_info__V_40_40;
    MR_Word ll_backend__code_info__V_41_41;
    MR_Word ll_backend__code_info__V_42_42;
    MR_Word ll_backend__code_info__V_43_43;
    MR_Word ll_backend__code_info__V_44_44;
    MR_Word ll_backend__code_info__V_45_45;
    MR_Word ll_backend__code_info__V_46_46;
    MR_Word ll_backend__code_info__V_47_47;
    MR_Integer ll_backend__code_info__V_48_48;
    MR_Word ll_backend__code_info__V_49_49;
    MR_Word ll_backend__code_info__V_50_50;

    ll_backend__code_info__Code0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 17)));
    {
      ll_backend__code_info__Code_7 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__code_info__Code0_6, ll_backend__code_info__NewCode_4);
    }
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 0)));
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 1)));
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 2)));
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 3)));
    ll_backend__code_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 4)));
    ll_backend__code_info__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 5)));
    ll_backend__code_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 6)));
    ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 7)));
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 8)));
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 9)));
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 10)));
    ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 11)));
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)));
    ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 13)));
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 14)));
    ll_backend__code_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 15)));
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 16)));
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 17)));
    {
      ll_backend__code_info__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 0) = ((MR_Box) (ll_backend__code_info__V_33_33));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 1) = ((MR_Box) (ll_backend__code_info__V_34_34));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 2) = ((MR_Box) (ll_backend__code_info__V_35_35));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 3) = ((MR_Box) (ll_backend__code_info__V_36_36));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 4) = ((MR_Box) (ll_backend__code_info__V_37_37));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 5) = ((MR_Box) (ll_backend__code_info__V_38_38));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 6) = ((MR_Box) (ll_backend__code_info__V_39_39));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 7) = ((MR_Box) (ll_backend__code_info__V_40_40));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 8) = ((MR_Box) (ll_backend__code_info__V_41_41));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 9) = ((MR_Box) (ll_backend__code_info__V_42_42));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 10) = ((MR_Box) (ll_backend__code_info__V_43_43));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 11) = ((MR_Box) (ll_backend__code_info__V_44_44));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 12) = ((MR_Box) (ll_backend__code_info__V_45_45));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 13) = ((MR_Box) (ll_backend__code_info__V_46_46));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 14) = ((MR_Box) (ll_backend__code_info__V_47_47));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 15) = ((MR_Box) (ll_backend__code_info__V_48_48));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 16) = ((MR_Box) (ll_backend__code_info__V_49_49));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 17) = ((MR_Box) (ll_backend__code_info__Code_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_32_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
    }
  }
}

void MR_CALL 
ll_backend__code_info__get_containing_goal_map_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__ContainingGoalMap_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__MaybeContainingGoalMap_5;
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 9)));
    MR_Integer ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_32_32;

    ll_backend__code_info__MaybeContainingGoalMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 13)));
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 14)));
    if ((ll_backend__code_info__MaybeContainingGoalMap_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.get_containing_goal_map\'/2", (MR_String) "no map");
          return;
        }
      }
    else
      *ll_backend__code_info__ContainingGoalMap_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__MaybeContainingGoalMap_5, (MR_Integer) 0)));
  }
}

MR_Word MR_CALL 
ll_backend__code_info__should_add_region_ops_2_f_0(
  MR_Word ll_backend__code_info__CodeInfo_4,
  MR_Word ll_backend__code_info___GoalInfo_5)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__AddRegionOps_6;

    {
      ll_backend__code_info__AddRegionOps_6 = ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_114_101_103_105_111_110_95_111_112_115_95_95_91_50_93_95_48_2_f_0(ll_backend__code_info__CodeInfo_4);
    }
    return ll_backend__code_info__AddRegionOps_6;
  }
}

MR_Word MR_CALL 
ll_backend__code_info__should_add_trail_ops_2_f_0(
  MR_Word ll_backend__code_info__CodeInfo_4,
  MR_Word ll_backend__code_info___GoalInfo_5)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__AddTrailOps_6;

    {
      ll_backend__code_info__AddTrailOps_6 = ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_116_114_97_105_108_95_111_112_115_95_95_91_50_93_95_48_2_f_0(ll_backend__code_info__CodeInfo_4);
    }
    return ll_backend__code_info__AddTrailOps_6;
  }
}

void MR_CALL 
ll_backend__code_info__add_alloc_site_info_6_p_0(
  MR_Word ll_backend__code_info__Context_7,
  MR_String ll_backend__code_info__Type_8,
  MR_Integer ll_backend__code_info__Size_9,
  MR_Word * ll_backend__code_info__AllocId_10,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_16,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_17)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__ProcLabel_12;
    MR_Word ll_backend__code_info__AllocSite_13;
    MR_Word ll_backend__code_info__AllocSites0_14;
    MR_Word ll_backend__code_info__AllocSites_15;
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_16, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_16, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_70_70;
    MR_Word ll_backend__code_info__V_71_71;
    MR_Word ll_backend__code_info__V_72_72;
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_32_32;
    MR_Integer ll_backend__code_info__V_33_33;
    MR_Word ll_backend__code_info__V_34_34;
    MR_Word ll_backend__code_info__V_35_35;
    MR_Word ll_backend__code_info__V_36_36;
    MR_Word ll_backend__code_info__V_37_37;
    MR_Word ll_backend__code_info__V_38_38;
    MR_Word ll_backend__code_info__V_39_39;
    MR_Word ll_backend__code_info__V_40_40;
    MR_Word ll_backend__code_info__V_41_41;
    MR_Word ll_backend__code_info__V_42_42;
    MR_Word ll_backend__code_info__V_43_43;
    MR_Word ll_backend__code_info__V_48_48;
    MR_Word ll_backend__code_info__V_49_49;
    MR_Word ll_backend__code_info__V_50_50;
    MR_Word ll_backend__code_info__V_51_51;
    MR_Integer ll_backend__code_info__V_52_52;
    MR_Integer ll_backend__code_info__V_53_53;
    MR_Integer ll_backend__code_info__V_54_54;
    MR_Word ll_backend__code_info__V_55_55;
    MR_Word ll_backend__code_info__V_56_56;
    MR_Word ll_backend__code_info__V_57_57;
    MR_Word ll_backend__code_info__V_58_58;
    MR_Word ll_backend__code_info__V_59_59;
    MR_Word ll_backend__code_info__V_60_60;
    MR_Word ll_backend__code_info__V_61_61;
    MR_Integer ll_backend__code_info__V_62_62;
    MR_Word ll_backend__code_info__V_63_63;
    MR_Word ll_backend__code_info__V_64_64;
    MR_Word ll_backend__code_info__V_73_73;
    MR_Word ll_backend__code_info__V_74_74;
    MR_Word ll_backend__code_info__V_75_75;
    MR_Word ll_backend__code_info__V_76_76;
    MR_Integer ll_backend__code_info__V_77_77;
    MR_Integer ll_backend__code_info__V_78_78;
    MR_Integer ll_backend__code_info__V_79_79;
    MR_Word ll_backend__code_info__V_80_80;
    MR_Word ll_backend__code_info__V_81_81;
    MR_Word ll_backend__code_info__V_82_82;
    MR_Word ll_backend__code_info__V_83_83;
    MR_Word ll_backend__code_info__V_84_84;
    MR_Word ll_backend__code_info__V_85_85;
    MR_Word ll_backend__code_info__V_87_87;
    MR_Integer ll_backend__code_info__V_88_88;
    MR_Word ll_backend__code_info__V_89_89;
    MR_Word ll_backend__code_info__V_90_90;
    MR_Word ll_backend__code_info__V_86_86;

    ll_backend__code_info__ProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 7)));
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 8)));
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 9)));
    ll_backend__code_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 10)));
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 11)));
    ll_backend__code_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 13)));
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 14)));
    {
      ll_backend__code_info__AllocSite_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__AllocSite_13, 0) = ((MR_Box) (ll_backend__code_info__ProcLabel_12));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__AllocSite_13, 1) = ((MR_Box) (ll_backend__code_info__Context_7));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__AllocSite_13, 2) = ((MR_Box) (ll_backend__code_info__Type_8));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__AllocSite_13, 3) = ((MR_Box) (ll_backend__code_info__Size_9));
    }
    *ll_backend__code_info__AllocId_10 = (MR_Word) ll_backend__code_info__AllocSite_13;
    ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 0)));
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 1)));
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 2)));
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 3)));
    ll_backend__code_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 4)));
    ll_backend__code_info__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 5)));
    ll_backend__code_info__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 6)));
    ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 7)));
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 8)));
    ll_backend__code_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 9)));
    ll_backend__code_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 10)));
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 11)));
    ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)));
    ll_backend__code_info__AllocSites0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 13)));
    ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 14)));
    ll_backend__code_info__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 15)));
    ll_backend__code_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 16)));
    ll_backend__code_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 17)));
    {
      mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0, ((MR_Box) (ll_backend__code_info__AllocSite_13)), ll_backend__code_info__AllocSites0_14, &ll_backend__code_info__AllocSites_15);
    }
    ll_backend__code_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_16, (MR_Integer) 0)));
    ll_backend__code_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_16, (MR_Integer) 1)));
    ll_backend__code_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 0)));
    ll_backend__code_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 1)));
    ll_backend__code_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 2)));
    ll_backend__code_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 3)));
    ll_backend__code_info__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 4)));
    ll_backend__code_info__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 5)));
    ll_backend__code_info__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 6)));
    ll_backend__code_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 7)));
    ll_backend__code_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 8)));
    ll_backend__code_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 9)));
    ll_backend__code_info__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 10)));
    ll_backend__code_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 11)));
    ll_backend__code_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 12)));
    ll_backend__code_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 13)));
    ll_backend__code_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 14)));
    ll_backend__code_info__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 15)));
    ll_backend__code_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 16)));
    ll_backend__code_info__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 17)));
    {
      ll_backend__code_info__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 0) = ((MR_Box) (ll_backend__code_info__V_73_73));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 1) = ((MR_Box) (ll_backend__code_info__V_74_74));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 2) = ((MR_Box) (ll_backend__code_info__V_75_75));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 3) = ((MR_Box) (ll_backend__code_info__V_76_76));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 4) = ((MR_Box) (ll_backend__code_info__V_77_77));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 5) = ((MR_Box) (ll_backend__code_info__V_78_78));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 6) = ((MR_Box) (ll_backend__code_info__V_79_79));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 7) = ((MR_Box) (ll_backend__code_info__V_80_80));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 8) = ((MR_Box) (ll_backend__code_info__V_81_81));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 9) = ((MR_Box) (ll_backend__code_info__V_82_82));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 10) = ((MR_Box) (ll_backend__code_info__V_83_83));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 11) = ((MR_Box) (ll_backend__code_info__V_84_84));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 12) = ((MR_Box) (ll_backend__code_info__V_85_85));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 13) = ((MR_Box) (ll_backend__code_info__AllocSites_15));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 14) = ((MR_Box) (ll_backend__code_info__V_87_87));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 15) = ((MR_Box) (ll_backend__code_info__V_88_88));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 16) = ((MR_Box) (ll_backend__code_info__V_89_89));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 17) = ((MR_Box) (ll_backend__code_info__V_90_90));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_72_72));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_71_71));
    }
  }
}

void MR_CALL 
ll_backend__code_info__add_vector_static_cell_5_p_0(
  MR_Word ll_backend__code_info__Types_6,
  MR_Word ll_backend__code_info__Vector_7,
  MR_Word * ll_backend__code_info__DataAddr_8,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_12,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_13)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__StaticCellInfo0_10;
    MR_Word ll_backend__code_info__StaticCellInfo_11;
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_12, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_41_41;
    MR_Word ll_backend__code_info__V_42_42;
    MR_Word ll_backend__code_info__V_43_43;
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_12, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_32_32;
    MR_Integer ll_backend__code_info__V_33_33;
    MR_Word ll_backend__code_info__V_34_34;
    MR_Word ll_backend__code_info__V_35_35;
    MR_Word ll_backend__code_info__V_44_44;
    MR_Word ll_backend__code_info__V_45_45;
    MR_Word ll_backend__code_info__V_46_46;
    MR_Word ll_backend__code_info__V_47_47;
    MR_Integer ll_backend__code_info__V_48_48;
    MR_Integer ll_backend__code_info__V_49_49;
    MR_Integer ll_backend__code_info__V_50_50;
    MR_Word ll_backend__code_info__V_51_51;
    MR_Word ll_backend__code_info__V_52_52;
    MR_Word ll_backend__code_info__V_53_53;
    MR_Word ll_backend__code_info__V_54_54;
    MR_Word ll_backend__code_info__V_55_55;
    MR_Word ll_backend__code_info__V_57_57;
    MR_Word ll_backend__code_info__V_58_58;
    MR_Integer ll_backend__code_info__V_59_59;
    MR_Word ll_backend__code_info__V_60_60;
    MR_Word ll_backend__code_info__V_61_61;
    MR_Word ll_backend__code_info__V_56_56;

    ll_backend__code_info__StaticCellInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 12)));
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 13)));
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 14)));
    ll_backend__code_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 15)));
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 16)));
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 17)));
    {
      ll_backend__global_data__add_vector_static_cell_5_p_0(ll_backend__code_info__Types_6, ll_backend__code_info__Vector_7, ll_backend__code_info__DataAddr_8, ll_backend__code_info__StaticCellInfo0_10, &ll_backend__code_info__StaticCellInfo_11);
    }
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_12, (MR_Integer) 0)));
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_12, (MR_Integer) 1)));
    ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 0)));
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 1)));
    ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 2)));
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 3)));
    ll_backend__code_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 4)));
    ll_backend__code_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 5)));
    ll_backend__code_info__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 6)));
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 7)));
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 8)));
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 9)));
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 10)));
    ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 11)));
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 12)));
    ll_backend__code_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 13)));
    ll_backend__code_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 14)));
    ll_backend__code_info__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 15)));
    ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 16)));
    ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 17)));
    {
      ll_backend__code_info__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 0) = ((MR_Box) (ll_backend__code_info__V_44_44));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 1) = ((MR_Box) (ll_backend__code_info__V_45_45));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 2) = ((MR_Box) (ll_backend__code_info__V_46_46));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 3) = ((MR_Box) (ll_backend__code_info__V_47_47));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 4) = ((MR_Box) (ll_backend__code_info__V_48_48));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 5) = ((MR_Box) (ll_backend__code_info__V_49_49));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 6) = ((MR_Box) (ll_backend__code_info__V_50_50));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 7) = ((MR_Box) (ll_backend__code_info__V_51_51));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 8) = ((MR_Box) (ll_backend__code_info__V_52_52));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 9) = ((MR_Box) (ll_backend__code_info__V_53_53));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 10) = ((MR_Box) (ll_backend__code_info__V_54_54));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 11) = ((MR_Box) (ll_backend__code_info__V_55_55));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 12) = ((MR_Box) (ll_backend__code_info__StaticCellInfo_11));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 13) = ((MR_Box) (ll_backend__code_info__V_57_57));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 14) = ((MR_Box) (ll_backend__code_info__V_58_58));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 15) = ((MR_Box) (ll_backend__code_info__V_59_59));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 16) = ((MR_Box) (ll_backend__code_info__V_60_60));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 17) = ((MR_Box) (ll_backend__code_info__V_61_61));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_43_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_42_42));
    }
  }
}

void MR_CALL 
ll_backend__code_info__add_scalar_static_cell_natural_types_4_p_0(
  MR_Word ll_backend__code_info__Rvals_5,
  MR_Word * ll_backend__code_info__DataAddr_6,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_10,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_11)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__StaticCellInfo0_8;
    MR_Word ll_backend__code_info__StaticCellInfo_9;
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_39_39;
    MR_Word ll_backend__code_info__V_40_40;
    MR_Word ll_backend__code_info__V_41_41;
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Integer ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_32_32;
    MR_Word ll_backend__code_info__V_33_33;
    MR_Word ll_backend__code_info__V_42_42;
    MR_Word ll_backend__code_info__V_43_43;
    MR_Word ll_backend__code_info__V_44_44;
    MR_Word ll_backend__code_info__V_45_45;
    MR_Integer ll_backend__code_info__V_46_46;
    MR_Integer ll_backend__code_info__V_47_47;
    MR_Integer ll_backend__code_info__V_48_48;
    MR_Word ll_backend__code_info__V_49_49;
    MR_Word ll_backend__code_info__V_50_50;
    MR_Word ll_backend__code_info__V_51_51;
    MR_Word ll_backend__code_info__V_52_52;
    MR_Word ll_backend__code_info__V_53_53;
    MR_Word ll_backend__code_info__V_55_55;
    MR_Word ll_backend__code_info__V_56_56;
    MR_Integer ll_backend__code_info__V_57_57;
    MR_Word ll_backend__code_info__V_58_58;
    MR_Word ll_backend__code_info__V_59_59;
    MR_Word ll_backend__code_info__V_54_54;

    ll_backend__code_info__StaticCellInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)));
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 13)));
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 14)));
    ll_backend__code_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 15)));
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 16)));
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 17)));
    {
      ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(ll_backend__code_info__Rvals_5, ll_backend__code_info__DataAddr_6, ll_backend__code_info__StaticCellInfo0_8, &ll_backend__code_info__StaticCellInfo_9);
    }
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 0)));
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 1)));
    ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 2)));
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 3)));
    ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 4)));
    ll_backend__code_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 5)));
    ll_backend__code_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 6)));
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 7)));
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 8)));
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 9)));
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 10)));
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 11)));
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)));
    ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 13)));
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 14)));
    ll_backend__code_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 15)));
    ll_backend__code_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 16)));
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 17)));
    {
      ll_backend__code_info__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 0) = ((MR_Box) (ll_backend__code_info__V_42_42));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 1) = ((MR_Box) (ll_backend__code_info__V_43_43));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 2) = ((MR_Box) (ll_backend__code_info__V_44_44));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 3) = ((MR_Box) (ll_backend__code_info__V_45_45));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 4) = ((MR_Box) (ll_backend__code_info__V_46_46));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 5) = ((MR_Box) (ll_backend__code_info__V_47_47));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 6) = ((MR_Box) (ll_backend__code_info__V_48_48));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 7) = ((MR_Box) (ll_backend__code_info__V_49_49));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 8) = ((MR_Box) (ll_backend__code_info__V_50_50));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 9) = ((MR_Box) (ll_backend__code_info__V_51_51));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 10) = ((MR_Box) (ll_backend__code_info__V_52_52));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 11) = ((MR_Box) (ll_backend__code_info__V_53_53));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 12) = ((MR_Box) (ll_backend__code_info__StaticCellInfo_9));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 13) = ((MR_Box) (ll_backend__code_info__V_55_55));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 14) = ((MR_Box) (ll_backend__code_info__V_56_56));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 15) = ((MR_Box) (ll_backend__code_info__V_57_57));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 16) = ((MR_Box) (ll_backend__code_info__V_58_58));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 17) = ((MR_Box) (ll_backend__code_info__V_59_59));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_41_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_40_40));
    }
  }
}

void MR_CALL 
ll_backend__code_info__add_scalar_static_cell_4_p_0(
  MR_Word ll_backend__code_info__RvalsTypes_5,
  MR_Word * ll_backend__code_info__DataAddr_6,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_10,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_11)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__StaticCellInfo0_8;
    MR_Word ll_backend__code_info__StaticCellInfo_9;
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_39_39;
    MR_Word ll_backend__code_info__V_40_40;
    MR_Word ll_backend__code_info__V_41_41;
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Integer ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_32_32;
    MR_Word ll_backend__code_info__V_33_33;
    MR_Word ll_backend__code_info__V_42_42;
    MR_Word ll_backend__code_info__V_43_43;
    MR_Word ll_backend__code_info__V_44_44;
    MR_Word ll_backend__code_info__V_45_45;
    MR_Integer ll_backend__code_info__V_46_46;
    MR_Integer ll_backend__code_info__V_47_47;
    MR_Integer ll_backend__code_info__V_48_48;
    MR_Word ll_backend__code_info__V_49_49;
    MR_Word ll_backend__code_info__V_50_50;
    MR_Word ll_backend__code_info__V_51_51;
    MR_Word ll_backend__code_info__V_52_52;
    MR_Word ll_backend__code_info__V_53_53;
    MR_Word ll_backend__code_info__V_55_55;
    MR_Word ll_backend__code_info__V_56_56;
    MR_Integer ll_backend__code_info__V_57_57;
    MR_Word ll_backend__code_info__V_58_58;
    MR_Word ll_backend__code_info__V_59_59;
    MR_Word ll_backend__code_info__V_54_54;

    ll_backend__code_info__StaticCellInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)));
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 13)));
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 14)));
    ll_backend__code_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 15)));
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 16)));
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 17)));
    {
      ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__code_info__RvalsTypes_5, ll_backend__code_info__DataAddr_6, ll_backend__code_info__StaticCellInfo0_8, &ll_backend__code_info__StaticCellInfo_9);
    }
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 0)));
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 1)));
    ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 2)));
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 3)));
    ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 4)));
    ll_backend__code_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 5)));
    ll_backend__code_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 6)));
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 7)));
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 8)));
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 9)));
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 10)));
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 11)));
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)));
    ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 13)));
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 14)));
    ll_backend__code_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 15)));
    ll_backend__code_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 16)));
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 17)));
    {
      ll_backend__code_info__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 0) = ((MR_Box) (ll_backend__code_info__V_42_42));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 1) = ((MR_Box) (ll_backend__code_info__V_43_43));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 2) = ((MR_Box) (ll_backend__code_info__V_44_44));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 3) = ((MR_Box) (ll_backend__code_info__V_45_45));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 4) = ((MR_Box) (ll_backend__code_info__V_46_46));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 5) = ((MR_Box) (ll_backend__code_info__V_47_47));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 6) = ((MR_Box) (ll_backend__code_info__V_48_48));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 7) = ((MR_Box) (ll_backend__code_info__V_49_49));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 8) = ((MR_Box) (ll_backend__code_info__V_50_50));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 9) = ((MR_Box) (ll_backend__code_info__V_51_51));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 10) = ((MR_Box) (ll_backend__code_info__V_52_52));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 11) = ((MR_Box) (ll_backend__code_info__V_53_53));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 12) = ((MR_Box) (ll_backend__code_info__StaticCellInfo_9));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 13) = ((MR_Box) (ll_backend__code_info__V_55_55));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 14) = ((MR_Box) (ll_backend__code_info__V_56_56));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 15) = ((MR_Box) (ll_backend__code_info__V_57_57));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 16) = ((MR_Box) (ll_backend__code_info__V_58_58));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 17) = ((MR_Box) (ll_backend__code_info__V_59_59));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_41_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_40_40));
    }
  }
}

void MR_CALL 
ll_backend__code_info__get_threadscope_rev_string_table_3_p_0(
  MR_Word ll_backend__code_info__CI_4,
  MR_Word * ll_backend__code_info__RevTable_5,
  MR_Integer * ll_backend__code_info__TableSize_6)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 13)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 14)));
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__TableSize_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 15)));
    *ll_backend__code_info__RevTable_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 16)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 17)));
  }
}

void MR_CALL 
ll_backend__code_info__add_threadscope_string_4_p_0(
  MR_String ll_backend__code_info__String_5,
  MR_Integer * ll_backend__code_info__SlotNum_6,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_15,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_16)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__Persistent0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_15, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__RevTable0_10;
    MR_Integer ll_backend__code_info__Size_11;
    MR_Word ll_backend__code_info__RevTable_12;
    MR_Word ll_backend__code_info__Persistent_14;
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_15, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 13)));
    MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 14)));
    MR_Word ll_backend__code_info__V_36_36;
    MR_Word ll_backend__code_info__V_54_54;
    MR_Word ll_backend__code_info__V_55_55;
    MR_Word ll_backend__code_info__V_56_56;
    MR_Word ll_backend__code_info__V_57_57;
    MR_Integer ll_backend__code_info__V_58_58;
    MR_Integer ll_backend__code_info__V_59_59;
    MR_Integer ll_backend__code_info__V_60_60;
    MR_Word ll_backend__code_info__V_61_61;
    MR_Word ll_backend__code_info__V_62_62;
    MR_Word ll_backend__code_info__V_63_63;
    MR_Word ll_backend__code_info__V_64_64;
    MR_Word ll_backend__code_info__V_65_65;
    MR_Word ll_backend__code_info__V_66_66;
    MR_Word ll_backend__code_info__V_67_67;
    MR_Word ll_backend__code_info__V_68_68;
    MR_Word ll_backend__code_info__V_71_71;

    *ll_backend__code_info__SlotNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 15)));
    ll_backend__code_info__RevTable0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 16)));
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 17)));
    ll_backend__code_info__Size_11 = (*ll_backend__code_info__SlotNum_6 + (MR_Integer) 1);
    {
      ll_backend__code_info__RevTable_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__code_info__RevTable_12, 0) = ((MR_Box) (ll_backend__code_info__String_5));
      MR_hl_field(MR_mktag(1), ll_backend__code_info__RevTable_12, 1) = ((MR_Box) (ll_backend__code_info__RevTable0_10));
    }
    ll_backend__code_info__V_54_54 = ll_backend__code_info__V_20_20;
    ll_backend__code_info__V_55_55 = ll_backend__code_info__V_21_21;
    ll_backend__code_info__V_56_56 = ll_backend__code_info__V_22_22;
    ll_backend__code_info__V_57_57 = ll_backend__code_info__V_23_23;
    ll_backend__code_info__V_58_58 = ll_backend__code_info__V_24_24;
    ll_backend__code_info__V_59_59 = ll_backend__code_info__V_25_25;
    ll_backend__code_info__V_60_60 = ll_backend__code_info__V_26_26;
    ll_backend__code_info__V_61_61 = ll_backend__code_info__V_27_27;
    ll_backend__code_info__V_62_62 = ll_backend__code_info__V_28_28;
    ll_backend__code_info__V_63_63 = ll_backend__code_info__V_29_29;
    ll_backend__code_info__V_64_64 = ll_backend__code_info__V_30_30;
    ll_backend__code_info__V_65_65 = ll_backend__code_info__V_31_31;
    ll_backend__code_info__V_66_66 = ll_backend__code_info__V_32_32;
    ll_backend__code_info__V_67_67 = ll_backend__code_info__V_33_33;
    ll_backend__code_info__V_68_68 = ll_backend__code_info__V_34_34;
    ll_backend__code_info__V_71_71 = ll_backend__code_info__V_36_36;
    {
      ll_backend__code_info__Persistent_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 0) = ((MR_Box) (ll_backend__code_info__V_54_54));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 1) = ((MR_Box) (ll_backend__code_info__V_55_55));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 2) = ((MR_Box) (ll_backend__code_info__V_56_56));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 3) = ((MR_Box) (ll_backend__code_info__V_57_57));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 4) = ((MR_Box) (ll_backend__code_info__V_58_58));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 5) = ((MR_Box) (ll_backend__code_info__V_59_59));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 6) = ((MR_Box) (ll_backend__code_info__V_60_60));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 7) = ((MR_Box) (ll_backend__code_info__V_61_61));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 8) = ((MR_Box) (ll_backend__code_info__V_62_62));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 9) = ((MR_Box) (ll_backend__code_info__V_63_63));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 10) = ((MR_Box) (ll_backend__code_info__V_64_64));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 11) = ((MR_Box) (ll_backend__code_info__V_65_65));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 12) = ((MR_Box) (ll_backend__code_info__V_66_66));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 13) = ((MR_Box) (ll_backend__code_info__V_67_67));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 14) = ((MR_Box) (ll_backend__code_info__V_68_68));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 15) = ((MR_Box) (ll_backend__code_info__Size_11));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 16) = ((MR_Box) (ll_backend__code_info__RevTable_12));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 17) = ((MR_Box) (ll_backend__code_info__V_71_71));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_19_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__Persistent_14));
    }
  }
}

void MR_CALL 
ll_backend__code_info__add_closure_layout_3_p_0(
  MR_Word ll_backend__code_info__ClosureLayout_4,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_7,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_8)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__ClosureLayouts_6;
    MR_Word ll_backend__code_info__V_9_9;
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_7, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_7, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Integer ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Word ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_38_38;

    ll_backend__code_info__ClosureLayouts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 10)));
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 11)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)));
    ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 13)));
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 14)));
    ll_backend__code_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 15)));
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 16)));
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 17)));
    {
      ll_backend__code_info__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__code_info__V_9_9, 0) = ((MR_Box) (ll_backend__code_info__ClosureLayout_4));
      MR_hl_field(MR_mktag(1), ll_backend__code_info__V_9_9, 1) = ((MR_Box) (ll_backend__code_info__ClosureLayouts_6));
    }
    {
      ll_backend__code_info__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 0) = ((MR_Box) (ll_backend__code_info__V_15_15));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 1) = ((MR_Box) (ll_backend__code_info__V_16_16));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 2) = ((MR_Box) (ll_backend__code_info__V_17_17));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 3) = ((MR_Box) (ll_backend__code_info__V_18_18));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 4) = ((MR_Box) (ll_backend__code_info__V_19_19));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 5) = ((MR_Box) (ll_backend__code_info__V_20_20));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 6) = ((MR_Box) (ll_backend__code_info__V_21_21));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 7) = ((MR_Box) (ll_backend__code_info__V_22_22));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 8) = ((MR_Box) (ll_backend__code_info__V_23_23));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 9) = ((MR_Box) (ll_backend__code_info__V_24_24));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 10) = ((MR_Box) (ll_backend__code_info__V_9_9));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 11) = ((MR_Box) (ll_backend__code_info__V_25_25));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 12) = ((MR_Box) (ll_backend__code_info__V_26_26));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 13) = ((MR_Box) (ll_backend__code_info__V_27_27));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 14) = ((MR_Box) (ll_backend__code_info__V_28_28));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 15) = ((MR_Box) (ll_backend__code_info__V_29_29));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 16) = ((MR_Box) (ll_backend__code_info__V_30_30));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 17) = ((MR_Box) (ll_backend__code_info__V_31_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_38_38));
    }
  }
}

void MR_CALL 
ll_backend__code_info__add_resume_layout_for_label_4_p_0(
  MR_Word ll_backend__code_info__Label_5,
  MR_Word ll_backend__code_info__LayoutInfo_6,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_21,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_22)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__Internals0_8;
    MR_Word ll_backend__code_info__Resume_9;
    MR_Integer ll_backend__code_info__LabelNum_10;
    MR_Word ll_backend__code_info__Internals_20;
    MR_Word ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_21, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_65_65;
    MR_Word ll_backend__code_info__V_66_66;
    MR_Word ll_backend__code_info__V_67_67;
    MR_Word ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_21, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_45_45;
    MR_Integer ll_backend__code_info__V_46_46;
    MR_Integer ll_backend__code_info__V_47_47;
    MR_Integer ll_backend__code_info__V_48_48;
    MR_Word ll_backend__code_info__V_49_49;
    MR_Word ll_backend__code_info__V_50_50;
    MR_Word ll_backend__code_info__V_51_51;
    MR_Word ll_backend__code_info__V_52_52;
    MR_Word ll_backend__code_info__V_53_53;
    MR_Word ll_backend__code_info__V_54_54;
    MR_Word ll_backend__code_info__V_55_55;
    MR_Word ll_backend__code_info__V_56_56;
    MR_Integer ll_backend__code_info__V_57_57;
    MR_Word ll_backend__code_info__V_58_58;
    MR_Word ll_backend__code_info__V_59_59;
    MR_Word ll_backend__code_info__Internal0_14;
    MR_Box ll_backend__code_info__conv0_Internal0_14;
    MR_Word ll_backend__code_info__V_68_68;
    MR_Word ll_backend__code_info__V_69_69;
    MR_Word ll_backend__code_info__V_71_71;
    MR_Integer ll_backend__code_info__V_72_72;
    MR_Integer ll_backend__code_info__V_73_73;
    MR_Integer ll_backend__code_info__V_74_74;
    MR_Word ll_backend__code_info__V_75_75;
    MR_Word ll_backend__code_info__V_76_76;
    MR_Word ll_backend__code_info__V_77_77;
    MR_Word ll_backend__code_info__V_78_78;
    MR_Word ll_backend__code_info__V_79_79;
    MR_Word ll_backend__code_info__V_80_80;
    MR_Word ll_backend__code_info__V_81_81;
    MR_Word ll_backend__code_info__V_82_82;
    MR_Integer ll_backend__code_info__V_83_83;
    MR_Word ll_backend__code_info__V_84_84;
    MR_Word ll_backend__code_info__V_85_85;
    MR_Word ll_backend__code_info__V_70_70;

    ll_backend__code_info__Internals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 2)));
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 3)));
    ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 4)));
    ll_backend__code_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 5)));
    ll_backend__code_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 6)));
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 7)));
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 8)));
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 9)));
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 10)));
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 11)));
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 12)));
    ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 13)));
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 14)));
    ll_backend__code_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 15)));
    ll_backend__code_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 16)));
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 17)));
    {
      ll_backend__code_info__Resume_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__code_info__Resume_9, 0) = ((MR_Box) (ll_backend__code_info__LayoutInfo_6));
    }
    if (((MR_tag((MR_Word) ll_backend__code_info__Label_5)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.add_resume_layout_for_label\'/4", (MR_String) "entry");
          return;
        }
      }
    else
      {
        MR_Word ll_backend__code_info__V_11_11;

        ll_backend__code_info__LabelNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Label_5, (MR_Integer) 0)));
        ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Label_5, (MR_Integer) 1)));
      }
    {
      ll_backend__code_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__Internals0_8, ll_backend__code_info__LabelNum_10, &ll_backend__code_info__conv0_Internal0_14);
    }
    if (ll_backend__code_info__succeeded)
      {
        ll_backend__code_info__Internal0_14 = ((MR_Word) ll_backend__code_info__conv0_Internal0_14);
        ll_backend__code_info__succeeded = MR_TRUE;
      }
    if (ll_backend__code_info__succeeded)
      {
        MR_Word ll_backend__code_info__Exec_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_14, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__Resume0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_14, (MR_Integer) 1)));
        MR_Word ll_backend__code_info__Return_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_14, (MR_Integer) 2)));
        MR_Word ll_backend__code_info__Internal_19;

        if ((ll_backend__code_info__Resume0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.add_resume_layout_for_label\'/4", (MR_String) "already known label");
              return;
            }
          }
        {
          ll_backend__code_info__Internal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_19, 0) = ((MR_Box) (ll_backend__code_info__Exec_15));
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_19, 1) = ((MR_Box) (ll_backend__code_info__Resume_9));
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_19, 2) = ((MR_Box) (ll_backend__code_info__Return_17));
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__LabelNum_10, ((MR_Box) (ll_backend__code_info__Internal_19)), ll_backend__code_info__Internals0_8, &ll_backend__code_info__Internals_20);
        }
      }
    else
      {
        MR_Word ll_backend__code_info__Internal_32;

        {
          ll_backend__code_info__Internal_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_32, 1) = ((MR_Box) (ll_backend__code_info__Resume_9));
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__LabelNum_10, ((MR_Box) (ll_backend__code_info__Internal_32)), ll_backend__code_info__Internals0_8, &ll_backend__code_info__Internals_20);
        }
      }
    ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_21, (MR_Integer) 0)));
    ll_backend__code_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_21, (MR_Integer) 1)));
    ll_backend__code_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 0)));
    ll_backend__code_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 1)));
    ll_backend__code_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 2)));
    ll_backend__code_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 3)));
    ll_backend__code_info__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 4)));
    ll_backend__code_info__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 5)));
    ll_backend__code_info__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 6)));
    ll_backend__code_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 7)));
    ll_backend__code_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 8)));
    ll_backend__code_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 9)));
    ll_backend__code_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 10)));
    ll_backend__code_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 11)));
    ll_backend__code_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 12)));
    ll_backend__code_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 13)));
    ll_backend__code_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 14)));
    ll_backend__code_info__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 15)));
    ll_backend__code_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 16)));
    ll_backend__code_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 17)));
    {
      ll_backend__code_info__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 0) = ((MR_Box) (ll_backend__code_info__V_68_68));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 1) = ((MR_Box) (ll_backend__code_info__V_69_69));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 2) = ((MR_Box) (ll_backend__code_info__Internals_20));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 3) = ((MR_Box) (ll_backend__code_info__V_71_71));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 4) = ((MR_Box) (ll_backend__code_info__V_72_72));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 5) = ((MR_Box) (ll_backend__code_info__V_73_73));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 6) = ((MR_Box) (ll_backend__code_info__V_74_74));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 7) = ((MR_Box) (ll_backend__code_info__V_75_75));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 8) = ((MR_Box) (ll_backend__code_info__V_76_76));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 9) = ((MR_Box) (ll_backend__code_info__V_77_77));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 10) = ((MR_Box) (ll_backend__code_info__V_78_78));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 11) = ((MR_Box) (ll_backend__code_info__V_79_79));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 12) = ((MR_Box) (ll_backend__code_info__V_80_80));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 13) = ((MR_Box) (ll_backend__code_info__V_81_81));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 14) = ((MR_Box) (ll_backend__code_info__V_82_82));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 15) = ((MR_Box) (ll_backend__code_info__V_83_83));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 16) = ((MR_Box) (ll_backend__code_info__V_84_84));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 17) = ((MR_Box) (ll_backend__code_info__V_85_85));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_67_67));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_66_66));
    }
  }
}

void MR_CALL 
ll_backend__code_info__get_next_closure_seq_no_3_p_0(
  MR_Integer * ll_backend__code_info__SeqNo_4,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_8,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_9)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__C0_6;
    MR_Word ll_backend__code_info__C_7;
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_37_37;
    MR_Word ll_backend__code_info__V_38_38;
    MR_Word ll_backend__code_info__V_39_39;
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Integer ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Word ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_40_40;
    MR_Word ll_backend__code_info__V_41_41;
    MR_Word ll_backend__code_info__V_42_42;
    MR_Word ll_backend__code_info__V_43_43;
    MR_Integer ll_backend__code_info__V_44_44;
    MR_Integer ll_backend__code_info__V_45_45;
    MR_Integer ll_backend__code_info__V_46_46;
    MR_Word ll_backend__code_info__V_47_47;
    MR_Word ll_backend__code_info__V_48_48;
    MR_Word ll_backend__code_info__V_50_50;
    MR_Word ll_backend__code_info__V_51_51;
    MR_Word ll_backend__code_info__V_52_52;
    MR_Word ll_backend__code_info__V_53_53;
    MR_Word ll_backend__code_info__V_54_54;
    MR_Integer ll_backend__code_info__V_55_55;
    MR_Word ll_backend__code_info__V_56_56;
    MR_Word ll_backend__code_info__V_57_57;
    MR_Word ll_backend__code_info__V_49_49;

    ll_backend__code_info__C0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 9)));
    ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 10)));
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 11)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)));
    ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 13)));
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 14)));
    ll_backend__code_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 15)));
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 16)));
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 17)));
    {
      mercury__counter__allocate_3_p_0(ll_backend__code_info__SeqNo_4, ll_backend__code_info__C0_6, &ll_backend__code_info__C_7);
    }
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
    ll_backend__code_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
    ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 0)));
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 1)));
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 2)));
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 3)));
    ll_backend__code_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 4)));
    ll_backend__code_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 5)));
    ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 6)));
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 7)));
    ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 8)));
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 9)));
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 10)));
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 11)));
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 12)));
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 13)));
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 14)));
    ll_backend__code_info__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 15)));
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 16)));
    ll_backend__code_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 17)));
    {
      ll_backend__code_info__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 0) = ((MR_Box) (ll_backend__code_info__V_40_40));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 1) = ((MR_Box) (ll_backend__code_info__V_41_41));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 2) = ((MR_Box) (ll_backend__code_info__V_42_42));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 3) = ((MR_Box) (ll_backend__code_info__V_43_43));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 4) = ((MR_Box) (ll_backend__code_info__V_44_44));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 5) = ((MR_Box) (ll_backend__code_info__V_45_45));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 6) = ((MR_Box) (ll_backend__code_info__V_46_46));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 7) = ((MR_Box) (ll_backend__code_info__V_47_47));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 8) = ((MR_Box) (ll_backend__code_info__V_48_48));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 9) = ((MR_Box) (ll_backend__code_info__C_7));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 10) = ((MR_Box) (ll_backend__code_info__V_50_50));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 11) = ((MR_Box) (ll_backend__code_info__V_51_51));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 12) = ((MR_Box) (ll_backend__code_info__V_52_52));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 13) = ((MR_Box) (ll_backend__code_info__V_53_53));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 14) = ((MR_Box) (ll_backend__code_info__V_54_54));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 15) = ((MR_Box) (ll_backend__code_info__V_55_55));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 16) = ((MR_Box) (ll_backend__code_info__V_56_56));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 17) = ((MR_Box) (ll_backend__code_info__V_57_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_39_39));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_38_38));
    }
  }
}

void MR_CALL 
ll_backend__code_info__add_trace_layout_for_label_9_p_0(
  MR_Word ll_backend__code_info__Label_10,
  MR_Word ll_backend__code_info__Context_11,
  MR_Word ll_backend__code_info__Port_12,
  MR_Word ll_backend__code_info__IsHidden_13,
  MR_Word ll_backend__code_info__GoalPath_14,
  MR_Word ll_backend__code_info__MaybeSolverEventInfo_15,
  MR_Word ll_backend__code_info__Layout_16,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_31,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_32)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__Internals0_18;
    MR_Word ll_backend__code_info__Exec_19;
    MR_Integer ll_backend__code_info__LabelNum_20;
    MR_Word ll_backend__code_info__Internals_30;
    MR_Word ll_backend__code_info__V_33_33;
    MR_Word ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_31, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_31, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_56_56;
    MR_Integer ll_backend__code_info__V_57_57;
    MR_Integer ll_backend__code_info__V_58_58;
    MR_Integer ll_backend__code_info__V_59_59;
    MR_Word ll_backend__code_info__V_60_60;
    MR_Word ll_backend__code_info__V_61_61;
    MR_Word ll_backend__code_info__V_62_62;
    MR_Word ll_backend__code_info__V_63_63;
    MR_Word ll_backend__code_info__V_64_64;
    MR_Word ll_backend__code_info__V_65_65;
    MR_Word ll_backend__code_info__V_66_66;
    MR_Word ll_backend__code_info__V_67_67;
    MR_Integer ll_backend__code_info__V_68_68;
    MR_Word ll_backend__code_info__V_69_69;
    MR_Word ll_backend__code_info__V_70_70;
    MR_Word ll_backend__code_info__Internal0_24;
    MR_Box ll_backend__code_info__conv0_Internal0_24;

    ll_backend__code_info__Internals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 2)));
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 3)));
    ll_backend__code_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 4)));
    ll_backend__code_info__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 5)));
    ll_backend__code_info__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 6)));
    ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 7)));
    ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 8)));
    ll_backend__code_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 9)));
    ll_backend__code_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 10)));
    ll_backend__code_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 11)));
    ll_backend__code_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 12)));
    ll_backend__code_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 13)));
    ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 14)));
    ll_backend__code_info__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 15)));
    ll_backend__code_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 16)));
    ll_backend__code_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 17)));
    {
      ll_backend__code_info__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 0) = ((MR_Box) (ll_backend__code_info__Context_11));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 1) = ((MR_Box) (ll_backend__code_info__Port_12));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 2) = ((MR_Box) (ll_backend__code_info__IsHidden_13));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 3) = ((MR_Box) (ll_backend__code_info__GoalPath_14));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 4) = ((MR_Box) (ll_backend__code_info__MaybeSolverEventInfo_15));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 5) = ((MR_Box) (ll_backend__code_info__Layout_16));
    }
    {
      ll_backend__code_info__Exec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__code_info__Exec_19, 0) = ((MR_Box) (ll_backend__code_info__V_33_33));
    }
    if (((MR_tag((MR_Word) ll_backend__code_info__Label_10)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.add_trace_layout_for_label\'/9", (MR_String) "entry");
          return;
        }
      }
    else
      {
        MR_Word ll_backend__code_info__V_21_21;

        ll_backend__code_info__LabelNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Label_10, (MR_Integer) 0)));
        ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Label_10, (MR_Integer) 1)));
      }
    {
      ll_backend__code_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__Internals0_18, ll_backend__code_info__LabelNum_20, &ll_backend__code_info__conv0_Internal0_24);
    }
    if (ll_backend__code_info__succeeded)
      {
        ll_backend__code_info__Internal0_24 = ((MR_Word) ll_backend__code_info__conv0_Internal0_24);
        ll_backend__code_info__succeeded = MR_TRUE;
      }
    if (ll_backend__code_info__succeeded)
      {
        MR_Word ll_backend__code_info__Exec0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_24, (MR_Integer) 0)));
        MR_Word ll_backend__code_info__Resume_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_24, (MR_Integer) 1)));
        MR_Word ll_backend__code_info__Return_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_24, (MR_Integer) 2)));
        MR_Word ll_backend__code_info__Internal_29;

        if ((ll_backend__code_info__Exec0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.add_trace_layout_for_label\'/9", (MR_String) "already known label");
              return;
            }
          }
        {
          ll_backend__code_info__Internal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_29, 0) = ((MR_Box) (ll_backend__code_info__Exec_19));
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_29, 1) = ((MR_Box) (ll_backend__code_info__Resume_26));
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_29, 2) = ((MR_Box) (ll_backend__code_info__Return_27));
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__LabelNum_20, ((MR_Box) (ll_backend__code_info__Internal_29)), ll_backend__code_info__Internals0_18, &ll_backend__code_info__Internals_30);
        }
      }
    else
      {
        MR_Word ll_backend__code_info__Internal_43;

        {
          ll_backend__code_info__Internal_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_43, 0) = ((MR_Box) (ll_backend__code_info__Exec_19));
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__LabelNum_20, ((MR_Box) (ll_backend__code_info__Internal_43)), ll_backend__code_info__Internals0_18, &ll_backend__code_info__Internals_30);
        }
      }
    {
      ll_backend__code_info__set_layout_info_3_p_0(ll_backend__code_info__Internals_30, ll_backend__code_info__STATE_VARIABLE_CI_0_31, ll_backend__code_info__STATE_VARIABLE_CI_32);
    }
  }
}

void MR_CALL 
ll_backend__code_info__succip_is_used_2_p_0(
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_4,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_5)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_4, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_4, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 13)));
    MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 14)));
    MR_Integer ll_backend__code_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 15)));
    MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 16)));
    MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 17)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 1)));

    {
      ll_backend__code_info__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 0) = ((MR_Box) (ll_backend__code_info__V_16_16));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 2) = ((MR_Box) (ll_backend__code_info__V_18_18));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 3) = ((MR_Box) (ll_backend__code_info__V_19_19));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 4) = ((MR_Box) (ll_backend__code_info__V_20_20));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 5) = ((MR_Box) (ll_backend__code_info__V_21_21));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 6) = ((MR_Box) (ll_backend__code_info__V_22_22));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 7) = ((MR_Box) (ll_backend__code_info__V_23_23));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 8) = ((MR_Box) (ll_backend__code_info__V_24_24));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 9) = ((MR_Box) (ll_backend__code_info__V_25_25));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 10) = ((MR_Box) (ll_backend__code_info__V_26_26));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 11) = ((MR_Box) (ll_backend__code_info__V_27_27));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 12) = ((MR_Box) (ll_backend__code_info__V_28_28));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 13) = ((MR_Box) (ll_backend__code_info__V_29_29));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 14) = ((MR_Box) (ll_backend__code_info__V_30_30));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 15) = ((MR_Box) (ll_backend__code_info__V_31_31));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 16) = ((MR_Box) (ll_backend__code_info__V_32_32));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 17) = ((MR_Box) (ll_backend__code_info__V_33_33));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_14_14));
    }
  }
}

void MR_CALL 
ll_backend__code_info__get_next_label_3_p_0(
  MR_Word * ll_backend__code_info__Label_4,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_10,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_11)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__ProcLabel_6;
    MR_Word ll_backend__code_info__C0_7;
    MR_Integer ll_backend__code_info__N_8;
    MR_Word ll_backend__code_info__C_9;
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_63_63;
    MR_Word ll_backend__code_info__V_64_64;
    MR_Word ll_backend__code_info__V_65_65;
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Integer ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Word ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_32_32;
    MR_Word ll_backend__code_info__V_33_33;
    MR_Word ll_backend__code_info__V_34_34;
    MR_Word ll_backend__code_info__V_35_35;
    MR_Word ll_backend__code_info__V_36_36;
    MR_Word ll_backend__code_info__V_41_41;
    MR_Word ll_backend__code_info__V_42_42;
    MR_Word ll_backend__code_info__V_43_43;
    MR_Integer ll_backend__code_info__V_44_44;
    MR_Integer ll_backend__code_info__V_45_45;
    MR_Integer ll_backend__code_info__V_46_46;
    MR_Word ll_backend__code_info__V_47_47;
    MR_Word ll_backend__code_info__V_48_48;
    MR_Word ll_backend__code_info__V_49_49;
    MR_Word ll_backend__code_info__V_50_50;
    MR_Word ll_backend__code_info__V_51_51;
    MR_Word ll_backend__code_info__V_52_52;
    MR_Word ll_backend__code_info__V_53_53;
    MR_Word ll_backend__code_info__V_54_54;
    MR_Integer ll_backend__code_info__V_55_55;
    MR_Word ll_backend__code_info__V_56_56;
    MR_Word ll_backend__code_info__V_57_57;
    MR_Word ll_backend__code_info__V_67_67;
    MR_Word ll_backend__code_info__V_68_68;
    MR_Word ll_backend__code_info__V_69_69;
    MR_Integer ll_backend__code_info__V_70_70;
    MR_Integer ll_backend__code_info__V_71_71;
    MR_Integer ll_backend__code_info__V_72_72;
    MR_Word ll_backend__code_info__V_73_73;
    MR_Word ll_backend__code_info__V_74_74;
    MR_Word ll_backend__code_info__V_75_75;
    MR_Word ll_backend__code_info__V_76_76;
    MR_Word ll_backend__code_info__V_77_77;
    MR_Word ll_backend__code_info__V_78_78;
    MR_Word ll_backend__code_info__V_79_79;
    MR_Word ll_backend__code_info__V_80_80;
    MR_Integer ll_backend__code_info__V_81_81;
    MR_Word ll_backend__code_info__V_82_82;
    MR_Word ll_backend__code_info__V_83_83;
    MR_Word ll_backend__code_info__V_66_66;

    ll_backend__code_info__ProcLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 7)));
    ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 8)));
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 9)));
    ll_backend__code_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 10)));
    ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 11)));
    ll_backend__code_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 13)));
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 14)));
    ll_backend__code_info__C0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 0)));
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 1)));
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 2)));
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 3)));
    ll_backend__code_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 4)));
    ll_backend__code_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 5)));
    ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 6)));
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 7)));
    ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 8)));
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 9)));
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 10)));
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 11)));
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 12)));
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 13)));
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 14)));
    ll_backend__code_info__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 15)));
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 16)));
    ll_backend__code_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 17)));
    {
      mercury__counter__allocate_3_p_0(&ll_backend__code_info__N_8, ll_backend__code_info__C0_7, &ll_backend__code_info__C_9);
    }
    ll_backend__code_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
    ll_backend__code_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
    ll_backend__code_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 0)));
    ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 1)));
    ll_backend__code_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 2)));
    ll_backend__code_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 3)));
    ll_backend__code_info__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 4)));
    ll_backend__code_info__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 5)));
    ll_backend__code_info__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 6)));
    ll_backend__code_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 7)));
    ll_backend__code_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 8)));
    ll_backend__code_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 9)));
    ll_backend__code_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 10)));
    ll_backend__code_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 11)));
    ll_backend__code_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 12)));
    ll_backend__code_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 13)));
    ll_backend__code_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 14)));
    ll_backend__code_info__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 15)));
    ll_backend__code_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 16)));
    ll_backend__code_info__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 17)));
    {
      ll_backend__code_info__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 0) = ((MR_Box) (ll_backend__code_info__C_9));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 1) = ((MR_Box) (ll_backend__code_info__V_67_67));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 2) = ((MR_Box) (ll_backend__code_info__V_68_68));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 3) = ((MR_Box) (ll_backend__code_info__V_69_69));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 4) = ((MR_Box) (ll_backend__code_info__V_70_70));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 5) = ((MR_Box) (ll_backend__code_info__V_71_71));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 6) = ((MR_Box) (ll_backend__code_info__V_72_72));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 7) = ((MR_Box) (ll_backend__code_info__V_73_73));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 8) = ((MR_Box) (ll_backend__code_info__V_74_74));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 9) = ((MR_Box) (ll_backend__code_info__V_75_75));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 10) = ((MR_Box) (ll_backend__code_info__V_76_76));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 11) = ((MR_Box) (ll_backend__code_info__V_77_77));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 12) = ((MR_Box) (ll_backend__code_info__V_78_78));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 13) = ((MR_Box) (ll_backend__code_info__V_79_79));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 14) = ((MR_Box) (ll_backend__code_info__V_80_80));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 15) = ((MR_Box) (ll_backend__code_info__V_81_81));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 16) = ((MR_Box) (ll_backend__code_info__V_82_82));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 17) = ((MR_Box) (ll_backend__code_info__V_83_83));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_65_65));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_64_64));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__Label_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__N_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__ProcLabel_6));
    }
  }
}

MR_Word MR_CALL 
ll_backend__code_info__make_proc_entry_label_5_f_0(
  MR_Word ll_backend__code_info__CI_7,
  MR_Word ll_backend__code_info__ModuleInfo_8,
  MR_Word ll_backend__code_info__PredId_9,
  MR_Integer ll_backend__code_info__ProcId_10,
  MR_Word ll_backend__code_info__Immed0_11)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__CodeAddr_12;
    MR_Word ll_backend__code_info__Immed_13;

    switch (ll_backend__code_info__Immed0_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__code_info__Immed_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__code_info__Globals_14;
          MR_Integer ll_backend__code_info__ProcsPerFunc_15;
          MR_Word ll_backend__code_info__CurPredId_16;
          MR_Integer ll_backend__code_info__CurProcId_17;
          MR_Word ll_backend__code_info__V_19_19;
          MR_Word ll_backend__code_info__V_20_20;
          MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_7, (MR_Integer) 0)));
          MR_Word ll_backend__code_info__V_47_47;
          MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_7, (MR_Integer) 1)));
          MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 0)));
          MR_Word ll_backend__code_info__V_26_26;
          MR_Word ll_backend__code_info__V_27_27;
          MR_Integer ll_backend__code_info__V_28_28;
          MR_Word ll_backend__code_info__V_29_29;
          MR_Word ll_backend__code_info__V_30_30;
          MR_Word ll_backend__code_info__V_31_31;
          MR_Word ll_backend__code_info__V_32_32;
          MR_Word ll_backend__code_info__V_33_33;
          MR_Integer ll_backend__code_info__V_34_34;
          MR_Word ll_backend__code_info__V_35_35;
          MR_Word ll_backend__code_info__V_36_36;
          MR_Word ll_backend__code_info__V_37_37;
          MR_Word ll_backend__code_info__V_38_38;
          MR_Word ll_backend__code_info__V_39_39;
          MR_Word ll_backend__code_info__V_40_40;
          MR_Word ll_backend__code_info__V_41_41;
          MR_Word ll_backend__code_info__V_42_42;
          MR_Word ll_backend__code_info__V_43_43;
          MR_Word ll_backend__code_info__V_44_44;
          MR_Word ll_backend__code_info__V_48_48;
          MR_Word ll_backend__code_info__V_49_49;
          MR_Word ll_backend__code_info__V_50_50;
          MR_Word ll_backend__code_info__V_51_51;
          MR_Word ll_backend__code_info__V_53_53;
          MR_Word ll_backend__code_info__V_54_54;
          MR_Word ll_backend__code_info__V_55_55;
          MR_Word ll_backend__code_info__V_56_56;
          MR_Word ll_backend__code_info__V_57_57;
          MR_Integer ll_backend__code_info__V_58_58;
          MR_Word ll_backend__code_info__V_59_59;
          MR_Word ll_backend__code_info__V_60_60;
          MR_Word ll_backend__code_info__V_61_61;
          MR_Word ll_backend__code_info__V_62_62;
          MR_Word ll_backend__code_info__V_63_63;
          MR_Word ll_backend__code_info__V_64_64;
          MR_Word ll_backend__code_info__V_65_65;
          MR_Word ll_backend__code_info__V_66_66;
          MR_Word ll_backend__code_info__V_67_67;
          MR_Word ll_backend__code_info__V_68_68;

          ll_backend__code_info__Globals_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 1)));
          ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 2)));
          ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 3)));
          ll_backend__code_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 4)));
          ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 5)));
          ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 6)));
          ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 7)));
          ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 8)));
          ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 9)));
          ll_backend__code_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 10)));
          ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 11)));
          ll_backend__code_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) & (MR_Integer) 1);
          ll_backend__code_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ll_backend__code_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          ll_backend__code_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          ll_backend__code_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          ll_backend__code_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
          ll_backend__code_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
          ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 13)));
          ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 14)));
          {
            libs__globals__lookup_int_option_3_p_0(ll_backend__code_info__Globals_14, (MR_Integer) 476, &ll_backend__code_info__ProcsPerFunc_15);
          }
          ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_7, (MR_Integer) 0)));
          ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_7, (MR_Integer) 1)));
          ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 0)));
          ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 1)));
          ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 2)));
          ll_backend__code_info__CurPredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 3)));
          ll_backend__code_info__CurProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 4)));
          ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 5)));
          ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 6)));
          ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 7)));
          ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 8)));
          ll_backend__code_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 9)));
          ll_backend__code_info__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 10)));
          ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 11)));
          ll_backend__code_info__V_60_60 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) & (MR_Integer) 1);
          ll_backend__code_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ll_backend__code_info__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          ll_backend__code_info__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          ll_backend__code_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          ll_backend__code_info__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
          ll_backend__code_info__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
          ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 13)));
          ll_backend__code_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 14)));
          {
            ll_backend__code_info__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_20_20, 0) = ((MR_Box) (ll_backend__code_info__CurPredId_16));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_20_20, 1) = ((MR_Box) (ll_backend__code_info__CurProcId_17));
          }
          {
            ll_backend__code_info__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, 0) = ((MR_Box) (ll_backend__code_info__ProcsPerFunc_15));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, 1) = ((MR_Box) (ll_backend__code_info__V_20_20));
          }
          {
            ll_backend__code_info__Immed_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__code_info__Immed_13, 0) = ((MR_Box) (ll_backend__code_info__V_19_19));
          }
        }
        break;
    }
    {
      ll_backend__code_info__CodeAddr_12 = ll_backend__code_util__make_entry_label_4_f_0(ll_backend__code_info__ModuleInfo_8, ll_backend__code_info__PredId_9, ll_backend__code_info__ProcId_10, ll_backend__code_info__Immed_13);
    }
    return ll_backend__code_info__CodeAddr_12;
  }
}

MR_String MR_CALL 
ll_backend__code_info__variable_name_2_f_0(
  MR_Word ll_backend__code_info__CI_4,
  MR_Word ll_backend__code_info__Var_5)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_String ll_backend__code_info__Name_6;
    MR_Word ll_backend__code_info__Varset_7;
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_21_21;
    MR_Integer ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Word ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_32_32;

    ll_backend__code_info__Varset_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 8)));
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 9)));
    ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 10)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 11)));
    ll_backend__code_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 13)));
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 14)));
    {
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__code_info__Varset_7, ll_backend__code_info__Var_5, &ll_backend__code_info__Name_6);
    }
    return ll_backend__code_info__Name_6;
  }
}

MR_Word MR_CALL 
ll_backend__code_info__get_pred_proc_arginfo_3_f_0(
  MR_Word ll_backend__code_info__CI_5,
  MR_Word ll_backend__code_info__PredId_6,
  MR_Integer ll_backend__code_info__ProcId_7)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__ArgInfo_8;
    MR_Word ll_backend__code_info__ModuleInfo_9;
    MR_Word ll_backend__code_info__ProcInfo_11;
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Integer ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Integer ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Word ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_32_32;
    MR_Word ll_backend__code_info__V_33_33;
    MR_Word ll_backend__code_info__V_34_34;
    MR_Word ll_backend__code_info__V_35_35;
    MR_Word ll_backend__code_info__V_10_10;

    ll_backend__code_info__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 0)));
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 1)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 2)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 3)));
    ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 4)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 5)));
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 6)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 7)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 8)));
    ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 9)));
    ll_backend__code_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 10)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 11)));
    ll_backend__code_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 13)));
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 14)));
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__code_info__ModuleInfo_9, ll_backend__code_info__PredId_6, ll_backend__code_info__ProcId_7, &ll_backend__code_info__V_10_10, &ll_backend__code_info__ProcInfo_11);
    }
    {
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__code_info__ProcInfo_11, &ll_backend__code_info__ArgInfo_8);
    }
    return ll_backend__code_info__ArgInfo_8;
  }
}

MR_Word MR_CALL 
ll_backend__code_info__get_arginfo_1_f_0(
  MR_Word ll_backend__code_info__CI_3)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__ArgInfo_4;
    MR_Word ll_backend__code_info__PredId_5;
    MR_Integer ll_backend__code_info__ProcId_6;
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__ModuleInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__ProcInfo_61;
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_15_15;
    MR_Word ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Integer ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Word ll_backend__code_info__V_60_60;

    ll_backend__code_info__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
    ll_backend__code_info__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
    ll_backend__code_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
    ll_backend__code_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__code_info__ModuleInfo_59, ll_backend__code_info__PredId_5, ll_backend__code_info__ProcId_6, &ll_backend__code_info__V_60_60, &ll_backend__code_info__ProcInfo_61);
    }
    {
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__code_info__ProcInfo_61, &ll_backend__code_info__ArgInfo_4);
    }
    return ll_backend__code_info__ArgInfo_4;
  }
}

MR_Word MR_CALL 
ll_backend__code_info__get_headvars_1_f_0(
  MR_Word ll_backend__code_info__CI_3)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__HeadVars_4;
    MR_Word ll_backend__code_info__ModuleInfo_5;
    MR_Word ll_backend__code_info__PredId_6;
    MR_Integer ll_backend__code_info__ProcId_7;
    MR_Word ll_backend__code_info__ProcInfo_9;
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Integer ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Word ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_32_32;
    MR_Word ll_backend__code_info__V_33_33;
    MR_Word ll_backend__code_info__V_8_8;

    ll_backend__code_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 0)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 1)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 2)));
    ll_backend__code_info__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 3)));
    ll_backend__code_info__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 4)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 5)));
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 6)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 7)));
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 8)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 9)));
    ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 10)));
    ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 11)));
    ll_backend__code_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 13)));
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 14)));
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__code_info__ModuleInfo_5, ll_backend__code_info__PredId_6, ll_backend__code_info__ProcId_7, &ll_backend__code_info__V_8_8, &ll_backend__code_info__ProcInfo_9);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__code_info__ProcInfo_9, &ll_backend__code_info__HeadVars_4);
    }
    return ll_backend__code_info__HeadVars_4;
  }
}

MR_Word MR_CALL 
ll_backend__code_info__get_proc_model_1_f_0(
  MR_Word ll_backend__code_info__CI_3)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__CodeModel_4;
    MR_Word ll_backend__code_info__ProcInfo_5;
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Integer ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;

    ll_backend__code_info__ProcInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 6)));
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 7)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 8)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 9)));
    ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 10)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 11)));
    ll_backend__code_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 13)));
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 14)));
    {
      ll_backend__code_info__CodeModel_4 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__code_info__ProcInfo_5);
    }
    return ll_backend__code_info__CodeModel_4;
  }
}

static MR_bool MR_CALL 
ll_backend__code_info__filter_region_vars_2_f_0_1(
  MR_Box ll_backend__code_info__closure_arg,
  MR_Box ll_backend__code_info__wrapper_arg_1)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Box ll_backend__code_info__closure = ll_backend__code_info__closure_arg;

    {
      ll_backend__code_info__succeeded = check_hlds__type_util__is_region_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__code_info__wrapper_arg_1));
    }
    return ll_backend__code_info__succeeded;
  }
}

MR_Word MR_CALL 
ll_backend__code_info__filter_region_vars_2_f_0(
  MR_Word ll_backend__code_info__CI_4,
  MR_Word ll_backend__code_info__ForwardLiveVarsBeforeGoal_5)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__RegionVars_6;
    MR_Word ll_backend__code_info__VarTypes_7;
    MR_Word ll_backend__code_info__V_8_8;
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 8)));
    MR_Integer ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Word ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_32_32;
    MR_Word ll_backend__code_info__V_33_33;
    MR_Word ll_backend__code_info__V_34_34;

    ll_backend__code_info__VarTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 9)));
    ll_backend__code_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 10)));
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 11)));
    ll_backend__code_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 13)));
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 14)));
    {
      ll_backend__code_info__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, 0) = ((MR_Box) (&ll_backend__code_info_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, 1) = ((MR_Box) (ll_backend__code_info__filter_region_vars_2_f_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, 3) = ((MR_Box) (ll_backend__code_info__VarTypes_7));
    }
    {
      ll_backend__code_info__RegionVars_6 = parse_tree__set_of_var__filter_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__code_info__V_8_8, ll_backend__code_info__ForwardLiveVarsBeforeGoal_5);
    }
    return ll_backend__code_info__RegionVars_6;
  }
}

MR_Word MR_CALL 
ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(
  MR_Word ll_backend__code_info__CI_4,
  MR_Word ll_backend__code_info__Type_5)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__CheaperTagTest_6;
    MR_Word ll_backend__code_info__CheaperTagTestPrime_11;
    MR_Word ll_backend__code_info__TypeDefn_7;
    MR_Word ll_backend__code_info__TypeBody_8;
    MR_Word ll_backend__code_info__ModuleInfo_21;
    MR_Word ll_backend__code_info__TypeCtor_22;
    MR_Word ll_backend__code_info__TypeTable_23;
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Integer ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_32_32;
    MR_Word ll_backend__code_info__V_33_33;
    MR_Word ll_backend__code_info__V_34_34;
    MR_Word ll_backend__code_info__V_35_35;
    MR_Word ll_backend__code_info__V_36_36;
    MR_Integer ll_backend__code_info__V_37_37;
    MR_Word ll_backend__code_info__V_38_38;
    MR_Word ll_backend__code_info__V_39_39;
    MR_Word ll_backend__code_info__V_40_40;
    MR_Word ll_backend__code_info__V_41_41;
    MR_Word ll_backend__code_info__V_42_42;
    MR_Word ll_backend__code_info__V_43_43;
    MR_Word ll_backend__code_info__V_44_44;
    MR_Word ll_backend__code_info__V_45_45;
    MR_Word ll_backend__code_info__V_46_46;
    MR_Word ll_backend__code_info__V_47_47;
    MR_Word ll_backend__code_info__V_9_9;
    MR_Word ll_backend__code_info__V_10_10;
    MR_Word ll_backend__code_info__V_12_12;
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Word ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;

    ll_backend__code_info__ModuleInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 0)));
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 1)));
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 2)));
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 3)));
    ll_backend__code_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 4)));
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 5)));
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 6)));
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 7)));
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 8)));
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 9)));
    ll_backend__code_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 10)));
    ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 11)));
    ll_backend__code_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 13)));
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 14)));
    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__code_info__Type_5, &ll_backend__code_info__TypeCtor_22);
    }
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__code_info__ModuleInfo_21, &ll_backend__code_info__TypeTable_23);
    }
    {
      ll_backend__code_info__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__code_info__TypeTable_23, ll_backend__code_info__TypeCtor_22, &ll_backend__code_info__TypeDefn_7);
    }
    if (ll_backend__code_info__succeeded)
      {
        {
          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__code_info__TypeDefn_7, &ll_backend__code_info__TypeBody_8);
        }
        ll_backend__code_info__succeeded = ((MR_tag((MR_Word) ll_backend__code_info__TypeBody_8)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__code_info__succeeded)
          {
            ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 0)));
            ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 1)));
            ll_backend__code_info__CheaperTagTestPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 2)));
            ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 3)));
            ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 4)));
            ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 5)));
            ll_backend__code_info__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 6)))) & (MR_Integer) 1);
            ll_backend__code_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 7)));
          }
      }
    if (ll_backend__code_info__succeeded)
      ll_backend__code_info__CheaperTagTest_6 = ll_backend__code_info__CheaperTagTestPrime_11;
    else
      ll_backend__code_info__CheaperTagTest_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return ll_backend__code_info__CheaperTagTest_6;
  }
}

MR_Word MR_CALL 
ll_backend__code_info__lookup_type_defn_2_f_0(
  MR_Word ll_backend__code_info__CI_4,
  MR_Word ll_backend__code_info__Type_5)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__TypeDefn_6;
    MR_Word ll_backend__code_info__TypeDefnPrime_7;
    MR_Word ll_backend__code_info__ModuleInfo_14;
    MR_Word ll_backend__code_info__TypeCtor_15;
    MR_Word ll_backend__code_info__TypeTable_16;
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Integer ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Integer ll_backend__code_info__V_30_30;
    MR_Word ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_32_32;
    MR_Word ll_backend__code_info__V_33_33;
    MR_Word ll_backend__code_info__V_34_34;
    MR_Word ll_backend__code_info__V_35_35;
    MR_Word ll_backend__code_info__V_36_36;
    MR_Word ll_backend__code_info__V_37_37;
    MR_Word ll_backend__code_info__V_38_38;
    MR_Word ll_backend__code_info__V_39_39;
    MR_Word ll_backend__code_info__V_40_40;

    ll_backend__code_info__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 0)));
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 1)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 2)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 3)));
    ll_backend__code_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 4)));
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 5)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 6)));
    ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 7)));
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 8)));
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 9)));
    ll_backend__code_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 10)));
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 11)));
    ll_backend__code_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 13)));
    ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 14)));
    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__code_info__Type_5, &ll_backend__code_info__TypeCtor_15);
    }
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__code_info__ModuleInfo_14, &ll_backend__code_info__TypeTable_16);
    }
    {
      ll_backend__code_info__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__code_info__TypeTable_16, ll_backend__code_info__TypeCtor_15, &ll_backend__code_info__TypeDefnPrime_7);
    }
    if (ll_backend__code_info__succeeded)
      ll_backend__code_info__TypeDefn_6 = ll_backend__code_info__TypeDefnPrime_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "function \140ll_backend.code_info.lookup_type_defn\'/2", (MR_String) "type ctor has no definition");
        }
      }
    return ll_backend__code_info__TypeDefn_6;
  }
}

MR_bool MR_CALL 
ll_backend__code_info__search_type_defn_3_p_0(
  MR_Word ll_backend__code_info__CI_4,
  MR_Word ll_backend__code_info__Type_5,
  MR_Word * ll_backend__code_info__TypeDefn_6)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__ModuleInfo_7;
    MR_Word ll_backend__code_info__TypeCtor_8;
    MR_Word ll_backend__code_info__TypeTable_9;
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Word ll_backend__code_info__V_16_16;
    MR_Integer ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Integer ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Word ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_32_32;
    MR_Word ll_backend__code_info__V_33_33;

    ll_backend__code_info__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 0)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 1)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 2)));
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 3)));
    ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 4)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 5)));
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 6)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 7)));
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 8)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 9)));
    ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 10)));
    ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 11)));
    ll_backend__code_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 13)));
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 14)));
    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__code_info__Type_5, &ll_backend__code_info__TypeCtor_8);
    }
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__code_info__ModuleInfo_7, &ll_backend__code_info__TypeTable_9);
    }
    {
      ll_backend__code_info__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__code_info__TypeTable_9, ll_backend__code_info__TypeCtor_8, ll_backend__code_info__TypeDefn_6);
    }
    return ll_backend__code_info__succeeded;
  }
}

MR_Word MR_CALL 
ll_backend__code_info__variable_is_of_dummy_type_2_f_0(
  MR_Word ll_backend__code_info__CI_4,
  MR_Word ll_backend__code_info__Var_5)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__IsDummy_6;
    MR_Word ll_backend__code_info__VarType_7;
    MR_Word ll_backend__code_info__ModuleInfo_8;
    MR_Word ll_backend__code_info__VarTypes_12;
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_39_39;
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 8)));
    MR_Integer ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Word ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_32_32;
    MR_Word ll_backend__code_info__V_33_33;
    MR_Word ll_backend__code_info__V_34_34;
    MR_Word ll_backend__code_info__V_35_35;
    MR_Word ll_backend__code_info__V_36_36;
    MR_Word ll_backend__code_info__V_40_40;
    MR_Word ll_backend__code_info__V_41_41;
    MR_Word ll_backend__code_info__V_42_42;
    MR_Word ll_backend__code_info__V_43_43;
    MR_Integer ll_backend__code_info__V_44_44;
    MR_Word ll_backend__code_info__V_45_45;
    MR_Word ll_backend__code_info__V_46_46;
    MR_Word ll_backend__code_info__V_47_47;
    MR_Word ll_backend__code_info__V_48_48;
    MR_Word ll_backend__code_info__V_49_49;
    MR_Integer ll_backend__code_info__V_50_50;
    MR_Word ll_backend__code_info__V_51_51;
    MR_Word ll_backend__code_info__V_52_52;
    MR_Word ll_backend__code_info__V_53_53;
    MR_Word ll_backend__code_info__V_54_54;
    MR_Word ll_backend__code_info__V_55_55;
    MR_Word ll_backend__code_info__V_56_56;
    MR_Word ll_backend__code_info__V_57_57;
    MR_Word ll_backend__code_info__V_58_58;
    MR_Word ll_backend__code_info__V_59_59;
    MR_Word ll_backend__code_info__V_60_60;

    ll_backend__code_info__VarTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 9)));
    ll_backend__code_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 10)));
    ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 11)));
    ll_backend__code_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 13)));
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 14)));
    {
      hlds__vartypes__lookup_var_type_3_p_0(ll_backend__code_info__VarTypes_12, ll_backend__code_info__Var_5, &ll_backend__code_info__VarType_7);
    }
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
    ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
    ll_backend__code_info__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 0)));
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 1)));
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 2)));
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 3)));
    ll_backend__code_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 4)));
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 5)));
    ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 6)));
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 7)));
    ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 8)));
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 9)));
    ll_backend__code_info__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 10)));
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 11)));
    ll_backend__code_info__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 13)));
    ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 14)));
    {
      ll_backend__code_info__IsDummy_6 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__code_info__ModuleInfo_8, ll_backend__code_info__VarType_7);
    }
    return ll_backend__code_info__IsDummy_6;
  }
}

MR_Word MR_CALL 
ll_backend__code_info__variable_type_2_f_0(
  MR_Word ll_backend__code_info__CI_4,
  MR_Word ll_backend__code_info__Var_5)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__Type_6;
    MR_Word ll_backend__code_info__VarTypes_7;
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 8)));
    MR_Integer ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Word ll_backend__code_info__V_31_31;

    ll_backend__code_info__VarTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 9)));
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 10)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 11)));
    ll_backend__code_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 13)));
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 14)));
    {
      hlds__vartypes__lookup_var_type_3_p_0(ll_backend__code_info__VarTypes_7, ll_backend__code_info__Var_5, &ll_backend__code_info__Type_6);
    }
    return ll_backend__code_info__Type_6;
  }
}

MR_Word MR_CALL 
ll_backend__code_info__body_typeinfo_liveness_1_f_0(
  MR_Word ll_backend__code_info__CI_3)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__TypeInfoLiveness_4;
    MR_Word ll_backend__code_info__ModuleInfo_5;
    MR_Word ll_backend__code_info__PredId_6;
    MR_Word ll_backend__code_info__PredInfo_7;
    MR_Word ll_backend__code_info__Globals_8;
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_59_59;
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_14_14;
    MR_Integer ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Integer ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;
    MR_Word ll_backend__code_info__V_30_30;
    MR_Word ll_backend__code_info__V_31_31;
    MR_Word ll_backend__code_info__V_32_32;
    MR_Word ll_backend__code_info__V_60_60;
    MR_Word ll_backend__code_info__V_61_61;
    MR_Word ll_backend__code_info__V_62_62;
    MR_Word ll_backend__code_info__V_63_63;
    MR_Integer ll_backend__code_info__V_64_64;
    MR_Word ll_backend__code_info__V_65_65;
    MR_Word ll_backend__code_info__V_66_66;
    MR_Word ll_backend__code_info__V_67_67;
    MR_Word ll_backend__code_info__V_68_68;
    MR_Word ll_backend__code_info__V_69_69;
    MR_Integer ll_backend__code_info__V_70_70;
    MR_Word ll_backend__code_info__V_71_71;
    MR_Word ll_backend__code_info__V_72_72;
    MR_Word ll_backend__code_info__V_73_73;
    MR_Word ll_backend__code_info__V_74_74;
    MR_Word ll_backend__code_info__V_75_75;
    MR_Word ll_backend__code_info__V_76_76;
    MR_Word ll_backend__code_info__V_77_77;
    MR_Word ll_backend__code_info__V_78_78;
    MR_Word ll_backend__code_info__V_79_79;
    MR_Word ll_backend__code_info__V_80_80;

    ll_backend__code_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 0)));
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 1)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 2)));
    ll_backend__code_info__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 3)));
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 4)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 5)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 6)));
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 7)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 8)));
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 9)));
    ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 10)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 11)));
    ll_backend__code_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 13)));
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 14)));
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__code_info__ModuleInfo_5, ll_backend__code_info__PredId_6, &ll_backend__code_info__PredInfo_7);
    }
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 0)));
    ll_backend__code_info__Globals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 1)));
    ll_backend__code_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 2)));
    ll_backend__code_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 3)));
    ll_backend__code_info__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 4)));
    ll_backend__code_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 5)));
    ll_backend__code_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 6)));
    ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 7)));
    ll_backend__code_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 8)));
    ll_backend__code_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 9)));
    ll_backend__code_info__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 10)));
    ll_backend__code_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 11)));
    ll_backend__code_info__V_72_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 13)));
    ll_backend__code_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 14)));
    {
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__code_info__PredInfo_7, ll_backend__code_info__Globals_8, &ll_backend__code_info__TypeInfoLiveness_4);
    }
    return ll_backend__code_info__TypeInfoLiveness_4;
  }
}

void MR_CALL 
ll_backend__code_info__get_stack_slots_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__StackSlots_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__ProcInfo_5;
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Integer ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;
    MR_Word ll_backend__code_info__V_27_27;
    MR_Word ll_backend__code_info__V_28_28;
    MR_Word ll_backend__code_info__V_29_29;

    ll_backend__code_info__ProcInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 6)));
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 7)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 8)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 9)));
    ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 10)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 11)));
    ll_backend__code_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 13)));
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 14)));
    {
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__code_info__ProcInfo_5, ll_backend__code_info__StackSlots_4);
    }
  }
}

static void MR_CALL 
ll_backend__code_info__init_maybe_trace_info_8_p_0(
  MR_Word ll_backend__code_info__TraceLevel_9,
  MR_Word ll_backend__code_info__Globals_10,
  MR_Word ll_backend__code_info__ModuleInfo_11,
  MR_Word ll_backend__code_info__PredInfo_12,
  MR_Word ll_backend__code_info__ProcInfo_13,
  MR_Word * ll_backend__code_info__TraceSlotInfo_14,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_21,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_22)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__TraceLevelIsNone_16;

    {
      ll_backend__code_info__TraceLevelIsNone_16 = libs__trace_params__eff_trace_level_is_none_4_f_0(ll_backend__code_info__ModuleInfo_11, ll_backend__code_info__PredInfo_12, ll_backend__code_info__ProcInfo_13, ll_backend__code_info__TraceLevel_9);
    }
    switch (ll_backend__code_info__TraceLevelIsNone_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__code_info__HasTailCallEvents_17;
          MR_Word ll_backend__code_info__MaybeTailRecLabel_19;
          MR_Word ll_backend__code_info__TraceInfo_20;
          MR_Word ll_backend__code_info__STATE_VARIABLE_CI_29_29;
          MR_Word ll_backend__code_info__STATE_VARIABLE_CI_30_30;
          MR_Word ll_backend__code_info__V_31_31;
          MR_Word ll_backend__code_info__V_38_38;
          MR_Word ll_backend__code_info__V_39_39;
          MR_Word ll_backend__code_info__V_40_40;
          MR_Word ll_backend__code_info__V_41_41;
          MR_Word ll_backend__code_info__V_42_42;
          MR_Word ll_backend__code_info__V_43_43;
          MR_Word ll_backend__code_info__V_44_44;
          MR_Integer ll_backend__code_info__V_45_45;
          MR_Word ll_backend__code_info__V_46_46;
          MR_Word ll_backend__code_info__V_47_47;
          MR_Word ll_backend__code_info__V_48_48;
          MR_Word ll_backend__code_info__V_49_49;
          MR_Word ll_backend__code_info__V_50_50;
          MR_Integer ll_backend__code_info__V_51_51;
          MR_Word ll_backend__code_info__V_53_53;
          MR_Word ll_backend__code_info__V_54_54;
          MR_Word ll_backend__code_info__V_55_55;
          MR_Word ll_backend__code_info__V_56_56;
          MR_Word ll_backend__code_info__V_57_57;
          MR_Word ll_backend__code_info__V_58_58;
          MR_Word ll_backend__code_info__V_59_59;
          MR_Word ll_backend__code_info__V_60_60;
          MR_Word ll_backend__code_info__V_61_61;
          MR_Word ll_backend__code_info__V_52_52;

          {
            hlds__hlds_pred__proc_info_get_has_tail_call_event_2_p_0(ll_backend__code_info__ProcInfo_13, &ll_backend__code_info__HasTailCallEvents_17);
          }
          switch (ll_backend__code_info__HasTailCallEvents_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                ll_backend__code_info__MaybeTailRecLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                ll_backend__code_info__STATE_VARIABLE_CI_29_29 = ll_backend__code_info__STATE_VARIABLE_CI_0_21;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word ll_backend__code_info__TailRecLabel_18;

                {
                  ll_backend__code_info__get_next_label_3_p_0(&ll_backend__code_info__TailRecLabel_18, ll_backend__code_info__STATE_VARIABLE_CI_0_21, &ll_backend__code_info__STATE_VARIABLE_CI_29_29);
                }
                {
                  ll_backend__code_info__MaybeTailRecLabel_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__code_info__MaybeTailRecLabel_19, 0) = ((MR_Box) (ll_backend__code_info__TailRecLabel_18));
                }
              }
              break;
          }
          {
            ll_backend__trace_gen__trace_setup_9_p_0(ll_backend__code_info__ModuleInfo_11, ll_backend__code_info__PredInfo_12, ll_backend__code_info__ProcInfo_13, ll_backend__code_info__Globals_10, ll_backend__code_info__MaybeTailRecLabel_19, ll_backend__code_info__TraceSlotInfo_14, &ll_backend__code_info__TraceInfo_20, ll_backend__code_info__STATE_VARIABLE_CI_29_29, &ll_backend__code_info__STATE_VARIABLE_CI_30_30);
          }
          {
            ll_backend__code_info__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__code_info__V_31_31, 0) = ((MR_Box) (ll_backend__code_info__TraceInfo_20));
          }
          ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_30_30, (MR_Integer) 0)));
          ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_30_30, (MR_Integer) 1)));
          ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 0)));
          ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 1)));
          ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 2)));
          ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 3)));
          ll_backend__code_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 4)));
          ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 5)));
          ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 6)));
          ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 7)));
          ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 8)));
          ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 9)));
          ll_backend__code_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 10)));
          ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 11)));
          ll_backend__code_info__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) & (MR_Integer) 1);
          ll_backend__code_info__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ll_backend__code_info__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          ll_backend__code_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          ll_backend__code_info__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          ll_backend__code_info__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
          ll_backend__code_info__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
          ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 13)));
          ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 14)));
          {
            ll_backend__code_info__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 0) = ((MR_Box) (ll_backend__code_info__V_41_41));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 1) = ((MR_Box) (ll_backend__code_info__V_42_42));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 2) = ((MR_Box) (ll_backend__code_info__V_43_43));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 3) = ((MR_Box) (ll_backend__code_info__V_44_44));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 4) = ((MR_Box) (ll_backend__code_info__V_45_45));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 5) = ((MR_Box) (ll_backend__code_info__V_46_46));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 6) = ((MR_Box) (ll_backend__code_info__V_47_47));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 7) = ((MR_Box) (ll_backend__code_info__V_48_48));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 8) = ((MR_Box) (ll_backend__code_info__V_49_49));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 9) = ((MR_Box) (ll_backend__code_info__V_50_50));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 10) = ((MR_Box) (ll_backend__code_info__V_51_51));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 11) = ((MR_Box) (ll_backend__code_info__V_31_31));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 12) = ((MR_Box) ((ll_backend__code_info__V_53_53 | ((((ll_backend__code_info__V_54_54 << (MR_Integer) 1)) | ((((ll_backend__code_info__V_55_55 << (MR_Integer) 2)) | ((((ll_backend__code_info__V_56_56 << (MR_Integer) 3)) | ((((ll_backend__code_info__V_57_57 << (MR_Integer) 4)) | ((((ll_backend__code_info__V_58_58 << (MR_Integer) 5)) | ((ll_backend__code_info__V_59_59 << (MR_Integer) 6)))))))))))))));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 13) = ((MR_Box) (ll_backend__code_info__V_60_60));
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 14) = ((MR_Box) (ll_backend__code_info__V_61_61));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__code_info__STATE_VARIABLE_CI_22 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_39_39));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_40_40));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__code_info__TraceSlotInfo_14 = (MR_Word) &ll_backend__code_info_scalar_common_3[0];
          *ll_backend__code_info__STATE_VARIABLE_CI_22 = ll_backend__code_info__STATE_VARIABLE_CI_0_21;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__code_info__max_var_slot_2_3_p_0(
  MR_Word ll_backend__code_info__HeadVar__1_1,
  MR_Integer ll_backend__code_info__STATE_VARIABLE_Max_0_2,
  MR_Integer * ll_backend__code_info__STATE_VARIABLE_Max_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__code_info__succeeded;

        if ((ll_backend__code_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__code_info__STATE_VARIABLE_Max_3 = ll_backend__code_info__STATE_VARIABLE_Max_0_2;
        else
          {
            MR_Word ll_backend__code_info__Slot_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__code_info__Slots_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ll_backend__code_info__STATE_VARIABLE_Max_17_17;

            switch (MR_tag((MR_Word) ll_backend__code_info__Slot_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer ll_backend__code_info__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Slot_7, (MR_Integer) 0)));
                  MR_Word ll_backend__code_info__Width_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Slot_7, (MR_Integer) 1)));

                  switch (ll_backend__code_info__Width_11) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Integer ll_backend__code_info__V_14_14 = (ll_backend__code_info__N_10 + (MR_Integer) 1);

                        {
                          mercury__int__max_3_p_0(ll_backend__code_info__V_14_14, ll_backend__code_info__STATE_VARIABLE_Max_0_2, &ll_backend__code_info__STATE_VARIABLE_Max_17_17);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        mercury__int__max_3_p_0(ll_backend__code_info__N_10, ll_backend__code_info__STATE_VARIABLE_Max_0_2, &ll_backend__code_info__STATE_VARIABLE_Max_17_17);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ll_backend__code_info__N_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__code_info__Slot_7, (MR_Integer) 0)));
                  MR_Word ll_backend__code_info__Width_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__Slot_7, (MR_Integer) 1)));

                  switch (ll_backend__code_info__Width_27) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Integer ll_backend__code_info__V_22_22 = (ll_backend__code_info__N_26 + (MR_Integer) 1);

                        {
                          mercury__int__max_3_p_0(ll_backend__code_info__V_22_22, ll_backend__code_info__STATE_VARIABLE_Max_0_2, &ll_backend__code_info__STATE_VARIABLE_Max_17_17);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        mercury__int__max_3_p_0(ll_backend__code_info__N_26, ll_backend__code_info__STATE_VARIABLE_Max_0_2, &ll_backend__code_info__STATE_VARIABLE_Max_17_17);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ll_backend__code_info__N_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__code_info__Slot_7, (MR_Integer) 0)));

                  {
                    mercury__int__max_3_p_0(ll_backend__code_info__N_20, ll_backend__code_info__STATE_VARIABLE_Max_0_2, &ll_backend__code_info__STATE_VARIABLE_Max_17_17);
                  }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__code_info__HeadVar__1__tmp_copy_1 = ll_backend__code_info__Slots_8;
              MR_Integer ll_backend__code_info__STATE_VARIABLE_Max_0__tmp_copy_2 = ll_backend__code_info__STATE_VARIABLE_Max_17_17;

              ll_backend__code_info__STATE_VARIABLE_Max_0_2 = ll_backend__code_info__STATE_VARIABLE_Max_0__tmp_copy_2;
              ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
ll_backend__code_info__init_exprn_opts_1_f_0(
  MR_Word ll_backend__code_info__Globals_3)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__ExprnOpts_4;
    MR_Word ll_backend__code_info__OptNLG_5;
    MR_Word ll_backend__code_info__NLG_6;
    MR_Word ll_backend__code_info__OptASM_7;
    MR_Word ll_backend__code_info__ASM_8;
    MR_Word ll_backend__code_info__OptSGCell_9;
    MR_Word ll_backend__code_info__SGCell_10;
    MR_Word ll_backend__code_info__OptUBF_11;
    MR_Word ll_backend__code_info__UBF_12;
    MR_Word ll_backend__code_info__OptFloatRegs_13;
    MR_Word ll_backend__code_info__UseFloatRegs_14;
    MR_Word ll_backend__code_info__FloatDwords_15;
    MR_Word ll_backend__code_info__DetStackFloatWidth_16;
    MR_Word ll_backend__code_info__OptSGFloat_17;
    MR_Word ll_backend__code_info__SGFloat_18;
    MR_Word ll_backend__code_info__OptStaticCodeAddr_19;
    MR_Word ll_backend__code_info__StaticCodeAddrs_20;

    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 249, &ll_backend__code_info__OptNLG_5);
    }
    switch (ll_backend__code_info__OptNLG_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__code_info__NLG_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__code_info__NLG_6 = (MR_Integer) 0;
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 251, &ll_backend__code_info__OptASM_7);
    }
    switch (ll_backend__code_info__OptASM_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__code_info__ASM_8 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__code_info__ASM_8 = (MR_Integer) 0;
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 443, &ll_backend__code_info__OptSGCell_9);
    }
    switch (ll_backend__code_info__OptSGCell_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__code_info__SGCell_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__code_info__SGCell_10 = (MR_Integer) 0;
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 243, &ll_backend__code_info__OptUBF_11);
    }
    switch (ll_backend__code_info__OptUBF_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__code_info__UBF_12 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__code_info__UBF_12 = (MR_Integer) 0;
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 252, &ll_backend__code_info__OptFloatRegs_13);
    }
    switch (ll_backend__code_info__OptFloatRegs_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__code_info__UseFloatRegs_14 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__code_info__UseFloatRegs_14 = (MR_Integer) 0;
        break;
    }
    {
      libs__globals__double_width_floats_on_det_stack_2_p_0(ll_backend__code_info__Globals_3, &ll_backend__code_info__FloatDwords_15);
    }
    switch (ll_backend__code_info__FloatDwords_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__code_info__DetStackFloatWidth_16 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ll_backend__code_info__DetStackFloatWidth_16 = (MR_Integer) 1;
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 444, &ll_backend__code_info__OptSGFloat_17);
    }
    switch (ll_backend__code_info__OptSGFloat_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__code_info__SGFloat_18 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__code_info__SGFloat_18 = (MR_Integer) 0;
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 445, &ll_backend__code_info__OptStaticCodeAddr_19);
    }
    switch (ll_backend__code_info__OptStaticCodeAddr_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__code_info__StaticCodeAddrs_20 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__code_info__StaticCodeAddrs_20 = (MR_Integer) 0;
        break;
    }
    {
      ll_backend__code_info__ExprnOpts_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__ExprnOpts_4, 0) = ((MR_Box) ((ll_backend__code_info__NLG_6 | ((((ll_backend__code_info__ASM_8 << (MR_Integer) 1)) | ((((ll_backend__code_info__UBF_12 << (MR_Integer) 2)) | ((((ll_backend__code_info__UseFloatRegs_14 << (MR_Integer) 3)) | ((((ll_backend__code_info__DetStackFloatWidth_16 << (MR_Integer) 4)) | ((((ll_backend__code_info__SGCell_10 << (MR_Integer) 5)) | ((((ll_backend__code_info__SGFloat_18 << (MR_Integer) 6)) | ((ll_backend__code_info__StaticCodeAddrs_20 << (MR_Integer) 7)))))))))))))))));
    }
    return ll_backend__code_info__ExprnOpts_4;
  }
}

static void MR_CALL 
ll_backend__code_info__set_layout_info_3_p_0(
  MR_Word ll_backend__code_info__X_4,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_10_10;
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));

    {
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__X_4));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
    }
  }
}

void MR_CALL 
ll_backend__code_info__set_used_env_vars_3_p_0(
  MR_Word ll_backend__code_info__X_4,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_10_10;
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));

    {
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__X_4));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
    }
  }
}

void MR_CALL 
ll_backend__code_info__set_alloc_sites_3_p_0(
  MR_Word ll_backend__code_info__X_4,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_10_10;
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));

    {
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__X_4));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
    }
  }
}

void MR_CALL 
ll_backend__code_info__set_static_cell_info_3_p_0(
  MR_Word ll_backend__code_info__X_4,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_10_10;
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));

    {
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__X_4));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
    }
  }
}

void MR_CALL 
ll_backend__code_info__set_created_temp_frame_3_p_0(
  MR_Word ll_backend__code_info__X_4,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_10_10;
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));

    {
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__X_4));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
    }
  }
}

void MR_CALL 
ll_backend__code_info__set_persistent_temps_3_p_0(
  MR_Word ll_backend__code_info__X_4,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_10_10;
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));

    {
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__X_4));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
    }
  }
}

void MR_CALL 
ll_backend__code_info__set_temp_content_map_3_p_0(
  MR_Word ll_backend__code_info__X_4,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_10_10;
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));

    {
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__X_4));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
    }
  }
}

void MR_CALL 
ll_backend__code_info__set_max_temp_slot_count_3_p_0(
  MR_Integer ll_backend__code_info__X_4,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_10_10;
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));

    {
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__X_4));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
    }
  }
}

void MR_CALL 
ll_backend__code_info__set_max_regs_in_use_at_trace_4_p_0(
  MR_Integer ll_backend__code_info__MR_5,
  MR_Integer ll_backend__code_info__MF_6,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_8,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_9)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_15_15;
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 13)));
    MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 14)));
    MR_Integer ll_backend__code_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 15)));
    MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 16)));
    MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 17)));
    MR_Word ll_backend__code_info__V_35_35 = ll_backend__code_info__V_16_16;
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 5)));

    {
      ll_backend__code_info__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 0) = ((MR_Box) (ll_backend__code_info__V_17_17));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 1) = ((MR_Box) (ll_backend__code_info__V_18_18));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 2) = ((MR_Box) (ll_backend__code_info__V_19_19));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 3) = ((MR_Box) (ll_backend__code_info__V_20_20));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 4) = ((MR_Box) (ll_backend__code_info__MR_5));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 5) = ((MR_Box) (ll_backend__code_info__MF_6));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 6) = ((MR_Box) (ll_backend__code_info__V_23_23));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 7) = ((MR_Box) (ll_backend__code_info__V_24_24));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 8) = ((MR_Box) (ll_backend__code_info__V_25_25));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 9) = ((MR_Box) (ll_backend__code_info__V_26_26));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 10) = ((MR_Box) (ll_backend__code_info__V_27_27));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 11) = ((MR_Box) (ll_backend__code_info__V_28_28));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 12) = ((MR_Box) (ll_backend__code_info__V_29_29));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 13) = ((MR_Box) (ll_backend__code_info__V_30_30));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 14) = ((MR_Box) (ll_backend__code_info__V_31_31));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 15) = ((MR_Box) (ll_backend__code_info__V_32_32));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 16) = ((MR_Box) (ll_backend__code_info__V_33_33));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 17) = ((MR_Box) (ll_backend__code_info__V_34_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_35_35));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_15_15));
    }
  }
}

void MR_CALL 
ll_backend__code_info__set_proc_trace_events_3_p_0(
  MR_Word ll_backend__code_info__X_4,
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_10_10;
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));

    {
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__X_4));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
    }
  }
}

void MR_CALL 
ll_backend__code_info__get_out_of_line_code_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
    MR_Integer ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
  }
}

void MR_CALL 
ll_backend__code_info__get_used_env_vars_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    MR_Integer ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
  }
}

void MR_CALL 
ll_backend__code_info__get_alloc_sites_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
    MR_Word ll_backend__code_info__V_20_20;
    MR_Integer ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
  }
}

void MR_CALL 
ll_backend__code_info__get_static_cell_info_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Integer ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
  }
}

void MR_CALL 
ll_backend__code_info__get_closure_layouts_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Integer ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
  }
}

void MR_CALL 
ll_backend__code_info__get_persistent_temps_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15;
    MR_Word ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Integer ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
  }
}

void MR_CALL 
ll_backend__code_info__get_temp_content_map_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Word ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Integer ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
  }
}

void MR_CALL 
ll_backend__code_info__get_max_temp_slot_count_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Integer * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Word ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Integer ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;

    *ll_backend__code_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
  }
}

void MR_CALL 
ll_backend__code_info__get_created_temp_frame_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Integer ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
  }
}

void MR_CALL 
ll_backend__code_info__get_max_regs_in_use_at_trace_3_p_0(
  MR_Word ll_backend__code_info__CI_4,
  MR_Integer * ll_backend__code_info__MaxRegR_5,
  MR_Integer * ll_backend__code_info__MaxRegF_6)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_15_15;
    MR_Word ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Integer ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__MaxRegR_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 4)));
    *ll_backend__code_info__MaxRegF_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 5)));
    ll_backend__code_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 6)));
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 7)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 8)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 9)));
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 10)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 11)));
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 12)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 13)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 14)));
    ll_backend__code_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 15)));
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 16)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 17)));
  }
}

void MR_CALL 
ll_backend__code_info__get_proc_trace_events_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Integer ll_backend__code_info__V_10_10;
    MR_Integer ll_backend__code_info__V_11_11;
    MR_Integer ll_backend__code_info__V_12_12;
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Word ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Integer ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
  }
}

void MR_CALL 
ll_backend__code_info__get_layout_info_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9;
    MR_Integer ll_backend__code_info__V_10_10;
    MR_Integer ll_backend__code_info__V_11_11;
    MR_Integer ll_backend__code_info__V_12_12;
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Word ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Integer ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
  }
}

void MR_CALL 
ll_backend__code_info__get_succip_used_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8;
    MR_Word ll_backend__code_info__V_9_9;
    MR_Integer ll_backend__code_info__V_10_10;
    MR_Integer ll_backend__code_info__V_11_11;
    MR_Integer ll_backend__code_info__V_12_12;
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Word ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Integer ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
  }
}

void MR_CALL 
ll_backend__code_info__get_label_counter_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_7_7;
    MR_Word ll_backend__code_info__V_8_8;
    MR_Word ll_backend__code_info__V_9_9;
    MR_Integer ll_backend__code_info__V_10_10;
    MR_Integer ll_backend__code_info__V_11_11;
    MR_Integer ll_backend__code_info__V_12_12;
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Word ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Integer ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
  }
}

void MR_CALL 
ll_backend__code_info__get_const_struct_map_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_maybe_containing_goal_map_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_lcmc_null_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_auto_comments_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_opt_region_ops_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_emit_region_ops_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_opt_trail_ops_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_emit_trail_ops_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_opt_no_return_calls_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_maybe_trace_info_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_var_slot_count_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Integer * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_vartypes_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    MR_Integer ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_varset_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    MR_Word ll_backend__code_info__V_15_15;
    MR_Integer ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_proc_label_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Integer ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_proc_info_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Integer ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_pred_info_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    MR_Word ll_backend__code_info__V_12_12;
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Integer ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_proc_id_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Integer * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    MR_Word ll_backend__code_info__V_11_11;
    MR_Word ll_backend__code_info__V_12_12;
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Integer ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_pred_id_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    MR_Integer ll_backend__code_info__V_10_10;
    MR_Word ll_backend__code_info__V_11_11;
    MR_Word ll_backend__code_info__V_12_12;
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Integer ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_exprn_opts_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_9_9;
    MR_Integer ll_backend__code_info__V_10_10;
    MR_Word ll_backend__code_info__V_11_11;
    MR_Word ll_backend__code_info__V_12_12;
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Integer ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_globals_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_8_8;
    MR_Word ll_backend__code_info__V_9_9;
    MR_Integer ll_backend__code_info__V_10_10;
    MR_Word ll_backend__code_info__V_11_11;
    MR_Word ll_backend__code_info__V_12_12;
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Integer ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__get_module_info_2_p_0(
  MR_Word ll_backend__code_info__CI_3,
  MR_Word * ll_backend__code_info__X_4)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
    MR_Word ll_backend__code_info__V_7_7;
    MR_Word ll_backend__code_info__V_8_8;
    MR_Word ll_backend__code_info__V_9_9;
    MR_Integer ll_backend__code_info__V_10_10;
    MR_Word ll_backend__code_info__V_11_11;
    MR_Word ll_backend__code_info__V_12_12;
    MR_Word ll_backend__code_info__V_13_13;
    MR_Word ll_backend__code_info__V_14_14;
    MR_Word ll_backend__code_info__V_15_15;
    MR_Integer ll_backend__code_info__V_16_16;
    MR_Word ll_backend__code_info__V_17_17;
    MR_Word ll_backend__code_info__V_18_18;
    MR_Word ll_backend__code_info__V_19_19;
    MR_Word ll_backend__code_info__V_20_20;
    MR_Word ll_backend__code_info__V_21_21;
    MR_Word ll_backend__code_info__V_22_22;
    MR_Word ll_backend__code_info__V_23_23;
    MR_Word ll_backend__code_info__V_24_24;
    MR_Word ll_backend__code_info__V_25_25;
    MR_Word ll_backend__code_info__V_26_26;

    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
    ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
    ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
    ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
ll_backend__code_info__code_info_init_13_p_0(
  MR_Word ll_backend__code_info__ModuleInfo_14,
  MR_Word ll_backend__code_info__PredId_15,
  MR_Integer ll_backend__code_info__ProcId_16,
  MR_Word ll_backend__code_info__PredInfo_17,
  MR_Word ll_backend__code_info__ProcInfo_18,
  MR_Word ll_backend__code_info__SaveSuccip_19,
  MR_Word ll_backend__code_info__StaticCellInfo_20,
  MR_Word ll_backend__code_info__ConstStructMap_21,
  MR_Word ll_backend__code_info__MaybeContainingGoalMap_22,
  MR_Word ll_backend__code_info__TSRevStringTable_23,
  MR_Integer ll_backend__code_info__TSStringTableSize_24,
  MR_Word * ll_backend__code_info__TraceSlotInfo_25,
  MR_Word * ll_backend__code_info__CodeInfo_26)
{
  {
    MR_bool ll_backend__code_info__succeeded;
    MR_Word ll_backend__code_info__TypeCtorInfo_78_78;
    MR_Word ll_backend__code_info__Globals_27;
    MR_Word ll_backend__code_info__ExprnOpts_28;
    MR_Word ll_backend__code_info__ProcLabel_29;
    MR_Word ll_backend__code_info__VarSet_30;
    MR_Word ll_backend__code_info__VarTypes_31;
    MR_Word ll_backend__code_info__StackSlots_32;
    MR_Integer ll_backend__code_info__VarSlotMax_33;
    MR_Integer ll_backend__code_info__FixedSlots_34;
    MR_Integer ll_backend__code_info__SlotMax_36;
    MR_Word ll_backend__code_info__OptNoReturnCalls_38;
    MR_Word ll_backend__code_info__UseTrail_39;
    MR_Word ll_backend__code_info__DisableTrailOps_40;
    MR_Word ll_backend__code_info__EmitTrailOps_41;
    MR_Word ll_backend__code_info__OptTrailOps_42;
    MR_Word ll_backend__code_info__UseRegions_43;
    MR_Word ll_backend__code_info__EmitRegionOps_44;
    MR_Word ll_backend__code_info__OptRegionOps_45;
    MR_Word ll_backend__code_info__AutoComments_46;
    MR_Word ll_backend__code_info__LCMCNull_47;
    MR_Word ll_backend__code_info__CodeInfoStatic0_48;
    MR_Word ll_backend__code_info__LabelNumCounter0_49;
    MR_Word ll_backend__code_info__TraceLevel_50;
    MR_Word ll_backend__code_info__LayoutMap_51;
    MR_Word ll_backend__code_info__TempContentMap_56;
    MR_Word ll_backend__code_info__PersistentTemps_57;
    MR_Word ll_backend__code_info__ClosureLayoutSeqNumCounter0_58;
    MR_Word ll_backend__code_info__AllocSitesMap0_61;
    MR_Word ll_backend__code_info__UsedEnvVars_62;
    MR_Word ll_backend__code_info__OutOfLineCode_63;
    MR_Word ll_backend__code_info__CodeInfoPersistent0_64;
    MR_Word ll_backend__code_info__CodeInfo0_65;
    MR_Word ll_backend__code_info__StackSlotList_85;
    MR_Word ll_backend__code_info__V_35_35;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__code_info__ModuleInfo_14, &ll_backend__code_info__Globals_27);
    }
    {
      ll_backend__code_info__ExprnOpts_28 = ll_backend__code_info__init_exprn_opts_1_f_0(ll_backend__code_info__Globals_27);
    }
    {
      ll_backend__code_info__ProcLabel_29 = backend_libs__proc_label__make_proc_label_3_f_0(ll_backend__code_info__ModuleInfo_14, ll_backend__code_info__PredId_15, ll_backend__code_info__ProcId_16);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__code_info__ProcInfo_18, &ll_backend__code_info__VarSet_30);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__code_info__ProcInfo_18, &ll_backend__code_info__VarTypes_31);
    }
    {
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__code_info__ProcInfo_18, &ll_backend__code_info__StackSlots_32);
    }
    {
      mercury__map__values_2_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__code_info__StackSlots_32, &ll_backend__code_info__StackSlotList_85);
    }
    {
      ll_backend__code_info__max_var_slot_2_3_p_0(ll_backend__code_info__StackSlotList_85, (MR_Integer) 0, &ll_backend__code_info__VarSlotMax_33);
    }
    {
      ll_backend__trace_gen__trace_reserved_slots_6_p_0(ll_backend__code_info__ModuleInfo_14, ll_backend__code_info__PredInfo_17, ll_backend__code_info__ProcInfo_18, ll_backend__code_info__Globals_27, &ll_backend__code_info__FixedSlots_34, &ll_backend__code_info__V_35_35);
    }
    {
      mercury__int__max_3_p_0(ll_backend__code_info__VarSlotMax_33, ll_backend__code_info__FixedSlots_34, &ll_backend__code_info__SlotMax_36);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 317, &ll_backend__code_info__OptNoReturnCalls_38);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 218, &ll_backend__code_info__UseTrail_39);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 283, &ll_backend__code_info__DisableTrailOps_40);
    }
    ll_backend__code_info__succeeded = (ll_backend__code_info__UseTrail_39 == (MR_Integer) 1);
    if (ll_backend__code_info__succeeded)
      ll_backend__code_info__succeeded = (ll_backend__code_info__DisableTrailOps_40 == (MR_Integer) 0);
    if (ll_backend__code_info__succeeded)
      ll_backend__code_info__EmitTrailOps_41 = (MR_Integer) 0;
    else
      ll_backend__code_info__EmitTrailOps_41 = (MR_Integer) 1;
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 389, &ll_backend__code_info__OptTrailOps_42);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 400, &ll_backend__code_info__UseRegions_43);
    }
    switch (ll_backend__code_info__UseRegions_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__code_info__EmitRegionOps_44 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__code_info__EmitRegionOps_44 = (MR_Integer) 0;
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 390, &ll_backend__code_info__OptRegionOps_45);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 142, &ll_backend__code_info__AutoComments_46);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 358, &ll_backend__code_info__LCMCNull_47);
    }
    {
      ll_backend__code_info__CodeInfoStatic0_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoStatic0_48, 0) = ((MR_Box) (ll_backend__code_info__ModuleInfo_14));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoStatic0_48, 1) = ((MR_Box) (ll_backend__code_info__Globals_27));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoStatic0_48, 2) = ((MR_Box) (ll_backend__code_info__ExprnOpts_28));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoStatic0_48, 3) = ((MR_Box) (ll_backend__code_info__PredId_15));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoStatic0_48, 4) = ((MR_Box) (ll_backend__code_info__ProcId_16));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoStatic0_48, 5) = ((MR_Box) (ll_backend__code_info__PredInfo_17));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoStatic0_48, 6) = ((MR_Box) (ll_backend__code_info__ProcInfo_18));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoStatic0_48, 7) = ((MR_Box) (ll_backend__code_info__ProcLabel_29));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoStatic0_48, 8) = ((MR_Box) (ll_backend__code_info__VarSet_30));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoStatic0_48, 9) = ((MR_Box) (ll_backend__code_info__VarTypes_31));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoStatic0_48, 10) = ((MR_Box) (ll_backend__code_info__SlotMax_36));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoStatic0_48, 11) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoStatic0_48, 12) = ((MR_Box) ((ll_backend__code_info__OptNoReturnCalls_38 | ((((ll_backend__code_info__EmitTrailOps_41 << (MR_Integer) 1)) | ((((ll_backend__code_info__OptTrailOps_42 << (MR_Integer) 2)) | ((((ll_backend__code_info__EmitRegionOps_44 << (MR_Integer) 3)) | ((((ll_backend__code_info__OptRegionOps_45 << (MR_Integer) 4)) | ((((ll_backend__code_info__AutoComments_46 << (MR_Integer) 5)) | ((ll_backend__code_info__LCMCNull_47 << (MR_Integer) 6)))))))))))))));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoStatic0_48, 13) = ((MR_Box) (ll_backend__code_info__MaybeContainingGoalMap_22));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoStatic0_48, 14) = ((MR_Box) (ll_backend__code_info__ConstStructMap_21));
    }
    {
      ll_backend__code_info__LabelNumCounter0_49 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
    {
      libs__globals__get_trace_level_2_p_0(ll_backend__code_info__Globals_27, &ll_backend__code_info__TraceLevel_50);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, &ll_backend__code_info__LayoutMap_51);
    }
    ll_backend__code_info__TypeCtorInfo_78_78 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__map__init_1_p_0(ll_backend__code_info__TypeCtorInfo_78_78, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, &ll_backend__code_info__TempContentMap_56);
    }
    {
      mercury__set__init_1_p_0(ll_backend__code_info__TypeCtorInfo_78_78, &ll_backend__code_info__PersistentTemps_57);
    }
    {
      ll_backend__code_info__ClosureLayoutSeqNumCounter0_58 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
    {
      ll_backend__code_info__AllocSitesMap0_61 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0);
    }
    {
      mercury__set__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &ll_backend__code_info__UsedEnvVars_62);
    }
    {
      ll_backend__code_info__OutOfLineCode_63 = mercury__cord__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    }
    {
      ll_backend__code_info__CodeInfoPersistent0_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 0) = ((MR_Box) (ll_backend__code_info__LabelNumCounter0_49));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 1) = ((MR_Box) (ll_backend__code_info__SaveSuccip_19));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 2) = ((MR_Box) (ll_backend__code_info__LayoutMap_51));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 4) = ((MR_Box) ((MR_Integer) -1));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 5) = ((MR_Box) ((MR_Integer) -1));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 6) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 7) = ((MR_Box) (ll_backend__code_info__TempContentMap_56));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 8) = ((MR_Box) (ll_backend__code_info__PersistentTemps_57));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 9) = ((MR_Box) (ll_backend__code_info__ClosureLayoutSeqNumCounter0_58));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 11) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 12) = ((MR_Box) (ll_backend__code_info__StaticCellInfo_20));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 13) = ((MR_Box) (ll_backend__code_info__AllocSitesMap0_61));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 14) = ((MR_Box) (ll_backend__code_info__UsedEnvVars_62));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 15) = ((MR_Box) (ll_backend__code_info__TSStringTableSize_24));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 16) = ((MR_Box) (ll_backend__code_info__TSRevStringTable_23));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfoPersistent0_64, 17) = ((MR_Box) (ll_backend__code_info__OutOfLineCode_63));
    }
    {
      ll_backend__code_info__CodeInfo0_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo0_65, 0) = ((MR_Box) (ll_backend__code_info__CodeInfoStatic0_48));
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo0_65, 1) = ((MR_Box) (ll_backend__code_info__CodeInfoPersistent0_64));
    }
    {
      ll_backend__code_info__init_maybe_trace_info_8_p_0(ll_backend__code_info__TraceLevel_50, ll_backend__code_info__Globals_27, ll_backend__code_info__ModuleInfo_14, ll_backend__code_info__PredInfo_17, ll_backend__code_info__ProcInfo_18, ll_backend__code_info__TraceSlotInfo_25, ll_backend__code_info__CodeInfo0_65, ll_backend__code_info__CodeInfo_26);
    }
  }
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
}

void mercury__ll_backend__code_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.code_info. */
