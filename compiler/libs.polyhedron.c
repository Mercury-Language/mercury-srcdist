/*
** Automatically generated from `polyhedron.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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


/* :- module libs.polyhedron. */
/* :- implementation. */

/*
INIT mercury__libs__polyhedron__init
ENDINIT
*/

#include "libs.polyhedron.mih"


#include "libs.mih"
#include "libs.lp_rational.mih"
#include "libs.rat.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
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
libs__polyhedron__IntroducedFrom__func__convex_hull__360__1_2_f_0(
  MR_Word libs__polyhedron__LambdaHeadVar__1_40,
  MR_Word libs__polyhedron__LambdaHeadVar__2_41);

static MR_Word MR_CALL 
libs__polyhedron__IntroducedFrom__func__project_all__541__1_3_f_0(
  MR_Word libs__polyhedron__Varset_5,
  MR_Word libs__polyhedron__Locals_6,
  MR_Word libs__polyhedron__LambdaHeadVar__1_15);

static void MR_CALL 
libs__polyhedron____Compare____var_maps_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_maps_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2);

static void MR_CALL 
libs__polyhedron____Compare____var_map_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_map_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2);

static void MR_CALL 
libs__polyhedron____Compare____sigma_vars_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_vars_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2);

static void MR_CALL 
libs__polyhedron____Compare____sigma_var_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_var_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2);

static void MR_CALL 
libs__polyhedron____Compare____polyhedra_info_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_info_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2);

static void MR_CALL 
libs__polyhedron____Compare____convex_hull_result_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____convex_hull_result_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2);

static void MR_CALL 
libs__polyhedron____Compare____constr_info_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____constr_info_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2);

static MR_bool MR_CALL 
libs__polyhedron__make_last_terms_4_p_0(
  MR_Word libs__polyhedron__OriginalVar_5,
  MR_Word libs__polyhedron__VarMap_6,
  MR_Word libs__polyhedron__STATE_VARIABLE_Terms_0_9,
  MR_Word * libs__polyhedron__STATE_VARIABLE_Terms_10);

static MR_bool MR_CALL 
libs__polyhedron__make_last_constraint_2_f_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box * libs__polyhedron__wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron__make_last_constraint_2_f_0(
  MR_Word libs__polyhedron__VarMaps_4,
  MR_Word libs__polyhedron__OriginalVar_5,
  MR_Word * libs__polyhedron__Constraint_6);

static MR_Word MR_CALL 
libs__polyhedron__get_keys_from_map_2_f_0(
  MR_Word libs__polyhedron__Map_4,
  MR_Word libs__polyhedron__KeySet_5);

static void MR_CALL 
libs__polyhedron__change_var_6_p_0(
  MR_Word libs__polyhedron__STATE_VARIABLE_Term_0_13,
  MR_Word * libs__polyhedron__STATE_VARIABLE_Term_14,
  MR_Word libs__polyhedron__STATE_VARIABLE_VarMap_0_15,
  MR_Word * libs__polyhedron__STATE_VARIABLE_VarMap_16,
  MR_Word libs__polyhedron__STATE_VARIABLE_Varset_0_17,
  MR_Word * libs__polyhedron__STATE_VARIABLE_Varset_18);

static void MR_CALL 
libs__polyhedron__transform_constraint_7_p_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box * libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3,
  MR_Box * libs__polyhedron__wrapper_arg_4,
  MR_Box libs__polyhedron__wrapper_arg_5,
  MR_Box * libs__polyhedron__wrapper_arg_6);

static void MR_CALL 
libs__polyhedron__transform_constraint_7_p_0(
  MR_Word libs__polyhedron__Sigma_8,
  MR_Word libs__polyhedron__STATE_VARIABLE_Constraint_0_15,
  MR_Word * libs__polyhedron__STATE_VARIABLE_Constraint_16,
  MR_Word libs__polyhedron__STATE_VARIABLE_VarMap_0_17,
  MR_Word * libs__polyhedron__STATE_VARIABLE_VarMap_18,
  MR_Word libs__polyhedron__STATE_VARIABLE_Varset_0_19,
  MR_Word * libs__polyhedron__STATE_VARIABLE_Varset_20);

static void MR_CALL 
libs__polyhedron__transform_polyhedron_5_p_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box * libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3,
  MR_Box * libs__polyhedron__wrapper_arg_4,
  MR_Box libs__polyhedron__wrapper_arg_5,
  MR_Box * libs__polyhedron__wrapper_arg_6);

static void MR_CALL 
libs__polyhedron__transform_polyhedron_5_p_0(
  MR_Word libs__polyhedron__Poly_6,
  MR_Word libs__polyhedron__Polys0_7,
  MR_Word * libs__polyhedron__Polys_8,
  MR_Word libs__polyhedron__STATE_VARIABLE_PolyInfo_0_16,
  MR_Word * libs__polyhedron__STATE_VARIABLE_PolyInfo_17);

static MR_Box MR_CALL 
libs__polyhedron__project_all_3_f_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1);

static MR_bool MR_CALL 
libs__polyhedron__widen_3_f_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1);

static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_4(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2);

static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_3(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1);

static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_2(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1);

static void MR_CALL 
libs__polyhedron__convex_hull_4_p_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box * libs__polyhedron__wrapper_arg_3,
  MR_Box libs__polyhedron__wrapper_arg_4,
  MR_Box * libs__polyhedron__wrapper_arg_5);

static void MR_CALL 
libs__polyhedron__convex_hull_4_p_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word * libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__MaybeMaxSize_3,
  MR_Word libs__polyhedron__Varset0_4);

static MR_bool MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0_2(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box * libs__polyhedron__wrapper_arg_2);

static MR_Box MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2);

static MR_Word MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0(
  MR_Word libs__polyhedron__STATE_VARIABLE_Constraints_0_8,
  MR_Word libs__polyhedron__VarMaps_5);

static MR_bool MR_CALL 
libs__polyhedron__is_universe_1_p_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1);

static MR_bool MR_CALL 
libs__polyhedron____Unify____constr_info_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____constr_info_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____convex_hull_result_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____convex_hull_result_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____polyhedra_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_info_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____polyhedra_info_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedron_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____polyhedron_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_var_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____sigma_var_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_vars_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____sigma_vars_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_map_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____var_map_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3);

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_maps_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2);

static void MR_CALL 
libs__polyhedron____Compare____var_maps_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3);


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
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__polyhedron_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__polyhedron_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__polyhedron_scalar_common_2[1]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__polyhedron_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__polyhedron_scalar_common_1[1])),
    ((MR_Box) (&libs__polyhedron_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__polyhedron_scalar_common_1[1])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_4[0])),
    ((MR_Box) (libs__polyhedron__is_universe_1_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_5[0])),
    ((MR_Box) (libs__polyhedron__add_last_constraints_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_6[0])),
    ((MR_Box) (libs__polyhedron__convex_hull_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_7[0])),
    ((MR_Box) (libs__polyhedron__convex_hull_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_7[1])),
    ((MR_Box) (libs__polyhedron__convex_hull_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_5[2])),
    ((MR_Box) (libs__polyhedron__convex_hull_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_10[0])),
    ((MR_Box) (libs__polyhedron__transform_constraint_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_5[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedra_info_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedra_info_0))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_7[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__polyhedron__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__polyhedron__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_8[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__polyhedron__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_9[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__polyhedron__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&libs__polyhedron__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct2 libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_libs__lp_rational__type_ctor_info_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__polyhedron__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct2 libs__polyhedron__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0
  }
};

static const MR_FA_TypeInfo_Struct1 libs__polyhedron__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_constr_info_0_0[2] = {
  (MR_PseudoTypeInfo) &libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__varset__ti_varset_1term__type_ctor_info_generic_0
};

static const MR_ConstString libs__polyhedron__libs__polyhedron__field_names_constr_info_0_0[2] = {
  (MR_String) "var_map",
  (MR_String) "constr_varset"
};

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_constr_info_0_0 = {
  (MR_String) "constr_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__polyhedron__libs__polyhedron__field_types_constr_info_0_0,
  libs__polyhedron__libs__polyhedron__field_names_constr_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_constr_info_0_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_constr_info_0_0
};

static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_constr_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_constr_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__polyhedron____Unify____constr_info_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____constr_info_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "constr_info",
  {     libs__polyhedron__libs__polyhedron__du_name_ordered_constr_info_0 },
  {     libs__polyhedron__libs__polyhedron__du_ptag_ordered_constr_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__polyhedron__libs__polyhedron__functor_number_map_constr_info_0
};

static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_convex_hull_result_0_0[1] = {
  (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
};

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__polyhedron__libs__polyhedron__field_types_convex_hull_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_1 = {
  (MR_String) "aborted",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_1
};

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_1[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_0
};

static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_convex_hull_result_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__polyhedron____Unify____convex_hull_result_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____convex_hull_result_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "convex_hull_result",
  {     libs__polyhedron__libs__polyhedron__du_name_ordered_convex_hull_result_0 },
  {     libs__polyhedron__libs__polyhedron__du_ptag_ordered_convex_hull_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__polyhedron__libs__polyhedron__functor_number_map_convex_hull_result_0
};

static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1libs__polyhedron__type_ctor_info_polyhedron_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
  }
};

const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedra_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__polyhedron____Unify____polyhedra_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____polyhedra_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "polyhedra",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__polyhedron__list__ti_list_1libs__polyhedron__type_ctor_info_polyhedron_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_polyhedra_info_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__polyhedron__list__ti_list_1tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__varset__ti_varset_1term__type_ctor_info_generic_0
};

static const MR_ConstString libs__polyhedron__libs__polyhedron__field_names_polyhedra_info_0_0[3] = {
  (MR_String) "var_maps",
  (MR_String) "sigmas",
  (MR_String) "poly_varset"
};

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedra_info_0_0 = {
  (MR_String) "polyhedra_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__polyhedron__libs__polyhedron__field_types_polyhedra_info_0_0,
  libs__polyhedron__libs__polyhedron__field_names_polyhedra_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedra_info_0_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedra_info_0_0
};

static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedra_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedra_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__polyhedron____Unify____polyhedra_info_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____polyhedra_info_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "polyhedra_info",
  {     libs__polyhedron__libs__polyhedron__du_name_ordered_polyhedra_info_0 },
  {     libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedra_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__polyhedron__libs__polyhedron__functor_number_map_polyhedra_info_0
};

static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1libs__lp_rational__type_ctor_info_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0
  }
};

static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_polyhedron_0_0[1] = {
  (MR_PseudoTypeInfo) &libs__polyhedron__list__ti_list_1libs__lp_rational__type_ctor_info_constraint_0
};

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_0 = {
  (MR_String) "eqns",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__polyhedron__libs__polyhedron__field_types_polyhedron_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_1 = {
  (MR_String) "empty_poly",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_1
};

static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_1[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_0
};

static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedron_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__polyhedron____Unify____polyhedron_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____polyhedron_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "polyhedron",
  {     libs__polyhedron__libs__polyhedron__du_name_ordered_polyhedron_0 },
  {     libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedron_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__polyhedron__libs__polyhedron__functor_number_map_polyhedron_0
};

const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_sigma_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__polyhedron____Unify____sigma_var_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____sigma_var_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "sigma_var",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_sigma_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__polyhedron____Unify____sigma_vars_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____sigma_vars_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "sigma_vars",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__polyhedron__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_var_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__polyhedron____Unify____var_map_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____var_map_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "var_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_var_maps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__polyhedron____Unify____var_maps_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____var_maps_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "var_maps",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__polyhedron__list__ti_list_1tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_Word MR_CALL 
libs__polyhedron__IntroducedFrom__func__convex_hull__360__1_2_f_0(
  MR_Word libs__polyhedron__LambdaHeadVar__1_40,
  MR_Word libs__polyhedron__LambdaHeadVar__2_41)
{
  {
    MR_Word libs__polyhedron__LambdaHeadVar__3_42;
    MR_Word libs__polyhedron__TypeInfo_56_56 = (MR_Word) &libs__polyhedron_scalar_common_1[1];
    MR_Word libs__polyhedron__Var_43;

    libs__polyhedron__Var_43 = mercury__map__values_1_f_0(libs__polyhedron__TypeInfo_56_56, libs__polyhedron__TypeInfo_56_56, libs__polyhedron__LambdaHeadVar__1_40);
    libs__polyhedron__LambdaHeadVar__3_42 = mercury__list__f_43_43_2_f_0(libs__polyhedron__TypeInfo_56_56, libs__polyhedron__LambdaHeadVar__2_41, libs__polyhedron__Var_43);
    return libs__polyhedron__LambdaHeadVar__3_42;
  }
}

static MR_Word MR_CALL 
libs__polyhedron__IntroducedFrom__func__project_all__541__1_3_f_0(
  MR_Word libs__polyhedron__Varset_5,
  MR_Word libs__polyhedron__Locals_6,
  MR_Word libs__polyhedron__LambdaHeadVar__1_15)
{
  {
    MR_Word libs__polyhedron__LambdaHeadVar__2_16;

    if ((libs__polyhedron__LambdaHeadVar__1_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__polyhedron__LambdaHeadVar__2_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word libs__polyhedron__Constraints0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__LambdaHeadVar__1_15, (MR_Integer) 0)));
      MR_Word libs__polyhedron__ProjectionResult_11;

      libs__lp_rational__project_4_p_0(libs__polyhedron__Locals_6, libs__polyhedron__Varset_5, libs__polyhedron__Constraints0_10, &libs__polyhedron__ProjectionResult_11);
      switch (MR_tag((MR_Word) libs__polyhedron__ProjectionResult_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(libs__polyhedron__ProjectionResult_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              libs__polyhedron__LambdaHeadVar__2_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_3_p_0((MR_String) "libs.polyhedron", (MR_String) "function \140libs.polyhedron.project_all\'/3", (MR_String) "abort from project");
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__polyhedron__Constraints1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__ProjectionResult_11, (MR_Integer) 0)));
            MR_Word libs__polyhedron__Constraints_13;

            libs__lp_rational__restore_equalities_2_p_0(libs__polyhedron__Constraints1_12, &libs__polyhedron__Constraints_13);
            {
              libs__polyhedron__LambdaHeadVar__2_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), libs__polyhedron__LambdaHeadVar__2_16, 0) = ((MR_Box) (libs__polyhedron__Constraints_13));
            }
          }
          break;
      }
    }
    return libs__polyhedron__LambdaHeadVar__2_16;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____var_maps_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3)
{
  {
    MR_Word libs__polyhedron__Cast_HeadVar1_4 = libs__polyhedron__HeadVar__2_2;
    MR_Word libs__polyhedron__Cast_HeadVar2_5 = libs__polyhedron__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[7], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__Cast_HeadVar1_4)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_maps_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Word libs__polyhedron__Cast_HeadVar1_3 = libs__polyhedron__HeadVar__1_1;
    MR_Word libs__polyhedron__Cast_HeadVar2_4 = libs__polyhedron__HeadVar__2_2;

    libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__polyhedron_scalar_common_1[7], ((MR_Box) (libs__polyhedron__Cast_HeadVar1_3)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_4)));
    return libs__polyhedron__succeeded;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____var_map_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3)
{
  {
    MR_Word libs__polyhedron__Cast_HeadVar1_4 = libs__polyhedron__HeadVar__2_2;
    MR_Word libs__polyhedron__Cast_HeadVar2_5 = libs__polyhedron__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_2[0], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__Cast_HeadVar1_4)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_map_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Word libs__polyhedron__Cast_HeadVar1_3 = libs__polyhedron__HeadVar__1_1;
    MR_Word libs__polyhedron__Cast_HeadVar2_4 = libs__polyhedron__HeadVar__2_2;

    libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__polyhedron_scalar_common_2[0], ((MR_Box) (libs__polyhedron__Cast_HeadVar1_3)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_4)));
    return libs__polyhedron__succeeded;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____sigma_vars_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3)
{
  {
    MR_Word libs__polyhedron__Cast_HeadVar1_4 = libs__polyhedron__HeadVar__2_2;
    MR_Word libs__polyhedron__Cast_HeadVar2_5 = libs__polyhedron__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[2], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__Cast_HeadVar1_4)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_vars_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Word libs__polyhedron__Cast_HeadVar1_3 = libs__polyhedron__HeadVar__1_1;
    MR_Word libs__polyhedron__Cast_HeadVar2_4 = libs__polyhedron__HeadVar__2_2;

    libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__polyhedron_scalar_common_1[2], ((MR_Box) (libs__polyhedron__Cast_HeadVar1_3)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_4)));
    return libs__polyhedron__succeeded;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____sigma_var_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3)
{
  {
    MR_Word libs__polyhedron__Cast_HeadVar1_4 = libs__polyhedron__HeadVar__2_2;
    MR_Word libs__polyhedron__Cast_HeadVar2_5 = libs__polyhedron__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[1], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__Cast_HeadVar1_4)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_var_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Word libs__polyhedron__Cast_HeadVar1_3 = libs__polyhedron__HeadVar__1_1;
    MR_Word libs__polyhedron__Cast_HeadVar2_4 = libs__polyhedron__HeadVar__2_2;

    libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__polyhedron_scalar_common_1[1], ((MR_Box) (libs__polyhedron__Cast_HeadVar1_3)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_4)));
    return libs__polyhedron__succeeded;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____polyhedra_info_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Integer libs__polyhedron__CastX_12 = (MR_Integer) libs__polyhedron__HeadVar__2_2;
    MR_Integer libs__polyhedron__CastY_13 = (MR_Integer) libs__polyhedron__HeadVar__3_3;

    libs__polyhedron__succeeded = (libs__polyhedron__CastX_12 == libs__polyhedron__CastY_13);
    if (libs__polyhedron__succeeded)
      *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word libs__polyhedron__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word libs__polyhedron__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word libs__polyhedron__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word libs__polyhedron__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word libs__polyhedron__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word libs__polyhedron__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word libs__polyhedron__Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[7], &libs__polyhedron__Var_10, ((MR_Box) (libs__polyhedron__ArgX1_4)), ((MR_Box) (libs__polyhedron__ArgY1_5)));
      libs__polyhedron__succeeded = (libs__polyhedron__Var_10 == (MR_Integer) 0);
      libs__polyhedron__succeeded = !(libs__polyhedron__succeeded);
      if (libs__polyhedron__succeeded)
        *libs__polyhedron__HeadVar__1_1 = libs__polyhedron__Var_10;
      else
      {
        MR_Word libs__polyhedron__Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[2], &libs__polyhedron__Var_11, ((MR_Box) (libs__polyhedron__ArgX2_6)), ((MR_Box) (libs__polyhedron__ArgY2_7)));
        libs__polyhedron__succeeded = (libs__polyhedron__Var_11 == (MR_Integer) 0);
        libs__polyhedron__succeeded = !(libs__polyhedron__succeeded);
        if (libs__polyhedron__succeeded)
          *libs__polyhedron__HeadVar__1_1 = libs__polyhedron__Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[3], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__ArgX3_8)), ((MR_Box) (libs__polyhedron__ArgY3_9)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_info_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Integer libs__polyhedron__CastX_9 = (MR_Integer) libs__polyhedron__HeadVar__1_1;
    MR_Integer libs__polyhedron__CastY_10 = (MR_Integer) libs__polyhedron__HeadVar__2_2;

    libs__polyhedron__succeeded = (libs__polyhedron__CastX_9 == libs__polyhedron__CastY_10);
    if (libs__polyhedron__succeeded)
      libs__polyhedron__succeeded = MR_TRUE;
    else
    {
      MR_Word libs__polyhedron__TypeInfo_12_12;
      MR_Word libs__polyhedron__TypeInfo_13_13;
      MR_Word libs__polyhedron__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word libs__polyhedron__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word libs__polyhedron__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word libs__polyhedron__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word libs__polyhedron__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word libs__polyhedron__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 2)));

      libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__polyhedron_scalar_common_1[7], ((MR_Box) (libs__polyhedron__ArgX1_3)), ((MR_Box) (libs__polyhedron__ArgY1_4)));
      if (libs__polyhedron__succeeded)
      {
        libs__polyhedron__TypeInfo_12_12 = (MR_Word) &libs__polyhedron_scalar_common_1[2];
        libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0(libs__polyhedron__TypeInfo_12_12, ((MR_Box) (libs__polyhedron__ArgX2_5)), ((MR_Box) (libs__polyhedron__ArgY2_6)));
        if (libs__polyhedron__succeeded)
        {
          libs__polyhedron__TypeInfo_13_13 = (MR_Word) &libs__polyhedron_scalar_common_1[3];
          libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0(libs__polyhedron__TypeInfo_13_13, ((MR_Box) (libs__polyhedron__ArgX3_7)), ((MR_Box) (libs__polyhedron__ArgY3_8)));
        }
      }
    }
    return libs__polyhedron__succeeded;
  }
}

void MR_CALL 
libs__polyhedron____Compare____polyhedra_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3)
{
  {
    MR_Word libs__polyhedron__Cast_HeadVar1_4 = libs__polyhedron__HeadVar__2_2;
    MR_Word libs__polyhedron__Cast_HeadVar2_5 = libs__polyhedron__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[6], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__Cast_HeadVar1_4)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Word libs__polyhedron__Cast_HeadVar1_3 = libs__polyhedron__HeadVar__1_1;
    MR_Word libs__polyhedron__Cast_HeadVar2_4 = libs__polyhedron__HeadVar__2_2;

    libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__polyhedron_scalar_common_1[6], ((MR_Box) (libs__polyhedron__Cast_HeadVar1_3)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_4)));
    return libs__polyhedron__succeeded;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____convex_hull_result_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Integer libs__polyhedron__CastX_8 = (MR_Integer) libs__polyhedron__HeadVar__2_2;
    MR_Integer libs__polyhedron__CastY_9 = (MR_Integer) libs__polyhedron__HeadVar__3_3;

    libs__polyhedron__succeeded = (libs__polyhedron__CastX_8 == libs__polyhedron__CastY_9);
    if (libs__polyhedron__succeeded)
      *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((libs__polyhedron__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((libs__polyhedron__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 0;
      else
        *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word libs__polyhedron__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));

      if ((libs__polyhedron__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word libs__polyhedron__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__3_3, (MR_Integer) 0)));

        libs__polyhedron____Compare____polyhedron_0_0(libs__polyhedron__HeadVar__1_1, libs__polyhedron__Var_11, libs__polyhedron__ArgY1_5);
      }
    }
  }
}

void MR_CALL 
libs__polyhedron____Compare____polyhedron_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Integer libs__polyhedron__CastX_8 = (MR_Integer) libs__polyhedron__HeadVar__2_2;
    MR_Integer libs__polyhedron__CastY_9 = (MR_Integer) libs__polyhedron__HeadVar__3_3;

    libs__polyhedron__succeeded = (libs__polyhedron__CastX_8 == libs__polyhedron__CastY_9);
    if (libs__polyhedron__succeeded)
      *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((libs__polyhedron__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((libs__polyhedron__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 0;
      else
        *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word libs__polyhedron__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));

      if ((libs__polyhedron__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word libs__polyhedron__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[0], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__Var_11)), ((MR_Box) (libs__polyhedron__ArgY1_5)));
      }
    }
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____convex_hull_result_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Integer libs__polyhedron__CastX_7 = (MR_Integer) libs__polyhedron__HeadVar__1_1;
    MR_Integer libs__polyhedron__CastY_8 = (MR_Integer) libs__polyhedron__HeadVar__2_2;

    libs__polyhedron__succeeded = (libs__polyhedron__CastX_7 == libs__polyhedron__CastY_8);
    if (libs__polyhedron__succeeded)
      libs__polyhedron__succeeded = MR_TRUE;
    else
    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer libs__polyhedron__CastX_5 = (MR_Integer) libs__polyhedron__HeadVar__1_1;
      MR_Integer libs__polyhedron__CastY_6 = (MR_Integer) libs__polyhedron__HeadVar__2_2;

      libs__polyhedron__succeeded = (libs__polyhedron__CastY_6 == libs__polyhedron__CastX_5);
    }
    else
    {
      MR_Word libs__polyhedron__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word libs__polyhedron__ArgY1_4;

      libs__polyhedron__succeeded = ((MR_tag((MR_Word) libs__polyhedron__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (libs__polyhedron__succeeded)
      {
        libs__polyhedron__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
        libs__polyhedron__succeeded = libs__polyhedron____Unify____polyhedron_0_0(libs__polyhedron__ArgX1_3, libs__polyhedron__ArgY1_4);
      }
    }
    return libs__polyhedron__succeeded;
  }
}

MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedron_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Integer libs__polyhedron__CastX_7 = (MR_Integer) libs__polyhedron__HeadVar__1_1;
    MR_Integer libs__polyhedron__CastY_8 = (MR_Integer) libs__polyhedron__HeadVar__2_2;

    libs__polyhedron__succeeded = (libs__polyhedron__CastX_7 == libs__polyhedron__CastY_8);
    if (libs__polyhedron__succeeded)
      libs__polyhedron__succeeded = MR_TRUE;
    else
    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer libs__polyhedron__CastX_5 = (MR_Integer) libs__polyhedron__HeadVar__1_1;
      MR_Integer libs__polyhedron__CastY_6 = (MR_Integer) libs__polyhedron__HeadVar__2_2;

      libs__polyhedron__succeeded = (libs__polyhedron__CastY_6 == libs__polyhedron__CastX_5);
    }
    else
    {
      MR_Word libs__polyhedron__TypeInfo_9_9;
      MR_Word libs__polyhedron__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word libs__polyhedron__ArgY1_4;

      libs__polyhedron__succeeded = ((MR_tag((MR_Word) libs__polyhedron__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (libs__polyhedron__succeeded)
      {
        libs__polyhedron__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
        libs__polyhedron__TypeInfo_9_9 = (MR_Word) &libs__polyhedron_scalar_common_1[0];
        libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0(libs__polyhedron__TypeInfo_9_9, ((MR_Box) (libs__polyhedron__ArgX1_3)), ((MR_Box) (libs__polyhedron__ArgY1_4)));
      }
    }
    return libs__polyhedron__succeeded;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____constr_info_0_0(
  MR_Word * libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__HeadVar__3_3)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Integer libs__polyhedron__CastX_9 = (MR_Integer) libs__polyhedron__HeadVar__2_2;
    MR_Integer libs__polyhedron__CastY_10 = (MR_Integer) libs__polyhedron__HeadVar__3_3;

    libs__polyhedron__succeeded = (libs__polyhedron__CastX_9 == libs__polyhedron__CastY_10);
    if (libs__polyhedron__succeeded)
      *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word libs__polyhedron__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word libs__polyhedron__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word libs__polyhedron__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word libs__polyhedron__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word libs__polyhedron__Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_2[0], &libs__polyhedron__Var_8, ((MR_Box) (libs__polyhedron__ArgX1_4)), ((MR_Box) (libs__polyhedron__ArgY1_5)));
      libs__polyhedron__succeeded = (libs__polyhedron__Var_8 == (MR_Integer) 0);
      libs__polyhedron__succeeded = !(libs__polyhedron__succeeded);
      if (libs__polyhedron__succeeded)
        *libs__polyhedron__HeadVar__1_1 = libs__polyhedron__Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[3], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__ArgX2_6)), ((MR_Box) (libs__polyhedron__ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____constr_info_0_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Integer libs__polyhedron__CastX_7 = (MR_Integer) libs__polyhedron__HeadVar__1_1;
    MR_Integer libs__polyhedron__CastY_8 = (MR_Integer) libs__polyhedron__HeadVar__2_2;

    libs__polyhedron__succeeded = (libs__polyhedron__CastX_7 == libs__polyhedron__CastY_8);
    if (libs__polyhedron__succeeded)
      libs__polyhedron__succeeded = MR_TRUE;
    else
    {
      MR_Word libs__polyhedron__TypeInfo_10_10;
      MR_Word libs__polyhedron__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word libs__polyhedron__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word libs__polyhedron__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word libs__polyhedron__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 1)));

      libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__polyhedron_scalar_common_2[0], ((MR_Box) (libs__polyhedron__ArgX1_3)), ((MR_Box) (libs__polyhedron__ArgY1_4)));
      if (libs__polyhedron__succeeded)
      {
        libs__polyhedron__TypeInfo_10_10 = (MR_Word) &libs__polyhedron_scalar_common_1[3];
        libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0(libs__polyhedron__TypeInfo_10_10, ((MR_Box) (libs__polyhedron__ArgX2_5)), ((MR_Box) (libs__polyhedron__ArgY2_6)));
      }
    }
    return libs__polyhedron__succeeded;
  }
}

static MR_bool MR_CALL 
libs__polyhedron__make_last_terms_4_p_0(
  MR_Word libs__polyhedron__OriginalVar_5,
  MR_Word libs__polyhedron__VarMap_6,
  MR_Word libs__polyhedron__STATE_VARIABLE_Terms_0_9,
  MR_Word * libs__polyhedron__STATE_VARIABLE_Terms_10)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Word libs__polyhedron__TypeInfo_15_15 = (MR_Word) &libs__polyhedron_scalar_common_1[1];
    MR_Word libs__polyhedron__TypeInfo_16_16;
    MR_Word libs__polyhedron__NewVar_8;
    MR_Word libs__polyhedron__Var_11;
    MR_Word libs__polyhedron__Var_13;
    MR_Word libs__polyhedron__Var_14;
    MR_Box libs__polyhedron__conv0_NewVar_8;

    libs__polyhedron__succeeded = mercury__map__search_3_p_0(libs__polyhedron__TypeInfo_15_15, libs__polyhedron__TypeInfo_15_15, libs__polyhedron__VarMap_6, ((MR_Box) (libs__polyhedron__OriginalVar_5)), &libs__polyhedron__conv0_NewVar_8);
    if (libs__polyhedron__succeeded)
    {
      libs__polyhedron__NewVar_8 = ((MR_Word) libs__polyhedron__conv0_NewVar_8);
      libs__polyhedron__succeeded = MR_TRUE;
    }
    if (libs__polyhedron__succeeded)
    {
      libs__polyhedron__Var_14 = libs__rat__one_0_f_0();
      libs__polyhedron__Var_13 = libs__rat__f_minus_1_f_0(libs__polyhedron__Var_14);
      libs__polyhedron__TypeInfo_16_16 = (MR_Word) &libs__polyhedron_scalar_common_2[1];
      {
        libs__polyhedron__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), libs__polyhedron__Var_11, 0) = ((MR_Box) (libs__polyhedron__NewVar_8));
        MR_hl_field(MR_mktag(0), libs__polyhedron__Var_11, 1) = ((MR_Box) (libs__polyhedron__Var_13));
      }
      mercury__list__cons_3_p_0(libs__polyhedron__TypeInfo_16_16, ((MR_Box) (libs__polyhedron__Var_11)), libs__polyhedron__STATE_VARIABLE_Terms_0_9, libs__polyhedron__STATE_VARIABLE_Terms_10);
      libs__polyhedron__succeeded = MR_TRUE;
    }
    return libs__polyhedron__succeeded;
  }
}

static MR_bool MR_CALL 
libs__polyhedron__make_last_constraint_2_f_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box * libs__polyhedron__wrapper_arg_3)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
    MR_Word libs__polyhedron__conv0_STATE_VARIABLE_Terms_10;

    libs__polyhedron__succeeded = libs__polyhedron__make_last_terms_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__closure, (MR_Integer) 3))), ((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2), &libs__polyhedron__conv0_STATE_VARIABLE_Terms_10);
    if (libs__polyhedron__succeeded)
    {
      *libs__polyhedron__wrapper_arg_3 = ((MR_Box) (libs__polyhedron__conv0_STATE_VARIABLE_Terms_10));
      libs__polyhedron__succeeded = MR_TRUE;
    }
    return libs__polyhedron__succeeded;
  }
}

static MR_bool MR_CALL 
libs__polyhedron__make_last_constraint_2_f_0(
  MR_Word libs__polyhedron__VarMaps_4,
  MR_Word libs__polyhedron__OriginalVar_5,
  MR_Word * libs__polyhedron__Constraint_6)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Word libs__polyhedron__LastTerms_7;
    MR_Word libs__polyhedron__AllTerms_8;
    MR_Word libs__polyhedron__Var_9;
    MR_Word libs__polyhedron__Var_11;
    MR_Word libs__polyhedron__Var_12;
    MR_Word libs__polyhedron__Var_13;
    MR_Word libs__polyhedron__Var_14;
    MR_Box libs__polyhedron__conv1_LastTerms_7;

    {
      libs__polyhedron__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_9, 0) = ((MR_Box) (&libs__polyhedron_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_9, 1) = ((MR_Box) (libs__polyhedron__make_last_constraint_2_f_0_1));
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_9, 3) = ((MR_Box) (libs__polyhedron__OriginalVar_5));
    }
    libs__polyhedron__succeeded = mercury__list__foldl_4_p_3((MR_Word) &libs__polyhedron_scalar_common_2[0], (MR_Word) &libs__polyhedron_scalar_common_1[5], libs__polyhedron__Var_9, libs__polyhedron__VarMaps_4, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__polyhedron__conv1_LastTerms_7);
    if (libs__polyhedron__succeeded)
    {
      libs__polyhedron__LastTerms_7 = ((MR_Word) libs__polyhedron__conv1_LastTerms_7);
      libs__polyhedron__succeeded = MR_TRUE;
    }
    if (libs__polyhedron__succeeded)
    {
      libs__polyhedron__Var_12 = libs__rat__one_0_f_0();
      libs__polyhedron__Var_13 = (MR_Integer) 1;
      {
        libs__polyhedron__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), libs__polyhedron__Var_11, 0) = ((MR_Box) (libs__polyhedron__OriginalVar_5));
        MR_hl_field(MR_mktag(0), libs__polyhedron__Var_11, 1) = ((MR_Box) (libs__polyhedron__Var_12));
      }
      {
        libs__polyhedron__AllTerms_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), libs__polyhedron__AllTerms_8, 0) = ((MR_Box) (libs__polyhedron__Var_11));
        MR_hl_field(MR_mktag(1), libs__polyhedron__AllTerms_8, 1) = ((MR_Box) (libs__polyhedron__LastTerms_7));
      }
      libs__polyhedron__Var_14 = libs__rat__zero_0_f_0();
      *libs__polyhedron__Constraint_6 = libs__lp_rational__construct_constraint_3_f_0(libs__polyhedron__AllTerms_8, libs__polyhedron__Var_13, libs__polyhedron__Var_14);
      libs__polyhedron__succeeded = MR_TRUE;
    }
    return libs__polyhedron__succeeded;
  }
}

static MR_Word MR_CALL 
libs__polyhedron__get_keys_from_map_2_f_0(
  MR_Word libs__polyhedron__Map_4,
  MR_Word libs__polyhedron__KeySet_5)
{
  {
    MR_Word libs__polyhedron__HeadVar__3_3;
    MR_Word libs__polyhedron__TypeInfo_7_7 = (MR_Word) &libs__polyhedron_scalar_common_1[1];
    MR_Word libs__polyhedron__Var_6;

    libs__polyhedron__Var_6 = mercury__map__keys_1_f_0(libs__polyhedron__TypeInfo_7_7, libs__polyhedron__TypeInfo_7_7, libs__polyhedron__Map_4);
    libs__polyhedron__HeadVar__3_3 = mercury__set__insert_list_2_f_0(libs__polyhedron__TypeInfo_7_7, libs__polyhedron__KeySet_5, libs__polyhedron__Var_6);
    return libs__polyhedron__HeadVar__3_3;
  }
}

static void MR_CALL 
libs__polyhedron__change_var_6_p_0(
  MR_Word libs__polyhedron__STATE_VARIABLE_Term_0_13,
  MR_Word * libs__polyhedron__STATE_VARIABLE_Term_14,
  MR_Word libs__polyhedron__STATE_VARIABLE_VarMap_0_15,
  MR_Word * libs__polyhedron__STATE_VARIABLE_VarMap_16,
  MR_Word libs__polyhedron__STATE_VARIABLE_Varset_0_17,
  MR_Word * libs__polyhedron__STATE_VARIABLE_Varset_18)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Word libs__polyhedron__Coefficient_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__STATE_VARIABLE_Term_0_13, (MR_Integer) 1)));
    MR_Word libs__polyhedron__STATE_VARIABLE_Var_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__STATE_VARIABLE_Term_0_13, (MR_Integer) 0)));
    MR_Word libs__polyhedron__STATE_VARIABLE_Var_23_23;
    MR_Word libs__polyhedron__STATE_VARIABLE_Var_20_20;
    MR_Word libs__polyhedron__TypeInfo_25_25 = (MR_Word) &libs__polyhedron_scalar_common_1[1];
    MR_Box libs__polyhedron__conv0_STATE_VARIABLE_Var_20_20;

    libs__polyhedron__succeeded = mercury__map__search_3_p_0(libs__polyhedron__TypeInfo_25_25, libs__polyhedron__TypeInfo_25_25, libs__polyhedron__STATE_VARIABLE_VarMap_0_15, ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Var_19_19)), &libs__polyhedron__conv0_STATE_VARIABLE_Var_20_20);
    if (libs__polyhedron__succeeded)
    {
      libs__polyhedron__STATE_VARIABLE_Var_20_20 = ((MR_Word) libs__polyhedron__conv0_STATE_VARIABLE_Var_20_20);
      libs__polyhedron__succeeded = MR_TRUE;
    }
    if (libs__polyhedron__succeeded)
    {
      libs__polyhedron__STATE_VARIABLE_Var_23_23 = libs__polyhedron__STATE_VARIABLE_Var_20_20;
      *libs__polyhedron__STATE_VARIABLE_Varset_18 = libs__polyhedron__STATE_VARIABLE_Varset_0_17;
      *libs__polyhedron__STATE_VARIABLE_VarMap_16 = libs__polyhedron__STATE_VARIABLE_VarMap_0_15;
    }
    else
    {
      MR_Word libs__polyhedron__TypeInfo_27_27;

      mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &libs__polyhedron__STATE_VARIABLE_Var_23_23, libs__polyhedron__STATE_VARIABLE_Varset_0_17, libs__polyhedron__STATE_VARIABLE_Varset_18);
      libs__polyhedron__TypeInfo_27_27 = (MR_Word) &libs__polyhedron_scalar_common_1[1];
      mercury__map__det_insert_4_p_0(libs__polyhedron__TypeInfo_27_27, libs__polyhedron__TypeInfo_27_27, ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Var_19_19)), ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Var_23_23)), libs__polyhedron__STATE_VARIABLE_VarMap_0_15, libs__polyhedron__STATE_VARIABLE_VarMap_16);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *libs__polyhedron__STATE_VARIABLE_Term_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Var_23_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__polyhedron__Coefficient_11));
    }
  }
}

static void MR_CALL 
libs__polyhedron__transform_constraint_7_p_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box * libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3,
  MR_Box * libs__polyhedron__wrapper_arg_4,
  MR_Box libs__polyhedron__wrapper_arg_5,
  MR_Box * libs__polyhedron__wrapper_arg_6)
{
  {
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
    MR_Word libs__polyhedron__conv2_STATE_VARIABLE_Term_14;
    MR_Word libs__polyhedron__conv1_STATE_VARIABLE_VarMap_16;
    MR_Word libs__polyhedron__conv0_STATE_VARIABLE_Varset_18;

    libs__polyhedron__change_var_6_p_0(((MR_Word) libs__polyhedron__wrapper_arg_1), &libs__polyhedron__conv2_STATE_VARIABLE_Term_14, ((MR_Word) libs__polyhedron__wrapper_arg_3), &libs__polyhedron__conv1_STATE_VARIABLE_VarMap_16, ((MR_Word) libs__polyhedron__wrapper_arg_5), &libs__polyhedron__conv0_STATE_VARIABLE_Varset_18);
    *libs__polyhedron__wrapper_arg_2 = ((MR_Box) (libs__polyhedron__conv2_STATE_VARIABLE_Term_14));
    *libs__polyhedron__wrapper_arg_4 = ((MR_Box) (libs__polyhedron__conv1_STATE_VARIABLE_VarMap_16));
    *libs__polyhedron__wrapper_arg_6 = ((MR_Box) (libs__polyhedron__conv0_STATE_VARIABLE_Varset_18));
  }
}

static void MR_CALL 
libs__polyhedron__transform_constraint_7_p_0(
  MR_Word libs__polyhedron__Sigma_8,
  MR_Word libs__polyhedron__STATE_VARIABLE_Constraint_0_15,
  MR_Word * libs__polyhedron__STATE_VARIABLE_Constraint_16,
  MR_Word libs__polyhedron__STATE_VARIABLE_VarMap_0_17,
  MR_Word * libs__polyhedron__STATE_VARIABLE_VarMap_18,
  MR_Word libs__polyhedron__STATE_VARIABLE_Varset_0_19,
  MR_Word * libs__polyhedron__STATE_VARIABLE_Varset_20)
{
  {
    MR_Word libs__polyhedron__TypeInfo_37_37;
    MR_Word libs__polyhedron__Op_13;
    MR_Word libs__polyhedron__Const_14;
    MR_Word libs__polyhedron__STATE_VARIABLE_Terms_21_21;
    MR_Word libs__polyhedron__STATE_VARIABLE_Terms_23_23;
    MR_Word libs__polyhedron__Var_26;
    MR_Word libs__polyhedron__STATE_VARIABLE_Terms_27_27;
    MR_Word libs__polyhedron__Var_28;
    MR_Word libs__polyhedron__Var_30;
    MR_Box libs__polyhedron__conv4_STATE_VARIABLE_VarMap_18;
    MR_Box libs__polyhedron__conv3_STATE_VARIABLE_Varset_20;

    libs__lp_rational__deconstruct_constraint_4_p_0(libs__polyhedron__STATE_VARIABLE_Constraint_0_15, &libs__polyhedron__STATE_VARIABLE_Terms_21_21, &libs__polyhedron__Op_13, &libs__polyhedron__Const_14);
    libs__polyhedron__TypeInfo_37_37 = (MR_Word) &libs__polyhedron_scalar_common_2[1];
    mercury__list__map_foldl2_7_p_0(libs__polyhedron__TypeInfo_37_37, libs__polyhedron__TypeInfo_37_37, (MR_Word) &libs__polyhedron_scalar_common_2[0], (MR_Word) &libs__polyhedron_scalar_common_1[3], (MR_Word) &libs__polyhedron_scalar_common_2[8], libs__polyhedron__STATE_VARIABLE_Terms_21_21, &libs__polyhedron__STATE_VARIABLE_Terms_23_23, ((MR_Box) (libs__polyhedron__STATE_VARIABLE_VarMap_0_17)), &libs__polyhedron__conv4_STATE_VARIABLE_VarMap_18, ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Varset_0_19)), &libs__polyhedron__conv3_STATE_VARIABLE_Varset_20);
    *libs__polyhedron__STATE_VARIABLE_VarMap_18 = ((MR_Word) libs__polyhedron__conv4_STATE_VARIABLE_VarMap_18);
    *libs__polyhedron__STATE_VARIABLE_Varset_20 = ((MR_Word) libs__polyhedron__conv3_STATE_VARIABLE_Varset_20);
    libs__polyhedron__Var_28 = libs__rat__f_minus_1_f_0(libs__polyhedron__Const_14);
    {
      libs__polyhedron__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_26, 0) = ((MR_Box) (libs__polyhedron__Sigma_8));
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_26, 1) = ((MR_Box) (libs__polyhedron__Var_28));
    }
    mercury__list__cons_3_p_0(libs__polyhedron__TypeInfo_37_37, ((MR_Box) (libs__polyhedron__Var_26)), libs__polyhedron__STATE_VARIABLE_Terms_23_23, &libs__polyhedron__STATE_VARIABLE_Terms_27_27);
    libs__polyhedron__Var_30 = libs__rat__zero_0_f_0();
    *libs__polyhedron__STATE_VARIABLE_Constraint_16 = libs__lp_rational__construct_constraint_3_f_0(libs__polyhedron__STATE_VARIABLE_Terms_27_27, libs__polyhedron__Op_13, libs__polyhedron__Var_30);
  }
}

static void MR_CALL 
libs__polyhedron__transform_polyhedron_5_p_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box * libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3,
  MR_Box * libs__polyhedron__wrapper_arg_4,
  MR_Box libs__polyhedron__wrapper_arg_5,
  MR_Box * libs__polyhedron__wrapper_arg_6)
{
  {
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
    MR_Word libs__polyhedron__conv2_STATE_VARIABLE_Constraint_16;
    MR_Word libs__polyhedron__conv1_STATE_VARIABLE_VarMap_18;
    MR_Word libs__polyhedron__conv0_STATE_VARIABLE_Varset_20;

    libs__polyhedron__transform_constraint_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__closure, (MR_Integer) 3))), ((MR_Word) libs__polyhedron__wrapper_arg_1), &libs__polyhedron__conv2_STATE_VARIABLE_Constraint_16, ((MR_Word) libs__polyhedron__wrapper_arg_3), &libs__polyhedron__conv1_STATE_VARIABLE_VarMap_18, ((MR_Word) libs__polyhedron__wrapper_arg_5), &libs__polyhedron__conv0_STATE_VARIABLE_Varset_20);
    *libs__polyhedron__wrapper_arg_2 = ((MR_Box) (libs__polyhedron__conv2_STATE_VARIABLE_Constraint_16));
    *libs__polyhedron__wrapper_arg_4 = ((MR_Box) (libs__polyhedron__conv1_STATE_VARIABLE_VarMap_18));
    *libs__polyhedron__wrapper_arg_6 = ((MR_Box) (libs__polyhedron__conv0_STATE_VARIABLE_Varset_20));
  }
}

static void MR_CALL 
libs__polyhedron__transform_polyhedron_5_p_0(
  MR_Word libs__polyhedron__Poly_6,
  MR_Word libs__polyhedron__Polys0_7,
  MR_Word * libs__polyhedron__Polys_8,
  MR_Word libs__polyhedron__STATE_VARIABLE_PolyInfo_0_16,
  MR_Word * libs__polyhedron__STATE_VARIABLE_PolyInfo_17)
{
  {
    MR_Word libs__polyhedron__TypeInfo_33_33;
    MR_Word libs__polyhedron__TypeCtorInfo_34_34;
    MR_Word libs__polyhedron__VarMaps_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__STATE_VARIABLE_PolyInfo_0_16, (MR_Integer) 0)));
    MR_Word libs__polyhedron__Sigmas_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__STATE_VARIABLE_PolyInfo_0_16, (MR_Integer) 1)));
    MR_Word libs__polyhedron__Sigma_13;
    MR_Word libs__polyhedron__NewEqns_14;
    MR_Word libs__polyhedron__VarMap_15;
    MR_Word libs__polyhedron__STATE_VARIABLE_Varset_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__STATE_VARIABLE_PolyInfo_0_16, (MR_Integer) 2)));
    MR_Word libs__polyhedron__STATE_VARIABLE_Varset_19_19;
    MR_Word libs__polyhedron__Var_20;
    MR_Word libs__polyhedron__Var_21;
    MR_Word libs__polyhedron__STATE_VARIABLE_Varset_22_22;
    MR_Word libs__polyhedron__Var_24;
    MR_Word libs__polyhedron__Var_25;
    MR_Box libs__polyhedron__conv4_VarMap_15;
    MR_Box libs__polyhedron__conv3_STATE_VARIABLE_Varset_22_22;

    mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &libs__polyhedron__Sigma_13, libs__polyhedron__STATE_VARIABLE_Varset_18_18, &libs__polyhedron__STATE_VARIABLE_Varset_19_19);
    {
      libs__polyhedron__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_20, 0) = ((MR_Box) (&libs__polyhedron_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_20, 1) = ((MR_Box) (libs__polyhedron__transform_polyhedron_5_p_0_1));
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_20, 3) = ((MR_Box) (libs__polyhedron__Sigma_13));
    }
    libs__polyhedron__TypeInfo_33_33 = (MR_Word) &libs__polyhedron_scalar_common_1[1];
    libs__polyhedron__Var_21 = mercury__map__init_0_f_0(libs__polyhedron__TypeInfo_33_33, libs__polyhedron__TypeInfo_33_33);
    libs__polyhedron__TypeCtorInfo_34_34 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
    mercury__list__map_foldl2_7_p_0(libs__polyhedron__TypeCtorInfo_34_34, libs__polyhedron__TypeCtorInfo_34_34, (MR_Word) &libs__polyhedron_scalar_common_2[0], (MR_Word) &libs__polyhedron_scalar_common_1[3], libs__polyhedron__Var_20, libs__polyhedron__Poly_6, &libs__polyhedron__NewEqns_14, ((MR_Box) (libs__polyhedron__Var_21)), &libs__polyhedron__conv4_VarMap_15, ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Varset_19_19)), &libs__polyhedron__conv3_STATE_VARIABLE_Varset_22_22);
    libs__polyhedron__VarMap_15 = ((MR_Word) libs__polyhedron__conv4_VarMap_15);
    libs__polyhedron__STATE_VARIABLE_Varset_22_22 = ((MR_Word) libs__polyhedron__conv3_STATE_VARIABLE_Varset_22_22);
    *libs__polyhedron__Polys_8 = mercury__list__f_43_43_2_f_0(libs__polyhedron__TypeCtorInfo_34_34, libs__polyhedron__NewEqns_14, libs__polyhedron__Polys0_7);
    {
      libs__polyhedron__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__polyhedron__Var_24, 0) = ((MR_Box) (libs__polyhedron__VarMap_15));
      MR_hl_field(MR_mktag(1), libs__polyhedron__Var_24, 1) = ((MR_Box) (libs__polyhedron__VarMaps_11));
    }
    {
      libs__polyhedron__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__polyhedron__Var_25, 0) = ((MR_Box) (libs__polyhedron__Sigma_13));
      MR_hl_field(MR_mktag(1), libs__polyhedron__Var_25, 1) = ((MR_Box) (libs__polyhedron__Sigmas_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *libs__polyhedron__STATE_VARIABLE_PolyInfo_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__polyhedron__Var_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__polyhedron__Var_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Varset_22_22));
    }
  }
}

void MR_CALL 
libs__polyhedron__write_polyhedron_4_p_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__Varset_2)
{
  if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    mercury__io__write_string_3_p_0((MR_String) "\tEmpty\n");
  }
  else
  {
    MR_Word libs__polyhedron__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));

    if ((libs__polyhedron__Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "\tUniverse\n");
    }
    else
      libs__lp_rational__write_constraints_4_p_0(libs__polyhedron__Var_27, libs__polyhedron__Varset_2);
  }
}

MR_Word MR_CALL 
libs__polyhedron__zero_vars_2_f_0(
  MR_Word libs__polyhedron__Vars_1,
  MR_Word libs__polyhedron__HeadVar__2_2)
{
  {
    MR_Word libs__polyhedron__HeadVar__3_3;

    if ((libs__polyhedron__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word libs__polyhedron__Constraints0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word libs__polyhedron__Constraints_7;

      libs__polyhedron__Constraints_7 = libs__lp_rational__set_vars_to_zero_2_f_0(libs__polyhedron__Vars_1, libs__polyhedron__Constraints0_6);
      {
        libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__3_3, 0) = ((MR_Box) (libs__polyhedron__Constraints_7));
      }
    }
    return libs__polyhedron__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
libs__polyhedron__substitute_vars_2_f_0(
  MR_Word libs__polyhedron__SubstMap_4,
  MR_Word libs__polyhedron__Polyhedron0_5)
{
  {
    MR_Word libs__polyhedron__Polyhedron_6;
    MR_Word libs__polyhedron__Constraints0_7;
    MR_Word libs__polyhedron__Constraints_8;

    if ((libs__polyhedron__Polyhedron0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Box libs__polyhedron__conv0_Constraints0_7;

      libs__polyhedron__conv0_Constraints0_7 = mercury__require__unexpected_3_f_0((MR_Word) &libs__polyhedron_scalar_common_1[0], (MR_String) "libs.polyhedron", (MR_String) "function \140libs.polyhedron.non_false_constraints\'/1", (MR_String) "empty polyhedron");
      libs__polyhedron__Constraints0_7 = ((MR_Word) libs__polyhedron__conv0_Constraints0_7);
    }
    else
      libs__polyhedron__Constraints0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__Polyhedron0_5, (MR_Integer) 0)));
    libs__polyhedron__Constraints_8 = libs__lp_rational__substitute_vars_2_f_0(libs__polyhedron__SubstMap_4, libs__polyhedron__Constraints0_7);
    libs__polyhedron__Polyhedron_6 = libs__polyhedron__from_constraints_1_f_0(libs__polyhedron__Constraints_8);
    return libs__polyhedron__Polyhedron_6;
  }
}

MR_Word MR_CALL 
libs__polyhedron__substitute_vars_3_f_0(
  MR_Word libs__polyhedron__OldVars_5,
  MR_Word libs__polyhedron__NewVars_6,
  MR_Word libs__polyhedron__Polyhedron0_7)
{
  {
    MR_Word libs__polyhedron__Polyhedron_8;
    MR_Word libs__polyhedron__Constraints0_9;
    MR_Word libs__polyhedron__Constraints_10;

    if ((libs__polyhedron__Polyhedron0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Box libs__polyhedron__conv0_Constraints0_9;

      libs__polyhedron__conv0_Constraints0_9 = mercury__require__unexpected_3_f_0((MR_Word) &libs__polyhedron_scalar_common_1[0], (MR_String) "libs.polyhedron", (MR_String) "function \140libs.polyhedron.non_false_constraints\'/1", (MR_String) "empty polyhedron");
      libs__polyhedron__Constraints0_9 = ((MR_Word) libs__polyhedron__conv0_Constraints0_9);
    }
    else
      libs__polyhedron__Constraints0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__Polyhedron0_7, (MR_Integer) 0)));
    libs__polyhedron__Constraints_10 = libs__lp_rational__substitute_vars_3_f_0(libs__polyhedron__OldVars_5, libs__polyhedron__NewVars_6, libs__polyhedron__Constraints0_9);
    libs__polyhedron__Polyhedron_8 = libs__polyhedron__from_constraints_1_f_0(libs__polyhedron__Constraints_10);
    return libs__polyhedron__Polyhedron_8;
  }
}

MR_Word MR_CALL 
libs__polyhedron__project_3_f_0(
  MR_Word libs__polyhedron__Vars_5,
  MR_Word libs__polyhedron__Varset_6,
  MR_Word libs__polyhedron__Polyhedron0_7)
{
  {
    MR_Word libs__polyhedron__Polyhedron_8;

    libs__polyhedron__project_4_p_0(libs__polyhedron__Vars_5, libs__polyhedron__Varset_6, libs__polyhedron__Polyhedron0_7, &libs__polyhedron__Polyhedron_8);
    return libs__polyhedron__Polyhedron_8;
  }
}

void MR_CALL 
libs__polyhedron__project_4_p_0(
  MR_Word libs__polyhedron__Vars_1,
  MR_Word libs__polyhedron__Varset_2,
  MR_Word libs__polyhedron__HeadVar__3_3,
  MR_Word * libs__polyhedron__HeadVar__4_4)
{
  if ((libs__polyhedron__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *libs__polyhedron__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word libs__polyhedron__Constraints0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word libs__polyhedron__ProjectionResult_11;

    libs__lp_rational__project_4_p_0(libs__polyhedron__Vars_1, libs__polyhedron__Varset_2, libs__polyhedron__Constraints0_9, &libs__polyhedron__ProjectionResult_11);
    switch (MR_tag((MR_Word) libs__polyhedron__ProjectionResult_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(libs__polyhedron__ProjectionResult_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *libs__polyhedron__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "libs.polyhedron", (MR_String) "predicate \140libs.polyhedron.project\'/4", (MR_String) "abort from project");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__polyhedron__Constraints1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__ProjectionResult_11, (MR_Integer) 0)));
          MR_Word libs__polyhedron__Constraints_13;

          libs__lp_rational__restore_equalities_2_p_0(libs__polyhedron__Constraints1_12, &libs__polyhedron__Constraints_13);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *libs__polyhedron__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__polyhedron__Constraints_13));
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
libs__polyhedron__project_all_3_f_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1)
{
  {
    MR_Box libs__polyhedron__wrapper_arg_2;
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
    MR_Word libs__polyhedron__conv0_LambdaHeadVar__2_16;

    libs__polyhedron__conv0_LambdaHeadVar__2_16 = libs__polyhedron__IntroducedFrom__func__project_all__541__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__closure, (MR_Integer) 4))), ((MR_Word) libs__polyhedron__wrapper_arg_1));
    libs__polyhedron__wrapper_arg_2 = ((MR_Box) (libs__polyhedron__conv0_LambdaHeadVar__2_16));
    return libs__polyhedron__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
libs__polyhedron__project_all_3_f_0(
  MR_Word libs__polyhedron__Varset_5,
  MR_Word libs__polyhedron__Locals_6,
  MR_Word libs__polyhedron__Polyhedra_7)
{
  {
    MR_Word libs__polyhedron__HeadVar__4_4;
    MR_Word libs__polyhedron__TypeCtorInfo_21_21 = (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0;
    MR_Word libs__polyhedron__Var_14;

    {
      libs__polyhedron__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_14, 0) = ((MR_Box) (&libs__polyhedron_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_14, 1) = ((MR_Box) (libs__polyhedron__project_all_3_f_0_1));
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_14, 3) = ((MR_Box) (libs__polyhedron__Varset_5));
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_14, 4) = ((MR_Box) (libs__polyhedron__Locals_6));
    }
    libs__polyhedron__HeadVar__4_4 = mercury__list__map_2_f_0(libs__polyhedron__TypeCtorInfo_21_21, libs__polyhedron__TypeCtorInfo_21_21, libs__polyhedron__Var_14, libs__polyhedron__Polyhedra_7);
    return libs__polyhedron__HeadVar__4_4;
  }
}

static MR_bool MR_CALL 
libs__polyhedron__widen_3_f_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;

    libs__polyhedron__succeeded = libs__lp_rational__entailed_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__closure, (MR_Integer) 4))), ((MR_Word) libs__polyhedron__wrapper_arg_1));
    return libs__polyhedron__succeeded;
  }
}

MR_Word MR_CALL 
libs__polyhedron__widen_3_f_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__Varset_3)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Word libs__polyhedron__HeadVar__4_4;

    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((libs__polyhedron__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        libs__polyhedron__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Box libs__polyhedron__conv0_HeadVar__4_4;

        libs__polyhedron__conv0_HeadVar__4_4 = mercury__require__unexpected_3_f_0((MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, (MR_String) "libs.polyhedron", (MR_String) "function \140libs.polyhedron.widen\'/3", (MR_String) "empty polyhedron");
        libs__polyhedron__HeadVar__4_4 = ((MR_Word) libs__polyhedron__conv0_HeadVar__4_4);
      }
    else
    {
      MR_Word libs__polyhedron__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));

      if ((libs__polyhedron__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Box libs__polyhedron__conv1_HeadVar__4_4;

        libs__polyhedron__conv1_HeadVar__4_4 = mercury__require__unexpected_3_f_0((MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, (MR_String) "libs.polyhedron", (MR_String) "function \140libs.polyhedron.widen\'/3", (MR_String) "empty polyhedron");
        libs__polyhedron__HeadVar__4_4 = ((MR_Word) libs__polyhedron__conv1_HeadVar__4_4);
      }
      else
      {
        MR_Word libs__polyhedron__Poly2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word libs__polyhedron__WidenedEqns_19;
        MR_Word libs__polyhedron__Var_20;

        {
          libs__polyhedron__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__polyhedron__Var_20, 0) = ((MR_Box) (&libs__polyhedron_scalar_common_5[3]));
          MR_hl_field(MR_mktag(0), libs__polyhedron__Var_20, 1) = ((MR_Box) (libs__polyhedron__widen_3_f_0_1));
          MR_hl_field(MR_mktag(0), libs__polyhedron__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), libs__polyhedron__Var_20, 3) = ((MR_Box) (libs__polyhedron__Varset_3));
          MR_hl_field(MR_mktag(0), libs__polyhedron__Var_20, 4) = ((MR_Box) (libs__polyhedron__Poly2_17));
        }
        libs__polyhedron__WidenedEqns_19 = mercury__list__filter_2_f_0((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, libs__polyhedron__Var_20, libs__polyhedron__Var_25);
        {
          libs__polyhedron__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__4_4, 0) = ((MR_Box) (libs__polyhedron__WidenedEqns_19));
        }
      }
    }
    return libs__polyhedron__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
libs__polyhedron__bounding_box_2_f_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__Varset_2)
{
  {
    MR_Word libs__polyhedron__HeadVar__3_3;

    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word libs__polyhedron__Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word libs__polyhedron__Var_7;

      libs__polyhedron__Var_7 = libs__lp_rational__bounding_box_2_f_0(libs__polyhedron__Varset_2, libs__polyhedron__Constraints_5);
      {
        libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__3_3, 0) = ((MR_Box) (libs__polyhedron__Var_7));
      }
    }
    return libs__polyhedron__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
libs__polyhedron__convex_union_4_f_0(
  MR_Word libs__polyhedron__Varset_6,
  MR_Word libs__polyhedron__MaxMatrixSize_7,
  MR_Word libs__polyhedron__PolyhedronA_8,
  MR_Word libs__polyhedron__PolyhedronB_9)
{
  {
    MR_Word libs__polyhedron__Polyhedron_10;

    libs__polyhedron__convex_union_5_p_0(libs__polyhedron__Varset_6, libs__polyhedron__MaxMatrixSize_7, libs__polyhedron__PolyhedronA_8, libs__polyhedron__PolyhedronB_9, &libs__polyhedron__Polyhedron_10);
    return libs__polyhedron__Polyhedron_10;
  }
}

void MR_CALL 
libs__polyhedron__convex_union_4_p_0(
  MR_Word libs__polyhedron__Varset_5,
  MR_Word libs__polyhedron__PolyhedronA_6,
  MR_Word libs__polyhedron__PolyhedronB_7,
  MR_Word * libs__polyhedron__Polyhedron_8)
{
  {
    libs__polyhedron__convex_union_5_p_0(libs__polyhedron__Varset_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__polyhedron__PolyhedronA_6, libs__polyhedron__PolyhedronB_7, libs__polyhedron__Polyhedron_8);
  }
}

MR_Word MR_CALL 
libs__polyhedron__convex_union_3_f_0(
  MR_Word libs__polyhedron__Varset_5,
  MR_Word libs__polyhedron__PolyhedronA_6,
  MR_Word libs__polyhedron__PolyhedronB_7)
{
  {
    MR_Word libs__polyhedron__Polyhedron_8;

    libs__polyhedron__convex_union_5_p_0(libs__polyhedron__Varset_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__polyhedron__PolyhedronA_6, libs__polyhedron__PolyhedronB_7, &libs__polyhedron__Polyhedron_8);
    return libs__polyhedron__Polyhedron_8;
  }
}

void MR_CALL 
libs__polyhedron__convex_union_5_p_0(
  MR_Word libs__polyhedron__Varset_1,
  MR_Word libs__polyhedron__MaybeMaxSize_2,
  MR_Word libs__polyhedron__HeadVar__3_3,
  MR_Word libs__polyhedron__HeadVar__4_4,
  MR_Word * libs__polyhedron__HeadVar__5_5)
{
  if ((libs__polyhedron__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((libs__polyhedron__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *libs__polyhedron__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      *libs__polyhedron__HeadVar__5_5 = libs__polyhedron__HeadVar__4_4;
  else
  {
    MR_Word libs__polyhedron__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__3_3, (MR_Integer) 0)));

    if ((libs__polyhedron__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *libs__polyhedron__HeadVar__5_5 = libs__polyhedron__HeadVar__3_3;
    else
    {
      MR_Word libs__polyhedron__ConstraintsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__4_4, (MR_Integer) 0)));
      MR_Word libs__polyhedron__Var_19;
      MR_Word libs__polyhedron__Var_20;

      {
        libs__polyhedron__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), libs__polyhedron__Var_20, 0) = ((MR_Box) (libs__polyhedron__ConstraintsB_17));
        MR_hl_field(MR_mktag(1), libs__polyhedron__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        libs__polyhedron__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), libs__polyhedron__Var_19, 0) = ((MR_Box) (libs__polyhedron__Var_22));
        MR_hl_field(MR_mktag(1), libs__polyhedron__Var_19, 1) = ((MR_Box) (libs__polyhedron__Var_20));
      }
      libs__polyhedron__convex_hull_4_p_0(libs__polyhedron__Var_19, libs__polyhedron__HeadVar__5_5, libs__polyhedron__MaybeMaxSize_2, libs__polyhedron__Varset_1);
    }
  }
}

static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_4(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2)
{
  {
    MR_Box libs__polyhedron__wrapper_arg_3;
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
    MR_Word libs__polyhedron__conv6_LambdaHeadVar__3_42;

    libs__polyhedron__conv6_LambdaHeadVar__3_42 = libs__polyhedron__IntroducedFrom__func__convex_hull__360__1_2_f_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    libs__polyhedron__wrapper_arg_3 = ((MR_Box) (libs__polyhedron__conv6_LambdaHeadVar__3_42));
    return libs__polyhedron__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_3(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1)
{
  {
    MR_Box libs__polyhedron__wrapper_arg_2;
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
    MR_Word libs__polyhedron__conv5_HeadVar__2_2;

    libs__polyhedron__conv5_HeadVar__2_2 = libs__lp_rational__lp_term_1_f_0(((MR_Word) libs__polyhedron__wrapper_arg_1));
    libs__polyhedron__wrapper_arg_2 = ((MR_Box) (libs__polyhedron__conv5_HeadVar__2_2));
    return libs__polyhedron__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_2(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1)
{
  {
    MR_Box libs__polyhedron__wrapper_arg_2;
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
    MR_Word libs__polyhedron__conv4_HeadVar__2_2;

    libs__polyhedron__conv4_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) libs__polyhedron__wrapper_arg_1));
    libs__polyhedron__wrapper_arg_2 = ((MR_Box) (libs__polyhedron__conv4_HeadVar__2_2));
    return libs__polyhedron__wrapper_arg_2;
  }
}

static void MR_CALL 
libs__polyhedron__convex_hull_4_p_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box * libs__polyhedron__wrapper_arg_3,
  MR_Box libs__polyhedron__wrapper_arg_4,
  MR_Box * libs__polyhedron__wrapper_arg_5)
{
  {
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
    MR_Word libs__polyhedron__conv1_Polys_8;
    MR_Word libs__polyhedron__conv0_STATE_VARIABLE_PolyInfo_17;

    libs__polyhedron__transform_polyhedron_5_p_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2), &libs__polyhedron__conv1_Polys_8, ((MR_Word) libs__polyhedron__wrapper_arg_4), &libs__polyhedron__conv0_STATE_VARIABLE_PolyInfo_17);
    *libs__polyhedron__wrapper_arg_3 = ((MR_Box) (libs__polyhedron__conv1_Polys_8));
    *libs__polyhedron__wrapper_arg_5 = ((MR_Box) (libs__polyhedron__conv0_STATE_VARIABLE_PolyInfo_17));
  }
}

static void MR_CALL 
libs__polyhedron__convex_hull_4_p_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word * libs__polyhedron__HeadVar__2_2,
  MR_Word libs__polyhedron__MaybeMaxSize_3,
  MR_Word libs__polyhedron__Varset0_4)
{
  {
    MR_bool libs__polyhedron__succeeded;

    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.polyhedron", (MR_String) "predicate \140libs.polyhedron.convex_hull\'/4", (MR_String) "empty list");
        return;
      }
    }
    else
    {
      MR_Word libs__polyhedron__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word libs__polyhedron__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));

      if ((libs__polyhedron__Var_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *libs__polyhedron__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__polyhedron__Var_61));
        }
      else
      {
        MR_Word libs__polyhedron__TypeInfo_18_75;
        MR_Word libs__polyhedron__TypeInfo_17_90;
        MR_Word libs__polyhedron__TypeCtorInfo_18_91;
        MR_Word libs__polyhedron__PolyInfo0_22;
        MR_Word libs__polyhedron__Matrix0_23;
        MR_Word libs__polyhedron__PolyInfo_24;
        MR_Word libs__polyhedron__VarMaps_25;
        MR_Word libs__polyhedron__Sigmas_26;
        MR_Word libs__polyhedron__Varset_27;
        MR_Word libs__polyhedron__Matrix1_28;
        MR_Word libs__polyhedron__Matrix_29;
        MR_Word libs__polyhedron__VarsToEliminate_34;
        MR_Word libs__polyhedron__ProjectionResult_35;
        MR_Word libs__polyhedron__Var_44;
        MR_Word libs__polyhedron__SigmaConstraints_81;
        MR_Word libs__polyhedron__SigmaTerms_82;
        MR_Word libs__polyhedron__STATE_VARIABLE_Constraints_11_84;
        MR_Word libs__polyhedron__Var_86;
        MR_Word libs__polyhedron__Var_89;
        MR_Box libs__polyhedron__conv3_Matrix0_23;
        MR_Box libs__polyhedron__conv2_PolyInfo_24;
        MR_Box libs__polyhedron__conv7_Var_44;

        {
          libs__polyhedron__PolyInfo0_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__polyhedron__PolyInfo0_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), libs__polyhedron__PolyInfo0_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), libs__polyhedron__PolyInfo0_22, 2) = ((MR_Box) (libs__polyhedron__Varset0_4));
        }
        libs__polyhedron__TypeInfo_18_75 = (MR_Word) &libs__polyhedron_scalar_common_1[0];
        mercury__list__foldl2_6_p_0(libs__polyhedron__TypeInfo_18_75, libs__polyhedron__TypeInfo_18_75, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedra_info_0, (MR_Word) &libs__polyhedron_scalar_common_2[4], libs__polyhedron__HeadVar__1_1, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__polyhedron__conv3_Matrix0_23, ((MR_Box) (libs__polyhedron__PolyInfo0_22)), &libs__polyhedron__conv2_PolyInfo_24);
        libs__polyhedron__Matrix0_23 = ((MR_Word) libs__polyhedron__conv3_Matrix0_23);
        libs__polyhedron__PolyInfo_24 = ((MR_Word) libs__polyhedron__conv2_PolyInfo_24);
        libs__polyhedron__VarMaps_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__PolyInfo_24, (MR_Integer) 0)));
        libs__polyhedron__Sigmas_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__PolyInfo_24, (MR_Integer) 1)));
        libs__polyhedron__Varset_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__PolyInfo_24, (MR_Integer) 2)));
        libs__polyhedron__TypeInfo_17_90 = (MR_Word) &libs__polyhedron_scalar_common_1[1];
        libs__polyhedron__TypeCtorInfo_18_91 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
        libs__polyhedron__SigmaConstraints_81 = mercury__list__map_2_f_0(libs__polyhedron__TypeInfo_17_90, libs__polyhedron__TypeCtorInfo_18_91, (MR_Word) &libs__polyhedron_scalar_common_2[5], libs__polyhedron__Sigmas_26);
        mercury__list__append_3_p_1(libs__polyhedron__TypeCtorInfo_18_91, libs__polyhedron__SigmaConstraints_81, libs__polyhedron__Matrix0_23, &libs__polyhedron__STATE_VARIABLE_Constraints_11_84);
        libs__polyhedron__SigmaTerms_82 = mercury__list__map_2_f_0(libs__polyhedron__TypeInfo_17_90, (MR_Word) &libs__polyhedron_scalar_common_2[1], (MR_Word) &libs__polyhedron_scalar_common_2[6], libs__polyhedron__Sigmas_26);
        libs__polyhedron__Var_89 = libs__rat__one_0_f_0();
        libs__polyhedron__Var_86 = libs__lp_rational__construct_constraint_3_f_0(libs__polyhedron__SigmaTerms_82, (MR_Integer) 1, libs__polyhedron__Var_89);
        mercury__list__cons_3_p_0(libs__polyhedron__TypeCtorInfo_18_91, ((MR_Box) (libs__polyhedron__Var_86)), libs__polyhedron__STATE_VARIABLE_Constraints_11_84, &libs__polyhedron__Matrix1_28);
        libs__polyhedron__Matrix_29 = libs__polyhedron__add_last_constraints_2_f_0(libs__polyhedron__Matrix1_28, libs__polyhedron__VarMaps_25);
        libs__polyhedron__conv7_Var_44 = mercury__list__foldl_3_f_0((MR_Word) &libs__polyhedron_scalar_common_2[0], (MR_Word) &libs__polyhedron_scalar_common_1[2], (MR_Word) &libs__polyhedron_scalar_common_2[7], libs__polyhedron__VarMaps_25, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
        libs__polyhedron__Var_44 = ((MR_Word) libs__polyhedron__conv7_Var_44);
        libs__polyhedron__VarsToEliminate_34 = mercury__list__f_43_43_2_f_0((MR_Word) &libs__polyhedron_scalar_common_1[1], libs__polyhedron__Sigmas_26, libs__polyhedron__Var_44);
        libs__lp_rational__project_5_p_0(libs__polyhedron__VarsToEliminate_34, libs__polyhedron__Varset_27, libs__polyhedron__MaybeMaxSize_3, libs__polyhedron__Matrix_29, &libs__polyhedron__ProjectionResult_35);
        switch (MR_tag((MR_Word) libs__polyhedron__ProjectionResult_35)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(libs__polyhedron__ProjectionResult_35)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *libs__polyhedron__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                {
                  MR_Word libs__polyhedron__Var_51;

                  libs__polyhedron__Var_51 = libs__lp_rational__nonneg_box_2_f_0(libs__polyhedron__VarsToEliminate_34, libs__polyhedron__Matrix_29);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *libs__polyhedron__HeadVar__2_2 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__polyhedron__Var_51));
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word libs__polyhedron__STATE_VARIABLE_Hull_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__ProjectionResult_35, (MR_Integer) 0)));
              MR_Word libs__polyhedron__STATE_VARIABLE_Hull_47_47;
              MR_Word libs__polyhedron__STATE_VARIABLE_Hull_48_48;
              MR_Word libs__polyhedron__STATE_VARIABLE_Hull_49_49;

              libs__lp_rational__restore_equalities_2_p_0(libs__polyhedron__STATE_VARIABLE_Hull_46_46, &libs__polyhedron__STATE_VARIABLE_Hull_47_47);
              libs__polyhedron__STATE_VARIABLE_Hull_48_48 = libs__lp_rational__simplify_constraints_1_f_0(libs__polyhedron__STATE_VARIABLE_Hull_47_47);
              libs__polyhedron__succeeded = libs__lp_rational__remove_some_entailed_constraints_3_p_0(libs__polyhedron__Varset_27, libs__polyhedron__STATE_VARIABLE_Hull_48_48, &libs__polyhedron__STATE_VARIABLE_Hull_49_49);
              if (libs__polyhedron__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *libs__polyhedron__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Hull_49_49));
                }
              else
                *libs__polyhedron__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0_2(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box * libs__polyhedron__wrapper_arg_2)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
    MR_Word libs__polyhedron__conv2_Constraint_6;

    libs__polyhedron__succeeded = libs__polyhedron__make_last_constraint_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__closure, (MR_Integer) 3))), ((MR_Word) libs__polyhedron__wrapper_arg_1), &libs__polyhedron__conv2_Constraint_6);
    if (libs__polyhedron__succeeded)
    {
      *libs__polyhedron__wrapper_arg_2 = ((MR_Box) (libs__polyhedron__conv2_Constraint_6));
      libs__polyhedron__succeeded = MR_TRUE;
    }
    return libs__polyhedron__succeeded;
  }
}

static MR_Box MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2)
{
  {
    MR_Box libs__polyhedron__wrapper_arg_3;
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
    MR_Word libs__polyhedron__conv0_HeadVar__3_3;

    libs__polyhedron__conv0_HeadVar__3_3 = libs__polyhedron__get_keys_from_map_2_f_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    libs__polyhedron__wrapper_arg_3 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__3_3));
    return libs__polyhedron__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0(
  MR_Word libs__polyhedron__STATE_VARIABLE_Constraints_0_8,
  MR_Word libs__polyhedron__VarMaps_5)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Word libs__polyhedron__STATE_VARIABLE_Constraints_9;
    MR_Word libs__polyhedron__TypeCtorInfo_14_14;
    MR_Word libs__polyhedron__Keys_6;
    MR_Word libs__polyhedron__NewLastConstraints_7;
    MR_Word libs__polyhedron__Var_10;
    MR_Word libs__polyhedron__Var_11;
    MR_Word libs__polyhedron__Var_19;
    MR_Box libs__polyhedron__conv1_Keys_6;

    libs__polyhedron__Var_19 = mercury__set__init_0_f_0((MR_Word) &libs__polyhedron_scalar_common_1[1]);
    libs__polyhedron__conv1_Keys_6 = mercury__list__foldl_3_f_0((MR_Word) &libs__polyhedron_scalar_common_2[0], (MR_Word) &libs__polyhedron_scalar_common_1[4], (MR_Word) &libs__polyhedron_scalar_common_2[3], libs__polyhedron__VarMaps_5, ((MR_Box) (libs__polyhedron__Var_19)));
    libs__polyhedron__Keys_6 = ((MR_Word) libs__polyhedron__conv1_Keys_6);
    libs__polyhedron__TypeCtorInfo_14_14 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
    {
      libs__polyhedron__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_10, 0) = ((MR_Box) (&libs__polyhedron_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_10, 1) = ((MR_Box) (libs__polyhedron__add_last_constraints_2_f_0_2));
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), libs__polyhedron__Var_10, 3) = ((MR_Box) (libs__polyhedron__VarMaps_5));
    }
    libs__polyhedron__NewLastConstraints_7 = mercury__set__filter_map_2_f_0((MR_Word) &libs__polyhedron_scalar_common_1[1], libs__polyhedron__TypeCtorInfo_14_14, libs__polyhedron__Var_10, libs__polyhedron__Keys_6);
    libs__polyhedron__Var_11 = mercury__set__to_sorted_list_1_f_0(libs__polyhedron__TypeCtorInfo_14_14, libs__polyhedron__NewLastConstraints_7);
    mercury__list__append_3_p_1(libs__polyhedron__TypeCtorInfo_14_14, libs__polyhedron__Var_11, libs__polyhedron__STATE_VARIABLE_Constraints_0_8, &libs__polyhedron__STATE_VARIABLE_Constraints_9);
    return libs__polyhedron__STATE_VARIABLE_Constraints_9;
  }
}

void MR_CALL 
libs__polyhedron__intersection_3_p_0(
  MR_Word libs__polyhedron__PolyA_4,
  MR_Word libs__polyhedron__PolyB_5,
  MR_Word * libs__polyhedron__HeadVar__3_3)
{
  *libs__polyhedron__HeadVar__3_3 = libs__polyhedron__intersection_2_f_0(libs__polyhedron__PolyA_4, libs__polyhedron__PolyB_5);
}

MR_Word MR_CALL 
libs__polyhedron__intersection_2_f_0(
  MR_Word libs__polyhedron__HeadVar__1_1,
  MR_Word libs__polyhedron__HeadVar__2_2)
{
  {
    MR_Word libs__polyhedron__HeadVar__3_3;

    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word libs__polyhedron__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));

      if ((libs__polyhedron__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word libs__polyhedron__MatrixB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word libs__polyhedron__Constraints_8;
        MR_Word libs__polyhedron__Constraints0_9;
        MR_Word libs__polyhedron__Constraints1_10;

        libs__polyhedron__Constraints0_9 = mercury__list__f_43_43_2_f_0((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, libs__polyhedron__Var_12, libs__polyhedron__MatrixB_7);
        libs__lp_rational__restore_equalities_2_p_0(libs__polyhedron__Constraints0_9, &libs__polyhedron__Constraints1_10);
        libs__polyhedron__Constraints_8 = libs__lp_rational__simplify_constraints_1_f_0(libs__polyhedron__Constraints1_10);
        {
          libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__3_3, 0) = ((MR_Box) (libs__polyhedron__Constraints_8));
        }
      }
    }
    return libs__polyhedron__HeadVar__3_3;
  }
}

void MR_CALL 
libs__polyhedron__optimize_3_p_0(
  MR_Word libs__polyhedron__Varset_1,
  MR_Word libs__polyhedron__HeadVar__2_2,
  MR_Word * libs__polyhedron__HeadVar__3_3)
{
  {
    MR_bool libs__polyhedron__succeeded;

    if ((libs__polyhedron__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word libs__polyhedron__Constraints0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word libs__polyhedron__Constraints_8;

      libs__polyhedron__Constraints_8 = libs__lp_rational__simplify_constraints_1_f_0(libs__polyhedron__Constraints0_6);
      libs__polyhedron__succeeded = libs__lp_rational__inconsistent_2_p_0(libs__polyhedron__Varset_1, libs__polyhedron__Constraints_8);
      if (libs__polyhedron__succeeded)
        *libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *libs__polyhedron__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__polyhedron__Constraints_8));
        }
    }
  }
}

static MR_bool MR_CALL 
libs__polyhedron__is_universe_1_p_0_1(
  MR_Box libs__polyhedron__closure_arg,
  MR_Box libs__polyhedron__wrapper_arg_1)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;

    libs__polyhedron__succeeded = libs__lp_rational__nonneg_constr_1_p_0(((MR_Word) libs__polyhedron__wrapper_arg_1));
    return libs__polyhedron__succeeded;
  }
}

MR_bool MR_CALL 
libs__polyhedron__is_universe_1_p_0(
  MR_Word libs__polyhedron__HeadVar__1_1)
{
  {
    MR_bool libs__polyhedron__succeeded = ((MR_tag((MR_Word) libs__polyhedron__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word libs__polyhedron__TypeCtorInfo_5_5;
    MR_Word libs__polyhedron__Constraints_2;
    MR_Word libs__polyhedron__Var_3;

    if (libs__polyhedron__succeeded)
    {
      libs__polyhedron__Constraints_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
      libs__polyhedron__Var_3 = (MR_Word) &libs__polyhedron_scalar_common_2[2];
      libs__polyhedron__TypeCtorInfo_5_5 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
      libs__polyhedron__succeeded = mercury__list__all_true_2_p_0(libs__polyhedron__TypeCtorInfo_5_5, libs__polyhedron__Var_3, libs__polyhedron__Constraints_2);
    }
    return libs__polyhedron__succeeded;
  }
}

MR_bool MR_CALL 
libs__polyhedron__is_empty_1_p_0(
  MR_Word libs__polyhedron__HeadVar__1_1)
{
  {
    MR_bool libs__polyhedron__succeeded = (libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return libs__polyhedron__succeeded;
  }
}

MR_Word MR_CALL 
libs__polyhedron__non_false_constraints_1_f_0(
  MR_Word libs__polyhedron__HeadVar__1_1)
{
  {
    MR_Word libs__polyhedron__HeadVar__2_2;

    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Box libs__polyhedron__conv0_HeadVar__2_2;

      libs__polyhedron__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &libs__polyhedron_scalar_common_1[0], (MR_String) "libs.polyhedron", (MR_String) "function \140libs.polyhedron.non_false_constraints\'/1", (MR_String) "empty polyhedron");
      libs__polyhedron__HeadVar__2_2 = ((MR_Word) libs__polyhedron__conv0_HeadVar__2_2);
    }
    else
      libs__polyhedron__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
    return libs__polyhedron__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__polyhedron__constraints_1_f_0(
  MR_Word libs__polyhedron__HeadVar__1_1)
{
  {
    MR_Word libs__polyhedron__HeadVar__2_2;

    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word libs__polyhedron__Var_4;

      libs__polyhedron__Var_4 = libs__lp_rational__false_constraint_0_f_0();
      {
        libs__polyhedron__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, 0) = ((MR_Box) (libs__polyhedron__Var_4));
        MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      libs__polyhedron__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
    return libs__polyhedron__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__polyhedron__from_constraints_1_f_0(
  MR_Word libs__polyhedron__HeadVar__1_1)
{
  {
    MR_bool libs__polyhedron__succeeded;
    MR_Word libs__polyhedron__HeadVar__2_2;

    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      libs__polyhedron__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &libs__polyhedron_scalar_common_3[0]);
    }
    else
    {
      MR_Word libs__polyhedron__C_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word libs__polyhedron__Cs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 1)));

      libs__polyhedron__succeeded = libs__lp_rational__is_false_1_p_0(libs__polyhedron__C_4);
      if (libs__polyhedron__succeeded)
        libs__polyhedron__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word libs__polyhedron__Polyhedron0_7;
        MR_Word libs__polyhedron__Var_9;

        libs__polyhedron__Polyhedron0_7 = libs__polyhedron__from_constraints_1_f_0(libs__polyhedron__Cs_5);
        {
          libs__polyhedron__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__polyhedron__Var_9, 0) = ((MR_Box) (libs__polyhedron__C_4));
          MR_hl_field(MR_mktag(1), libs__polyhedron__Var_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        if ((libs__polyhedron__Polyhedron0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          libs__polyhedron__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
        {
          MR_Word libs__polyhedron__MatrixB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__Polyhedron0_7, (MR_Integer) 0)));
          MR_Word libs__polyhedron__Constraints_15;
          MR_Word libs__polyhedron__Constraints0_16;
          MR_Word libs__polyhedron__Constraints1_17;

          libs__polyhedron__Constraints0_16 = mercury__list__f_43_43_2_f_0((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, libs__polyhedron__Var_9, libs__polyhedron__MatrixB_14);
          libs__lp_rational__restore_equalities_2_p_0(libs__polyhedron__Constraints0_16, &libs__polyhedron__Constraints1_17);
          libs__polyhedron__Constraints_15 = libs__lp_rational__simplify_constraints_1_f_0(libs__polyhedron__Constraints1_17);
          {
            libs__polyhedron__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, 0) = ((MR_Box) (libs__polyhedron__Constraints_15));
          }
        }
      }
    }
    return libs__polyhedron__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__polyhedron__universe_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(1), &libs__polyhedron_scalar_common_3[0]);
  }
}

MR_Word MR_CALL 
libs__polyhedron__empty_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____constr_info_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2)
{
  {
    MR_bool libs__polyhedron__succeeded;

    libs__polyhedron__succeeded = libs__polyhedron____Unify____constr_info_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    return libs__polyhedron__succeeded;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____constr_info_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3)
{
  {
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

    libs__polyhedron____Compare____constr_info_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____convex_hull_result_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2)
{
  {
    MR_bool libs__polyhedron__succeeded;

    libs__polyhedron__succeeded = libs__polyhedron____Unify____convex_hull_result_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    return libs__polyhedron__succeeded;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____convex_hull_result_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3)
{
  {
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

    libs__polyhedron____Compare____convex_hull_result_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2)
{
  {
    MR_bool libs__polyhedron__succeeded;

    libs__polyhedron__succeeded = libs__polyhedron____Unify____polyhedra_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    return libs__polyhedron__succeeded;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____polyhedra_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3)
{
  {
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

    libs__polyhedron____Compare____polyhedra_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_info_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2)
{
  {
    MR_bool libs__polyhedron__succeeded;

    libs__polyhedron__succeeded = libs__polyhedron____Unify____polyhedra_info_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    return libs__polyhedron__succeeded;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____polyhedra_info_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3)
{
  {
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

    libs__polyhedron____Compare____polyhedra_info_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedron_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2)
{
  {
    MR_bool libs__polyhedron__succeeded;

    libs__polyhedron__succeeded = libs__polyhedron____Unify____polyhedron_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    return libs__polyhedron__succeeded;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____polyhedron_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3)
{
  {
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

    libs__polyhedron____Compare____polyhedron_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_var_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2)
{
  {
    MR_bool libs__polyhedron__succeeded;

    libs__polyhedron__succeeded = libs__polyhedron____Unify____sigma_var_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    return libs__polyhedron__succeeded;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____sigma_var_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3)
{
  {
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

    libs__polyhedron____Compare____sigma_var_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_vars_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2)
{
  {
    MR_bool libs__polyhedron__succeeded;

    libs__polyhedron__succeeded = libs__polyhedron____Unify____sigma_vars_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    return libs__polyhedron__succeeded;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____sigma_vars_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3)
{
  {
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

    libs__polyhedron____Compare____sigma_vars_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_map_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2)
{
  {
    MR_bool libs__polyhedron__succeeded;

    libs__polyhedron__succeeded = libs__polyhedron____Unify____var_map_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    return libs__polyhedron__succeeded;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____var_map_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3)
{
  {
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

    libs__polyhedron____Compare____var_map_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__polyhedron____Unify____var_maps_0_0_10001(
  MR_Box libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2)
{
  {
    MR_bool libs__polyhedron__succeeded;

    libs__polyhedron__succeeded = libs__polyhedron____Unify____var_maps_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    return libs__polyhedron__succeeded;
  }
}

static void MR_CALL 
libs__polyhedron____Compare____var_maps_0_0_10001(
  MR_Box * libs__polyhedron__wrapper_arg_1,
  MR_Box libs__polyhedron__wrapper_arg_2,
  MR_Box libs__polyhedron__wrapper_arg_3)
{
  {
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

    libs__polyhedron____Compare____var_maps_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
  }
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

/* :- end_module libs.polyhedron. */
