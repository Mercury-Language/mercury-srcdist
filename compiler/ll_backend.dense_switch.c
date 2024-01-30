/*
** Automatically generated from `dense_switch.m'
** by the Mercury compiler,
** version rotd-2024-01-30
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


// :- module ll_backend.dense_switch.
// :- implementation.

/*
INIT mercury__ll_backend__dense_switch__init
ENDINIT
*/

#include "ll_backend.dense_switch.mih"


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
#include "enum.mih"
#include "getopt.mih"
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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_TypeInfo_Struct2 ll_backend__dense_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

static const MR_PseudoTypeInfo ll_backend__dense_switch__ll_backend__dense_switch__field_types_dense_switch_info_0_0[3];

static const MR_ConstString ll_backend__dense_switch__ll_backend__dense_switch__field_names_dense_switch_info_0_0[3];

static const MR_DuArgLocn ll_backend__dense_switch__ll_backend__dense_switch__field_locns_dense_switch_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__dense_switch__ll_backend__dense_switch__du_functor_desc_dense_switch_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__dense_switch__ll_backend__dense_switch__du_stag_ordered_dense_switch_info_0_0[1];

static const MR_DuPtagLayout ll_backend__dense_switch__ll_backend__dense_switch__du_ptag_ordered_dense_switch_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__dense_switch__ll_backend__dense_switch__du_name_ordered_dense_switch_info_0[1];

static const MR_Integer ll_backend__dense_switch__ll_backend__dense_switch__functor_number_map_dense_switch_info_0[1];

static MR_bool MR_CALL 
ll_backend__dense_switch__IntroducedFrom__pred__generate_dense_jump_table__251__1_2_p_0(
  MR_Word IndexPairs_11,
  MR_Word HeadVar__2_29);

static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_13_p_0(
  MR_Word BranchStart_14,
  MR_String VarName_15,
  MR_Word CodeModel_16,
  MR_Word SwitchGoalInfo_17,
  MR_Word EndLabel_18,
  MR_Word TaggedCase_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_IndexMap_0_41,
  MR_Word * STATE_VARIABLE_IndexMap_42,
  MR_Word STATE_VARIABLE_MaybeEnd_0_43,
  MR_Word * STATE_VARIABLE_MaybeEnd_44,
  MR_Word STATE_VARIABLE_CI_0_45,
  MR_Word * STATE_VARIABLE_CI_46);

static void MR_CALL 
ll_backend__dense_switch__record_dense_label_for_cons_tag_4_p_0(
  MR_Word Label_5,
  MR_Word ConsTag_6,
  MR_Word STATE_VARIABLE_IndexMap_0_9,
  MR_Word * STATE_VARIABLE_IndexMap_10);

static void MR_CALL 
ll_backend__dense_switch__generate_dense_switch_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_bool MR_CALL 
ll_backend__dense_switch__generate_dense_jump_table_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__dense_switch__generate_dense_jump_table_8_p_0(
  MR_Integer CurVal_9,
  MR_Integer LastVal_10,
  MR_Word IndexPairs_11,
  MR_Word * Targets_12,
  MR_Word STATE_VARIABLE_MaybeFailLabel_0_22,
  MR_Word * STATE_VARIABLE_MaybeFailLabel_23,
  MR_Word STATE_VARIABLE_CI_0_24,
  MR_Word * STATE_VARIABLE_CI_25);

static MR_bool MR_CALL 
ll_backend__dense_switch____Unify____dense_switch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__dense_switch____Compare____dense_switch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_2[3][3];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_3[1][1];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_4[1][5];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_5[1][16];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_6[1][6];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_7[1][7];




static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__dense_switch_scalar_common_2[1]))
  },
};

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__dense_switch_scalar_common_6[0])),
    ((MR_Box) (ll_backend__dense_switch__generate_dense_case_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__dense_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__dense_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_5[1][16] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_position_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&ll_backend__dense_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__dense_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__dense_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0))
  },
};

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_6[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
};

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct2 ll_backend__dense_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__dense_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0) }
};

static const MR_PseudoTypeInfo ll_backend__dense_switch__ll_backend__dense_switch__field_types_dense_switch_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_range_check_0)
};

static const MR_ConstString ll_backend__dense_switch__ll_backend__dense_switch__field_names_dense_switch_info_0_0[3] = {
  (MR_String) "first_value",
  (MR_String) "last_value",
  (MR_String) "need_range_check"
};

static const MR_DuArgLocn ll_backend__dense_switch__ll_backend__dense_switch__field_locns_dense_switch_info_0_0[3] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__dense_switch__ll_backend__dense_switch__du_functor_desc_dense_switch_info_0_0 = {
  (MR_String) "dense_switch_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__dense_switch__ll_backend__dense_switch__field_types_dense_switch_info_0_0,
  ll_backend__dense_switch__ll_backend__dense_switch__field_names_dense_switch_info_0_0,
  ll_backend__dense_switch__ll_backend__dense_switch__field_locns_dense_switch_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__dense_switch__ll_backend__dense_switch__du_stag_ordered_dense_switch_info_0_0[1] = { &ll_backend__dense_switch__ll_backend__dense_switch__du_functor_desc_dense_switch_info_0_0 };

static const MR_DuPtagLayout ll_backend__dense_switch__ll_backend__dense_switch__du_ptag_ordered_dense_switch_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__dense_switch__ll_backend__dense_switch__du_stag_ordered_dense_switch_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__dense_switch__ll_backend__dense_switch__du_name_ordered_dense_switch_info_0[1] = { &ll_backend__dense_switch__ll_backend__dense_switch__du_functor_desc_dense_switch_info_0_0 };

static const MR_Integer ll_backend__dense_switch__ll_backend__dense_switch__functor_number_map_dense_switch_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__dense_switch__ll_backend__dense_switch__type_ctor_info_dense_switch_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__dense_switch____Unify____dense_switch_info_0_0_10001)),
  ((MR_Box) (ll_backend__dense_switch____Compare____dense_switch_info_0_0_10001)),
  (MR_String) "ll_backend.dense_switch",
  (MR_String) "dense_switch_info",
  { ll_backend__dense_switch__ll_backend__dense_switch__du_name_ordered_dense_switch_info_0 },
  { ll_backend__dense_switch__ll_backend__dense_switch__du_ptag_ordered_dense_switch_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__dense_switch__ll_backend__dense_switch__functor_number_map_dense_switch_info_0,

};

static MR_bool MR_CALL 
ll_backend__dense_switch__IntroducedFrom__pred__generate_dense_jump_table__251__1_2_p_0(
  MR_Word IndexPairs_11,
  MR_Word HeadVar__2_29)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__dense_switch_scalar_common_1[2]), ((MR_Box) (IndexPairs_11)), ((MR_Box) (HeadVar__2_29)));
  return succeeded;
}

void MR_CALL 
ll_backend__dense_switch____Compare____dense_switch_info_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
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
        MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > Var_18);
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
ll_backend__dense_switch____Unify____dense_switch_info_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_IndexMap_10;

  ll_backend__dense_switch__record_dense_label_for_cons_tag_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_IndexMap_10);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_IndexMap_10));
}

static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2, &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_13_p_0(
  MR_Word BranchStart_14,
  MR_String VarName_15,
  MR_Word CodeModel_16,
  MR_Word SwitchGoalInfo_17,
  MR_Word EndLabel_18,
  MR_Word TaggedCase_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_IndexMap_0_41,
  MR_Word * STATE_VARIABLE_IndexMap_42,
  MR_Word STATE_VARIABLE_MaybeEnd_0_43,
  MR_Word * STATE_VARIABLE_MaybeEnd_44,
  MR_Word STATE_VARIABLE_CI_0_45,
  MR_Word * STATE_VARIABLE_CI_46)
{
  MR_Word TaggedMainConsId_24 = ((MR_Word) ((MR_hl_field(0, TaggedCase_19, (MR_Integer) 0))));
  MR_Word TaggedOtherConsIds_25 = ((MR_Word) ((MR_hl_field(0, TaggedCase_19, (MR_Integer) 1))));
  MR_Word Goal_27 = ((MR_Word) ((MR_hl_field(0, TaggedCase_19, (MR_Integer) 3))));
  MR_String MainConsName_28;
  MR_Word MainConsTag_29;
  MR_Word OtherConsNames_30;
  MR_Word OtherConsTags_31;
  MR_String LabelComment_32;
  MR_Word Label_33;
  MR_Word LabelCode_34;
  MR_Word TraceCode_36;
  MR_Word GoalCode_37;
  MR_Word BranchToEndCode_38;
  MR_Word StoreMap_39;
  MR_Word SaveCode_40;
  MR_Word STATE_VARIABLE_CI_48_48;
  MR_Word STATE_VARIABLE_IndexMap_49_49;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word STATE_VARIABLE_CLD_54_54;
  MR_Word STATE_VARIABLE_CI_55_55;
  MR_Word STATE_VARIABLE_CLD_56_56;
  MR_Word STATE_VARIABLE_CLD_58_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Box conv3_STATE_VARIABLE_IndexMap_42;

  hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(TaggedMainConsId_24, &MainConsName_28, &MainConsTag_29);
  mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), (MR_Word) (&ll_backend__dense_switch_scalar_common_2[2]), TaggedOtherConsIds_25, &OtherConsNames_30, &OtherConsTags_31);
  LabelComment_32 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(VarName_15, MainConsName_28, OtherConsNames_30);
  ll_backend__code_info__get_next_label_3_p_0(&Label_33, STATE_VARIABLE_CI_0_45, &STATE_VARIABLE_CI_48_48);
  ll_backend__dense_switch__record_dense_label_for_cons_tag_4_p_0(Label_33, MainConsTag_29, STATE_VARIABLE_IndexMap_0_41, &STATE_VARIABLE_IndexMap_49_49);
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (&ll_backend__dense_switch_scalar_common_7[0]));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (ll_backend__dense_switch__generate_dense_case_13_p_0_2));
    MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_50, 3) = ((MR_Box) (Label_33));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), (MR_Word) (&ll_backend__dense_switch_scalar_common_2[0]), Var_50, OtherConsTags_31, ((MR_Box) (STATE_VARIABLE_IndexMap_49_49)), &conv3_STATE_VARIABLE_IndexMap_42);
  *STATE_VARIABLE_IndexMap_42 = ((MR_Word) (conv3_STATE_VARIABLE_IndexMap_42));
  {
    Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_53, 1) = ((MR_Box) (Label_33));
  }
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (LabelComment_32));
  }
  LabelCode_34 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_52)));
  ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_14, STATE_VARIABLE_CI_48_48, &STATE_VARIABLE_CLD_54_54);
  ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(Goal_27, SwitchGoalInfo_17, &TraceCode_36, STATE_VARIABLE_CI_48_48, &STATE_VARIABLE_CI_55_55, STATE_VARIABLE_CLD_54_54, &STATE_VARIABLE_CLD_56_56);
  ll_backend__code_gen__generate_goal_7_p_0(CodeModel_16, Goal_27, &GoalCode_37, STATE_VARIABLE_CI_55_55, STATE_VARIABLE_CI_46, STATE_VARIABLE_CLD_56_56, &STATE_VARIABLE_CLD_58_58);
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (EndLabel_18));
  }
  {
    Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_60, 1) = ((MR_Box) (Var_61));
  }
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) ((MR_String) "branch to end of dense switch"));
  }
  BranchToEndCode_38 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_59)));
  hlds__hlds_llds__goal_info_get_store_map_2_p_0(SwitchGoalInfo_17, &StoreMap_39);
  ll_backend__code_loc_dep__generate_branch_end_5_p_0(StoreMap_39, STATE_VARIABLE_MaybeEnd_0_43, STATE_VARIABLE_MaybeEnd_44, &SaveCode_40, STATE_VARIABLE_CLD_58_58);
  Var_66 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveCode_40, BranchToEndCode_38);
  Var_65 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_37, Var_66);
  Var_64 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceCode_36, Var_65);
  *Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_34, Var_64);
}

static void MR_CALL 
ll_backend__dense_switch__record_dense_label_for_cons_tag_4_p_0(
  MR_Word Label_5,
  MR_Word ConsTag_6,
  MR_Word STATE_VARIABLE_IndexMap_0_9,
  MR_Word * STATE_VARIABLE_IndexMap_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsTag_6)) == (MR_Integer) 1);
  MR_Integer Index_8;
  MR_Word Var_11;

  if (succeeded)
  {
    Var_11 = ((MR_Word) ((MR_hl_field(1, ConsTag_6, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0);
    if (succeeded)
      Index_8 = ((MR_Integer) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
  }
  if (succeeded)
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), Index_8, ((MR_Box) (Label_5)), STATE_VARIABLE_IndexMap_0_9, STATE_VARIABLE_IndexMap_10);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.dense_switch.record_dense_label_for_cons_tag\'/4", (MR_String) "not int_tag");
      return;
    }
}

static void MR_CALL 
ll_backend__dense_switch__generate_dense_switch_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Code_20;
  MR_Word conv2_STATE_VARIABLE_IndexMap_42;
  MR_Word conv1_STATE_VARIABLE_MaybeEnd_44;
  MR_Word conv0_STATE_VARIABLE_CI_46;

  ll_backend__dense_switch__generate_dense_case_13_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv3_Code_20, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_IndexMap_42, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_MaybeEnd_44, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_CI_46);
  *wrapper_arg_2 = ((MR_Box) (conv3_Code_20));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_IndexMap_42));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_MaybeEnd_44));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_CI_46));
}

void MR_CALL 
ll_backend__dense_switch__generate_dense_switch_13_p_0(
  MR_Word TaggedCases_14,
  MR_Word VarRval_15,
  MR_String VarName_16,
  MR_Word CodeModel_17,
  MR_Word SwitchGoalInfo_18,
  MR_Word DenseSwitchInfo_19,
  MR_Word EndLabel_20,
  MR_Word MaybeEnd0_21,
  MR_Word * MaybeEnd_22,
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_CI_0_46,
  MR_Word * STATE_VARIABLE_CI_47,
  MR_Word STATE_VARIABLE_CLD_0_48)
{
  MR_bool succeeded;
  MR_Integer FirstVal_26 = ((MR_Integer) ((MR_hl_field(0, DenseSwitchInfo_19, (MR_Integer) 0))));
  MR_Integer LastVal_27 = ((MR_Integer) ((MR_hl_field(0, DenseSwitchInfo_19, (MR_Integer) 1))));
  MR_Word NeedRangeCheck_28 = ((MR_Unsigned) ((MR_hl_field(0, DenseSwitchInfo_19, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word IndexRval_29;
  MR_Word RangeCheckCode_31;
  MR_Word BranchStart_32;
  MR_Word CasesCodes_33;
  MR_Word IndexMap_34;
  MR_Word CasesCode_35;
  MR_Word IndexPairs_36;
  MR_Word Targets_37;
  MR_Word MaybeFailLabel_38;
  MR_Word JumpCode_39;
  MR_Word FailCode_40;
  MR_Word EndLabelCode_45;
  MR_Word STATE_VARIABLE_CI_54_54;
  MR_Word STATE_VARIABLE_CLD_55_55;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_CI_61_61;
  MR_Word STATE_VARIABLE_CI_63_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Box conv6_IndexMap_34;
  MR_Box conv5_MaybeEnd_22;
  MR_Box conv4_STATE_VARIABLE_CI_61_61;

  succeeded = (FirstVal_26 == (MR_Integer) 0);
  if (succeeded)
    IndexRval_29 = VarRval_15;
  else
  {
    MR_Word Var_51;
    MR_Word Var_52;

    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (FirstVal_26));
    }
    {
      Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_51, 1) = ((MR_Box) (Var_52));
    }
    {
      IndexRval_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, IndexRval_29, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, IndexRval_29, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__dense_switch_scalar_common_3[0])));
      MR_hl_field(3, IndexRval_29, 2) = ((MR_Box) (VarRval_15));
      MR_hl_field(3, IndexRval_29, 3) = ((MR_Box) (Var_51));
    }
  }
  switch (NeedRangeCheck_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        RangeCheckCode_31 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        STATE_VARIABLE_CI_54_54 = STATE_VARIABLE_CI_0_46;
        STATE_VARIABLE_CLD_55_55 = STATE_VARIABLE_CLD_0_48;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Integer Difference_30 = (MR_Integer) ((MR_Unsigned) LastVal_27 - (MR_Unsigned) FirstVal_26);
        MR_Word Var_53;
        MR_Word Var_57;
        MR_Word Var_58;

        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (Difference_30));
        }
        {
          Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_57, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(3, Var_53, 2) = ((MR_Box) (IndexRval_29));
          MR_hl_field(3, Var_53, 3) = ((MR_Box) (Var_57));
        }
        ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(Var_53, &RangeCheckCode_31, STATE_VARIABLE_CI_0_46, &STATE_VARIABLE_CI_54_54, STATE_VARIABLE_CLD_0_48, &STATE_VARIABLE_CLD_55_55);
      }
      break;
  }
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_55_55, &BranchStart_32);
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (&ll_backend__dense_switch_scalar_common_5[0]));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) (ll_backend__dense_switch__generate_dense_switch_13_p_0_1));
    MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_59, 3) = ((MR_Box) (BranchStart_32));
    MR_hl_field(0, Var_59, 4) = ((MR_Box) (VarName_16));
    MR_hl_field(0, Var_59, 5) = ((MR_Box) (CodeModel_17));
    MR_hl_field(0, Var_59, 6) = ((MR_Box) (SwitchGoalInfo_18));
    MR_hl_field(0, Var_59, 7) = ((MR_Box) (EndLabel_20));
  }
  Var_60 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
  mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0), (MR_Word) (&ll_backend__dense_switch_scalar_common_1[0]), (MR_Word) (&ll_backend__dense_switch_scalar_common_2[0]), (MR_Word) (&ll_backend__dense_switch_scalar_common_1[1]), (MR_Word) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0), Var_59, TaggedCases_14, &CasesCodes_33, ((MR_Box) (Var_60)), &conv6_IndexMap_34, ((MR_Box) (MaybeEnd0_21)), &conv5_MaybeEnd_22, ((MR_Box) (STATE_VARIABLE_CI_54_54)), &conv4_STATE_VARIABLE_CI_61_61);
  IndexMap_34 = ((MR_Word) (conv6_IndexMap_34));
  *MaybeEnd_22 = ((MR_Word) (conv5_MaybeEnd_22));
  STATE_VARIABLE_CI_61_61 = ((MR_Word) (conv4_STATE_VARIABLE_CI_61_61));
  CasesCode_35 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CasesCodes_33);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), IndexMap_34, &IndexPairs_36);
  ll_backend__dense_switch__generate_dense_jump_table_8_p_0(FirstVal_26, LastVal_27, IndexPairs_36, &Targets_37, (MR_Word) ((MR_Unsigned) 0U), &MaybeFailLabel_38, STATE_VARIABLE_CI_61_61, &STATE_VARIABLE_CI_63_63);
  {
    Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, Var_65, 1) = ((MR_Box) (IndexRval_29));
    MR_hl_field(3, Var_65, 2) = ((MR_Box) (Targets_37));
  }
  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_64, 0) = ((MR_Box) (Var_65));
    MR_hl_field(0, Var_64, 1) = ((MR_Box) ((MR_String) "switch (using dense jump table)"));
  }
  JumpCode_39 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_64)));
  if ((MaybeFailLabel_38 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    FailCode_40 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CI_47 = STATE_VARIABLE_CI_63_63;
  }
  else
  {
    MR_Word FailLabel_41 = ((MR_Word) ((MR_hl_field(1, MaybeFailLabel_38, (MR_Integer) 0))));
    MR_Word FailLabelCode_43;
    MR_Word FailureCode_44;
    MR_Word Var_67;
    MR_Word Var_68;

    {
      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_68, 1) = ((MR_Box) (FailLabel_41));
    }
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(0, Var_67, 1) = ((MR_Box) ((MR_String) "compiler-introduced \140fail\' case of dense switch"));
    }
    FailLabelCode_43 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_67)));
    ll_backend__code_loc_dep__generate_failure_4_p_0(&FailureCode_44, STATE_VARIABLE_CI_63_63, STATE_VARIABLE_CI_47, STATE_VARIABLE_CLD_55_55);
    FailCode_40 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailLabelCode_43, FailureCode_44);
  }
  {
    Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_71, 1) = ((MR_Box) (EndLabel_20));
  }
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) ((MR_String) "end of dense switch"));
  }
  EndLabelCode_45 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_70)));
  Var_75 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_40, EndLabelCode_45);
  Var_74 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CasesCode_35, Var_75);
  Var_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), JumpCode_39, Var_74);
  *Code_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RangeCheckCode_31, Var_73);
}

static MR_bool MR_CALL 
ll_backend__dense_switch__generate_dense_jump_table_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__dense_switch__IntroducedFrom__pred__generate_dense_jump_table__251__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__dense_switch__generate_dense_jump_table_8_p_0(
  MR_Integer CurVal_9,
  MR_Integer LastVal_10,
  MR_Word IndexPairs_11,
  MR_Word * Targets_12,
  MR_Word STATE_VARIABLE_MaybeFailLabel_0_22,
  MR_Word * STATE_VARIABLE_MaybeFailLabel_23,
  MR_Word STATE_VARIABLE_CI_0_24,
  MR_Word * STATE_VARIABLE_CI_25)
{
  MR_bool succeeded = (CurVal_9 > LastVal_10);

  if (succeeded)
  {
    MR_Word Var_26;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (&ll_backend__dense_switch_scalar_common_4[0]));
      MR_hl_field(0, Var_26, 1) = ((MR_Box) (ll_backend__dense_switch__generate_dense_jump_table_8_p_0_1));
      MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_26, 3) = ((MR_Box) (IndexPairs_11));
      MR_hl_field(0, Var_26, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140ll_backend.dense_switch.generate_dense_jump_table\'/8", (MR_String) "NextVal > LastVal, IndexList not []");
    *Targets_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CI_25 = STATE_VARIABLE_CI_0_24;
    *STATE_VARIABLE_MaybeFailLabel_23 = STATE_VARIABLE_MaybeFailLabel_0_22;
  }
  else
  {
    MR_Integer NextVal_15 = (MR_Integer) ((MR_Unsigned) CurVal_9 + (MR_Unsigned) 1);

    if ((IndexPairs_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word FailLabel_16;
      MR_Word LaterTargets_17;
      MR_Word STATE_VARIABLE_MaybeFailLabel_31_31;
      MR_Word STATE_VARIABLE_CI_32_32;
      MR_Word Var_35;

      if ((STATE_VARIABLE_MaybeFailLabel_0_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ll_backend__code_info__get_next_label_3_p_0(&FailLabel_16, STATE_VARIABLE_CI_0_24, &STATE_VARIABLE_CI_32_32);
        {
          STATE_VARIABLE_MaybeFailLabel_31_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_MaybeFailLabel_31_31, 0) = ((MR_Box) (FailLabel_16));
        }
      }
      else
      {
        FailLabel_16 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeFailLabel_0_22, (MR_Integer) 0))));
        STATE_VARIABLE_MaybeFailLabel_31_31 = STATE_VARIABLE_MaybeFailLabel_0_22;
        STATE_VARIABLE_CI_32_32 = STATE_VARIABLE_CI_0_24;
      }
      ll_backend__dense_switch__generate_dense_jump_table_8_p_0(NextVal_15, LastVal_10, IndexPairs_11, &LaterTargets_17, STATE_VARIABLE_MaybeFailLabel_31_31, STATE_VARIABLE_MaybeFailLabel_23, STATE_VARIABLE_CI_32_32, STATE_VARIABLE_CI_25);
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (FailLabel_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Targets_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_35));
        MR_hl_field(1, base, 1) = ((MR_Box) (LaterTargets_17));
      }
    }
    else
    {
      MR_Word FirstIndexPair_18 = ((MR_Word) ((MR_hl_field(1, IndexPairs_11, (MR_Integer) 0))));
      MR_Word LaterIndexPairs_19 = ((MR_Word) ((MR_hl_field(1, IndexPairs_11, (MR_Integer) 1))));
      MR_Integer FirstIndex_20 = ((MR_Integer) ((MR_hl_field(0, FirstIndexPair_18, (MR_Integer) 0))));
      MR_Word FirstLabel_21 = ((MR_Word) ((MR_hl_field(0, FirstIndexPair_18, (MR_Integer) 1))));

      succeeded = (FirstIndex_20 == CurVal_9);
      if (succeeded)
      {
        MR_Word Var_38;
        MR_Word LaterTargets_44;

        ll_backend__dense_switch__generate_dense_jump_table_8_p_0(NextVal_15, LastVal_10, LaterIndexPairs_19, &LaterTargets_44, STATE_VARIABLE_MaybeFailLabel_0_22, STATE_VARIABLE_MaybeFailLabel_23, STATE_VARIABLE_CI_0_24, STATE_VARIABLE_CI_25);
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (FirstLabel_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Targets_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_38));
          MR_hl_field(1, base, 1) = ((MR_Box) (LaterTargets_44));
        }
      }
      else
      {
        MR_Word STATE_VARIABLE_MaybeFailLabel_39_39;
        MR_Word STATE_VARIABLE_CI_40_40;
        MR_Word Var_43;
        MR_Word FailLabel_45;
        MR_Word LaterTargets_46;

        if ((STATE_VARIABLE_MaybeFailLabel_0_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          ll_backend__code_info__get_next_label_3_p_0(&FailLabel_45, STATE_VARIABLE_CI_0_24, &STATE_VARIABLE_CI_40_40);
          {
            STATE_VARIABLE_MaybeFailLabel_39_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_MaybeFailLabel_39_39, 0) = ((MR_Box) (FailLabel_45));
          }
        }
        else
        {
          FailLabel_45 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeFailLabel_0_22, (MR_Integer) 0))));
          STATE_VARIABLE_MaybeFailLabel_39_39 = STATE_VARIABLE_MaybeFailLabel_0_22;
          STATE_VARIABLE_CI_40_40 = STATE_VARIABLE_CI_0_24;
        }
        ll_backend__dense_switch__generate_dense_jump_table_8_p_0(NextVal_15, LastVal_10, IndexPairs_11, &LaterTargets_46, STATE_VARIABLE_MaybeFailLabel_39_39, STATE_VARIABLE_MaybeFailLabel_23, STATE_VARIABLE_CI_40_40, STATE_VARIABLE_CI_25);
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (FailLabel_45));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Targets_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_43));
          MR_hl_field(1, base, 1) = ((MR_Box) (LaterTargets_46));
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_p_0(
  MR_Word CI_10,
  MR_Word VarType_11,
  MR_Word TaggedCases_12,
  MR_Integer LowerLimit_13,
  MR_Integer UpperLimit_14,
  MR_Integer NumValues_15,
  MR_Integer ReqDensity_16,
  MR_Word CanFail_17,
  MR_Word * DenseSwitchInfo_18)
{
  MR_bool succeeded;
  MR_Integer NumCases_19;
  MR_Integer Span_20;
  MR_Integer Range_21;
  MR_Integer Density_22;
  MR_Word NeedRangeCheck_29;
  MR_Integer FirstVal_30;
  MR_Integer LastVal_31;
  MR_Integer Var_33;

  mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0), TaggedCases_12, &NumCases_19);
  succeeded = (NumCases_19 > (MR_Integer) 2);
  if (succeeded)
  {
    Span_20 = (MR_Integer) ((MR_Unsigned) UpperLimit_14 - (MR_Unsigned) LowerLimit_13);
    Var_33 = (MR_Integer) 1;
    Range_21 = (MR_Integer) ((MR_Unsigned) Span_20 + (MR_Unsigned) Var_33);
    Density_22 = backend_libs__switch_util__switch_density_2_f_0(NumValues_15, Range_21);
    succeeded = (Density_22 > ReqDensity_16);
    if (succeeded)
    {
      switch (CanFail_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ModuleInfo_23;
            MR_Word TypeCategory_24;
            MR_Integer TypeMin_25;
            MR_Integer TypeMax_26;
            MR_Integer TypeRange_27;
            MR_Integer DetDensity_28;

            ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_23);
            TypeCategory_24 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_23, VarType_11);
            succeeded = backend_libs__switch_util__type_range_6_p_0(ModuleInfo_23, TypeCategory_24, VarType_11, &TypeMin_25, &TypeMax_26, &TypeRange_27);
            if (succeeded)
            {
              DetDensity_28 = backend_libs__switch_util__switch_density_2_f_0(NumValues_15, TypeRange_27);
              succeeded = (DetDensity_28 > ReqDensity_16);
            }
            if (succeeded)
            {
              NeedRangeCheck_29 = (MR_Integer) 1;
              FirstVal_30 = TypeMin_25;
              LastVal_31 = TypeMax_26;
            }
            else
            {
              NeedRangeCheck_29 = (MR_Integer) 0;
              FirstVal_30 = LowerLimit_13;
              LastVal_31 = UpperLimit_14;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            NeedRangeCheck_29 = (MR_Integer) 1;
            FirstVal_30 = LowerLimit_13;
            LastVal_31 = UpperLimit_14;
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *DenseSwitchInfo_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (FirstVal_30));
        MR_hl_field(0, base, 1) = ((MR_Box) (LastVal_31));
        MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (NeedRangeCheck_29));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__dense_switch____Unify____dense_switch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__dense_switch____Unify____dense_switch_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__dense_switch____Compare____dense_switch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__dense_switch____Compare____dense_switch_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__dense_switch__init(void)
{
}

void mercury__ll_backend__dense_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__dense_switch__ll_backend__dense_switch__type_ctor_info_dense_switch_info_0);
}

void mercury__ll_backend__dense_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__dense_switch__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.dense_switch.
