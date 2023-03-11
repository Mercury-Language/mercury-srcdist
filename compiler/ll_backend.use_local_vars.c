/*
** Automatically generated from `use_local_vars.m'
** by the Mercury compiler,
** version rotd-2023-03-11
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


// :- module ll_backend.use_local_vars.
// :- implementation.

/*
INIT mercury__ll_backend__use_local_vars__init
ENDINIT
*/

#include "ll_backend.use_local_vars.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.trace_params.mih"
#include "ll_backend.basic_block.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.exprn_aux.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.livemap.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_debug.mih"
#include "ll_backend.opt_util.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"



struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s {
  MR_Word ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__HeadVar__2_2;
  MR_bool ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded;
  MR_Word ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Outputs_10;
  jmp_buf ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__commit_0;
  MR_Word ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_21;
  MR_Word ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Var_29;
  MR_Box ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__conv0_Output_21;
};


static const MR_FA_TypeInfo_Struct1 ll_backend__use_local_vars__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__use_local_vars__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__maybe__pti_maybe_1__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__basic_block__type_ctor_info_block_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_PseudoTypeInfo ll_backend__use_local_vars__ll_backend__use_local_vars__field_types_maybe_compulsory_lvals_0_0[1];

static const MR_DuFunctorDesc ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_0;

static const MR_DuFunctorDesc ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_1;

static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_1[1];

static const MR_DuPtagLayout ll_backend__use_local_vars__ll_backend__use_local_vars__du_ptag_ordered_maybe_compulsory_lvals_0[2];

static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_name_ordered_maybe_compulsory_lvals_0[2];

static const MR_Integer ll_backend__use_local_vars__ll_backend__use_local_vars__functor_number_map_maybe_compulsory_lvals_0[2];

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__554__1_2_p_0(
  MR_Integer NumSubsts_32,
  MR_Integer HeadVar__2_43);

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__545__1_2_p_0(
  MR_Word OldLval_5,
  MR_Word ToLval_46);

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__539__1_2_p_0(
  MR_Word OldLval_5,
  MR_Word ToLval_11);

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__opt_access__423__1_2_p_0(
  MR_Word SubChosenLvals_32,
  MR_Word HeadVar__2_51);

static void MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__373__1_3_p_0(
  MR_Word LiveMap_33,
  MR_Word HeadVar__2_60,
  MR_Word * HeadVar__3_61);

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__349__1_2_p_0(
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__2_45);

static void MR_CALL 
ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__use_local_vars__base_lval_worth_replacing_not_tried_3_p_0(
  MR_Word AlreadyTried_4,
  MR_Integer NumRealRRegs_5,
  MR_Word Lval_6);

static void MR_CALL 
ll_backend__use_local_vars__use_local_vars_block_6_p_0(
  MR_Word MaybeLiveMap_7,
  MR_Integer NumRealRRegs_8,
  MR_Integer AccessThreshold_9,
  MR_Word Label_10,
  MR_Word STATE_VARIABLE_BlockMap_0_24,
  MR_Word * STATE_VARIABLE_BlockMap_25);

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_TempCounter_0_3,
  MR_Word * STATE_VARIABLE_TempCounter_4,
  MR_Integer NumRealRRegs_5,
  MR_Word AlreadyTried0_6,
  MR_Integer AccessThreshold_7);

static void MR_CALL 
ll_backend__use_local_vars__opt_assign_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__use_local_vars__opt_assign_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_TempCounter_0_3,
  MR_Word * STATE_VARIABLE_TempCounter_4,
  MR_Integer NumRealRRegs_5,
  MR_Word STATE_VARIABLE_AvoidLvals_0_6,
  MR_Word MaybeLiveMap_7,
  MR_Word MaybeFallThrough_8);

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(
  MR_Word OldLval_1,
  MR_Word NewLval_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer STATE_VARIABLE_N_0_5,
  MR_Integer * STATE_VARIABLE_N_6);

static MR_Word MR_CALL 
ll_backend__use_local_vars__components_affect_liveness_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_4(
  void * env_ptr_arg);

static MR_Word MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(
  MR_Word Lval_4,
  MR_Word OldLval_5);

static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0(
  MR_Word OldLval_5,
  MR_Word NewLval_6,
  MR_Word Instr0_7,
  MR_Word * Instr_8);

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_components_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer STATE_VARIABLE_NumSubsts_0_5,
  MR_Integer * STATE_VARIABLE_NumSubsts_6);

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_outputs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer STATE_VARIABLE_NumSubsts_0_5,
  MR_Integer * STATE_VARIABLE_NumSubsts_6);

static MR_Word MR_CALL 
ll_backend__use_local_vars__reg_type_for_lval_1_f_0(
  MR_Word Lval_3);

static void MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeLiveMap_2,
  MR_Word MaybeFallThrough_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_assign_find_output_in_components_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer NumRealRRegs_7,
  MR_Word AvoidLvals_8,
  MR_Word * ToLval_9);

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_assign_find_output_in_outputs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer NumRealRRegs_7,
  MR_Word AvoidLvals_8,
  MR_Word * ToLval_9);

static void MR_CALL 
ll_backend__use_local_vars__use_local_vars_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_1[1][3];

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_2[2][2];

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_3[2][9];

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_4[4][5];

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_5[2][6];




static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0))
  },
};

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_2[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_3[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__use_local_vars__maybe__pti_maybe_1__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__basic_block__type_ctor_info_block_info_0)),
    ((MR_Box) (&ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__basic_block__type_ctor_info_block_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_4[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__use_local_vars__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__use_local_vars__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__use_local_vars__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__use_local_vars__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_TypeInfo_Struct1 ll_backend__use_local_vars__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__use_local_vars__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__use_local_vars__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__maybe__pti_maybe_1__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__use_local_vars__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__basic_block__type_ctor_info_block_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_PseudoTypeInfo) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_PseudoTypeInfo) (&ll_backend__use_local_vars__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__use_local_vars__ll_backend__use_local_vars__field_types_maybe_compulsory_lvals_0_0[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__use_local_vars__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)
};

static const MR_DuFunctorDesc ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_0 = {
  (MR_String) "known",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__use_local_vars__ll_backend__use_local_vars__field_types_maybe_compulsory_lvals_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_1 = {
  (MR_String) "unknown_must_assume_all",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_0[1] = {
  &ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_1
};

static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_1[1] = {
  &ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_0
};

static const MR_DuPtagLayout ll_backend__use_local_vars__ll_backend__use_local_vars__du_ptag_ordered_maybe_compulsory_lvals_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_name_ordered_maybe_compulsory_lvals_0[2] = {
  &ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_0,
  &ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_1
};

static const MR_Integer ll_backend__use_local_vars__ll_backend__use_local_vars__functor_number_map_maybe_compulsory_lvals_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__use_local_vars__ll_backend__use_local_vars__type_ctor_info_maybe_compulsory_lvals_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0_10001)),
  ((MR_Box) (ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0_10001)),
  (MR_String) "ll_backend.use_local_vars",
  (MR_String) "maybe_compulsory_lvals",
  { ll_backend__use_local_vars__ll_backend__use_local_vars__du_name_ordered_maybe_compulsory_lvals_0 },
  { ll_backend__use_local_vars__ll_backend__use_local_vars__du_ptag_ordered_maybe_compulsory_lvals_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__use_local_vars__ll_backend__use_local_vars__functor_number_map_maybe_compulsory_lvals_0,

};

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__554__1_2_p_0(
  MR_Integer NumSubsts_32,
  MR_Integer HeadVar__2_43)
{
  MR_bool succeeded = (NumSubsts_32 == HeadVar__2_43);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__545__1_2_p_0(
  MR_Word OldLval_5,
  MR_Word ToLval_46)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds____Unify____lval_0_0(ToLval_46, OldLval_5);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__539__1_2_p_0(
  MR_Word OldLval_5,
  MR_Word ToLval_11)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds____Unify____lval_0_0(ToLval_11, OldLval_5);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__opt_access__423__1_2_p_0(
  MR_Word SubChosenLvals_32,
  MR_Word HeadVar__2_51)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__use_local_vars_scalar_common_2[1]), ((MR_Box) (SubChosenLvals_32)), ((MR_Box) (HeadVar__2_51)));
  return succeeded;
}

static void MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__373__1_3_p_0(
  MR_Word LiveMap_33,
  MR_Word HeadVar__2_60,
  MR_Word * HeadVar__3_61)
{
  MR_Box conv0_HeadVar__3_61;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__use_local_vars_scalar_common_2[0]), LiveMap_33, ((MR_Box) (HeadVar__2_60)), &conv0_HeadVar__3_61);
  *HeadVar__3_61 = ((MR_Word) (conv0_HeadVar__3_61));
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__349__1_2_p_0(
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__2_45)
{
  MR_bool succeeded = (HeadVar__4_4 == HeadVar__2_45);

  return succeeded;
}

static void MR_CALL 
ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__use_local_vars_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_5)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&ll_backend__use_local_vars_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__base_lval_worth_replacing_not_tried_3_p_0(
  MR_Word AlreadyTried_4,
  MR_Integer NumRealRRegs_5,
  MR_Word Lval_6)
{
  MR_bool succeeded;

  succeeded = mercury__set__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_6)), AlreadyTried_4);
  succeeded = !(succeeded);
  if (succeeded)
    switch (MR_tag((MR_Word) Lval_6)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(1, Lval_6, (MR_Integer) 1))));
          MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(1, Lval_6, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = (Var_16 > NumRealRRegs_5);
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_6, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
ll_backend__use_local_vars__use_local_vars_block_6_p_0(
  MR_Word MaybeLiveMap_7,
  MR_Integer NumRealRRegs_8,
  MR_Integer AccessThreshold_9,
  MR_Word Label_10,
  MR_Word STATE_VARIABLE_BlockMap_0_24,
  MR_Word * STATE_VARIABLE_BlockMap_25)
{
  MR_bool succeeded;
  MR_Word BlockInfo0_12;
  MR_Word BlockLabel_13;
  MR_Word LabelInstr_14;
  MR_Word RestInstrs0_15;
  MR_Integer BlockSize_16;
  MR_Word FallInto_17;
  MR_Word JumpLabels_18;
  MR_Word MaybeFallThrough_19;
  MR_Box conv0_BlockInfo0_12;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0), STATE_VARIABLE_BlockMap_0_24, ((MR_Box) (Label_10)), &conv0_BlockInfo0_12);
  BlockInfo0_12 = ((MR_Word) (conv0_BlockInfo0_12));
  BlockLabel_13 = ((MR_Word) ((MR_hl_field(0, BlockInfo0_12, (MR_Integer) 0))));
  LabelInstr_14 = ((MR_Word) ((MR_hl_field(0, BlockInfo0_12, (MR_Integer) 1))));
  RestInstrs0_15 = ((MR_Word) ((MR_hl_field(0, BlockInfo0_12, (MR_Integer) 2))));
  BlockSize_16 = ((MR_Integer) ((MR_hl_field(0, BlockInfo0_12, (MR_Integer) 3))));
  FallInto_17 = ((MR_Unsigned) ((MR_hl_field(0, BlockInfo0_12, (MR_Integer) 4))) & (MR_Integer) 1);
  JumpLabels_18 = ((MR_Word) ((MR_hl_field(0, BlockInfo0_12, (MR_Integer) 5))));
  MaybeFallThrough_19 = ((MR_Word) ((MR_hl_field(0, BlockInfo0_12, (MR_Integer) 6))));
  succeeded = (BlockSize_16 < (MR_Integer) 200);
  if (succeeded)
  {
    MR_Word TempCounter0_20;
    MR_Word RestInstrs_21;
    MR_Word TempCounter_22;
    MR_Word STATE_VARIABLE_RestInstrs_19_31;
    MR_Word STATE_VARIABLE_TempCounter_20_32;

    mercury__counter__init_2_p_0((MR_Integer) 1, &TempCounter0_20);
    ll_backend__use_local_vars__opt_assign_8_p_0(RestInstrs0_15, &STATE_VARIABLE_RestInstrs_19_31, TempCounter0_20, &STATE_VARIABLE_TempCounter_20_32, NumRealRRegs_8, (MR_Word) ((MR_Unsigned) 0U), MaybeLiveMap_7, MaybeFallThrough_19);
    succeeded = (AccessThreshold_9 >= (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word Var_35;

      Var_35 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
      ll_backend__use_local_vars__opt_access_7_p_0(STATE_VARIABLE_RestInstrs_19_31, &RestInstrs_21, STATE_VARIABLE_TempCounter_20_32, &TempCounter_22, NumRealRRegs_8, Var_35, AccessThreshold_9);
    }
    else
    {
      TempCounter_22 = STATE_VARIABLE_TempCounter_20_32;
      RestInstrs_21 = STATE_VARIABLE_RestInstrs_19_31;
    }
    succeeded = mercury__counter____Unify____counter_0_0(TempCounter_22, TempCounter0_20);
    if (succeeded)
      *STATE_VARIABLE_BlockMap_25 = STATE_VARIABLE_BlockMap_0_24;
    else
    {
      MR_Word BlockInfo_23;

      {
        BlockInfo_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BlockInfo_23, 0) = ((MR_Box) (BlockLabel_13));
        MR_hl_field(0, BlockInfo_23, 1) = ((MR_Box) (LabelInstr_14));
        MR_hl_field(0, BlockInfo_23, 2) = ((MR_Box) (RestInstrs_21));
        MR_hl_field(0, BlockInfo_23, 3) = ((MR_Box) (BlockSize_16));
        MR_hl_field(0, BlockInfo_23, 4) = (MR_Box) ((MR_Unsigned) (FallInto_17));
        MR_hl_field(0, BlockInfo_23, 5) = ((MR_Box) (JumpLabels_18));
        MR_hl_field(0, BlockInfo_23, 6) = ((MR_Box) (MaybeFallThrough_19));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0), ((MR_Box) (Label_10)), ((MR_Box) (BlockInfo_23)), STATE_VARIABLE_BlockMap_0_24, STATE_VARIABLE_BlockMap_25);
    }
  }
  else
    *STATE_VARIABLE_BlockMap_25 = STATE_VARIABLE_BlockMap_0_24;
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__use_local_vars__IntroducedFrom__pred__opt_access__423__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__use_local_vars__base_lval_worth_replacing_not_tried_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_TempCounter_0_3,
  MR_Word * STATE_VARIABLE_TempCounter_4,
  MR_Integer NumRealRRegs_5,
  MR_Word AlreadyTried0_6,
  MR_Integer AccessThreshold_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TempCounter_4 = STATE_VARIABLE_TempCounter_0_3;
    }
    else
    {
      MR_Word Instr0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TailInstrs0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr0_21 = ((MR_Word) ((MR_hl_field(0, Instr0_14, (MR_Integer) 0))));
      MR_Word ChosenLval_27;
      MR_Word ChooseableRvals_28;
      MR_Word TypeCtorInfo_67_67;
      MR_Word ToLval_23;
      MR_Word FromRval_24;
      MR_Word SubLvals_25;
      MR_Word ReplaceableSubLvals_26;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;

      succeeded = ((((MR_tag((MR_Word) Uinstr0_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        ToLval_23 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 1))));
        FromRval_24 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 2))));
        TypeCtorInfo_67_67 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        Var_43 = ll_backend__code_util__lvals_in_lval_1_f_0(ToLval_23);
        Var_44 = ll_backend__code_util__lvals_in_rval_1_f_0(FromRval_24);
        SubLvals_25 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_67_67, Var_43, Var_44);
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_45, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_5[1]));
          MR_hl_field(0, Var_45, 1) = ((MR_Box) (ll_backend__use_local_vars__opt_access_7_p_0_1));
          MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_45, 3) = ((MR_Box) (AlreadyTried0_6));
          MR_hl_field(0, Var_45, 4) = ((MR_Box) (NumRealRRegs_5));
        }
        mercury__list__filter_3_p_0(TypeCtorInfo_67_67, Var_45, SubLvals_25, &ReplaceableSubLvals_26);
        succeeded = (ReplaceableSubLvals_26 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ChosenLval_27 = ((MR_Word) ((MR_hl_field(1, ReplaceableSubLvals_26, (MR_Integer) 0))));
          ChooseableRvals_28 = ((MR_Word) ((MR_hl_field(1, ReplaceableSubLvals_26, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Integer TempNum_30;
        MR_Word TempLval_31;
        MR_Word SubChosenLvals_32;
        MR_Word Instrs1_33;
        MR_Integer NumReplacements_34;
        MR_Word AlreadyTried1_35;
        MR_Word STATE_VARIABLE_TempCounter_46_46;
        MR_Word Var_47;
        MR_Word Var_48;

        mercury__counter__allocate_3_p_0(&TempNum_30, STATE_VARIABLE_TempCounter_0_3, &STATE_VARIABLE_TempCounter_46_46);
        switch (MR_tag((MR_Word) ChosenLval_27)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_47 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            Var_47 = ((MR_Unsigned) ((MR_hl_field(1, ChosenLval_27, (MR_Integer) 0))) & (MR_Integer) 1);
            break;
          case (MR_Integer) 2:
            Var_47 = ((MR_Unsigned) ((MR_hl_field(2, ChosenLval_27, (MR_Integer) 0))) & (MR_Integer) 1);
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ChosenLval_27, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
              case (MR_Integer) 9:
              case (MR_Integer) 10:
              case (MR_Integer) 11:
              case (MR_Integer) 12:
                Var_47 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                Var_47 = (MR_Integer) 1;
                break;
            }
            break;
        }
        {
          TempLval_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, TempLval_31, 0) = (MR_Box) ((MR_Unsigned) (Var_47));
          MR_hl_field(2, TempLval_31, 1) = ((MR_Box) (TempNum_30));
        }
        SubChosenLvals_32 = ll_backend__code_util__lvals_in_lval_1_f_0(ChosenLval_27);
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_48, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_4[3]));
          MR_hl_field(0, Var_48, 1) = ((MR_Box) (ll_backend__use_local_vars__opt_access_7_p_0_2));
          MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_48, 3) = ((MR_Box) (SubChosenLvals_32));
          MR_hl_field(0, Var_48, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_48, (MR_String) "predicate \140ll_backend.use_local_vars.opt_access\'/7", (MR_String) "nonempty SubChosenLvals");
        ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ChosenLval_27, TempLval_31, HeadVar__1_1, &Instrs1_33, (MR_Integer) 0, &NumReplacements_34);
        mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (ChosenLval_27)), AlreadyTried0_6, &AlreadyTried1_35);
        succeeded = (NumReplacements_34 >= AccessThreshold_7);
        if (succeeded)
        {
          MR_Word TempAssign_36;
          MR_Word Instrs2_37;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_TempCounter_0_3;
          MR_Word next_value_of_AlreadyTried0_6;

          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_55, 0) = ((MR_Box) (ChosenLval_27));
          }
          {
            Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_54, 1) = ((MR_Box) (TempLval_31));
            MR_hl_field(3, Var_54, 2) = ((MR_Box) (Var_55));
          }
          {
            TempAssign_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TempAssign_36, 0) = ((MR_Box) (Var_54));
            MR_hl_field(0, TempAssign_36, 1) = ((MR_Box) ((MR_String) "factor out common sub lval"));
          }
          {
            Instrs2_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Instrs2_37, 0) = ((MR_Box) (TempAssign_36));
            MR_hl_field(1, Instrs2_37, 1) = ((MR_Box) (Instrs1_33));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Instrs2_37;
          next_value_of_STATE_VARIABLE_TempCounter_0_3 = STATE_VARIABLE_TempCounter_46_46;
          next_value_of_AlreadyTried0_6 = AlreadyTried1_35;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_TempCounter_0_3 = next_value_of_STATE_VARIABLE_TempCounter_0_3;
          AlreadyTried0_6 = next_value_of_AlreadyTried0_6;
          continue;
        }
        else
        if ((ChooseableRvals_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word TailInstrs_40;
          MR_Word Var_63;

          Var_63 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          ll_backend__use_local_vars__opt_access_7_p_0(TailInstrs0_15, &TailInstrs_40, STATE_VARIABLE_TempCounter_0_3, STATE_VARIABLE_TempCounter_4, NumRealRRegs_5, Var_63, AccessThreshold_7);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_14));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailInstrs_40));
          }
        }
        else
        {
          MR_Word next_value_of_AlreadyTried0_6 = AlreadyTried1_35;

          // direct tailcall eliminated
          ;
          AlreadyTried0_6 = next_value_of_AlreadyTried0_6;
          continue;
        }
      }
      else
      {
        MR_Word Var_65;
        MR_Word TailInstrs_66;

        Var_65 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
        ll_backend__use_local_vars__opt_access_7_p_0(TailInstrs0_15, &TailInstrs_66, STATE_VARIABLE_TempCounter_0_3, STATE_VARIABLE_TempCounter_4, NumRealRRegs_5, Var_65, AccessThreshold_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_14));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailInstrs_66));
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__use_local_vars__opt_assign_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Integer conv0_HeadVar__6_6;

  ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, ((MR_Integer) (wrapper_arg_3)), &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
ll_backend__use_local_vars__opt_assign_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_TempCounter_0_3,
  MR_Word * STATE_VARIABLE_TempCounter_4,
  MR_Integer NumRealRRegs_5,
  MR_Word STATE_VARIABLE_AvoidLvals_0_6,
  MR_Word MaybeLiveMap_7,
  MR_Word MaybeFallThrough_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TempCounter_4 = STATE_VARIABLE_TempCounter_0_3;
    }
    else
    {
      MR_Word Instr0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TailInstrs0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr0_24 = ((MR_Word) ((MR_hl_field(0, Instr0_16, (MR_Integer) 0))));
      MR_Word ToLval_26;
      MR_Word MaybeMore_35;

      switch (MR_tag((MR_Word) Uinstr0_24)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Uinstr0_24, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                ToLval_26 = ((MR_Word) ((MR_hl_field(3, Uinstr0_24, (MR_Integer) 1))));
                switch (MR_tag((MR_Word) ToLval_26)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer Var_130 = ((MR_Integer) ((MR_hl_field(1, ToLval_26, (MR_Integer) 1))));
                      MR_Word Var_131 = ((MR_Unsigned) ((MR_hl_field(1, ToLval_26, (MR_Integer) 0))) & (MR_Integer) 1);

                      switch (Var_131) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 0:
                          succeeded = (Var_130 > NumRealRRegs_5);
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, ToLval_26, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 2:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 3:
                        succeeded = MR_TRUE;
                        break;
                    }
                    break;
                }
                if (succeeded)
                {
                  MaybeMore_35 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 12:
              {
                ToLval_26 = ((MR_Word) ((MR_hl_field(3, Uinstr0_24, (MR_Integer) 1))));
                switch (MR_tag((MR_Word) ToLval_26)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer Var_140 = ((MR_Integer) ((MR_hl_field(1, ToLval_26, (MR_Integer) 1))));
                      MR_Word Var_141 = ((MR_Unsigned) ((MR_hl_field(1, ToLval_26, (MR_Integer) 0))) & (MR_Integer) 1);

                      switch (Var_141) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 0:
                          succeeded = (Var_140 > NumRealRRegs_5);
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, ToLval_26, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 2:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 3:
                        succeeded = MR_TRUE;
                        break;
                    }
                    break;
                }
                if (succeeded)
                {
                  MaybeMore_35 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 27:
              {
                MR_Word Comps_37 = ((MR_Word) ((MR_hl_field(3, Uinstr0_24, (MR_Integer) 2))));

                succeeded = ll_backend__use_local_vars__opt_assign_find_output_in_components_4_p_0(Comps_37, NumRealRRegs_5, STATE_VARIABLE_AvoidLvals_0_6, &ToLval_26);
                if (succeeded)
                {
                  MaybeMore_35 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        MR_Word MaybeCompulsoryLvals_48;
        MR_Word CompulsoryLvals_49;
        MR_Word Var_62;
        MR_Word TypeCtorInfo_115_115;

        succeeded = ((MR_tag((MR_Word) ToLval_26)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_62 = (MR_Integer) 0;
          ll_backend__use_local_vars__find_compulsory_lvals_5_p_0(TailInstrs0_17, MaybeLiveMap_7, MaybeFallThrough_8, Var_62, &MaybeCompulsoryLvals_48);
          succeeded = (MaybeCompulsoryLvals_48 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            CompulsoryLvals_49 = ((MR_Word) ((MR_hl_field(1, MaybeCompulsoryLvals_48, (MR_Integer) 0))));
            TypeCtorInfo_115_115 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
            succeeded = mercury__set__member_2_p_0(TypeCtorInfo_115_115, ((MR_Box) (ToLval_26)), CompulsoryLvals_49);
            succeeded = !(succeeded);
          }
        }
        if (succeeded)
        {
          MR_Integer TempNum_50;
          MR_Word NewLval_51;
          MR_Word Instr_52;
          MR_Word TailInstrs1_53;
          MR_Word STATE_VARIABLE_TempCounter_63_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Box conv2_Var_54;

          mercury__counter__allocate_3_p_0(&TempNum_50, STATE_VARIABLE_TempCounter_0_3, &STATE_VARIABLE_TempCounter_63_63);
          Var_64 = ((MR_Unsigned) ((MR_hl_field(1, ToLval_26, (MR_Integer) 0))) & (MR_Integer) 1);
          {
            NewLval_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, NewLval_51, 0) = (MR_Box) ((MR_Unsigned) (Var_64));
            MR_hl_field(2, NewLval_51, 1) = ((MR_Box) (TempNum_50));
          }
          ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0(ToLval_26, NewLval_51, Instr0_16, &Instr_52);
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_65, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_3[1]));
            MR_hl_field(0, Var_65, 1) = ((MR_Box) (ll_backend__use_local_vars__opt_assign_8_p_0_1));
            MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_65, 3) = ((MR_Box) (ToLval_26));
            MR_hl_field(0, Var_65, 4) = ((MR_Box) (NewLval_51));
          }
          mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_65, TailInstrs0_17, &TailInstrs1_53, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_54);
          switch (MaybeMore_35) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TailInstrs_55;

                ll_backend__use_local_vars__opt_assign_8_p_0(TailInstrs1_53, &TailInstrs_55, STATE_VARIABLE_TempCounter_63_63, STATE_VARIABLE_TempCounter_4, NumRealRRegs_5, (MR_Word) ((MR_Unsigned) 0U), MaybeLiveMap_7, MaybeFallThrough_8);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Instr_52));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailInstrs_55));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Instrs1_56;
                MR_Word STATE_VARIABLE_AvoidLvals_69_69;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_STATE_VARIABLE_TempCounter_0_3;
                MR_Word next_value_of_STATE_VARIABLE_AvoidLvals_0_6;

                {
                  STATE_VARIABLE_AvoidLvals_69_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_AvoidLvals_69_69, 0) = ((MR_Box) (ToLval_26));
                  MR_hl_field(1, STATE_VARIABLE_AvoidLvals_69_69, 1) = ((MR_Box) (STATE_VARIABLE_AvoidLvals_0_6));
                }
                {
                  Instrs1_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Instrs1_56, 0) = ((MR_Box) (Instr_52));
                  MR_hl_field(1, Instrs1_56, 1) = ((MR_Box) (TailInstrs1_53));
                }
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = Instrs1_56;
                next_value_of_STATE_VARIABLE_TempCounter_0_3 = STATE_VARIABLE_TempCounter_63_63;
                next_value_of_STATE_VARIABLE_AvoidLvals_0_6 = STATE_VARIABLE_AvoidLvals_69_69;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                STATE_VARIABLE_TempCounter_0_3 = next_value_of_STATE_VARIABLE_TempCounter_0_3;
                STATE_VARIABLE_AvoidLvals_0_6 = next_value_of_STATE_VARIABLE_AvoidLvals_0_6;
                continue;
              }
              break;
          }
        }
        else
        {
          MR_Word STATE_VARIABLE_TempCounter_71_71;
          MR_Word NewLval_108;
          MR_Word TailInstrs1_110;
          MR_Integer NumSubst_57;
          MR_Word Var_72;
          MR_Integer TempNum_90;

          mercury__counter__allocate_3_p_0(&TempNum_90, STATE_VARIABLE_TempCounter_0_3, &STATE_VARIABLE_TempCounter_71_71);
          Var_72 = ll_backend__use_local_vars__reg_type_for_lval_1_f_0(ToLval_26);
          {
            NewLval_108 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, NewLval_108, 0) = (MR_Box) ((MR_Unsigned) (Var_72));
            MR_hl_field(2, NewLval_108, 1) = ((MR_Box) (TempNum_90));
          }
          ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ToLval_26, NewLval_108, TailInstrs0_17, &TailInstrs1_110, (MR_Integer) 0, &NumSubst_57);
          succeeded = (NumSubst_57 > (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word CopyInstr_58;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Instr_97;

            ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0(ToLval_26, NewLval_108, Instr0_16, &Instr_97);
            {
              Var_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_76, 0) = ((MR_Box) (NewLval_108));
            }
            {
              Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_75, 1) = ((MR_Box) (ToLval_26));
              MR_hl_field(3, Var_75, 2) = ((MR_Box) (Var_76));
            }
            {
              CopyInstr_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, CopyInstr_58, 0) = ((MR_Box) (Var_75));
              MR_hl_field(0, CopyInstr_58, 1) = ((MR_Box) ((MR_String) ""));
            }
            switch (MaybeMore_35) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_80;
                  MR_Word TailInstrs_91;

                  ll_backend__use_local_vars__opt_assign_8_p_0(TailInstrs1_110, &TailInstrs_91, STATE_VARIABLE_TempCounter_71_71, STATE_VARIABLE_TempCounter_4, NumRealRRegs_5, (MR_Word) ((MR_Unsigned) 0U), MaybeLiveMap_7, MaybeFallThrough_8);
                  {
                    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_80, 0) = ((MR_Box) (CopyInstr_58));
                    MR_hl_field(1, Var_80, 1) = ((MR_Box) (TailInstrs_91));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__2_2 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Instr_97));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_80));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_82;
                  MR_Word Instrs1_92;
                  MR_Word STATE_VARIABLE_AvoidLvals_69_93;
                  MR_Word next_value_of_HeadVar__1_1;
                  MR_Word next_value_of_STATE_VARIABLE_TempCounter_0_3;
                  MR_Word next_value_of_STATE_VARIABLE_AvoidLvals_0_6;

                  {
                    STATE_VARIABLE_AvoidLvals_69_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_AvoidLvals_69_93, 0) = ((MR_Box) (ToLval_26));
                    MR_hl_field(1, STATE_VARIABLE_AvoidLvals_69_93, 1) = ((MR_Box) (STATE_VARIABLE_AvoidLvals_0_6));
                  }
                  {
                    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_82, 0) = ((MR_Box) (CopyInstr_58));
                    MR_hl_field(1, Var_82, 1) = ((MR_Box) (TailInstrs1_110));
                  }
                  {
                    Instrs1_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Instrs1_92, 0) = ((MR_Box) (Instr_97));
                    MR_hl_field(1, Instrs1_92, 1) = ((MR_Box) (Var_82));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = Instrs1_92;
                  next_value_of_STATE_VARIABLE_TempCounter_0_3 = STATE_VARIABLE_TempCounter_71_71;
                  next_value_of_STATE_VARIABLE_AvoidLvals_0_6 = STATE_VARIABLE_AvoidLvals_69_93;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  STATE_VARIABLE_TempCounter_0_3 = next_value_of_STATE_VARIABLE_TempCounter_0_3;
                  STATE_VARIABLE_AvoidLvals_0_6 = next_value_of_STATE_VARIABLE_AvoidLvals_0_6;
                  continue;
                }
                break;
            }
          }
          else
            switch (MaybeMore_35) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TailInstrs_101;

                  ll_backend__use_local_vars__opt_assign_8_p_0(TailInstrs0_17, &TailInstrs_101, STATE_VARIABLE_TempCounter_0_3, STATE_VARIABLE_TempCounter_4, NumRealRRegs_5, (MR_Word) ((MR_Unsigned) 0U), MaybeLiveMap_7, MaybeFallThrough_8);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__2_2 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_16));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailInstrs_101));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word STATE_VARIABLE_AvoidLvals_69_103;
                  MR_Word next_value_of_STATE_VARIABLE_AvoidLvals_0_6;

                  {
                    STATE_VARIABLE_AvoidLvals_69_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_AvoidLvals_69_103, 0) = ((MR_Box) (ToLval_26));
                    MR_hl_field(1, STATE_VARIABLE_AvoidLvals_69_103, 1) = ((MR_Box) (STATE_VARIABLE_AvoidLvals_0_6));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_STATE_VARIABLE_AvoidLvals_0_6 = STATE_VARIABLE_AvoidLvals_69_103;
                  STATE_VARIABLE_AvoidLvals_0_6 = next_value_of_STATE_VARIABLE_AvoidLvals_0_6;
                  continue;
                }
                break;
            }
        }
      }
      else
      {
        MR_Word TailInstrs_114;

        ll_backend__use_local_vars__opt_assign_8_p_0(TailInstrs0_17, &TailInstrs_114, STATE_VARIABLE_TempCounter_0_3, STATE_VARIABLE_TempCounter_4, NumRealRRegs_5, (MR_Word) ((MR_Unsigned) 0U), MaybeLiveMap_7, MaybeFallThrough_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_16));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailInstrs_114));
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(
  MR_Word OldLval_1,
  MR_Word NewLval_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer STATE_VARIABLE_N_0_5,
  MR_Integer * STATE_VARIABLE_N_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
  }
  else
  {
    MR_Word Instr0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Instrs0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Instr_16;
    MR_Word Instrs_17;
    MR_Word Uinstr0_21 = ((MR_Word) ((MR_hl_field(0, Instr0_14, (MR_Integer) 0))));
    MR_String Comment_22 = ((MR_String) ((MR_hl_field(0, Instr0_14, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) Uinstr0_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Uinstr0_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 1:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(OldLval_1, NewLval_2, Instrs0_15, &Instrs_17, STATE_VARIABLE_N_0_5, STATE_VARIABLE_N_6);
          Instr_16 = Instr0_14;
        }
        break;
      case (MR_Integer) 2:
        {
          Instr_16 = Instr0_14;
          Instrs_17 = Instrs0_15;
          *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.use_local_vars.substitute_lval_in_instr_until_defn_2\'/8", (MR_String) "block");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lval_26 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 1))));
              MR_Word Rval0_27 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 2))));
              MR_Word Updates_28;

              Updates_28 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(Lval_26, OldLval_1);
              switch (Updates_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer STATE_VARIABLE_N_110_109;

                    ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(OldLval_1, NewLval_2, Instr0_14, &Instr_16, STATE_VARIABLE_N_0_5, &STATE_VARIABLE_N_110_109);
                    ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(OldLval_1, NewLval_2, Instrs0_15, &Instrs_17, STATE_VARIABLE_N_110_109, STATE_VARIABLE_N_6);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Rval_29;
                    MR_Word Uinstr_30;

                    ll_backend__exprn_aux__substitute_lval_in_rval_4_p_0(OldLval_1, NewLval_2, Rval0_27, &Rval_29);
                    {
                      Uinstr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Uinstr_30, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Uinstr_30, 1) = ((MR_Box) (Lval_26));
                      MR_hl_field(3, Uinstr_30, 2) = ((MR_Box) (Rval_29));
                    }
                    {
                      Instr_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Instr_16, 0) = ((MR_Box) (Uinstr_30));
                      MR_hl_field(0, Instr_16, 1) = ((MR_Box) (Comment_22));
                    }
                    Instrs_17 = Instrs0_15;
                    *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Lval_122 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 1))));
              MR_Word Rval0_123 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 2))));
              MR_Word Updates_124;

              Updates_124 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(Lval_122, OldLval_1);
              switch (Updates_124) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer STATE_VARIABLE_N_115_110;

                    ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(OldLval_1, NewLval_2, Instr0_14, &Instr_16, STATE_VARIABLE_N_0_5, &STATE_VARIABLE_N_115_110);
                    ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(OldLval_1, NewLval_2, Instrs0_15, &Instrs_17, STATE_VARIABLE_N_115_110, STATE_VARIABLE_N_6);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Rval_120;
                    MR_Word Uinstr_121;

                    ll_backend__exprn_aux__substitute_lval_in_rval_4_p_0(OldLval_1, NewLval_2, Rval0_123, &Rval_120);
                    {
                      Uinstr_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Uinstr_121, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, Uinstr_121, 1) = ((MR_Box) (Lval_122));
                      MR_hl_field(3, Uinstr_121, 2) = ((MR_Box) (Rval_120));
                    }
                    {
                      Instr_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Instr_16, 0) = ((MR_Box) (Uinstr_121));
                      MR_hl_field(0, Instr_16, 1) = ((MR_Box) (Comment_22));
                    }
                    Instrs_17 = Instrs0_15;
                    *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 4:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 5:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 6:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 7:
            {
              ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(OldLval_1, NewLval_2, Instr0_14, &Instr_16, STATE_VARIABLE_N_0_5, STATE_VARIABLE_N_6);
              Instrs_17 = Instrs0_15;
            }
            break;
          case (MR_Integer) 8:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer STATE_VARIABLE_N_148_119;

              ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(OldLval_1, NewLval_2, Instr0_14, &Instr_16, STATE_VARIABLE_N_0_5, &STATE_VARIABLE_N_148_119);
              ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(OldLval_1, NewLval_2, Instrs0_15, &Instrs_17, STATE_VARIABLE_N_148_119, STATE_VARIABLE_N_6);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Lval_143 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 1))));
              MR_Word Updates_144;

              Updates_144 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(Lval_143, OldLval_1);
              switch (Updates_144) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer STATE_VARIABLE_N_128_140;

                    ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(OldLval_1, NewLval_2, Instr0_14, &Instr_16, STATE_VARIABLE_N_0_5, &STATE_VARIABLE_N_128_140);
                    ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(OldLval_1, NewLval_2, Instrs0_15, &Instrs_17, STATE_VARIABLE_N_128_140, STATE_VARIABLE_N_6);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Instr_16 = Instr0_14;
                    Instrs_17 = Instrs0_15;
                    *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 11:
          case (MR_Integer) 14:
          case (MR_Integer) 16:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
          case (MR_Integer) 33:
          case (MR_Integer) 34:
            {
              MR_Integer STATE_VARIABLE_N_138_117;

              ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(OldLval_1, NewLval_2, Instr0_14, &Instr_16, STATE_VARIABLE_N_0_5, &STATE_VARIABLE_N_138_117);
              ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(OldLval_1, NewLval_2, Instrs0_15, &Instrs_17, STATE_VARIABLE_N_138_117, STATE_VARIABLE_N_6);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Lval_132 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 1))));
              MR_Word Updates_133;

              Updates_133 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(Lval_132, OldLval_1);
              switch (Updates_133) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer STATE_VARIABLE_N_128_113;

                    ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(OldLval_1, NewLval_2, Instr0_14, &Instr_16, STATE_VARIABLE_N_0_5, &STATE_VARIABLE_N_128_113);
                    ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(OldLval_1, NewLval_2, Instrs0_15, &Instrs_17, STATE_VARIABLE_N_128_113, STATE_VARIABLE_N_6);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Instr_16 = Instr0_14;
                    Instrs_17 = Instrs0_15;
                    *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Lval_138 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 1))));
              MR_Word Updates_139;

              Updates_139 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(Lval_138, OldLval_1);
              switch (Updates_139) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer STATE_VARIABLE_N_128_135;

                    ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(OldLval_1, NewLval_2, Instr0_14, &Instr_16, STATE_VARIABLE_N_0_5, &STATE_VARIABLE_N_128_135);
                    ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(OldLval_1, NewLval_2, Instrs0_15, &Instrs_17, STATE_VARIABLE_N_128_135, STATE_VARIABLE_N_6);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Instr_16 = Instr0_14;
                    Instrs_17 = Instrs0_15;
                    *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 15:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word NumLval_43 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 4))));
              MR_Word AddrLval_44 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 5))));

              {
                MR_Word Var_114;

                Var_114 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(NumLval_43, OldLval_1);
                succeeded = (Var_114 == (MR_Integer) 1);
              }
              if (!(succeeded))
              {
                MR_Word Var_115;

                Var_115 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(AddrLval_44, OldLval_1);
                succeeded = (Var_115 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
                Instrs_17 = Instrs0_15;
                Instr_16 = Instr0_14;
              }
              else
              {
                MR_Integer STATE_VARIABLE_N_134_116;

                ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(OldLval_1, NewLval_2, Instr0_14, &Instr_16, STATE_VARIABLE_N_0_5, &STATE_VARIABLE_N_134_116);
                ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(OldLval_1, NewLval_2, Instrs0_15, &Instrs_17, STATE_VARIABLE_N_134_116, STATE_VARIABLE_N_6);
              }
            }
            break;
          case (MR_Integer) 20:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 21:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 22:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 23:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 24:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 25:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 26:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word Components_60 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 2))));
              MR_Word AffectsLiveness_69;

              AffectsLiveness_69 = ll_backend__use_local_vars__components_affect_liveness_1_f_0(Components_60);
              switch (AffectsLiveness_69) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Updates_134;

                    Updates_134 = ll_backend__use_local_vars__components_update_oldlval_2_f_0(Components_60, OldLval_1);
                    switch (Updates_134) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer STATE_VARIABLE_N_142_118;

                          ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(OldLval_1, NewLval_2, Instr0_14, &Instr_16, STATE_VARIABLE_N_0_5, &STATE_VARIABLE_N_142_118);
                          ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(OldLval_1, NewLval_2, Instrs0_15, &Instrs_17, STATE_VARIABLE_N_142_118, STATE_VARIABLE_N_6);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          Instr_16 = Instr0_14;
                          Instrs_17 = Instrs0_15;
                          *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Instr_16 = Instr0_14;
                    Instrs_17 = Instrs0_15;
                    *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 28:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 29:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 30:
            {
              Instr_16 = Instr0_14;
              Instrs_17 = Instrs0_15;
              *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Word Lval_125 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 2))));
              MR_Word Updates_126;

              Updates_126 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(Lval_125, OldLval_1);
              switch (Updates_126) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer STATE_VARIABLE_N_119_111;

                    ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(OldLval_1, NewLval_2, Instr0_14, &Instr_16, STATE_VARIABLE_N_0_5, &STATE_VARIABLE_N_119_111);
                    ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(OldLval_1, NewLval_2, Instrs0_15, &Instrs_17, STATE_VARIABLE_N_119_111, STATE_VARIABLE_N_6);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Instr_16 = Instr0_14;
                    Instrs_17 = Instrs0_15;
                    *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word Label_32 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 3))));
              MR_Word Lval_129 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 2))));
              MR_Word Rval0_130 = ((MR_Word) ((MR_hl_field(3, Uinstr0_21, (MR_Integer) 1))));
              MR_Word Updates_131;

              Updates_131 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(Lval_129, OldLval_1);
              switch (Updates_131) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer STATE_VARIABLE_N_124_112;

                    ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(OldLval_1, NewLval_2, Instr0_14, &Instr_16, STATE_VARIABLE_N_0_5, &STATE_VARIABLE_N_124_112);
                    ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(OldLval_1, NewLval_2, Instrs0_15, &Instrs_17, STATE_VARIABLE_N_124_112, STATE_VARIABLE_N_6);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Rval_127;
                    MR_Word Uinstr_128;

                    ll_backend__exprn_aux__substitute_lval_in_rval_4_p_0(OldLval_1, NewLval_2, Rval0_130, &Rval_127);
                    {
                      Uinstr_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Uinstr_128, 0) = ((MR_Box) ((MR_Unsigned) 32U));
                      MR_hl_field(3, Uinstr_128, 1) = ((MR_Box) (Rval_127));
                      MR_hl_field(3, Uinstr_128, 2) = ((MR_Box) (Lval_129));
                      MR_hl_field(3, Uinstr_128, 3) = ((MR_Box) (Label_32));
                    }
                    {
                      Instr_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Instr_16, 0) = ((MR_Box) (Uinstr_128));
                      MR_hl_field(0, Instr_16, 1) = ((MR_Box) (Comment_22));
                    }
                    Instrs_17 = Instrs0_15;
                    *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Instr_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Instrs_17));
    }
  }
}

static MR_Word MR_CALL 
ll_backend__use_local_vars__components_affect_liveness_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Component_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Components_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Component_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Components_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__1_1 = Components_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Component_3, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word AffectsLiveness_16 = ((MR_Unsigned) ((MR_hl_field(3, Component_3, (MR_Integer) 2))) & (MR_Integer) 3);
                MR_String Code_17 = ((MR_String) ((MR_hl_field(3, Component_3, (MR_Integer) 3))));

                switch (AffectsLiveness_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeadVar__2_2 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    {
                      succeeded = (strcmp(Code_17, (MR_String) "") == 0);
                      if (succeeded)
                      {
                        MR_Word next_value_of_HeadVar__1_1 = Components_4;

                        // direct tailcall eliminated
                        ;
                        HeadVar__1_1 = next_value_of_HeadVar__1_1;
                        continue;
                      }
                      else
                        HeadVar__2_2 = (MR_Integer) 1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Components_4;

                      // direct tailcall eliminated
                      ;
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word AffectsLiveness_12 = ((MR_Unsigned) ((MR_hl_field(3, Component_3, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_String Code_13 = ((MR_String) ((MR_hl_field(3, Component_3, (MR_Integer) 3))));

                switch (AffectsLiveness_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeadVar__2_2 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    {
                      succeeded = (strcmp(Code_13, (MR_String) "") == 0);
                      if (succeeded)
                      {
                        MR_Word next_value_of_HeadVar__1_1 = Components_4;

                        // direct tailcall eliminated
                        ;
                        HeadVar__1_1 = next_value_of_HeadVar__1_1;
                        continue;
                      }
                      else
                        HeadVar__2_2 = (MR_Integer) 1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Components_4;

                      // direct tailcall eliminated
                      ;
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                MR_Word next_value_of_HeadVar__1_1 = Components_4;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
              break;
          }
          break;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_1(
  void * env_ptr_arg)
{
  struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s * env_ptr = (struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__commit_0, 1);
}

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_3(
  void * env_ptr_arg)
{
  struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s * env_ptr = (struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_21 = ((MR_Word) ((env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__conv0_Output_21));
  ll_backend__use_local_vars__components_update_oldlval_2_f_0_2(env_ptr);
}

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_2(
  void * env_ptr_arg)
{
  struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s * env_ptr = (struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_String Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Unsigned packed_word_0;
    MR_Unsigned packed_word_1;

    (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Var_29 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_21, (MR_Integer) 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_21, (MR_Integer) 1))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_21, (MR_Integer) 2)));
    Var_23 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_21, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_24 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_21, (MR_Integer) 3))));
    Var_25 = ((MR_String) ((MR_hl_field(0, (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_21, (MR_Integer) 4))));
    Var_26 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_21, (MR_Integer) 5))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_21, (MR_Integer) 6)));
    Var_27 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_21, (MR_Integer) 6))) & (MR_Integer) 1);
    (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded = ll_backend__llds____Unify____lval_0_0((env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__HeadVar__2_2, (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Var_29);
    if ((env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded)
      ll_backend__use_local_vars__components_update_oldlval_2_f_0_1(env_ptr);
  }
}

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_4(
  void * env_ptr_arg)
{
  struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s * env_ptr = (struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0), &(env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__conv0_Output_21, (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Outputs_10, ll_backend__use_local_vars__components_update_oldlval_2_f_0_3, env_ptr);
      (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded = MR_TRUE;
}

static MR_Word MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s env;

  (env).ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__HeadVar__2_2 = HeadVar__2_2;
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Component_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Components_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Component_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Components_6;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__1_1 = Components_6;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            (env).ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Outputs_10 = ((MR_Word) ((MR_hl_field(2, Component_5, (MR_Integer) 0))));
            ll_backend__use_local_vars__components_update_oldlval_2_f_0_4(&env);
            if ((env).ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded)
              HeadVar__3_3 = (MR_Integer) 1;
            else
            {
              MR_Word next_value_of_HeadVar__1_1 = Components_6;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word next_value_of_HeadVar__1_1 = Components_6;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

static MR_Word MR_CALL 
ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(
  MR_Word Lval_4,
  MR_Word OldLval_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;

  succeeded = ll_backend__llds____Unify____lval_0_0(Lval_4, OldLval_5);
  if (succeeded)
    HeadVar__3_3 = (MR_Integer) 1;
  else
    HeadVar__3_3 = (MR_Integer) 0;
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__554__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__545__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__539__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0(
  MR_Word OldLval_5,
  MR_Word NewLval_6,
  MR_Word Instr0_7,
  MR_Word * Instr_8)
{
  MR_bool succeeded;
  MR_Word Uinstr0_9 = ((MR_Word) ((MR_hl_field(0, Instr0_7, (MR_Integer) 0))));
  MR_String Comment_10 = ((MR_String) ((MR_hl_field(0, Instr0_7, (MR_Integer) 1))));
  MR_Word Uinstr_13;
  MR_Word ToLval_11;
  MR_Word FromRval_12;

  succeeded = ((((MR_tag((MR_Word) Uinstr0_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    ToLval_11 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 1))));
    FromRval_12 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 2))));
    {
      MR_Word Var_33;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_4[1]));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_1));
        MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_33, 3) = ((MR_Box) (OldLval_5));
        MR_hl_field(0, Var_33, 4) = ((MR_Box) (ToLval_11));
      }
      mercury__require__expect_3_p_0(Var_33, (MR_String) "predicate \140ll_backend.use_local_vars.substitute_lval_in_defn\'/4", (MR_String) "mismatch in assign");
      {
        Uinstr_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Uinstr_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Uinstr_13, 1) = ((MR_Box) (NewLval_6));
        MR_hl_field(3, Uinstr_13, 2) = ((MR_Box) (FromRval_12));
      }
    }
  }
  else
  {
    MR_Word MaybeTag_14;
    MR_Word SizeRval_15;
    MR_Word MO_16;
    MR_Word Type_17;
    MR_Word MayUseAtomic_18;
    MR_Word MaybeRegionRval_19;
    MR_Word MaybeReuse_20;
    MR_Word ToLval_46;

    succeeded = ((((MR_tag((MR_Word) Uinstr0_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 12)));
    if (succeeded)
    {
      ToLval_46 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 1))));
      MaybeTag_14 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 2))));
      SizeRval_15 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 3))));
      MO_16 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 4))));
      Type_17 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 5))));
      MayUseAtomic_18 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 6))) & (MR_Integer) 1);
      MaybeRegionRval_19 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 7))));
      MaybeReuse_20 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 8))));
      {
        MR_Word Var_36;

        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_36, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_4[1]));
          MR_hl_field(0, Var_36, 1) = ((MR_Box) (ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_2));
          MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_36, 3) = ((MR_Box) (OldLval_5));
          MR_hl_field(0, Var_36, 4) = ((MR_Box) (ToLval_46));
        }
        mercury__require__expect_3_p_0(Var_36, (MR_String) "predicate \140ll_backend.use_local_vars.substitute_lval_in_defn\'/4", (MR_String) "mismatch in incr_hp");
        {
          Uinstr_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Uinstr_13, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, Uinstr_13, 1) = ((MR_Box) (NewLval_6));
          MR_hl_field(3, Uinstr_13, 2) = ((MR_Box) (MaybeTag_14));
          MR_hl_field(3, Uinstr_13, 3) = ((MR_Box) (SizeRval_15));
          MR_hl_field(3, Uinstr_13, 4) = ((MR_Box) (MO_16));
          MR_hl_field(3, Uinstr_13, 5) = ((MR_Box) (Type_17));
          MR_hl_field(3, Uinstr_13, 6) = (MR_Box) ((MR_Unsigned) (MayUseAtomic_18));
          MR_hl_field(3, Uinstr_13, 7) = ((MR_Box) (MaybeRegionRval_19));
          MR_hl_field(3, Uinstr_13, 8) = ((MR_Box) (MaybeReuse_20));
        }
      }
    }
    else
    {
      MR_Word D_21;
      MR_Word Comps0_22;
      MR_Word MCM_23;
      MR_Word FNL_24;
      MR_Word FL_25;
      MR_Word FOL_26;
      MR_Word NF_27;
      MR_Word MDL_28;
      MR_Unsigned packed_word_2;

      succeeded = ((((MR_tag((MR_Word) Uinstr0_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 27)));
      if (succeeded)
      {
        D_21 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 1))));
        Comps0_22 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 2))));
        MCM_23 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 3))) & (MR_Integer) 1);
        FNL_24 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 4))));
        FL_25 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 5))));
        FOL_26 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 6))));
        NF_27 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 7))));
        MDL_28 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 8))));
        packed_word_2 = (MR_Unsigned) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 9)));
        {
          MR_Word Comps_31;
          MR_Integer NumSubsts_32;
          MR_Word Var_40;

          ll_backend__use_local_vars__substitute_lval_in_defn_components_6_p_0(OldLval_5, NewLval_6, Comps0_22, &Comps_31, (MR_Integer) 0, &NumSubsts_32);
          {
            Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_40, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_4[2]));
            MR_hl_field(0, Var_40, 1) = ((MR_Box) (ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_3));
            MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_40, 3) = ((MR_Box) (NumSubsts_32));
            MR_hl_field(0, Var_40, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_40, (MR_String) "predicate \140ll_backend.use_local_vars.substitute_lval_in_defn\'/4", (MR_String) "mismatch in foreign_proc_code");
          {
            Uinstr_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Uinstr_13, 0) = ((MR_Box) ((MR_Unsigned) 27U));
            MR_hl_field(3, Uinstr_13, 1) = ((MR_Box) (D_21));
            MR_hl_field(3, Uinstr_13, 2) = ((MR_Box) (Comps_31));
            MR_hl_field(3, Uinstr_13, 3) = (MR_Box) ((MR_Unsigned) (MCM_23));
            MR_hl_field(3, Uinstr_13, 4) = ((MR_Box) (FNL_24));
            MR_hl_field(3, Uinstr_13, 5) = ((MR_Box) (FL_25));
            MR_hl_field(3, Uinstr_13, 6) = ((MR_Box) (FOL_26));
            MR_hl_field(3, Uinstr_13, 7) = ((MR_Box) (NF_27));
            MR_hl_field(3, Uinstr_13, 8) = ((MR_Box) (MDL_28));
            MR_hl_field(3, Uinstr_13, 9) = (MR_Box) (packed_word_2);
          }
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.use_local_vars.substitute_lval_in_defn\'/4", (MR_String) "unexpected instruction");
          return;
        }
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Instr_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Uinstr_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (Comment_10));
  }
}

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_components_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer STATE_VARIABLE_NumSubsts_0_5,
  MR_Integer * STATE_VARIABLE_NumSubsts_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_NumSubsts_6 = STATE_VARIABLE_NumSubsts_0_5;
  }
  else
  {
    MR_Word Comp0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Comps0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Comp_16;
    MR_Word Comps_17;
    MR_Integer STATE_VARIABLE_NumSubsts_33_33;

    switch (MR_tag((MR_Word) Comp0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Comp_16 = Comp0_14;
          STATE_VARIABLE_NumSubsts_33_33 = STATE_VARIABLE_NumSubsts_0_5;
        }
        break;
      case (MR_Integer) 1:
        {
          Comp_16 = Comp0_14;
          STATE_VARIABLE_NumSubsts_33_33 = STATE_VARIABLE_NumSubsts_0_5;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Outputs0_19 = ((MR_Word) ((MR_hl_field(2, Comp0_14, (MR_Integer) 0))));
          MR_Word Outputs_20;

          ll_backend__use_local_vars__substitute_lval_in_defn_outputs_6_p_0(HeadVar__1_1, HeadVar__2_2, Outputs0_19, &Outputs_20, STATE_VARIABLE_NumSubsts_0_5, &STATE_VARIABLE_NumSubsts_33_33);
          {
            Comp_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Comp_16, 0) = ((MR_Box) (Outputs_20));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          Comp_16 = Comp0_14;
          STATE_VARIABLE_NumSubsts_33_33 = STATE_VARIABLE_NumSubsts_0_5;
        }
        break;
    }
    ll_backend__use_local_vars__substitute_lval_in_defn_components_6_p_0(HeadVar__1_1, HeadVar__2_2, Comps0_15, &Comps_17, STATE_VARIABLE_NumSubsts_33_33, STATE_VARIABLE_NumSubsts_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Comp_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Comps_17));
    }
  }
}

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_outputs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer STATE_VARIABLE_NumSubsts_0_5,
  MR_Integer * STATE_VARIABLE_NumSubsts_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_NumSubsts_6 = STATE_VARIABLE_NumSubsts_0_5;
  }
  else
  {
    MR_Word Output0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Outputs0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Output_16;
    MR_Word Outputs_17;
    MR_Word Dest0_19 = ((MR_Word) ((MR_hl_field(0, Output0_14, (MR_Integer) 0))));
    MR_Word Type_20 = ((MR_Word) ((MR_hl_field(0, Output0_14, (MR_Integer) 1))));
    MR_Word IsDummy_21 = ((MR_Unsigned) ((MR_hl_field(0, Output0_14, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word VarName_22 = ((MR_Word) ((MR_hl_field(0, Output0_14, (MR_Integer) 3))));
    MR_String OrigType_23 = ((MR_String) ((MR_hl_field(0, Output0_14, (MR_Integer) 4))));
    MR_Word MaybeForeignType_24 = ((MR_Word) ((MR_hl_field(0, Output0_14, (MR_Integer) 5))));
    MR_Word BoxPolicy_25 = ((MR_Unsigned) ((MR_hl_field(0, Output0_14, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Integer STATE_VARIABLE_NumSubsts_28_28;

    succeeded = ll_backend__llds____Unify____lval_0_0(Dest0_19, HeadVar__1_1);
    if (succeeded)
    {
      {
        Output_16 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Output_16, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(0, Output_16, 1) = ((MR_Box) (Type_20));
        MR_hl_field(0, Output_16, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_21));
        MR_hl_field(0, Output_16, 3) = ((MR_Box) (VarName_22));
        MR_hl_field(0, Output_16, 4) = ((MR_Box) (OrigType_23));
        MR_hl_field(0, Output_16, 5) = ((MR_Box) (MaybeForeignType_24));
        MR_hl_field(0, Output_16, 6) = (MR_Box) ((MR_Unsigned) (BoxPolicy_25));
      }
      STATE_VARIABLE_NumSubsts_28_28 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumSubsts_0_5 + (MR_Unsigned) 1);
    }
    else
    {
      Output_16 = Output0_14;
      STATE_VARIABLE_NumSubsts_28_28 = STATE_VARIABLE_NumSubsts_0_5;
    }
    ll_backend__use_local_vars__substitute_lval_in_defn_outputs_6_p_0(HeadVar__1_1, HeadVar__2_2, Outputs0_15, &Outputs_17, STATE_VARIABLE_NumSubsts_28_28, STATE_VARIABLE_NumSubsts_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Output_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Outputs_17));
    }
  }
}

static MR_Word MR_CALL 
ll_backend__use_local_vars__reg_type_for_lval_1_f_0(
  MR_Word Lval_3)
{
  MR_Word RegType_4;

  switch (MR_tag((MR_Word) Lval_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      RegType_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      RegType_4 = ((MR_Unsigned) ((MR_hl_field(1, Lval_3, (MR_Integer) 0))) & (MR_Integer) 1);
      break;
    case (MR_Integer) 2:
      RegType_4 = ((MR_Unsigned) ((MR_hl_field(2, Lval_3, (MR_Integer) 0))) & (MR_Integer) 1);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Lval_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
          RegType_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          RegType_4 = (MR_Integer) 1;
          break;
      }
      break;
  }
  return RegType_4;
}

static void MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_61;

  ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__373__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_61);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_61));
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__349__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeLiveMap_2,
  MR_Word MaybeFallThrough_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeFallThrough_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word FallThrough_10 = ((MR_Word) ((MR_hl_field(1, MaybeFallThrough_3, (MR_Integer) 0))));

        if ((MaybeLiveMap_2 == (MR_Word) ((MR_Unsigned) 0U)))
          *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word LiveMap_11 = ((MR_Word) ((MR_hl_field(1, MaybeLiveMap_2, (MR_Integer) 0))));
          MR_Word CompulsoryLvals_12;
          MR_Box conv0_CompulsoryLvals_12;

          mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__use_local_vars_scalar_common_2[0]), LiveMap_11, ((MR_Box) (FallThrough_10)), &conv0_CompulsoryLvals_12);
          CompulsoryLvals_12 = ((MR_Word) (conv0_CompulsoryLvals_12));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (CompulsoryLvals_12));
          }
        }
      }
    else
    {
      MR_Word Instr_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr_19 = ((MR_Word) ((MR_hl_field(0, Instr_13, (MR_Integer) 0))));
      MR_Word LiveLvals_21;

      succeeded = ((MR_tag((MR_Word) Uinstr_19)) == (MR_Integer) 2);
      if (succeeded)
      {
        LiveLvals_21 = ((MR_Word) ((MR_hl_field(2, Uinstr_19, (MR_Integer) 0))));
        {
          MR_Word STATE_VARIABLE_MaybeCompulsoryLvals_40_40;

          ll_backend__use_local_vars__find_compulsory_lvals_5_p_0(Instrs_14, MaybeLiveMap_2, MaybeFallThrough_3, (MR_Integer) 1, &STATE_VARIABLE_MaybeCompulsoryLvals_40_40);
          if ((STATE_VARIABLE_MaybeCompulsoryLvals_40_40 == (MR_Word) ((MR_Unsigned) 0U)))
            *HeadVar__5_5 = STATE_VARIABLE_MaybeCompulsoryLvals_40_40;
          else
          {
            MR_Word OldCompulsoryLvals_67 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeCompulsoryLvals_40_40, (MR_Integer) 0))));
            MR_Word AllCompulsoryLvals_68;

            mercury__set__union_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LiveLvals_21, OldCompulsoryLvals_67, &AllCompulsoryLvals_68);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (AllCompulsoryLvals_68));
            }
          }
        }
      }
      else
      {
        succeeded = ((((MR_tag((MR_Word) Uinstr_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          MR_Word Var_42;
          MR_Word Var_47;

          {
            Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_42, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_4[0]));
            MR_hl_field(0, Var_42, 1) = ((MR_Box) (ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_1));
            MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_42, 3) = ((MR_Box) (HeadVar__4_4));
            MR_hl_field(0, Var_42, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140ll_backend.use_local_vars.find_compulsory_lvals\'/5", (MR_String) "call without livevals");
          Var_47 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_47));
          }
        }
        else
        {
          succeeded = ((((MR_tag((MR_Word) Uinstr_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
          if (succeeded)
            succeeded = (HeadVar__4_4 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word Var_49;

            Var_49 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_49));
            }
          }
          else
          {
            MR_Word Labels_29;
            MR_Word NonLabelCodeAddrs_30;

            ll_backend__opt_util__possible_targets_3_p_0(Uinstr_19, &Labels_29, &NonLabelCodeAddrs_30);
            if ((NonLabelCodeAddrs_30 == (MR_Word) ((MR_Unsigned) 0U)))
              if ((Labels_29 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word next_value_of_HeadVar__1_1 = Instrs_14;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__4_4 = (MR_Integer) 0;
                continue;
              }
              else
              if ((MaybeLiveMap_2 == (MR_Word) ((MR_Unsigned) 0U)))
                *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word LiveMap_33 = ((MR_Word) ((MR_hl_field(1, MaybeLiveMap_2, (MR_Integer) 0))));
                MR_Word LabelsLiveLvals_34;
                MR_Word AllLabelsLiveLvals_35;
                MR_Word Var_52;
                MR_Word STATE_VARIABLE_MaybeCompulsoryLvals_54_54;

                {
                  Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_52, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_5[0]));
                  MR_hl_field(0, Var_52, 1) = ((MR_Box) (ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_2));
                  MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_52, 3) = ((MR_Box) (LiveMap_33));
                }
                mercury__list__map_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__use_local_vars_scalar_common_2[0]), Var_52, Labels_29, &LabelsLiveLvals_34);
                AllLabelsLiveLvals_35 = mercury__set__union_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LabelsLiveLvals_34);
                ll_backend__use_local_vars__find_compulsory_lvals_5_p_0(Instrs_14, MaybeLiveMap_2, MaybeFallThrough_3, (MR_Integer) 0, &STATE_VARIABLE_MaybeCompulsoryLvals_54_54);
                if ((STATE_VARIABLE_MaybeCompulsoryLvals_54_54 == (MR_Word) ((MR_Unsigned) 0U)))
                  *HeadVar__5_5 = STATE_VARIABLE_MaybeCompulsoryLvals_54_54;
                else
                {
                  MR_Word OldCompulsoryLvals_70 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeCompulsoryLvals_54_54, (MR_Integer) 0))));
                  MR_Word AllCompulsoryLvals_71;

                  mercury__set__union_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), AllLabelsLiveLvals_35, OldCompulsoryLvals_70, &AllCompulsoryLvals_71);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (AllCompulsoryLvals_71));
                  }
                }
              }
            else
              *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_assign_find_output_in_components_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer NumRealRRegs_7,
  MR_Word AvoidLvals_8,
  MR_Word * ToLval_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Comp_5;
    MR_Word Comps_6;
    MR_Word ToLvalPrime_11;
    MR_Word Outputs_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Comp_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Comps_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Comp_5)) == (MR_Integer) 2);
      if (succeeded)
      {
        Outputs_10 = ((MR_Word) ((MR_hl_field(2, Comp_5, (MR_Integer) 0))));
        succeeded = ll_backend__use_local_vars__opt_assign_find_output_in_outputs_4_p_0(Outputs_10, NumRealRRegs_7, AvoidLvals_8, &ToLvalPrime_11);
      }
      if (succeeded)
      {
        *ToLval_9 = ToLvalPrime_11;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Comps_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_assign_find_output_in_outputs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer NumRealRRegs_7,
  MR_Word AvoidLvals_8,
  MR_Word * ToLval_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Output_5;
    MR_Word Outputs_6;
    MR_Word Dest_10;
    MR_Word TypeCtorInfo_17_17;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Output_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Outputs_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      Dest_10 = ((MR_Word) ((MR_hl_field(0, Output_5, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) Dest_10)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_26 = ((MR_Integer) ((MR_hl_field(1, Dest_10, (MR_Integer) 1))));
            MR_Word Var_27 = ((MR_Unsigned) ((MR_hl_field(1, Dest_10, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (Var_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                succeeded = (Var_26 > NumRealRRegs_7);
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Dest_10, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
          }
          break;
      }
      if (succeeded)
      {
        TypeCtorInfo_17_17 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_17_17, ((MR_Box) (Dest_10)), AvoidLvals_8);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        *ToLval_9 = Dest_10;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Outputs_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
ll_backend__use_local_vars__use_local_vars_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_BlockMap_25;

  ll_backend__use_local_vars__use_local_vars_block_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_BlockMap_25);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_BlockMap_25));
}

void MR_CALL 
ll_backend__use_local_vars__use_local_vars_proc_8_p_0(
  MR_Word Instrs0_9,
  MR_Word * Instrs_10,
  MR_Integer NumRealRRegs_11,
  MR_Integer AccessThreshold_12,
  MR_Word AutoComments_13,
  MR_Word ProcLabel_14,
  MR_Word STATE_VARIABLE_C_0_32,
  MR_Word * STATE_VARIABLE_C_33)
{
  MR_bool succeeded;
  MR_Word Comments0_16;
  MR_Word NewLabels_17;
  MR_Word LabelSeq_18;
  MR_Word BlockMap0_19;
  MR_Word TentativeInstrs_20;
  MR_Integer NumTentativeInstrs_21;

  ll_backend__basic_block__create_basic_blocks_8_p_0(Instrs0_9, &Comments0_16, ProcLabel_14, STATE_VARIABLE_C_0_32, STATE_VARIABLE_C_33, &NewLabels_17, &LabelSeq_18, &BlockMap0_19);
  ll_backend__basic_block__flatten_basic_blocks_4_p_0(LabelSeq_18, BlockMap0_19, &TentativeInstrs_20, &NumTentativeInstrs_21);
  succeeded = (NumTentativeInstrs_21 < (MR_Integer) 10000);
  if (succeeded)
  {
    MR_Word MaybeLiveMap_22;
    MR_Word EBBLabelSeq_23;
    MR_Word EBBBlockMap0_24;
    MR_Word EBBBlockMap_25;
    MR_Word Instrs1_26;
    MR_Word Comments_31;
    MR_Word Var_36;
    MR_Box conv1_EBBBlockMap_25;
    MR_Integer Var_27;
    MR_Word LiveMap_28;

    ll_backend__livemap__build_livemap_2_p_0(TentativeInstrs_20, &MaybeLiveMap_22);
    ll_backend__basic_block__extend_basic_blocks_5_p_0(LabelSeq_18, &EBBLabelSeq_23, BlockMap0_19, &EBBBlockMap0_24, NewLabels_17);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_3[0]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (ll_backend__use_local_vars__use_local_vars_proc_8_p_0_1));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (MaybeLiveMap_22));
      MR_hl_field(0, Var_36, 4) = ((MR_Box) (NumRealRRegs_11));
      MR_hl_field(0, Var_36, 5) = ((MR_Box) (AccessThreshold_12));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__use_local_vars_scalar_common_1[0]), Var_36, EBBLabelSeq_23, ((MR_Box) (EBBBlockMap0_24)), &conv1_EBBBlockMap_25);
    EBBBlockMap_25 = ((MR_Word) (conv1_EBBBlockMap_25));
    ll_backend__basic_block__flatten_basic_blocks_4_p_0(EBBLabelSeq_23, EBBBlockMap_25, &Instrs1_26, &Var_27);
    succeeded = (AutoComments_13 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (MaybeLiveMap_22 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        LiveMap_28 = ((MR_Word) ((MR_hl_field(1, MaybeLiveMap_22, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_String NewComment_29;
      MR_Word NewCommentInstr_30;
      MR_String Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_42;

      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (ProcLabel_14));
      }
      Var_38 = ll_backend__opt_debug__dump_livemap_2_f_0(Var_39, LiveMap_28);
      NewComment_29 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_38);
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) (NewComment_29));
      }
      {
        NewCommentInstr_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewCommentInstr_30, 0) = ((MR_Box) (Var_40));
        MR_hl_field(0, NewCommentInstr_30, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (NewCommentInstr_30));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Comments_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Comments0_16, Var_42);
    }
    else
      Comments_31 = Comments0_16;
    *Instrs_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Comments_31, Instrs1_26);
  }
  else
    *Instrs_10 = Instrs0_9;
}

static MR_bool MR_CALL 
ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__use_local_vars__init(void)
{
}

void mercury__ll_backend__use_local_vars__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__use_local_vars__ll_backend__use_local_vars__type_ctor_info_maybe_compulsory_lvals_0);
}

void mercury__ll_backend__use_local_vars__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__use_local_vars__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.use_local_vars.
