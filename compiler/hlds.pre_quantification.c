/*
** Automatically generated from `pre_quantification.m'
** by the Mercury compiler,
** version rotd-2024-04-08
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


// :- module hlds.pre_quantification.
// :- implementation.

/*
INIT mercury__hlds__pre_quantification__init
ENDINIT
*/

#include "hlds.pre_quantification.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "counter.mih"
#include "enum.mih"
#include "hlds.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__pre_quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__pre_quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__pre_quantification__sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_uint_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pre_quantification__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_uint_0;

static const MR_FA_TypeInfo_Struct1 hlds__pre_quantification__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__pre_quantification__sparse_bitset__pti_sparse_bitset_1__plain_builtin__type_ctor_info_uint_0;

static const MR_FA_TypeInfo_Struct2 hlds__pre_quantification__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_uint_0;

static const MR_FA_TypeInfo_Struct2 hlds__pre_quantification__tree234__ti_tree234_2builtin__type_ctor_info_uint_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
hlds__pre_quantification____Compare____zones_to_dup_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zones_to_dup_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__pre_quantification____Compare____zone_0_0(
  MR_Word * HeadVar__1_1,
  MR_Unsigned HeadVar__2_2,
  MR_Unsigned HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zone_0_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2);

static void MR_CALL 
hlds__pre_quantification____Compare____vars_to_zones_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____vars_to_zones_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_case_6_p_0(
  MR_Unsigned CurZone_7,
  MR_Word ZonesToDupVars_8,
  MR_Word STATE_VARIABLE_Case_0_15,
  MR_Word * STATE_VARIABLE_Case_16,
  MR_Word STATE_VARIABLE_TraceCounter_0_17,
  MR_Word * STATE_VARIABLE_TraceCounter_18);

static void MR_CALL 
hlds__pre_quantification__add_var_to_zone_4_p_0(
  MR_Word Var_5,
  MR_Unsigned Zone_6,
  MR_Word STATE_VARIABLE_ZonesToDupVars_0_10,
  MR_Word * STATE_VARIABLE_ZonesToDupVars_11);

static void MR_CALL 
hlds__pre_quantification__build_zones_to_dup_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__pre_quantification__build_zones_to_dup_vars_4_p_0(
  MR_Word Var_5,
  MR_Word Zones_6,
  MR_Word STATE_VARIABLE_ZonesToDupVars_0_12,
  MR_Word * STATE_VARIABLE_ZonesToDupVars_13);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_case_6_p_0(
  MR_Unsigned CurZone_7,
  MR_Word Case_8,
  MR_Word STATE_VARIABLE_TraceCounter_0_14,
  MR_Word * STATE_VARIABLE_TraceCounter_15,
  MR_Word STATE_VARIABLE_VarsToZones_0_16,
  MR_Word * STATE_VARIABLE_VarsToZones_17);

static void MR_CALL 
hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(
  MR_Unsigned CurZone_7,
  MR_Word ZonesToDupVars_8,
  MR_Word STATE_VARIABLE_Goal_0_99,
  MR_Word * STATE_VARIABLE_Goal_100,
  MR_Word STATE_VARIABLE_TraceCounter_0_101,
  MR_Word * STATE_VARIABLE_TraceCounter_102);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(
  MR_Unsigned CurZone_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_TraceCounter_0_92,
  MR_Word * STATE_VARIABLE_TraceCounter_93,
  MR_Word STATE_VARIABLE_VarsToZones_0_94,
  MR_Word * STATE_VARIABLE_VarsToZones_95);

static void MR_CALL 
hlds__pre_quantification__record_vars_in_zone_4_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarsToZones_0_3,
  MR_Word * STATE_VARIABLE_VarsToZones_4);

static void MR_CALL 
hlds__pre_quantification__record_var_in_zone_4_p_0(
  MR_Unsigned Zone_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_VarsToZones_0_11,
  MR_Word * STATE_VARIABLE_VarsToZones_12);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____vars_to_zones_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pre_quantification____Compare____vars_to_zones_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zone_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pre_quantification____Compare____zone_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zones_to_dup_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pre_quantification____Compare____zones_to_dup_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__pre_quantification_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_2[5][3];

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_4[4][9];

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_5[2][7];




static /* final */ const MR_Box hlds__pre_quantification_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__pre_quantification_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__uint__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
};

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&hlds__pre_quantification_scalar_common_1[2]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pre_quantification_scalar_common_1[0])),
    ((MR_Box) (&hlds__pre_quantification_scalar_common_1[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__pre_quantification_scalar_common_3[0])),
    ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__pre_quantification_scalar_common_3[0])),
    ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__pre_quantification_scalar_common_5[0])),
    ((MR_Box) (hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__pre_quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_4[4][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_ucounter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_ucounter_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_uint_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_ucounter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_ucounter_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_uint_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_ucounter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_ucounter_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_ucounter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_ucounter_0))
  },
};

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_5[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__pre_quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__pre_quantification__sparse_bitset__pti_sparse_bitset_1__plain_builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__pre_quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__pre_quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__pre_quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__pre_quantification__sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_uint_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pre_quantification__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_uint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__pre_quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__pre_quantification__sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_uint_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__pre_quantification__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__pre_quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_PseudoTypeInfo) (&hlds__pre_quantification__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__pre_quantification__sparse_bitset__pti_sparse_bitset_1__plain_builtin__type_ctor_info_uint_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__pre_quantification__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_uint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__pre_quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__pre_quantification__sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_uint_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__pre_quantification__hlds__pre_quantification__type_ctor_info_vars_to_zones_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pre_quantification____Unify____vars_to_zones_0_0_10001)),
  ((MR_Box) (hlds__pre_quantification____Compare____vars_to_zones_0_0_10001)),
  (MR_String) "hlds.pre_quantification",
  (MR_String) "vars_to_zones",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__pre_quantification__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_uint_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct hlds__pre_quantification__hlds__pre_quantification__type_ctor_info_zone_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pre_quantification____Unify____zone_0_0_10001)),
  ((MR_Box) (hlds__pre_quantification____Compare____zone_0_0_10001)),
  (MR_String) "hlds.pre_quantification",
  (MR_String) "zone",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 hlds__pre_quantification__tree234__ti_tree234_2builtin__type_ctor_info_uint_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_TypeInfo) (&hlds__pre_quantification__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__pre_quantification__hlds__pre_quantification__type_ctor_info_zones_to_dup_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pre_quantification____Unify____zones_to_dup_vars_0_0_10001)),
  ((MR_Box) (hlds__pre_quantification____Compare____zones_to_dup_vars_0_0_10001)),
  (MR_String) "hlds.pre_quantification",
  (MR_String) "zones_to_dup_vars",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__pre_quantification__tree234__ti_tree234_2builtin__type_ctor_info_uint_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
hlds__pre_quantification____Compare____zones_to_dup_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zones_to_dup_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__pre_quantification____Compare____zone_0_0(
  MR_Word * HeadVar__1_1,
  MR_Unsigned HeadVar__2_2,
  MR_Unsigned HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Unsigned Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Unsigned Cast_HeadVar2_5 = HeadVar__3_3;

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
hlds__pre_quantification____Unify____zone_0_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Unsigned Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Unsigned Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
hlds__pre_quantification____Compare____vars_to_zones_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____vars_to_zones_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_case_6_p_0(
  MR_Unsigned CurZone_7,
  MR_Word ZonesToDupVars_8,
  MR_Word STATE_VARIABLE_Case_0_15,
  MR_Word * STATE_VARIABLE_Case_16,
  MR_Word STATE_VARIABLE_TraceCounter_0_17,
  MR_Word * STATE_VARIABLE_TraceCounter_18)
{
  MR_Word MainConsId_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_15, (MR_Integer) 0))));
  MR_Word OtherConsIds_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_15, (MR_Integer) 1))));
  MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_15, (MR_Integer) 2))));
  MR_Word Goal_14;

  hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, Goal0_13, &Goal_14, STATE_VARIABLE_TraceCounter_0_17, STATE_VARIABLE_TraceCounter_18);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Case_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_14));
  }
}

static void MR_CALL 
hlds__pre_quantification__add_var_to_zone_4_p_0(
  MR_Word Var_5,
  MR_Unsigned Zone_6,
  MR_Word STATE_VARIABLE_ZonesToDupVars_0_10,
  MR_Word * STATE_VARIABLE_ZonesToDupVars_11)
{
  MR_bool succeeded;
  MR_Word DupVars0_8;
  MR_Box conv0_DupVars0_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__pre_quantification_scalar_common_1[2]), STATE_VARIABLE_ZonesToDupVars_0_10, ((MR_Box) (Zone_6)), &conv0_DupVars0_8);
  if (succeeded)
  {
    DupVars0_8 = ((MR_Word) (conv0_DupVars0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word DupVars_9;

    {
      DupVars_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DupVars_9, 0) = ((MR_Box) (Var_5));
      MR_hl_field(1, DupVars_9, 1) = ((MR_Box) (DupVars0_8));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__pre_quantification_scalar_common_1[2]), ((MR_Box) (Zone_6)), ((MR_Box) (DupVars_9)), STATE_VARIABLE_ZonesToDupVars_0_10, STATE_VARIABLE_ZonesToDupVars_11);
  }
  else
  {
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_5));
      MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__pre_quantification_scalar_common_1[2]), ((MR_Box) (Zone_6)), ((MR_Box) (Var_13)), STATE_VARIABLE_ZonesToDupVars_0_10, STATE_VARIABLE_ZonesToDupVars_11);
  }
}

static void MR_CALL 
hlds__pre_quantification__build_zones_to_dup_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ZonesToDupVars_11;

  hlds__pre_quantification__add_var_to_zone_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Unsigned) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ZonesToDupVars_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ZonesToDupVars_11));
}

static void MR_CALL 
hlds__pre_quantification__build_zones_to_dup_vars_4_p_0(
  MR_Word Var_5,
  MR_Word Zones_6,
  MR_Word STATE_VARIABLE_ZonesToDupVars_0_12,
  MR_Word * STATE_VARIABLE_ZonesToDupVars_13)
{
  MR_bool succeeded;
  MR_Word ZoneList_8;
  MR_Unsigned FirstZone_9;
  MR_Word Var_14;
  MR_Unsigned Var_22;

  ZoneList_8 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_117_105_110_116_93_95_48_95_49_1_f_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[3]), Zones_6);
  succeeded = (ZoneList_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    FirstZone_9 = ((MR_Unsigned) ((MR_hl_field(1, ZoneList_8, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(1, ZoneList_8, (MR_Integer) 1))));
    succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_22 = (MR_Unsigned) 0U;
      succeeded = (FirstZone_9 != Var_22);
    }
  }
  if (succeeded)
  {
    MR_Word Var_15;
    MR_Box conv1_STATE_VARIABLE_ZonesToDupVars_13;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_5[1]));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (hlds__pre_quantification__build_zones_to_dup_vars_4_p_0_1));
      MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_15, 3) = ((MR_Box) (Var_5));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__pre_quantification_scalar_common_2[0]), Var_15, ZoneList_8, ((MR_Box) (STATE_VARIABLE_ZonesToDupVars_0_12)), &conv1_STATE_VARIABLE_ZonesToDupVars_13);
    *STATE_VARIABLE_ZonesToDupVars_13 = ((MR_Word) (conv1_STATE_VARIABLE_ZonesToDupVars_13));
  }
  else
    *STATE_VARIABLE_ZonesToDupVars_13 = STATE_VARIABLE_ZonesToDupVars_0_12;
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_case_6_p_0(
  MR_Unsigned CurZone_7,
  MR_Word Case_8,
  MR_Word STATE_VARIABLE_TraceCounter_0_14,
  MR_Word * STATE_VARIABLE_TraceCounter_15,
  MR_Word STATE_VARIABLE_VarsToZones_0_16,
  MR_Word * STATE_VARIABLE_VarsToZones_17)
{
  MR_Word Goal_13 = ((MR_Word) ((MR_hl_field(0, Case_8, (MR_Integer) 2))));

  hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(CurZone_7, Goal_13, STATE_VARIABLE_TraceCounter_0_14, STATE_VARIABLE_TraceCounter_15, STATE_VARIABLE_VarsToZones_0_16, STATE_VARIABLE_VarsToZones_17);
}

static void MR_CALL 
hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ZonesToDupVars_13;

  hlds__pre_quantification__build_zones_to_dup_vars_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ZonesToDupVars_13);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ZonesToDupVars_13));
}

void MR_CALL 
hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4)
{
  MR_bool succeeded;
  MR_Word VarsToZones0_5;
  MR_Word TraceCounter0_6;
  MR_Word VarsToZones_8;
  MR_Word ZonesToDupVars0_9;
  MR_Word ZonesToDupVars_10;
  MR_Word Var_7;
  MR_Box conv1_ZonesToDupVars_10;

  mercury__map__init_1_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_1[1]), &VarsToZones0_5);
  mercury__counter__uinit_2_p_0((MR_Unsigned) 1U, &TraceCounter0_6);
  hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0((MR_Unsigned) 0U, Goal0_3, TraceCounter0_6, &Var_7, VarsToZones0_5, &VarsToZones_8);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__pre_quantification_scalar_common_1[2]), &ZonesToDupVars0_9);
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_1[1]), (MR_Word) (&hlds__pre_quantification_scalar_common_2[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_2[4]), VarsToZones_8, ((MR_Box) (ZonesToDupVars0_9)), &conv1_ZonesToDupVars_10);
  ZonesToDupVars_10 = ((MR_Word) (conv1_ZonesToDupVars_10));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__pre_quantification_scalar_common_1[2]), ZonesToDupVars_10);
  if (succeeded)
    *Goal_4 = Goal0_3;
  else
  {
    MR_Word Var_11;

    hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0((MR_Unsigned) 0U, ZonesToDupVars_10, Goal0_3, Goal_4, TraceCounter0_6, &Var_11);
  }
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_Case_16;
  MR_Word conv10_STATE_VARIABLE_TraceCounter_18;

  hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_case_6_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv11_STATE_VARIABLE_Case_16, ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_TraceCounter_18);
  *wrapper_arg_2 = ((MR_Box) (conv11_STATE_VARIABLE_Case_16));
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_TraceCounter_18));
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Goal_100;
  MR_Word conv7_STATE_VARIABLE_TraceCounter_102;

  hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv8_STATE_VARIABLE_Goal_100, ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_TraceCounter_102);
  *wrapper_arg_2 = ((MR_Box) (conv8_STATE_VARIABLE_Goal_100));
  *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_TraceCounter_102));
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Goal_100;
  MR_Word conv3_STATE_VARIABLE_TraceCounter_102;

  hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_Goal_100, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_TraceCounter_102);
  *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_Goal_100));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_TraceCounter_102));
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Goal_100;
  MR_Word conv0_STATE_VARIABLE_TraceCounter_102;

  hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Goal_100, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TraceCounter_102);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Goal_100));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TraceCounter_102));
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(
  MR_Unsigned CurZone_7,
  MR_Word ZonesToDupVars_8,
  MR_Word STATE_VARIABLE_Goal_0_99,
  MR_Word * STATE_VARIABLE_Goal_100,
  MR_Word STATE_VARIABLE_TraceCounter_0_101,
  MR_Word * STATE_VARIABLE_TraceCounter_102)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_99, (MR_Integer) 0))));
  MR_Word GoalInfo_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_99, (MR_Integer) 1))));
  MR_Word GoalExpr_31;

  switch (MR_tag((MR_Word) GoalExpr0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_59 = (MR_Word) ((MR_Word) (GoalExpr0_11));
        MR_Word SubGoal_60;

        hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, SubGoal0_59, &SubGoal_60, STATE_VARIABLE_TraceCounter_0_101, STATE_VARIABLE_TraceCounter_102);
        GoalExpr_31 = (MR_Word) ((MR_Word) (SubGoal_60));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHSVar_32 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, (MR_Integer) 0))));
        MR_Word RHS0_33 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, (MR_Integer) 1))));
        MR_Word Mode_34 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, (MR_Integer) 2))));
        MR_Word Kind_35 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, (MR_Integer) 3))));
        MR_Word Context_36 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, (MR_Integer) 4))));

        switch (MR_tag((MR_Word) RHS0_33)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              GoalExpr_31 = GoalExpr0_11;
              *STATE_VARIABLE_TraceCounter_102 = STATE_VARIABLE_TraceCounter_0_101;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word NonLocals_45 = ((MR_Word) ((MR_hl_field(2, RHS0_33, (MR_Integer) 2))));
              MR_Word LambdaVarsModes_46 = ((MR_Word) ((MR_hl_field(2, RHS0_33, (MR_Integer) 3))));
              MR_Word Detism_47 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_33, (MR_Integer) 4))) & (MR_Integer) 7);
              MR_Word LambdaGoal0_48 = ((MR_Word) ((MR_hl_field(2, RHS0_33, (MR_Integer) 5))));
              MR_Word LambdaGoal_50;
              MR_Word RHS_51;
              MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(2, RHS0_33, (MR_Integer) 0)));

              hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0((MR_Unsigned) 0U, ZonesToDupVars_8, LambdaGoal0_48, &LambdaGoal_50, STATE_VARIABLE_TraceCounter_0_101, STATE_VARIABLE_TraceCounter_102);
              {
                RHS_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, RHS_51, 0) = (MR_Box) (packed_word_3);
                MR_hl_field(2, RHS_51, 1) = NULL;
                MR_hl_field(2, RHS_51, 2) = ((MR_Box) (NonLocals_45));
                MR_hl_field(2, RHS_51, 3) = ((MR_Box) (LambdaVarsModes_46));
                MR_hl_field(2, RHS_51, 4) = (MR_Box) ((MR_Unsigned) (Detism_47));
                MR_hl_field(2, RHS_51, 5) = ((MR_Box) (LambdaGoal_50));
              }
              {
                GoalExpr_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, GoalExpr_31, 0) = ((MR_Box) (LHSVar_32));
                MR_hl_field(1, GoalExpr_31, 1) = ((MR_Box) (RHS_51));
                MR_hl_field(1, GoalExpr_31, 2) = ((MR_Box) (Mode_34));
                MR_hl_field(1, GoalExpr_31, 3) = ((MR_Box) (Kind_35));
                MR_hl_field(1, GoalExpr_31, 4) = ((MR_Box) (Context_36));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        GoalExpr_31 = GoalExpr0_11;
        *STATE_VARIABLE_TraceCounter_102 = STATE_VARIABLE_TraceCounter_0_101;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            GoalExpr_31 = GoalExpr0_11;
            *STATE_VARIABLE_TraceCounter_102 = STATE_VARIABLE_TraceCounter_0_101;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_52 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word SubGoals0_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))));
            MR_Word SubGoals_54;
            MR_Word Var_104;
            MR_Box conv2_STATE_VARIABLE_TraceCounter_102;

            {
              Var_104 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_104, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[2]));
              MR_hl_field(0, Var_104, 1) = ((MR_Box) (hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_1));
              MR_hl_field(0, Var_104, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_104, 3) = ((MR_Box) (CurZone_7));
              MR_hl_field(0, Var_104, 4) = ((MR_Box) (ZonesToDupVars_8));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_ucounter_0), Var_104, SubGoals0_53, &SubGoals_54, ((MR_Box) (STATE_VARIABLE_TraceCounter_0_101)), &conv2_STATE_VARIABLE_TraceCounter_102);
            *STATE_VARIABLE_TraceCounter_102 = ((MR_Word) (conv2_STATE_VARIABLE_TraceCounter_102));
            {
              GoalExpr_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_31, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_31, 1) = (MR_Box) ((MR_Unsigned) (ConjType_52));
              MR_hl_field(3, GoalExpr_31, 2) = ((MR_Box) (SubGoals_54));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_106;
            MR_Word SubGoals0_124 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
            MR_Word SubGoals_125;
            MR_Box conv5_STATE_VARIABLE_TraceCounter_102;

            {
              Var_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_106, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[2]));
              MR_hl_field(0, Var_106, 1) = ((MR_Box) (hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_2));
              MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_106, 3) = ((MR_Box) (CurZone_7));
              MR_hl_field(0, Var_106, 4) = ((MR_Box) (ZonesToDupVars_8));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_ucounter_0), Var_106, SubGoals0_124, &SubGoals_125, ((MR_Box) (STATE_VARIABLE_TraceCounter_0_101)), &conv5_STATE_VARIABLE_TraceCounter_102);
            *STATE_VARIABLE_TraceCounter_102 = ((MR_Word) (conv5_STATE_VARIABLE_TraceCounter_102));
            {
              GoalExpr_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_31, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_31, 1) = ((MR_Box) (SubGoals_125));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
            MR_Word CanFail_56 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 3))));
            MR_Word Cases_58;
            MR_Word Var_108;
            MR_Box conv12_STATE_VARIABLE_TraceCounter_102;

            {
              Var_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_108, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[3]));
              MR_hl_field(0, Var_108, 1) = ((MR_Box) (hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_4));
              MR_hl_field(0, Var_108, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_108, 3) = ((MR_Box) (CurZone_7));
              MR_hl_field(0, Var_108, 4) = ((MR_Box) (ZonesToDupVars_8));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_ucounter_0), Var_108, Cases0_57, &Cases_58, ((MR_Box) (STATE_VARIABLE_TraceCounter_0_101)), &conv12_STATE_VARIABLE_TraceCounter_102);
            *STATE_VARIABLE_TraceCounter_102 = ((MR_Word) (conv12_STATE_VARIABLE_TraceCounter_102));
            {
              GoalExpr_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_31, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_31, 1) = ((MR_Box) (Var_55));
              MR_hl_field(3, GoalExpr_31, 2) = (MR_Box) ((MR_Unsigned) (CanFail_56));
              MR_hl_field(3, GoalExpr_31, 3) = ((MR_Box) (Cases_58));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
            MR_Word SubGoal1_62;
            MR_Word STATE_VARIABLE_TraceCounter_111_111;
            MR_Word SubGoal0_126 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))));
            MR_Word SubGoal_127;
            MR_Unsigned Var_158;

            hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, SubGoal0_126, &SubGoal1_62, STATE_VARIABLE_TraceCounter_0_101, &STATE_VARIABLE_TraceCounter_111_111);
            succeeded = ((((MR_tag((MR_Word) Reason_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_61, (MR_Integer) 0)))) == (MR_Integer) 7)));
            if (succeeded)
            {
              Var_158 = (MR_Unsigned) 0U;
              succeeded = (CurZone_7 == Var_158);
            }
            if (succeeded)
            {
              MR_Unsigned NewZone_68;
              MR_Word DupVars_69;
              MR_Box conv6_DupVars_69;

              mercury__counter__uallocate_3_p_0(&NewZone_68, STATE_VARIABLE_TraceCounter_111_111, STATE_VARIABLE_TraceCounter_102);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__pre_quantification_scalar_common_1[2]), ZonesToDupVars_8, ((MR_Box) (NewZone_68)), &conv6_DupVars_69);
              if (succeeded)
              {
                DupVars_69 = ((MR_Word) (conv6_DupVars_69));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word SortedDupVars_70;
                MR_Word QuantReason_71;
                MR_Word QuantExpr_72;
                MR_Word SubGoalInfo1_74;

                mercury__list__sort_2_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), DupVars_69, &SortedDupVars_70);
                {
                  QuantReason_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, QuantReason_71, 0) = ((MR_Box) (SortedDupVars_70));
                  MR_hl_field(0, QuantReason_71, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                }
                {
                  QuantExpr_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, QuantExpr_72, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, QuantExpr_72, 1) = ((MR_Box) (QuantReason_71));
                  MR_hl_field(3, QuantExpr_72, 2) = ((MR_Box) (SubGoal1_62));
                }
                SubGoalInfo1_74 = ((MR_Word) ((MR_hl_field(0, SubGoal1_62, (MR_Integer) 1))));
                {
                  SubGoal_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SubGoal_127, 0) = ((MR_Box) (QuantExpr_72));
                  MR_hl_field(0, SubGoal_127, 1) = ((MR_Box) (SubGoalInfo1_74));
                }
              }
              else
                SubGoal_127 = SubGoal1_62;
            }
            else
            {
              SubGoal_127 = SubGoal1_62;
              *STATE_VARIABLE_TraceCounter_102 = STATE_VARIABLE_TraceCounter_111_111;
            }
            {
              GoalExpr_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_31, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_31, 1) = ((MR_Box) (Reason_61));
              MR_hl_field(3, GoalExpr_31, 2) = ((MR_Box) (SubGoal_127));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
            MR_Word Cond0_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))));
            MR_Word Then0_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 3))));
            MR_Word Else0_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 4))));
            MR_Word Cond_79;
            MR_Word Then_80;
            MR_Word Else_81;
            MR_Word STATE_VARIABLE_TraceCounter_114_114;
            MR_Word STATE_VARIABLE_TraceCounter_115_115;

            hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, Cond0_76, &Cond_79, STATE_VARIABLE_TraceCounter_0_101, &STATE_VARIABLE_TraceCounter_114_114);
            hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, Then0_77, &Then_80, STATE_VARIABLE_TraceCounter_114_114, &STATE_VARIABLE_TraceCounter_115_115);
            hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, Else0_78, &Else_81, STATE_VARIABLE_TraceCounter_115_115, STATE_VARIABLE_TraceCounter_102);
            {
              GoalExpr_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_31, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_31, 1) = ((MR_Box) (Vars_75));
              MR_hl_field(3, GoalExpr_31, 2) = ((MR_Box) (Cond_79));
              MR_hl_field(3, GoalExpr_31, 3) = ((MR_Box) (Then_80));
              MR_hl_field(3, GoalExpr_31, 4) = ((MR_Box) (Else_81));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
            MR_Word ShortHand_87;

            switch (MR_tag((MR_Word) ShortHand0_82)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SubGoalA0_83 = ((MR_Word) ((MR_hl_field(0, ShortHand0_82, (MR_Integer) 0))));
                  MR_Word SubGoalB0_84 = ((MR_Word) ((MR_hl_field(0, ShortHand0_82, (MR_Integer) 1))));
                  MR_Word SubGoalA_85;
                  MR_Word SubGoalB_86;
                  MR_Word STATE_VARIABLE_TraceCounter_117_117;

                  hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, SubGoalA0_83, &SubGoalA_85, STATE_VARIABLE_TraceCounter_0_101, &STATE_VARIABLE_TraceCounter_117_117);
                  hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, SubGoalB0_84, &SubGoalB_86, STATE_VARIABLE_TraceCounter_117_117, STATE_VARIABLE_TraceCounter_102);
                  {
                    ShortHand_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ShortHand_87, 0) = ((MR_Box) (SubGoalA_85));
                    MR_hl_field(0, ShortHand_87, 1) = ((MR_Box) (SubGoalB_86));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_88 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_82, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word OuterVars_89 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, (MR_Integer) 1))));
                  MR_Word InnerVars_90 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_91 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, (MR_Integer) 3))));
                  MR_Word MainGoal0_92 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_93 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, (MR_Integer) 5))));
                  MR_Word OrElseInners_94 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, (MR_Integer) 6))));
                  MR_Word MainGoal_95;
                  MR_Word OrElseGoals_96;
                  MR_Word STATE_VARIABLE_TraceCounter_119_119;
                  MR_Word Var_120;
                  MR_Box conv9_STATE_VARIABLE_TraceCounter_102;

                  hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, MainGoal0_92, &MainGoal_95, STATE_VARIABLE_TraceCounter_0_101, &STATE_VARIABLE_TraceCounter_119_119);
                  {
                    Var_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_120, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[2]));
                    MR_hl_field(0, Var_120, 1) = ((MR_Box) (hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_3));
                    MR_hl_field(0, Var_120, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_120, 3) = ((MR_Box) (CurZone_7));
                    MR_hl_field(0, Var_120, 4) = ((MR_Box) (ZonesToDupVars_8));
                  }
                  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_ucounter_0), Var_120, OrElseGoals0_93, &OrElseGoals_96, ((MR_Box) (STATE_VARIABLE_TraceCounter_119_119)), &conv9_STATE_VARIABLE_TraceCounter_102);
                  *STATE_VARIABLE_TraceCounter_102 = ((MR_Word) (conv9_STATE_VARIABLE_TraceCounter_102));
                  {
                    ShortHand_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_87, 0) = (MR_Box) ((MR_Unsigned) (GoalType_88));
                    MR_hl_field(1, ShortHand_87, 1) = ((MR_Box) (OuterVars_89));
                    MR_hl_field(1, ShortHand_87, 2) = ((MR_Box) (InnerVars_90));
                    MR_hl_field(1, ShortHand_87, 3) = ((MR_Box) (MaybeOutputVars_91));
                    MR_hl_field(1, ShortHand_87, 4) = ((MR_Box) (MainGoal_95));
                    MR_hl_field(1, ShortHand_87, 5) = ((MR_Box) (OrElseGoals_96));
                    MR_hl_field(1, ShortHand_87, 6) = ((MR_Box) (OrElseInners_94));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIOStateVars_97 = ((MR_Word) ((MR_hl_field(2, ShortHand0_82, (MR_Integer) 0))));
                  MR_Word ResultVar_98 = ((MR_Word) ((MR_hl_field(2, ShortHand0_82, (MR_Integer) 1))));
                  MR_Word SubGoal0_128 = ((MR_Word) ((MR_hl_field(2, ShortHand0_82, (MR_Integer) 2))));
                  MR_Word SubGoal_129;

                  hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, SubGoal0_128, &SubGoal_129, STATE_VARIABLE_TraceCounter_0_101, STATE_VARIABLE_TraceCounter_102);
                  {
                    ShortHand_87 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_87, 0) = ((MR_Box) (MaybeIOStateVars_97));
                    MR_hl_field(2, ShortHand_87, 1) = ((MR_Box) (ResultVar_98));
                    MR_hl_field(2, ShortHand_87, 2) = ((MR_Box) (SubGoal_129));
                  }
                }
                break;
            }
            {
              GoalExpr_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_31, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_31, 1) = ((MR_Box) (ShortHand_87));
            }
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Goal_100 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_31));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_12));
  }
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv15_STATE_VARIABLE_TraceCounter_15;
  MR_Word conv14_STATE_VARIABLE_VarsToZones_17;

  hlds__pre_quantification__build_vars_to_zones_in_case_6_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_STATE_VARIABLE_TraceCounter_15, ((MR_Word) (wrapper_arg_4)), &conv14_STATE_VARIABLE_VarsToZones_17);
  *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_TraceCounter_15));
  *wrapper_arg_5 = ((MR_Box) (conv14_STATE_VARIABLE_VarsToZones_17));
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_TraceCounter_93;
  MR_Word conv10_STATE_VARIABLE_VarsToZones_95;

  hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_TraceCounter_93, ((MR_Word) (wrapper_arg_4)), &conv10_STATE_VARIABLE_VarsToZones_95);
  *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_TraceCounter_93));
  *wrapper_arg_5 = ((MR_Box) (conv10_STATE_VARIABLE_VarsToZones_95));
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_TraceCounter_93;
  MR_Word conv6_STATE_VARIABLE_VarsToZones_95;

  hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_TraceCounter_93, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_VarsToZones_95);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_TraceCounter_93));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_VarsToZones_95));
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_TraceCounter_93;
  MR_Word conv2_STATE_VARIABLE_VarsToZones_95;

  hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_TraceCounter_93, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_VarsToZones_95);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_TraceCounter_93));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_VarsToZones_95));
}

static MR_Box MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_2(
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
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_1(
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

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(
  MR_Unsigned CurZone_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_TraceCounter_0_92,
  MR_Word * STATE_VARIABLE_TraceCounter_93,
  MR_Word STATE_VARIABLE_VarsToZones_0_94,
  MR_Word * STATE_VARIABLE_VarsToZones_95)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_60 = (MR_Word) ((MR_Word) (GoalExpr_11));
          MR_Word next_value_of_Goal_8 = SubGoal_60;

          // direct tailcall eliminated
          ;
          Goal_8 = next_value_of_Goal_8;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSVar_38 = ((MR_Word) ((MR_hl_field(1, GoalExpr_11, (MR_Integer) 0))));
          MR_Word RHS_39 = ((MR_Word) ((MR_hl_field(1, GoalExpr_11, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_VarsToZones_106_106;

          hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, LHSVar_38, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_106_106);
          switch (MR_tag((MR_Word) RHS_39)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word RHSVar_43 = ((MR_Word) ((MR_hl_field(0, RHS_39, (MR_Integer) 0))));

                hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, RHSVar_43, STATE_VARIABLE_VarsToZones_106_106, STATE_VARIABLE_VarsToZones_95);
                *STATE_VARIABLE_TraceCounter_93 = STATE_VARIABLE_TraceCounter_0_92;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word RHSArgVars_46 = ((MR_Word) ((MR_hl_field(1, RHS_39, (MR_Integer) 2))));

                hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, RHSArgVars_46, STATE_VARIABLE_VarsToZones_106_106, STATE_VARIABLE_VarsToZones_95);
                *STATE_VARIABLE_TraceCounter_93 = STATE_VARIABLE_TraceCounter_0_92;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word LambdaVarsModes_51 = ((MR_Word) ((MR_hl_field(2, RHS_39, (MR_Integer) 3))));
                MR_Word LambdaGoal_52 = ((MR_Word) ((MR_hl_field(2, RHS_39, (MR_Integer) 5))));
                MR_Word LambdaVars_53;
                MR_Word STATE_VARIABLE_VarsToZones_109_109;
                MR_Word next_value_of_Goal_8;
                MR_Word next_value_of_STATE_VARIABLE_VarsToZones_0_94;

                mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), LambdaVarsModes_51, &LambdaVars_53);
                hlds__pre_quantification__record_vars_in_zone_4_p_0((MR_Unsigned) 0U, LambdaVars_53, STATE_VARIABLE_VarsToZones_106_106, &STATE_VARIABLE_VarsToZones_109_109);
                // direct tailcall eliminated
                ;
                next_value_of_Goal_8 = LambdaGoal_52;
                next_value_of_STATE_VARIABLE_VarsToZones_0_94 = STATE_VARIABLE_VarsToZones_109_109;
                CurZone_7 = (MR_Unsigned) 0U;
                Goal_8 = next_value_of_Goal_8;
                STATE_VARIABLE_VarsToZones_0_94 = next_value_of_STATE_VARIABLE_VarsToZones_0_94;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_15 = ((MR_Word) ((MR_hl_field(2, GoalExpr_11, (MR_Integer) 2))));

          hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, ArgVars_15, STATE_VARIABLE_VarsToZones_0_94, STATE_VARIABLE_VarsToZones_95);
          *STATE_VARIABLE_TraceCounter_93 = STATE_VARIABLE_TraceCounter_0_92;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_VarsToZones_97_97;
              MR_Word ArgVars_156 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));

              hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, ArgVars_156, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_97_97);
              switch (MR_tag((MR_Word) GenericCall_19)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ClosureVar_23 = ((MR_Word) ((MR_hl_field(0, GenericCall_19, (MR_Integer) 0))));

                    hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, ClosureVar_23, STATE_VARIABLE_VarsToZones_97_97, STATE_VARIABLE_VarsToZones_95);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeClassInfoVar_27 = ((MR_Word) ((MR_hl_field(1, GenericCall_19, (MR_Integer) 0))));

                    hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, TypeClassInfoVar_27, STATE_VARIABLE_VarsToZones_97_97, STATE_VARIABLE_VarsToZones_95);
                  }
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_VarsToZones_95 = STATE_VARIABLE_VarsToZones_97_97;
                  break;
                case (MR_Integer) 3:
                  *STATE_VARIABLE_VarsToZones_95 = STATE_VARIABLE_VarsToZones_97_97;
                  break;
              }
              *STATE_VARIABLE_TraceCounter_93 = STATE_VARIABLE_TraceCounter_0_92;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignArgs_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 4))));
              MR_Word ExtraArgs_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 5))));
              MR_Word Var_100;
              MR_Word STATE_VARIABLE_VarsToZones_101_101;
              MR_Word Var_103;

              Var_100 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_2[2]), ForeignArgs_34);
              hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, Var_100, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_101_101);
              Var_103 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_2[3]), ExtraArgs_35);
              hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, Var_103, STATE_VARIABLE_VarsToZones_101_101, STATE_VARIABLE_VarsToZones_95);
              *STATE_VARIABLE_TraceCounter_93 = STATE_VARIABLE_TraceCounter_0_92;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoals_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
              MR_Word Var_112;
              MR_Box conv5_STATE_VARIABLE_TraceCounter_93;
              MR_Box conv4_STATE_VARIABLE_VarsToZones_95;

              {
                Var_112 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_112, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[0]));
                MR_hl_field(0, Var_112, 1) = ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_3));
                MR_hl_field(0, Var_112, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_112, 3) = ((MR_Box) (CurZone_7));
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_ucounter_0), (MR_Word) (&hlds__pre_quantification_scalar_common_2[1]), Var_112, SubGoals_56, ((MR_Box) (STATE_VARIABLE_TraceCounter_0_92)), &conv5_STATE_VARIABLE_TraceCounter_93, ((MR_Box) (STATE_VARIABLE_VarsToZones_0_94)), &conv4_STATE_VARIABLE_VarsToZones_95);
              *STATE_VARIABLE_TraceCounter_93 = ((MR_Word) (conv5_STATE_VARIABLE_TraceCounter_93));
              *STATE_VARIABLE_VarsToZones_95 = ((MR_Word) (conv4_STATE_VARIABLE_VarsToZones_95));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoals_209 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));
              MR_Word Var_210;
              MR_Box conv9_STATE_VARIABLE_TraceCounter_93;
              MR_Box conv8_STATE_VARIABLE_VarsToZones_95;

              {
                Var_210 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_210, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[0]));
                MR_hl_field(0, Var_210, 1) = ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_4));
                MR_hl_field(0, Var_210, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_210, 3) = ((MR_Box) (CurZone_7));
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_ucounter_0), (MR_Word) (&hlds__pre_quantification_scalar_common_2[1]), Var_210, SubGoals_209, ((MR_Box) (STATE_VARIABLE_TraceCounter_0_92)), &conv9_STATE_VARIABLE_TraceCounter_93, ((MR_Box) (STATE_VARIABLE_VarsToZones_0_94)), &conv8_STATE_VARIABLE_VarsToZones_95);
              *STATE_VARIABLE_TraceCounter_93 = ((MR_Word) (conv9_STATE_VARIABLE_TraceCounter_93));
              *STATE_VARIABLE_VarsToZones_95 = ((MR_Word) (conv8_STATE_VARIABLE_VarsToZones_95));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));
              MR_Word Cases_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_VarsToZones_115_115;
              MR_Word Var_116;
              MR_Box conv17_STATE_VARIABLE_TraceCounter_93;
              MR_Box conv16_STATE_VARIABLE_VarsToZones_95;

              hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, Var_57, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_115_115);
              {
                Var_116 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_116, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[1]));
                MR_hl_field(0, Var_116, 1) = ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_6));
                MR_hl_field(0, Var_116, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_116, 3) = ((MR_Box) (CurZone_7));
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_ucounter_0), (MR_Word) (&hlds__pre_quantification_scalar_common_2[1]), Var_116, Cases_59, ((MR_Box) (STATE_VARIABLE_TraceCounter_0_92)), &conv17_STATE_VARIABLE_TraceCounter_93, ((MR_Box) (STATE_VARIABLE_VarsToZones_115_115)), &conv16_STATE_VARIABLE_VarsToZones_95);
              *STATE_VARIABLE_TraceCounter_93 = ((MR_Word) (conv17_STATE_VARIABLE_TraceCounter_93));
              *STATE_VARIABLE_VarsToZones_95 = ((MR_Word) (conv16_STATE_VARIABLE_VarsToZones_95));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));
              MR_Word SubGoal_169 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
              MR_Unsigned Var_214;

              succeeded = ((((MR_tag((MR_Word) Reason_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_61, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                Var_214 = (MR_Unsigned) 0U;
                succeeded = (CurZone_7 == Var_214);
              }
              if (succeeded)
              {
                MR_Unsigned NewZone_67;
                MR_Word STATE_VARIABLE_TraceCounter_121_121;
                MR_Unsigned next_value_of_CurZone_7;
                MR_Word next_value_of_Goal_8;
                MR_Word next_value_of_STATE_VARIABLE_TraceCounter_0_92;

                mercury__counter__uallocate_3_p_0(&NewZone_67, STATE_VARIABLE_TraceCounter_0_92, &STATE_VARIABLE_TraceCounter_121_121);
                // direct tailcall eliminated
                ;
                next_value_of_CurZone_7 = NewZone_67;
                next_value_of_Goal_8 = SubGoal_169;
                next_value_of_STATE_VARIABLE_TraceCounter_0_92 = STATE_VARIABLE_TraceCounter_121_121;
                CurZone_7 = next_value_of_CurZone_7;
                Goal_8 = next_value_of_Goal_8;
                STATE_VARIABLE_TraceCounter_0_92 = next_value_of_STATE_VARIABLE_TraceCounter_0_92;
                continue;
              }
              else
              {
                MR_Word next_value_of_Goal_8 = SubGoal_169;

                // direct tailcall eliminated
                ;
                Goal_8 = next_value_of_Goal_8;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));
              MR_Word Cond_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
              MR_Word Then_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 3))));
              MR_Word Else_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_VarsToZones_126_126;
              MR_Word STATE_VARIABLE_TraceCounter_127_127;
              MR_Word STATE_VARIABLE_VarsToZones_128_128;
              MR_Word STATE_VARIABLE_TraceCounter_129_129;
              MR_Word STATE_VARIABLE_VarsToZones_130_130;
              MR_Word next_value_of_Goal_8;
              MR_Word next_value_of_STATE_VARIABLE_TraceCounter_0_92;
              MR_Word next_value_of_STATE_VARIABLE_VarsToZones_0_94;

              hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, Vars_68, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_126_126);
              hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(CurZone_7, Cond_69, STATE_VARIABLE_TraceCounter_0_92, &STATE_VARIABLE_TraceCounter_127_127, STATE_VARIABLE_VarsToZones_126_126, &STATE_VARIABLE_VarsToZones_128_128);
              hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(CurZone_7, Then_70, STATE_VARIABLE_TraceCounter_127_127, &STATE_VARIABLE_TraceCounter_129_129, STATE_VARIABLE_VarsToZones_128_128, &STATE_VARIABLE_VarsToZones_130_130);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_8 = Else_71;
              next_value_of_STATE_VARIABLE_TraceCounter_0_92 = STATE_VARIABLE_TraceCounter_129_129;
              next_value_of_STATE_VARIABLE_VarsToZones_0_94 = STATE_VARIABLE_VarsToZones_130_130;
              Goal_8 = next_value_of_Goal_8;
              STATE_VARIABLE_TraceCounter_0_92 = next_value_of_STATE_VARIABLE_TraceCounter_0_92;
              STATE_VARIABLE_VarsToZones_0_94 = next_value_of_STATE_VARIABLE_VarsToZones_0_94;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_72)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SubGoalA_73 = ((MR_Word) ((MR_hl_field(0, ShortHand_72, (MR_Integer) 0))));
                    MR_Word SubGoalB_74 = ((MR_Word) ((MR_hl_field(0, ShortHand_72, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_TraceCounter_133_133;
                    MR_Word STATE_VARIABLE_VarsToZones_134_134;
                    MR_Word next_value_of_Goal_8;
                    MR_Word next_value_of_STATE_VARIABLE_TraceCounter_0_92;
                    MR_Word next_value_of_STATE_VARIABLE_VarsToZones_0_94;

                    hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(CurZone_7, SubGoalA_73, STATE_VARIABLE_TraceCounter_0_92, &STATE_VARIABLE_TraceCounter_133_133, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_134_134);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_8 = SubGoalB_74;
                    next_value_of_STATE_VARIABLE_TraceCounter_0_92 = STATE_VARIABLE_TraceCounter_133_133;
                    next_value_of_STATE_VARIABLE_VarsToZones_0_94 = STATE_VARIABLE_VarsToZones_134_134;
                    Goal_8 = next_value_of_Goal_8;
                    STATE_VARIABLE_TraceCounter_0_92 = next_value_of_STATE_VARIABLE_TraceCounter_0_92;
                    STATE_VARIABLE_VarsToZones_0_94 = next_value_of_STATE_VARIABLE_VarsToZones_0_94;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word OuterVars_76 = ((MR_Word) ((MR_hl_field(1, ShortHand_72, (MR_Integer) 1))));
                    MR_Word InnerVars_77 = ((MR_Word) ((MR_hl_field(1, ShortHand_72, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_78 = ((MR_Word) ((MR_hl_field(1, ShortHand_72, (MR_Integer) 3))));
                    MR_Word MainGoal_79 = ((MR_Word) ((MR_hl_field(1, ShortHand_72, (MR_Integer) 4))));
                    MR_Word OrElseGoals_80 = ((MR_Word) ((MR_hl_field(1, ShortHand_72, (MR_Integer) 5))));
                    MR_Word OVB_83 = ((MR_Word) ((MR_hl_field(0, OuterVars_76, (MR_Integer) 1))));
                    MR_Word IVA_84 = ((MR_Word) ((MR_hl_field(0, InnerVars_77, (MR_Integer) 0))));
                    MR_Word IVB_85 = ((MR_Word) ((MR_hl_field(0, InnerVars_77, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_VarsToZones_138_138;
                    MR_Word Var_140;
                    MR_Word Var_141;
                    MR_Word STATE_VARIABLE_VarsToZones_143_143;
                    MR_Word STATE_VARIABLE_TraceCounter_144_144;
                    MR_Word STATE_VARIABLE_VarsToZones_145_145;
                    MR_Word Var_146;
                    MR_Word Var_219 = ((MR_Word) ((MR_hl_field(0, OuterVars_76, (MR_Integer) 0))));
                    MR_Word Vars_220;
                    MR_Word STATE_VARIABLE_VarsToZones_15_223;
                    MR_Word Var_228;
                    MR_Word Vars_229;
                    MR_Word STATE_VARIABLE_VarsToZones_15_232;
                    MR_Word Var_237;
                    MR_Word Vars_238;
                    MR_Word STATE_VARIABLE_VarsToZones_15_241;
                    MR_Word Var_246;
                    MR_Box conv13_STATE_VARIABLE_TraceCounter_93;
                    MR_Box conv12_STATE_VARIABLE_VarsToZones_95;

                    {
                      Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_141, 0) = ((MR_Box) (IVB_85));
                      MR_hl_field(1, Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_140, 0) = ((MR_Box) (IVA_84));
                      MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_141));
                    }
                    {
                      Vars_220 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Vars_220, 0) = ((MR_Box) (OVB_83));
                      MR_hl_field(1, Vars_220, 1) = ((MR_Box) (Var_140));
                    }
                    hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, Var_219, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_15_223);
                    Var_228 = ((MR_Word) ((MR_hl_field(1, Vars_220, (MR_Integer) 0))));
                    Vars_229 = ((MR_Word) ((MR_hl_field(1, Vars_220, (MR_Integer) 1))));
                    hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, Var_228, STATE_VARIABLE_VarsToZones_15_223, &STATE_VARIABLE_VarsToZones_15_232);
                    Var_237 = ((MR_Word) ((MR_hl_field(1, Vars_229, (MR_Integer) 0))));
                    Vars_238 = ((MR_Word) ((MR_hl_field(1, Vars_229, (MR_Integer) 1))));
                    hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, Var_237, STATE_VARIABLE_VarsToZones_15_232, &STATE_VARIABLE_VarsToZones_15_241);
                    Var_246 = ((MR_Word) ((MR_hl_field(1, Vars_238, (MR_Integer) 0))));
                    hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, Var_246, STATE_VARIABLE_VarsToZones_15_241, &STATE_VARIABLE_VarsToZones_138_138);
                    if ((MaybeOutputVars_78 == (MR_Word) ((MR_Unsigned) 0U)))
                      STATE_VARIABLE_VarsToZones_143_143 = STATE_VARIABLE_VarsToZones_138_138;
                    else
                    {
                      MR_Word OutputVars_86 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_78, (MR_Integer) 0))));

                      hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, OutputVars_86, STATE_VARIABLE_VarsToZones_138_138, &STATE_VARIABLE_VarsToZones_143_143);
                    }
                    hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(CurZone_7, MainGoal_79, STATE_VARIABLE_TraceCounter_0_92, &STATE_VARIABLE_TraceCounter_144_144, STATE_VARIABLE_VarsToZones_143_143, &STATE_VARIABLE_VarsToZones_145_145);
                    {
                      Var_146 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_146, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[0]));
                      MR_hl_field(0, Var_146, 1) = ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_5));
                      MR_hl_field(0, Var_146, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(0, Var_146, 3) = ((MR_Box) (CurZone_7));
                    }
                    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_ucounter_0), (MR_Word) (&hlds__pre_quantification_scalar_common_2[1]), Var_146, OrElseGoals_80, ((MR_Box) (STATE_VARIABLE_TraceCounter_144_144)), &conv13_STATE_VARIABLE_TraceCounter_93, ((MR_Box) (STATE_VARIABLE_VarsToZones_145_145)), &conv12_STATE_VARIABLE_VarsToZones_95);
                    *STATE_VARIABLE_TraceCounter_93 = ((MR_Word) (conv13_STATE_VARIABLE_TraceCounter_93));
                    *STATE_VARIABLE_VarsToZones_95 = ((MR_Word) (conv12_STATE_VARIABLE_VarsToZones_95));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIOStateVars_87 = ((MR_Word) ((MR_hl_field(2, ShortHand_72, (MR_Integer) 0))));
                    MR_Word ResultVar_88 = ((MR_Word) ((MR_hl_field(2, ShortHand_72, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_VarsToZones_150_150;
                    MR_Word STATE_VARIABLE_VarsToZones_153_153;
                    MR_Word SubGoal_170 = ((MR_Word) ((MR_hl_field(2, ShortHand_72, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_8;
                    MR_Word next_value_of_STATE_VARIABLE_VarsToZones_0_94;

                    if ((MaybeIOStateVars_87 == (MR_Word) ((MR_Unsigned) 0U)))
                      STATE_VARIABLE_VarsToZones_150_150 = STATE_VARIABLE_VarsToZones_0_94;
                    else
                    {
                      MR_Word IOStateVars_89 = ((MR_Word) ((MR_hl_field(1, MaybeIOStateVars_87, (MR_Integer) 0))));
                      MR_Word ISVB_91 = ((MR_Word) ((MR_hl_field(0, IOStateVars_89, (MR_Integer) 1))));
                      MR_Word Var_264 = ((MR_Word) ((MR_hl_field(0, IOStateVars_89, (MR_Integer) 0))));
                      MR_Word Vars_265;
                      MR_Word STATE_VARIABLE_VarsToZones_15_268;

                      {
                        Vars_265 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Vars_265, 0) = ((MR_Box) (ISVB_91));
                        MR_hl_field(1, Vars_265, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, Var_264, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_15_268);
                      hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, Vars_265, STATE_VARIABLE_VarsToZones_15_268, &STATE_VARIABLE_VarsToZones_150_150);
                    }
                    hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, ResultVar_88, STATE_VARIABLE_VarsToZones_150_150, &STATE_VARIABLE_VarsToZones_153_153);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_8 = SubGoal_170;
                    next_value_of_STATE_VARIABLE_VarsToZones_0_94 = STATE_VARIABLE_VarsToZones_153_153;
                    Goal_8 = next_value_of_Goal_8;
                    STATE_VARIABLE_VarsToZones_0_94 = next_value_of_STATE_VARIABLE_VarsToZones_0_94;
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
hlds__pre_quantification__record_vars_in_zone_4_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarsToZones_0_3,
  MR_Word * STATE_VARIABLE_VarsToZones_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarsToZones_4 = STATE_VARIABLE_VarsToZones_0_3;
    else
    {
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarsToZones_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_VarsToZones_0_3;

      hlds__pre_quantification__record_var_in_zone_4_p_0(HeadVar__1_1, Var_10, STATE_VARIABLE_VarsToZones_0_3, &STATE_VARIABLE_VarsToZones_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_11;
      next_value_of_STATE_VARIABLE_VarsToZones_0_3 = STATE_VARIABLE_VarsToZones_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_VarsToZones_0_3 = next_value_of_STATE_VARIABLE_VarsToZones_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__pre_quantification__record_var_in_zone_4_p_0(
  MR_Unsigned Zone_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_VarsToZones_0_11,
  MR_Word * STATE_VARIABLE_VarsToZones_12)
{
  MR_bool succeeded;
  MR_Word Zones0_8;
  MR_Box conv0_Zones0_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_1[1]), STATE_VARIABLE_VarsToZones_0_11, ((MR_Box) (Var_6)), &conv0_Zones0_8);
  if (succeeded)
  {
    Zones0_8 = ((MR_Word) (conv0_Zones0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Zones1_9;

    succeeded = mercury__sparse_bitset__insert_new_3_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[3]), ((MR_Box) (Zone_5)), Zones0_8, &Zones1_9);
    if (succeeded)
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_1[1]), ((MR_Box) (Var_6)), ((MR_Box) (Zones1_9)), STATE_VARIABLE_VarsToZones_0_11, STATE_VARIABLE_VarsToZones_12);
    else
      *STATE_VARIABLE_VarsToZones_12 = STATE_VARIABLE_VarsToZones_0_11;
  }
  else
  {
    MR_Word Zones_10;

    Zones_10 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_117_105_110_116_93_95_48_95_49_1_f_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[3]), Zone_5);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_1[1]), ((MR_Box) (Var_6)), ((MR_Box) (Zones_10)), STATE_VARIABLE_VarsToZones_0_11, STATE_VARIABLE_VarsToZones_12);
  }
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____vars_to_zones_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pre_quantification____Unify____vars_to_zones_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pre_quantification____Compare____vars_to_zones_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pre_quantification____Compare____vars_to_zones_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zone_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pre_quantification____Unify____zone_0_0(((MR_Unsigned) (wrapper_arg_1)), ((MR_Unsigned) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pre_quantification____Compare____zone_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pre_quantification____Compare____zone_0_0(&conv0_HeadVar__1_1, ((MR_Unsigned) (wrapper_arg_2)), ((MR_Unsigned) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zones_to_dup_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pre_quantification____Unify____zones_to_dup_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pre_quantification____Compare____zones_to_dup_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pre_quantification____Compare____zones_to_dup_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__pre_quantification__init(void)
{
}

void mercury__hlds__pre_quantification__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__pre_quantification__hlds__pre_quantification__type_ctor_info_vars_to_zones_0);
	MR_register_type_ctor_info(&hlds__pre_quantification__hlds__pre_quantification__type_ctor_info_zone_0);
	MR_register_type_ctor_info(&hlds__pre_quantification__hlds__pre_quantification__type_ctor_info_zones_to_dup_vars_0);
}

void mercury__hlds__pre_quantification__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__pre_quantification__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.pre_quantification.
