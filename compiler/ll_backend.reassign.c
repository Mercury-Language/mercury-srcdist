/*
** Automatically generated from `reassign.m'
** by the Mercury compiler,
** version rotd-=2018-12-28
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


// :- module ll_backend.reassign.
// :- implementation.

/*
INIT mercury__ll_backend__reassign__init
ENDINIT
*/

#include "ll_backend.reassign.mih"


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
#include "ll_backend.code_util.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
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



struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s {
  MR_bool ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded;
  MR_Word ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLvals_10;
  jmp_buf ll_backend__reassign__clobber_dependents_5_p_0_env_0__commit_0;
  MR_Word ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLval_23;
  MR_Box ll_backend__reassign__clobber_dependents_5_p_0_env_0__conv3_SubLval_23;
};


static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__reassign__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_rval_0;

static void MR_CALL 
ll_backend__reassign____Compare____known_contents_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__reassign____Unify____known_contents_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__reassign____Compare____dependent_lval_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__reassign____Unify____dependent_lval_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__reassign__make_dependent_4_p_0(
  MR_Word Target_5,
  MR_Word SubLval_6,
  MR_Word STATE_VARIABLE_DepLvalMap_0_10,
  MR_Word * STATE_VARIABLE_DepLvalMap_11);

static void MR_CALL 
ll_backend__reassign__make_not_dependent_4_p_0(
  MR_Word Target_5,
  MR_Word SubLval_6,
  MR_Word STATE_VARIABLE_DepLvalMap_0_10,
  MR_Word * STATE_VARIABLE_DepLvalMap_11);

static void MR_CALL 
ll_backend__reassign__clobber_dependent_3_p_0(
  MR_Word Dependent_4,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_6,
  MR_Word * STATE_VARIABLE_KnownContentsMap_7);

static void MR_CALL 
ll_backend__reassign__remove_reassign_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_2,
  MR_Word STATE_VARIABLE_DepLvalMap_0_3,
  MR_Word STATE_VARIABLE_RevInstrs_0_4,
  MR_Word * STATE_VARIABLE_RevInstrs_5);

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0(
  MR_Word TargetLval_7,
  MR_Word SourceRval_8,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_13,
  MR_Word * STATE_VARIABLE_KnownContentsMap_14,
  MR_Word STATE_VARIABLE_DepLvalMap_0_15,
  MR_Word * STATE_VARIABLE_DepLvalMap_16);

static MR_bool MR_CALL 
ll_backend__reassign__no_implicit_alias_target_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__reassign__update_embdedded_frame_5_p_0(
  MR_Word EmbeddedFrame_6,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_12,
  MR_Word * STATE_VARIABLE_KnownContentsMap_13,
  MR_Word STATE_VARIABLE_DepLvalMap_0_14,
  MR_Word * STATE_VARIABLE_DepLvalMap_15);

static void MR_CALL 
ll_backend__reassign__update_embdedded_frame_2_7_p_0(
  MR_Word StackId_8,
  MR_Integer CurSlot_9,
  MR_Integer LastSlot_10,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_14,
  MR_Word * STATE_VARIABLE_KnownContentsMap_15,
  MR_Word STATE_VARIABLE_DepLvalMap_0_16,
  MR_Word * STATE_VARIABLE_DepLvalMap_17);

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0(
  MR_Word Target_6,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_13,
  MR_Word * STATE_VARIABLE_KnownContentsMap_14,
  MR_Word STATE_VARIABLE_DepLvalMap_0_15,
  MR_Word * STATE_VARIABLE_DepLvalMap_16);

static MR_bool MR_CALL 
ll_backend__reassign____Unify____dependent_lval_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__reassign____Compare____dependent_lval_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__reassign____Unify____known_contents_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__reassign____Compare____known_contents_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__reassign_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__reassign_scalar_common_2[3][3];

static /* final */ const MR_Box ll_backend__reassign_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__reassign_scalar_common_4[1][7];




static /* final */ const MR_Box ll_backend__reassign_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__reassign_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__reassign_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__reassign_scalar_common_3[0])),
    ((MR_Box) (ll_backend__reassign__clobber_dependents_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__reassign_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__reassign_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__reassign__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_PseudoTypeInfo) (&ll_backend__reassign__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_TypeInfo) (&ll_backend__reassign__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__reassign__ll_backend__reassign__type_ctor_info_dependent_lval_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__reassign____Unify____dependent_lval_map_0_0_10001)),
  ((MR_Box) (ll_backend__reassign____Compare____dependent_lval_map_0_0_10001)),
  (MR_String) "ll_backend.reassign",
  (MR_String) "dependent_lval_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__reassign__ll_backend__reassign__type_ctor_info_known_contents_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__reassign____Unify____known_contents_0_0_10001)),
  ((MR_Box) (ll_backend__reassign____Compare____known_contents_0_0_10001)),
  (MR_String) "ll_backend.reassign",
  (MR_String) "known_contents",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_rval_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
ll_backend__reassign____Compare____known_contents_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__reassign_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__reassign____Unify____known_contents_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__reassign_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__reassign____Compare____dependent_lval_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__reassign_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__reassign____Unify____dependent_lval_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__reassign_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__reassign__make_dependent_4_p_0(
  MR_Word Target_5,
  MR_Word SubLval_6,
  MR_Word STATE_VARIABLE_DepLvalMap_0_10,
  MR_Word * STATE_VARIABLE_DepLvalMap_11)
{
  {
    MR_bool succeeded;
    MR_Word DepLvals0_8;
    MR_Box conv0_DepLvals0_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]), STATE_VARIABLE_DepLvalMap_0_10, ((MR_Box) (SubLval_6)), &conv0_DepLvals0_8);
    if (succeeded)
    {
      DepLvals0_8 = ((MR_Word) (conv0_DepLvals0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word DepLvals_9;

      mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Target_5)), DepLvals0_8, &DepLvals_9);
      mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]), ((MR_Box) (SubLval_6)), ((MR_Box) (DepLvals_9)), STATE_VARIABLE_DepLvalMap_0_10, STATE_VARIABLE_DepLvalMap_11);
    }
    else
    {
      MR_Word DepLvals_14;

      DepLvals_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Target_5)));
      mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]), ((MR_Box) (SubLval_6)), ((MR_Box) (DepLvals_14)), STATE_VARIABLE_DepLvalMap_0_10, STATE_VARIABLE_DepLvalMap_11);
    }
  }
}

static void MR_CALL 
ll_backend__reassign__make_not_dependent_4_p_0(
  MR_Word Target_5,
  MR_Word SubLval_6,
  MR_Word STATE_VARIABLE_DepLvalMap_0_10,
  MR_Word * STATE_VARIABLE_DepLvalMap_11)
{
  {
    MR_bool succeeded;
    MR_Word DepLvals0_8;
    MR_Box conv0_DepLvals0_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]), STATE_VARIABLE_DepLvalMap_0_10, ((MR_Box) (SubLval_6)), &conv0_DepLvals0_8);
    if (succeeded)
    {
      DepLvals0_8 = ((MR_Word) (conv0_DepLvals0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word DepLvals_9;

      mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Target_5)), DepLvals0_8, &DepLvals_9);
      mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]), ((MR_Box) (SubLval_6)), ((MR_Box) (DepLvals_9)), STATE_VARIABLE_DepLvalMap_0_10, STATE_VARIABLE_DepLvalMap_11);
    }
    else
      *STATE_VARIABLE_DepLvalMap_11 = STATE_VARIABLE_DepLvalMap_0_10;
  }
}

static void MR_CALL 
ll_backend__reassign__clobber_dependent_3_p_0(
  MR_Word Dependent_4,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_6,
  MR_Word * STATE_VARIABLE_KnownContentsMap_7)
{
  {
    mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Dependent_4)), STATE_VARIABLE_KnownContentsMap_0_6, STATE_VARIABLE_KnownContentsMap_7);
  }
}

void MR_CALL 
ll_backend__reassign__remove_reassign_2_p_0(
  MR_Word Instrs0_3,
  MR_Word * Instrs_4)
{
  {
    MR_Word RevInstrs_5;
    MR_Word Var_6;
    MR_Word Var_7;

    Var_6 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
    Var_7 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
    ll_backend__reassign__remove_reassign_loop_5_p_0(Instrs0_3, Var_6, Var_7, (MR_Word) ((MR_Unsigned) 0U), &RevInstrs_5);
    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RevInstrs_5, Instrs_4);
  }
}

static void MR_CALL 
ll_backend__reassign__remove_reassign_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_2,
  MR_Word STATE_VARIABLE_DepLvalMap_0_3,
  MR_Word STATE_VARIABLE_RevInstrs_0_4,
  MR_Word * STATE_VARIABLE_RevInstrs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevInstrs_5 = STATE_VARIABLE_RevInstrs_0_4;
    else
    {
      MR_Word Instr0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_11, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_KnownContentsMap_162_162;
      MR_Word STATE_VARIABLE_DepLvalMap_163_163;
      MR_Word STATE_VARIABLE_RevInstrs_168_168;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_KnownContentsMap_0_2;
      MR_Word next_value_of_STATE_VARIABLE_DepLvalMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevInstrs_0_4;

      switch (MR_tag((MR_Word) Uinstr0_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
            }
            STATE_VARIABLE_KnownContentsMap_162_162 = STATE_VARIABLE_KnownContentsMap_0_2;
            STATE_VARIABLE_DepLvalMap_163_163 = STATE_VARIABLE_DepLvalMap_0_3;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
            }
            STATE_VARIABLE_KnownContentsMap_162_162 = STATE_VARIABLE_KnownContentsMap_0_2;
            STATE_VARIABLE_DepLvalMap_163_163 = STATE_VARIABLE_DepLvalMap_0_3;
          }
          break;
        case (MR_Integer) 2:
          {
            {
              STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
            }
            STATE_VARIABLE_KnownContentsMap_162_162 = STATE_VARIABLE_KnownContentsMap_0_2;
            STATE_VARIABLE_DepLvalMap_163_163 = STATE_VARIABLE_DepLvalMap_0_3;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.reassign", (MR_String) "predicate \140ll_backend.reassign.remove_reassign_loop\'/5", (MR_String) "block");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Target_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 1))));
                MR_Word Source_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 2))));
                MR_Word KnownContents_25;
                MR_Box conv0_KnownContents_25;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), STATE_VARIABLE_KnownContentsMap_0_2, ((MR_Box) (Target_23)), &conv0_KnownContents_25);
                if (succeeded)
                {
                  KnownContents_25 = ((MR_Word) (conv0_KnownContents_25));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                  succeeded = ll_backend__llds____Unify____rval_0_0(KnownContents_25, Source_24);
                if (succeeded)
                {
                  STATE_VARIABLE_RevInstrs_168_168 = STATE_VARIABLE_RevInstrs_0_4;
                  STATE_VARIABLE_DepLvalMap_163_163 = STATE_VARIABLE_DepLvalMap_0_3;
                  STATE_VARIABLE_KnownContentsMap_162_162 = STATE_VARIABLE_KnownContentsMap_0_2;
                }
                else
                {
                  MR_Word STATE_VARIABLE_KnownContentsMap_160_160;
                  MR_Word STATE_VARIABLE_DepLvalMap_161_161;

                  {
                    STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                  }
                  ll_backend__reassign__clobber_dependents_5_p_0(Target_23, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_160_160, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_161_161);
                  succeeded = ll_backend__reassign__no_implicit_alias_target_1_p_0(Target_23);
                  if (succeeded)
                    ll_backend__reassign__record_known_6_p_0(Target_23, Source_24, STATE_VARIABLE_KnownContentsMap_160_160, &STATE_VARIABLE_KnownContentsMap_162_162, STATE_VARIABLE_DepLvalMap_161_161, &STATE_VARIABLE_DepLvalMap_163_163);
                  else
                  {
                    STATE_VARIABLE_DepLvalMap_163_163 = STATE_VARIABLE_DepLvalMap_161_161;
                    STATE_VARIABLE_KnownContentsMap_162_162 = STATE_VARIABLE_KnownContentsMap_160_160;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = STATE_VARIABLE_KnownContentsMap_0_2;
                STATE_VARIABLE_DepLvalMap_163_163 = STATE_VARIABLE_DepLvalMap_0_3;
              }
              break;
            case (MR_Integer) 3:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
                STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
              }
              break;
            case (MR_Integer) 4:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
                STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
              }
              break;
            case (MR_Integer) 5:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
                STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
              }
              break;
            case (MR_Integer) 6:
            case (MR_Integer) 7:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
                STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
              }
              break;
            case (MR_Integer) 8:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
                STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
              }
              break;
            case (MR_Integer) 9:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = STATE_VARIABLE_KnownContentsMap_0_2;
                STATE_VARIABLE_DepLvalMap_163_163 = STATE_VARIABLE_DepLvalMap_0_3;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_139_240;
                MR_Word Target_241 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_241, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_139_240, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_163_163);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Target_241)), STATE_VARIABLE_KnownContentsMap_139_240, &STATE_VARIABLE_KnownContentsMap_162_162);
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_139_236;

                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0((MR_Word) ((MR_Unsigned) 4U), STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_139_236, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_163_163);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) ((MR_Unsigned) 4U)), STATE_VARIABLE_KnownContentsMap_139_236, &STATE_VARIABLE_KnownContentsMap_162_162);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_139_139;
                MR_Word Target_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_170, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_139_139, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_163_163);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Target_170)), STATE_VARIABLE_KnownContentsMap_139_139, &STATE_VARIABLE_KnownContentsMap_162_162);
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_139_223;
                MR_Word Target_224 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_224, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_139_223, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_163_163);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Target_224)), STATE_VARIABLE_KnownContentsMap_139_223, &STATE_VARIABLE_KnownContentsMap_162_162);
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_139_232;

                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0((MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_139_232, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_163_163);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) ((MR_Unsigned) 12U)), STATE_VARIABLE_KnownContentsMap_139_232, &STATE_VARIABLE_KnownContentsMap_162_162);
              }
              break;
            case (MR_Integer) 15:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = STATE_VARIABLE_KnownContentsMap_0_2;
                STATE_VARIABLE_DepLvalMap_163_163 = STATE_VARIABLE_DepLvalMap_0_3;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word EmbeddedFrame_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 2))));

                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__update_embdedded_frame_5_p_0(EmbeddedFrame_59, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_162_162, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_163_163);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word NumLval_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 4))));
                MR_Word AddrLval_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 5))));
                MR_Word STATE_VARIABLE_KnownContentsMap_126_126;
                MR_Word STATE_VARIABLE_DepLvalMap_127_127;
                MR_Word STATE_VARIABLE_KnownContentsMap_128_128;
                MR_Word STATE_VARIABLE_DepLvalMap_129_129;
                MR_Word STATE_VARIABLE_KnownContentsMap_130_130;
                MR_Word STATE_VARIABLE_KnownContentsMap_132_132;
                MR_Word EmbeddedFrame_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 2))));

                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__update_embdedded_frame_5_p_0(EmbeddedFrame_171, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_126_126, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_127_127);
                ll_backend__reassign__clobber_dependents_5_p_0(NumLval_65, STATE_VARIABLE_KnownContentsMap_126_126, &STATE_VARIABLE_KnownContentsMap_128_128, STATE_VARIABLE_DepLvalMap_127_127, &STATE_VARIABLE_DepLvalMap_129_129);
                ll_backend__reassign__clobber_dependents_5_p_0(AddrLval_66, STATE_VARIABLE_KnownContentsMap_128_128, &STATE_VARIABLE_KnownContentsMap_130_130, STATE_VARIABLE_DepLvalMap_129_129, &STATE_VARIABLE_DepLvalMap_163_163);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (NumLval_65)), STATE_VARIABLE_KnownContentsMap_130_130, &STATE_VARIABLE_KnownContentsMap_132_132);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (AddrLval_66)), STATE_VARIABLE_KnownContentsMap_132_132, &STATE_VARIABLE_KnownContentsMap_162_162);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word EmbeddedFrame_231 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 2))));

                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__update_embdedded_frame_5_p_0(EmbeddedFrame_231, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_162_162, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_163_163);
              }
              break;
            case (MR_Integer) 19:
              {
                MR_Word EmbeddedFrame_248 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 2))));

                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__update_embdedded_frame_5_p_0(EmbeddedFrame_248, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_162_162, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_163_163);
              }
              break;
            case (MR_Integer) 20:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_139_244;
                MR_Word Target_245 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_245, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_139_244, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_163_163);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Target_245)), STATE_VARIABLE_KnownContentsMap_139_244, &STATE_VARIABLE_KnownContentsMap_162_162);
              }
              break;
            case (MR_Integer) 21:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
                STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
              }
              break;
            case (MR_Integer) 22:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_139_227;
                MR_Word Target_228 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_228, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_139_227, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_163_163);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Target_228)), STATE_VARIABLE_KnownContentsMap_139_227, &STATE_VARIABLE_KnownContentsMap_162_162);
              }
              break;
            case (MR_Integer) 23:
            case (MR_Integer) 33:
            case (MR_Integer) 34:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = STATE_VARIABLE_KnownContentsMap_0_2;
                STATE_VARIABLE_DepLvalMap_163_163 = STATE_VARIABLE_DepLvalMap_0_3;
              }
              break;
            case (MR_Integer) 24:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
                STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
              }
              break;
            case (MR_Integer) 25:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
                STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
              }
              break;
            case (MR_Integer) 26:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
                STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
              }
              break;
            case (MR_Integer) 27:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
                STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
              }
              break;
            case (MR_Integer) 28:
              {
                MR_Word Target_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_172, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_162_162, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_163_163);
              }
              break;
            case (MR_Integer) 29:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
                STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
              }
              break;
            case (MR_Integer) 30:
              {
                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
                STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
              }
              break;
            case (MR_Integer) 31:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_139_215;
                MR_Word Target_216 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 2))));

                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_216, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_139_215, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_163_163);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Target_216)), STATE_VARIABLE_KnownContentsMap_139_215, &STATE_VARIABLE_KnownContentsMap_162_162);
              }
              break;
            case (MR_Integer) 32:
              {
                MR_Word STATE_VARIABLE_KnownContentsMap_139_219;
                MR_Word Target_220 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_16, (MR_Integer) 2))));

                {
                  STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (Instr0_11));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevInstrs_0_4));
                }
                ll_backend__reassign__clobber_dependents_5_p_0(Target_220, STATE_VARIABLE_KnownContentsMap_0_2, &STATE_VARIABLE_KnownContentsMap_139_219, STATE_VARIABLE_DepLvalMap_0_3, &STATE_VARIABLE_DepLvalMap_163_163);
                mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Target_220)), STATE_VARIABLE_KnownContentsMap_139_219, &STATE_VARIABLE_KnownContentsMap_162_162);
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs0_12;
      next_value_of_STATE_VARIABLE_KnownContentsMap_0_2 = STATE_VARIABLE_KnownContentsMap_162_162;
      next_value_of_STATE_VARIABLE_DepLvalMap_0_3 = STATE_VARIABLE_DepLvalMap_163_163;
      next_value_of_STATE_VARIABLE_RevInstrs_0_4 = STATE_VARIABLE_RevInstrs_168_168;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_KnownContentsMap_0_2 = next_value_of_STATE_VARIABLE_KnownContentsMap_0_2;
      STATE_VARIABLE_DepLvalMap_0_3 = next_value_of_STATE_VARIABLE_DepLvalMap_0_3;
      STATE_VARIABLE_RevInstrs_0_4 = next_value_of_STATE_VARIABLE_RevInstrs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_DepLvalMap_11;

    ll_backend__reassign__make_dependent_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_DepLvalMap_11);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_DepLvalMap_11));
  }
}

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_DepLvalMap_11;

    ll_backend__reassign__make_not_dependent_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_DepLvalMap_11);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_DepLvalMap_11));
  }
}

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_DepLvalMap_11;

    ll_backend__reassign__make_dependent_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_DepLvalMap_11);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_DepLvalMap_11));
  }
}

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_DepLvalMap_11;

    ll_backend__reassign__make_not_dependent_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DepLvalMap_11);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DepLvalMap_11));
  }
}

static void MR_CALL 
ll_backend__reassign__record_known_6_p_0(
  MR_Word TargetLval_7,
  MR_Word SourceRval_8,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_13,
  MR_Word * STATE_VARIABLE_KnownContentsMap_14,
  MR_Word STATE_VARIABLE_DepLvalMap_0_15,
  MR_Word * STATE_VARIABLE_DepLvalMap_16)
{
  {
    MR_bool succeeded;
    MR_Word SourceSubLvals_11;

    SourceSubLvals_11 = ll_backend__code_util__lvals_in_rval_1_f_0(SourceRval_8);
    succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (TargetLval_7)), SourceSubLvals_11);
    if (succeeded)
    {
      *STATE_VARIABLE_DepLvalMap_16 = STATE_VARIABLE_DepLvalMap_0_15;
      *STATE_VARIABLE_KnownContentsMap_14 = STATE_VARIABLE_KnownContentsMap_0_13;
    }
    else
    {
      MR_Word STATE_VARIABLE_KnownContentsMap_17_17;
      MR_Word STATE_VARIABLE_DepLvalMap_18_18;
      MR_Word TargetSubLvals_33;
      MR_Word SourceSubLvals_34;
      MR_Word AllSubLvals_35;
      MR_Word STATE_VARIABLE_DepLvalMap_21_37;
      MR_Word Var_38;
      MR_Word OldRval_31;
      MR_Box conv0_OldRval_31;
      MR_Box conv4_STATE_VARIABLE_DepLvalMap_18_18;
      MR_Word SourceLval_12;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), STATE_VARIABLE_KnownContentsMap_0_13, ((MR_Box) (TargetLval_7)), &conv0_OldRval_31);
      if (succeeded)
      {
        OldRval_31 = ((MR_Word) (conv0_OldRval_31));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word OldSubLvals_32;
        MR_Word Var_36;
        MR_Box conv2_STATE_VARIABLE_DepLvalMap_21_37;

        OldSubLvals_32 = ll_backend__code_util__lvals_in_rval_1_f_0(OldRval_31);
        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ll_backend__reassign_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ll_backend__reassign__record_known_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (TargetLval_7));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_2[1]), Var_36, OldSubLvals_32, ((MR_Box) (STATE_VARIABLE_DepLvalMap_0_15)), &conv2_STATE_VARIABLE_DepLvalMap_21_37);
        STATE_VARIABLE_DepLvalMap_21_37 = ((MR_Word) (conv2_STATE_VARIABLE_DepLvalMap_21_37));
      }
      else
        STATE_VARIABLE_DepLvalMap_21_37 = STATE_VARIABLE_DepLvalMap_0_15;
      TargetSubLvals_33 = ll_backend__code_util__lvals_in_lval_1_f_0(TargetLval_7);
      SourceSubLvals_34 = ll_backend__code_util__lvals_in_rval_1_f_0(SourceRval_8);
      mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), TargetSubLvals_33, SourceSubLvals_34, &AllSubLvals_35);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ll_backend__reassign_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ll_backend__reassign__record_known_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (TargetLval_7));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_2[1]), Var_38, AllSubLvals_35, ((MR_Box) (STATE_VARIABLE_DepLvalMap_21_37)), &conv4_STATE_VARIABLE_DepLvalMap_18_18);
      STATE_VARIABLE_DepLvalMap_18_18 = ((MR_Word) (conv4_STATE_VARIABLE_DepLvalMap_18_18));
      mercury__map__set_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (TargetLval_7)), ((MR_Box) (SourceRval_8)), STATE_VARIABLE_KnownContentsMap_0_13, &STATE_VARIABLE_KnownContentsMap_17_17);
      succeeded = ((MR_tag((MR_Word) SourceRval_8)) == (MR_Integer) 0);
      if (succeeded)
      {
        SourceLval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SourceRval_8, (MR_Integer) 0))));
        {
          MR_Word Var_19;
          MR_Word TargetSubLvals_64;
          MR_Word SourceSubLvals_65;
          MR_Word AllSubLvals_66;
          MR_Word STATE_VARIABLE_DepLvalMap_21_68;
          MR_Word Var_69;
          MR_Word OldRval_62;
          MR_Box conv5_OldRval_62;
          MR_Box conv9_STATE_VARIABLE_DepLvalMap_16;

          {
            Var_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (TargetLval_7));
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), STATE_VARIABLE_KnownContentsMap_17_17, ((MR_Box) (SourceLval_12)), &conv5_OldRval_62);
          if (succeeded)
          {
            OldRval_62 = ((MR_Word) (conv5_OldRval_62));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word OldSubLvals_63;
            MR_Word Var_67;
            MR_Box conv7_STATE_VARIABLE_DepLvalMap_21_68;

            OldSubLvals_63 = ll_backend__code_util__lvals_in_rval_1_f_0(OldRval_62);
            {
              Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&ll_backend__reassign_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (ll_backend__reassign__record_known_6_p_0_3));
              MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (SourceLval_12));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_2[1]), Var_67, OldSubLvals_63, ((MR_Box) (STATE_VARIABLE_DepLvalMap_18_18)), &conv7_STATE_VARIABLE_DepLvalMap_21_68);
            STATE_VARIABLE_DepLvalMap_21_68 = ((MR_Word) (conv7_STATE_VARIABLE_DepLvalMap_21_68));
          }
          else
            STATE_VARIABLE_DepLvalMap_21_68 = STATE_VARIABLE_DepLvalMap_18_18;
          TargetSubLvals_64 = ll_backend__code_util__lvals_in_lval_1_f_0(SourceLval_12);
          SourceSubLvals_65 = ll_backend__code_util__lvals_in_rval_1_f_0(Var_19);
          mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), TargetSubLvals_64, SourceSubLvals_65, &AllSubLvals_66);
          {
            Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&ll_backend__reassign_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (ll_backend__reassign__record_known_6_p_0_4));
            MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (SourceLval_12));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_2[1]), Var_69, AllSubLvals_66, ((MR_Box) (STATE_VARIABLE_DepLvalMap_21_68)), &conv9_STATE_VARIABLE_DepLvalMap_16);
          *STATE_VARIABLE_DepLvalMap_16 = ((MR_Word) (conv9_STATE_VARIABLE_DepLvalMap_16));
          mercury__map__set_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (SourceLval_12)), ((MR_Box) (Var_19)), STATE_VARIABLE_KnownContentsMap_17_17, STATE_VARIABLE_KnownContentsMap_14);
        }
      }
      else
      {
        *STATE_VARIABLE_DepLvalMap_16 = STATE_VARIABLE_DepLvalMap_18_18;
        *STATE_VARIABLE_KnownContentsMap_14 = STATE_VARIABLE_KnownContentsMap_17_17;
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__reassign__no_implicit_alias_target_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__reassign__update_embdedded_frame_5_p_0(
  MR_Word EmbeddedFrame_6,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_12,
  MR_Word * STATE_VARIABLE_KnownContentsMap_13,
  MR_Word STATE_VARIABLE_DepLvalMap_0_14,
  MR_Word * STATE_VARIABLE_DepLvalMap_15)
{
  {
    MR_Word StackId_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), EmbeddedFrame_6, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Integer FirstSlot_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EmbeddedFrame_6, (MR_Integer) 1))));
    MR_Integer LastSlot_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EmbeddedFrame_6, (MR_Integer) 2))));

    ll_backend__reassign__update_embdedded_frame_2_7_p_0(StackId_9, FirstSlot_10, LastSlot_11, STATE_VARIABLE_KnownContentsMap_0_12, STATE_VARIABLE_KnownContentsMap_13, STATE_VARIABLE_DepLvalMap_0_14, STATE_VARIABLE_DepLvalMap_15);
  }
}

static void MR_CALL 
ll_backend__reassign__update_embdedded_frame_2_7_p_0(
  MR_Word StackId_8,
  MR_Integer CurSlot_9,
  MR_Integer LastSlot_10,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_14,
  MR_Word * STATE_VARIABLE_KnownContentsMap_15,
  MR_Word STATE_VARIABLE_DepLvalMap_0_16,
  MR_Word * STATE_VARIABLE_DepLvalMap_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurSlot_9 <= LastSlot_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word StackVar_13;
      MR_Word STATE_VARIABLE_KnownContentsMap_18_18;
      MR_Word STATE_VARIABLE_DepLvalMap_19_19;
      MR_Word STATE_VARIABLE_KnownContentsMap_20_20;
      MR_Integer Var_21;
      MR_Integer next_value_of_CurSlot_9;
      MR_Word next_value_of_STATE_VARIABLE_KnownContentsMap_0_14;
      MR_Word next_value_of_STATE_VARIABLE_DepLvalMap_0_16;

      StackVar_13 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(StackId_8, CurSlot_9);
      ll_backend__reassign__clobber_dependents_5_p_0(StackVar_13, STATE_VARIABLE_KnownContentsMap_0_14, &STATE_VARIABLE_KnownContentsMap_18_18, STATE_VARIABLE_DepLvalMap_0_16, &STATE_VARIABLE_DepLvalMap_19_19);
      mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (StackVar_13)), STATE_VARIABLE_KnownContentsMap_18_18, &STATE_VARIABLE_KnownContentsMap_20_20);
      Var_21 = (MR_Integer) ((MR_Unsigned) CurSlot_9 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurSlot_9 = Var_21;
      next_value_of_STATE_VARIABLE_KnownContentsMap_0_14 = STATE_VARIABLE_KnownContentsMap_20_20;
      next_value_of_STATE_VARIABLE_DepLvalMap_0_16 = STATE_VARIABLE_DepLvalMap_19_19;
      CurSlot_9 = next_value_of_CurSlot_9;
      STATE_VARIABLE_KnownContentsMap_0_14 = next_value_of_STATE_VARIABLE_KnownContentsMap_0_14;
      STATE_VARIABLE_DepLvalMap_0_16 = next_value_of_STATE_VARIABLE_DepLvalMap_0_16;
      continue;
    }
    else
    {
      *STATE_VARIABLE_DepLvalMap_17 = STATE_VARIABLE_DepLvalMap_0_16;
      *STATE_VARIABLE_KnownContentsMap_15 = STATE_VARIABLE_KnownContentsMap_0_14;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_KnownContentsMap_7;

    ll_backend__reassign__clobber_dependent_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_KnownContentsMap_7);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_KnownContentsMap_7));
  }
}

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s * env_ptr = (struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s * env_ptr = (struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLval_23 = ((MR_Word) ((env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__conv3_SubLval_23));
    ll_backend__reassign__clobber_dependents_5_p_0_3(env_ptr);
  }
}

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s * env_ptr = (struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_12;

      (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLval_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLval_23, (MR_Integer) 0)))) == (MR_Integer) 10)));
      if ((env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded)
      {
        Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLval_23, (MR_Integer) 1))));
        ll_backend__reassign__clobber_dependents_5_p_0_2(env_ptr);
      }
    }
  }
}

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_5(
  void * env_ptr_arg)
{
  {
    struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s * env_ptr = (struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), &(env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__conv3_SubLval_23, (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLvals_10, ll_backend__reassign__clobber_dependents_5_p_0_4, env_ptr);
        }
        (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0(
  MR_Word Target_6,
  MR_Word STATE_VARIABLE_KnownContentsMap_0_13,
  MR_Word * STATE_VARIABLE_KnownContentsMap_14,
  MR_Word STATE_VARIABLE_DepLvalMap_0_15,
  MR_Word * STATE_VARIABLE_DepLvalMap_16)
{
  {
    struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s env;

    {
      MR_Word STATE_VARIABLE_KnownContentsMap_18_18;
      MR_Word STATE_VARIABLE_DepLvalMap_19_19;
      MR_Word Var_20;
      MR_Word DepLvals_9;
      MR_Box conv0_DepLvals_9;

      (env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]), STATE_VARIABLE_DepLvalMap_0_15, ((MR_Box) (Target_6)), &conv0_DepLvals_9);
      if ((env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded)
      {
        DepLvals_9 = ((MR_Word) (conv0_DepLvals_9));
        (env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded = MR_TRUE;
      }
      if ((env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded)
      {
        MR_Box conv2_STATE_VARIABLE_KnownContentsMap_18_18;

        mercury__set__fold_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_2[0]), (MR_Word) (&ll_backend__reassign_scalar_common_2[2]), DepLvals_9, ((MR_Box) (STATE_VARIABLE_KnownContentsMap_0_13)), &conv2_STATE_VARIABLE_KnownContentsMap_18_18);
        STATE_VARIABLE_KnownContentsMap_18_18 = ((MR_Word) (conv2_STATE_VARIABLE_KnownContentsMap_18_18));
        mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]), ((MR_Box) (Target_6)), STATE_VARIABLE_DepLvalMap_0_15, &STATE_VARIABLE_DepLvalMap_19_19);
      }
      else
      {
        STATE_VARIABLE_DepLvalMap_19_19 = STATE_VARIABLE_DepLvalMap_0_15;
        STATE_VARIABLE_KnownContentsMap_18_18 = STATE_VARIABLE_KnownContentsMap_0_13;
      }
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (Target_6));
      }
      (env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLvals_10 = ll_backend__code_util__lvals_in_rval_1_f_0(Var_20);
      ll_backend__reassign__clobber_dependents_5_p_0_5(&env);
      if ((env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded)
      {
        *STATE_VARIABLE_KnownContentsMap_14 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
        *STATE_VARIABLE_DepLvalMap_16 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__reassign_scalar_common_1[0]));
      }
      else
      {
        *STATE_VARIABLE_DepLvalMap_16 = STATE_VARIABLE_DepLvalMap_19_19;
        *STATE_VARIABLE_KnownContentsMap_14 = STATE_VARIABLE_KnownContentsMap_18_18;
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__reassign____Unify____dependent_lval_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__reassign____Unify____dependent_lval_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__reassign____Compare____dependent_lval_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__reassign____Compare____dependent_lval_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__reassign____Unify____known_contents_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__reassign____Unify____known_contents_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__reassign____Compare____known_contents_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__reassign____Compare____known_contents_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__reassign__init(void)
{
}

void mercury__ll_backend__reassign__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__reassign__ll_backend__reassign__type_ctor_info_dependent_lval_map_0);
	MR_register_type_ctor_info(&ll_backend__reassign__ll_backend__reassign__type_ctor_info_known_contents_0);
}

void mercury__ll_backend__reassign__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__reassign__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.reassign.
