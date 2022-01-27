/*
** Automatically generated from `hlds_inst_mode.m'
** by the Mercury compiler,
** version DEV
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


// :- module hlds.hlds_inst_mode.
// :- implementation.

/*
INIT mercury__hlds__hlds_inst_mode__init
ENDINIT
*/

#include "hlds.hlds_inst_mode.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.status.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"




static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_unify_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_inst_mode__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_unify_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_any_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_ground_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_inst_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_inst_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_inst_mode__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_hlds_inst_defn_0_0[6];

static const MR_ConstString hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_names_hlds_inst_defn_0_0[6];

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_hlds_inst_defn_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_hlds_inst_defn_0_0[1];

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_hlds_inst_defn_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_hlds_inst_defn_0[1];

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_hlds_inst_defn_0[1];

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_hlds_mode_body_0[1];

static const MR_NotagFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__notag_functor_desc_hlds_mode_body_0;

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_hlds_mode_defn_0_0[5];

static const MR_ConstString hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_names_hlds_mode_defn_0_0[5];

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_hlds_mode_defn_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_hlds_mode_defn_0_0[1];

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_hlds_mode_defn_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_hlds_mode_defn_0[1];

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_hlds_mode_defn_0[1];

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_0;

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_inst_for_type_ctor_0_1[1];

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_1;

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_2;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_inst_mode__list__ti_list_1parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_inst_for_type_ctor_0_3[1];

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_3;

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_4;

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_inst_for_type_ctor_0_0[3];

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_inst_for_type_ctor_0_1[1];

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_inst_for_type_ctor_0_2[1];

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_inst_for_type_ctor_0[3];

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_inst_for_type_ctor_0[5];

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_inst_for_type_ctor_0[5];

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_inst_pair_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_pair_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_inst_pair_0_0[1];

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_inst_pair_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_inst_pair_0[1];

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_inst_pair_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_merge_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0;

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_inst_table_0_0[7];

static const MR_ConstString hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_names_inst_table_0_0[7];

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_table_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_inst_table_0_0[1];

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_inst_table_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_inst_table_0[1];

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_inst_table_0[1];

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_0_0;

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_maybe_inst_0_1[1];

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_0_1;

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_maybe_inst_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_maybe_inst_0_1[1];

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_maybe_inst_0[2];

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_maybe_inst_0[2];

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_maybe_inst_0[2];

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_det_0_0;

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_maybe_inst_det_0_1[2];

static const MR_DuArgLocn hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_locns_maybe_inst_det_0_1[2];

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_det_0_1;

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_maybe_inst_det_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_maybe_inst_det_0_1[1];

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_maybe_inst_det_0[2];

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_maybe_inst_det_0[2];

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_maybe_inst_det_0[2];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_ctor_0hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__tree234__ti_tree234_2hlds__hlds_inst_mode__type_ctor_info_inst_pair_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_unify_inst_table_0_0[4];

static const MR_ConstString hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_names_unify_inst_table_0_0[4];

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_unify_inst_table_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_unify_inst_table_0_0[1];

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_unify_inst_table_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_unify_inst_table_0[1];

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_unify_inst_table_0[1];

static MR_bool MR_CALL 
hlds__hlds_inst_mode__IntroducedFrom__pred__unify_insts_from_sorted_pairs__466__1_2_p_0(
  MR_Word AssocList4_11,
  MR_Word HeadVar__2_32);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____inst_pair_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____inst_pair_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__hlds_inst_mode__unify_insts_from_sorted_pairs_2_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__hlds_inst_mode__unify_inst_subtable_from_sorted_pairs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevSubTablePairs_0_5,
  MR_Word * STATE_VARIABLE_RevSubTablePairs_6);

static void MR_CALL 
hlds__hlds_inst_mode__accumulate_unify_insts_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevAssocList_0_4,
  MR_Word * STATE_VARIABLE_RevAssocList_5);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____any_inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____any_inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____ground_inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____ground_inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____hlds_inst_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____hlds_inst_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____hlds_mode_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____hlds_mode_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____hlds_mode_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____hlds_mode_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____inst_for_type_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____inst_for_type_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____inst_pair_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____inst_pair_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____maybe_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____maybe_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____maybe_inst_det_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____maybe_inst_det_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____merge_inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____merge_inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____mode_defns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____mode_defns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____mode_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____mode_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____mostly_uniq_inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____mostly_uniq_inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____shared_inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____shared_inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____unify_inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____unify_inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____user_inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_inst_mode____Compare____user_inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_inst_mode_scalar_common_1[8][3];

static /* final */ const MR_Box hlds__hlds_inst_mode_scalar_common_2[5][2];

static /* final */ const MR_Box hlds__hlds_inst_mode_scalar_common_3[1][5];




static /* final */ const MR_Box hlds__hlds_inst_mode_scalar_common_1[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
};

static /* final */ const MR_Box hlds__hlds_inst_mode_scalar_common_2[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_inst_mode_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_inst_mode_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box hlds__hlds_inst_mode_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_inst_mode__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_unify_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_unify_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
};






static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_unify_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0),
    (MR_TypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_inst_mode__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_unify_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_unify_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_any_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0),
    (MR_TypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_any_inst_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____any_inst_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____any_inst_table_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "any_inst_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_any_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_ground_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0),
    (MR_TypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_ground_inst_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____ground_inst_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____ground_inst_table_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "ground_inst_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_ground_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_inst_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_inst_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_inst_mode__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_inst_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_hlds_inst_defn_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_for_type_ctor_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_inst_status_0)
};

static const MR_ConstString hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_names_hlds_inst_defn_0_0[6] = {
  (MR_String) "inst_varset",
  (MR_String) "inst_params",
  (MR_String) "inst_body",
  (MR_String) "inst_for_type",
  (MR_String) "inst_context",
  (MR_String) "inst_status"
};

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_hlds_inst_defn_0_0 = {
  (MR_String) "hlds_inst_defn",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_hlds_inst_defn_0_0,
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_names_hlds_inst_defn_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_hlds_inst_defn_0_0[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_hlds_inst_defn_0_0
};

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_hlds_inst_defn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_hlds_inst_defn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_hlds_inst_defn_0[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_hlds_inst_defn_0_0
};

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_hlds_inst_defn_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____hlds_inst_defn_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____hlds_inst_defn_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "hlds_inst_defn",
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_hlds_inst_defn_0 },
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_hlds_inst_defn_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_hlds_inst_defn_0,

};

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_hlds_mode_body_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__notag_functor_desc_hlds_mode_body_0 = {
  (MR_String) "hlds_mode_body",
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_body_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____hlds_mode_body_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____hlds_mode_body_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "hlds_mode_body",
  {     &hlds__hlds_inst_mode__hlds__hlds_inst_mode__notag_functor_desc_hlds_mode_body_0 },
  {     &hlds__hlds_inst_mode__hlds__hlds_inst_mode__notag_functor_desc_hlds_mode_body_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_hlds_mode_body_0,

};

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_hlds_mode_defn_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_body_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_mode_status_0)
};

static const MR_ConstString hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_names_hlds_mode_defn_0_0[5] = {
  (MR_String) "mode_varset",
  (MR_String) "mode_params",
  (MR_String) "mody_body",
  (MR_String) "mode_context",
  (MR_String) "mode_status"
};

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_hlds_mode_defn_0_0 = {
  (MR_String) "hlds_mode_defn",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_hlds_mode_defn_0_0,
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_names_hlds_mode_defn_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_hlds_mode_defn_0_0[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_hlds_mode_defn_0_0
};

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_hlds_mode_defn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_hlds_mode_defn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_hlds_mode_defn_0[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_hlds_mode_defn_0_0
};

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_hlds_mode_defn_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____hlds_mode_defn_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____hlds_mode_defn_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "hlds_mode_defn",
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_hlds_mode_defn_0 },
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_hlds_mode_defn_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_hlds_mode_defn_0,

};

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_0 = {
  (MR_String) "iftc_not_applicable",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_inst_for_type_ctor_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_1 = {
  (MR_String) "iftc_applicable_declared",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_inst_for_type_ctor_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_2 = {
  (MR_String) "iftc_applicable_not_known",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_inst_mode__list__ti_list_1parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_inst_for_type_ctor_0_3[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__list__ti_list_1parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_3 = {
  (MR_String) "iftc_applicable_known",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_inst_for_type_ctor_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_4 = {
  (MR_String) "iftc_applicable_error",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_inst_for_type_ctor_0_0[3] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_0,
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_2,
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_4
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_inst_for_type_ctor_0_1[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_1
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_inst_for_type_ctor_0_2[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_3
};

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_inst_for_type_ctor_0[3] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_inst_for_type_ctor_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_inst_for_type_ctor_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_inst_for_type_ctor_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_inst_for_type_ctor_0[5] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_1,
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_4,
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_3,
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_2,
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_for_type_ctor_0_0
};

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_inst_for_type_ctor_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_for_type_ctor_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____inst_for_type_ctor_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____inst_for_type_ctor_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "inst_for_type_ctor",
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_inst_for_type_ctor_0 },
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_inst_for_type_ctor_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_inst_for_type_ctor_0,

};

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_inst_pair_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_pair_0_0 = {
  (MR_String) "inst_pair",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_inst_pair_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_inst_pair_0_0[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_pair_0_0
};

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_inst_pair_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_inst_pair_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_inst_pair_0[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_pair_0_0
};

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_inst_pair_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____inst_pair_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____inst_pair_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "inst_pair",
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_inst_pair_0 },
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_inst_pair_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_inst_pair_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_merge_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0),
    (MR_TypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0),
    (MR_TypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_inst_table_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_unify_inst_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_merge_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_ground_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_any_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)
};

static const MR_ConstString hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_names_inst_table_0_0[7] = {
  (MR_String) "inst_table_user",
  (MR_String) "inst_table_unify",
  (MR_String) "inst_table_merge",
  (MR_String) "inst_table_ground",
  (MR_String) "inst_table_any",
  (MR_String) "inst_table_shared",
  (MR_String) "inst_table_mostly_uniq"
};

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_table_0_0 = {
  (MR_String) "inst_table",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_inst_table_0_0,
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_names_inst_table_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_inst_table_0_0[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_table_0_0
};

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_inst_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_inst_table_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_inst_table_0[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_inst_table_0_0
};

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_inst_table_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____inst_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____inst_table_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "inst_table",
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_inst_table_0 },
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_inst_table_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_inst_table_0,

};

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_0_0 = {
  (MR_String) "inst_unknown",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_maybe_inst_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_0_1 = {
  (MR_String) "inst_known",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_maybe_inst_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_maybe_inst_0_0[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_maybe_inst_0_1[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_0_1
};

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_maybe_inst_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_maybe_inst_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_maybe_inst_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_maybe_inst_0[2] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_0_1,
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_0_0
};

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_maybe_inst_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____maybe_inst_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____maybe_inst_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "maybe_inst",
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_maybe_inst_0 },
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_maybe_inst_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_maybe_inst_0,

};

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_det_0_0 = {
  (MR_String) "inst_det_unknown",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_maybe_inst_det_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)
};

static const MR_DuArgLocn hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_locns_maybe_inst_det_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_det_0_1 = {
  (MR_String) "inst_det_known",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_maybe_inst_det_0_1,
  NULL,
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_locns_maybe_inst_det_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_maybe_inst_det_0_0[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_det_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_maybe_inst_det_0_1[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_det_0_1
};

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_maybe_inst_det_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_maybe_inst_det_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_maybe_inst_det_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_maybe_inst_det_0[2] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_det_0_1,
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_maybe_inst_det_0_0
};

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_maybe_inst_det_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____maybe_inst_det_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____maybe_inst_det_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "maybe_inst_det",
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_maybe_inst_det_0 },
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_maybe_inst_det_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_maybe_inst_det_0,

};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_merge_inst_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____merge_inst_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____merge_inst_table_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "merge_inst_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_merge_inst_info_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_ctor_0hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_mode_defns_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____mode_defns_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____mode_defns_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "mode_defns",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_ctor_0hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_mode_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____mode_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____mode_table_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "mode_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_ctor_0hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_mostly_uniq_inst_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____mostly_uniq_inst_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____mostly_uniq_inst_table_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "mostly_uniq_inst_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_shared_inst_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____shared_inst_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____shared_inst_table_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "shared_inst_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_inst_mode__tree234__ti_tree234_2hlds__hlds_inst_mode__type_ctor_info_inst_pair_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0),
    (MR_TypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_unify_inst_table_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2hlds__hlds_inst_mode__type_ctor_info_inst_pair_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2hlds__hlds_inst_mode__type_ctor_info_inst_pair_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2hlds__hlds_inst_mode__type_ctor_info_inst_pair_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2hlds__hlds_inst_mode__type_ctor_info_inst_pair_0hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)
};

static const MR_ConstString hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_names_unify_inst_table_0_0[4] = {
  (MR_String) "uit_live_real",
  (MR_String) "uit_live_fake",
  (MR_String) "uit_dead_real",
  (MR_String) "uit_dead_fake"
};

static const MR_DuFunctorDesc hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_unify_inst_table_0_0 = {
  (MR_String) "unify_inst_table",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_types_unify_inst_table_0_0,
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__field_names_unify_inst_table_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_unify_inst_table_0_0[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_unify_inst_table_0_0
};

static const MR_DuPtagLayout hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_unify_inst_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_stag_ordered_unify_inst_table_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_unify_inst_table_0[1] = {
  &hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_functor_desc_unify_inst_table_0_0
};

static const MR_Integer hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_unify_inst_table_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_unify_inst_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____unify_inst_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____unify_inst_table_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "unify_inst_table",
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_name_ordered_unify_inst_table_0 },
  {     hlds__hlds_inst_mode__hlds__hlds_inst_mode__du_ptag_ordered_unify_inst_table_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_inst_mode__hlds__hlds_inst_mode__functor_number_map_unify_inst_table_0,

};

const MR_TypeCtorInfo_Struct hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_user_inst_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_inst_mode____Unify____user_inst_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_inst_mode____Compare____user_inst_table_0_0_10001)),
  (MR_String) "hlds.hlds_inst_mode",
  (MR_String) "user_inst_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
hlds__hlds_inst_mode__IntroducedFrom__pred__unify_insts_from_sorted_pairs__466__1_2_p_0(
  MR_Word AssocList4_11,
  MR_Word HeadVar__2_32)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_2[0]), ((MR_Box) (AssocList4_11)), ((MR_Box) (HeadVar__2_32)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____user_inst_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____user_inst_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____shared_inst_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____shared_inst_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____mostly_uniq_inst_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____mostly_uniq_inst_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____mode_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____mode_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____mode_defns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____mode_defns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____merge_inst_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____merge_inst_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____maybe_inst_det_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
        MR_Word SubResult1_10;

        parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult1_10, Var_18, ArgY1_9);
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
        {
          MR_Integer Var_19 = (MR_Integer) (Var_17);
          MR_Integer Var_20 = (MR_Integer) (ArgY2_12);

          succeeded = (Var_19 < Var_20);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_19 > Var_20);
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

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____maybe_inst_det_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = (ArgX2_7 == ArgY2_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____maybe_inst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, Var_11, ArgY1_7);
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____maybe_inst_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____inst_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        hlds__hlds_inst_mode____Compare____unify_inst_table_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[5]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____unify_inst_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[7]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[7]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____inst_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word TypeInfo_24_24;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = hlds__hlds_inst_mode____Unify____unify_inst_table_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_21_21 = (MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_23_23 = (MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_24_24 = (MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____unify_inst_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word TypeInfo_15_15;
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[7]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[7]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____inst_pair_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____inst_pair_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____hlds_mode_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_2[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          hlds__hlds_inst_mode____Compare____hlds_mode_body_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__term____Compare____context_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
              hlds__status____Compare____mode_status_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____hlds_mode_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&hlds__hlds_inst_mode_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = hlds__hlds_inst_mode____Unify____hlds_mode_body_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = mercury__term____Unify____context_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
              succeeded = hlds__status____Unify____mode_status_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____hlds_mode_body_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      parse_tree__prog_data____Compare____mer_mode_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____hlds_mode_body_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____hlds_inst_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_2[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          parse_tree__prog_data____Compare____inst_defn_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            hlds__hlds_inst_mode____Compare____inst_for_type_ctor_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__term____Compare____context_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
                hlds__status____Compare____inst_status_0_0(HeadVar__1_1, ArgX6_19, ArgY6_20);
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____inst_for_type_ctor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, Var_28, ArgY1_8);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Var_29)), ((MR_Box) (ArgY1_20)));
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____hlds_inst_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&hlds__hlds_inst_mode_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____inst_defn_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = hlds__hlds_inst_mode____Unify____inst_for_type_ctor_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = mercury__term____Unify____context_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
                succeeded = hlds__status____Unify____inst_status_0_0(ArgX6_13, ArgY6_14);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____inst_for_type_ctor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_12 == CastX_11);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_16_16;
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_16_16 = (MR_Word) (&hlds__hlds_inst_mode_scalar_common_2[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____ground_inst_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____ground_inst_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode____Compare____any_inst_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____any_inst_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode__mode_table_optimize_2_p_0(
  MR_Word STATE_VARIABLE_ModeDefns_0_4,
  MR_Word * STATE_VARIABLE_ModeDefns_5)
{
  mercury__map__optimize_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), STATE_VARIABLE_ModeDefns_0_4, STATE_VARIABLE_ModeDefns_5);
}

void MR_CALL 
hlds__hlds_inst_mode__mode_table_init_1_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0));
}

MR_bool MR_CALL 
hlds__hlds_inst_mode__mode_table_insert_4_p_0(
  MR_Word ModeId_5,
  MR_Word ModeDefn_6,
  MR_Word STATE_VARIABLE_ModeDefns_0_8,
  MR_Word * STATE_VARIABLE_ModeDefns_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ((MR_Box) (ModeId_5)), ((MR_Box) (ModeDefn_6)), STATE_VARIABLE_ModeDefns_0_8, STATE_VARIABLE_ModeDefns_9);
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(
  MR_Word ModeDefns_3,
  MR_Word * ModeDefns_2)
{
  *ModeDefns_2 = ModeDefns_3;
}

void MR_CALL 
hlds__hlds_inst_mode__inst_table_set_mostly_uniq_insts_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_InstTable_0_6,
  MR_Word * STATE_VARIABLE_InstTable_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 5))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_InstTable_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (X_4));
    }
  }
}

void MR_CALL 
hlds__hlds_inst_mode__inst_table_set_shared_insts_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_InstTable_0_6,
  MR_Word * STATE_VARIABLE_InstTable_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_InstTable_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
hlds__hlds_inst_mode__inst_table_set_any_insts_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_InstTable_0_6,
  MR_Word * STATE_VARIABLE_InstTable_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_InstTable_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
hlds__hlds_inst_mode__inst_table_set_ground_insts_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_InstTable_0_6,
  MR_Word * STATE_VARIABLE_InstTable_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_InstTable_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
hlds__hlds_inst_mode__inst_table_set_merge_insts_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_InstTable_0_6,
  MR_Word * STATE_VARIABLE_InstTable_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_InstTable_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
hlds__hlds_inst_mode__inst_table_set_unify_insts_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_InstTable_0_6,
  MR_Word * STATE_VARIABLE_InstTable_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 0))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_InstTable_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
hlds__hlds_inst_mode__inst_table_set_user_insts_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_InstTable_0_6,
  MR_Word * STATE_VARIABLE_InstTable_7)
{
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstTable_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_InstTable_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(
  MR_Word InstTable_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstTable_3, (MR_Integer) 6))));
}

void MR_CALL 
hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(
  MR_Word InstTable_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstTable_3, (MR_Integer) 5))));
}

void MR_CALL 
hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(
  MR_Word InstTable_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstTable_3, (MR_Integer) 4))));
}

void MR_CALL 
hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(
  MR_Word InstTable_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstTable_3, (MR_Integer) 3))));
}

void MR_CALL 
hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(
  MR_Word InstTable_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstTable_3, (MR_Integer) 2))));
}

void MR_CALL 
hlds__hlds_inst_mode__inst_table_get_unify_insts_2_p_0(
  MR_Word InstTable_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstTable_3, (MR_Integer) 1))));
}

void MR_CALL 
hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(
  MR_Word InstTable_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstTable_3, (MR_Integer) 0))));
}

void MR_CALL 
hlds__hlds_inst_mode__inst_table_init_1_p_0(
  MR_Word * InstTable_2)
{
  {
    MR_Word UserInsts_3;
    MR_Word UnifyInsts_4;
    MR_Word MergeInsts_5;
    MR_Word GroundInsts_6;
    MR_Word SharedInsts_7;
    MR_Word AnyInsts_8;
    MR_Word NondetLiveInsts_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;

    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), &UserInsts_3);
    Var_10 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0));
    Var_11 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0));
    Var_12 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0));
    Var_13 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0));
    {
      UnifyInsts_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyInsts_4, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), UnifyInsts_4, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), UnifyInsts_4, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), UnifyInsts_4, 3) = ((MR_Box) (Var_13));
    }
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), &MergeInsts_5);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), &GroundInsts_6);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), &SharedInsts_7);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), &AnyInsts_8);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), &NondetLiveInsts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *InstTable_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (UserInsts_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (UnifyInsts_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MergeInsts_5));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (GroundInsts_6));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (AnyInsts_8));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SharedInsts_7));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (NondetLiveInsts_9));
    }
  }
}

void MR_CALL 
hlds__hlds_inst_mode__mostly_uniq_insts_from_sorted_pairs_2_p_0(
  MR_Word AssocList_3,
  MR_Word * MostlyUniqInstTable_4)
{
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), AssocList_3, MostlyUniqInstTable_4);
}

void MR_CALL 
hlds__hlds_inst_mode__shared_insts_from_sorted_pairs_2_p_0(
  MR_Word AssocList_3,
  MR_Word * SharedInstTable_4)
{
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), AssocList_3, SharedInstTable_4);
}

void MR_CALL 
hlds__hlds_inst_mode__any_insts_from_sorted_pairs_2_p_0(
  MR_Word AssocList_3,
  MR_Word * AnyInstTable_4)
{
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), AssocList_3, AnyInstTable_4);
}

void MR_CALL 
hlds__hlds_inst_mode__ground_insts_from_sorted_pairs_2_p_0(
  MR_Word AssocList_3,
  MR_Word * GroundInstTable_4)
{
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), AssocList_3, GroundInstTable_4);
}

void MR_CALL 
hlds__hlds_inst_mode__merge_insts_from_sorted_pairs_2_p_0(
  MR_Word AssocList_3,
  MR_Word * MergeInstTable_4)
{
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), AssocList_3, MergeInstTable_4);
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode__unify_insts_from_sorted_pairs_2_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__hlds_inst_mode__IntroducedFrom__pred__unify_insts_from_sorted_pairs__466__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_inst_mode__unify_insts_from_sorted_pairs_2_p_0(
  MR_Word AssocList0_3,
  MR_Word * UnifyInstTable_4)
{
  {
    MR_bool succeeded;
    MR_Word AssocList1_5;
    MR_Word RevLiveRealAssocList_6;
    MR_Word AssocList2_7;
    MR_Word RevLiveFakeAssocList_8;
    MR_Word AssocList3_9;
    MR_Word RevDeadRealAssocList_10;
    MR_Word AssocList4_11;
    MR_Word RevDeadFakeAssocList_12;
    MR_Word LiveRealTable_13;
    MR_Word LiveFakeTable_14;
    MR_Word DeadRealTable_15;
    MR_Word DeadFakeTable_16;
    MR_Word Var_29;

    hlds__hlds_inst_mode__unify_inst_subtable_from_sorted_pairs_6_p_0((MR_Integer) 0, (MR_Integer) 0, AssocList0_3, &AssocList1_5, (MR_Word) ((MR_Unsigned) 0U), &RevLiveRealAssocList_6);
    hlds__hlds_inst_mode__unify_inst_subtable_from_sorted_pairs_6_p_0((MR_Integer) 0, (MR_Integer) 1, AssocList1_5, &AssocList2_7, (MR_Word) ((MR_Unsigned) 0U), &RevLiveFakeAssocList_8);
    hlds__hlds_inst_mode__unify_inst_subtable_from_sorted_pairs_6_p_0((MR_Integer) 1, (MR_Integer) 0, AssocList2_7, &AssocList3_9, (MR_Word) ((MR_Unsigned) 0U), &RevDeadRealAssocList_10);
    hlds__hlds_inst_mode__unify_inst_subtable_from_sorted_pairs_6_p_0((MR_Integer) 1, (MR_Integer) 1, AssocList3_9, &AssocList4_11, (MR_Word) ((MR_Unsigned) 0U), &RevDeadFakeAssocList_12);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&hlds__hlds_inst_mode_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (hlds__hlds_inst_mode__unify_insts_from_sorted_pairs_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (AssocList4_11));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_29, (MR_String) "predicate \140hlds.hlds_inst_mode.unify_insts_from_sorted_pairs\'/2", (MR_String) "AssocList4 != []");
    mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), RevLiveRealAssocList_6, &LiveRealTable_13);
    mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), RevLiveFakeAssocList_8, &LiveFakeTable_14);
    mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), RevDeadRealAssocList_10, &DeadRealTable_15);
    mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), RevDeadFakeAssocList_12, &DeadFakeTable_16);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *UnifyInstTable_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LiveRealTable_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LiveFakeTable_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DeadRealTable_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (DeadFakeTable_16));
    }
  }
}

static void MR_CALL 
hlds__hlds_inst_mode__unify_inst_subtable_from_sorted_pairs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevSubTablePairs_0_5,
  MR_Word * STATE_VARIABLE_RevSubTablePairs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevSubTablePairs_6 = STATE_VARIABLE_RevSubTablePairs_0_5;
    }
    else
    {
      MR_Word Pair_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Pairs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word UnifyInstInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pair_14, (MR_Integer) 0))));
      MR_Word MaybeInstDet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pair_14, (MR_Integer) 1))));
      MR_Word Live_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_18, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word Real_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_18, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word InstA_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_18, (MR_Integer) 1))));
      MR_Word InstB_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_18, (MR_Integer) 2))));

      succeeded = (Live_20 == HeadVar__1_1);
      if (succeeded)
        succeeded = (Real_21 == HeadVar__2_2);
      if (succeeded)
      {
        MR_Word InstPair_24;
        MR_Word STATE_VARIABLE_RevSubTablePairs_27_27;
        MR_Word Var_28;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_RevSubTablePairs_0_5;

        {
          InstPair_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), InstPair_24, 0) = ((MR_Box) (InstA_22));
          MR_hl_field(MR_mktag(0), InstPair_24, 1) = ((MR_Box) (InstB_23));
        }
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (InstPair_24));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (MaybeInstDet_19));
        }
        {
          STATE_VARIABLE_RevSubTablePairs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSubTablePairs_27_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSubTablePairs_27_27, 1) = ((MR_Box) (STATE_VARIABLE_RevSubTablePairs_0_5));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Pairs_15;
        next_value_of_STATE_VARIABLE_RevSubTablePairs_0_5 = STATE_VARIABLE_RevSubTablePairs_27_27;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_RevSubTablePairs_0_5 = next_value_of_STATE_VARIABLE_RevSubTablePairs_0_5;
        continue;
      }
      else
      {
        *HeadVar__4_4 = HeadVar__3_3;
        *STATE_VARIABLE_RevSubTablePairs_6 = STATE_VARIABLE_RevSubTablePairs_0_5;
      }
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_inst_mode__mostly_uniq_insts_to_sorted_pairs_2_p_0(
  MR_Word MostlyUniqInstTable_3,
  MR_Word * AssocList_4)
{
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), MostlyUniqInstTable_3, AssocList_4);
}

void MR_CALL 
hlds__hlds_inst_mode__shared_insts_to_sorted_pairs_2_p_0(
  MR_Word SharedInstTable_3,
  MR_Word * AssocList_4)
{
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), SharedInstTable_3, AssocList_4);
}

void MR_CALL 
hlds__hlds_inst_mode__any_insts_to_sorted_pairs_2_p_0(
  MR_Word AnyInstTable_3,
  MR_Word * AssocList_4)
{
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), AnyInstTable_3, AssocList_4);
}

void MR_CALL 
hlds__hlds_inst_mode__ground_insts_to_sorted_pairs_2_p_0(
  MR_Word GroundInstTable_3,
  MR_Word * AssocList_4)
{
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), GroundInstTable_3, AssocList_4);
}

void MR_CALL 
hlds__hlds_inst_mode__merge_insts_to_sorted_pairs_2_p_0(
  MR_Word MergeInstTable_3,
  MR_Word * AssocList_4)
{
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), MergeInstTable_3, AssocList_4);
}

void MR_CALL 
hlds__hlds_inst_mode__unify_insts_to_sorted_pairs_2_p_0(
  MR_Word UnifyInstTable_3,
  MR_Word * AssocList_4)
{
  {
    MR_Word LiveRealTable_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstTable_3, (MR_Integer) 0))));
    MR_Word LiveFakeTable_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstTable_3, (MR_Integer) 1))));
    MR_Word DeadRealTable_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstTable_3, (MR_Integer) 2))));
    MR_Word DeadFakeTable_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstTable_3, (MR_Integer) 3))));
    MR_Word LiveRealPairInsts_9;
    MR_Word LiveFakePairInsts_10;
    MR_Word DeadRealPairInsts_11;
    MR_Word DeadFakePairInsts_12;
    MR_Word STATE_VARIABLE_RevAssocList_17_17;
    MR_Word STATE_VARIABLE_RevAssocList_20_20;
    MR_Word STATE_VARIABLE_RevAssocList_23_23;
    MR_Word STATE_VARIABLE_RevAssocList_26_26;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), LiveRealTable_5, &LiveRealPairInsts_9);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), LiveFakeTable_6, &LiveFakePairInsts_10);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), DeadRealTable_7, &DeadRealPairInsts_11);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), DeadFakeTable_8, &DeadFakePairInsts_12);
    hlds__hlds_inst_mode__accumulate_unify_insts_5_p_0((MR_Integer) 0, (MR_Integer) 0, LiveRealPairInsts_9, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevAssocList_17_17);
    hlds__hlds_inst_mode__accumulate_unify_insts_5_p_0((MR_Integer) 0, (MR_Integer) 1, LiveFakePairInsts_10, STATE_VARIABLE_RevAssocList_17_17, &STATE_VARIABLE_RevAssocList_20_20);
    hlds__hlds_inst_mode__accumulate_unify_insts_5_p_0((MR_Integer) 1, (MR_Integer) 0, DeadRealPairInsts_11, STATE_VARIABLE_RevAssocList_20_20, &STATE_VARIABLE_RevAssocList_23_23);
    hlds__hlds_inst_mode__accumulate_unify_insts_5_p_0((MR_Integer) 1, (MR_Integer) 1, DeadFakePairInsts_12, STATE_VARIABLE_RevAssocList_23_23, &STATE_VARIABLE_RevAssocList_26_26);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_inst_mode_scalar_common_1[0]), STATE_VARIABLE_RevAssocList_26_26, AssocList_4);
  }
}

static void MR_CALL 
hlds__hlds_inst_mode__accumulate_unify_insts_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevAssocList_0_4,
  MR_Word * STATE_VARIABLE_RevAssocList_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevAssocList_5 = STATE_VARIABLE_RevAssocList_0_4;
    else
    {
      MR_Word PairMaybeInst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word PairMaybeInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word InstA_16;
      MR_Word InstB_17;
      MR_Word MaybeInst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PairMaybeInst_13, (MR_Integer) 1))));
      MR_Word UnifyInstInfo_19;
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PairMaybeInst_13, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevAssocList_23_23;
      MR_Word Var_24;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevAssocList_0_4;

      InstA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
      InstB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));
      {
        UnifyInstInfo_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnifyInstInfo_19, 0) = (MR_Box) (((((MR_Unsigned) (HeadVar__1_1) << 1)) | (MR_Unsigned) (HeadVar__2_2)));
        MR_hl_field(MR_mktag(0), UnifyInstInfo_19, 1) = ((MR_Box) (InstA_16));
        MR_hl_field(MR_mktag(0), UnifyInstInfo_19, 2) = ((MR_Box) (InstB_17));
      }
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (UnifyInstInfo_19));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (MaybeInst_18));
      }
      {
        STATE_VARIABLE_RevAssocList_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAssocList_23_23, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAssocList_23_23, 1) = ((MR_Box) (STATE_VARIABLE_RevAssocList_0_4));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PairMaybeInsts_14;
      next_value_of_STATE_VARIABLE_RevAssocList_0_4 = STATE_VARIABLE_RevAssocList_23_23;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_RevAssocList_0_4 = next_value_of_STATE_VARIABLE_RevAssocList_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_inst_mode__det_update_mostly_uniq_inst_4_p_0(
  MR_Word InstName_5,
  MR_Word MaybeInst_6,
  MR_Word STATE_VARIABLE_MostlyUniqInstTable_0_8,
  MR_Word * STATE_VARIABLE_MostlyUniqInstTable_9)
{
  mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), ((MR_Box) (InstName_5)), ((MR_Box) (MaybeInst_6)), STATE_VARIABLE_MostlyUniqInstTable_0_8, STATE_VARIABLE_MostlyUniqInstTable_9);
}

void MR_CALL 
hlds__hlds_inst_mode__det_update_shared_inst_4_p_0(
  MR_Word InstName_5,
  MR_Word MaybeInst_6,
  MR_Word STATE_VARIABLE_SharedInstTable_0_8,
  MR_Word * STATE_VARIABLE_SharedInstTable_9)
{
  mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), ((MR_Box) (InstName_5)), ((MR_Box) (MaybeInst_6)), STATE_VARIABLE_SharedInstTable_0_8, STATE_VARIABLE_SharedInstTable_9);
}

void MR_CALL 
hlds__hlds_inst_mode__det_update_any_inst_4_p_0(
  MR_Word AnyInstInfo_5,
  MR_Word MaybeInstDet_6,
  MR_Word STATE_VARIABLE_AnyInstTable_0_8,
  MR_Word * STATE_VARIABLE_AnyInstTable_9)
{
  mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), ((MR_Box) (AnyInstInfo_5)), ((MR_Box) (MaybeInstDet_6)), STATE_VARIABLE_AnyInstTable_0_8, STATE_VARIABLE_AnyInstTable_9);
}

void MR_CALL 
hlds__hlds_inst_mode__det_update_ground_inst_4_p_0(
  MR_Word GroundInstInfo_5,
  MR_Word MaybeInstDet_6,
  MR_Word STATE_VARIABLE_GroundInstTable_0_8,
  MR_Word * STATE_VARIABLE_GroundInstTable_9)
{
  mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), ((MR_Box) (GroundInstInfo_5)), ((MR_Box) (MaybeInstDet_6)), STATE_VARIABLE_GroundInstTable_0_8, STATE_VARIABLE_GroundInstTable_9);
}

void MR_CALL 
hlds__hlds_inst_mode__det_update_merge_inst_4_p_0(
  MR_Word MergeInstInfo_5,
  MR_Word MaybeInst_6,
  MR_Word STATE_VARIABLE_MergeInstTable_0_8,
  MR_Word * STATE_VARIABLE_MergeInstTable_9)
{
  mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), ((MR_Box) (MergeInstInfo_5)), ((MR_Box) (MaybeInst_6)), STATE_VARIABLE_MergeInstTable_0_8, STATE_VARIABLE_MergeInstTable_9);
}

void MR_CALL 
hlds__hlds_inst_mode__det_update_unify_inst_4_p_0(
  MR_Word UnifyInstInfo_5,
  MR_Word MaybeInstDet_6,
  MR_Word STATE_VARIABLE_UnifyInstTable_0_21,
  MR_Word * STATE_VARIABLE_UnifyInstTable_22)
{
  {
    MR_Word IsLive_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word IsReal_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_5, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word InstA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_5, (MR_Integer) 1))));
    MR_Word InstB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_5, (MR_Integer) 2))));
    MR_Word InstPair_12;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;

    {
      InstPair_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstPair_12, 0) = ((MR_Box) (InstA_10));
      MR_hl_field(MR_mktag(0), InstPair_12, 1) = ((MR_Box) (InstB_11));
    }
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 0))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 1))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 2))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 3))));
    switch (IsLive_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        switch (IsReal_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word DeadFakeTable_20;
              MR_Word Var_51;
              MR_Word Var_52;
              MR_Word Var_53;

              mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), ((MR_Box) (InstPair_12)), ((MR_Box) (MaybeInstDet_6)), Var_71, &DeadFakeTable_20);
              Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 0))));
              Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 1))));
              Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 2))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_UnifyInstTable_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_52));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_53));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (DeadFakeTable_20));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word DeadRealTable_18;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_Word Var_47;

              mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), ((MR_Box) (InstPair_12)), ((MR_Box) (MaybeInstDet_6)), Var_72, &DeadRealTable_18);
              Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 0))));
              Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 1))));
              Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 3))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_UnifyInstTable_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_45));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DeadRealTable_18));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_47));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (IsReal_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word LiveFakeTable_16;
              MR_Word Var_37;
              MR_Word Var_39;
              MR_Word Var_40;

              mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), ((MR_Box) (InstPair_12)), ((MR_Box) (MaybeInstDet_6)), Var_73, &LiveFakeTable_16);
              Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 0))));
              Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 2))));
              Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 3))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_UnifyInstTable_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LiveFakeTable_16));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_39));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_40));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word LiveRealTable_14;
              MR_Word Var_31;
              MR_Word Var_32;
              MR_Word Var_33;

              mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), ((MR_Box) (InstPair_12)), ((MR_Box) (MaybeInstDet_6)), Var_74, &LiveRealTable_14);
              Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 1))));
              Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 2))));
              Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 3))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_UnifyInstTable_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LiveRealTable_14));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_32));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_33));
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__hlds_inst_mode__search_insert_mostly_uniq_inst_4_p_0(
  MR_Word InstName_5,
  MR_Word * MaybeMaybeInst_6,
  MR_Word STATE_VARIABLE_MostlyUniqInstTable_0_8,
  MR_Word * STATE_VARIABLE_MostlyUniqInstTable_9)
{
  mercury__map__search_insert_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), ((MR_Box) (InstName_5)), ((MR_Box) ((MR_Unsigned) 0U)), MaybeMaybeInst_6, STATE_VARIABLE_MostlyUniqInstTable_0_8, STATE_VARIABLE_MostlyUniqInstTable_9);
}

void MR_CALL 
hlds__hlds_inst_mode__search_insert_shared_inst_4_p_0(
  MR_Word InstName_5,
  MR_Word * MaybeMaybeInst_6,
  MR_Word STATE_VARIABLE_SharedInstTable_0_8,
  MR_Word * STATE_VARIABLE_SharedInstTable_9)
{
  mercury__map__search_insert_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), ((MR_Box) (InstName_5)), ((MR_Box) ((MR_Unsigned) 0U)), MaybeMaybeInst_6, STATE_VARIABLE_SharedInstTable_0_8, STATE_VARIABLE_SharedInstTable_9);
}

void MR_CALL 
hlds__hlds_inst_mode__search_insert_any_inst_4_p_0(
  MR_Word AnyInstInfo_5,
  MR_Word * MaybeMaybeInstDet_6,
  MR_Word STATE_VARIABLE_AnyInstTable_0_8,
  MR_Word * STATE_VARIABLE_AnyInstTable_9)
{
  mercury__map__search_insert_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), ((MR_Box) (AnyInstInfo_5)), ((MR_Box) ((MR_Unsigned) 0U)), MaybeMaybeInstDet_6, STATE_VARIABLE_AnyInstTable_0_8, STATE_VARIABLE_AnyInstTable_9);
}

void MR_CALL 
hlds__hlds_inst_mode__search_insert_ground_inst_4_p_0(
  MR_Word GroundInstInfo_5,
  MR_Word * MaybeMaybeInstDet_6,
  MR_Word STATE_VARIABLE_GroundInstTable_0_8,
  MR_Word * STATE_VARIABLE_GroundInstTable_9)
{
  mercury__map__search_insert_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), ((MR_Box) (GroundInstInfo_5)), ((MR_Box) ((MR_Unsigned) 0U)), MaybeMaybeInstDet_6, STATE_VARIABLE_GroundInstTable_0_8, STATE_VARIABLE_GroundInstTable_9);
}

void MR_CALL 
hlds__hlds_inst_mode__search_insert_merge_inst_4_p_0(
  MR_Word MergeInstInfo_5,
  MR_Word * MaybeMaybeInst_6,
  MR_Word STATE_VARIABLE_MergeInstTable_0_8,
  MR_Word * STATE_VARIABLE_MergeInstTable_9)
{
  mercury__map__search_insert_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), ((MR_Box) (MergeInstInfo_5)), ((MR_Box) ((MR_Unsigned) 0U)), MaybeMaybeInst_6, STATE_VARIABLE_MergeInstTable_0_8, STATE_VARIABLE_MergeInstTable_9);
}

void MR_CALL 
hlds__hlds_inst_mode__search_insert_unify_inst_4_p_0(
  MR_Word UnifyInstInfo_5,
  MR_Word * MaybeMaybeInstDet_6,
  MR_Word STATE_VARIABLE_UnifyInstTable_0_21,
  MR_Word * STATE_VARIABLE_UnifyInstTable_22)
{
  {
    MR_Word IsLive_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word IsReal_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_5, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word InstA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_5, (MR_Integer) 1))));
    MR_Word InstB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_5, (MR_Integer) 2))));
    MR_Word InstPair_12;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;

    {
      InstPair_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstPair_12, 0) = ((MR_Box) (InstA_10));
      MR_hl_field(MR_mktag(0), InstPair_12, 1) = ((MR_Box) (InstB_11));
    }
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 0))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 1))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 2))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 3))));
    switch (IsLive_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        switch (IsReal_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word DeadFakeTable_20;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;

              mercury__map__search_insert_5_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), ((MR_Box) (InstPair_12)), ((MR_Box) ((MR_Unsigned) 0U)), MaybeMaybeInstDet_6, Var_75, &DeadFakeTable_20);
              Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 0))));
              Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 1))));
              Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 2))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_UnifyInstTable_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (DeadFakeTable_20));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word DeadRealTable_18;
              MR_Word Var_48;
              MR_Word Var_49;
              MR_Word Var_51;

              mercury__map__search_insert_5_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), ((MR_Box) (InstPair_12)), ((MR_Box) ((MR_Unsigned) 0U)), MaybeMaybeInstDet_6, Var_76, &DeadRealTable_18);
              Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 0))));
              Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 1))));
              Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 3))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_UnifyInstTable_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_49));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DeadRealTable_18));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_51));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (IsReal_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word LiveFakeTable_16;
              MR_Word Var_41;
              MR_Word Var_43;
              MR_Word Var_44;

              mercury__map__search_insert_5_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), ((MR_Box) (InstPair_12)), ((MR_Box) ((MR_Unsigned) 0U)), MaybeMaybeInstDet_6, Var_77, &LiveFakeTable_16);
              Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 0))));
              Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 2))));
              Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 3))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_UnifyInstTable_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LiveFakeTable_16));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_43));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_44));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word LiveRealTable_14;
              MR_Word Var_35;
              MR_Word Var_36;
              MR_Word Var_37;

              mercury__map__search_insert_5_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), ((MR_Box) (InstPair_12)), ((MR_Box) ((MR_Unsigned) 0U)), MaybeMaybeInstDet_6, Var_78, &LiveRealTable_14);
              Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 1))));
              Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 2))));
              Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UnifyInstTable_0_21, (MR_Integer) 3))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_UnifyInstTable_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LiveRealTable_14));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_35));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_36));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_37));
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__hlds_inst_mode__lookup_mostly_uniq_inst_3_p_0(
  MR_Word MostlyUniqInstTable_4,
  MR_Word InstName_5,
  MR_Word * MaybeInst_6)
{
  {
    MR_Box conv0_MaybeInst_6;

    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), MostlyUniqInstTable_4, ((MR_Box) (InstName_5)), &conv0_MaybeInst_6);
    *MaybeInst_6 = ((MR_Word) (conv0_MaybeInst_6));
  }
}

void MR_CALL 
hlds__hlds_inst_mode__lookup_shared_inst_3_p_0(
  MR_Word SharedInstTable_4,
  MR_Word InstName_5,
  MR_Word * MaybeInst_6)
{
  {
    MR_Box conv0_MaybeInst_6;

    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), SharedInstTable_4, ((MR_Box) (InstName_5)), &conv0_MaybeInst_6);
    *MaybeInst_6 = ((MR_Word) (conv0_MaybeInst_6));
  }
}

void MR_CALL 
hlds__hlds_inst_mode__lookup_any_inst_3_p_0(
  MR_Word AnyInstTable_4,
  MR_Word AnyInstInfo_5,
  MR_Word * MaybeInstDet_6)
{
  {
    MR_Box conv0_MaybeInstDet_6;

    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), AnyInstTable_4, ((MR_Box) (AnyInstInfo_5)), &conv0_MaybeInstDet_6);
    *MaybeInstDet_6 = ((MR_Word) (conv0_MaybeInstDet_6));
  }
}

void MR_CALL 
hlds__hlds_inst_mode__lookup_ground_inst_3_p_0(
  MR_Word GroundInstTable_4,
  MR_Word GroundInstInfo_5,
  MR_Word * MaybeInstDet_6)
{
  {
    MR_Box conv0_MaybeInstDet_6;

    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), GroundInstTable_4, ((MR_Box) (GroundInstInfo_5)), &conv0_MaybeInstDet_6);
    *MaybeInstDet_6 = ((MR_Word) (conv0_MaybeInstDet_6));
  }
}

void MR_CALL 
hlds__hlds_inst_mode__lookup_merge_inst_3_p_0(
  MR_Word MergeInstTable_4,
  MR_Word MergeInstInfo_5,
  MR_Word * MaybeInst_6)
{
  {
    MR_Box conv0_MaybeInst_6;

    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0), MergeInstTable_4, ((MR_Box) (MergeInstInfo_5)), &conv0_MaybeInst_6);
    *MaybeInst_6 = ((MR_Word) (conv0_MaybeInst_6));
  }
}

void MR_CALL 
hlds__hlds_inst_mode__lookup_unify_inst_3_p_0(
  MR_Word UnifyInstTable_4,
  MR_Word UnifyInstInfo_5,
  MR_Word * MaybeInstDet_6)
{
  {
    MR_Word IsLive_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word IsReal_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_5, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word InstA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_5, (MR_Integer) 1))));
    MR_Word InstB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_5, (MR_Integer) 2))));
    MR_Word InstPair_11;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;

    {
      InstPair_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstPair_11, 0) = ((MR_Box) (InstA_9));
      MR_hl_field(MR_mktag(0), InstPair_11, 1) = ((MR_Box) (InstB_10));
    }
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstTable_4, (MR_Integer) 0))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstTable_4, (MR_Integer) 1))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstTable_4, (MR_Integer) 2))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstTable_4, (MR_Integer) 3))));
    switch (IsLive_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        switch (IsReal_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Box conv0_MaybeInstDet_6;

              mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), Var_44, ((MR_Box) (InstPair_11)), &conv0_MaybeInstDet_6);
              *MaybeInstDet_6 = ((MR_Word) (conv0_MaybeInstDet_6));
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box conv1_MaybeInstDet_6;

              mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), Var_45, ((MR_Box) (InstPair_11)), &conv1_MaybeInstDet_6);
              *MaybeInstDet_6 = ((MR_Word) (conv1_MaybeInstDet_6));
            }
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (IsReal_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Box conv2_MaybeInstDet_6;

              mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), Var_46, ((MR_Box) (InstPair_11)), &conv2_MaybeInstDet_6);
              *MaybeInstDet_6 = ((MR_Word) (conv2_MaybeInstDet_6));
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box conv3_MaybeInstDet_6;

              mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0), Var_47, ((MR_Box) (InstPair_11)), &conv3_MaybeInstDet_6);
              *MaybeInstDet_6 = ((MR_Word) (conv3_MaybeInstDet_6));
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____any_inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____any_inst_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____any_inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____any_inst_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____ground_inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____ground_inst_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____ground_inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____ground_inst_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____hlds_inst_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____hlds_inst_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____hlds_inst_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____hlds_inst_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____hlds_mode_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____hlds_mode_body_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____hlds_mode_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____hlds_mode_body_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____hlds_mode_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____hlds_mode_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____hlds_mode_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____hlds_mode_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____inst_for_type_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____inst_for_type_ctor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____inst_for_type_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____inst_for_type_ctor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____inst_pair_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____inst_pair_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____inst_pair_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____inst_pair_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____inst_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____inst_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____maybe_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____maybe_inst_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____maybe_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____maybe_inst_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____maybe_inst_det_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____maybe_inst_det_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____maybe_inst_det_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____maybe_inst_det_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____merge_inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____merge_inst_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____merge_inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____merge_inst_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____mode_defns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____mode_defns_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____mode_defns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____mode_defns_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____mode_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____mode_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____mode_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____mode_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____mostly_uniq_inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____mostly_uniq_inst_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____mostly_uniq_inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____mostly_uniq_inst_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____shared_inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____shared_inst_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____shared_inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____shared_inst_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____unify_inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____unify_inst_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____unify_inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____unify_inst_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_inst_mode____Unify____user_inst_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____user_inst_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_inst_mode____Compare____user_inst_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_inst_mode____Compare____user_inst_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__hlds_inst_mode__init(void)
{
}

void mercury__hlds__hlds_inst_mode__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_any_inst_table_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_ground_inst_table_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_body_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_for_type_ctor_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_pair_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_table_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_merge_inst_table_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_mode_defns_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_mode_table_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_mostly_uniq_inst_table_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_shared_inst_table_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_unify_inst_table_0);
	MR_register_type_ctor_info(&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_user_inst_table_0);
}

void mercury__hlds__hlds_inst_mode__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_inst_mode__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_inst_mode.
