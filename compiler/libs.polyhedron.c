/*
** Automatically generated from `polyhedron.m'
** by the Mercury compiler,
** version rotd-2022-04-18
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


// :- module libs.polyhedron.
// :- implementation.

/*
INIT mercury__libs__polyhedron__init
ENDINIT
*/

#include "libs.polyhedron.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "varset.mih"
#include "libs.lp_rational.mih"
#include "libs.rat.mih"




static const MR_FA_TypeInfo_Struct1 libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_libs__lp_rational__type_ctor_info_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__polyhedron__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 libs__polyhedron__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

static const MR_FA_TypeInfo_Struct1 libs__polyhedron__varset__ti_varset_1term__type_ctor_info_generic_0;

static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_constr_info_0_0[2];

static const MR_ConstString libs__polyhedron__libs__polyhedron__field_names_constr_info_0_0[2];

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_constr_info_0_0;

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_constr_info_0_0[1];

static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_constr_info_0[1];

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_constr_info_0[1];

static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_constr_info_0[1];

static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_convex_hull_result_0_0[1];

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_0;

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_1;

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_0[1];

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_1[1];

static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_convex_hull_result_0[2];

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_convex_hull_result_0[2];

static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_convex_hull_result_0[2];

static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1libs__polyhedron__type_ctor_info_polyhedron_0;

static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_polyhedra_info_0_0[3];

static const MR_ConstString libs__polyhedron__libs__polyhedron__field_names_polyhedra_info_0_0[3];

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedra_info_0_0;

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedra_info_0_0[1];

static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedra_info_0[1];

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_polyhedra_info_0[1];

static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_polyhedra_info_0[1];

static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1libs__lp_rational__type_ctor_info_constraint_0;

static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_polyhedron_0_0[1];

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_0;

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_1;

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_0[1];

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_1[1];

static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedron_0[2];

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_polyhedron_0[2];

static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_polyhedron_0[2];

static MR_Word MR_CALL 
libs__polyhedron__IntroducedFrom__func__convex_hull__354__1_2_f_0(
  MR_Word LambdaHeadVar__1_39,
  MR_Word LambdaHeadVar__2_40);

static MR_Word MR_CALL 
libs__polyhedron__IntroducedFrom__func__project_all__537__1_3_f_0(
  MR_Word VarSet_5,
  MR_Word Locals_6,
  MR_Word LambdaHeadVar__1_15);

static void MR_CALL 
libs__polyhedron____Compare____var_maps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_maps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__polyhedron____Compare____var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__polyhedron____Compare____sigma_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__polyhedron____Compare____sigma_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__polyhedron____Compare____polyhedra_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__polyhedron____Compare____convex_hull_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____convex_hull_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__polyhedron____Compare____constr_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____constr_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
libs__polyhedron__make_last_terms_4_p_0(
  MR_Word OriginalVar_5,
  MR_Word VarMap_6,
  MR_Word STATE_VARIABLE_Terms_0_9,
  MR_Word * STATE_VARIABLE_Terms_10);

static MR_bool MR_CALL 
libs__polyhedron__make_last_constraint_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron__make_last_constraint_2_f_0(
  MR_Word VarMaps_4,
  MR_Word OriginalVar_5,
  MR_Word * Constraint_6);

static MR_Word MR_CALL 
libs__polyhedron__get_keys_from_map_2_f_0(
  MR_Word Map_4,
  MR_Word KeySet_5);

static void MR_CALL 
libs__polyhedron__change_var_6_p_0(
  MR_Word STATE_VARIABLE_Term_0_13,
  MR_Word * STATE_VARIABLE_Term_14,
  MR_Word STATE_VARIABLE_VarMap_0_15,
  MR_Word * STATE_VARIABLE_VarMap_16,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18);

static void MR_CALL 
libs__polyhedron__transform_constraint_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
libs__polyhedron__transform_constraint_7_p_0(
  MR_Word Sigma_8,
  MR_Word STATE_VARIABLE_Constraint_0_15,
  MR_Word * STATE_VARIABLE_Constraint_16,
  MR_Word STATE_VARIABLE_VarMap_0_17,
  MR_Word * STATE_VARIABLE_VarMap_18,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20);

static void MR_CALL 
libs__polyhedron__transform_polyhedron_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
libs__polyhedron__transform_polyhedron_5_p_0(
  MR_Word Poly_6,
  MR_Word Polys0_7,
  MR_Word * Polys_8,
  MR_Word STATE_VARIABLE_PolyInfo_0_16,
  MR_Word * STATE_VARIABLE_PolyInfo_17);

static MR_Box MR_CALL 
libs__polyhedron__project_all_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__polyhedron__widen_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__polyhedron__convex_hull_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
libs__polyhedron__convex_hull_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word MaybeMaxSize_3,
  MR_Word VarSet0_4);

static MR_bool MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0(
  MR_Word STATE_VARIABLE_Constraints_0_8,
  MR_Word VarMaps_5);

static MR_bool MR_CALL 
libs__polyhedron__is_universe_1_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__polyhedron____Unify____constr_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____constr_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____convex_hull_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____convex_hull_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____polyhedra_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____polyhedra_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedron_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____polyhedron_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____sigma_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____sigma_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____var_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__polyhedron_scalar_common_1[8][2];

static /* final */ const MR_Box libs__polyhedron_scalar_common_2[9][3];

static /* final */ const MR_Box libs__polyhedron_scalar_common_3[1][1];

static /* final */ const MR_Box libs__polyhedron_scalar_common_4[1][4];

static /* final */ const MR_Box libs__polyhedron_scalar_common_5[4][6];

static /* final */ const MR_Box libs__polyhedron_scalar_common_6[1][8];

static /* final */ const MR_Box libs__polyhedron_scalar_common_7[2][5];

static /* final */ const MR_Box libs__polyhedron_scalar_common_8[2][7];

static /* final */ const MR_Box libs__polyhedron_scalar_common_9[1][10];

static /* final */ const MR_Box libs__polyhedron_scalar_common_10[1][9];




static /* final */ const MR_Box libs__polyhedron_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__polyhedron_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__polyhedron_scalar_common_1[1]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__polyhedron_scalar_common_2[1]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__polyhedron_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_2[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__polyhedron_scalar_common_1[1])),
    ((MR_Box) (&libs__polyhedron_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__polyhedron_scalar_common_1[1])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_4[0])),
    ((MR_Box) (libs__polyhedron__is_universe_1_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_5[0])),
    ((MR_Box) (libs__polyhedron__add_last_constraints_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_6[0])),
    ((MR_Box) (libs__polyhedron__convex_hull_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_7[0])),
    ((MR_Box) (libs__polyhedron__convex_hull_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_7[1])),
    ((MR_Box) (libs__polyhedron__convex_hull_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_5[2])),
    ((MR_Box) (libs__polyhedron__convex_hull_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_10[0])),
    ((MR_Box) (libs__polyhedron__transform_constraint_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_3[1][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_4[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_5[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedra_info_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedra_info_0))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_7[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__polyhedron__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__polyhedron__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_8[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__polyhedron__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_9[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__polyhedron__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_10[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__polyhedron__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&libs__polyhedron__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct2 libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_TypeInfo) (&libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_libs__lp_rational__type_ctor_info_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__polyhedron__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&libs__rat__libs__rat__type_ctor_info_rat_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct2 libs__polyhedron__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_TypeInfo) (&libs__rat__libs__rat__type_ctor_info_rat_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&libs__polyhedron__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0)
  }
};

static const MR_FA_TypeInfo_Struct1 libs__polyhedron__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_constr_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&libs__polyhedron__varset__ti_varset_1term__type_ctor_info_generic_0)
};

static const MR_ConstString libs__polyhedron__libs__polyhedron__field_names_constr_info_0_0[2] = {
  (MR_String) "var_map",
  (MR_String) "constr_varset"
};

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_constr_info_0_0 = {
  (MR_String) "constr_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__polyhedron__libs__polyhedron__field_types_constr_info_0_0,
  libs__polyhedron__libs__polyhedron__field_names_constr_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_constr_info_0_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_constr_info_0_0
};

static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_constr_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_constr_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_constr_info_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_constr_info_0_0
};

static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_constr_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_constr_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__polyhedron____Unify____constr_info_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____constr_info_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "constr_info",
  { libs__polyhedron__libs__polyhedron__du_name_ordered_constr_info_0 },
  { libs__polyhedron__libs__polyhedron__du_ptag_ordered_constr_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__polyhedron__libs__polyhedron__functor_number_map_constr_info_0,

};

static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_convex_hull_result_0_0[1] = {
  (MR_PseudoTypeInfo) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)
};

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  libs__polyhedron__libs__polyhedron__field_types_convex_hull_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_1 = {
  (MR_String) "aborted",
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

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_1
};

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_1[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_0
};

static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_convex_hull_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_convex_hull_result_0[2] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_1,
  &libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_0
};

static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_convex_hull_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_convex_hull_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__polyhedron____Unify____convex_hull_result_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____convex_hull_result_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "convex_hull_result",
  { libs__polyhedron__libs__polyhedron__du_name_ordered_convex_hull_result_0 },
  { libs__polyhedron__libs__polyhedron__du_ptag_ordered_convex_hull_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__polyhedron__libs__polyhedron__functor_number_map_convex_hull_result_0,

};

static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1libs__polyhedron__type_ctor_info_polyhedron_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)
  }
};

const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedra_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__polyhedron____Unify____polyhedra_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____polyhedra_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "polyhedra",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__polyhedron__list__ti_list_1libs__polyhedron__type_ctor_info_polyhedron_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_polyhedra_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&libs__polyhedron__list__ti_list_1tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&libs__polyhedron__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&libs__polyhedron__varset__ti_varset_1term__type_ctor_info_generic_0)
};

static const MR_ConstString libs__polyhedron__libs__polyhedron__field_names_polyhedra_info_0_0[3] = {
  (MR_String) "var_maps",
  (MR_String) "sigmas",
  (MR_String) "poly_varset"
};

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedra_info_0_0 = {
  (MR_String) "polyhedra_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__polyhedron__libs__polyhedron__field_types_polyhedra_info_0_0,
  libs__polyhedron__libs__polyhedron__field_names_polyhedra_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedra_info_0_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedra_info_0_0
};

static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedra_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedra_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_polyhedra_info_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedra_info_0_0
};

static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_polyhedra_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedra_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__polyhedron____Unify____polyhedra_info_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____polyhedra_info_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "polyhedra_info",
  { libs__polyhedron__libs__polyhedron__du_name_ordered_polyhedra_info_0 },
  { libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedra_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__polyhedron__libs__polyhedron__functor_number_map_polyhedra_info_0,

};

static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1libs__lp_rational__type_ctor_info_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0)
  }
};

static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_polyhedron_0_0[1] = {
  (MR_PseudoTypeInfo) (&libs__polyhedron__list__ti_list_1libs__lp_rational__type_ctor_info_constraint_0)
};

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_0 = {
  (MR_String) "eqns",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  libs__polyhedron__libs__polyhedron__field_types_polyhedron_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_1 = {
  (MR_String) "empty_poly",
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

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_1
};

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_1[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_0
};

static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedron_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_polyhedron_0[2] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_1,
  &libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_0
};

static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_polyhedron_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__polyhedron____Unify____polyhedron_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____polyhedron_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "polyhedron",
  { libs__polyhedron__libs__polyhedron__du_name_ordered_polyhedron_0 },
  { libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedron_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__polyhedron__libs__polyhedron__functor_number_map_polyhedron_0,

};

const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_sigma_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__polyhedron____Unify____sigma_var_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____sigma_var_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "sigma_var",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_sigma_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__polyhedron____Unify____sigma_vars_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____sigma_vars_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "sigma_vars",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__polyhedron__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__polyhedron____Unify____var_map_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____var_map_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "var_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_var_maps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__polyhedron____Unify____var_maps_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____var_maps_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "var_maps",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__polyhedron__list__ti_list_1tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Word MR_CALL 
libs__polyhedron__IntroducedFrom__func__convex_hull__354__1_2_f_0(
  MR_Word LambdaHeadVar__1_39,
  MR_Word LambdaHeadVar__2_40)
{
  MR_Word LambdaHeadVar__3_41;
  MR_Word Var_42;

  Var_42 = mercury__map__values_1_f_0((MR_Word) (&libs__polyhedron_scalar_common_1[1]), (MR_Word) (&libs__polyhedron_scalar_common_1[1]), LambdaHeadVar__1_39);
  LambdaHeadVar__3_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__polyhedron_scalar_common_1[1]), LambdaHeadVar__2_40, Var_42);
  return LambdaHeadVar__3_41;
}

static MR_Word MR_CALL 
libs__polyhedron__IntroducedFrom__func__project_all__537__1_3_f_0(
  MR_Word VarSet_5,
  MR_Word Locals_6,
  MR_Word LambdaHeadVar__1_15)
{
  MR_Word LambdaHeadVar__2_16;

  if ((LambdaHeadVar__1_15 == (MR_Word) ((MR_Unsigned) 0U)))
    LambdaHeadVar__2_16 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Constraints0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LambdaHeadVar__1_15, (MR_Integer) 0))));
    MR_Word ProjectionResult_11;

    libs__lp_rational__project_constraints_4_p_0(VarSet_5, Locals_6, Constraints0_10, &ProjectionResult_11);
    switch (MR_tag((MR_Word) ProjectionResult_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ProjectionResult_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            LambdaHeadVar__2_16 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            mercury__require__unexpected_2_p_0((MR_String) "function \140libs.polyhedron.project_all\'/3", (MR_String) "abort from project");
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Constraints1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProjectionResult_11, (MR_Integer) 0))));
          MR_Word Constraints_13;

          libs__lp_rational__restore_equalities_2_p_0(Constraints1_12, &Constraints_13);
          {
            LambdaHeadVar__2_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LambdaHeadVar__2_16, 0) = ((MR_Box) (Constraints_13));
          }
        }
        break;
    }
  }
  return LambdaHeadVar__2_16;
}

static void MR_CALL 
libs__polyhedron____Compare____var_maps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_maps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
libs__polyhedron____Compare____var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__polyhedron_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__polyhedron_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
libs__polyhedron____Compare____sigma_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
libs__polyhedron____Compare____sigma_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
libs__polyhedron____Compare____polyhedra_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_info_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&libs__polyhedron_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&libs__polyhedron_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
libs__polyhedron____Compare____polyhedra_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
libs__polyhedron____Compare____convex_hull_result_0_0(
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
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      libs__polyhedron____Compare____polyhedron_0_0(HeadVar__1_1, Var_11, ArgY1_5);
    }
  }
}

void MR_CALL 
libs__polyhedron____Compare____polyhedron_0_0(
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
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_5)));
    }
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____convex_hull_result_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      succeeded = libs__polyhedron____Unify____polyhedron_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedron_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&libs__polyhedron_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__polyhedron____Compare____constr_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__polyhedron_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____constr_info_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__polyhedron_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&libs__polyhedron_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
libs__polyhedron__make_last_terms_4_p_0(
  MR_Word OriginalVar_5,
  MR_Word VarMap_6,
  MR_Word STATE_VARIABLE_Terms_0_9,
  MR_Word * STATE_VARIABLE_Terms_10)
{
  MR_bool succeeded;
  MR_Word TypeInfo_16_16;
  MR_Word NewVar_8;
  MR_Word Var_11;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Box conv0_NewVar_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[1]), (MR_Word) (&libs__polyhedron_scalar_common_1[1]), VarMap_6, ((MR_Box) (OriginalVar_5)), &conv0_NewVar_8);
  if (succeeded)
  {
    NewVar_8 = ((MR_Word) (conv0_NewVar_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    Var_14 = libs__rat__one_0_f_0();
    Var_13 = libs__rat__f_minus_1_f_0(Var_14);
    TypeInfo_16_16 = (MR_Word) (&libs__polyhedron_scalar_common_2[1]);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (NewVar_8));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Var_13));
    }
    mercury__list__cons_3_p_0(TypeInfo_16_16, ((MR_Box) (Var_11)), STATE_VARIABLE_Terms_0_9, STATE_VARIABLE_Terms_10);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
libs__polyhedron__make_last_constraint_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Terms_10;

  succeeded = libs__polyhedron__make_last_terms_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Terms_10);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Terms_10));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
libs__polyhedron__make_last_constraint_2_f_0(
  MR_Word VarMaps_4,
  MR_Word OriginalVar_5,
  MR_Word * Constraint_6)
{
  MR_bool succeeded;
  MR_Word LastTerms_7;
  MR_Word AllTerms_8;
  MR_Word Var_9;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Box conv1_LastTerms_7;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&libs__polyhedron_scalar_common_8[1]));
    MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (libs__polyhedron__make_last_constraint_2_f_0_1));
    MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (OriginalVar_5));
  }
  succeeded = mercury__list__foldl_4_p_3((MR_Word) (&libs__polyhedron_scalar_common_2[0]), (MR_Word) (&libs__polyhedron_scalar_common_1[5]), Var_9, VarMaps_4, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_LastTerms_7);
  if (succeeded)
  {
    LastTerms_7 = ((MR_Word) (conv1_LastTerms_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    Var_12 = libs__rat__one_0_f_0();
    Var_13 = (MR_Integer) 1;
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (OriginalVar_5));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      AllTerms_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), AllTerms_8, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), AllTerms_8, 1) = ((MR_Box) (LastTerms_7));
    }
    Var_14 = libs__rat__zero_0_f_0();
    *Constraint_6 = libs__lp_rational__construct_constraint_3_f_0(AllTerms_8, Var_13, Var_14);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Word MR_CALL 
libs__polyhedron__get_keys_from_map_2_f_0(
  MR_Word Map_4,
  MR_Word KeySet_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  Var_6 = mercury__map__keys_1_f_0((MR_Word) (&libs__polyhedron_scalar_common_1[1]), (MR_Word) (&libs__polyhedron_scalar_common_1[1]), Map_4);
  HeadVar__3_3 = mercury__set__insert_list_2_f_0((MR_Word) (&libs__polyhedron_scalar_common_1[1]), KeySet_5, Var_6);
  return HeadVar__3_3;
}

static void MR_CALL 
libs__polyhedron__change_var_6_p_0(
  MR_Word STATE_VARIABLE_Term_0_13,
  MR_Word * STATE_VARIABLE_Term_14,
  MR_Word STATE_VARIABLE_VarMap_0_15,
  MR_Word * STATE_VARIABLE_VarMap_16,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18)
{
  MR_bool succeeded;
  MR_Word Coefficient_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term_0_13, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_Var_19_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term_0_13, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_Var_23_23;
  MR_Word STATE_VARIABLE_Var_20_20;
  MR_Box conv0_STATE_VARIABLE_Var_20_20;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[1]), (MR_Word) (&libs__polyhedron_scalar_common_1[1]), STATE_VARIABLE_VarMap_0_15, ((MR_Box) (STATE_VARIABLE_Var_19_19)), &conv0_STATE_VARIABLE_Var_20_20);
  if (succeeded)
  {
    STATE_VARIABLE_Var_20_20 = ((MR_Word) (conv0_STATE_VARIABLE_Var_20_20));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    STATE_VARIABLE_Var_23_23 = STATE_VARIABLE_Var_20_20;
    *STATE_VARIABLE_VarSet_18 = STATE_VARIABLE_VarSet_0_17;
    *STATE_VARIABLE_VarMap_16 = STATE_VARIABLE_VarMap_0_15;
  }
  else
  {
    mercury__varset__new_var_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), &STATE_VARIABLE_Var_23_23, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
    mercury__map__det_insert_4_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[1]), (MR_Word) (&libs__polyhedron_scalar_common_1[1]), ((MR_Box) (STATE_VARIABLE_Var_19_19)), ((MR_Box) (STATE_VARIABLE_Var_23_23)), STATE_VARIABLE_VarMap_0_15, STATE_VARIABLE_VarMap_16);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Term_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Var_23_23));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Coefficient_11));
  }
}

static void MR_CALL 
libs__polyhedron__transform_constraint_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Term_14;
  MR_Word conv1_STATE_VARIABLE_VarMap_16;
  MR_Word conv0_STATE_VARIABLE_VarSet_18;

  libs__polyhedron__change_var_6_p_0(((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Term_14, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_VarMap_16, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_VarSet_18);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Term_14));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_VarMap_16));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_VarSet_18));
}

static void MR_CALL 
libs__polyhedron__transform_constraint_7_p_0(
  MR_Word Sigma_8,
  MR_Word STATE_VARIABLE_Constraint_0_15,
  MR_Word * STATE_VARIABLE_Constraint_16,
  MR_Word STATE_VARIABLE_VarMap_0_17,
  MR_Word * STATE_VARIABLE_VarMap_18,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20)
{
  MR_Word Op_13;
  MR_Word Const_14;
  MR_Word STATE_VARIABLE_Terms_21_21;
  MR_Word STATE_VARIABLE_Terms_23_23;
  MR_Word Var_26;
  MR_Word STATE_VARIABLE_Terms_27_27;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Box conv4_STATE_VARIABLE_VarMap_18;
  MR_Box conv3_STATE_VARIABLE_VarSet_20;

  libs__lp_rational__deconstruct_constraint_4_p_0(STATE_VARIABLE_Constraint_0_15, &STATE_VARIABLE_Terms_21_21, &Op_13, &Const_14);
  mercury__list__map_foldl2_7_p_0((MR_Word) (&libs__polyhedron_scalar_common_2[1]), (MR_Word) (&libs__polyhedron_scalar_common_2[1]), (MR_Word) (&libs__polyhedron_scalar_common_2[0]), (MR_Word) (&libs__polyhedron_scalar_common_1[3]), (MR_Word) (&libs__polyhedron_scalar_common_2[8]), STATE_VARIABLE_Terms_21_21, &STATE_VARIABLE_Terms_23_23, ((MR_Box) (STATE_VARIABLE_VarMap_0_17)), &conv4_STATE_VARIABLE_VarMap_18, ((MR_Box) (STATE_VARIABLE_VarSet_0_19)), &conv3_STATE_VARIABLE_VarSet_20);
  *STATE_VARIABLE_VarMap_18 = ((MR_Word) (conv4_STATE_VARIABLE_VarMap_18));
  *STATE_VARIABLE_VarSet_20 = ((MR_Word) (conv3_STATE_VARIABLE_VarSet_20));
  Var_28 = libs__rat__f_minus_1_f_0(Const_14);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (Sigma_8));
    MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (Var_28));
  }
  mercury__list__cons_3_p_0((MR_Word) (&libs__polyhedron_scalar_common_2[1]), ((MR_Box) (Var_26)), STATE_VARIABLE_Terms_23_23, &STATE_VARIABLE_Terms_27_27);
  Var_30 = libs__rat__zero_0_f_0();
  *STATE_VARIABLE_Constraint_16 = libs__lp_rational__construct_constraint_3_f_0(STATE_VARIABLE_Terms_27_27, Op_13, Var_30);
}

static void MR_CALL 
libs__polyhedron__transform_polyhedron_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Constraint_16;
  MR_Word conv1_STATE_VARIABLE_VarMap_18;
  MR_Word conv0_STATE_VARIABLE_VarSet_20;

  libs__polyhedron__transform_constraint_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Constraint_16, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_VarMap_18, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_VarSet_20);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Constraint_16));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_VarMap_18));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_VarSet_20));
}

static void MR_CALL 
libs__polyhedron__transform_polyhedron_5_p_0(
  MR_Word Poly_6,
  MR_Word Polys0_7,
  MR_Word * Polys_8,
  MR_Word STATE_VARIABLE_PolyInfo_0_16,
  MR_Word * STATE_VARIABLE_PolyInfo_17)
{
  MR_Word VarMaps_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PolyInfo_0_16, (MR_Integer) 0))));
  MR_Word Sigmas_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PolyInfo_0_16, (MR_Integer) 1))));
  MR_Word Sigma_13;
  MR_Word NewEqns_14;
  MR_Word VarMap_15;
  MR_Word STATE_VARIABLE_VarSet_18_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PolyInfo_0_16, (MR_Integer) 2))));
  MR_Word STATE_VARIABLE_VarSet_19_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word STATE_VARIABLE_VarSet_22_22;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Box conv4_VarMap_15;
  MR_Box conv3_STATE_VARIABLE_VarSet_22_22;

  mercury__varset__new_var_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), &Sigma_13, STATE_VARIABLE_VarSet_18_18, &STATE_VARIABLE_VarSet_19_19);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&libs__polyhedron_scalar_common_9[0]));
    MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (libs__polyhedron__transform_polyhedron_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Sigma_13));
  }
  Var_21 = mercury__map__init_0_f_0((MR_Word) (&libs__polyhedron_scalar_common_1[1]), (MR_Word) (&libs__polyhedron_scalar_common_1[1]));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), (MR_Word) (&libs__polyhedron_scalar_common_2[0]), (MR_Word) (&libs__polyhedron_scalar_common_1[3]), Var_20, Poly_6, &NewEqns_14, ((MR_Box) (Var_21)), &conv4_VarMap_15, ((MR_Box) (STATE_VARIABLE_VarSet_19_19)), &conv3_STATE_VARIABLE_VarSet_22_22);
  VarMap_15 = ((MR_Word) (conv4_VarMap_15));
  STATE_VARIABLE_VarSet_22_22 = ((MR_Word) (conv3_STATE_VARIABLE_VarSet_22_22));
  *Polys_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), NewEqns_14, Polys0_7);
  {
    Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (VarMap_15));
    MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (VarMaps_11));
  }
  {
    Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Sigma_13));
    MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Sigmas_12));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PolyInfo_17 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (STATE_VARIABLE_VarSet_22_22));
  }
}

void MR_CALL 
libs__polyhedron__write_polyhedron_5_p_0(
  MR_Word Stream_6,
  MR_Word VarSet_7,
  MR_Word Polyhedron_8)
{
  if ((Polyhedron_8 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\tEmpty\n");
  else
  {
    MR_Word Constraints_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Polyhedron_8, (MR_Integer) 0))));

    if ((Constraints_10 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\tUniverse\n");
    else
      libs__lp_rational__write_constraints_5_p_0(Stream_6, VarSet_7, Constraints_10);
  }
}

MR_Word MR_CALL 
libs__polyhedron__zero_vars_2_f_0(
  MR_Word Vars_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Constraints0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Constraints_7;

    Constraints_7 = libs__lp_rational__set_vars_to_zero_2_f_0(Vars_1, Constraints0_6);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Constraints_7));
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
libs__polyhedron__substitute_vars_2_f_0(
  MR_Word SubstMap_4,
  MR_Word Polyhedron0_5)
{
  MR_Word Polyhedron_6;
  MR_Word Constraints0_7;
  MR_Word Constraints_8;

  if ((Polyhedron0_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Box conv0_Constraints0_7;

    conv0_Constraints0_7 = mercury__require__unexpected_2_f_0((MR_Word) (&libs__polyhedron_scalar_common_1[0]), (MR_String) "function \140libs.polyhedron.non_false_constraints\'/1", (MR_String) "empty polyhedron");
    Constraints0_7 = ((MR_Word) (conv0_Constraints0_7));
  }
  else
    Constraints0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Polyhedron0_5, (MR_Integer) 0))));
  Constraints_8 = libs__lp_rational__substitute_vars_2_f_0(SubstMap_4, Constraints0_7);
  Polyhedron_6 = libs__polyhedron__from_constraints_1_f_0(Constraints_8);
  return Polyhedron_6;
}

MR_Word MR_CALL 
libs__polyhedron__substitute_vars_3_f_0(
  MR_Word OldVars_5,
  MR_Word NewVars_6,
  MR_Word Polyhedron0_7)
{
  MR_Word Polyhedron_8;
  MR_Word Constraints0_9;
  MR_Word Constraints_10;

  if ((Polyhedron0_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Box conv0_Constraints0_9;

    conv0_Constraints0_9 = mercury__require__unexpected_2_f_0((MR_Word) (&libs__polyhedron_scalar_common_1[0]), (MR_String) "function \140libs.polyhedron.non_false_constraints\'/1", (MR_String) "empty polyhedron");
    Constraints0_9 = ((MR_Word) (conv0_Constraints0_9));
  }
  else
    Constraints0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Polyhedron0_7, (MR_Integer) 0))));
  Constraints_10 = libs__lp_rational__substitute_vars_3_f_0(OldVars_5, NewVars_6, Constraints0_9);
  Polyhedron_8 = libs__polyhedron__from_constraints_1_f_0(Constraints_10);
  return Polyhedron_8;
}

void MR_CALL 
libs__polyhedron__project_polyhedron_4_p_0(
  MR_Word VarSet_1,
  MR_Word Vars_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Constraints0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ProjectionResult_11;

    libs__lp_rational__project_constraints_4_p_0(VarSet_1, Vars_2, Constraints0_9, &ProjectionResult_11);
    switch (MR_tag((MR_Word) ProjectionResult_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ProjectionResult_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.polyhedron.project_polyhedron\'/4", (MR_String) "abort from project");
              return;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Constraints1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProjectionResult_11, (MR_Integer) 0))));
          MR_Word Constraints_13;

          libs__lp_rational__restore_equalities_2_p_0(Constraints1_12, &Constraints_13);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Constraints_13));
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
libs__polyhedron__project_all_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_16;

  conv0_LambdaHeadVar__2_16 = libs__polyhedron__IntroducedFrom__func__project_all__537__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_16));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
libs__polyhedron__project_all_3_f_0(
  MR_Word VarSet_5,
  MR_Word Locals_6,
  MR_Word Polyhedra_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_14;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&libs__polyhedron_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (libs__polyhedron__project_all_3_f_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (VarSet_5));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Locals_6));
  }
  HeadVar__4_4 = mercury__list__map_2_f_0((MR_Word) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0), (MR_Word) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0), Var_14, Polyhedra_7);
  return HeadVar__4_4;
}

static MR_bool MR_CALL 
libs__polyhedron__widen_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__lp_rational__entailed_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_Word MR_CALL 
libs__polyhedron__widen_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word VarSet_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box conv0_HeadVar__4_4;

      conv0_HeadVar__4_4 = mercury__require__unexpected_2_f_0((MR_Word) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0), (MR_String) "function \140libs.polyhedron.widen\'/3", (MR_String) "empty polyhedron");
      HeadVar__4_4 = ((MR_Word) (conv0_HeadVar__4_4));
    }
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box conv1_HeadVar__4_4;

      conv1_HeadVar__4_4 = mercury__require__unexpected_2_f_0((MR_Word) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0), (MR_String) "function \140libs.polyhedron.widen\'/3", (MR_String) "empty polyhedron");
      HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
    }
    else
    {
      MR_Word Poly2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word WidenedEqns_17;
      MR_Word Var_18;

      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&libs__polyhedron_scalar_common_5[3]));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (libs__polyhedron__widen_3_f_0_1));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (VarSet_3));
        MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Poly2_15));
      }
      WidenedEqns_17 = mercury__list__filter_2_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), Var_18, Var_23);
      {
        HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (WidenedEqns_17));
      }
    }
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
libs__polyhedron__bounding_box_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Constraints_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_7;

    Var_7 = libs__lp_rational__bounding_box_2_f_0(VarSet_2, Constraints_5);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_7));
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
libs__polyhedron__convex_union_4_f_0(
  MR_Word VarSet_6,
  MR_Word MaxMatrixSize_7,
  MR_Word PolyhedronA_8,
  MR_Word PolyhedronB_9)
{
  MR_Word Polyhedron_10;

  libs__polyhedron__convex_union_5_p_0(VarSet_6, MaxMatrixSize_7, PolyhedronA_8, PolyhedronB_9, &Polyhedron_10);
  return Polyhedron_10;
}

void MR_CALL 
libs__polyhedron__convex_union_4_p_0(
  MR_Word VarSet_5,
  MR_Word PolyhedronA_6,
  MR_Word PolyhedronB_7,
  MR_Word * Polyhedron_8)
{
  libs__polyhedron__convex_union_5_p_0(VarSet_5, (MR_Word) ((MR_Unsigned) 0U), PolyhedronA_6, PolyhedronB_7, Polyhedron_8);
}

MR_Word MR_CALL 
libs__polyhedron__convex_union_3_f_0(
  MR_Word VarSet_5,
  MR_Word PolyhedronA_6,
  MR_Word PolyhedronB_7)
{
  MR_Word Polyhedron_8;

  libs__polyhedron__convex_union_5_p_0(VarSet_5, (MR_Word) ((MR_Unsigned) 0U), PolyhedronA_6, PolyhedronB_7, &Polyhedron_8);
  return Polyhedron_8;
}

void MR_CALL 
libs__polyhedron__convex_union_5_p_0(
  MR_Word VarSet_1,
  MR_Word MaybeMaxSize_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
      *HeadVar__5_5 = HeadVar__4_4;
  else
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = HeadVar__3_3;
    else
    {
      MR_Word ConstraintsB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Var_19;
      MR_Word Var_20;

      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (ConstraintsB_17));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_20));
      }
      libs__polyhedron__convex_hull_4_p_0(Var_19, HeadVar__5_5, MaybeMaxSize_2, VarSet_1);
    }
  }
}

static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__3_41;

  conv6_LambdaHeadVar__3_41 = libs__polyhedron__IntroducedFrom__func__convex_hull__354__1_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv6_LambdaHeadVar__3_41));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_2;

  conv5_HeadVar__2_2 = libs__lp_rational__lp_term_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
libs__polyhedron__convex_hull_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Polys_8;
  MR_Word conv0_STATE_VARIABLE_PolyInfo_17;

  libs__polyhedron__transform_polyhedron_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Polys_8, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_PolyInfo_17);
  *wrapper_arg_3 = ((MR_Box) (conv1_Polys_8));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_PolyInfo_17));
}

static void MR_CALL 
libs__polyhedron__convex_hull_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word MaybeMaxSize_3,
  MR_Word VarSet0_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.polyhedron.convex_hull\'/4", (MR_String) "empty list");
      return;
    }
  else
  {
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((Var_57 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_58));
      }
    else
    {
      MR_Word PolyInfo0_21;
      MR_Word Matrix0_22;
      MR_Word PolyInfo_23;
      MR_Word VarMaps_24;
      MR_Word Sigmas_25;
      MR_Word VarSet_26;
      MR_Word Matrix1_27;
      MR_Word Matrix_28;
      MR_Word VarsToEliminate_33;
      MR_Word ProjectionResult_34;
      MR_Word Var_43;
      MR_Word SigmaConstraints_78;
      MR_Word SigmaTerms_79;
      MR_Word STATE_VARIABLE_Constraints_11_81;
      MR_Word Var_83;
      MR_Word Var_86;
      MR_Box conv3_Matrix0_22;
      MR_Box conv2_PolyInfo_23;
      MR_Box conv7_Var_43;

      {
        PolyInfo0_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PolyInfo0_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), PolyInfo0_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), PolyInfo0_21, 2) = ((MR_Box) (VarSet0_4));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&libs__polyhedron_scalar_common_1[0]), (MR_Word) (&libs__polyhedron_scalar_common_1[0]), (MR_Word) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedra_info_0), (MR_Word) (&libs__polyhedron_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Matrix0_22, ((MR_Box) (PolyInfo0_21)), &conv2_PolyInfo_23);
      Matrix0_22 = ((MR_Word) (conv3_Matrix0_22));
      PolyInfo_23 = ((MR_Word) (conv2_PolyInfo_23));
      VarMaps_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PolyInfo_23, (MR_Integer) 0))));
      Sigmas_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PolyInfo_23, (MR_Integer) 1))));
      VarSet_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PolyInfo_23, (MR_Integer) 2))));
      SigmaConstraints_78 = mercury__list__map_2_f_0((MR_Word) (&libs__polyhedron_scalar_common_1[1]), (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), (MR_Word) (&libs__polyhedron_scalar_common_2[5]), Sigmas_25);
      mercury__list__append_3_p_1((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), SigmaConstraints_78, Matrix0_22, &STATE_VARIABLE_Constraints_11_81);
      SigmaTerms_79 = mercury__list__map_2_f_0((MR_Word) (&libs__polyhedron_scalar_common_1[1]), (MR_Word) (&libs__polyhedron_scalar_common_2[1]), (MR_Word) (&libs__polyhedron_scalar_common_2[6]), Sigmas_25);
      Var_86 = libs__rat__one_0_f_0();
      Var_83 = libs__lp_rational__construct_constraint_3_f_0(SigmaTerms_79, (MR_Integer) 1, Var_86);
      mercury__list__cons_3_p_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), ((MR_Box) (Var_83)), STATE_VARIABLE_Constraints_11_81, &Matrix1_27);
      Matrix_28 = libs__polyhedron__add_last_constraints_2_f_0(Matrix1_27, VarMaps_24);
      conv7_Var_43 = mercury__list__foldl_3_f_0((MR_Word) (&libs__polyhedron_scalar_common_2[0]), (MR_Word) (&libs__polyhedron_scalar_common_1[2]), (MR_Word) (&libs__polyhedron_scalar_common_2[7]), VarMaps_24, ((MR_Box) ((MR_Unsigned) 0U)));
      Var_43 = ((MR_Word) (conv7_Var_43));
      VarsToEliminate_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__polyhedron_scalar_common_1[1]), Sigmas_25, Var_43);
      libs__lp_rational__project_constraints_maybe_size_limit_5_p_0(VarSet_26, MaybeMaxSize_3, VarsToEliminate_33, Matrix_28, &ProjectionResult_34);
      switch (MR_tag((MR_Word) ProjectionResult_34)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ProjectionResult_34)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_50;

                Var_50 = libs__lp_rational__nonneg_box_2_f_0(VarsToEliminate_33, Matrix_28);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_50));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Hull_45_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProjectionResult_34, (MR_Integer) 0))));
            MR_Word STATE_VARIABLE_Hull_46_46;
            MR_Word STATE_VARIABLE_Hull_47_47;
            MR_Word STATE_VARIABLE_Hull_48_48;

            libs__lp_rational__restore_equalities_2_p_0(STATE_VARIABLE_Hull_45_45, &STATE_VARIABLE_Hull_46_46);
            STATE_VARIABLE_Hull_47_47 = libs__lp_rational__simplify_constraints_1_f_0(STATE_VARIABLE_Hull_46_46);
            succeeded = libs__lp_rational__remove_some_entailed_constraints_3_p_0(VarSet_26, STATE_VARIABLE_Hull_47_47, &STATE_VARIABLE_Hull_48_48);
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (STATE_VARIABLE_Hull_48_48));
              }
            else
              *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_Constraint_6;

  succeeded = libs__polyhedron__make_last_constraint_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Constraint_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_Constraint_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = libs__polyhedron__get_keys_from_map_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Word MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0(
  MR_Word STATE_VARIABLE_Constraints_0_8,
  MR_Word VarMaps_5)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Constraints_9;
  MR_Word Keys_6;
  MR_Word NewLastConstraints_7;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_17;
  MR_Box conv1_Keys_6;

  Var_17 = mercury__set__init_0_f_0((MR_Word) (&libs__polyhedron_scalar_common_1[1]));
  conv1_Keys_6 = mercury__list__foldl_3_f_0((MR_Word) (&libs__polyhedron_scalar_common_2[0]), (MR_Word) (&libs__polyhedron_scalar_common_1[4]), (MR_Word) (&libs__polyhedron_scalar_common_2[3]), VarMaps_5, ((MR_Box) (Var_17)));
  Keys_6 = ((MR_Word) (conv1_Keys_6));
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&libs__polyhedron_scalar_common_5[1]));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (libs__polyhedron__add_last_constraints_2_f_0_2));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (VarMaps_5));
  }
  NewLastConstraints_7 = mercury__set__filter_map_2_f_0((MR_Word) (&libs__polyhedron_scalar_common_1[1]), (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), Var_10, Keys_6);
  Var_11 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), NewLastConstraints_7);
  mercury__list__append_3_p_1((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), Var_11, STATE_VARIABLE_Constraints_0_8, &STATE_VARIABLE_Constraints_9);
  return STATE_VARIABLE_Constraints_9;
}

void MR_CALL 
libs__polyhedron__intersection_3_p_0(
  MR_Word PolyA_4,
  MR_Word PolyB_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = libs__polyhedron__intersection_2_f_0(PolyA_4, PolyB_5);
}

MR_Word MR_CALL 
libs__polyhedron__intersection_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word MatrixB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Constraints_8;
      MR_Word Constraints0_9;
      MR_Word Constraints1_10;

      Constraints0_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), Var_12, MatrixB_7);
      libs__lp_rational__restore_equalities_2_p_0(Constraints0_9, &Constraints1_10);
      Constraints_8 = libs__lp_rational__simplify_constraints_1_f_0(Constraints1_10);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Constraints_8));
      }
    }
  }
  return HeadVar__3_3;
}

void MR_CALL 
libs__polyhedron__optimize_3_p_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Constraints0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Constraints_8;

    Constraints_8 = libs__lp_rational__simplify_constraints_1_f_0(Constraints0_6);
    succeeded = libs__lp_rational__inconsistent_2_p_0(VarSet_1, Constraints_8);
    if (succeeded)
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Constraints_8));
      }
  }
}

static MR_bool MR_CALL 
libs__polyhedron__is_universe_1_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__lp_rational__nonneg_constr_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_bool MR_CALL 
libs__polyhedron__is_universe_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TypeCtorInfo_5_5;
  MR_Word Constraints_2;
  MR_Word Var_3;

  if (succeeded)
  {
    Constraints_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    Var_3 = (MR_Word) (&libs__polyhedron_scalar_common_2[2]);
    TypeCtorInfo_5_5 = (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0);
    succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_5_5, Var_3, Constraints_2);
  }
  return succeeded;
}

MR_bool MR_CALL 
libs__polyhedron__is_empty_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U));

  return succeeded;
}

MR_Word MR_CALL 
libs__polyhedron__non_false_constraints_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Box conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mercury__require__unexpected_2_f_0((MR_Word) (&libs__polyhedron_scalar_common_1[0]), (MR_String) "function \140libs.polyhedron.non_false_constraints\'/1", (MR_String) "empty polyhedron");
    HeadVar__2_2 = ((MR_Word) (conv0_HeadVar__2_2));
  }
  else
    HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
  return HeadVar__2_2;
}

MR_Word MR_CALL 
libs__polyhedron__constraints_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_4;

    Var_4 = libs__lp_rational__false_constraint_0_f_0();
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
  return HeadVar__2_2;
}

MR_Word MR_CALL 
libs__polyhedron__from_constraints_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__polyhedron_scalar_common_3[0]));
  else
  {
    MR_Word C_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

    succeeded = libs__lp_rational__is_false_1_p_0(C_4);
    if (succeeded)
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Polyhedron0_7;
      MR_Word Var_9;

      Polyhedron0_7 = libs__polyhedron__from_constraints_1_f_0(Cs_5);
      {
        Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (C_4));
        MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      if ((Polyhedron0_7 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word MatrixB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Polyhedron0_7, (MR_Integer) 0))));
        MR_Word Constraints_15;
        MR_Word Constraints0_16;
        MR_Word Constraints1_17;

        Constraints0_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), Var_9, MatrixB_14);
        libs__lp_rational__restore_equalities_2_p_0(Constraints0_16, &Constraints1_17);
        Constraints_15 = libs__lp_rational__simplify_constraints_1_f_0(Constraints1_17);
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Constraints_15));
        }
      }
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
libs__polyhedron__universe_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(1), &libs__polyhedron_scalar_common_3[0]));
}

MR_Word MR_CALL 
libs__polyhedron__empty_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____constr_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__polyhedron____Unify____constr_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__polyhedron____Compare____constr_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__polyhedron____Compare____constr_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____convex_hull_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__polyhedron____Unify____convex_hull_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__polyhedron____Compare____convex_hull_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__polyhedron____Compare____convex_hull_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__polyhedron____Unify____polyhedra_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__polyhedron____Compare____polyhedra_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__polyhedron____Compare____polyhedra_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__polyhedron____Unify____polyhedra_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__polyhedron____Compare____polyhedra_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__polyhedron____Compare____polyhedra_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedron_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__polyhedron____Unify____polyhedron_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__polyhedron____Compare____polyhedron_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__polyhedron____Compare____polyhedron_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__polyhedron____Unify____sigma_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__polyhedron____Compare____sigma_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__polyhedron____Compare____sigma_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__polyhedron____Unify____sigma_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__polyhedron____Compare____sigma_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__polyhedron____Compare____sigma_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__polyhedron____Unify____var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__polyhedron____Compare____var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__polyhedron____Compare____var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__polyhedron____Unify____var_maps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__polyhedron____Compare____var_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__polyhedron____Compare____var_maps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__polyhedron__init(void)
{
}

void mercury__libs__polyhedron__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__polyhedron__libs__polyhedron__type_ctor_info_constr_info_0);
	MR_register_type_ctor_info(&libs__polyhedron__libs__polyhedron__type_ctor_info_convex_hull_result_0);
	MR_register_type_ctor_info(&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedra_0);
	MR_register_type_ctor_info(&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedra_info_0);
	MR_register_type_ctor_info(&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0);
	MR_register_type_ctor_info(&libs__polyhedron__libs__polyhedron__type_ctor_info_sigma_var_0);
	MR_register_type_ctor_info(&libs__polyhedron__libs__polyhedron__type_ctor_info_sigma_vars_0);
	MR_register_type_ctor_info(&libs__polyhedron__libs__polyhedron__type_ctor_info_var_map_0);
	MR_register_type_ctor_info(&libs__polyhedron__libs__polyhedron__type_ctor_info_var_maps_0);
}

void mercury__libs__polyhedron__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__polyhedron__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.polyhedron.
