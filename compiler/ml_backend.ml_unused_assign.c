/*
** Automatically generated from `ml_unused_assign.m'
** by the Mercury compiler,
** version rotd-2026-07-18
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


// :- module ml_backend.ml_unused_assign.
// :- implementation.

/*
INIT mercury__ml_backend__ml_unused_assign__init
ENDINIT
*/

#include "ml_backend.ml_unused_assign.mih"


#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0;

static const MR_EnumFunctorDesc ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_ordinal_ordered_original_or_optimized_code_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_name_ordered_original_or_optimized_code_0[2];

static const MR_Integer ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__functor_number_map_original_or_optimized_code_0[2];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unused_assign__set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_unused_assign__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_label_0set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unused_assign__maybe__ti_maybe_1set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0;

static const MR_PseudoTypeInfo ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__field_types_ua_info_0_0[5];

static const MR_ConstString ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__field_names_ua_info_0_0[5];

static const MR_DuArgLocn ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__field_locns_ua_info_0_0[5];

static const MR_DuFunctorDesc ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_functor_desc_ua_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_stag_ordered_ua_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_ptag_ordered_ua_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_name_ordered_ua_info_0[1];

static const MR_Integer ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__functor_number_map_ua_info_0[1];

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__IntroducedFrom__pred__delete_unused_in_switch_cases__394__1_1_p_0(
  MR_Word SeenInMatch_26);

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____ua_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____ua_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____original_or_optimized_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____original_or_optimized_code_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_typed_rval_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Seen_0_7,
  MR_Word * STATE_VARIABLE_Seen_8);

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_outline_arg_3_p_0(
  MR_Word OutlineArg_4,
  MR_Word STATE_VARIABLE_Seen_0_10,
  MR_Word * STATE_VARIABLE_Seen_11);

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_target_component_3_p_0(
  MR_Word Component_4,
  MR_Word STATE_VARIABLE_Seen_0_13,
  MR_Word * STATE_VARIABLE_Seen_14);

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_match_cond_3_p_0(
  MR_Word MatchCond_4,
  MR_Word STATE_VARIABLE_Seen_0_9,
  MR_Word * STATE_VARIABLE_Seen_10);

static MR_Box MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_func_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_func_defns_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SeenBefore_0_3,
  MR_Word * STATE_VARIABLE_SeenBefore_4);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_SeenBefore_0_4,
  MR_Word * STATE_VARIABLE_SeenBefore_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_default_6_p_0(
  MR_Word Default0_7,
  MR_Word * Default_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0(
  MR_Word Stmt0_7,
  MR_Word * StmtCord_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_81,
  MR_Word * STATE_VARIABLE_Info_82);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_6_p_0(
  MR_Word Stmt0_7,
  MR_Word * Stmt_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_rev_stmts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * SeenBefore_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmts_6_p_0(
  MR_Word Stmts0_7,
  MR_Word * Stmts_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
ml_backend__ml_unused_assign__accumulate_label_seen_sets_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Seen_0_2,
  MR_Word * STATE_VARIABLE_Seen_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
ml_backend__ml_unused_assign__get_seen_set_at_label_4_p_0(
  MR_Word Label_5,
  MR_Word * SeenSetAtLabel_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
ml_backend__ml_unused_assign__keep_only_seen_local_var_defns_4_p_0(
  MR_Word STATE_VARIABLE_SeenBefore_0_1,
  MR_Word * STATE_VARIABLE_SeenBefore_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * StmtCord_6,
  MR_Word SeenAfter_7,
  MR_Word * SeenBefore_8);

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_rval_3_p_0(
  MR_Word tscc_proc_1_input_1_Rval_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Seen_20);

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_lval_3_p_0(
  MR_Word tscc_proc_2_input_1_Lval_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Seen_20);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____original_or_optimized_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____original_or_optimized_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____seen_at_label_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____seen_at_label_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____seen_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____seen_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____ua_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____ua_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_1[2][2];

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_2[10][3];

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_3[6][6];

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_4[1][4];

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_5[1][5];




static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_2[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[1])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[2])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[2])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[4])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[4])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_3[5])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_func_defns_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_3[6][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_outline_arg_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_4[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unused_assign_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
};





static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unused_assign__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0) }
};

static const MR_EnumFunctorDesc ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_0 = {
  (MR_String) "may_use_optimized_code",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_1 = {
  (MR_String) "must_use_original_code",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_ordinal_ordered_original_or_optimized_code_0[2] = {
  &ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_0,
  &ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_name_ordered_original_or_optimized_code_0[2] = {
  &ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_0,
  &ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_functor_desc_original_or_optimized_code_0_1
};

static const MR_Integer ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__functor_number_map_original_or_optimized_code_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_original_or_optimized_code_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_unused_assign____Unify____original_or_optimized_code_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unused_assign____Compare____original_or_optimized_code_0_0_10001)),
  (MR_String) "ml_backend.ml_unused_assign",
  (MR_String) "original_or_optimized_code",
  { ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_name_ordered_original_or_optimized_code_0 },
  { ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__enum_ordinal_ordered_original_or_optimized_code_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__functor_number_map_original_or_optimized_code_0,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unused_assign__set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0) }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_unused_assign__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_label_0set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0),
    (MR_TypeInfo) (&ml_backend__ml_unused_assign__set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_seen_at_label_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_unused_assign____Unify____seen_at_label_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unused_assign____Compare____seen_at_label_map_0_0_10001)),
  (MR_String) "ml_backend.ml_unused_assign",
  (MR_String) "seen_at_label_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__ml_unused_assign__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_label_0set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_seen_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_unused_assign____Unify____seen_set_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unused_assign____Compare____seen_set_0_0_10001)),
  (MR_String) "ml_backend.ml_unused_assign",
  (MR_String) "seen_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__ml_unused_assign__set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unused_assign__maybe__ti_maybe_1set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&ml_backend__ml_unused_assign__set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0) }
};

static const MR_PseudoTypeInfo ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__field_types_ua_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_unused_assign__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_label_0set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_unused_assign__maybe__ti_maybe_1set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_unused_assign__maybe__ti_maybe_1set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_unused_assign__maybe__ti_maybe_1set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_original_or_optimized_code_0)
};

static const MR_ConstString ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__field_names_ua_info_0_0[5] = {
  (MR_String) "uai_seen_at_label_map",
  (MR_String) "uai_seen_at_break_switch",
  (MR_String) "uai_seen_at_break_loop",
  (MR_String) "uai_seen_at_continue_loop",
  (MR_String) "uai_orig_opt_code"
};

static const MR_DuArgLocn ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__field_locns_ua_info_0_0[5] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_functor_desc_ua_info_0_0 = {
  (MR_String) "ua_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__field_types_ua_info_0_0,
  ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__field_names_ua_info_0_0,
  ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__field_locns_ua_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_stag_ordered_ua_info_0_0[1] = { &ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_functor_desc_ua_info_0_0 };

static const MR_DuPtagLayout ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_ptag_ordered_ua_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_stag_ordered_ua_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_name_ordered_ua_info_0[1] = { &ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_functor_desc_ua_info_0_0 };

static const MR_Integer ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__functor_number_map_ua_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_ua_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unused_assign____Unify____ua_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unused_assign____Compare____ua_info_0_0_10001)),
  (MR_String) "ml_backend.ml_unused_assign",
  (MR_String) "ua_info",
  { ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_name_ordered_ua_info_0 },
  { ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__du_ptag_ordered_ua_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__functor_number_map_ua_info_0,

};

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__IntroducedFrom__pred__delete_unused_in_switch_cases__394__1_1_p_0(
  MR_Word SeenInMatch_26)
{
  MR_bool succeeded;

  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenInMatch_26);
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____ua_info_0_0(
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
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Integer Var_25 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_26 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_25 < Var_26);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_25 > Var_26);
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
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____ua_info_0_0(
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
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
            succeeded = (ArgX5_11 == ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_unused_assign____Compare____seen_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____seen_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_unused_assign____Compare____seen_at_label_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____seen_at_label_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____original_or_optimized_code_0_0(
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

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____original_or_optimized_code_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_typed_rval_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Seen_0_7,
  MR_Word * STATE_VARIABLE_Seen_8)
{
  MR_Word Rval_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  ml_backend__ml_unused_assign__see_in_rval_3_p_0(Rval_4, STATE_VARIABLE_Seen_0_7, STATE_VARIABLE_Seen_8);
}

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_outline_arg_3_p_0(
  MR_Word OutlineArg_4,
  MR_Word STATE_VARIABLE_Seen_0_10,
  MR_Word * STATE_VARIABLE_Seen_11)
{
  switch (MR_tag((MR_Word) OutlineArg_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Seen_11 = STATE_VARIABLE_Seen_0_10;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval_8 = ((MR_Word) ((MR_hl_field(1, OutlineArg_4, 2))));

        ml_backend__ml_unused_assign__see_in_rval_3_p_0(Rval_8, STATE_VARIABLE_Seen_0_10, STATE_VARIABLE_Seen_11);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lval_9 = ((MR_Word) ((MR_hl_field(2, OutlineArg_4, 2))));

        ml_backend__ml_unused_assign__see_in_lval_3_p_0(Lval_9, STATE_VARIABLE_Seen_0_10, STATE_VARIABLE_Seen_11);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_target_component_3_p_0(
  MR_Word Component_4,
  MR_Word STATE_VARIABLE_Seen_0_13,
  MR_Word * STATE_VARIABLE_Seen_14)
{
  switch (MR_tag((MR_Word) Component_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Seen_14 = STATE_VARIABLE_Seen_0_13;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Seen_14 = STATE_VARIABLE_Seen_0_13;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Seen_14 = STATE_VARIABLE_Seen_0_13;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Component_4, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_11 = ((MR_Word) ((MR_hl_field(3, Component_4, 1))));

            ml_backend__ml_unused_assign__see_in_rval_3_p_0(Rval_11, STATE_VARIABLE_Seen_0_13, STATE_VARIABLE_Seen_14);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_12 = ((MR_Word) ((MR_hl_field(3, Component_4, 1))));

            ml_backend__ml_unused_assign__see_in_lval_3_p_0(Lval_12, STATE_VARIABLE_Seen_0_13, STATE_VARIABLE_Seen_14);
          }
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Seen_14 = STATE_VARIABLE_Seen_0_13;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Seen_14 = STATE_VARIABLE_Seen_0_13;
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_match_cond_3_p_0(
  MR_Word MatchCond_4,
  MR_Word STATE_VARIABLE_Seen_0_9,
  MR_Word * STATE_VARIABLE_Seen_10)
{
  if (((MR_tag((MR_Word) MatchCond_4)) == (MR_Integer) 1))
  {
    MR_Word MatchMinRval_7 = ((MR_Word) ((MR_hl_field(1, MatchCond_4, 0))));
    MR_Word MatchMaxRval_8 = ((MR_Word) ((MR_hl_field(1, MatchCond_4, 1))));
    MR_Word STATE_VARIABLE_Seen_2_12;

    ml_backend__ml_unused_assign__see_in_rval_3_p_0(MatchMinRval_7, STATE_VARIABLE_Seen_0_9, &STATE_VARIABLE_Seen_2_12);
    ml_backend__ml_unused_assign__see_in_rval_3_p_0(MatchMaxRval_8, STATE_VARIABLE_Seen_2_12, STATE_VARIABLE_Seen_10);
  }
  else
  {
    MR_Word MatchRval_6 = ((MR_Word) ((MR_hl_field(0, MatchCond_4, 0))));

    ml_backend__ml_unused_assign__see_in_rval_3_p_0(MatchRval_6, STATE_VARIABLE_Seen_0_9, STATE_VARIABLE_Seen_10);
  }
}

void MR_CALL 
ml_backend__ml_unused_assign__optimize_away_unused_assigns_in_proc_body_8_p_0(
  MR_Word ParamLocalVars_9,
  MR_Word SeenAtLabelMap0_10,
  MR_Word LocalVarDefns0_11,
  MR_Word * LocalVarDefns_12,
  MR_Word FuncDefns0_13,
  MR_Word * FuncDefns_14,
  MR_Word Stmts0_15,
  MR_Word * Stmts_16)
{
  MR_bool succeeded;
  MR_Word SeenAfter_17;
  MR_Word SeenAtContinueLoop0_20;
  MR_Word Info0_21;
  MR_Word Stmts1_22;
  MR_Word SeenBefore0_23;
  MR_Word Info_24;
  MR_Word FuncDefns1_25;
  MR_Word SeenBefore_26;
  MR_Word OrigOrOpt_27;
  MR_Word RevStmts0_35;
  MR_Word RevStmtsCord_36;

  mercury__set__list_to_set_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), ParamLocalVars_9, &SeenAfter_17);
  {
    SeenAtContinueLoop0_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SeenAtContinueLoop0_20, 0) = ((MR_Box) (SeenAfter_17));
  }
  {
    Info0_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_21, 0) = ((MR_Box) (SeenAtLabelMap0_10));
    MR_hl_field(0, Info0_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info0_21, 2) = ((MR_Box) (SeenAtContinueLoop0_20));
    MR_hl_field(0, Info0_21, 3) = ((MR_Box) (SeenAtContinueLoop0_20));
    MR_hl_field(0, Info0_21, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Stmts0_15, &RevStmts0_35);
  ml_backend__ml_unused_assign__delete_unused_in_rev_stmts_6_p_0(RevStmts0_35, &RevStmtsCord_36, SeenAfter_17, &SeenBefore0_23, Info0_21, &Info_24);
  Stmts1_22 = mercury__cord__rev_cord_list_to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), RevStmtsCord_36);
  ml_backend__ml_unused_assign__delete_unused_in_func_defns_4_p_0(FuncDefns0_13, &FuncDefns1_25, SeenBefore0_23, &SeenBefore_26);
  OrigOrOpt_27 = ((MR_Unsigned) ((MR_hl_field(0, Info_24, 4))) & (MR_Integer) 1);
  succeeded = (OrigOrOpt_27 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (FuncDefns0_13 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word Var_28;

    ml_backend__ml_unused_assign__keep_only_seen_local_var_defns_4_p_0(SeenBefore_26, &Var_28, LocalVarDefns0_11, LocalVarDefns_12);
    *FuncDefns_14 = FuncDefns1_25;
    *Stmts_16 = Stmts1_22;
  }
  else
  {
    *LocalVarDefns_12 = LocalVarDefns0_11;
    *FuncDefns_14 = FuncDefns0_13;
    *Stmts_16 = Stmts0_15;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_func_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__ml_util__project_mlds_argument_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_func_defns_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SeenBefore_0_3,
  MR_Word * STATE_VARIABLE_SeenBefore_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_SeenBefore_4 = STATE_VARIABLE_SeenBefore_0_3;
  }
  else
  {
    MR_Word FuncDefn0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word FuncDefns0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word FuncDefn_10;
    MR_Word FuncDefns_11;
    MR_Word SeenBeforeFunc_13;
    MR_Word STATE_VARIABLE_SeenBefore_1_16;
    MR_Word FuncName_18 = ((MR_Word) ((MR_hl_field(0, FuncDefn0_8, 0))));
    MR_Word Ctxt_19 = ((MR_Word) ((MR_hl_field(0, FuncDefn0_8, 1))));
    MR_Word Flags_20 = ((MR_Word) ((MR_hl_field(0, FuncDefn0_8, 2))));
    MR_Word MaybeOrigPredProcId_21 = ((MR_Word) ((MR_hl_field(0, FuncDefn0_8, 3))));
    MR_Word Params_22 = ((MR_Word) ((MR_hl_field(0, FuncDefn0_8, 4))));
    MR_Word Body0_23 = ((MR_Word) ((MR_hl_field(0, FuncDefn0_8, 5))));
    MR_Word EnvVars_24 = ((MR_Word) ((MR_hl_field(0, FuncDefn0_8, 6))));
    MR_Word MaybeTailRec_25 = ((MR_Word) ((MR_hl_field(0, FuncDefn0_8, 7))));

    if ((Body0_23 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unused_assign.delete_unused_in_func_defn\'/3", (MR_String) "body_external");
        return;
      }
    else
    {
      MR_Word Stmt0_26 = ((MR_Word) ((MR_hl_field(1, Body0_23, 0))));
      MR_Word SeenAtLabelMap0_27;
      MR_Word Info0_29;
      MR_Word Args_30;
      MR_Word ArgLocalVars_32;
      MR_Word SeenAfter_33;
      MR_Word Stmt_34;
      MR_Word Info_35;
      MR_Word OrigOrOpt_36;
      MR_Word StmtCord_50;
      MR_Word Stmts_51;

      mercury__map__init_1_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), &SeenAtLabelMap0_27);
      {
        Info0_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Info0_29, 0) = ((MR_Box) (SeenAtLabelMap0_27));
        MR_hl_field(0, Info0_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Info0_29, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Info0_29, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Info0_29, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      Args_30 = ((MR_Word) ((MR_hl_field(0, Params_22, 0))));
      ArgLocalVars_32 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[9]), Args_30);
      mercury__set__list_to_set_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), ArgLocalVars_32, &SeenAfter_33);
      ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0(Stmt0_26, &StmtCord_50, SeenAfter_33, &SeenBeforeFunc_13, Info0_29, &Info_35);
      Stmts_51 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), StmtCord_50);
      if ((Stmts_51 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Context_55;

        Context_55 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt0_26);
        {
          Stmt_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Stmt_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Stmt_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Stmt_34, 2) = ((MR_Box) (Stmts_51));
          MR_hl_field(0, Stmt_34, 3) = ((MR_Box) (Context_55));
        }
      }
      else
      {
        MR_Word Var_67 = ((MR_Word) ((MR_hl_field(1, Stmts_51, 1))));
        MR_Word Var_68 = ((MR_Word) ((MR_hl_field(1, Stmts_51, 0))));

        if ((Var_67 == (MR_Word) ((MR_Unsigned) 0U)))
          Stmt_34 = Var_68;
        else
        {
          MR_Word Context_61;

          Context_61 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt0_26);
          {
            Stmt_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Stmt_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Stmt_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Stmt_34, 2) = ((MR_Box) (Stmts_51));
            MR_hl_field(0, Stmt_34, 3) = ((MR_Box) (Context_61));
          }
        }
      }
      OrigOrOpt_36 = ((MR_Unsigned) ((MR_hl_field(0, Info_35, 4))) & (MR_Integer) 1);
      switch (OrigOrOpt_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Body_37;

            {
              Body_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Body_37, 0) = ((MR_Box) (Stmt_34));
            }
            {
              FuncDefn_10 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FuncDefn_10, 0) = ((MR_Box) (FuncName_18));
              MR_hl_field(0, FuncDefn_10, 1) = ((MR_Box) (Ctxt_19));
              MR_hl_field(0, FuncDefn_10, 2) = ((MR_Box) (Flags_20));
              MR_hl_field(0, FuncDefn_10, 3) = ((MR_Box) (MaybeOrigPredProcId_21));
              MR_hl_field(0, FuncDefn_10, 4) = ((MR_Box) (Params_22));
              MR_hl_field(0, FuncDefn_10, 5) = ((MR_Box) (Body_37));
              MR_hl_field(0, FuncDefn_10, 6) = ((MR_Box) (EnvVars_24));
              MR_hl_field(0, FuncDefn_10, 7) = ((MR_Box) (MaybeTailRec_25));
            }
          }
          break;
        case (MR_Integer) 1:
          FuncDefn_10 = FuncDefn0_8;
          break;
      }
    }
    mercury__set__union_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenBeforeFunc_13, STATE_VARIABLE_SeenBefore_0_3, &STATE_VARIABLE_SeenBefore_1_16);
    ml_backend__ml_unused_assign__delete_unused_in_func_defns_4_p_0(FuncDefns0_9, &FuncDefns_11, STATE_VARIABLE_SeenBefore_1_16, STATE_VARIABLE_SeenBefore_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FuncDefn_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (FuncDefns_11));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unused_assign__IntroducedFrom__pred__delete_unused_in_switch_cases__394__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Seen_10;

  ml_backend__ml_unused_assign__see_in_match_cond_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Seen_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Seen_10));
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_SeenBefore_0_4,
  MR_Word * STATE_VARIABLE_SeenBefore_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    *STATE_VARIABLE_SeenBefore_5 = STATE_VARIABLE_SeenBefore_0_4;
  }
  else
  {
    MR_Word Case0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_17;
    MR_Word Cases_18;
    MR_Word FirstMatchCond_22 = ((MR_Word) ((MR_hl_field(0, Case0_15, 0))));
    MR_Word LaterMatchConds_23 = ((MR_Word) ((MR_hl_field(0, Case0_15, 1))));
    MR_Word Stmt0_24 = ((MR_Word) ((MR_hl_field(0, Case0_15, 2))));
    MR_Word SeenInMatch0_25;
    MR_Word SeenInMatch_26;
    MR_Word Stmt_27;
    MR_Word SeenBeforeStmt_28;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_Info_1_38;
    MR_Word STATE_VARIABLE_SeenBefore_1_39;
    MR_Word StmtCord_50;
    MR_Word Stmts_51;
    MR_Box conv1_SeenInMatch_26;

    Var_33 = mercury__set__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0));
    if (((MR_tag((MR_Word) FirstMatchCond_22)) == (MR_Integer) 1))
    {
      MR_Word MatchMinRval_47 = ((MR_Word) ((MR_hl_field(1, FirstMatchCond_22, 0))));
      MR_Word MatchMaxRval_48 = ((MR_Word) ((MR_hl_field(1, FirstMatchCond_22, 1))));
      MR_Word STATE_VARIABLE_Seen_2_49;

      ml_backend__ml_unused_assign__see_in_rval_3_p_0(MatchMinRval_47, Var_33, &STATE_VARIABLE_Seen_2_49);
      ml_backend__ml_unused_assign__see_in_rval_3_p_0(MatchMaxRval_48, STATE_VARIABLE_Seen_2_49, &SeenInMatch0_25);
    }
    else
    {
      MR_Word MatchRval_46 = ((MR_Word) ((MR_hl_field(0, FirstMatchCond_22, 0))));

      ml_backend__ml_unused_assign__see_in_rval_3_p_0(MatchRval_46, Var_33, &SeenInMatch0_25);
    }
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[8]), LaterMatchConds_23, ((MR_Box) (SeenInMatch0_25)), &conv1_SeenInMatch_26);
    SeenInMatch_26 = ((MR_Word) (conv1_SeenInMatch_26));
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&ml_backend__ml_unused_assign_scalar_common_4[0]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0_2));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (SeenInMatch_26));
    }
    mercury__require__expect_3_p_0(Var_35, (MR_String) "predicate \140ml_backend.ml_unused_assign.delete_unused_in_switch_cases\'/7", (MR_String) "a variable occurs in a supposedly-constant match condition");
    ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0(Stmt0_24, &StmtCord_50, HeadVar__3_3, &SeenBeforeStmt_28, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_1_38);
    Stmts_51 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), StmtCord_50);
    if ((Stmts_51 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Context_55;

      Context_55 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt0_24);
      {
        Stmt_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Stmt_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Stmt_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Stmt_27, 2) = ((MR_Box) (Stmts_51));
        MR_hl_field(0, Stmt_27, 3) = ((MR_Box) (Context_55));
      }
    }
    else
    {
      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(1, Stmts_51, 1))));
      MR_Word Var_68 = ((MR_Word) ((MR_hl_field(1, Stmts_51, 0))));

      if ((Var_67 == (MR_Word) ((MR_Unsigned) 0U)))
        Stmt_27 = Var_68;
      else
      {
        MR_Word Context_61;

        Context_61 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt0_24);
        {
          Stmt_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Stmt_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Stmt_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Stmt_27, 2) = ((MR_Box) (Stmts_51));
          MR_hl_field(0, Stmt_27, 3) = ((MR_Box) (Context_61));
        }
      }
    }
    {
      Case_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_17, 0) = ((MR_Box) (FirstMatchCond_22));
      MR_hl_field(0, Case_17, 1) = ((MR_Box) (LaterMatchConds_23));
      MR_hl_field(0, Case_17, 2) = ((MR_Box) (Stmt_27));
    }
    mercury__set__union_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenBeforeStmt_28, STATE_VARIABLE_SeenBefore_0_4, &STATE_VARIABLE_SeenBefore_1_39);
    ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0(Cases0_16, &Cases_18, HeadVar__3_3, STATE_VARIABLE_SeenBefore_1_39, STATE_VARIABLE_SeenBefore_5, STATE_VARIABLE_Info_1_38, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_18));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_switch_default_6_p_0(
  MR_Word Default0_7,
  MR_Word * Default_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  switch (MR_tag((MR_Word) Default0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Default_8 = Default0_7;
        *SeenBefore_10 = SeenAfter_9;
        *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Stmt0_12 = ((MR_Word) ((MR_hl_field(1, Default0_7, 0))));
        MR_Word Stmt_13;
        MR_Word StmtCord_16;
        MR_Word Stmts_17;

        ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0(Stmt0_12, &StmtCord_16, SeenAfter_9, SeenBefore_10, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
        Stmts_17 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), StmtCord_16);
        if ((Stmts_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Context_21;

          Context_21 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt0_12);
          {
            Stmt_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Stmt_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Stmt_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Stmt_13, 2) = ((MR_Box) (Stmts_17));
            MR_hl_field(0, Stmt_13, 3) = ((MR_Box) (Context_21));
          }
        }
        else
        {
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, Stmts_17, 1))));
          MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, Stmts_17, 0))));

          if ((Var_33 == (MR_Word) ((MR_Unsigned) 0U)))
            Stmt_13 = Var_34;
          else
          {
            MR_Word Context_27;

            Context_27 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt0_12);
            {
              Stmt_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Stmt_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Stmt_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Stmt_13, 2) = ((MR_Box) (Stmts_17));
              MR_hl_field(0, Stmt_13, 3) = ((MR_Box) (Context_27));
            }
          }
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Default_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_13));
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Seen_20;

  ml_backend__ml_unused_assign__see_in_rval_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Seen_20);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Seen_20));
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Seen_20;

  ml_backend__ml_unused_assign__see_in_rval_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Seen_20);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Seen_20));
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Seen_21;

  ml_backend__ml_unused_assign__see_in_lval_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Seen_21);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Seen_21));
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0(
  MR_Word Stmt0_7,
  MR_Word * StmtCord_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_81,
  MR_Word * STATE_VARIABLE_Info_82)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Stmt0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LocalVarDefns0_12 = ((MR_Word) ((MR_hl_field(0, Stmt0_7, 0))));
        MR_Word BlockStmts0_14 = ((MR_Word) ((MR_hl_field(0, Stmt0_7, 2))));
        MR_Word Ctxt_15 = ((MR_Word) ((MR_hl_field(0, Stmt0_7, 3))));
        MR_Word BlockStmts_16;
        MR_Word SeenBefore0_17;
        MR_Word FuncDefns_20 = ((MR_Word) ((MR_hl_field(0, Stmt0_7, 1))));
        MR_Word LocalVarDefns_21;
        MR_Word STATE_VARIABLE_Info_1_83;

        ml_backend__ml_unused_assign__delete_unused_in_stmts_6_p_0(BlockStmts0_14, &BlockStmts_16, SeenAfter_9, &SeenBefore0_17, STATE_VARIABLE_Info_0_81, &STATE_VARIABLE_Info_1_83);
        if ((FuncDefns_20 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_1_83;
        else
        {
          MR_Word Var_158 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_83, 0))));
          MR_Word Var_159 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_83, 1))));
          MR_Word Var_160 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_83, 2))));
          MR_Word Var_161 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_83, 3))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_82 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_158));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_159));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_160));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_161));
            MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
        }
        ml_backend__ml_unused_assign__keep_only_seen_local_var_defns_4_p_0(SeenBefore0_17, SeenBefore_10, LocalVarDefns0_12, &LocalVarDefns_21);
        succeeded = (LocalVarDefns_21 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (FuncDefns_20 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          *StmtCord_8 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), BlockStmts_16);
        else
        {
          MR_Word Stmt_22;

          {
            Stmt_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Stmt_22, 0) = ((MR_Box) (LocalVarDefns_21));
            MR_hl_field(0, Stmt_22, 1) = ((MR_Box) (FuncDefns_20));
            MR_hl_field(0, Stmt_22, 2) = ((MR_Box) (BlockStmts_16));
            MR_hl_field(0, Stmt_22, 3) = ((MR_Box) (Ctxt_15));
          }
          *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt_22)));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LoopKind_23 = ((MR_Unsigned) ((MR_hl_field(1, Stmt0_7, 0))) & (MR_Integer) 1);
        MR_Word CondRval_24 = ((MR_Word) ((MR_hl_field(1, Stmt0_7, 1))));
        MR_Word BodyStmt0_25 = ((MR_Word) ((MR_hl_field(1, Stmt0_7, 2))));
        MR_Word LoopLocalVars_26 = ((MR_Word) ((MR_hl_field(1, Stmt0_7, 3))));
        MR_Word SeenAfterBody_27;
        MR_Word SeenAtBreakLoop0_28;
        MR_Word SeenAtContinueLoop0_29;
        MR_Word BodyStmt_30;
        MR_Word SeenBeforeBody_31;
        MR_Word Var_87;
        MR_Word STATE_VARIABLE_Info_4_88;
        MR_Word Var_89;
        MR_Word STATE_VARIABLE_Info_5_90;
        MR_Word Ctxt_129 = ((MR_Word) ((MR_hl_field(1, Stmt0_7, 4))));
        MR_Word Stmt_130;
        MR_Word Var_163;
        MR_Word Var_164;
        MR_Word Var_166;
        MR_Word Var_181;
        MR_Word Var_182;
        MR_Word Var_185;

        mercury__set__insert_list_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), LoopLocalVars_26, SeenAfter_9, &SeenAfterBody_27);
        Var_163 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 0))));
        Var_164 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 1))));
        SeenAtBreakLoop0_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 2))));
        SeenAtContinueLoop0_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 3))));
        Var_166 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 4))) & (MR_Integer) 1);
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) (SeenAfter_9));
        }
        {
          Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_89, 0) = ((MR_Box) (SeenAfterBody_27));
        }
        {
          STATE_VARIABLE_Info_4_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_4_88, 0) = ((MR_Box) (Var_163));
          MR_hl_field(0, STATE_VARIABLE_Info_4_88, 1) = ((MR_Box) (Var_164));
          MR_hl_field(0, STATE_VARIABLE_Info_4_88, 2) = ((MR_Box) (Var_87));
          MR_hl_field(0, STATE_VARIABLE_Info_4_88, 3) = ((MR_Box) (Var_89));
          MR_hl_field(0, STATE_VARIABLE_Info_4_88, 4) = (MR_Box) ((MR_Unsigned) (Var_166));
        }
        ml_backend__ml_unused_assign__delete_unused_in_stmt_6_p_0(BodyStmt0_25, &BodyStmt_30, SeenAfterBody_27, &SeenBeforeBody_31, STATE_VARIABLE_Info_4_88, &STATE_VARIABLE_Info_5_90);
        ml_backend__ml_unused_assign__see_in_rval_3_p_0(CondRval_24, SeenBeforeBody_31, SeenBefore_10);
        Var_181 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_5_90, 0))));
        Var_182 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_5_90, 1))));
        Var_185 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_5_90, 4))) & (MR_Integer) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_82 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_181));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_182));
          MR_hl_field(0, base, 2) = ((MR_Box) (SeenAtBreakLoop0_28));
          MR_hl_field(0, base, 3) = ((MR_Box) (SeenAtContinueLoop0_29));
          MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) (Var_185));
        }
        {
          Stmt_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Stmt_130, 0) = (MR_Box) ((MR_Unsigned) (LoopKind_23));
          MR_hl_field(1, Stmt_130, 1) = ((MR_Box) (CondRval_24));
          MR_hl_field(1, Stmt_130, 2) = ((MR_Box) (BodyStmt_30));
          MR_hl_field(1, Stmt_130, 3) = ((MR_Box) (LoopLocalVars_26));
          MR_hl_field(1, Stmt_130, 4) = ((MR_Box) (Ctxt_129));
        }
        *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt_130)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ThenStmt0_32 = ((MR_Word) ((MR_hl_field(2, Stmt0_7, 1))));
        MR_Word MaybeElseStmt0_33 = ((MR_Word) ((MR_hl_field(2, Stmt0_7, 2))));
        MR_Word ThenStmt_34;
        MR_Word SeenBeforeThen_35;
        MR_Word ElseStmt_36;
        MR_Word SeenBeforeThenElse_37;
        MR_Word STATE_VARIABLE_Info_8_93;
        MR_Word Ctxt_135 = ((MR_Word) ((MR_hl_field(2, Stmt0_7, 3))));
        MR_Word CondRval_137 = ((MR_Word) ((MR_hl_field(2, Stmt0_7, 0))));
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;

        ml_backend__ml_unused_assign__delete_unused_in_stmt_6_p_0(ThenStmt0_32, &ThenStmt_34, SeenAfter_9, &SeenBeforeThen_35, STATE_VARIABLE_Info_0_81, &STATE_VARIABLE_Info_8_93);
        if ((MaybeElseStmt0_33 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            ElseStmt_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ElseStmt_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ElseStmt_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ElseStmt_36, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ElseStmt_36, 3) = ((MR_Box) (Ctxt_135));
          }
          SeenBeforeThenElse_37 = SeenBeforeThen_35;
          *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_8_93;
        }
        else
        {
          MR_Word ElseStmt0_38 = ((MR_Word) ((MR_hl_field(1, MaybeElseStmt0_33, 0))));
          MR_Word SeenBeforeElse_39;

          ml_backend__ml_unused_assign__delete_unused_in_stmt_6_p_0(ElseStmt0_38, &ElseStmt_36, SeenAfter_9, &SeenBeforeElse_39, STATE_VARIABLE_Info_8_93, STATE_VARIABLE_Info_82);
          mercury__set__union_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenBeforeThen_35, SeenBeforeElse_39, &SeenBeforeThenElse_37);
        }
        succeeded = ((MR_tag((MR_Word) ThenStmt_34)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_98 = ((MR_Word) ((MR_hl_field(0, ThenStmt_34, 0))));
          Var_99 = ((MR_Word) ((MR_hl_field(0, ThenStmt_34, 1))));
          Var_100 = ((MR_Word) ((MR_hl_field(0, ThenStmt_34, 2))));
          succeeded = (Var_98 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (Var_99 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = (Var_100 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Word Var_103;

          succeeded = ((MR_tag((MR_Word) ElseStmt_36)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_101 = ((MR_Word) ((MR_hl_field(0, ElseStmt_36, 0))));
            Var_102 = ((MR_Word) ((MR_hl_field(0, ElseStmt_36, 1))));
            Var_103 = ((MR_Word) ((MR_hl_field(0, ElseStmt_36, 2))));
            succeeded = (Var_101 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (Var_102 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                succeeded = (Var_103 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
          {
            *SeenBefore_10 = SeenBeforeThenElse_37;
            *StmtCord_8 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0));
          }
          else
          {
            MR_Word Var_104;
            MR_Word Stmt_131;

            ml_backend__ml_unused_assign__see_in_rval_3_p_0(CondRval_137, SeenBeforeThenElse_37, SeenBefore_10);
            {
              Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_104, 0) = ((MR_Box) (ElseStmt_36));
            }
            {
              Stmt_131 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Stmt_131, 0) = ((MR_Box) (CondRval_137));
              MR_hl_field(2, Stmt_131, 1) = ((MR_Box) (ThenStmt_34));
              MR_hl_field(2, Stmt_131, 2) = ((MR_Box) (Var_104));
              MR_hl_field(2, Stmt_131, 3) = ((MR_Box) (Ctxt_135));
            }
            *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt_131)));
          }
        }
        else
        {
          MR_Word MaybeElseStmt_43;
          MR_Word Stmt_133;
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word Var_107;

          succeeded = ((MR_tag((MR_Word) ElseStmt_36)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_105 = ((MR_Word) ((MR_hl_field(0, ElseStmt_36, 0))));
            Var_106 = ((MR_Word) ((MR_hl_field(0, ElseStmt_36, 1))));
            Var_107 = ((MR_Word) ((MR_hl_field(0, ElseStmt_36, 2))));
            succeeded = (Var_105 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (Var_106 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                succeeded = (Var_107 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
            MaybeElseStmt_43 = (MR_Word) ((MR_Unsigned) 0U);
          else
            {
              MaybeElseStmt_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeElseStmt_43, 0) = ((MR_Box) (ElseStmt_36));
            }
          ml_backend__ml_unused_assign__see_in_rval_3_p_0(CondRval_137, SeenBeforeThenElse_37, SeenBefore_10);
          {
            Stmt_133 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Stmt_133, 0) = ((MR_Box) (CondRval_137));
            MR_hl_field(2, Stmt_133, 1) = ((MR_Box) (ThenStmt_34));
            MR_hl_field(2, Stmt_133, 2) = ((MR_Box) (MaybeElseStmt_43));
            MR_hl_field(2, Stmt_133, 3) = ((MR_Box) (Ctxt_135));
          }
          *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt_133)));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Stmt0_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SwitchValueType_44 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 1))));
            MR_Word SwitchRval_45 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 2))));
            MR_Word Range_46 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 3))));
            MR_Word Cases0_47 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 4))));
            MR_Word Default0_48 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 5))));
            MR_Word SeenAtBreakSwitch0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 1))));
            MR_Word Default_50;
            MR_Word SeenBeforeDefault_51;
            MR_Word Cases_52;
            MR_Word SeenBeforeDefaultCases_53;
            MR_Word STATE_VARIABLE_Info_10_108;
            MR_Word Var_109;
            MR_Word STATE_VARIABLE_Info_11_110;
            MR_Word STATE_VARIABLE_Info_12_111;
            MR_Word Ctxt_138 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 6))));
            MR_Word Stmt_139;
            MR_Word Var_191 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 0))));
            MR_Word Var_192 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 2))));
            MR_Word Var_193 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 3))));
            MR_Word Var_194 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 4))) & (MR_Integer) 1);
            MR_Word Var_200;
            MR_Word Var_202;
            MR_Word Var_203;
            MR_Word Var_204;

            {
              Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_109, 0) = ((MR_Box) (SeenAfter_9));
            }
            {
              STATE_VARIABLE_Info_10_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_10_108, 0) = ((MR_Box) (Var_191));
              MR_hl_field(0, STATE_VARIABLE_Info_10_108, 1) = ((MR_Box) (Var_109));
              MR_hl_field(0, STATE_VARIABLE_Info_10_108, 2) = ((MR_Box) (Var_192));
              MR_hl_field(0, STATE_VARIABLE_Info_10_108, 3) = ((MR_Box) (Var_193));
              MR_hl_field(0, STATE_VARIABLE_Info_10_108, 4) = (MR_Box) ((MR_Unsigned) (Var_194));
            }
            ml_backend__ml_unused_assign__delete_unused_in_switch_default_6_p_0(Default0_48, &Default_50, SeenAfter_9, &SeenBeforeDefault_51, STATE_VARIABLE_Info_10_108, &STATE_VARIABLE_Info_11_110);
            ml_backend__ml_unused_assign__delete_unused_in_switch_cases_7_p_0(Cases0_47, &Cases_52, SeenAfter_9, SeenBeforeDefault_51, &SeenBeforeDefaultCases_53, STATE_VARIABLE_Info_11_110, &STATE_VARIABLE_Info_12_111);
            Var_200 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_12_111, 0))));
            Var_202 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_12_111, 2))));
            Var_203 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_12_111, 3))));
            Var_204 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_12_111, 4))) & (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_82 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_200));
              MR_hl_field(0, base, 1) = ((MR_Box) (SeenAtBreakSwitch0_49));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_202));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_203));
              MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) (Var_204));
            }
            ml_backend__ml_unused_assign__see_in_rval_3_p_0(SwitchRval_45, SeenBeforeDefaultCases_53, SeenBefore_10);
            {
              Stmt_139 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Stmt_139, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Stmt_139, 1) = ((MR_Box) (SwitchValueType_44));
              MR_hl_field(3, Stmt_139, 2) = ((MR_Box) (SwitchRval_45));
              MR_hl_field(3, Stmt_139, 3) = ((MR_Box) (Range_46));
              MR_hl_field(3, Stmt_139, 4) = ((MR_Box) (Cases_52));
              MR_hl_field(3, Stmt_139, 5) = ((MR_Box) (Default_50));
              MR_hl_field(3, Stmt_139, 6) = ((MR_Box) (Ctxt_138));
            }
            *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt_139)));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Label_54 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 1))));
            MR_Word SeenAtLabelMap0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 0))));
            MR_Word SeenAtLabelMap_57;
            MR_Word Var_210;
            MR_Word Var_211;
            MR_Word Var_212;
            MR_Word Var_213;

            mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), ((MR_Box) (Label_54)), ((MR_Box) (SeenAfter_9)), SeenAtLabelMap0_56, &SeenAtLabelMap_57);
            Var_210 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 1))));
            Var_211 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 2))));
            Var_212 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 3))));
            Var_213 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 4))) & (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_82 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (SeenAtLabelMap_57));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_210));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_211));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_212));
              MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) (Var_213));
            }
            *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_7)));
            *SeenBefore_10 = SeenAfter_9;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Target_58 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 1))));

            *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_7)));
            switch (MR_tag((MR_Word) Target_58)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Target_58)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word SeenAtBreakSwitch_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 1))));

                      if ((SeenAtBreakSwitch_59 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unused_assign.delete_unused_in_stmt_return_cord\'/6", (MR_String) "SeenAtBreakSwitch = no");
                          return;
                        }
                      else
                        *SeenBefore_10 = ((MR_Word) ((MR_hl_field(1, SeenAtBreakSwitch_59, 0))));
                      *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_0_81;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word SeenAtBreakLoop_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 2))));

                      if ((SeenAtBreakLoop_60 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unused_assign.delete_unused_in_stmt_return_cord\'/6", (MR_String) "SeenAtBreakLoop = no");
                          return;
                        }
                      else
                        *SeenBefore_10 = ((MR_Word) ((MR_hl_field(1, SeenAtBreakLoop_60, 0))));
                      *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_0_81;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SeenAtContinueLoop_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, 3))));

                      if ((SeenAtContinueLoop_61 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unused_assign.delete_unused_in_stmt_return_cord\'/6", (MR_String) "SeenAtContinueLoop = no");
                          return;
                        }
                      else
                        *SeenBefore_10 = ((MR_Word) ((MR_hl_field(1, SeenAtContinueLoop_61, 0))));
                      *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_0_81;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Label_141 = ((MR_Word) ((MR_hl_field(1, Target_58, 0))));

                  ml_backend__ml_unused_assign__get_seen_set_at_label_4_p_0(Label_141, SeenBefore_10, STATE_VARIABLE_Info_0_81, STATE_VARIABLE_Info_82);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Rval_62 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 1))));
            MR_Word Labels_63 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 2))));
            MR_Word Var_121;
            MR_Word SeenBefore0_146;

            *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_7)));
            Var_121 = mercury__set__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0));
            ml_backend__ml_unused_assign__accumulate_label_seen_sets_5_p_0(Labels_63, Var_121, &SeenBefore0_146, STATE_VARIABLE_Info_0_81, STATE_VARIABLE_Info_82);
            ml_backend__ml_unused_assign__see_in_rval_3_p_0(Rval_62, SeenBefore0_146, SeenBefore_10);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word FuncRval_65 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 2))));
            MR_Word ArgRvals_66 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 3))));
            MR_Word ReturnValueLvals_67 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 4))));
            MR_Word SeenBefore1_69;
            MR_Word SeenBefore0_149;
            MR_Box conv1_SeenBefore0_149;
            MR_Box conv3_SeenBefore_10;

            *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_7)));
            mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[5]), ReturnValueLvals_67, ((MR_Box) (SeenAfter_9)), &conv1_SeenBefore0_149);
            SeenBefore0_149 = ((MR_Word) (conv1_SeenBefore0_149));
            ml_backend__ml_unused_assign__see_in_rval_3_p_0(FuncRval_65, SeenBefore0_149, &SeenBefore1_69);
            mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[6]), ArgRvals_66, ((MR_Box) (SeenBefore1_69)), &conv3_SeenBefore_10);
            *SeenBefore_10 = ((MR_Word) (conv3_SeenBefore_10));
            *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_0_81;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ReturnValueRvals_70 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 1))));
            MR_Word Var_126;
            MR_Box conv5_SeenBefore_10;

            *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_7)));
            Var_126 = mercury__set__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0));
            mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[7]), ReturnValueRvals_70, ((MR_Box) (Var_126)), &conv5_SeenBefore_10);
            *SeenBefore_10 = ((MR_Word) (conv5_SeenBefore_10));
            *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_0_81;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word RefLval_71 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 1))));
            MR_Word GoalStmt0_72 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 2))));
            MR_Word CommitStmt0_73 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 3))));
            MR_Word GoalStmt_74;
            MR_Word SeenBeforeGoal_75;
            MR_Word CommitStmt_76;
            MR_Word SeenBeforeCommit_77;
            MR_Word SeenBeforeGoalCommit_78;
            MR_Word STATE_VARIABLE_Info_17_127;
            MR_Word Ctxt_153 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 4))));
            MR_Word Stmt_154;

            ml_backend__ml_unused_assign__delete_unused_in_stmt_6_p_0(GoalStmt0_72, &GoalStmt_74, SeenAfter_9, &SeenBeforeGoal_75, STATE_VARIABLE_Info_0_81, &STATE_VARIABLE_Info_17_127);
            ml_backend__ml_unused_assign__delete_unused_in_stmt_6_p_0(CommitStmt0_73, &CommitStmt_76, SeenAfter_9, &SeenBeforeCommit_77, STATE_VARIABLE_Info_17_127, STATE_VARIABLE_Info_82);
            {
              Stmt_154 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Stmt_154, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Stmt_154, 1) = ((MR_Box) (RefLval_71));
              MR_hl_field(3, Stmt_154, 2) = ((MR_Box) (GoalStmt_74));
              MR_hl_field(3, Stmt_154, 3) = ((MR_Box) (CommitStmt_76));
              MR_hl_field(3, Stmt_154, 4) = ((MR_Box) (Ctxt_153));
            }
            *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt_154)));
            mercury__set__union_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenBeforeGoal_75, SeenBeforeCommit_77, &SeenBeforeGoalCommit_78);
            ml_backend__ml_unused_assign__see_in_lval_3_p_0(RefLval_71, SeenBeforeGoalCommit_78, SeenBefore_10);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word RefRval_79 = ((MR_Word) ((MR_hl_field(3, Stmt0_7, 1))));

            *StmtCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_7)));
            ml_backend__ml_unused_assign__see_in_rval_3_p_0(RefRval_79, SeenAfter_9, SeenBefore_10);
            *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_0_81;
          }
          break;
        case (MR_Integer) 8:
          {
            ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0(Stmt0_7, StmtCord_8, SeenAfter_9, SeenBefore_10);
            *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_0_81;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmt_6_p_0(
  MR_Word Stmt0_7,
  MR_Word * Stmt_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_Word StmtCord_12;
  MR_Word Stmts_15;

  ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0(Stmt0_7, &StmtCord_12, SeenAfter_9, SeenBefore_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
  Stmts_15 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), StmtCord_12);
  if ((Stmts_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Context_19;

    Context_19 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt0_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Stmt_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 2) = ((MR_Box) (Stmts_15));
      MR_hl_field(0, base, 3) = ((MR_Box) (Context_19));
    }
  }
  else
  {
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, Stmts_15, 1))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, Stmts_15, 0))));

    if ((Var_31 == (MR_Word) ((MR_Unsigned) 0U)))
      *Stmt_8 = Var_32;
    else
    {
      MR_Word Context_25;

      Context_25 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt0_7);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *Stmt_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, base, 2) = ((MR_Box) (Stmts_15));
        MR_hl_field(0, base, 3) = ((MR_Box) (Context_25));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_rev_stmts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * SeenBefore_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *SeenBefore_4 = SeenAfter_3;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word RevStmt0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word RevStmts0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word RevStmtCord_14;
    MR_Word RevStmtsCord_15;
    MR_Word SeenBetween_19;
    MR_Word STATE_VARIABLE_Info_1_22;

    ml_backend__ml_unused_assign__delete_unused_in_stmt_return_cord_6_p_0(RevStmt0_12, &RevStmtCord_14, SeenAfter_3, &SeenBetween_19, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_22);
    ml_backend__ml_unused_assign__delete_unused_in_rev_stmts_6_p_0(RevStmts0_13, &RevStmtsCord_15, SeenBetween_19, SeenBefore_4, STATE_VARIABLE_Info_1_22, STATE_VARIABLE_Info_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (RevStmtCord_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (RevStmtsCord_15));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_stmts_6_p_0(
  MR_Word Stmts0_7,
  MR_Word * Stmts_8,
  MR_Word SeenAfter_9,
  MR_Word * SeenBefore_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word RevStmts0_12;
  MR_Word RevStmtsCord_13;

  mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Stmts0_7, &RevStmts0_12);
  ml_backend__ml_unused_assign__delete_unused_in_rev_stmts_6_p_0(RevStmts0_12, &RevStmtsCord_13, SeenAfter_9, SeenBefore_10, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
  *Stmts_8 = mercury__cord__rev_cord_list_to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), RevStmtsCord_13);
}

static void MR_CALL 
ml_backend__ml_unused_assign__accumulate_label_seen_sets_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Seen_0_2,
  MR_Word * STATE_VARIABLE_Seen_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
      *STATE_VARIABLE_Seen_3 = STATE_VARIABLE_Seen_0_2;
    }
    else
    {
      MR_Word Label_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Labels_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word SeenAtLabel_16;
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word STATE_VARIABLE_Seen_1_22;
      MR_Word SeenAtLabelMap0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 0))));
      MR_Word SeenSetAtLabelPrime_25;
      MR_Box conv0_SeenSetAtLabelPrime_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Seen_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), SeenAtLabelMap0_24, ((MR_Box) (Label_12)), &conv0_SeenSetAtLabelPrime_25);
      if (succeeded)
      {
        SeenSetAtLabelPrime_25 = ((MR_Word) (conv0_SeenSetAtLabelPrime_25));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        SeenAtLabel_16 = SeenSetAtLabelPrime_25;
        STATE_VARIABLE_Info_1_21 = STATE_VARIABLE_Info_0_4;
      }
      else
      {
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 0))));
        MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 1))));
        MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 2))));
        MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, 3))));

        {
          STATE_VARIABLE_Info_1_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_1_21, 0) = ((MR_Box) (Var_31));
          MR_hl_field(0, STATE_VARIABLE_Info_1_21, 1) = ((MR_Box) (Var_32));
          MR_hl_field(0, STATE_VARIABLE_Info_1_21, 2) = ((MR_Box) (Var_33));
          MR_hl_field(0, STATE_VARIABLE_Info_1_21, 3) = ((MR_Box) (Var_34));
          MR_hl_field(0, STATE_VARIABLE_Info_1_21, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        mercury__set__init_1_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), &SeenAtLabel_16);
      }
      mercury__set__union_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenAtLabel_16, STATE_VARIABLE_Seen_0_2, &STATE_VARIABLE_Seen_1_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Labels_13;
      next_value_of_STATE_VARIABLE_Seen_0_2 = STATE_VARIABLE_Seen_1_22;
      next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Seen_0_2 = next_value_of_STATE_VARIABLE_Seen_0_2;
      STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__get_seen_set_at_label_4_p_0(
  MR_Word Label_5,
  MR_Word * SeenSetAtLabel_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_bool succeeded;
  MR_Word SeenAtLabelMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 0))));
  MR_Word SeenSetAtLabelPrime_9;
  MR_Box conv0_SeenSetAtLabelPrime_9;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), SeenAtLabelMap0_8, ((MR_Box) (Label_5)), &conv0_SeenSetAtLabelPrime_9);
  if (succeeded)
  {
    SeenSetAtLabelPrime_9 = ((MR_Word) (conv0_SeenSetAtLabelPrime_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *SeenSetAtLabel_6 = SeenSetAtLabelPrime_9;
    *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
  }
  else
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 0))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 3))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_11 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    mercury__set__init_1_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), SeenSetAtLabel_6);
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__keep_only_seen_local_var_defns_4_p_0(
  MR_Word STATE_VARIABLE_SeenBefore_0_1,
  MR_Word * STATE_VARIABLE_SeenBefore_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_SeenBefore_2 = STATE_VARIABLE_SeenBefore_0_1;
    }
    else
    {
      MR_Word HeadLocalVarDefn0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word TailLocalVarDefns0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word LocalVarName_12 = ((MR_Word) ((MR_hl_field(0, HeadLocalVarDefn0_9, 0))));
      MR_Word STATE_VARIABLE_SeenBefore_1_16;

      succeeded = mercury__set__remove_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), ((MR_Box) (LocalVarName_12)), STATE_VARIABLE_SeenBefore_0_1, &STATE_VARIABLE_SeenBefore_1_16);
      if (succeeded)
      {
        MR_Word TailLocalVarDefns_13;

        ml_backend__ml_unused_assign__keep_only_seen_local_var_defns_4_p_0(STATE_VARIABLE_SeenBefore_1_16, STATE_VARIABLE_SeenBefore_2, TailLocalVarDefns0_10, &TailLocalVarDefns_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadLocalVarDefn0_9));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailLocalVarDefns_13));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__3_3 = TailLocalVarDefns0_10;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Seen_11;

  ml_backend__ml_unused_assign__see_in_outline_arg_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Seen_11);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Seen_11));
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Seen_21;

  ml_backend__ml_unused_assign__see_in_lval_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Seen_21);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Seen_21));
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Seen_8;

  ml_backend__ml_unused_assign__see_in_typed_rval_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Seen_8);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Seen_8));
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Seen_14;

  ml_backend__ml_unused_assign__see_in_target_component_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Seen_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Seen_14));
}

static void MR_CALL 
ml_backend__ml_unused_assign__delete_unused_in_atomic_stmt_return_cord_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * StmtCord_6,
  MR_Word SeenAfter_7,
  MR_Word * SeenBefore_8)
{
  MR_bool succeeded;
  MR_Word AtomicStmt0_9 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 1))));

  switch (MR_tag((MR_Word) AtomicStmt0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
        *SeenBefore_8 = SeenAfter_7;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TargetLval_13 = ((MR_Word) ((MR_hl_field(2, AtomicStmt0_9, 0))));
        MR_Word SourceRval_14 = ((MR_Word) ((MR_hl_field(2, AtomicStmt0_9, 1))));
        MR_Word TargetLocalVarName_15;
        MR_Word TypeCtorInfo_55_55;

        succeeded = ((((MR_tag((MR_Word) TargetLval_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TargetLval_13, 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          TargetLocalVarName_15 = ((MR_Word) ((MR_hl_field(3, TargetLval_13, 1))));
          TypeCtorInfo_55_55 = (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0);
          succeeded = mercury__set__member_2_p_0(TypeCtorInfo_55_55, ((MR_Box) (TargetLocalVarName_15)), SeenAfter_7);
          succeeded = !(succeeded);
          if (succeeded)
            switch (MR_tag((MR_Word) TargetLocalVarName_15)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, TargetLocalVarName_15, 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word CompVar_24 = ((MR_Word) ((MR_hl_field(3, TargetLocalVarName_15, 1))));

                      succeeded = ((((MR_tag((MR_Word) CompVar_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, CompVar_24, 0)))) == (MR_Integer) 10)));
                    }
                    break;
                }
                break;
            }
        }
        if (succeeded)
        {
          *StmtCord_6 = mercury__cord__empty_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0));
          *SeenBefore_8 = SeenAfter_7;
        }
        else
        {
          MR_Word SeenBefore0_26;

          *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
          ml_backend__ml_unused_assign__see_in_lval_3_p_0(TargetLval_13, SeenAfter_7, &SeenBefore0_26);
          ml_backend__ml_unused_assign__see_in_rval_3_p_0(SourceRval_14, SeenBefore0_26, SeenBefore_8);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, AtomicStmt0_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TargetLval_107 = ((MR_Word) ((MR_hl_field(3, AtomicStmt0_9, 1))));
            MR_Word SourceRval_108 = ((MR_Word) ((MR_hl_field(3, AtomicStmt0_9, 2))));
            MR_Word TargetLocalVarName_91;
            MR_Word TypeCtorInfo_55_84;

            succeeded = ((((MR_tag((MR_Word) TargetLval_107)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TargetLval_107, 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              TargetLocalVarName_91 = ((MR_Word) ((MR_hl_field(3, TargetLval_107, 1))));
              TypeCtorInfo_55_84 = (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0);
              succeeded = mercury__set__member_2_p_0(TypeCtorInfo_55_84, ((MR_Box) (TargetLocalVarName_91)), SeenAfter_7);
              succeeded = !(succeeded);
              if (succeeded)
                switch (MR_tag((MR_Word) TargetLocalVarName_91)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, TargetLocalVarName_91, 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 1:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Word CompVar_87 = ((MR_Word) ((MR_hl_field(3, TargetLocalVarName_91, 1))));

                          succeeded = ((((MR_tag((MR_Word) CompVar_87)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, CompVar_87, 0)))) == (MR_Integer) 10)));
                        }
                        break;
                    }
                    break;
                }
            }
            if (succeeded)
            {
              *StmtCord_6 = mercury__cord__empty_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0));
              *SeenBefore_8 = SeenAfter_7;
            }
            else
            {
              MR_Word SeenBefore0_97;

              *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
              ml_backend__ml_unused_assign__see_in_lval_3_p_0(TargetLval_107, SeenAfter_7, &SeenBefore0_97);
              ml_backend__ml_unused_assign__see_in_rval_3_p_0(SourceRval_108, SeenBefore0_97, SeenBefore_8);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_27 = ((MR_Word) ((MR_hl_field(3, AtomicStmt0_9, 1))));

            *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
            ml_backend__ml_unused_assign__see_in_rval_3_p_0(Rval_27, SeenAfter_7, SeenBefore_8);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MaybeNumWordsRval_30 = ((MR_Word) ((MR_hl_field(3, AtomicStmt0_9, 5))));
            MR_Word ArgRvals_32 = ((MR_Word) ((MR_hl_field(3, AtomicStmt0_9, 7))));
            MR_Word SeenBefore1_35;
            MR_Word TargetLval_47 = ((MR_Word) ((MR_hl_field(3, AtomicStmt0_9, 1))));
            MR_Word SeenBefore0_49;
            MR_Box conv3_SeenBefore_8;

            *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
            ml_backend__ml_unused_assign__see_in_lval_3_p_0(TargetLval_47, SeenAfter_7, &SeenBefore0_49);
            if ((MaybeNumWordsRval_30 == (MR_Word) ((MR_Unsigned) 0U)))
              SeenBefore1_35 = SeenBefore0_49;
            else
            {
              MR_Word NumWordsRval_36 = ((MR_Word) ((MR_hl_field(1, MaybeNumWordsRval_30, 0))));

              ml_backend__ml_unused_assign__see_in_rval_3_p_0(NumWordsRval_36, SeenBefore0_49, &SeenBefore1_35);
            }
            mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[2]), ArgRvals_32, ((MR_Box) (SeenBefore1_35)), &conv3_SeenBefore_8);
            *SeenBefore_8 = ((MR_Word) (conv3_SeenBefore_8));
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TargetLval_50 = ((MR_Word) ((MR_hl_field(3, AtomicStmt0_9, 1))));

            *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
            ml_backend__ml_unused_assign__see_in_lval_3_p_0(TargetLval_50, SeenAfter_7, SeenBefore_8);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SourceRval_51 = ((MR_Word) ((MR_hl_field(3, AtomicStmt0_9, 1))));

            *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
            ml_backend__ml_unused_assign__see_in_rval_3_p_0(SourceRval_51, SeenAfter_7, SeenBefore_8);
          }
          break;
        case (MR_Integer) 5:
          {
            *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
            *SeenBefore_8 = SeenAfter_7;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Components_38 = ((MR_Word) ((MR_hl_field(3, AtomicStmt0_9, 2))));
            MR_Box conv1_SeenBefore_8;

            *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
            mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[1]), Components_38, ((MR_Box) (SeenAfter_7)), &conv1_SeenBefore_8);
            *SeenBefore_8 = ((MR_Word) (conv1_SeenBefore_8));
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word OutlineArgs_39 = ((MR_Word) ((MR_hl_field(3, AtomicStmt0_9, 2))));
            MR_Word ResultLvals_40 = ((MR_Word) ((MR_hl_field(3, AtomicStmt0_9, 3))));
            MR_Word SeenBefore0_53;
            MR_Box conv5_SeenBefore0_53;
            MR_Box conv7_SeenBefore_8;

            *StmtCord_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ((MR_Box) (Stmt0_5)));
            mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[3]), ResultLvals_40, ((MR_Box) (SeenAfter_7)), &conv5_SeenBefore0_53);
            SeenBefore0_53 = ((MR_Word) (conv5_SeenBefore0_53));
            mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_outline_arg_0), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unused_assign_scalar_common_2[4]), OutlineArgs_39, ((MR_Box) (SeenBefore0_53)), &conv7_SeenBefore_8);
            *SeenBefore_8 = ((MR_Word) (conv7_SeenBefore_8));
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_rval_3_p_0(
  MR_Word tscc_proc_1_input_1_Rval_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Seen_20)
{
  MR_Word tscc_proc_2_input_1_Lval_4;
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20;
  MR_Word tscc_output_1_STATE_VARIABLE_Seen_20;

  // The code for TSCC PROC 1: pred ml_backend.ml_unused_assign.see_in_rval/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.ml_unused_assign.see_in_rval/3-0
  ;
  // proc 2 in TSCC: pred ml_backend.ml_unused_assign.see_in_lval/3-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Rval_4 = tscc_proc_1_input_1_Rval_4;
    MR_Word STATE_VARIABLE_Seen_0_19 = tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
    MR_Word STATE_VARIABLE_Seen_20;

    switch (MR_tag((MR_Word) Rval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_6 = ((MR_Word) ((MR_hl_field(2, Rval_4, 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Lval_4 = Lval_6;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20 = STATE_VARIABLE_Seen_0_19;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Lval_4 = next_value_of_tscc_proc_2_input_1_Lval_4;
          tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRval_8 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_8;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
            break;
          case (MR_Integer) 2:
            {
              MR_Word BaseRvalA_11 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = BaseRvalA_11;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word BaseRvalA_30 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = BaseRvalA_30;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word BaseRvalA_29 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = BaseRvalA_29;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word BaseRvalA_31 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = BaseRvalA_31;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BaseRvalB_14 = ((MR_Word) ((MR_hl_field(3, Rval_4, 3))));
              MR_Word STATE_VARIABLE_Seen_4_24;
              MR_Word BaseRvalA_28 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;

              ml_backend__ml_unused_assign__see_in_rval_3_p_0(BaseRvalA_28, STATE_VARIABLE_Seen_0_19, &STATE_VARIABLE_Seen_4_24);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Rval_4 = BaseRvalB_14;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_4_24;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_32 = ((MR_Word) ((MR_hl_field(3, Rval_4, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Lval_4 = Lval_32;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20 = STATE_VARIABLE_Seen_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Lval_4 = next_value_of_tscc_proc_2_input_1_Lval_4;
              tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word SubRval_33 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_33;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_20;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Lval_4 = tscc_proc_2_input_1_Lval_4;
    MR_Word STATE_VARIABLE_Seen_0_20 = tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20;
    MR_Word STATE_VARIABLE_Seen_21;

    switch (MR_tag((MR_Word) Lval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word BaseRval_7 = ((MR_Word) ((MR_hl_field(0, Lval_4, 1))));
          MR_Word FieldId_9 = ((MR_Word) ((MR_hl_field(0, Lval_4, 3))));
          MR_Word STATE_VARIABLE_Seen_1_22;

          ml_backend__ml_unused_assign__see_in_rval_3_p_0(BaseRval_7, STATE_VARIABLE_Seen_0_20, &STATE_VARIABLE_Seen_1_22);
          if (((MR_tag((MR_Word) FieldId_9)) == (MR_Integer) 1))
            STATE_VARIABLE_Seen_21 = STATE_VARIABLE_Seen_1_22;
          else
          {
            MR_Word FieldRval_11 = ((MR_Word) ((MR_hl_field(0, FieldId_9, 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = FieldRval_11;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_1_22;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
            tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
            goto top_of_proc_1;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word AddrRval_14 = ((MR_Word) ((MR_hl_field(1, Lval_4, 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = AddrRval_14;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_0_20;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Seen_21 = STATE_VARIABLE_Seen_0_20;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_16 = ((MR_Word) ((MR_hl_field(3, Lval_4, 1))));

              mercury__set__insert_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), ((MR_Box) (LocalVarName_16)), STATE_VARIABLE_Seen_0_20, &STATE_VARIABLE_Seen_21);
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Seen_21 = STATE_VARIABLE_Seen_0_20;
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_21;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Seen_20 = tscc_output_1_STATE_VARIABLE_Seen_20;
  return;
}

static void MR_CALL 
ml_backend__ml_unused_assign__see_in_lval_3_p_0(
  MR_Word tscc_proc_2_input_1_Lval_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Seen_20)
{
  MR_Word tscc_proc_1_input_1_Rval_4;
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
  MR_Word tscc_output_1_STATE_VARIABLE_Seen_20;

  // The code for TSCC PROC 2: pred ml_backend.ml_unused_assign.see_in_lval/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.ml_unused_assign.see_in_rval/3-0
  ;
  // proc 2 in TSCC: pred ml_backend.ml_unused_assign.see_in_lval/3-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Rval_4 = tscc_proc_1_input_1_Rval_4;
    MR_Word STATE_VARIABLE_Seen_0_19 = tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
    MR_Word STATE_VARIABLE_Seen_20;

    switch (MR_tag((MR_Word) Rval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_6 = ((MR_Word) ((MR_hl_field(2, Rval_4, 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Lval_4 = Lval_6;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20 = STATE_VARIABLE_Seen_0_19;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Lval_4 = next_value_of_tscc_proc_2_input_1_Lval_4;
          tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRval_8 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_8;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
            break;
          case (MR_Integer) 2:
            {
              MR_Word BaseRvalA_11 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = BaseRvalA_11;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word BaseRvalA_30 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = BaseRvalA_30;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word BaseRvalA_29 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = BaseRvalA_29;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word BaseRvalA_31 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = BaseRvalA_31;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BaseRvalB_14 = ((MR_Word) ((MR_hl_field(3, Rval_4, 3))));
              MR_Word STATE_VARIABLE_Seen_4_24;
              MR_Word BaseRvalA_28 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;

              ml_backend__ml_unused_assign__see_in_rval_3_p_0(BaseRvalA_28, STATE_VARIABLE_Seen_0_19, &STATE_VARIABLE_Seen_4_24);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Rval_4 = BaseRvalB_14;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_4_24;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_32 = ((MR_Word) ((MR_hl_field(3, Rval_4, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Lval_4 = Lval_32;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20 = STATE_VARIABLE_Seen_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Lval_4 = next_value_of_tscc_proc_2_input_1_Lval_4;
              tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word SubRval_33 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_33;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_0_19;
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_20;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Lval_4 = tscc_proc_2_input_1_Lval_4;
    MR_Word STATE_VARIABLE_Seen_0_20 = tscc_proc_2_input_2_STATE_VARIABLE_Seen_0_20;
    MR_Word STATE_VARIABLE_Seen_21;

    switch (MR_tag((MR_Word) Lval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word BaseRval_7 = ((MR_Word) ((MR_hl_field(0, Lval_4, 1))));
          MR_Word FieldId_9 = ((MR_Word) ((MR_hl_field(0, Lval_4, 3))));
          MR_Word STATE_VARIABLE_Seen_1_22;

          ml_backend__ml_unused_assign__see_in_rval_3_p_0(BaseRval_7, STATE_VARIABLE_Seen_0_20, &STATE_VARIABLE_Seen_1_22);
          if (((MR_tag((MR_Word) FieldId_9)) == (MR_Integer) 1))
            STATE_VARIABLE_Seen_21 = STATE_VARIABLE_Seen_1_22;
          else
          {
            MR_Word FieldRval_11 = ((MR_Word) ((MR_hl_field(0, FieldId_9, 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = FieldRval_11;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_1_22;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
            tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
            goto top_of_proc_1;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word AddrRval_14 = ((MR_Word) ((MR_hl_field(1, Lval_4, 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = AddrRval_14;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = STATE_VARIABLE_Seen_0_20;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Seen_0_19;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Seen_21 = STATE_VARIABLE_Seen_0_20;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_16 = ((MR_Word) ((MR_hl_field(3, Lval_4, 1))));

              mercury__set__insert_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), ((MR_Box) (LocalVarName_16)), STATE_VARIABLE_Seen_0_20, &STATE_VARIABLE_Seen_21);
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Seen_21 = STATE_VARIABLE_Seen_0_20;
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Seen_20 = STATE_VARIABLE_Seen_21;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Seen_20 = tscc_output_1_STATE_VARIABLE_Seen_20;
  return;
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____original_or_optimized_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_unused_assign____Unify____original_or_optimized_code_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____original_or_optimized_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_unused_assign____Compare____original_or_optimized_code_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____seen_at_label_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_unused_assign____Unify____seen_at_label_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____seen_at_label_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_unused_assign____Compare____seen_at_label_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____seen_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_unused_assign____Unify____seen_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____seen_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_unused_assign____Compare____seen_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_unused_assign____Unify____ua_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_unused_assign____Unify____ua_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unused_assign____Compare____ua_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_unused_assign____Compare____ua_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__ml_unused_assign__init(void)
{
}

void mercury__ml_backend__ml_unused_assign__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_original_or_optimized_code_0);
  MR_register_type_ctor_info(&ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_seen_at_label_map_0);
  MR_register_type_ctor_info(&ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_seen_set_0);
  MR_register_type_ctor_info(&ml_backend__ml_unused_assign__ml_backend__ml_unused_assign__type_ctor_info_ua_info_0);
}

void mercury__ml_backend__ml_unused_assign__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_unused_assign__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_unused_assign.
