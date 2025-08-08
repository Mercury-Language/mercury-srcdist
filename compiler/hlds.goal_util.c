/*
** Automatically generated from `goal_util.m'
** by the Mercury compiler,
** version rotd-2025-08-08
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


// :- module hlds.goal_util.
// :- implementation.

/*
INIT mercury__hlds__goal_util__init
ENDINIT
*/

#include "hlds.goal_util.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "solutions.mih"
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
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0_s {
  MR_Word hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__RttiVarMaps_5;
  MR_Word hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__NonLocalTypeVars_11;
  MR_Word * hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__LambdaHeadVar__1_28;
  MR_Cont hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__cont;
  void * hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__cont_env_ptr;
  MR_bool hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__succeeded;
  MR_Word hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__TypeCtorInfo_37_37;
  MR_Word hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__Constraint_19;
  MR_Word hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__ArgTypes_21;
  MR_Word hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__TypeVar_30;
  MR_Box hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__conv0_Constraint_19;
};

struct hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0_s {
  MR_Box * hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__wrapper_arg_1;
  MR_Cont hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__cont;
  void * hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__cont_env_ptr;
  MR_Word hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__conv1_LambdaHeadVar__1_28;
};


static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0;

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_goal_is_atomic_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_goal_is_atomic_0[2];

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_goal_is_atomic_0[2];

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0;

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_is_leaf_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_is_leaf_0[2];

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_is_leaf_0[2];

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0(
  MR_Word RttiVarMaps_5,
  MR_Word NonLocalTypeVars_11,
  MR_Word * LambdaHeadVar__1_28,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__do_extra_nonlocal_typeinfos_typeclass_infos__385__1_2_f_0(
  MR_Word RttiVarMaps_5,
  MR_Word LambdaHeadVar__1_24);

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_call_foreign_proc__761__1_2_p_0(
  MR_Word Purity_28,
  MR_Word PredPurity_49);

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_plain_call__727__1_2_p_0(
  MR_Word Purity_23,
  MR_Word PredPurity_40);

static void MR_CALL 
hlds__goal_util__clause_size_increment_3_p_0(
  MR_Word Clause_4,
  MR_Integer Size0_5,
  MR_Integer * Size_6);

static void MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0_3(
  MR_Box closure_arg);

static MR_Box MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__goal_util__generate_plain_call_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_util__generate_plain_call_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__cases_size_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_cases_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_goals_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Box MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__goal_util__create_renaming_2_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMapDelta_2,
  MR_Word STATE_VARIABLE_VarTable_0_3,
  MR_Word * STATE_VARIABLE_VarTable_4,
  MR_Word STATE_VARIABLE_RevUnifies_0_5,
  MR_Word * STATE_VARIABLE_RevUnifies_6,
  MR_Word STATE_VARIABLE_RevNewVars_0_7,
  MR_Word * STATE_VARIABLE_RevNewVars_8,
  MR_Word STATE_VARIABLE_Renaming_0_9,
  MR_Word * STATE_VARIABLE_Renaming_10);

static MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__goal_util_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__goal_util_scalar_common_2[4][6];

static /* final */ const MR_Box hlds__goal_util_scalar_common_3[5][3];

static /* final */ const MR_Box hlds__goal_util_scalar_common_4[2][5];




static /* final */ const MR_Box hlds__goal_util_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_2[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__goal_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_3[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_2[2])),
    ((MR_Box) (hlds__goal_util__clause_list_size_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_2[3])),
    ((MR_Box) (hlds__goal_util__generate_plain_call_13_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[1])),
    ((MR_Box) (hlds__goal_util__generate_call_foreign_proc_17_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[1])),
    ((MR_Box) (hlds__goal_util__generate_call_foreign_proc_17_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_2[3])),
    ((MR_Box) (hlds__goal_util__generate_call_foreign_proc_17_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_4[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0 = {
  (MR_String) "goal_is_atomic",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1 = {
  (MR_String) "goal_is_nonatomic",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_goal_is_atomic_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_goal_is_atomic_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1
};

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_goal_is_atomic_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_goal_is_atomic_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_util____Unify____goal_is_atomic_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____goal_is_atomic_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "goal_is_atomic",
  { hlds__goal_util__hlds__goal_util__enum_name_ordered_goal_is_atomic_0 },
  { hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_goal_is_atomic_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_util__hlds__goal_util__functor_number_map_goal_is_atomic_0,

};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0 = {
  (MR_String) "is_leaf",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1 = {
  (MR_String) "is_not_leaf",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_is_leaf_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_is_leaf_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1
};

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_is_leaf_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_is_leaf_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_util____Unify____is_leaf_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____is_leaf_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "is_leaf",
  { hlds__goal_util__hlds__goal_util__enum_name_ordered_is_leaf_0 },
  { hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_is_leaf_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_util__hlds__goal_util__functor_number_map_is_leaf_0,

};

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0_s * env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__Constraint_19 = ((MR_Word) ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__conv0_Constraint_19));
  hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_1(env_ptr);
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0_s * env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__TypeCtorInfo_37_37 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
  (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__TypeCtorInfo_37_37, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__NonLocalTypeVars_11, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__TypeVar_30);
  if ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__succeeded)
  {
    hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0((env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__RttiVarMaps_5, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__Constraint_19, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__LambdaHeadVar__1_28);
    ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__cont)((env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0_s * env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word _ClassName_20;

    (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__ArgTypes_21 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__Constraint_19, 1))));
    parse_tree__prog_type_scan__type_list_contains_var_2_p_0((env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__ArgTypes_21, &(env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__TypeVar_30, hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_3, env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0(
  MR_Word RttiVarMaps_5,
  MR_Word NonLocalTypeVars_11,
  MR_Word * LambdaHeadVar__1_28,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0_s env;

  (env).hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__RttiVarMaps_5 = RttiVarMaps_5;
  (env).hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__NonLocalTypeVars_11 = NonLocalTypeVars_11;
  (env).hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__LambdaHeadVar__1_28 = LambdaHeadVar__1_28;
  (env).hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__cont = cont;
  (env).hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Word Constraints_18;

    hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0((env).hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__RttiVarMaps_5, &Constraints_18);
    mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &(env).hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_env_0__conv0_Constraint_19, Constraints_18, hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0_2, &env);
  }
}

static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__do_extra_nonlocal_typeinfos_typeclass_infos__385__1_2_f_0(
  MR_Word RttiVarMaps_5,
  MR_Word LambdaHeadVar__1_24)
{
  MR_Word LambdaHeadVar__2_25;
  MR_Word Locn_15;

  hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_5, LambdaHeadVar__1_24, &Locn_15);
  hlds__hlds_rtti__type_info_locn_var_2_p_0(Locn_15, &LambdaHeadVar__2_25);
  return LambdaHeadVar__2_25;
}

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_call_foreign_proc__761__1_2_p_0(
  MR_Word Purity_28,
  MR_Word PredPurity_49)
{
  MR_bool succeeded = (Purity_28 == PredPurity_49);

  return succeeded;
}

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_plain_call__727__1_2_p_0(
  MR_Word Purity_23,
  MR_Word PredPurity_40)
{
  MR_bool succeeded = (Purity_23 == PredPurity_40);

  return succeeded;
}

void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0(
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
hlds__goal_util____Unify____is_leaf_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0(
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
hlds__goal_util____Unify____goal_is_atomic_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__goal_util__clause_size_increment_3_p_0(
  MR_Word Clause_4,
  MR_Integer Size0_5,
  MR_Integer * Size_6)
{
  MR_bool succeeded;
  MR_Integer ClauseSize_7;
  MR_Word Var_8;
  MR_Word GoalExpr_9;

  Var_8 = hlds__hlds_clauses__clause_body_1_f_0(Clause_4);
  GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Var_8, 0))));
  switch (MR_tag((MR_Word) GoalExpr_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal_47 = (MR_Word) ((MR_Word) (GoalExpr_9));
        MR_Integer Size1_78;

        hlds__goal_util__goal_size_2_p_0(SubGoal_47, &Size1_78);
        ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Size1_78 + (MR_Unsigned) 1);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      ClauseSize_7 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          ClauseSize_7 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_34 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_9, 1))) & (MR_Integer) 1);
            MR_Word Goals_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 2))));
            MR_Integer InnerSize_36;

            hlds__goal_util__goals_size_2_p_0(Goals_35, &InnerSize_36);
            switch (ConjType_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ClauseSize_7 = (MR_Integer) ((MR_Unsigned) InnerSize_36 + (MR_Unsigned) 1);
                break;
              case (MR_Integer) 0:
                ClauseSize_7 = InnerSize_36;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer Size1_37;
            MR_Word Goals_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 1))));

            hlds__goal_util__goals_size_2_p_0(Goals_75, &Size1_37);
            ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Size1_37 + (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Cases_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 3))));
            MR_Integer Size1_76;

            hlds__goal_util__cases_size_2_p_0(Cases_40, &Size1_76);
            ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Size1_76 + (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 1))));
            MR_Word SubGoal_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 2))));
            MR_Word Var_69;

            succeeded = ((((MR_tag((MR_Word) Reason_48)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_48, 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_69 = ((MR_Unsigned) ((MR_hl_field(3, Reason_48, 2))) & (MR_Integer) 3);
              succeeded = (Var_69 == (MR_Integer) 1);
            }
            if (succeeded)
              ClauseSize_7 = (MR_Integer) 1;
            else
            {
              MR_Integer Size1_79;

              hlds__goal_util__goal_size_2_p_0(SubGoal_80, &Size1_79);
              ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Size1_79 + (MR_Unsigned) 1);
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 2))));
            MR_Word Then_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 3))));
            MR_Word Else_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 4))));
            MR_Integer Size2_45;
            MR_Integer Size3_46;
            MR_Integer Var_65;
            MR_Integer Var_66;
            MR_Integer Size1_77;

            hlds__goal_util__goal_size_2_p_0(Cond_42, &Size1_77);
            hlds__goal_util__goal_size_2_p_0(Then_43, &Size2_45);
            hlds__goal_util__goal_size_2_p_0(Else_44, &Size3_46);
            Var_66 = (MR_Integer) ((MR_Unsigned) Size1_77 + (MR_Unsigned) Size2_45);
            Var_65 = (MR_Integer) ((MR_Unsigned) Var_66 + (MR_Unsigned) Size3_46);
            ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Var_65 + (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 1))));

            switch (MR_tag((MR_Word) ShortHand_50)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word GoalA_60 = ((MR_Word) ((MR_hl_field(0, ShortHand_50, 0))));
                  MR_Word GoalB_61 = ((MR_Word) ((MR_hl_field(0, ShortHand_50, 1))));
                  MR_Integer Var_73;
                  MR_Integer Size1_84;
                  MR_Integer Size2_85;

                  hlds__goal_util__goal_size_2_p_0(GoalA_60, &Size1_84);
                  hlds__goal_util__goal_size_2_p_0(GoalB_61, &Size2_85);
                  Var_73 = (MR_Integer) ((MR_Unsigned) Size1_84 + (MR_Unsigned) Size2_85);
                  ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Var_73 + (MR_Unsigned) 1);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MainGoal_55 = ((MR_Word) ((MR_hl_field(1, ShortHand_50, 4))));
                  MR_Word OrElseGoals_56 = ((MR_Word) ((MR_hl_field(1, ShortHand_50, 5))));
                  MR_Integer Var_71;
                  MR_Integer Size1_81;
                  MR_Integer Size2_82;

                  hlds__goal_util__goal_size_2_p_0(MainGoal_55, &Size1_81);
                  hlds__goal_util__goals_size_2_p_0(OrElseGoals_56, &Size2_82);
                  Var_71 = (MR_Integer) ((MR_Unsigned) Size1_81 + (MR_Unsigned) Size2_82);
                  ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Var_71 + (MR_Unsigned) 1);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word SubGoal_83 = ((MR_Word) ((MR_hl_field(2, ShortHand_50, 2))));

                  hlds__goal_util__goal_size_2_p_0(SubGoal_83, &ClauseSize_7);
                }
                break;
            }
          }
          break;
      }
      break;
  }
  *Size_6 = (MR_Integer) ((MR_Unsigned) Size0_5 + (MR_Unsigned) ClauseSize_7);
}

MR_bool MR_CALL 
hlds__goal_util__foreign_proc_uses_variable_2_p_0(
  MR_Word Impl_3,
  MR_String VarName_4)
{
  MR_bool succeeded;
  MR_String ForeignBody_5 = ((MR_String) ((MR_hl_field(0, Impl_3, 0))));
  MR_Integer Var_7;

  succeeded = mercury__string__sub_string_search_3_p_0(ForeignBody_5, VarName_4, &Var_7);
  return succeeded;
}

void MR_CALL 
hlds__goal_util__generate_cast_5_p_0(
  MR_Word CastType_6,
  MR_Word InArg_7,
  MR_Word OutArg_8,
  MR_Word Context_9,
  MR_Word * Goal_10)
{
  MR_Word Ground_11;

  Ground_11 = parse_tree__prog_mode__ground_inst_0_f_0();
  hlds__goal_util__generate_cast_with_insts_7_p_0(CastType_6, InArg_7, OutArg_8, Ground_11, Ground_11, Context_9, Goal_10);
}

void MR_CALL 
hlds__goal_util__generate_cast_with_insts_7_p_0(
  MR_Word CastType_8,
  MR_Word InArg_9,
  MR_Word OutArg_10,
  MR_Word InInst_11,
  MR_Word OutInst_12,
  MR_Word Context_13,
  MR_Word * Goal_14)
{
  MR_Word NonLocals_15;
  MR_Word InstMapDelta_16;
  MR_Word GoalInfo_17;
  MR_Word GoalExpr_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_27;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;

  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (OutArg_10));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (InArg_9));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_20));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_19, &NonLocals_15);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (OutArg_10));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (OutInst_12));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  InstMapDelta_16 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_22);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_15, InstMapDelta_16, (MR_Integer) 0, (MR_Integer) 0, Context_13, &GoalInfo_17);
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = (MR_Box) ((MR_Unsigned) (CastType_8));
  }
  Var_32 = parse_tree__prog_mode__in_mode_1_f_0(InInst_11);
  Var_34 = parse_tree__prog_mode__out_mode_1_f_0(OutInst_12);
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
  }
  {
    GoalExpr_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, GoalExpr_18, 1) = ((MR_Box) (Var_27));
    MR_hl_field(3, GoalExpr_18, 2) = ((MR_Box) (Var_19));
    MR_hl_field(3, GoalExpr_18, 3) = ((MR_Box) (Var_31));
    MR_hl_field(3, GoalExpr_18, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, GoalExpr_18, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_17));
  }
}

static void MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
}

static MR_bool MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__goal_util__IntroducedFrom__pred__generate_call_foreign_proc__761__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word PredOrFunc_19,
  MR_Word ModuleName_20,
  MR_String ProcName_21,
  MR_Word TIArgs_22,
  MR_Word NonTIArgs_23,
  MR_Word ExtraArgs_24,
  MR_Word InstMapDelta0_25,
  MR_Word ModeNo_26,
  MR_Word Detism_27,
  MR_Word Purity_28,
  MR_Word Features_29,
  MR_Word Attributes_30,
  MR_Word MaybeTraceRuntimeCond_31,
  MR_String Code_32,
  MR_Word Context_33,
  MR_Word * Goal_34)
{
  MR_bool succeeded;
  MR_Word PredFormArity_35;
  MR_Word UserArity_36;
  MR_Word PredId_37;
  MR_Integer ProcId_38;
  MR_Word Args_39;
  MR_Word GoalExpr_40;
  MR_Word ArgVars_41;
  MR_Word ExtraArgVars_42;
  MR_Word Vars_43;
  MR_Word NonLocals_44;
  MR_Word NumSolns_46;
  MR_Word InstMapDelta_47;
  MR_Word PredInfo_48;
  MR_Word PredPurity_49;
  MR_Word GoalInfo0_50;
  MR_Word GoalInfo_51;
  MR_Word Var_52;
  MR_Word Var_56;
  MR_Word _CanFail_45;
  MR_Box conv3_GoalInfo_51;

  PredFormArity_35 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), NonTIArgs_23);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_19, &UserArity_36, PredFormArity_35);
  hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_18, ModuleName_20, ProcName_21, PredOrFunc_19, UserArity_36, ModeNo_26, &PredId_37, &ProcId_38);
  Args_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), TIArgs_22, NonTIArgs_23);
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (Code_32));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    GoalExpr_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, GoalExpr_40, 1) = ((MR_Box) (Attributes_30));
    MR_hl_field(3, GoalExpr_40, 2) = ((MR_Box) (PredId_37));
    MR_hl_field(3, GoalExpr_40, 3) = ((MR_Box) (ProcId_38));
    MR_hl_field(3, GoalExpr_40, 4) = ((MR_Box) (Args_39));
    MR_hl_field(3, GoalExpr_40, 5) = ((MR_Box) (ExtraArgs_24));
    MR_hl_field(3, GoalExpr_40, 6) = ((MR_Box) (MaybeTraceRuntimeCond_31));
    MR_hl_field(3, GoalExpr_40, 7) = ((MR_Box) (Var_52));
  }
  ArgVars_41 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_3[2]), Args_39);
  ExtraArgVars_42 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_3[3]), ExtraArgs_24);
  Vars_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), ArgVars_41, ExtraArgVars_42);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_43, &NonLocals_44);
  parse_tree__prog_data__determinism_components_3_p_0(Detism_27, &_CanFail_45, &NumSolns_46);
  switch (NumSolns_46) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      InstMapDelta_47 = InstMapDelta0_25;
      break;
    case (MR_Integer) 0:
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&InstMapDelta_47);
      break;
  }
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_18, PredId_37, &PredInfo_48);
  hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_48, &PredPurity_49);
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_4[0]));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (hlds__goal_util__generate_call_foreign_proc_17_p_0_3));
    MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_56, 3) = ((MR_Box) (Purity_28));
    MR_hl_field(0, Var_56, 4) = ((MR_Box) (PredPurity_49));
  }
  mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140hlds.goal_util.generate_call_foreign_proc\'/17", (MR_String) "purity disagreement");
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_44, InstMapDelta_47, Detism_27, Purity_28, Context_33, &GoalInfo0_50);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_util_scalar_common_3[4]), Features_29, ((MR_Box) (GoalInfo0_50)), &conv3_GoalInfo_51);
  GoalInfo_51 = ((MR_Word) (conv3_GoalInfo_51));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_34 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_40));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_51));
  }
}

static void MR_CALL 
hlds__goal_util__generate_plain_call_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static MR_bool MR_CALL 
hlds__goal_util__generate_plain_call_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__goal_util__IntroducedFrom__pred__generate_plain_call__727__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
hlds__goal_util__generate_plain_call_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word PredOrFunc_15,
  MR_Word ModuleName_16,
  MR_String ProcName_17,
  MR_Word TIArgVars_18,
  MR_Word NonTIArgVars_19,
  MR_Word InstMapDelta0_20,
  MR_Word ModeNo_21,
  MR_Word Detism_22,
  MR_Word Purity_23,
  MR_Word Features_24,
  MR_Word Context_25,
  MR_Word * Goal_26)
{
  MR_bool succeeded;
  MR_Word PredFormArity_27;
  MR_Word UserArity_28;
  MR_Word PredId_29;
  MR_Integer ProcId_30;
  MR_Word InvalidPredId_31;
  MR_Word BuiltinState_32;
  MR_Word ArgVars_33;
  MR_Word GoalExpr_34;
  MR_Word NonLocals_35;
  MR_Word NumSolns_37;
  MR_Word InstMapDelta_38;
  MR_Word PredInfo_39;
  MR_Word PredPurity_40;
  MR_Word GoalInfo0_41;
  MR_Word GoalInfo_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word _CanFail_36;
  MR_Box conv1_GoalInfo_42;

  PredFormArity_27 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), NonTIArgVars_19);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_15, &UserArity_28, PredFormArity_27);
  hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_14, ModuleName_16, ProcName_17, PredOrFunc_15, UserArity_28, ModeNo_21, &PredId_29, &ProcId_30);
  InvalidPredId_31 = hlds__hlds_pred__invalid_pred_id_0_f_0();
  BuiltinState_32 = hlds__hlds_pred__builtin_state_4_f_0(ModuleInfo_14, InvalidPredId_31, PredId_29, ProcId_30);
  ArgVars_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), TIArgVars_18, NonTIArgVars_19);
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (ModuleName_16));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (ProcName_17));
  }
  {
    GoalExpr_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr_34, 0) = ((MR_Box) (PredId_29));
    MR_hl_field(2, GoalExpr_34, 1) = ((MR_Box) (ProcId_30));
    MR_hl_field(2, GoalExpr_34, 2) = ((MR_Box) (ArgVars_33));
    MR_hl_field(2, GoalExpr_34, 3) = (MR_Box) ((MR_Unsigned) (BuiltinState_32));
    MR_hl_field(2, GoalExpr_34, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr_34, 5) = ((MR_Box) (Var_44));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_33, &NonLocals_35);
  parse_tree__prog_data__determinism_components_3_p_0(Detism_22, &_CanFail_36, &NumSolns_37);
  switch (NumSolns_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      InstMapDelta_38 = InstMapDelta0_20;
      break;
    case (MR_Integer) 0:
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&InstMapDelta_38);
      break;
  }
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_14, PredId_29, &PredInfo_39);
  hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_39, &PredPurity_40);
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_4[0]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (hlds__goal_util__generate_plain_call_13_p_0_1));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (Purity_23));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) (PredPurity_40));
  }
  mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140hlds.goal_util.generate_plain_call\'/13", (MR_String) "purity disagreement");
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_35, InstMapDelta_38, Detism_22, Purity_23, Context_25, &GoalInfo0_41);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_util_scalar_common_3[1]), Features_24, ((MR_Box) (GoalInfo0_41)), &conv1_GoalInfo_42);
  GoalInfo_42 = ((MR_Word) (conv1_GoalInfo_42));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_26 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_34));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_42));
  }
}

void MR_CALL 
hlds__goal_util__create_conj_4_p_0(
  MR_Word GoalA_5,
  MR_Word GoalB_6,
  MR_Word Type_7,
  MR_Word * ConjGoal_8)
{
  MR_Word Var_9;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (GoalB_6));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (GoalA_5));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_10));
  }
  hlds__goal_util__create_conj_from_list_3_p_0(Var_9, Type_7, ConjGoal_8);
}

void MR_CALL 
hlds__goal_util__create_conj_from_list_3_p_0(
  MR_Word Conjuncts_4,
  MR_Word ConjType_5,
  MR_Word * ConjGoal_6)
{
  if ((Conjuncts_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.create_conj_from_list\'/3", (MR_String) "empty conjunction");
      return;
    }
  else
  {
    MR_Word HeadGoal_7 = ((MR_Word) ((MR_hl_field(1, Conjuncts_4, 0))));
    MR_Word TailGoals_8 = ((MR_Word) ((MR_hl_field(1, Conjuncts_4, 1))));

    if ((TailGoals_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *ConjGoal_6 = HeadGoal_7;
    else
    {
      MR_Word ConjGoalExpr_11;
      MR_Word NonLocals_12;
      MR_Word InstMapDelta_13;
      MR_Word Detism_14;
      MR_Word Purity_15;
      MR_Word HeadGoalInfo_17;
      MR_Word Context_18;
      MR_Word ConjGoalInfo_19;

      {
        ConjGoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ConjGoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ConjGoalExpr_11, 1) = (MR_Box) ((MR_Unsigned) (ConjType_5));
        MR_hl_field(3, ConjGoalExpr_11, 2) = ((MR_Box) (Conjuncts_4));
      }
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(Conjuncts_4, &NonLocals_12);
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(Conjuncts_4, &InstMapDelta_13);
      hlds__hlds_goal__goal_list_determinism_2_p_0(Conjuncts_4, &Detism_14);
      hlds__hlds_goal__goal_list_purity_2_p_0(Conjuncts_4, &Purity_15);
      HeadGoalInfo_17 = ((MR_Word) ((MR_hl_field(0, HeadGoal_7, 1))));
      Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(HeadGoalInfo_17);
      hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_12, InstMapDelta_13, Detism_14, Purity_15, Context_18, &ConjGoalInfo_19);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *ConjGoal_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (ConjGoalExpr_11));
        MR_hl_field(0, base, 1) = ((MR_Box) (ConjGoalInfo_19));
      }
    }
  }
}

static void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_Size_6;

  hlds__goal_util__clause_size_increment_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_Size_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Size_6));
}

void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0(
  MR_Word Clauses_3,
  MR_Integer * GoalSize_4)
{
  MR_bool succeeded;
  MR_Integer GoalSize0_5;
  MR_Box conv1_GoalSize0_5;
  MR_Word Var_9;

  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__goal_util_scalar_common_3[0]), Clauses_3, ((MR_Box) ((MR_Integer) 0)), &conv1_GoalSize0_5);
  GoalSize0_5 = ((MR_Integer) (conv1_GoalSize0_5));
  succeeded = (Clauses_3 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_9 = ((MR_Word) ((MR_hl_field(1, Clauses_3, 1))));
    succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    *GoalSize_4 = GoalSize0_5;
  else
    *GoalSize_4 = (MR_Integer) ((MR_Unsigned) GoalSize0_5 + (MR_Unsigned) 1);
}

void MR_CALL 
hlds__goal_util__goal_size_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Size_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_42 = (MR_Word) ((MR_Word) (GoalExpr_3));
          MR_Integer Size1_73;

          hlds__goal_util__goal_size_2_p_0(SubGoal_42, &Size1_73);
          *Size_5 = (MR_Integer) ((MR_Unsigned) Size1_73 + (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *Size_5 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_3, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *Size_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_29 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_3, 1))) & (MR_Integer) 1);
              MR_Word Goals_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 2))));
              MR_Integer InnerSize_31;

              hlds__goal_util__goals_size_2_p_0(Goals_30, &InnerSize_31);
              switch (ConjType_29) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *Size_5 = (MR_Integer) ((MR_Unsigned) InnerSize_31 + (MR_Unsigned) 1);
                  break;
                case (MR_Integer) 0:
                  *Size_5 = InnerSize_31;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Size1_32;
              MR_Word Goals_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 1))));

              hlds__goal_util__goals_size_2_p_0(Goals_70, &Size1_32);
              *Size_5 = (MR_Integer) ((MR_Unsigned) Size1_32 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 3))));
              MR_Integer Size1_71;

              hlds__goal_util__cases_size_2_p_0(Cases_35, &Size1_71);
              *Size_5 = (MR_Integer) ((MR_Unsigned) Size1_71 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 1))));
              MR_Word SubGoal_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 2))));
              MR_Word Var_64;

              succeeded = ((((MR_tag((MR_Word) Reason_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_43, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_64 = ((MR_Unsigned) ((MR_hl_field(3, Reason_43, 2))) & (MR_Integer) 3);
                succeeded = (Var_64 == (MR_Integer) 1);
              }
              if (succeeded)
                *Size_5 = (MR_Integer) 1;
              else
              {
                MR_Integer Size1_74;

                hlds__goal_util__goal_size_2_p_0(SubGoal_75, &Size1_74);
                *Size_5 = (MR_Integer) ((MR_Unsigned) Size1_74 + (MR_Unsigned) 1);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 2))));
              MR_Word Then_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 3))));
              MR_Word Else_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 4))));
              MR_Integer Size2_40;
              MR_Integer Size3_41;
              MR_Integer Var_60;
              MR_Integer Var_61;
              MR_Integer Size1_72;

              hlds__goal_util__goal_size_2_p_0(Cond_37, &Size1_72);
              hlds__goal_util__goal_size_2_p_0(Then_38, &Size2_40);
              hlds__goal_util__goal_size_2_p_0(Else_39, &Size3_41);
              Var_61 = (MR_Integer) ((MR_Unsigned) Size1_72 + (MR_Unsigned) Size2_40);
              Var_60 = (MR_Integer) ((MR_Unsigned) Var_61 + (MR_Unsigned) Size3_41);
              *Size_5 = (MR_Integer) ((MR_Unsigned) Var_60 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 1))));

              switch (MR_tag((MR_Word) ShortHand_45)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_55 = ((MR_Word) ((MR_hl_field(0, ShortHand_45, 0))));
                    MR_Word GoalB_56 = ((MR_Word) ((MR_hl_field(0, ShortHand_45, 1))));
                    MR_Integer Var_68;
                    MR_Integer Size1_79;
                    MR_Integer Size2_80;

                    hlds__goal_util__goal_size_2_p_0(GoalA_55, &Size1_79);
                    hlds__goal_util__goal_size_2_p_0(GoalB_56, &Size2_80);
                    Var_68 = (MR_Integer) ((MR_Unsigned) Size1_79 + (MR_Unsigned) Size2_80);
                    *Size_5 = (MR_Integer) ((MR_Unsigned) Var_68 + (MR_Unsigned) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_50 = ((MR_Word) ((MR_hl_field(1, ShortHand_45, 4))));
                    MR_Word OrElseGoals_51 = ((MR_Word) ((MR_hl_field(1, ShortHand_45, 5))));
                    MR_Integer Var_66;
                    MR_Integer Size1_76;
                    MR_Integer Size2_77;

                    hlds__goal_util__goal_size_2_p_0(MainGoal_50, &Size1_76);
                    hlds__goal_util__goals_size_2_p_0(OrElseGoals_51, &Size2_77);
                    Var_66 = (MR_Integer) ((MR_Unsigned) Size1_76 + (MR_Unsigned) Size2_77);
                    *Size_5 = (MR_Integer) ((MR_Unsigned) Var_66 + (MR_Unsigned) 1);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_78 = ((MR_Word) ((MR_hl_field(2, ShortHand_45, 2))));
                    MR_Word next_value_of_HeadVar__1_1 = SubGoal_78;

                    // direct tailcall eliminated
                    ;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
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
hlds__goal_util__cases_size_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Integer) 0;
  else
  {
    MR_Word Goal_5;
    MR_Word Cases_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Integer Size1_8;
    MR_Integer Size2_9;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word GoalExpr_11;

    Goal_5 = ((MR_Word) ((MR_hl_field(0, Var_10, 2))));
    GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal_5, 0))));
    switch (MR_tag((MR_Word) GoalExpr_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_49 = (MR_Word) ((MR_Word) (GoalExpr_11));
          MR_Integer Size1_80;

          hlds__goal_util__goal_size_2_p_0(SubGoal_49, &Size1_80);
          Size1_8 = (MR_Integer) ((MR_Unsigned) Size1_80 + (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Size1_8 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_11, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            Size1_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_36 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_11, 1))) & (MR_Integer) 1);
              MR_Word Goals_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
              MR_Integer InnerSize_38;

              hlds__goal_util__goals_size_2_p_0(Goals_37, &InnerSize_38);
              switch (ConjType_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  Size1_8 = (MR_Integer) ((MR_Unsigned) InnerSize_38 + (MR_Unsigned) 1);
                  break;
                case (MR_Integer) 0:
                  Size1_8 = InnerSize_38;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Size1_39;
              MR_Word Goals_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));

              hlds__goal_util__goals_size_2_p_0(Goals_77, &Size1_39);
              Size1_8 = (MR_Integer) ((MR_Unsigned) Size1_39 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 3))));
              MR_Integer Size1_78;

              hlds__goal_util__cases_size_2_p_0(Cases_42, &Size1_78);
              Size1_8 = (MR_Integer) ((MR_Unsigned) Size1_78 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));
              MR_Word SubGoal_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
              MR_Word Var_71;

              succeeded = ((((MR_tag((MR_Word) Reason_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_50, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_71 = ((MR_Unsigned) ((MR_hl_field(3, Reason_50, 2))) & (MR_Integer) 3);
                succeeded = (Var_71 == (MR_Integer) 1);
              }
              if (succeeded)
                Size1_8 = (MR_Integer) 1;
              else
              {
                MR_Integer Size1_81;

                hlds__goal_util__goal_size_2_p_0(SubGoal_82, &Size1_81);
                Size1_8 = (MR_Integer) ((MR_Unsigned) Size1_81 + (MR_Unsigned) 1);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
              MR_Word Then_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 3))));
              MR_Word Else_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 4))));
              MR_Integer Size2_47;
              MR_Integer Size3_48;
              MR_Integer Var_67;
              MR_Integer Var_68;
              MR_Integer Size1_79;

              hlds__goal_util__goal_size_2_p_0(Cond_44, &Size1_79);
              hlds__goal_util__goal_size_2_p_0(Then_45, &Size2_47);
              hlds__goal_util__goal_size_2_p_0(Else_46, &Size3_48);
              Var_68 = (MR_Integer) ((MR_Unsigned) Size1_79 + (MR_Unsigned) Size2_47);
              Var_67 = (MR_Integer) ((MR_Unsigned) Var_68 + (MR_Unsigned) Size3_48);
              Size1_8 = (MR_Integer) ((MR_Unsigned) Var_67 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));

              switch (MR_tag((MR_Word) ShortHand_52)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_62 = ((MR_Word) ((MR_hl_field(0, ShortHand_52, 0))));
                    MR_Word GoalB_63 = ((MR_Word) ((MR_hl_field(0, ShortHand_52, 1))));
                    MR_Integer Var_75;
                    MR_Integer Size1_86;
                    MR_Integer Size2_87;

                    hlds__goal_util__goal_size_2_p_0(GoalA_62, &Size1_86);
                    hlds__goal_util__goal_size_2_p_0(GoalB_63, &Size2_87);
                    Var_75 = (MR_Integer) ((MR_Unsigned) Size1_86 + (MR_Unsigned) Size2_87);
                    Size1_8 = (MR_Integer) ((MR_Unsigned) Var_75 + (MR_Unsigned) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_57 = ((MR_Word) ((MR_hl_field(1, ShortHand_52, 4))));
                    MR_Word OrElseGoals_58 = ((MR_Word) ((MR_hl_field(1, ShortHand_52, 5))));
                    MR_Integer Var_73;
                    MR_Integer Size1_83;
                    MR_Integer Size2_84;

                    hlds__goal_util__goal_size_2_p_0(MainGoal_57, &Size1_83);
                    hlds__goal_util__goals_size_2_p_0(OrElseGoals_58, &Size2_84);
                    Var_73 = (MR_Integer) ((MR_Unsigned) Size1_83 + (MR_Unsigned) Size2_84);
                    Size1_8 = (MR_Integer) ((MR_Unsigned) Var_73 + (MR_Unsigned) 1);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_85 = ((MR_Word) ((MR_hl_field(2, ShortHand_52, 2))));

                    hlds__goal_util__goal_size_2_p_0(SubGoal_85, &Size1_8);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    hlds__goal_util__cases_size_2_p_0(Cases_6, &Size2_9);
    *HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Size1_8 + (MR_Unsigned) Size2_9);
  }
}

void MR_CALL 
hlds__goal_util__goals_size_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Integer) 0;
  else
  {
    MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Integer Size1_6;
    MR_Integer Size2_7;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));

    switch (MR_tag((MR_Word) GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_46 = (MR_Word) ((MR_Word) (GoalExpr_8));
          MR_Integer Size1_77;

          hlds__goal_util__goal_size_2_p_0(SubGoal_46, &Size1_77);
          Size1_6 = (MR_Integer) ((MR_Unsigned) Size1_77 + (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Size1_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            Size1_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_8, 1))) & (MR_Integer) 1);
              MR_Word Goals_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
              MR_Integer InnerSize_35;

              hlds__goal_util__goals_size_2_p_0(Goals_34, &InnerSize_35);
              switch (ConjType_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  Size1_6 = (MR_Integer) ((MR_Unsigned) InnerSize_35 + (MR_Unsigned) 1);
                  break;
                case (MR_Integer) 0:
                  Size1_6 = InnerSize_35;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Size1_36;
              MR_Word Goals_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 1))));

              hlds__goal_util__goals_size_2_p_0(Goals_74, &Size1_36);
              Size1_6 = (MR_Integer) ((MR_Unsigned) Size1_36 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 3))));
              MR_Integer Size1_75;

              hlds__goal_util__cases_size_2_p_0(Cases_39, &Size1_75);
              Size1_6 = (MR_Integer) ((MR_Unsigned) Size1_75 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 1))));
              MR_Word SubGoal_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
              MR_Word Var_68;

              succeeded = ((((MR_tag((MR_Word) Reason_47)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_47, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_68 = ((MR_Unsigned) ((MR_hl_field(3, Reason_47, 2))) & (MR_Integer) 3);
                succeeded = (Var_68 == (MR_Integer) 1);
              }
              if (succeeded)
                Size1_6 = (MR_Integer) 1;
              else
              {
                MR_Integer Size1_78;

                hlds__goal_util__goal_size_2_p_0(SubGoal_79, &Size1_78);
                Size1_6 = (MR_Integer) ((MR_Unsigned) Size1_78 + (MR_Unsigned) 1);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
              MR_Word Then_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 3))));
              MR_Word Else_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 4))));
              MR_Integer Size2_44;
              MR_Integer Size3_45;
              MR_Integer Var_64;
              MR_Integer Var_65;
              MR_Integer Size1_76;

              hlds__goal_util__goal_size_2_p_0(Cond_41, &Size1_76);
              hlds__goal_util__goal_size_2_p_0(Then_42, &Size2_44);
              hlds__goal_util__goal_size_2_p_0(Else_43, &Size3_45);
              Var_65 = (MR_Integer) ((MR_Unsigned) Size1_76 + (MR_Unsigned) Size2_44);
              Var_64 = (MR_Integer) ((MR_Unsigned) Var_65 + (MR_Unsigned) Size3_45);
              Size1_6 = (MR_Integer) ((MR_Unsigned) Var_64 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 1))));

              switch (MR_tag((MR_Word) ShortHand_49)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_59 = ((MR_Word) ((MR_hl_field(0, ShortHand_49, 0))));
                    MR_Word GoalB_60 = ((MR_Word) ((MR_hl_field(0, ShortHand_49, 1))));
                    MR_Integer Var_72;
                    MR_Integer Size1_83;
                    MR_Integer Size2_84;

                    hlds__goal_util__goal_size_2_p_0(GoalA_59, &Size1_83);
                    hlds__goal_util__goal_size_2_p_0(GoalB_60, &Size2_84);
                    Var_72 = (MR_Integer) ((MR_Unsigned) Size1_83 + (MR_Unsigned) Size2_84);
                    Size1_6 = (MR_Integer) ((MR_Unsigned) Var_72 + (MR_Unsigned) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_54 = ((MR_Word) ((MR_hl_field(1, ShortHand_49, 4))));
                    MR_Word OrElseGoals_55 = ((MR_Word) ((MR_hl_field(1, ShortHand_49, 5))));
                    MR_Integer Var_70;
                    MR_Integer Size1_80;
                    MR_Integer Size2_81;

                    hlds__goal_util__goal_size_2_p_0(MainGoal_54, &Size1_80);
                    hlds__goal_util__goals_size_2_p_0(OrElseGoals_55, &Size2_81);
                    Var_70 = (MR_Integer) ((MR_Unsigned) Size1_80 + (MR_Unsigned) Size2_81);
                    Size1_6 = (MR_Integer) ((MR_Unsigned) Var_70 + (MR_Unsigned) 1);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_82 = ((MR_Word) ((MR_hl_field(2, ShortHand_49, 2))));

                    hlds__goal_util__goal_size_2_p_0(SubGoal_82, &Size1_6);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    hlds__goal_util__goals_size_2_p_0(Goals_4, &Size2_7);
    *HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Size1_6 + (MR_Unsigned) Size2_7);
  }
}

MR_bool MR_CALL 
hlds__goal_util__goal_is_branched_1_p_0(
  MR_Word GoalExpr_2)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr_2)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_2, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 4:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 6:
          succeeded = MR_TRUE;
          break;
      }
      break;
  }
  return succeeded;
}

void MR_CALL 
hlds__goal_util__goal_is_atomic_2_p_0(
  MR_Word Goal_3,
  MR_Word * GoalIsAtomic_4)
{
  MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));

  switch (MR_tag((MR_Word) GoalExpr_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *GoalIsAtomic_4 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *GoalIsAtomic_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          *GoalIsAtomic_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
          *GoalIsAtomic_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.goal_is_atomic\'/2", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IsLeaf_5;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_51 = (MR_Word) ((MR_Word) (GoalExpr_3));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_51;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UnifyKind_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_3, 3))));

          switch (MR_tag((MR_Word) UnifyKind_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              IsLeaf_5 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, UnifyKind_9, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  IsLeaf_5 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  IsLeaf_5 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        IsLeaf_5 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_3, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            IsLeaf_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 2))));

              IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(Goals_50);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_81 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 1))));

              IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(Goals_81);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 3))));

              IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_cases_1_f_0(Cases_57);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 1))));
              MR_Word SubGoal_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 2))));
              MR_Word FGT_54;

              succeeded = ((((MR_tag((MR_Word) Reason_52)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_52, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_54 = ((MR_Unsigned) ((MR_hl_field(3, Reason_52, 2))) & (MR_Integer) 3);
                switch (FGT_54) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                IsLeaf_5 = (MR_Integer) 0;
              else
              {
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_80;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 2))));
              MR_Word Then_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 3))));
              MR_Word Else_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 4))));
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;

              Var_75 = hlds__goal_util__proc_body_is_leaf_1_f_0(Cond_59);
              succeeded = (Var_75 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_76 = hlds__goal_util__proc_body_is_leaf_1_f_0(Then_60);
                succeeded = (Var_76 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_77 = hlds__goal_util__proc_body_is_leaf_1_f_0(Else_61);
                  succeeded = (Var_77 == (MR_Integer) 0);
                }
              }
              if (succeeded)
                IsLeaf_5 = (MR_Integer) 0;
              else
                IsLeaf_5 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 1))));

              switch (MR_tag((MR_Word) ShortHand_62)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_73 = ((MR_Word) ((MR_hl_field(0, ShortHand_62, 0))));
                    MR_Word GoalB_74 = ((MR_Word) ((MR_hl_field(0, ShortHand_62, 1))));
                    MR_Word Var_78;
                    MR_Word Var_79;

                    Var_78 = hlds__goal_util__proc_body_is_leaf_1_f_0(GoalA_73);
                    succeeded = (Var_78 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_79 = hlds__goal_util__proc_body_is_leaf_1_f_0(GoalB_74);
                      succeeded = (Var_79 == (MR_Integer) 0);
                    }
                    if (succeeded)
                      IsLeaf_5 = (MR_Integer) 0;
                    else
                      IsLeaf_5 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  IsLeaf_5 = (MR_Integer) 1;
                  break;
              }
            }
            break;
        }
        break;
    }
    return IsLeaf_5;
    break;
  }
}

static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_cases_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Integer) 0;
  else
  {
    MR_Word Case_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(0, Case_3, 2))));
    MR_Word Var_9;
    MR_Word Var_10;

    Var_9 = hlds__goal_util__proc_body_is_leaf_1_f_0(Goal_8);
    succeeded = (Var_9 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_10 = hlds__goal_util__proc_body_is_leaf_cases_1_f_0(Cases_4);
      succeeded = (Var_10 == (MR_Integer) 0);
    }
    if (succeeded)
      HeadVar__2_2 = (MR_Integer) 0;
    else
      HeadVar__2_2 = (MR_Integer) 1;
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_goals_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Integer) 0;
  else
  {
    MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_6;
    MR_Word Var_7;

    Var_6 = hlds__goal_util__proc_body_is_leaf_1_f_0(Goal_3);
    succeeded = (Var_6 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_7 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(Goals_4);
      succeeded = (Var_7 == (MR_Integer) 0);
    }
    if (succeeded)
      HeadVar__2_2 = (MR_Integer) 0;
    else
      HeadVar__2_2 = (MR_Integer) 1;
  }
  return HeadVar__2_2;
}

static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0_s * env_ptr = (struct hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0_s *) (env_ptr_arg);

  *((env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__conv1_LambdaHeadVar__1_28));
  ((env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__cont)((env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__cont_env_ptr);
}

static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0_s env;

  (env).hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__cont = cont;
  (env).hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__396__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &(env).hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__conv1_LambdaHeadVar__1_28, hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_2, &env);
  }
}

static MR_Box MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_25;

  conv0_LambdaHeadVar__2_25 = hlds__goal_util__IntroducedFrom__func__do_extra_nonlocal_typeinfos_typeclass_infos__385__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_25));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0(
  MR_Word RttiVarMaps_6,
  MR_Word VarTable_7,
  MR_Word ExistQVars_8,
  MR_Word NonLocals_9,
  MR_Word * NonLocalTiTciVars_10)
{
  MR_Word NonLocalsList_11;
  MR_Word NonLocalsTypes_12;
  MR_Word NonLocalTypeVarsList0_14;
  MR_Word NonLocalTypeVarsList_15;
  MR_Word NonLocalTypeVars_16;
  MR_Word TypeVarToProgVar_17;
  MR_Word NonLocalTypeInfoVars_18;
  MR_Word NonLocalTypeClassInfoVarsList_19;
  MR_Word NonLocalTypeClassInfoVars_20;
  MR_Word Var_21;
  MR_Word Var_22;

  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_9, &NonLocalsList_11);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_7, NonLocalsList_11, &NonLocalsTypes_12);
  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(NonLocalsTypes_12, &NonLocalTypeVarsList0_14);
  NonLocalTypeVarsList_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[1]), ExistQVars_8, NonLocalTypeVarsList0_14);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NonLocalTypeVarsList_15, &NonLocalTypeVars_16);
  {
    TypeVarToProgVar_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeVarToProgVar_17, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_2[0]));
    MR_hl_field(0, TypeVarToProgVar_17, 1) = ((MR_Box) (hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_1));
    MR_hl_field(0, TypeVarToProgVar_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, TypeVarToProgVar_17, 3) = ((MR_Box) (RttiVarMaps_6));
  }
  Var_21 = mercury__list__map_2_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[1]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), TypeVarToProgVar_17, NonLocalTypeVarsList_15);
  NonLocalTypeInfoVars_18 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_21);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_2[1]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (RttiVarMaps_6));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) (NonLocalTypeVars_16));
  }
  mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__goal_util_scalar_common_1[0]), Var_22, &NonLocalTypeClassInfoVarsList_19);
  parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalTypeClassInfoVarsList_19, &NonLocalTypeClassInfoVars_20);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalTypeInfoVars_18, NonLocalTypeClassInfoVars_20, NonLocalTiTciVars_10);
}

void MR_CALL 
hlds__goal_util__clone_variables_vs_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OldVarNames_2,
  MR_Word OldVarTypes_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Word STATE_VARIABLE_VarTypes_0_6,
  MR_Word * STATE_VARIABLE_VarTypes_7,
  MR_Word STATE_VARIABLE_Renaming_0_8,
  MR_Word * STATE_VARIABLE_Renaming_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Renaming_9 = STATE_VARIABLE_Renaming_0_8;
      *STATE_VARIABLE_VarTypes_7 = STATE_VARIABLE_VarTypes_0_6;
      *STATE_VARIABLE_VarSet_5 = STATE_VARIABLE_VarSet_0_4;
    }
    else
    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_VarSet_1_35;
      MR_Word STATE_VARIABLE_VarTypes_1_36;
      MR_Word STATE_VARIABLE_Renaming_1_37;
      MR_Word _CloneVar_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_4;
      MR_Word next_value_of_STATE_VARIABLE_VarTypes_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_8;

      hlds__goal_util__clone_variable_vs_10_p_0(Var_21, OldVarNames_2, OldVarTypes_3, STATE_VARIABLE_VarSet_0_4, &STATE_VARIABLE_VarSet_1_35, STATE_VARIABLE_VarTypes_0_6, &STATE_VARIABLE_VarTypes_1_36, STATE_VARIABLE_Renaming_0_8, &STATE_VARIABLE_Renaming_1_37, &_CloneVar_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_22;
      next_value_of_STATE_VARIABLE_VarSet_0_4 = STATE_VARIABLE_VarSet_1_35;
      next_value_of_STATE_VARIABLE_VarTypes_0_6 = STATE_VARIABLE_VarTypes_1_36;
      next_value_of_STATE_VARIABLE_Renaming_0_8 = STATE_VARIABLE_Renaming_1_37;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarSet_0_4 = next_value_of_STATE_VARIABLE_VarSet_0_4;
      STATE_VARIABLE_VarTypes_0_6 = next_value_of_STATE_VARIABLE_VarTypes_0_6;
      STATE_VARIABLE_Renaming_0_8 = next_value_of_STATE_VARIABLE_Renaming_0_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__goal_util__clone_variables_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OldVarTable_2,
  MR_Word STATE_VARIABLE_VarTable_0_3,
  MR_Word * STATE_VARIABLE_VarTable_4,
  MR_Word STATE_VARIABLE_Renaming_0_5,
  MR_Word * STATE_VARIABLE_Renaming_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Renaming_6 = STATE_VARIABLE_Renaming_0_5;
      *STATE_VARIABLE_VarTable_4 = STATE_VARIABLE_VarTable_0_3;
    }
    else
    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Vars_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_VarTable_1_24;
      MR_Word STATE_VARIABLE_Renaming_1_25;
      MR_Word _Clone_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarTable_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_5;

      hlds__goal_util__clone_variable_7_p_0(Var_14, OldVarTable_2, STATE_VARIABLE_VarTable_0_3, &STATE_VARIABLE_VarTable_1_24, STATE_VARIABLE_Renaming_0_5, &STATE_VARIABLE_Renaming_1_25, &_Clone_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_15;
      next_value_of_STATE_VARIABLE_VarTable_0_3 = STATE_VARIABLE_VarTable_1_24;
      next_value_of_STATE_VARIABLE_Renaming_0_5 = STATE_VARIABLE_Renaming_1_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarTable_0_3 = next_value_of_STATE_VARIABLE_VarTable_0_3;
      STATE_VARIABLE_Renaming_0_5 = next_value_of_STATE_VARIABLE_Renaming_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__goal_util__clone_variable_vs_10_p_0(
  MR_Word Var_11,
  MR_Word OldVarNames_12,
  MR_Word OldVarTypes_13,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_VarTypes_0_23,
  MR_Word * STATE_VARIABLE_VarTypes_24,
  MR_Word STATE_VARIABLE_Renaming_0_25,
  MR_Word * STATE_VARIABLE_Renaming_26,
  MR_Word * CloneVar_17)
{
  MR_bool succeeded;
  MR_Word CloneVarPrime_18;
  MR_Box conv0_CloneVarPrime_18;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), STATE_VARIABLE_Renaming_0_25, ((MR_Box) (Var_11)), &conv0_CloneVarPrime_18);
  if (succeeded)
  {
    CloneVarPrime_18 = ((MR_Word) (conv0_CloneVarPrime_18));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *CloneVar_17 = CloneVarPrime_18;
    *STATE_VARIABLE_Renaming_26 = STATE_VARIABLE_Renaming_0_25;
    *STATE_VARIABLE_VarTypes_24 = STATE_VARIABLE_VarTypes_0_23;
    *STATE_VARIABLE_VarSet_22 = STATE_VARIABLE_VarSet_0_21;
  }
  else
  {
    MR_String Name_19;
    MR_Word VarType_20;

    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVarNames_12, Var_11, &Name_19);
    if (succeeded)
      mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_19, CloneVar_17, STATE_VARIABLE_VarSet_0_21, STATE_VARIABLE_VarSet_22);
    else
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CloneVar_17, STATE_VARIABLE_VarSet_0_21, STATE_VARIABLE_VarSet_22);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), ((MR_Box) (Var_11)), ((MR_Box) (*CloneVar_17)), STATE_VARIABLE_Renaming_0_25, STATE_VARIABLE_Renaming_26);
    succeeded = parse_tree__vartypes__search_var_type_3_p_0(OldVarTypes_13, Var_11, &VarType_20);
    if (succeeded)
      parse_tree__vartypes__add_var_type_4_p_0(*CloneVar_17, VarType_20, STATE_VARIABLE_VarTypes_0_23, STATE_VARIABLE_VarTypes_24);
    else
      *STATE_VARIABLE_VarTypes_24 = STATE_VARIABLE_VarTypes_0_23;
  }
}

void MR_CALL 
hlds__goal_util__clone_variable_7_p_0(
  MR_Word Var_8,
  MR_Word OldVarTable_9,
  MR_Word STATE_VARIABLE_VarTable_0_15,
  MR_Word * STATE_VARIABLE_VarTable_16,
  MR_Word STATE_VARIABLE_Renaming_0_17,
  MR_Word * STATE_VARIABLE_Renaming_18,
  MR_Word * CloneVar_12)
{
  MR_bool succeeded;
  MR_Word CloneVarPrime_13;
  MR_Box conv0_CloneVarPrime_13;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), STATE_VARIABLE_Renaming_0_17, ((MR_Box) (Var_8)), &conv0_CloneVarPrime_13);
  if (succeeded)
  {
    CloneVarPrime_13 = ((MR_Word) (conv0_CloneVarPrime_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *CloneVar_12 = CloneVarPrime_13;
    *STATE_VARIABLE_Renaming_18 = STATE_VARIABLE_Renaming_0_17;
    *STATE_VARIABLE_VarTable_16 = STATE_VARIABLE_VarTable_0_15;
  }
  else
  {
    MR_Word Entry_14;

    parse_tree__var_table__lookup_var_entry_3_p_0(OldVarTable_9, Var_8, &Entry_14);
    parse_tree__var_table__add_var_entry_4_p_0(Entry_14, CloneVar_12, STATE_VARIABLE_VarTable_0_15, STATE_VARIABLE_VarTable_16);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), ((MR_Box) (Var_8)), ((MR_Box) (*CloneVar_12)), STATE_VARIABLE_Renaming_0_17, STATE_VARIABLE_Renaming_18);
  }
}

void MR_CALL 
hlds__goal_util__create_renaming_7_p_0(
  MR_Word OrigVars_8,
  MR_Word InstMapDelta_9,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17,
  MR_Word * Unifies_11,
  MR_Word * NewVars_12,
  MR_Word * Renaming_13)
{
  MR_Word RevUnifies_14;
  MR_Word RevNewVars_15;
  MR_Word Var_21;

  Var_21 = mercury__map__init_0_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]));
  hlds__goal_util__create_renaming_2_10_p_0(OrigVars_8, InstMapDelta_9, STATE_VARIABLE_VarTable_0_16, STATE_VARIABLE_VarTable_17, (MR_Word) ((MR_Unsigned) 0U), &RevUnifies_14, (MR_Word) ((MR_Unsigned) 0U), &RevNewVars_15, Var_21, Renaming_13);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), RevNewVars_15, NewVars_12);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevUnifies_14, Unifies_11);
}

static void MR_CALL 
hlds__goal_util__create_renaming_2_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMapDelta_2,
  MR_Word STATE_VARIABLE_VarTable_0_3,
  MR_Word * STATE_VARIABLE_VarTable_4,
  MR_Word STATE_VARIABLE_RevUnifies_0_5,
  MR_Word * STATE_VARIABLE_RevUnifies_6,
  MR_Word STATE_VARIABLE_RevNewVars_0_7,
  MR_Word * STATE_VARIABLE_RevNewVars_8,
  MR_Word STATE_VARIABLE_Renaming_0_9,
  MR_Word * STATE_VARIABLE_Renaming_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Renaming_10 = STATE_VARIABLE_Renaming_0_9;
      *STATE_VARIABLE_RevNewVars_8 = STATE_VARIABLE_RevNewVars_0_7;
      *STATE_VARIABLE_RevUnifies_6 = STATE_VARIABLE_RevUnifies_0_5;
      *STATE_VARIABLE_VarTable_4 = STATE_VARIABLE_VarTable_0_3;
    }
    else
    {
      MR_Word OrigVar_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word OrigVars_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word OrigEntry_31;
      MR_Word OrigType_33;
      MR_Word OrigTypeIsDummy_34;
      MR_Word NewEntry_35;
      MR_Word NewVar_36;
      MR_Word NewInst_37;
      MR_Word UnifyMode_38;
      MR_Word Unification_39;
      MR_Word GoalExpr_41;
      MR_Word NonLocals_42;
      MR_Word UnifyInstMapDelta_43;
      MR_Word GoalInfo_44;
      MR_Word Goal_45;
      MR_Word STATE_VARIABLE_VarTable_1_55;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_70;
      MR_Word STATE_VARIABLE_RevUnifies_1_71;
      MR_Word STATE_VARIABLE_Renaming_1_72;
      MR_Word STATE_VARIABLE_RevNewVars_1_73;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarTable_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevUnifies_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevNewVars_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_9;

      parse_tree__var_table__lookup_var_entry_3_p_0(STATE_VARIABLE_VarTable_0_3, OrigVar_24, &OrigEntry_31);
      OrigType_33 = ((MR_Word) ((MR_hl_field(0, OrigEntry_31, 1))));
      OrigTypeIsDummy_34 = ((MR_Unsigned) ((MR_hl_field(0, OrigEntry_31, 2))) & (MR_Integer) 1);
      {
        NewEntry_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewEntry_35, 0) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(0, NewEntry_35, 1) = ((MR_Box) (OrigType_33));
        MR_hl_field(0, NewEntry_35, 2) = (MR_Box) ((MR_Unsigned) (OrigTypeIsDummy_34));
      }
      parse_tree__var_table__add_var_entry_4_p_0(NewEntry_35, &NewVar_36, STATE_VARIABLE_VarTable_0_3, &STATE_VARIABLE_VarTable_1_55);
      hlds__instmap__instmap_delta_lookup_var_3_p_0(InstMapDelta_2, OrigVar_24, &NewInst_37);
      {
        UnifyMode_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UnifyMode_38, 0) = ((MR_Box) (NewInst_37));
        MR_hl_field(0, UnifyMode_38, 1) = ((MR_Box) (NewInst_37));
        MR_hl_field(0, UnifyMode_38, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, UnifyMode_38, 3) = ((MR_Box) (NewInst_37));
      }
      {
        Unification_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Unification_39, 0) = ((MR_Box) (OrigVar_24));
        MR_hl_field(2, Unification_39, 1) = ((MR_Box) (NewVar_36));
      }
      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_61, 0) = ((MR_Box) (NewVar_36));
      }
      {
        GoalExpr_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, GoalExpr_41, 0) = ((MR_Box) (OrigVar_24));
        MR_hl_field(1, GoalExpr_41, 1) = ((MR_Box) (Var_61));
        MR_hl_field(1, GoalExpr_41, 2) = ((MR_Box) (UnifyMode_38));
        MR_hl_field(1, GoalExpr_41, 3) = ((MR_Box) (Unification_39));
        MR_hl_field(1, GoalExpr_41, 4) = ((MR_Box) (&hlds__goal_util_scalar_common_1[2]));
      }
      {
        Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_63, 0) = ((MR_Box) (NewVar_36));
        MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_62, 0) = ((MR_Box) (OrigVar_24));
        MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
      }
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_62, &NonLocals_42);
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_66, 0) = ((MR_Box) (OrigVar_24));
        MR_hl_field(0, Var_66, 1) = ((MR_Box) (NewInst_37));
      }
      {
        Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      UnifyInstMapDelta_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_65);
      Var_70 = mercury__term_context__dummy_context_0_f_0();
      hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_42, UnifyInstMapDelta_43, (MR_Integer) 0, (MR_Integer) 0, Var_70, &GoalInfo_44);
      {
        Goal_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Goal_45, 0) = ((MR_Box) (GoalExpr_41));
        MR_hl_field(0, Goal_45, 1) = ((MR_Box) (GoalInfo_44));
      }
      {
        STATE_VARIABLE_RevUnifies_1_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevUnifies_1_71, 0) = ((MR_Box) (Goal_45));
        MR_hl_field(1, STATE_VARIABLE_RevUnifies_1_71, 1) = ((MR_Box) (STATE_VARIABLE_RevUnifies_0_5));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), ((MR_Box) (OrigVar_24)), ((MR_Box) (NewVar_36)), STATE_VARIABLE_Renaming_0_9, &STATE_VARIABLE_Renaming_1_72);
      {
        STATE_VARIABLE_RevNewVars_1_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevNewVars_1_73, 0) = ((MR_Box) (NewVar_36));
        MR_hl_field(1, STATE_VARIABLE_RevNewVars_1_73, 1) = ((MR_Box) (STATE_VARIABLE_RevNewVars_0_7));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = OrigVars_25;
      next_value_of_STATE_VARIABLE_VarTable_0_3 = STATE_VARIABLE_VarTable_1_55;
      next_value_of_STATE_VARIABLE_RevUnifies_0_5 = STATE_VARIABLE_RevUnifies_1_71;
      next_value_of_STATE_VARIABLE_RevNewVars_0_7 = STATE_VARIABLE_RevNewVars_1_73;
      next_value_of_STATE_VARIABLE_Renaming_0_9 = STATE_VARIABLE_Renaming_1_72;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarTable_0_3 = next_value_of_STATE_VARIABLE_VarTable_0_3;
      STATE_VARIABLE_RevUnifies_0_5 = next_value_of_STATE_VARIABLE_RevUnifies_0_5;
      STATE_VARIABLE_RevNewVars_0_7 = next_value_of_STATE_VARIABLE_RevNewVars_0_7;
      STATE_VARIABLE_Renaming_0_9 = next_value_of_STATE_VARIABLE_Renaming_0_9;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__goal_util__apply_goal_info_instmap_delta_3_p_0(
  MR_Word GoalInfo0_4,
  MR_Word STATE_VARIABLE_InstMap_0_7,
  MR_Word * STATE_VARIABLE_InstMap_8)
{
  MR_Word DeltaInstMap_6;

  DeltaInstMap_6 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_4);
  hlds__instmap__apply_instmap_delta_3_p_0(DeltaInstMap_6, STATE_VARIABLE_InstMap_0_7, STATE_VARIABLE_InstMap_8);
}

void MR_CALL 
hlds__goal_util__apply_goal_instmap_delta_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstMap_0_8,
  MR_Word * STATE_VARIABLE_InstMap_9)
{
  MR_Word GoalInfo0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word DeltaInstMap_7;

  DeltaInstMap_7 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_5);
  hlds__instmap__apply_instmap_delta_3_p_0(DeltaInstMap_7, STATE_VARIABLE_InstMap_0_8, STATE_VARIABLE_InstMap_9);
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_util____Unify____goal_is_atomic_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_util____Compare____goal_is_atomic_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_util____Unify____is_leaf_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_util____Compare____is_leaf_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__goal_util__init(void)
{
}

void mercury__hlds__goal_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__goal_util__hlds__goal_util__type_ctor_info_goal_is_atomic_0);
  MR_register_type_ctor_info(&hlds__goal_util__hlds__goal_util__type_ctor_info_is_leaf_0);
}

void mercury__hlds__goal_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__goal_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.goal_util.
