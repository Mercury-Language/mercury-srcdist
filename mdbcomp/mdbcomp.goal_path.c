/*
** Automatically generated from `mdbcomp.goal_path.m'
** by the Mercury compiler,
** version rotd-2022-02-08
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


// :- module mdbcomp.goal_path.
// :- implementation.

/*
INIT mercury__mdbcomp__goal_path__init
ENDINIT
*/

#include "mdbcomp.goal_path.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0;

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_containing_goal_0_1[2];

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1;

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_1[1];

static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_containing_goal_0[2];

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_containing_goal_0[2];

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_containing_goal_0[2];

static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0;

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_forward_goal_path_0_1[2];

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1;

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_1[1];

static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_forward_goal_path_0[2];

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_forward_goal_path_0[2];

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_forward_goal_path_0[2];

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_attr_array_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__maybe__pti_maybe_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1;

static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1;

static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_id_0[1];

static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_id_0;

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_0[1];

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0;

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_1[1];

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1;

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_2[2];

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2;

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3;

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4;

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5;

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6;

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_7[1];

static const MR_DuArgLocn mdbcomp__goal_path__mdbcomp__goal_path__field_locns_goal_path_step_0_7[1];

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7;

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8;

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9;

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10;

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_11[1];

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11;

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_0[7];

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_1[1];

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_2[1];

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_3[3];

static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_goal_path_step_0[4];

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_goal_path_step_0[12];

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_path_step_0[12];

static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__bimap__ti_bimap_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0;

static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1;

static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_ordinal_ordered_maybe_cut_0[2];

static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_name_ordered_maybe_cut_0[2];

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_cut_0[2];

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0;

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_maybe_switch_num_functors_0_1[1];

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1;

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_1[1];

static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_maybe_switch_num_functors_0[2];

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_maybe_switch_num_functors_0[2];

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_switch_num_functors_0[2];

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0;

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_reverse_goal_path_0_1[2];

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1;

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_1[1];

static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_reverse_goal_path_0[2];

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_reverse_goal_path_0[2];

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_reverse_goal_path_0[2];

static MR_bool MR_CALL 
mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__538__1_2_p_0(
  MR_Char HeadVar__1_16,
  MR_Char HeadVar__2_23);

static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ReverseGoalPathBiMap_0_2,
  MR_Word * STATE_VARIABLE_ReverseGoalPathBiMap_3);

static void MR_CALL 
mdbcomp__goal_path__create_forward_goal_path_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ReverseGoalPathMap_0_2,
  MR_Word * STATE_VARIABLE_ReverseGoalPathMap_3);

static MR_Word MR_CALL 
mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
mdbcomp__goal_path__goal_path_to_strings_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_det_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_strings_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_step_from_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ReverseGoalPath_0_2,
  MR_Word * STATE_VARIABLE_ReverseGoalPath_3);

static void MR_CALL 
mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ForwardGoalPath_0_2,
  MR_Word * STATE_VARIABLE_ForwardGoalPath_3);

static void MR_CALL 
mdbcomp__goal_path__goal_path_last_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(
  MR_Word Head_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____forward_goal_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__goal_path____Compare____forward_goal_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_attr_array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdbcomp__goal_path____Compare____goal_attr_array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_forward_path_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__goal_path____Compare____goal_forward_path_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__goal_path____Compare____goal_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_step_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_step_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_cut_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_cut_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____reverse_goal_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__goal_path____Compare____reverse_goal_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_1[9][3];

static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_2[2][2];

static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_3[2][5];

static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_4[2][4];




static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_1[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdbcomp__goal_path_scalar_common_4[1])),
    ((MR_Box) (mdbcomp__goal_path__goal_path_from_string_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdbcomp__goal_path_scalar_common_4[1])),
    ((MR_Box) (mdbcomp__goal_path__goal_path_from_string_det_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdbcomp__goal_path_scalar_common_4[1])),
    ((MR_Box) (mdbcomp__goal_path__rev_goal_path_from_string_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdbcomp__goal_path_scalar_common_4[1])),
    ((MR_Box) (mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdbcomp__goal_path_scalar_common_3[1])),
    ((MR_Box) (mdbcomp__goal_path__create_forward_goal_path_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
};

static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_4[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mdbcomp__goal_path_scalar_common_3[0])),
    ((MR_Box) (mdbcomp__goal_path__goal_path_step_from_string_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Char) 45))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdbcomp.mh"
#include "string.mh"
#include "time.mh"



static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0 = {
  (MR_String) "whole_body_goal",
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

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_containing_goal_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0)
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1 = {
  (MR_String) "containing_goal",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_containing_goal_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1
};

static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_containing_goal_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_containing_goal_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0
};

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_containing_goal_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__goal_path____Unify____containing_goal_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____containing_goal_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "containing_goal",
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_containing_goal_0 },
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_containing_goal_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_containing_goal_0,

};

static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____containing_goal_map_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____containing_goal_map_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "containing_goal_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0 = {
  (MR_String) "fgp_nil",
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

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_forward_goal_path_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1 = {
  (MR_String) "fgp_cons",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_forward_goal_path_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1
};

static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_forward_goal_path_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_forward_goal_path_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0
};

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_forward_goal_path_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__goal_path____Unify____forward_goal_path_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____forward_goal_path_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "forward_goal_path",
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_forward_goal_path_0 },
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_forward_goal_path_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_forward_goal_path_0,

};

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_attr_array_1[1] = {
  (MR_Integer) 0
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__maybe__pti_maybe_1__pseudo_1)
  }
};

static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1 = {
  (MR_String) "goal_attr_array",
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_attr_array_1_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_attr_array_1_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_attr_array",
  {     &mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1 },
  {     &mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_attr_array_1,

};

static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)
  }
};

const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_forward_path_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_forward_path_map_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_forward_path_map_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_forward_path_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_id_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_id_0 = {
  (MR_String) "goal_id",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_id_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_id_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_id",
  {     &mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_id_0 },
  {     &mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_id_0,

};

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0 = {
  (MR_String) "step_conj",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1 = {
  (MR_String) "step_disj",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0)
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2 = {
  (MR_String) "step_switch",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3 = {
  (MR_String) "step_ite_cond",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4 = {
  (MR_String) "step_ite_then",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5 = {
  (MR_String) "step_ite_else",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6 = {
  (MR_String) "step_neg",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_7[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_cut_0)
};

static const MR_DuArgLocn mdbcomp__goal_path__mdbcomp__goal_path__field_locns_goal_path_step_0_7[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7 = {
  (MR_String) "step_scope",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(7),
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_7,
  NULL,
  mdbcomp__goal_path__mdbcomp__goal_path__field_locns_goal_path_step_0_7,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8 = {
  (MR_String) "step_lambda",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9 = {
  (MR_String) "step_try",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10 = {
  (MR_String) "step_atomic_main",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(10),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_11[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11 = {
  (MR_String) "step_atomic_orelse",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(11),
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_0[7] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_2[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_3[3] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11
};

static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_goal_path_step_0[4] = {
  {
    UINT32_C(7),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_goal_path_step_0[12] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9
};

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_path_step_0[12] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 7,
  (MR_Integer) 11,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_path_step_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_path_step_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_path_step",
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_goal_path_step_0 },
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_goal_path_step_0 },
  (MR_Integer) 12,
  UINT16_C(12),
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_path_step_0,

};

const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_string_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_path_string_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_path_string_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_path_string",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__bimap__ti_bimap_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)
  }
};

const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_reverse_path_bimap_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_reverse_path_bimap",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdbcomp__goal_path__bimap__ti_bimap_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)
  }
};

const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_reverse_path_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_reverse_path_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0 = {
  (MR_String) "scope_is_cut",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1 = {
  (MR_String) "scope_is_no_cut",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_ordinal_ordered_maybe_cut_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0,
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1
};

static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_name_ordered_maybe_cut_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0,
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1
};

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_cut_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_cut_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__goal_path____Unify____maybe_cut_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____maybe_cut_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "maybe_cut",
  {     mdbcomp__goal_path__mdbcomp__goal_path__enum_name_ordered_maybe_cut_0 },
  {     mdbcomp__goal_path__mdbcomp__goal_path__enum_ordinal_ordered_maybe_cut_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_cut_0,

};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0 = {
  (MR_String) "unknown_num_functors_in_type",
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

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_maybe_switch_num_functors_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1 = {
  (MR_String) "known_num_functors_in_type",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_maybe_switch_num_functors_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1
};

static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_maybe_switch_num_functors_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_maybe_switch_num_functors_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0
};

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_switch_num_functors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "maybe_switch_num_functors",
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_maybe_switch_num_functors_0 },
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_maybe_switch_num_functors_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_switch_num_functors_0,

};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0 = {
  (MR_String) "rgp_nil",
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

static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_reverse_goal_path_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0)
};

static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1 = {
  (MR_String) "rgp_cons",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_reverse_goal_path_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1
};

static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_reverse_goal_path_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_reverse_goal_path_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0
};

static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_reverse_goal_path_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__goal_path____Unify____reverse_goal_path_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____reverse_goal_path_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "reverse_goal_path",
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_reverse_goal_path_0 },
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_reverse_goal_path_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_reverse_goal_path_0,

};

static MR_bool MR_CALL 
mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__538__1_2_p_0(
  MR_Char HeadVar__1_16,
  MR_Char HeadVar__2_23)
{
  {
    MR_bool succeeded = (HeadVar__1_16 == HeadVar__2_23);

    return succeeded;
  }
}

void MR_CALL 
mdbcomp__goal_path____Compare____reverse_goal_path_0_0(
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
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;

        mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&SubResult1_10, Var_18, ArgY1_9);
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
          mdbcomp__goal_path____Compare____goal_path_step_0_0(HeadVar__1_1, Var_17, ArgY2_12);
      }
    }
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path____Unify____reverse_goal_path_0_0(
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(ArgX2_7, ArgY2_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__goal_path____Compare____maybe_cut_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_cut_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__goal_path_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdbcomp__goal_path_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__goal_path_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdbcomp__goal_path_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_string_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_string_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__goal_path____Compare____goal_id_0_0(
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
      MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
      MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_id_0_0(
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
      MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__goal_path____Compare____goal_forward_path_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__goal_path_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_forward_path_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdbcomp__goal_path_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__goal_path____Compare____goal_attr_array_1_0(
  MR_Word TypeInfo_for_T_8,
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
      MR_Word TypeInfo_10_10;
      MR_ArrayPtr ArgX1_4 = (MR_ArrayPtr) (HeadVar__2_2);
      MR_ArrayPtr ArgY1_5 = (MR_ArrayPtr) (HeadVar__3_3);

      {
        TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
        MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_8));
      }
      mercury__array____Compare____array_1_0(TypeInfo_10_10, HeadVar__1_1, (MR_ArrayPtr) (ArgX1_4), (MR_ArrayPtr) (ArgY1_5));
    }
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_attr_array_1_0(
  MR_Word TypeInfo_for_T_7,
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
      MR_Word TypeInfo_9_9;
      MR_ArrayPtr ArgX1_3 = (MR_ArrayPtr) (HeadVar__1_1);
      MR_ArrayPtr ArgY1_4 = (MR_ArrayPtr) (HeadVar__2_2);

      {
        TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
        MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
      }
      succeeded = mercury__array____Unify____array_1_0(TypeInfo_9_9, (MR_ArrayPtr) (ArgX1_3), (MR_ArrayPtr) (ArgY1_4));
    }
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__goal_path____Compare____forward_goal_path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
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
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;

        mdbcomp__goal_path____Compare____goal_path_step_0_0(&SubResult1_10, Var_18, ArgY1_9);
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
        {
          MR_Word next_value_of_HeadVar__2_2 = Var_17;
          MR_Word next_value_of_HeadVar__3_3 = ArgY2_12;

          // direct tailcall eliminated
          ;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path____Unify____forward_goal_path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(ArgX1_5, ArgY1_6);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = ArgX2_7;
          next_value_of_HeadVar__2_2 = ArgY2_8;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__goal_path_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdbcomp__goal_path_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_0_0(
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
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;
        MR_Integer Var_19 = (MR_Integer) (Var_18);
        MR_Integer Var_20 = (MR_Integer) (ArgY1_9);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
        {
          SubResult1_10 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_19 > Var_20);
          if (succeeded)
          {
            SubResult1_10 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult1_10 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
          mdbcomp__goal_path____Compare____goal_path_step_0_0(HeadVar__1_1, Var_17, ArgY2_12);
      }
    }
  }
}

void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_step_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_149 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_150 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_149 == CastY_150);
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
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
              }
              break;
            case (MR_Integer) 3:
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
              }
              break;
            case (MR_Integer) 4:
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
              }
              break;
            case (MR_Integer) 5:
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
              }
              break;
            case (MR_Integer) 6:
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
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
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_158 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_158 < ArgY1_5);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_158 > ArgY1_5);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_159 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ArgY1_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_159 < ArgY1_25);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_159 > ArgY1_25);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Integer Var_162 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer ArgY1_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_48;

                          succeeded = (Var_162 < ArgY1_47);
                          if (succeeded)
                          {
                            SubResult1_48 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_162 > ArgY1_47);
                            if (succeeded)
                            {
                              SubResult1_48 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult1_48 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_48;
                          else
                            mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0(HeadVar__1_1, Var_161, ArgY2_50);
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
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_160 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

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
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_107 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                          MR_Integer Var_163 = (MR_Integer) (Var_160);
                          MR_Integer Var_164 = (MR_Integer) (ArgY1_107);

                          succeeded = (Var_163 < Var_164);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_163 > Var_164);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer Var_157 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Integer ArgY1_148 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          succeeded = (Var_157 < ArgY1_148);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_157 > ArgY1_148);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                        break;
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

void MR_CALL 
mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0(
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
      MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        succeeded = (Var_11 < ArgY1_7);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_11 > ArgY1_7);
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
mdbcomp__goal_path____Unify____containing_goal_0_0(
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Integer CastX_13;
      MR_Integer CastY_14;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        CastX_13 = (MR_Integer) (ArgX1_5);
        CastY_14 = (MR_Integer) (ArgY1_6);
        succeeded = (CastX_13 == CastY_14);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Integer ArgX1_11 = (MR_Integer) (ArgX1_5);
          MR_Integer ArgY1_12 = (MR_Integer) (ArgY1_6);

          succeeded = (ArgX1_11 == ArgY1_12);
        }
        if (succeeded)
          succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(ArgX2_7, ArgY2_8);
      }
    }
    return succeeded;
  }
}

MR_Box MR_CALL 
mdbcomp__goal_path__get_goal_attribute_det_2_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Box Attr_6;
    MR_Word TypeInfo_12_12;
    MR_ArrayPtr Array_4 = (MR_ArrayPtr) (HeadVar__1_1);
    MR_Integer Index_5 = (MR_Integer) (HeadVar__2_2);
    MR_Word MaybeAttr_7;
    MR_Box conv0_MaybeAttr_7;

    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_T_10));
    }
    conv0_MaybeAttr_7 = mercury__array__lookup_2_f_0(TypeInfo_12_12, (MR_ArrayPtr) (Array_4), Index_5);
    MaybeAttr_7 = ((MR_Word) (conv0_MaybeAttr_7));
    if ((MaybeAttr_7 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140mdbcomp.goal_path.get_goal_attribute_det\'/2", (MR_String) "Goal attribute array slot empty");
    else
      Attr_6 = (MR_hl_field(MR_mktag(1), MaybeAttr_7, (MR_Integer) 0));
    return Attr_6;
  }
}

void MR_CALL 
mdbcomp__goal_path__update_goal_attribute_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1,
  MR_Box Value_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_Word TypeInfo_14_14;
    MR_Integer Index_5 = (MR_Integer) (HeadVar__1_1);
    MR_ArrayPtr STATE_VARIABLE_Array_0_8 = (MR_ArrayPtr) (HeadVar__3_3);
    MR_ArrayPtr STATE_VARIABLE_Array_9;
    MR_Word Var_10;
    MR_ArrayPtr conv0_STATE_VARIABLE_Array_9;

    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = Value_6;
    }
    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    mercury__array__set_4_p_0(TypeInfo_14_14, Index_5, ((MR_Box) (Var_10)), (MR_ArrayPtr) (STATE_VARIABLE_Array_0_8), &conv0_STATE_VARIABLE_Array_9);
    STATE_VARIABLE_Array_9 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_Array_9);
    *HeadVar__4_4 = (MR_Word) (STATE_VARIABLE_Array_9);
  }
}

MR_Word MR_CALL 
mdbcomp__goal_path__create_goal_id_array_2_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Box Default_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word TypeInfo_12_12;
    MR_Integer LastGoalIdNum_4 = (MR_Integer) (HeadVar__1_1);
    MR_ArrayPtr Var_6;
    MR_Integer Var_7;
    MR_Word Var_9;
    MR_ArrayPtr conv0_Var_6;

    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_T_10));
    }
    Var_7 = (MR_Integer) ((MR_Unsigned) LastGoalIdNum_4 + (MR_Unsigned) 1);
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = Default_5;
    }
    conv0_Var_6 = mercury__array__init_2_f_0(TypeInfo_12_12, Var_7, ((MR_Box) (Var_9)));
    Var_6 = (MR_ArrayPtr) (conv0_Var_6);
    HeadVar__3_3 = (MR_Word) (Var_6);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mdbcomp__goal_path__create_goal_id_array_1_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word TypeInfo_10_10;
    MR_Integer LastGoalIdNum_3 = (MR_Integer) (HeadVar__1_1);
    MR_ArrayPtr Var_4;
    MR_Integer Var_5;
    MR_ArrayPtr conv0_Var_4;

    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_8));
    }
    Var_5 = (MR_Integer) ((MR_Unsigned) LastGoalIdNum_3 + (MR_Unsigned) 1);
    conv0_Var_4 = mercury__array__init_2_f_0(TypeInfo_10_10, Var_5, ((MR_Box) ((MR_Unsigned) 0U)));
    Var_4 = (MR_ArrayPtr) (conv0_Var_4);
    HeadVar__2_2 = (MR_Word) (Var_4);
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path__goal_id_inside_3_p_0(
  MR_Word ContainingGoalId_4,
  MR_Word GoalIdA_5,
  MR_Word GoalIdB_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    {
      MR_Integer CastX_14 = (MR_Integer) (GoalIdB_6);
      MR_Integer CastY_15 = (MR_Integer) (GoalIdA_5);

      succeeded = (CastX_14 == CastY_15);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer ArgX1_12 = (MR_Integer) (GoalIdB_6);
        MR_Integer ArgY1_13 = (MR_Integer) (GoalIdA_5);

        succeeded = (ArgX1_12 == ArgY1_13);
      }
    }
    if (!(succeeded))
    {
      MR_Word GoalContainingB_7;
      MR_Word ParentGoalIdB_8;
      MR_Box conv0_GoalContainingB_7;
      MR_Word next_value_of_GoalIdB_6;

      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0), ContainingGoalId_4, ((MR_Box) (GoalIdB_6)), &conv0_GoalContainingB_7);
      GoalContainingB_7 = ((MR_Word) (conv0_GoalContainingB_7));
      succeeded = (GoalContainingB_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ParentGoalIdB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalContainingB_7, (MR_Integer) 0))));
        // direct tailcall eliminated
        ;
        next_value_of_GoalIdB_6 = ParentGoalIdB_8;
        GoalIdB_6 = next_value_of_GoalIdB_6;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_bimap_1_f_0(
  MR_Word ContainingGoalMap_3)
{
  {
    MR_Word ReverseGoalPathBiMap_4;
    MR_Word ContainingGoalList_5;
    MR_Word Var_6;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0), ContainingGoalMap_3, &ContainingGoalList_5);
    Var_6 = mercury__bimap__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0));
    mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_p_0(ContainingGoalList_5, Var_6, &ReverseGoalPathBiMap_4);
    return ReverseGoalPathBiMap_4;
  }
}

static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ReverseGoalPathBiMap_0_2,
  MR_Word * STATE_VARIABLE_ReverseGoalPathBiMap_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ReverseGoalPathBiMap_3 = STATE_VARIABLE_ReverseGoalPathBiMap_0_2;
    else
    {
      MR_Word Head_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Head_7, (MR_Integer) 0))));
      MR_Word ContainingGoal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Head_7, (MR_Integer) 1))));
      MR_Word GoalReversePath_12;
      MR_Word STATE_VARIABLE_ReverseGoalPathBiMap_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ReverseGoalPathBiMap_0_2;

      if ((ContainingGoal_11 == (MR_Word) ((MR_Unsigned) 0U)))
        GoalReversePath_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ContainingGoalId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ContainingGoal_11, (MR_Integer) 0))));
        MR_Word Step_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ContainingGoal_11, (MR_Integer) 1))));
        MR_Word ContainingGoalReversePath_15;
        MR_Box conv0_ContainingGoalReversePath_15;

        mercury__bimap__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), STATE_VARIABLE_ReverseGoalPathBiMap_0_2, ((MR_Box) (ContainingGoalId_13)), &conv0_ContainingGoalReversePath_15);
        ContainingGoalReversePath_15 = ((MR_Word) (conv0_ContainingGoalReversePath_15));
        {
          GoalReversePath_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), GoalReversePath_12, 0) = ((MR_Box) (ContainingGoalReversePath_15));
          MR_hl_field(MR_mktag(1), GoalReversePath_12, 1) = ((MR_Box) (Step_14));
        }
      }
      mercury__bimap__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), ((MR_Box) (GoalId_10)), ((MR_Box) (GoalReversePath_12)), STATE_VARIABLE_ReverseGoalPathBiMap_0_2, &STATE_VARIABLE_ReverseGoalPathBiMap_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Tail_8;
      next_value_of_STATE_VARIABLE_ReverseGoalPathBiMap_0_2 = STATE_VARIABLE_ReverseGoalPathBiMap_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ReverseGoalPathBiMap_0_2 = next_value_of_STATE_VARIABLE_ReverseGoalPathBiMap_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_map_1_f_0(
  MR_Word ContainingGoalMap_3)
{
  {
    MR_Word ReverseGoalPathMap_4;
    MR_Word ContainingGoalList_5;
    MR_Word Var_6;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0), ContainingGoalMap_3, &ContainingGoalList_5);
    Var_6 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0));
    mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(ContainingGoalList_5, Var_6, &ReverseGoalPathMap_4);
    return ReverseGoalPathMap_4;
  }
}

static void MR_CALL 
mdbcomp__goal_path__create_forward_goal_path_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ForwardGoalPath_4;

    mdbcomp__goal_path__rgp_to_fgp_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_ForwardGoalPath_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_ForwardGoalPath_4));
  }
}

MR_Word MR_CALL 
mdbcomp__goal_path__create_forward_goal_path_map_1_f_0(
  MR_Word ContainingGoalMap_3)
{
  {
    MR_Word ForwardGoalPathMap_4;
    MR_Word ReverseGoalPathMap_5;
    MR_Word ContainingGoalList_14;
    MR_Word Var_15;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0), ContainingGoalMap_3, &ContainingGoalList_14);
    Var_15 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0));
    mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(ContainingGoalList_14, Var_15, &ReverseGoalPathMap_5);
    mercury__map__map_values_only_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path_scalar_common_1[8]), ReverseGoalPathMap_5, &ForwardGoalPathMap_4);
    return ForwardGoalPathMap_4;
  }
}

static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ReverseGoalPathMap_0_2,
  MR_Word * STATE_VARIABLE_ReverseGoalPathMap_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ReverseGoalPathMap_3 = STATE_VARIABLE_ReverseGoalPathMap_0_2;
    else
    {
      MR_Word Head_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Head_7, (MR_Integer) 0))));
      MR_Word ContainingGoal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Head_7, (MR_Integer) 1))));
      MR_Word GoalReversePath_12;
      MR_Word STATE_VARIABLE_ReverseGoalPathMap_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ReverseGoalPathMap_0_2;

      if ((ContainingGoal_11 == (MR_Word) ((MR_Unsigned) 0U)))
        GoalReversePath_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ContainingGoalId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ContainingGoal_11, (MR_Integer) 0))));
        MR_Word Step_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ContainingGoal_11, (MR_Integer) 1))));
        MR_Word ContainingGoalReversePath_15;
        MR_Box conv0_ContainingGoalReversePath_15;

        mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), STATE_VARIABLE_ReverseGoalPathMap_0_2, ((MR_Box) (ContainingGoalId_13)), &conv0_ContainingGoalReversePath_15);
        ContainingGoalReversePath_15 = ((MR_Word) (conv0_ContainingGoalReversePath_15));
        {
          GoalReversePath_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), GoalReversePath_12, 0) = ((MR_Box) (ContainingGoalReversePath_15));
          MR_hl_field(MR_mktag(1), GoalReversePath_12, 1) = ((MR_Box) (Step_14));
        }
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), ((MR_Box) (GoalId_10)), ((MR_Box) (GoalReversePath_12)), STATE_VARIABLE_ReverseGoalPathMap_0_2, &STATE_VARIABLE_ReverseGoalPathMap_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Tail_8;
      next_value_of_STATE_VARIABLE_ReverseGoalPathMap_0_2 = STATE_VARIABLE_ReverseGoalPathMap_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ReverseGoalPathMap_0_2 = next_value_of_STATE_VARIABLE_ReverseGoalPathMap_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(
  MR_Word ContainingGoalMap_4,
  MR_Word GoalId_5)
{
  {
    MR_Word GoalPath_6;
    MR_Word RevGoalPath_7;

    RevGoalPath_7 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ContainingGoalMap_4, GoalId_5);
    mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(RevGoalPath_7, (MR_Word) ((MR_Unsigned) 0U), &GoalPath_6);
    return GoalPath_6;
  }
}

MR_Word MR_CALL 
mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(
  MR_Word ContainingGoalMap_4,
  MR_Word GoalId_5)
{
  {
    MR_Word GoalPath_6;
    MR_Word ContainingGoal_7;
    MR_Box conv0_ContainingGoal_7;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0), ContainingGoalMap_4, ((MR_Box) (GoalId_5)), &conv0_ContainingGoal_7);
    ContainingGoal_7 = ((MR_Word) (conv0_ContainingGoal_7));
    if ((ContainingGoal_7 == (MR_Word) ((MR_Unsigned) 0U)))
      GoalPath_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ParentGoalId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ContainingGoal_7, (MR_Integer) 0))));
      MR_Word LastStep_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ContainingGoal_7, (MR_Integer) 1))));
      MR_Word EarlierPath_10;

      EarlierPath_10 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ContainingGoalMap_4, ParentGoalId_8);
      {
        GoalPath_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalPath_6, 0) = ((MR_Box) (EarlierPath_10));
        MR_hl_field(MR_mktag(1), GoalPath_6, 1) = ((MR_Box) (LastStep_9));
      }
    }
    return GoalPath_6;
  }
}

MR_Word MR_CALL 
mdbcomp__goal_path__goal_id_for_head_constraints_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) -1)));
}

MR_bool MR_CALL 
mdbcomp__goal_path__is_valid_goal_id_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Integer GoalIdNum_2 = (MR_Integer) (HeadVar__1_1);

    succeeded = (GoalIdNum_2 >= (MR_Integer) 0);
    return succeeded;
  }
}

MR_Word MR_CALL 
mdbcomp__goal_path__whole_body_goal_id_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) 0)));
}

MR_String MR_CALL 
mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(
  MR_Word GoalPath_3)
{
  {
    MR_String GoalPathStr_4;
    MR_Word RevStepStrs_5;
    MR_Word StepStrs_6;

    RevStepStrs_5 = mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(GoalPath_3);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStepStrs_5, &StepStrs_6);
    mercury__string__append_list_2_p_0(StepStrs_6, &GoalPathStr_4);
    return GoalPathStr_4;
  }
}

static MR_Word MR_CALL 
mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Steps_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Step_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Str_5;
      MR_Word Strs_6;

      switch (MR_tag((MR_Word) Step_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Step_4)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Str_5 = (MR_String) "\?;";
              break;
            case (MR_Integer) 1:
              Str_5 = (MR_String) "t;";
              break;
            case (MR_Integer) 2:
              Str_5 = (MR_String) "e;";
              break;
            case (MR_Integer) 3:
              Str_5 = (MR_String) "~;";
              break;
            case (MR_Integer) 4:
              Str_5 = (MR_String) "=;";
              break;
            case (MR_Integer) 5:
              Str_5 = (MR_String) "r;";
              break;
            case (MR_Integer) 6:
              Str_5 = (MR_String) "a;";
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer N_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Step_4, (MR_Integer) 0))));
            MR_String Var_9;
            MR_String Var_10;

            Var_10 = mercury__string__int_to_string_1_f_0(N_7);
            Var_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) ";");
            Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "c", Var_9);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Step_4, (MR_Integer) 0))));
            MR_String Var_14;
            MR_String Var_15;

            Var_15 = mercury__string__int_to_string_1_f_0(N_12);
            Var_14 = mercury__string__f_43_43_2_f_0(Var_15, (MR_String) ";");
            Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "d", Var_14);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Step_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Step_4, (MR_Integer) 2))));
                MR_Integer Var_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Step_4, (MR_Integer) 1))));

                if ((Var_42 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_String Var_31;
                  MR_String Var_32;

                  Var_32 = mercury__string__int_to_string_1_f_0(Var_43);
                  Var_31 = mercury__string__f_43_43_2_f_0(Var_32, (MR_String) "-na;");
                  Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", Var_31);
                }
                else
                {
                  MR_Integer M_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0))));
                  MR_String Var_21;
                  MR_String Var_22;
                  MR_String Var_23;
                  MR_String Var_25;
                  MR_String Var_26;

                  Var_22 = mercury__string__int_to_string_1_f_0(Var_43);
                  Var_26 = mercury__string__int_to_string_1_f_0(M_18);
                  Var_25 = mercury__string__f_43_43_2_f_0(Var_26, (MR_String) ";");
                  Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_25);
                  Var_21 = mercury__string__f_43_43_2_f_0(Var_22, Var_23);
                  Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", Var_21);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Step_4, (MR_Integer) 1))) & (MR_Integer) 1);

                switch (Var_41) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Str_5 = (MR_String) "q!;";
                    break;
                  case (MR_Integer) 1:
                    Str_5 = (MR_String) "q;";
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer N_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Step_4, (MR_Integer) 1))));
                MR_String Var_38;
                MR_String Var_39;

                Var_39 = mercury__string__int_to_string_1_f_0(N_36);
                Var_38 = mercury__string__f_43_43_2_f_0(Var_39, (MR_String) ";");
                Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "o", Var_38);
              }
              break;
          }
          break;
      }
      Strs_6 = mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(Steps_3);
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Str_5));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Strs_6));
      }
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
mdbcomp__goal_path__goal_path_to_string_1_f_0(
  MR_Word GoalPath_3)
{
  {
    MR_String GoalPathStr_4;
    MR_Word StepStrs_5;

    StepStrs_5 = mdbcomp__goal_path__goal_path_to_strings_1_f_0(GoalPath_3);
    mercury__string__append_list_2_p_0(StepStrs_5, &GoalPathStr_4);
    return GoalPathStr_4;
  }
}

static MR_Word MR_CALL 
mdbcomp__goal_path__goal_path_to_strings_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Step_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Steps_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Str_5;
      MR_Word Strs_6;

      switch (MR_tag((MR_Word) Step_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Step_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Str_5 = (MR_String) "\?;";
              break;
            case (MR_Integer) 1:
              Str_5 = (MR_String) "t;";
              break;
            case (MR_Integer) 2:
              Str_5 = (MR_String) "e;";
              break;
            case (MR_Integer) 3:
              Str_5 = (MR_String) "~;";
              break;
            case (MR_Integer) 4:
              Str_5 = (MR_String) "=;";
              break;
            case (MR_Integer) 5:
              Str_5 = (MR_String) "r;";
              break;
            case (MR_Integer) 6:
              Str_5 = (MR_String) "a;";
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer N_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Step_3, (MR_Integer) 0))));
            MR_String Var_9;
            MR_String Var_10;

            Var_10 = mercury__string__int_to_string_1_f_0(N_7);
            Var_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) ";");
            Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "c", Var_9);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Step_3, (MR_Integer) 0))));
            MR_String Var_14;
            MR_String Var_15;

            Var_15 = mercury__string__int_to_string_1_f_0(N_12);
            Var_14 = mercury__string__f_43_43_2_f_0(Var_15, (MR_String) ";");
            Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "d", Var_14);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Step_3, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Step_3, (MR_Integer) 2))));
                MR_Integer Var_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Step_3, (MR_Integer) 1))));

                if ((Var_42 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_String Var_31;
                  MR_String Var_32;

                  Var_32 = mercury__string__int_to_string_1_f_0(Var_43);
                  Var_31 = mercury__string__f_43_43_2_f_0(Var_32, (MR_String) "-na;");
                  Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", Var_31);
                }
                else
                {
                  MR_Integer M_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0))));
                  MR_String Var_21;
                  MR_String Var_22;
                  MR_String Var_23;
                  MR_String Var_25;
                  MR_String Var_26;

                  Var_22 = mercury__string__int_to_string_1_f_0(Var_43);
                  Var_26 = mercury__string__int_to_string_1_f_0(M_18);
                  Var_25 = mercury__string__f_43_43_2_f_0(Var_26, (MR_String) ";");
                  Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_25);
                  Var_21 = mercury__string__f_43_43_2_f_0(Var_22, Var_23);
                  Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", Var_21);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Step_3, (MR_Integer) 1))) & (MR_Integer) 1);

                switch (Var_41) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Str_5 = (MR_String) "q!;";
                    break;
                  case (MR_Integer) 1:
                    Str_5 = (MR_String) "q;";
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer N_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Step_3, (MR_Integer) 1))));
                MR_String Var_38;
                MR_String Var_39;

                Var_39 = mercury__string__int_to_string_1_f_0(N_36);
                Var_38 = mercury__string__f_43_43_2_f_0(Var_39, (MR_String) ";");
                Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "o", Var_38);
              }
              break;
          }
          break;
      }
      Strs_6 = mdbcomp__goal_path__goal_path_to_strings_1_f_0(Steps_4);
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Str_5));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Strs_6));
      }
    }
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path__is_goal_path_separator_1_p_0(
  MR_Char HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == (MR_Char) 59);

    return succeeded;
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(
  MR_String GoalPathStr_3,
  MR_Word * GoalPath_4)
{
  {
    MR_bool succeeded;
    MR_Word GoalPathPrime_5;
    MR_Word StepStrs_10;
    MR_Word RevStepStrs_11;

    StepStrs_10 = mercury__string__words_separator_2_f_0((MR_Word) (&mdbcomp__goal_path_scalar_common_1[7]), GoalPathStr_3);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StepStrs_10, &RevStepStrs_11);
    succeeded = mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(RevStepStrs_11, &GoalPathPrime_5);
    if (succeeded)
      *GoalPath_4 = GoalPathPrime_5;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.goal_path.rev_goal_path_from_string_det\'/2", (MR_String) "rev_goal_path_from_string failed");
        return;
      }
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(
  MR_String GoalPathStr_3,
  MR_Word * GoalPath_4)
{
  {
    MR_bool succeeded;
    MR_Word StepStrs_5;
    MR_Word RevStepStrs_6;

    StepStrs_5 = mercury__string__words_separator_2_f_0((MR_Word) (&mdbcomp__goal_path_scalar_common_1[6]), GoalPathStr_3);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StepStrs_5, &RevStepStrs_6);
    succeeded = mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(RevStepStrs_6, GoalPath_4);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String Str_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Strs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word HeadSteps_5;
      MR_Word TailStep_6;

      succeeded = mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(Strs_4, &HeadSteps_5);
      if (succeeded)
      {
        succeeded = mdbcomp__goal_path__goal_path_step_from_string_2_p_0(Str_3, &TailStep_6);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadSteps_5));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailStep_6));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_det_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__goal_path__goal_path_from_string_det_2_p_0(
  MR_String GoalPathStr_3,
  MR_Word * GoalPath_4)
{
  {
    MR_bool succeeded;
    MR_Word GoalPathPrime_5;
    MR_Word StepStrs_10;

    StepStrs_10 = mercury__string__words_separator_2_f_0((MR_Word) (&mdbcomp__goal_path_scalar_common_1[5]), GoalPathStr_3);
    succeeded = mdbcomp__goal_path__goal_path_from_strings_2_p_0(StepStrs_10, &GoalPathPrime_5);
    if (succeeded)
      *GoalPath_4 = GoalPathPrime_5;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.goal_path.goal_path_from_string_det\'/2", (MR_String) "goal_path_from_string failed");
        return;
      }
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_2_p_0(
  MR_String GoalPathStr_3,
  MR_Word * GoalPath_4)
{
  {
    MR_bool succeeded;
    MR_Word StepStrs_5;

    StepStrs_5 = mercury__string__words_separator_2_f_0((MR_Word) (&mdbcomp__goal_path_scalar_common_1[4]), GoalPathStr_3);
    succeeded = mdbcomp__goal_path__goal_path_from_strings_2_p_0(StepStrs_5, GoalPath_4);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_strings_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String Str_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Strs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word HeadStep_5;
      MR_Word LaterSteps_6;

      succeeded = mdbcomp__goal_path__goal_path_step_from_string_2_p_0(Str_3, &HeadStep_5);
      if (succeeded)
      {
        succeeded = mdbcomp__goal_path__goal_path_from_strings_2_p_0(Strs_4, &LaterSteps_6);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadStep_5));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterSteps_6));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_step_from_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__538__1_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_step_from_string_2_p_0(
  MR_String String_3,
  MR_Word * Step_4)
{
  {
    MR_bool succeeded;
    MR_Char First_5;
    MR_String Rest_6;

    succeeded = mercury__string__first_char_3_p_3(String_3, &First_5, &Rest_6);
    if (succeeded)
      switch (First_5) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Char) 61:
          {
            succeeded = (strcmp(Rest_6, (MR_String) "") == 0);
            if (succeeded)
            {
              *Step_4 = (MR_Word) ((MR_Unsigned) 16U);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Char) 63:
          {
            succeeded = (strcmp(Rest_6, (MR_String) "") == 0);
            if (succeeded)
            {
              *Step_4 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Char) 97:
          {
            succeeded = (strcmp(Rest_6, (MR_String) "") == 0);
            if (succeeded)
            {
              *Step_4 = (MR_Word) ((MR_Unsigned) 24U);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Char) 99:
          {
            MR_Integer N_8;

            succeeded = mercury__string__to_int_2_p_0(Rest_6, &N_8);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Step_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (N_8));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Char) 100:
          {
            MR_Integer N_10;

            succeeded = mercury__string__to_int_2_p_0(Rest_6, &N_10);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Step_4 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (N_10));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Char) 101:
          {
            succeeded = (strcmp(Rest_6, (MR_String) "") == 0);
            if (succeeded)
            {
              *Step_4 = (MR_Word) ((MR_Unsigned) 8U);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Char) 111:
          {
            MR_Integer N_25;

            succeeded = mercury__string__to_int_2_p_0(Rest_6, &N_25);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Step_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (N_25));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Char) 113:
          if ((strcmp(Rest_6, (MR_String) "") == 0))
          {
            *Step_4 = (MR_Word) (MR_mkword(MR_mktag(3), &mdbcomp__goal_path_scalar_common_2[0]));
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(Rest_6, (MR_String) "!") == 0))
          {
            *Step_4 = (MR_Word) (MR_mkword(MR_mktag(3), &mdbcomp__goal_path_scalar_common_2[1]));
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
          break;
        case (MR_Char) 114:
          {
            succeeded = (strcmp(Rest_6, (MR_String) "") == 0);
            if (succeeded)
            {
              *Step_4 = (MR_Word) ((MR_Unsigned) 20U);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Char) 115:
          {
            MR_Integer N_12;
            MR_Word MaybeM_13;
            MR_String NStr_14;
            MR_String MStr_15;
            MR_Word Var_17;
            MR_Word Var_20;
            MR_Word Var_21;

            Var_17 = mercury__string__words_separator_2_f_0((MR_Word) (&mdbcomp__goal_path_scalar_common_4[0]), Rest_6);
            succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NStr_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0))));
              Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 1))));
              succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MStr_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
                Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
                succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = mercury__string__to_int_2_p_0(NStr_14, &N_12);
                  if (succeeded)
                  {
                    succeeded = (strcmp(MStr_15, (MR_String) "na") == 0);
                    if (succeeded)
                    {
                      MaybeM_13 = (MR_Word) ((MR_Unsigned) 0U);
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Integer M_16;

                      succeeded = mercury__string__to_int_2_p_0(MStr_15, &M_16);
                      if (succeeded)
                      {
                        {
                          MaybeM_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), MaybeM_13, 0) = ((MR_Box) (M_16));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *Step_4 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (N_12));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeM_13));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Char) 116:
          {
            succeeded = (strcmp(Rest_6, (MR_String) "") == 0);
            if (succeeded)
            {
              *Step_4 = (MR_Word) ((MR_Unsigned) 4U);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Char) 126:
          {
            succeeded = (strcmp(Rest_6, (MR_String) "") == 0);
            if (succeeded)
            {
              *Step_4 = (MR_Word) ((MR_Unsigned) 12U);
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Steps0_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Step0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Steps_5;
    MR_Word Step_6;

    switch (MR_tag((MR_Word) Step0_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Step0_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Step_6 = Step0_4;
            break;
          case (MR_Integer) 1:
            Step_6 = Step0_4;
            break;
          case (MR_Integer) 2:
            Step_6 = Step0_4;
            break;
          case (MR_Integer) 3:
            Step_6 = Step0_4;
            break;
          case (MR_Integer) 4:
            Step_6 = Step0_4;
            break;
          case (MR_Integer) 5:
            Step_6 = Step0_4;
            break;
          case (MR_Integer) 6:
            Step_6 = Step0_4;
            break;
        }
        break;
      case (MR_Integer) 1:
        Step_6 = Step0_4;
        break;
      case (MR_Integer) 2:
        Step_6 = Step0_4;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Step0_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer N_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Step0_4, (MR_Integer) 1))));

              {
                Step_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Step_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Step_6, 1) = ((MR_Box) (N_14));
                MR_hl_field(MR_mktag(3), Step_6, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            Step_6 = Step0_4;
            break;
          case (MR_Integer) 2:
            Step_6 = Step0_4;
            break;
        }
        break;
    }
    mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(Steps0_3, &Steps_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Steps_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Step_6));
    }
  }
}

void MR_CALL 
mdbcomp__goal_path__fgp_to_rgp_2_p_0(
  MR_Word ForwardGoalPath_3,
  MR_Word * ReverseGoalPath_4)
{
  mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(ForwardGoalPath_3, (MR_Word) ((MR_Unsigned) 0U), ReverseGoalPath_4);
}

void MR_CALL 
mdbcomp__goal_path__rgp_to_fgp_2_p_0(
  MR_Word ReverseGoalPath_3,
  MR_Word * ForwardGoalPath_4)
{
  mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(ReverseGoalPath_3, (MR_Word) ((MR_Unsigned) 0U), ForwardGoalPath_4);
}

MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_inside_relative_3_p_0(
  MR_Word RevPathA_4,
  MR_Word RevPathB_5,
  MR_Word * RevRelativePath_6)
{
  {
    MR_bool succeeded;
    MR_Word PathA_7;
    MR_Word PathB_8;
    MR_Word RelativePath_9;
    MR_Word Var_18;

    mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(RevPathA_4, (MR_Word) ((MR_Unsigned) 0U), &PathA_7);
    mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(RevPathB_5, (MR_Word) ((MR_Unsigned) 0U), &PathB_8);
    succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(PathA_7, PathB_8, &RelativePath_9);
    if (succeeded)
    {
      Var_18 = (MR_Word) ((MR_Unsigned) 0U);
      mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(RelativePath_9, Var_18, RevRelativePath_6);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_inside_2_p_0(
  MR_Word RevPathA_3,
  MR_Word RevPathB_4)
{
  {
    MR_bool succeeded;
    MR_Word PathA_9;
    MR_Word PathB_10;
    MR_Word RelativePath_11;
    MR_Word Var_20;
    MR_Word Var_5;

    mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(RevPathA_3, (MR_Word) ((MR_Unsigned) 0U), &PathA_9);
    mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(RevPathB_4, (MR_Word) ((MR_Unsigned) 0U), &PathB_10);
    succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(PathA_9, PathB_10, &RelativePath_11);
    if (succeeded)
    {
      Var_20 = (MR_Word) ((MR_Unsigned) 0U);
      mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(RelativePath_11, Var_20, &Var_5);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ReverseGoalPath_0_2,
  MR_Word * STATE_VARIABLE_ReverseGoalPath_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ReverseGoalPath_3 = STATE_VARIABLE_ReverseGoalPath_0_2;
    else
    {
      MR_Word FirstStep_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word LaterSteps_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ReverseGoalPath_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ReverseGoalPath_0_2;

      {
        STATE_VARIABLE_ReverseGoalPath_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ReverseGoalPath_12_12, 0) = ((MR_Box) (STATE_VARIABLE_ReverseGoalPath_0_2));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ReverseGoalPath_12_12, 1) = ((MR_Box) (FirstStep_7));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = LaterSteps_8;
      next_value_of_STATE_VARIABLE_ReverseGoalPath_0_2 = STATE_VARIABLE_ReverseGoalPath_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ReverseGoalPath_0_2 = next_value_of_STATE_VARIABLE_ReverseGoalPath_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ForwardGoalPath_0_2,
  MR_Word * STATE_VARIABLE_ForwardGoalPath_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ForwardGoalPath_3 = STATE_VARIABLE_ForwardGoalPath_0_2;
    else
    {
      MR_Word EarlierSteps_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word LastStep_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ForwardGoalPath_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ForwardGoalPath_0_2;

      {
        STATE_VARIABLE_ForwardGoalPath_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForwardGoalPath_12_12, 0) = ((MR_Box) (LastStep_8));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ForwardGoalPath_12_12, 1) = ((MR_Box) (STATE_VARIABLE_ForwardGoalPath_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = EarlierSteps_7;
      next_value_of_STATE_VARIABLE_ForwardGoalPath_0_2 = STATE_VARIABLE_ForwardGoalPath_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ForwardGoalPath_0_2 = next_value_of_STATE_VARIABLE_ForwardGoalPath_0_2;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_inside_2_p_0(
  MR_Word PathA_3,
  MR_Word PathB_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;

    succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(PathA_3, PathB_4, &Var_5);
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_inside_relative_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = HeadVar__2_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word StepA_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PathA_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word StepB_7;
      MR_Word PathB_8;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        StepB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        PathB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(StepA_5, StepB_7);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = PathA_6;
          next_value_of_HeadVar__2_2 = PathB_8;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_step_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_29 == CastY_30);
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
                MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_12 == CastX_11);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_14 == CastX_13);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_16 == CastX_15);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_18 == CastX_17);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_22 == CastX_21);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_24 == CastX_23);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_26 == CastX_25);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_8;
                MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (ArgX1_7 == ArgY1_8);
                  if (succeeded)
                    succeeded = mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(ArgX2_9, ArgY2_10);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word ArgY1_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  succeeded = (ArgX1_19 == ArgY1_20);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ArgX1_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_28;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_27 == ArgY1_28);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(
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
      MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_get_last_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * LastStep_4)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
      *LastStep_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * GoalPath_4,
  MR_Word * LastStep_5)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      *GoalPath_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      *LastStep_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_get_first_2_p_0(
  MR_Word GoalPath_3,
  MR_Word * FirstStep_4)
{
  {
    MR_bool succeeded = (GoalPath_3 != (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
      *FirstStep_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalPath_3, (MR_Integer) 0))));
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_remove_first_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * OtherSteps_5,
  MR_Word * FirstStep_4)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      *FirstStep_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      *OtherSteps_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_get_last_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * LastStep_5)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word HeadStep_3;
    MR_Word TailSteps_4;

    if (succeeded)
    {
      HeadStep_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      TailSteps_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      mdbcomp__goal_path__goal_path_last_loop_3_p_0(HeadStep_3, TailSteps_4, LastStep_5);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path__goal_path_last_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = HeadVar__1_1;
    else
    {
      MR_Word TailHead_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailTail_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1 = TailHead_6;
      MR_Word next_value_of_HeadVar__2_2 = TailTail_7;

      // direct tailcall eliminated
      ;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_remove_last_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AllButLastGoalPath_6,
  MR_Word * LastStep_7)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word HeadStep_4;
    MR_Word TailSteps_5;

    if (succeeded)
    {
      HeadStep_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      TailSteps_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(HeadStep_4, TailSteps_5, AllButLastGoalPath_6, LastStep_7);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(
  MR_Word Head_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = Head_1;
  }
  else
  {
    MR_Word TailHead_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TailTail_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word AllButLastGoalPath0_11;

    mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(TailHead_7, TailTail_8, &AllButLastGoalPath0_11, HeadVar__4_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Head_1));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (AllButLastGoalPath0_11));
    }
  }
}

MR_Word MR_CALL 
mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(
  MR_Word GoalPath0_4,
  MR_Word NewStep_5)
{
  {
    MR_Word GoalPath_6;

    {
      GoalPath_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalPath_6, 0) = ((MR_Box) (GoalPath0_4));
      MR_hl_field(MR_mktag(1), GoalPath_6, 1) = ((MR_Box) (NewStep_5));
    }
    return GoalPath_6;
  }
}

MR_Word MR_CALL 
mdbcomp__goal_path__goal_path_add_at_end_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word NewStep_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (NewStep_2));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word OldStep_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word GoalPath0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalPath_9;

      GoalPath_9 = mdbcomp__goal_path__goal_path_add_at_end_2_f_0(GoalPath0_7, NewStep_2);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (OldStep_6));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (GoalPath_9));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__goal_path____Unify____containing_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__goal_path____Compare____containing_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__goal_path____Unify____containing_goal_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__goal_path____Compare____containing_goal_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____forward_goal_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path____Compare____forward_goal_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__goal_path____Compare____forward_goal_path_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_attr_array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__goal_path____Unify____goal_attr_array_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path____Compare____goal_attr_array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__goal_path____Compare____goal_attr_array_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_forward_path_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__goal_path____Unify____goal_forward_path_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path____Compare____goal_forward_path_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__goal_path____Compare____goal_forward_path_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__goal_path____Unify____goal_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path____Compare____goal_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__goal_path____Compare____goal_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_step_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_step_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__goal_path____Compare____goal_path_step_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__goal_path____Unify____goal_path_string_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__goal_path____Compare____goal_path_string_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_cut_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__goal_path____Unify____maybe_cut_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_cut_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__goal_path____Compare____maybe_cut_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____reverse_goal_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdbcomp__goal_path____Compare____reverse_goal_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__mdbcomp__goal_path__init(void)
{
}

void mercury__mdbcomp__goal_path__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_map_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_forward_path_map_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_string_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_reverse_path_bimap_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_reverse_path_map_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_cut_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0);
}

void mercury__mdbcomp__goal_path__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdbcomp__goal_path__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdbcomp.goal_path.
