/*
** Automatically generated from `polyhedron.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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
#include "libs.lp_rational.mih"
#include "libs.rat.mih"




#line 66 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 69 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_libs__lp_rational__type_ctor_info_constraint_0;

#line 72 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct1 libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0;

#line 75 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 78 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 81 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__polyhedron__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

#line 84 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 87 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 90 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct2 libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

#line 93 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

#line 96 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct2 libs__polyhedron__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

#line 99 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

#line 102 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct1 libs__polyhedron__varset__ti_varset_1term__type_ctor_info_generic_0;

#line 105 "libs.polyhedron.c"
static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_constr_info_0_0[2];

#line 108 "libs.polyhedron.c"
static const MR_ConstString libs__polyhedron__libs__polyhedron__field_names_constr_info_0_0[2];

#line 111 "libs.polyhedron.c"
static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_constr_info_0_0;

#line 114 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_constr_info_0_0[1];

#line 117 "libs.polyhedron.c"
static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_constr_info_0[1];

#line 120 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_constr_info_0[1];

#line 123 "libs.polyhedron.c"
static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_constr_info_0[1];

#line 126 "libs.polyhedron.c"
static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_convex_hull_result_0_0[1];

#line 129 "libs.polyhedron.c"
static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_0;

#line 132 "libs.polyhedron.c"
static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_1;

#line 135 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_0[1];

#line 138 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_1[1];

#line 141 "libs.polyhedron.c"
static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_convex_hull_result_0[2];

#line 144 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_convex_hull_result_0[2];

#line 147 "libs.polyhedron.c"
static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_convex_hull_result_0[2];

#line 150 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1libs__polyhedron__type_ctor_info_polyhedron_0;

#line 153 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

#line 156 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 159 "libs.polyhedron.c"
static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_polyhedra_info_0_0[3];

#line 162 "libs.polyhedron.c"
static const MR_ConstString libs__polyhedron__libs__polyhedron__field_names_polyhedra_info_0_0[3];

#line 165 "libs.polyhedron.c"
static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedra_info_0_0;

#line 168 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedra_info_0_0[1];

#line 171 "libs.polyhedron.c"
static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedra_info_0[1];

#line 174 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_polyhedra_info_0[1];

#line 177 "libs.polyhedron.c"
static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_polyhedra_info_0[1];

#line 180 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1libs__lp_rational__type_ctor_info_constraint_0;

#line 183 "libs.polyhedron.c"
static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_polyhedron_0_0[1];

#line 186 "libs.polyhedron.c"
static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_0;

#line 189 "libs.polyhedron.c"
static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_1;

#line 192 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_0[1];

#line 195 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_1[1];

#line 198 "libs.polyhedron.c"
static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedron_0[2];

#line 201 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_polyhedron_0[2];

#line 204 "libs.polyhedron.c"
static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_polyhedron_0[2];

#line 207 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____constr_info_0_0_10001(
#line 210 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 212 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2);

#line 215 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____constr_info_0_0_10001(
#line 218 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 220 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 222 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3);

#line 225 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____convex_hull_result_0_0_10001(
#line 228 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 230 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2);

#line 233 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____convex_hull_result_0_0_10001(
#line 236 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 238 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 240 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3);

#line 243 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_0_0_10001(
#line 246 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 248 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2);

#line 251 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____polyhedra_0_0_10001(
#line 254 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 256 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 258 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3);

#line 261 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_info_0_0_10001(
#line 264 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 266 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2);

#line 269 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____polyhedra_info_0_0_10001(
#line 272 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 274 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 276 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3);

#line 279 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedron_0_0_10001(
#line 282 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 284 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2);

#line 287 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____polyhedron_0_0_10001(
#line 290 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 292 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 294 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3);

#line 297 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_var_0_0_10001(
#line 300 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 302 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2);

#line 305 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____sigma_var_0_0_10001(
#line 308 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 310 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 312 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3);

#line 315 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_vars_0_0_10001(
#line 318 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 320 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2);

#line 323 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____sigma_vars_0_0_10001(
#line 326 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 328 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 330 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3);

#line 333 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____var_map_0_0_10001(
#line 336 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 338 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2);

#line 341 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____var_map_0_0_10001(
#line 344 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 346 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 348 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3);

#line 351 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____var_maps_0_0_10001(
#line 354 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 356 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2);

#line 359 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____var_maps_0_0_10001(
#line 362 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 364 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 366 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3);

#line 366 "polyhedron.m"
static MR_Word MR_CALL 
libs__polyhedron__IntroducedFrom__func__convex_hull__366__1_2_f_0(
#line 366 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_40,
#line 366 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_41);

#line 549 "polyhedron.m"
static MR_Word MR_CALL 
libs__polyhedron__IntroducedFrom__func__project_all__549__1_3_f_0(
#line 549 "polyhedron.m"
  MR_Word libs__polyhedron__Varset_5,
#line 549 "polyhedron.m"
  MR_Word libs__polyhedron__Locals_6,
#line 549 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_15);

#line 314 "polyhedron.m"
static void MR_CALL 
libs__polyhedron____Compare____var_maps_0_0(
#line 314 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 314 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 314 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3);

#line 314 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron____Unify____var_maps_0_0(
#line 314 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 314 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2);

#line 312 "polyhedron.m"
static void MR_CALL 
libs__polyhedron____Compare____var_map_0_0(
#line 312 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 312 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 312 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3);

#line 312 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron____Unify____var_map_0_0(
#line 312 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 312 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2);

#line 321 "polyhedron.m"
static void MR_CALL 
libs__polyhedron____Compare____sigma_vars_0_0(
#line 321 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 321 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 321 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3);

#line 321 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_vars_0_0(
#line 321 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 321 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2);

#line 319 "polyhedron.m"
static void MR_CALL 
libs__polyhedron____Compare____sigma_var_0_0(
#line 319 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 319 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 319 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3);

#line 319 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_var_0_0(
#line 319 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 319 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2);

#line 323 "polyhedron.m"
static void MR_CALL 
libs__polyhedron____Compare____polyhedra_info_0_0(
#line 323 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 323 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 323 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3);

#line 323 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_info_0_0(
#line 323 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 323 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2);

#line 308 "polyhedron.m"
static void MR_CALL 
libs__polyhedron____Compare____convex_hull_result_0_0(
#line 308 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 308 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 308 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3);

#line 308 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron____Unify____convex_hull_result_0_0(
#line 308 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 308 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2);

#line 341 "polyhedron.m"
static void MR_CALL 
libs__polyhedron____Compare____constr_info_0_0(
#line 341 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 341 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 341 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3);

#line 341 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron____Unify____constr_info_0_0(
#line 341 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 341 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2);

#line 498 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron__make_last_terms_4_p_0(
#line 498 "polyhedron.m"
  MR_Word libs__polyhedron__OriginalVar_5,
#line 498 "polyhedron.m"
  MR_Word libs__polyhedron__VarMap_6,
#line 498 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_Terms_0_9,
#line 498 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_Terms_10);

#line 494 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron__make_last_constraint_2_f_0_1(
#line 494 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 494 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 494 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 494 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_3);

#line 491 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron__make_last_constraint_2_f_0(
#line 491 "polyhedron.m"
  MR_Word libs__polyhedron__VarMaps_4,
#line 491 "polyhedron.m"
  MR_Word libs__polyhedron__OriginalVar_5,
#line 491 "polyhedron.m"
  MR_Word * libs__polyhedron__Constraint_6);

#line 487 "polyhedron.m"
static MR_Word MR_CALL 
libs__polyhedron__get_keys_from_map_2_f_0(
#line 487 "polyhedron.m"
  MR_Word libs__polyhedron__Map_4,
#line 487 "polyhedron.m"
  MR_Word libs__polyhedron__KeySet_5);

#line 478 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0_2(
#line 478 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 478 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 478 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_2);

#line 485 "polyhedron.m"
static MR_Box MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0_1(
#line 485 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 485 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 485 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_2);

#line 474 "polyhedron.m"
static MR_Word MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0(
#line 474 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_Constraints_0_8,
#line 474 "polyhedron.m"
  MR_Word libs__polyhedron__VarMaps_5);

#line 441 "polyhedron.m"
static void MR_CALL 
libs__polyhedron__change_var_6_p_0(
#line 441 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_Term_0_13,
#line 441 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_Term_14,
#line 441 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_VarMap_0_15,
#line 441 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_VarMap_16,
#line 441 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_Varset_0_17,
#line 441 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_Varset_18);

#line 432 "polyhedron.m"
static void MR_CALL 
libs__polyhedron__transform_constraint_7_p_0_1(
#line 432 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 432 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 432 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_2,
#line 432 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_3,
#line 432 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_4,
#line 432 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_5,
#line 432 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_6);

#line 426 "polyhedron.m"
static void MR_CALL 
libs__polyhedron__transform_constraint_7_p_0(
#line 426 "polyhedron.m"
  MR_Word libs__polyhedron__Sigma_8,
#line 426 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_Constraint_0_15,
#line 426 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_Constraint_16,
#line 426 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_VarMap_0_17,
#line 426 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_VarMap_18,
#line 426 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_Varset_0_19,
#line 426 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_Varset_20);

#line 414 "polyhedron.m"
static void MR_CALL 
libs__polyhedron__transform_polyhedron_5_p_0_1(
#line 414 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 414 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 414 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_2,
#line 414 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_3,
#line 414 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_4,
#line 414 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_5,
#line 414 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_6);

#line 407 "polyhedron.m"
static void MR_CALL 
libs__polyhedron__transform_polyhedron_5_p_0(
#line 407 "polyhedron.m"
  MR_Word libs__polyhedron__Poly_6,
#line 407 "polyhedron.m"
  MR_Word libs__polyhedron__Polys0_7,
#line 407 "polyhedron.m"
  MR_Word * libs__polyhedron__Polys_8,
#line 407 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_PolyInfo_0_16,
#line 407 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_PolyInfo_17);

#line 366 "polyhedron.m"
static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_4(
#line 366 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 366 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 366 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_2);

#line 468 "polyhedron.m"
static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_3(
#line 468 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 468 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1);

#line 464 "polyhedron.m"
static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_2(
#line 464 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 464 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1);

#line 405 "polyhedron.m"
static void MR_CALL 
libs__polyhedron__convex_hull_4_p_0_1(
#line 405 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 405 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 405 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 405 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_3,
#line 405 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_4,
#line 405 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_5);

#line 350 "polyhedron.m"
static void MR_CALL 
libs__polyhedron__convex_hull_4_p_0(
#line 350 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 350 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__2_2,
#line 350 "polyhedron.m"
  MR_Word libs__polyhedron__MaybeMaxSize_3,
#line 350 "polyhedron.m"
  MR_Word libs__polyhedron__Varset0_4);

#line 533 "polyhedron.m"
static MR_Box MR_CALL 
libs__polyhedron__project_all_3_f_0_1(
#line 533 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 533 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1);

#line 525 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron__widen_3_f_0_1(
#line 525 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 525 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1);

#line 235 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron__is_universe_1_p_0_1(
#line 235 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 235 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1);


static /* final */ const MR_Box libs__polyhedron_scalar_common_1[8][2];

static /* final */ const MR_Box libs__polyhedron_scalar_common_2[9][3];

static /* final */ const MR_Box libs__polyhedron_scalar_common_3[1][1];

static /* final */ const MR_Box libs__polyhedron_scalar_common_4[1][4];

static /* final */ const MR_Box libs__polyhedron_scalar_common_5[4][6];

static /* final */ const MR_Box libs__polyhedron_scalar_common_6[2][7];

static /* final */ const MR_Box libs__polyhedron_scalar_common_7[1][8];

static /* final */ const MR_Box libs__polyhedron_scalar_common_8[2][5];

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
    ((MR_Box) (&libs__polyhedron_scalar_common_7[0])),
    ((MR_Box) (libs__polyhedron__convex_hull_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_8[0])),
    ((MR_Box) (libs__polyhedron__convex_hull_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_8[1])),
    ((MR_Box) (libs__polyhedron__convex_hull_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_5[1])),
    ((MR_Box) (libs__polyhedron__convex_hull_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_10[0])),
    ((MR_Box) (libs__polyhedron__transform_constraint_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&libs__polyhedron_scalar_common_5[2])),
    ((MR_Box) (libs__polyhedron__add_last_constraints_2_f_0_1)),
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
    ((MR_Box) (&libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__polyhedron__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
};

static /* final */ const MR_Box libs__polyhedron_scalar_common_6[2][7] = {
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

static /* final */ const MR_Box libs__polyhedron_scalar_common_7[1][8] = {
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

static /* final */ const MR_Box libs__polyhedron_scalar_common_8[2][5] = {
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1025 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1033 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_libs__lp_rational__type_ctor_info_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0
  }
};

#line 1041 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct1 libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1049 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1057 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1065 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__polyhedron__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

#line 1074 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__polyhedron__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1083 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1091 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct2 libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1100 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1108 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct2 libs__polyhedron__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

#line 1117 "libs.polyhedron.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__polyhedron__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0
  }
};

#line 1125 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct1 libs__polyhedron__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1133 "libs.polyhedron.c"
static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_constr_info_0_0[2] = {
  (MR_PseudoTypeInfo) &libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__varset__ti_varset_1term__type_ctor_info_generic_0
};

#line 1139 "libs.polyhedron.c"
static const MR_ConstString libs__polyhedron__libs__polyhedron__field_names_constr_info_0_0[2] = {
  (MR_String) "var_map",
  (MR_String) "constr_varset"
};

#line 1145 "libs.polyhedron.c"
static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_constr_info_0_0 = {
  (MR_String) "constr_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__polyhedron__libs__polyhedron__field_types_constr_info_0_0,
  libs__polyhedron__libs__polyhedron__field_names_constr_info_0_0,
  NULL,
  NULL
};

#line 1160 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_constr_info_0_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_constr_info_0_0
};

#line 1165 "libs.polyhedron.c"
static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_constr_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_constr_info_0_0
  }
};

#line 1174 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_constr_info_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_constr_info_0_0
};

#line 1179 "libs.polyhedron.c"
static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_constr_info_0[1] = {
  (MR_Integer) 0
};

#line 1184 "libs.polyhedron.c"
const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_constr_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__polyhedron____Unify____constr_info_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____constr_info_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "constr_info",
  {
    libs__polyhedron__libs__polyhedron__du_name_ordered_constr_info_0
  },
  {
    libs__polyhedron__libs__polyhedron__du_ptag_ordered_constr_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__polyhedron__libs__polyhedron__functor_number_map_constr_info_0
};

#line 1205 "libs.polyhedron.c"
static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_convex_hull_result_0_0[1] = {
  (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
};

#line 1210 "libs.polyhedron.c"
static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__polyhedron__libs__polyhedron__field_types_convex_hull_result_0_0,
  NULL,
  NULL,
  NULL
};

#line 1225 "libs.polyhedron.c"
static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_1 = {
  (MR_String) "aborted",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1240 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_1
};

#line 1245 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_1[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_0
};

#line 1250 "libs.polyhedron.c"
static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_convex_hull_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_convex_hull_result_0_1
  }
};

#line 1264 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_convex_hull_result_0[2] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_1,
  &libs__polyhedron__libs__polyhedron__du_functor_desc_convex_hull_result_0_0
};

#line 1270 "libs.polyhedron.c"
static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_convex_hull_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1276 "libs.polyhedron.c"
const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_convex_hull_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__polyhedron____Unify____convex_hull_result_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____convex_hull_result_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "convex_hull_result",
  {
    libs__polyhedron__libs__polyhedron__du_name_ordered_convex_hull_result_0
  },
  {
    libs__polyhedron__libs__polyhedron__du_ptag_ordered_convex_hull_result_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__polyhedron__libs__polyhedron__functor_number_map_convex_hull_result_0
};

#line 1297 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1libs__polyhedron__type_ctor_info_polyhedron_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
  }
};

#line 1305 "libs.polyhedron.c"
const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedra_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__polyhedron____Unify____polyhedra_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____polyhedra_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "polyhedra",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__list__ti_list_1libs__polyhedron__type_ctor_info_polyhedron_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1326 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1334 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1342 "libs.polyhedron.c"
static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_polyhedra_info_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__polyhedron__list__ti_list_1tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__varset__ti_varset_1term__type_ctor_info_generic_0
};

#line 1349 "libs.polyhedron.c"
static const MR_ConstString libs__polyhedron__libs__polyhedron__field_names_polyhedra_info_0_0[3] = {
  (MR_String) "var_maps",
  (MR_String) "sigmas",
  (MR_String) "poly_varset"
};

#line 1356 "libs.polyhedron.c"
static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedra_info_0_0 = {
  (MR_String) "polyhedra_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__polyhedron__libs__polyhedron__field_types_polyhedra_info_0_0,
  libs__polyhedron__libs__polyhedron__field_names_polyhedra_info_0_0,
  NULL,
  NULL
};

#line 1371 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedra_info_0_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedra_info_0_0
};

#line 1376 "libs.polyhedron.c"
static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedra_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedra_info_0_0
  }
};

#line 1385 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_polyhedra_info_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedra_info_0_0
};

#line 1390 "libs.polyhedron.c"
static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_polyhedra_info_0[1] = {
  (MR_Integer) 0
};

#line 1395 "libs.polyhedron.c"
const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedra_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__polyhedron____Unify____polyhedra_info_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____polyhedra_info_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "polyhedra_info",
  {
    libs__polyhedron__libs__polyhedron__du_name_ordered_polyhedra_info_0
  },
  {
    libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedra_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__polyhedron__libs__polyhedron__functor_number_map_polyhedra_info_0
};

#line 1416 "libs.polyhedron.c"
static const MR_FA_TypeInfo_Struct1 libs__polyhedron__list__ti_list_1libs__lp_rational__type_ctor_info_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0
  }
};

#line 1424 "libs.polyhedron.c"
static const MR_PseudoTypeInfo libs__polyhedron__libs__polyhedron__field_types_polyhedron_0_0[1] = {
  (MR_PseudoTypeInfo) &libs__polyhedron__list__ti_list_1libs__lp_rational__type_ctor_info_constraint_0
};

#line 1429 "libs.polyhedron.c"
static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_0 = {
  (MR_String) "eqns",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__polyhedron__libs__polyhedron__field_types_polyhedron_0_0,
  NULL,
  NULL,
  NULL
};

#line 1444 "libs.polyhedron.c"
static const MR_DuFunctorDesc libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_1 = {
  (MR_String) "empty_poly",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1459 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_0[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_1
};

#line 1464 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_1[1] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_0
};

#line 1469 "libs.polyhedron.c"
static const MR_DuPtagLayout libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedron_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__polyhedron__libs__polyhedron__du_stag_ordered_polyhedron_0_1
  }
};

#line 1483 "libs.polyhedron.c"
static const MR_DuFunctorDescPtr libs__polyhedron__libs__polyhedron__du_name_ordered_polyhedron_0[2] = {
  &libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_1,
  &libs__polyhedron__libs__polyhedron__du_functor_desc_polyhedron_0_0
};

#line 1489 "libs.polyhedron.c"
static const MR_Integer libs__polyhedron__libs__polyhedron__functor_number_map_polyhedron_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1495 "libs.polyhedron.c"
const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__polyhedron____Unify____polyhedron_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____polyhedron_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "polyhedron",
  {
    libs__polyhedron__libs__polyhedron__du_name_ordered_polyhedron_0
  },
  {
    libs__polyhedron__libs__polyhedron__du_ptag_ordered_polyhedron_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__polyhedron__libs__polyhedron__functor_number_map_polyhedron_0
};

#line 1516 "libs.polyhedron.c"
const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_sigma_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__polyhedron____Unify____sigma_var_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____sigma_var_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "sigma_var",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__term__ti_var_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1537 "libs.polyhedron.c"
const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_sigma_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__polyhedron____Unify____sigma_vars_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____sigma_vars_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "sigma_vars",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1558 "libs.polyhedron.c"
const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_var_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__polyhedron____Unify____var_map_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____var_map_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "var_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1579 "libs.polyhedron.c"
const MR_TypeCtorInfo_Struct libs__polyhedron__libs__polyhedron__type_ctor_info_var_maps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__polyhedron____Unify____var_maps_0_0_10001)),
  ((MR_Box) (libs__polyhedron____Compare____var_maps_0_0_10001)),
  (MR_String) "libs.polyhedron",
  (MR_String) "var_maps",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__list__ti_list_1tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1600 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____constr_info_0_0_10001(
#line 1603 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 1605 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2)
#line 1607 "libs.polyhedron.c"
{
#line 1609 "libs.polyhedron.c"
  {
#line 1611 "libs.polyhedron.c"
    MR_bool libs__polyhedron__succeeded;

#line 1614 "libs.polyhedron.c"
    {
#line 1616 "libs.polyhedron.c"
      libs__polyhedron__succeeded = libs__polyhedron____Unify____constr_info_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    }
#line 1619 "libs.polyhedron.c"
    return libs__polyhedron__succeeded;
#line 1621 "libs.polyhedron.c"
  }
#line 1623 "libs.polyhedron.c"
}

#line 1626 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____constr_info_0_0_10001(
#line 1629 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 1631 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 1633 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3)
#line 1635 "libs.polyhedron.c"
{
#line 1637 "libs.polyhedron.c"
  {
#line 1639 "libs.polyhedron.c"
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

#line 1642 "libs.polyhedron.c"
    {
#line 1644 "libs.polyhedron.c"
      libs__polyhedron____Compare____constr_info_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    }
#line 1647 "libs.polyhedron.c"
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
#line 1649 "libs.polyhedron.c"
  }
#line 1651 "libs.polyhedron.c"
}

#line 1654 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____convex_hull_result_0_0_10001(
#line 1657 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 1659 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2)
#line 1661 "libs.polyhedron.c"
{
#line 1663 "libs.polyhedron.c"
  {
#line 1665 "libs.polyhedron.c"
    MR_bool libs__polyhedron__succeeded;

#line 1668 "libs.polyhedron.c"
    {
#line 1670 "libs.polyhedron.c"
      libs__polyhedron__succeeded = libs__polyhedron____Unify____convex_hull_result_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    }
#line 1673 "libs.polyhedron.c"
    return libs__polyhedron__succeeded;
#line 1675 "libs.polyhedron.c"
  }
#line 1677 "libs.polyhedron.c"
}

#line 1680 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____convex_hull_result_0_0_10001(
#line 1683 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 1685 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 1687 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3)
#line 1689 "libs.polyhedron.c"
{
#line 1691 "libs.polyhedron.c"
  {
#line 1693 "libs.polyhedron.c"
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

#line 1696 "libs.polyhedron.c"
    {
#line 1698 "libs.polyhedron.c"
      libs__polyhedron____Compare____convex_hull_result_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    }
#line 1701 "libs.polyhedron.c"
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
#line 1703 "libs.polyhedron.c"
  }
#line 1705 "libs.polyhedron.c"
}

#line 1708 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_0_0_10001(
#line 1711 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 1713 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2)
#line 1715 "libs.polyhedron.c"
{
#line 1717 "libs.polyhedron.c"
  {
#line 1719 "libs.polyhedron.c"
    MR_bool libs__polyhedron__succeeded;

#line 1722 "libs.polyhedron.c"
    {
#line 1724 "libs.polyhedron.c"
      libs__polyhedron__succeeded = libs__polyhedron____Unify____polyhedra_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    }
#line 1727 "libs.polyhedron.c"
    return libs__polyhedron__succeeded;
#line 1729 "libs.polyhedron.c"
  }
#line 1731 "libs.polyhedron.c"
}

#line 1734 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____polyhedra_0_0_10001(
#line 1737 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 1739 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 1741 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3)
#line 1743 "libs.polyhedron.c"
{
#line 1745 "libs.polyhedron.c"
  {
#line 1747 "libs.polyhedron.c"
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

#line 1750 "libs.polyhedron.c"
    {
#line 1752 "libs.polyhedron.c"
      libs__polyhedron____Compare____polyhedra_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    }
#line 1755 "libs.polyhedron.c"
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
#line 1757 "libs.polyhedron.c"
  }
#line 1759 "libs.polyhedron.c"
}

#line 1762 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_info_0_0_10001(
#line 1765 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 1767 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2)
#line 1769 "libs.polyhedron.c"
{
#line 1771 "libs.polyhedron.c"
  {
#line 1773 "libs.polyhedron.c"
    MR_bool libs__polyhedron__succeeded;

#line 1776 "libs.polyhedron.c"
    {
#line 1778 "libs.polyhedron.c"
      libs__polyhedron__succeeded = libs__polyhedron____Unify____polyhedra_info_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    }
#line 1781 "libs.polyhedron.c"
    return libs__polyhedron__succeeded;
#line 1783 "libs.polyhedron.c"
  }
#line 1785 "libs.polyhedron.c"
}

#line 1788 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____polyhedra_info_0_0_10001(
#line 1791 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 1793 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 1795 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3)
#line 1797 "libs.polyhedron.c"
{
#line 1799 "libs.polyhedron.c"
  {
#line 1801 "libs.polyhedron.c"
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

#line 1804 "libs.polyhedron.c"
    {
#line 1806 "libs.polyhedron.c"
      libs__polyhedron____Compare____polyhedra_info_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    }
#line 1809 "libs.polyhedron.c"
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
#line 1811 "libs.polyhedron.c"
  }
#line 1813 "libs.polyhedron.c"
}

#line 1816 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedron_0_0_10001(
#line 1819 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 1821 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2)
#line 1823 "libs.polyhedron.c"
{
#line 1825 "libs.polyhedron.c"
  {
#line 1827 "libs.polyhedron.c"
    MR_bool libs__polyhedron__succeeded;

#line 1830 "libs.polyhedron.c"
    {
#line 1832 "libs.polyhedron.c"
      libs__polyhedron__succeeded = libs__polyhedron____Unify____polyhedron_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    }
#line 1835 "libs.polyhedron.c"
    return libs__polyhedron__succeeded;
#line 1837 "libs.polyhedron.c"
  }
#line 1839 "libs.polyhedron.c"
}

#line 1842 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____polyhedron_0_0_10001(
#line 1845 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 1847 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 1849 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3)
#line 1851 "libs.polyhedron.c"
{
#line 1853 "libs.polyhedron.c"
  {
#line 1855 "libs.polyhedron.c"
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

#line 1858 "libs.polyhedron.c"
    {
#line 1860 "libs.polyhedron.c"
      libs__polyhedron____Compare____polyhedron_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    }
#line 1863 "libs.polyhedron.c"
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
#line 1865 "libs.polyhedron.c"
  }
#line 1867 "libs.polyhedron.c"
}

#line 1870 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_var_0_0_10001(
#line 1873 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 1875 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2)
#line 1877 "libs.polyhedron.c"
{
#line 1879 "libs.polyhedron.c"
  {
#line 1881 "libs.polyhedron.c"
    MR_bool libs__polyhedron__succeeded;

#line 1884 "libs.polyhedron.c"
    {
#line 1886 "libs.polyhedron.c"
      libs__polyhedron__succeeded = libs__polyhedron____Unify____sigma_var_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    }
#line 1889 "libs.polyhedron.c"
    return libs__polyhedron__succeeded;
#line 1891 "libs.polyhedron.c"
  }
#line 1893 "libs.polyhedron.c"
}

#line 1896 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____sigma_var_0_0_10001(
#line 1899 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 1901 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 1903 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3)
#line 1905 "libs.polyhedron.c"
{
#line 1907 "libs.polyhedron.c"
  {
#line 1909 "libs.polyhedron.c"
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

#line 1912 "libs.polyhedron.c"
    {
#line 1914 "libs.polyhedron.c"
      libs__polyhedron____Compare____sigma_var_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    }
#line 1917 "libs.polyhedron.c"
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
#line 1919 "libs.polyhedron.c"
  }
#line 1921 "libs.polyhedron.c"
}

#line 1924 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_vars_0_0_10001(
#line 1927 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 1929 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2)
#line 1931 "libs.polyhedron.c"
{
#line 1933 "libs.polyhedron.c"
  {
#line 1935 "libs.polyhedron.c"
    MR_bool libs__polyhedron__succeeded;

#line 1938 "libs.polyhedron.c"
    {
#line 1940 "libs.polyhedron.c"
      libs__polyhedron__succeeded = libs__polyhedron____Unify____sigma_vars_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    }
#line 1943 "libs.polyhedron.c"
    return libs__polyhedron__succeeded;
#line 1945 "libs.polyhedron.c"
  }
#line 1947 "libs.polyhedron.c"
}

#line 1950 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____sigma_vars_0_0_10001(
#line 1953 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 1955 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 1957 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3)
#line 1959 "libs.polyhedron.c"
{
#line 1961 "libs.polyhedron.c"
  {
#line 1963 "libs.polyhedron.c"
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

#line 1966 "libs.polyhedron.c"
    {
#line 1968 "libs.polyhedron.c"
      libs__polyhedron____Compare____sigma_vars_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    }
#line 1971 "libs.polyhedron.c"
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
#line 1973 "libs.polyhedron.c"
  }
#line 1975 "libs.polyhedron.c"
}

#line 1978 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____var_map_0_0_10001(
#line 1981 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 1983 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2)
#line 1985 "libs.polyhedron.c"
{
#line 1987 "libs.polyhedron.c"
  {
#line 1989 "libs.polyhedron.c"
    MR_bool libs__polyhedron__succeeded;

#line 1992 "libs.polyhedron.c"
    {
#line 1994 "libs.polyhedron.c"
      libs__polyhedron__succeeded = libs__polyhedron____Unify____var_map_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    }
#line 1997 "libs.polyhedron.c"
    return libs__polyhedron__succeeded;
#line 1999 "libs.polyhedron.c"
  }
#line 2001 "libs.polyhedron.c"
}

#line 2004 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____var_map_0_0_10001(
#line 2007 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 2009 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 2011 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3)
#line 2013 "libs.polyhedron.c"
{
#line 2015 "libs.polyhedron.c"
  {
#line 2017 "libs.polyhedron.c"
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

#line 2020 "libs.polyhedron.c"
    {
#line 2022 "libs.polyhedron.c"
      libs__polyhedron____Compare____var_map_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    }
#line 2025 "libs.polyhedron.c"
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
#line 2027 "libs.polyhedron.c"
  }
#line 2029 "libs.polyhedron.c"
}

#line 2032 "libs.polyhedron.c"
static MR_bool MR_CALL 
libs__polyhedron____Unify____var_maps_0_0_10001(
#line 2035 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 2037 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2)
#line 2039 "libs.polyhedron.c"
{
#line 2041 "libs.polyhedron.c"
  {
#line 2043 "libs.polyhedron.c"
    MR_bool libs__polyhedron__succeeded;

#line 2046 "libs.polyhedron.c"
    {
#line 2048 "libs.polyhedron.c"
      libs__polyhedron__succeeded = libs__polyhedron____Unify____var_maps_0_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    }
#line 2051 "libs.polyhedron.c"
    return libs__polyhedron__succeeded;
#line 2053 "libs.polyhedron.c"
  }
#line 2055 "libs.polyhedron.c"
}

#line 2058 "libs.polyhedron.c"
static void MR_CALL 
libs__polyhedron____Compare____var_maps_0_0_10001(
#line 2061 "libs.polyhedron.c"
  MR_Box * libs__polyhedron__wrapper_arg_1,
#line 2063 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 2065 "libs.polyhedron.c"
  MR_Box libs__polyhedron__wrapper_arg_3)
#line 2067 "libs.polyhedron.c"
{
#line 2069 "libs.polyhedron.c"
  {
#line 2071 "libs.polyhedron.c"
    MR_Word libs__polyhedron__conv0_HeadVar__1_1;

#line 2074 "libs.polyhedron.c"
    {
#line 2076 "libs.polyhedron.c"
      libs__polyhedron____Compare____var_maps_0_0(&libs__polyhedron__conv0_HeadVar__1_1, ((MR_Word) libs__polyhedron__wrapper_arg_2), ((MR_Word) libs__polyhedron__wrapper_arg_3));
    }
#line 2079 "libs.polyhedron.c"
    *libs__polyhedron__wrapper_arg_1 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__1_1));
#line 2081 "libs.polyhedron.c"
  }
#line 2083 "libs.polyhedron.c"
}

#line 366 "polyhedron.m"
static MR_Word MR_CALL 
libs__polyhedron__IntroducedFrom__func__convex_hull__366__1_2_f_0(
#line 366 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_40,
#line 366 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_41)
#line 366 "polyhedron.m"
{
#line 366 "polyhedron.m"
  {
#line 366 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 366 "polyhedron.m"
    MR_Word libs__polyhedron__HeadVar__3_42;
#line 366 "polyhedron.m"
    MR_Word libs__polyhedron__TypeInfo_56_56 = (MR_Word) &libs__polyhedron_scalar_common_1[1];
#line 366 "polyhedron.m"
    MR_Word libs__polyhedron__V_43_43;

#line 367 "polyhedron.m"
    {
#line 367 "polyhedron.m"
      libs__polyhedron__V_43_43 = mercury__map__values_1_f_0(libs__polyhedron__TypeInfo_56_56, libs__polyhedron__TypeInfo_56_56, libs__polyhedron__HeadVar__1_40);
    }
#line 367 "polyhedron.m"
    {
#line 367 "polyhedron.m"
      libs__polyhedron__HeadVar__3_42 = mercury__list__f_43_43_2_f_0(libs__polyhedron__TypeInfo_56_56, libs__polyhedron__HeadVar__2_41, libs__polyhedron__V_43_43);
    }
#line 366 "polyhedron.m"
    return libs__polyhedron__HeadVar__3_42;
#line 366 "polyhedron.m"
  }
#line 366 "polyhedron.m"
}

#line 549 "polyhedron.m"
static MR_Word MR_CALL 
libs__polyhedron__IntroducedFrom__func__project_all__549__1_3_f_0(
#line 549 "polyhedron.m"
  MR_Word libs__polyhedron__Varset_5,
#line 549 "polyhedron.m"
  MR_Word libs__polyhedron__Locals_6,
#line 549 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_15)
#line 549 "polyhedron.m"
{
#line 549 "polyhedron.m"
  {
#line 549 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 549 "polyhedron.m"
    MR_Word libs__polyhedron__HeadVar__4_16;

#line 549 "polyhedron.m"
    if ((libs__polyhedron__HeadVar__3_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "polyhedron.m"
      libs__polyhedron__HeadVar__4_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 549 "polyhedron.m"
    else
#line 535 "polyhedron.m"
      {
#line 535 "polyhedron.m"
        MR_Word libs__polyhedron__Constraints0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__3_15, (MR_Integer) 0)));
#line 535 "polyhedron.m"
        MR_Word libs__polyhedron__ProjectionResult_11;

#line 536 "polyhedron.m"
        {
#line 536 "polyhedron.m"
          libs__lp_rational__project_4_p_0(libs__polyhedron__Locals_6, libs__polyhedron__Varset_5, libs__polyhedron__Constraints0_10, &libs__polyhedron__ProjectionResult_11);
        }
#line 541 "polyhedron.m"
        if ((libs__polyhedron__ProjectionResult_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 539 "polyhedron.m"
          {
#line 540 "polyhedron.m"
            {
#line 540 "polyhedron.m"
              mercury__require__unexpected_3_p_0((MR_String) "libs.polyhedron", (MR_String) "function \140libs.polyhedron.project_all\'/3", (MR_String) "abort from project");
            }
#line 539 "polyhedron.m"
          }
#line 541 "polyhedron.m"
        else
#line 541 "polyhedron.m"
          if ((libs__polyhedron__ProjectionResult_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "polyhedron.m"
            libs__polyhedron__HeadVar__4_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 541 "polyhedron.m"
          else
#line 545 "polyhedron.m"
            {
#line 545 "polyhedron.m"
              MR_Word libs__polyhedron__Constraints1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__ProjectionResult_11, (MR_Integer) 0)));
#line 545 "polyhedron.m"
              MR_Word libs__polyhedron__Constraints_13;

#line 546 "polyhedron.m"
              {
#line 546 "polyhedron.m"
                libs__lp_rational__restore_equalities_2_p_0(libs__polyhedron__Constraints1_12, &libs__polyhedron__Constraints_13);
              }
#line 547 "polyhedron.m"
              {
#line 547 "polyhedron.m"
                libs__polyhedron__HeadVar__4_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 547 "polyhedron.m"
                MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__4_16, 0) = ((MR_Box) (libs__polyhedron__Constraints_13));
#line 547 "polyhedron.m"
              }
#line 545 "polyhedron.m"
            }
#line 535 "polyhedron.m"
      }
#line 549 "polyhedron.m"
    return libs__polyhedron__HeadVar__4_16;
#line 549 "polyhedron.m"
  }
#line 549 "polyhedron.m"
}

#line 314 "polyhedron.m"
static void MR_CALL 
libs__polyhedron____Compare____var_maps_0_0(
#line 314 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 314 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 314 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3)
#line 314 "polyhedron.m"
{
#line 314 "polyhedron.m"
  {
#line 314 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 314 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar1_4 = libs__polyhedron__HeadVar__2_2;
#line 314 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar2_5 = libs__polyhedron__HeadVar__3_3;

#line 314 "polyhedron.m"
    {
#line 314 "polyhedron.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[7], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__Cast_HeadVar1_4)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_5)));
#line 314 "polyhedron.m"
      return;
    }
#line 314 "polyhedron.m"
  }
#line 314 "polyhedron.m"
}

#line 314 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron____Unify____var_maps_0_0(
#line 314 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 314 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2)
#line 314 "polyhedron.m"
{
#line 314 "polyhedron.m"
  {
#line 314 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 314 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar1_3 = libs__polyhedron__HeadVar__1_1;
#line 314 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar2_4 = libs__polyhedron__HeadVar__2_2;

#line 314 "polyhedron.m"
    {
#line 314 "polyhedron.m"
      return libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__polyhedron_scalar_common_1[7], ((MR_Box) (libs__polyhedron__Cast_HeadVar1_3)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_4)));
    }
#line 314 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 314 "polyhedron.m"
  }
#line 314 "polyhedron.m"
}

#line 312 "polyhedron.m"
static void MR_CALL 
libs__polyhedron____Compare____var_map_0_0(
#line 312 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 312 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 312 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3)
#line 312 "polyhedron.m"
{
#line 312 "polyhedron.m"
  {
#line 312 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 312 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar1_4 = libs__polyhedron__HeadVar__2_2;
#line 312 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar2_5 = libs__polyhedron__HeadVar__3_3;

#line 312 "polyhedron.m"
    {
#line 312 "polyhedron.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_2[0], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__Cast_HeadVar1_4)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_5)));
#line 312 "polyhedron.m"
      return;
    }
#line 312 "polyhedron.m"
  }
#line 312 "polyhedron.m"
}

#line 312 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron____Unify____var_map_0_0(
#line 312 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 312 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2)
#line 312 "polyhedron.m"
{
#line 312 "polyhedron.m"
  {
#line 312 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 312 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar1_3 = libs__polyhedron__HeadVar__1_1;
#line 312 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar2_4 = libs__polyhedron__HeadVar__2_2;

#line 312 "polyhedron.m"
    {
#line 312 "polyhedron.m"
      return libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__polyhedron_scalar_common_2[0], ((MR_Box) (libs__polyhedron__Cast_HeadVar1_3)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_4)));
    }
#line 312 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 312 "polyhedron.m"
  }
#line 312 "polyhedron.m"
}

#line 321 "polyhedron.m"
static void MR_CALL 
libs__polyhedron____Compare____sigma_vars_0_0(
#line 321 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 321 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 321 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3)
#line 321 "polyhedron.m"
{
#line 321 "polyhedron.m"
  {
#line 321 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 321 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar1_4 = libs__polyhedron__HeadVar__2_2;
#line 321 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar2_5 = libs__polyhedron__HeadVar__3_3;

#line 321 "polyhedron.m"
    {
#line 321 "polyhedron.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[2], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__Cast_HeadVar1_4)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_5)));
#line 321 "polyhedron.m"
      return;
    }
#line 321 "polyhedron.m"
  }
#line 321 "polyhedron.m"
}

#line 321 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_vars_0_0(
#line 321 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 321 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2)
#line 321 "polyhedron.m"
{
#line 321 "polyhedron.m"
  {
#line 321 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 321 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar1_3 = libs__polyhedron__HeadVar__1_1;
#line 321 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar2_4 = libs__polyhedron__HeadVar__2_2;

#line 321 "polyhedron.m"
    {
#line 321 "polyhedron.m"
      return libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__polyhedron_scalar_common_1[2], ((MR_Box) (libs__polyhedron__Cast_HeadVar1_3)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_4)));
    }
#line 321 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 321 "polyhedron.m"
  }
#line 321 "polyhedron.m"
}

#line 319 "polyhedron.m"
static void MR_CALL 
libs__polyhedron____Compare____sigma_var_0_0(
#line 319 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 319 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 319 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3)
#line 319 "polyhedron.m"
{
#line 319 "polyhedron.m"
  {
#line 319 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 319 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar1_4 = libs__polyhedron__HeadVar__2_2;
#line 319 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar2_5 = libs__polyhedron__HeadVar__3_3;

#line 319 "polyhedron.m"
    {
#line 319 "polyhedron.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[1], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__Cast_HeadVar1_4)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_5)));
#line 319 "polyhedron.m"
      return;
    }
#line 319 "polyhedron.m"
  }
#line 319 "polyhedron.m"
}

#line 319 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron____Unify____sigma_var_0_0(
#line 319 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 319 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2)
#line 319 "polyhedron.m"
{
#line 319 "polyhedron.m"
  {
#line 319 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 319 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar1_3 = libs__polyhedron__HeadVar__1_1;
#line 319 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar2_4 = libs__polyhedron__HeadVar__2_2;

#line 319 "polyhedron.m"
    {
#line 319 "polyhedron.m"
      return libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__polyhedron_scalar_common_1[1], ((MR_Box) (libs__polyhedron__Cast_HeadVar1_3)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_4)));
    }
#line 319 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 319 "polyhedron.m"
  }
#line 319 "polyhedron.m"
}

#line 198 "polyhedron.m"
void MR_CALL 
libs__polyhedron____Compare____polyhedron_0_0(
#line 198 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 198 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 198 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3)
#line 198 "polyhedron.m"
{
#line 198 "polyhedron.m"
  {
#line 198 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 198 "polyhedron.m"
    MR_Integer libs__polyhedron__CastX_8 = (MR_Integer) libs__polyhedron__HeadVar__2_2;
#line 198 "polyhedron.m"
    MR_Integer libs__polyhedron__CastY_9 = (MR_Integer) libs__polyhedron__HeadVar__3_3;

#line 198 "polyhedron.m"
    libs__polyhedron__succeeded = (libs__polyhedron__CastX_8 == libs__polyhedron__CastY_9);
#line 198 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 2481 "libs.polyhedron.c"
      *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 0;
#line 198 "polyhedron.m"
    else
#line 198 "polyhedron.m"
      if ((libs__polyhedron__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "polyhedron.m"
        if ((libs__polyhedron__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "polyhedron.m"
          *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 0;
#line 198 "polyhedron.m"
        else
#line 2493 "libs.polyhedron.c"
          *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 2;
#line 198 "polyhedron.m"
      else
#line 198 "polyhedron.m"
        {
#line 198 "polyhedron.m"
          MR_Word libs__polyhedron__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));

#line 198 "polyhedron.m"
          if ((libs__polyhedron__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2504 "libs.polyhedron.c"
            *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 1;
#line 198 "polyhedron.m"
          else
#line 198 "polyhedron.m"
            {
#line 198 "polyhedron.m"
              MR_Word libs__polyhedron__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__3_3, (MR_Integer) 0)));

#line 198 "polyhedron.m"
              {
#line 198 "polyhedron.m"
                mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[0], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__V_11_11)), ((MR_Box) (libs__polyhedron__V_5_5)));
#line 198 "polyhedron.m"
                return;
              }
#line 198 "polyhedron.m"
            }
#line 198 "polyhedron.m"
        }
#line 198 "polyhedron.m"
  }
#line 198 "polyhedron.m"
}

#line 198 "polyhedron.m"
MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedron_0_0(
#line 198 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 198 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2)
#line 198 "polyhedron.m"
{
#line 198 "polyhedron.m"
  {
#line 198 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 198 "polyhedron.m"
    MR_Integer libs__polyhedron__CastX_7 = (MR_Integer) libs__polyhedron__HeadVar__1_1;
#line 198 "polyhedron.m"
    MR_Integer libs__polyhedron__CastY_8 = (MR_Integer) libs__polyhedron__HeadVar__2_2;

#line 198 "polyhedron.m"
    libs__polyhedron__succeeded = (libs__polyhedron__CastX_7 == libs__polyhedron__CastY_8);
#line 198 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 198 "polyhedron.m"
      libs__polyhedron__succeeded = MR_TRUE;
#line 198 "polyhedron.m"
    else
#line 198 "polyhedron.m"
      if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "polyhedron.m"
        {
#line 198 "polyhedron.m"
          MR_Integer libs__polyhedron__CastX_5 = (MR_Integer) libs__polyhedron__HeadVar__1_1;
#line 198 "polyhedron.m"
          MR_Integer libs__polyhedron__CastY_6 = (MR_Integer) libs__polyhedron__HeadVar__2_2;

#line 198 "polyhedron.m"
          libs__polyhedron__succeeded = (libs__polyhedron__CastY_6 == libs__polyhedron__CastX_5);
#line 198 "polyhedron.m"
        }
#line 198 "polyhedron.m"
      else
#line 198 "polyhedron.m"
        {
#line 198 "polyhedron.m"
          MR_Word libs__polyhedron__TypeInfo_9_9;
#line 198 "polyhedron.m"
          MR_Word libs__polyhedron__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
#line 198 "polyhedron.m"
          MR_Word libs__polyhedron__V_4_4;

#line 198 "polyhedron.m"
          libs__polyhedron__succeeded = ((MR_tag((MR_Word) libs__polyhedron__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 198 "polyhedron.m"
          if (libs__polyhedron__succeeded)
#line 198 "polyhedron.m"
            {
#line 198 "polyhedron.m"
              libs__polyhedron__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
#line 2587 "libs.polyhedron.c"
              libs__polyhedron__TypeInfo_9_9 = (MR_Word) &libs__polyhedron_scalar_common_1[0];
#line 2589 "libs.polyhedron.c"
              {
#line 2591 "libs.polyhedron.c"
                return libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0(libs__polyhedron__TypeInfo_9_9, ((MR_Box) (libs__polyhedron__V_3_3)), ((MR_Box) (libs__polyhedron__V_4_4)));
              }
#line 198 "polyhedron.m"
            }
#line 198 "polyhedron.m"
        }
#line 198 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 198 "polyhedron.m"
  }
#line 198 "polyhedron.m"
}

#line 323 "polyhedron.m"
static void MR_CALL 
libs__polyhedron____Compare____polyhedra_info_0_0(
#line 323 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 323 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 323 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3)
#line 323 "polyhedron.m"
{
#line 323 "polyhedron.m"
  {
#line 323 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 323 "polyhedron.m"
    MR_Integer libs__polyhedron__CastX_12 = (MR_Integer) libs__polyhedron__HeadVar__2_2;
#line 323 "polyhedron.m"
    MR_Integer libs__polyhedron__CastY_13 = (MR_Integer) libs__polyhedron__HeadVar__3_3;

#line 323 "polyhedron.m"
    libs__polyhedron__succeeded = (libs__polyhedron__CastX_12 == libs__polyhedron__CastY_13);
#line 323 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 2629 "libs.polyhedron.c"
      *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 0;
#line 323 "polyhedron.m"
    else
#line 323 "polyhedron.m"
      {
#line 323 "polyhedron.m"
        MR_Word libs__polyhedron__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
#line 323 "polyhedron.m"
        MR_Word libs__polyhedron__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 1)));
#line 323 "polyhedron.m"
        MR_Word libs__polyhedron__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 2)));
#line 323 "polyhedron.m"
        MR_Word libs__polyhedron__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__3_3, (MR_Integer) 0)));
#line 323 "polyhedron.m"
        MR_Word libs__polyhedron__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__3_3, (MR_Integer) 1)));
#line 323 "polyhedron.m"
        MR_Word libs__polyhedron__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__3_3, (MR_Integer) 2)));
#line 323 "polyhedron.m"
        MR_Word libs__polyhedron__V_10_10;

#line 323 "polyhedron.m"
        {
#line 323 "polyhedron.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[7], &libs__polyhedron__V_10_10, ((MR_Box) (libs__polyhedron__V_4_4)), ((MR_Box) (libs__polyhedron__V_7_7)));
        }
#line 2655 "libs.polyhedron.c"
        libs__polyhedron__succeeded = (libs__polyhedron__V_10_10 == (MR_Integer) 0);
#line 323 "polyhedron.m"
        libs__polyhedron__succeeded = !(libs__polyhedron__succeeded);
#line 323 "polyhedron.m"
        if (libs__polyhedron__succeeded)
#line 323 "polyhedron.m"
          *libs__polyhedron__HeadVar__1_1 = libs__polyhedron__V_10_10;
#line 323 "polyhedron.m"
        else
#line 323 "polyhedron.m"
          {
#line 323 "polyhedron.m"
            MR_Word libs__polyhedron__V_11_11;

#line 323 "polyhedron.m"
            {
#line 323 "polyhedron.m"
              mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[2], &libs__polyhedron__V_11_11, ((MR_Box) (libs__polyhedron__V_5_5)), ((MR_Box) (libs__polyhedron__V_8_8)));
            }
#line 2675 "libs.polyhedron.c"
            libs__polyhedron__succeeded = (libs__polyhedron__V_11_11 == (MR_Integer) 0);
#line 323 "polyhedron.m"
            libs__polyhedron__succeeded = !(libs__polyhedron__succeeded);
#line 323 "polyhedron.m"
            if (libs__polyhedron__succeeded)
#line 323 "polyhedron.m"
              *libs__polyhedron__HeadVar__1_1 = libs__polyhedron__V_11_11;
#line 323 "polyhedron.m"
            else
#line 323 "polyhedron.m"
              {
#line 323 "polyhedron.m"
                {
#line 323 "polyhedron.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[3], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__V_6_6)), ((MR_Box) (libs__polyhedron__V_9_9)));
#line 323 "polyhedron.m"
                  return;
                }
#line 323 "polyhedron.m"
              }
#line 323 "polyhedron.m"
          }
#line 323 "polyhedron.m"
      }
#line 323 "polyhedron.m"
  }
#line 323 "polyhedron.m"
}

#line 323 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_info_0_0(
#line 323 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 323 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2)
#line 323 "polyhedron.m"
{
#line 323 "polyhedron.m"
  {
#line 323 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 323 "polyhedron.m"
    MR_Integer libs__polyhedron__CastX_9 = (MR_Integer) libs__polyhedron__HeadVar__1_1;
#line 323 "polyhedron.m"
    MR_Integer libs__polyhedron__CastY_10 = (MR_Integer) libs__polyhedron__HeadVar__2_2;

#line 323 "polyhedron.m"
    libs__polyhedron__succeeded = (libs__polyhedron__CastX_9 == libs__polyhedron__CastY_10);
#line 323 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 323 "polyhedron.m"
      libs__polyhedron__succeeded = MR_TRUE;
#line 323 "polyhedron.m"
    else
#line 323 "polyhedron.m"
      {
#line 323 "polyhedron.m"
        MR_Word libs__polyhedron__TypeInfo_12_12;
#line 323 "polyhedron.m"
        MR_Word libs__polyhedron__TypeInfo_13_13;
#line 323 "polyhedron.m"
        MR_Word libs__polyhedron__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "polyhedron.m"
        MR_Word libs__polyhedron__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__1_1, (MR_Integer) 1)));
#line 323 "polyhedron.m"
        MR_Word libs__polyhedron__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__1_1, (MR_Integer) 2)));
#line 323 "polyhedron.m"
        MR_Word libs__polyhedron__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
#line 323 "polyhedron.m"
        MR_Word libs__polyhedron__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 1)));
#line 323 "polyhedron.m"
        MR_Word libs__polyhedron__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 2)));

#line 2750 "libs.polyhedron.c"
        {
#line 2752 "libs.polyhedron.c"
          libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__polyhedron_scalar_common_1[7], ((MR_Box) (libs__polyhedron__V_3_3)), ((MR_Box) (libs__polyhedron__V_6_6)));
        }
#line 323 "polyhedron.m"
        if (libs__polyhedron__succeeded)
#line 323 "polyhedron.m"
          {
#line 2759 "libs.polyhedron.c"
            libs__polyhedron__TypeInfo_12_12 = (MR_Word) &libs__polyhedron_scalar_common_1[2];
#line 2761 "libs.polyhedron.c"
            {
#line 2763 "libs.polyhedron.c"
              libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0(libs__polyhedron__TypeInfo_12_12, ((MR_Box) (libs__polyhedron__V_4_4)), ((MR_Box) (libs__polyhedron__V_7_7)));
            }
#line 323 "polyhedron.m"
            if (libs__polyhedron__succeeded)
#line 323 "polyhedron.m"
              {
#line 2770 "libs.polyhedron.c"
                libs__polyhedron__TypeInfo_13_13 = (MR_Word) &libs__polyhedron_scalar_common_1[3];
#line 2772 "libs.polyhedron.c"
                {
#line 2774 "libs.polyhedron.c"
                  return libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0(libs__polyhedron__TypeInfo_13_13, ((MR_Box) (libs__polyhedron__V_5_5)), ((MR_Box) (libs__polyhedron__V_8_8)));
                }
#line 323 "polyhedron.m"
              }
#line 323 "polyhedron.m"
          }
#line 323 "polyhedron.m"
      }
#line 323 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 323 "polyhedron.m"
  }
#line 323 "polyhedron.m"
}

#line 59 "polyhedron.m"
void MR_CALL 
libs__polyhedron____Compare____polyhedra_0_0(
#line 59 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 59 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 59 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3)
#line 59 "polyhedron.m"
{
#line 59 "polyhedron.m"
  {
#line 59 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 59 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar1_4 = libs__polyhedron__HeadVar__2_2;
#line 59 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar2_5 = libs__polyhedron__HeadVar__3_3;

#line 59 "polyhedron.m"
    {
#line 59 "polyhedron.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[6], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__Cast_HeadVar1_4)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_5)));
#line 59 "polyhedron.m"
      return;
    }
#line 59 "polyhedron.m"
  }
#line 59 "polyhedron.m"
}

#line 59 "polyhedron.m"
MR_bool MR_CALL 
libs__polyhedron____Unify____polyhedra_0_0(
#line 59 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 59 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2)
#line 59 "polyhedron.m"
{
#line 59 "polyhedron.m"
  {
#line 59 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 59 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar1_3 = libs__polyhedron__HeadVar__1_1;
#line 59 "polyhedron.m"
    MR_Word libs__polyhedron__Cast_HeadVar2_4 = libs__polyhedron__HeadVar__2_2;

#line 59 "polyhedron.m"
    {
#line 59 "polyhedron.m"
      return libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__polyhedron_scalar_common_1[6], ((MR_Box) (libs__polyhedron__Cast_HeadVar1_3)), ((MR_Box) (libs__polyhedron__Cast_HeadVar2_4)));
    }
#line 59 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 59 "polyhedron.m"
  }
#line 59 "polyhedron.m"
}

#line 308 "polyhedron.m"
static void MR_CALL 
libs__polyhedron____Compare____convex_hull_result_0_0(
#line 308 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 308 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 308 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3)
#line 308 "polyhedron.m"
{
#line 308 "polyhedron.m"
  {
#line 308 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 308 "polyhedron.m"
    MR_Integer libs__polyhedron__CastX_8 = (MR_Integer) libs__polyhedron__HeadVar__2_2;
#line 308 "polyhedron.m"
    MR_Integer libs__polyhedron__CastY_9 = (MR_Integer) libs__polyhedron__HeadVar__3_3;

#line 308 "polyhedron.m"
    libs__polyhedron__succeeded = (libs__polyhedron__CastX_8 == libs__polyhedron__CastY_9);
#line 308 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 2876 "libs.polyhedron.c"
      *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 0;
#line 308 "polyhedron.m"
    else
#line 308 "polyhedron.m"
      if ((libs__polyhedron__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 308 "polyhedron.m"
        if ((libs__polyhedron__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 308 "polyhedron.m"
          *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 0;
#line 308 "polyhedron.m"
        else
#line 2888 "libs.polyhedron.c"
          *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 2;
#line 308 "polyhedron.m"
      else
#line 308 "polyhedron.m"
        {
#line 308 "polyhedron.m"
          MR_Word libs__polyhedron__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));

#line 308 "polyhedron.m"
          if ((libs__polyhedron__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2899 "libs.polyhedron.c"
            *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 1;
#line 308 "polyhedron.m"
          else
#line 308 "polyhedron.m"
            {
#line 308 "polyhedron.m"
              MR_Word libs__polyhedron__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__3_3, (MR_Integer) 0)));

#line 308 "polyhedron.m"
              {
#line 308 "polyhedron.m"
                libs__polyhedron____Compare____polyhedron_0_0(libs__polyhedron__HeadVar__1_1, libs__polyhedron__V_11_11, libs__polyhedron__V_5_5);
#line 308 "polyhedron.m"
                return;
              }
#line 308 "polyhedron.m"
            }
#line 308 "polyhedron.m"
        }
#line 308 "polyhedron.m"
  }
#line 308 "polyhedron.m"
}

#line 308 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron____Unify____convex_hull_result_0_0(
#line 308 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 308 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2)
#line 308 "polyhedron.m"
{
#line 308 "polyhedron.m"
  {
#line 308 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 308 "polyhedron.m"
    MR_Integer libs__polyhedron__CastX_7 = (MR_Integer) libs__polyhedron__HeadVar__1_1;
#line 308 "polyhedron.m"
    MR_Integer libs__polyhedron__CastY_8 = (MR_Integer) libs__polyhedron__HeadVar__2_2;

#line 308 "polyhedron.m"
    libs__polyhedron__succeeded = (libs__polyhedron__CastX_7 == libs__polyhedron__CastY_8);
#line 308 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 308 "polyhedron.m"
      libs__polyhedron__succeeded = MR_TRUE;
#line 308 "polyhedron.m"
    else
#line 308 "polyhedron.m"
      if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 308 "polyhedron.m"
        {
#line 308 "polyhedron.m"
          MR_Integer libs__polyhedron__CastX_5 = (MR_Integer) libs__polyhedron__HeadVar__1_1;
#line 308 "polyhedron.m"
          MR_Integer libs__polyhedron__CastY_6 = (MR_Integer) libs__polyhedron__HeadVar__2_2;

#line 308 "polyhedron.m"
          libs__polyhedron__succeeded = (libs__polyhedron__CastY_6 == libs__polyhedron__CastX_5);
#line 308 "polyhedron.m"
        }
#line 308 "polyhedron.m"
      else
#line 308 "polyhedron.m"
        {
#line 308 "polyhedron.m"
          MR_Word libs__polyhedron__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
#line 308 "polyhedron.m"
          MR_Word libs__polyhedron__V_4_4;

#line 308 "polyhedron.m"
          libs__polyhedron__succeeded = ((MR_tag((MR_Word) libs__polyhedron__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 308 "polyhedron.m"
          if (libs__polyhedron__succeeded)
#line 308 "polyhedron.m"
            {
#line 308 "polyhedron.m"
              libs__polyhedron__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
#line 2980 "libs.polyhedron.c"
              {
#line 2982 "libs.polyhedron.c"
                return libs__polyhedron__succeeded = libs__polyhedron____Unify____polyhedron_0_0(libs__polyhedron__V_3_3, libs__polyhedron__V_4_4);
              }
#line 308 "polyhedron.m"
            }
#line 308 "polyhedron.m"
        }
#line 308 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 308 "polyhedron.m"
  }
#line 308 "polyhedron.m"
}

#line 341 "polyhedron.m"
static void MR_CALL 
libs__polyhedron____Compare____constr_info_0_0(
#line 341 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__1_1,
#line 341 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 341 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3)
#line 341 "polyhedron.m"
{
#line 341 "polyhedron.m"
  {
#line 341 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 341 "polyhedron.m"
    MR_Integer libs__polyhedron__CastX_9 = (MR_Integer) libs__polyhedron__HeadVar__2_2;
#line 341 "polyhedron.m"
    MR_Integer libs__polyhedron__CastY_10 = (MR_Integer) libs__polyhedron__HeadVar__3_3;

#line 341 "polyhedron.m"
    libs__polyhedron__succeeded = (libs__polyhedron__CastX_9 == libs__polyhedron__CastY_10);
#line 341 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 3020 "libs.polyhedron.c"
      *libs__polyhedron__HeadVar__1_1 = (MR_Integer) 0;
#line 341 "polyhedron.m"
    else
#line 341 "polyhedron.m"
      {
#line 341 "polyhedron.m"
        MR_Word libs__polyhedron__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
#line 341 "polyhedron.m"
        MR_Word libs__polyhedron__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 1)));
#line 341 "polyhedron.m"
        MR_Word libs__polyhedron__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__3_3, (MR_Integer) 0)));
#line 341 "polyhedron.m"
        MR_Word libs__polyhedron__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__3_3, (MR_Integer) 1)));
#line 341 "polyhedron.m"
        MR_Word libs__polyhedron__V_8_8;

#line 341 "polyhedron.m"
        {
#line 341 "polyhedron.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_2[0], &libs__polyhedron__V_8_8, ((MR_Box) (libs__polyhedron__V_4_4)), ((MR_Box) (libs__polyhedron__V_6_6)));
        }
#line 3042 "libs.polyhedron.c"
        libs__polyhedron__succeeded = (libs__polyhedron__V_8_8 == (MR_Integer) 0);
#line 341 "polyhedron.m"
        libs__polyhedron__succeeded = !(libs__polyhedron__succeeded);
#line 341 "polyhedron.m"
        if (libs__polyhedron__succeeded)
#line 341 "polyhedron.m"
          *libs__polyhedron__HeadVar__1_1 = libs__polyhedron__V_8_8;
#line 341 "polyhedron.m"
        else
#line 341 "polyhedron.m"
          {
#line 341 "polyhedron.m"
            {
#line 341 "polyhedron.m"
              mercury__builtin__compare_3_p_0((MR_Word) &libs__polyhedron_scalar_common_1[3], libs__polyhedron__HeadVar__1_1, ((MR_Box) (libs__polyhedron__V_5_5)), ((MR_Box) (libs__polyhedron__V_7_7)));
#line 341 "polyhedron.m"
              return;
            }
#line 341 "polyhedron.m"
          }
#line 341 "polyhedron.m"
      }
#line 341 "polyhedron.m"
  }
#line 341 "polyhedron.m"
}

#line 341 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron____Unify____constr_info_0_0(
#line 341 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 341 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2)
#line 341 "polyhedron.m"
{
#line 341 "polyhedron.m"
  {
#line 341 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 341 "polyhedron.m"
    MR_Integer libs__polyhedron__CastX_7 = (MR_Integer) libs__polyhedron__HeadVar__1_1;
#line 341 "polyhedron.m"
    MR_Integer libs__polyhedron__CastY_8 = (MR_Integer) libs__polyhedron__HeadVar__2_2;

#line 341 "polyhedron.m"
    libs__polyhedron__succeeded = (libs__polyhedron__CastX_7 == libs__polyhedron__CastY_8);
#line 341 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 341 "polyhedron.m"
      libs__polyhedron__succeeded = MR_TRUE;
#line 341 "polyhedron.m"
    else
#line 341 "polyhedron.m"
      {
#line 341 "polyhedron.m"
        MR_Word libs__polyhedron__TypeInfo_10_10;
#line 341 "polyhedron.m"
        MR_Word libs__polyhedron__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
#line 341 "polyhedron.m"
        MR_Word libs__polyhedron__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__1_1, (MR_Integer) 1)));
#line 341 "polyhedron.m"
        MR_Word libs__polyhedron__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
#line 341 "polyhedron.m"
        MR_Word libs__polyhedron__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__HeadVar__2_2, (MR_Integer) 1)));

#line 3109 "libs.polyhedron.c"
        {
#line 3111 "libs.polyhedron.c"
          libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__polyhedron_scalar_common_2[0], ((MR_Box) (libs__polyhedron__V_3_3)), ((MR_Box) (libs__polyhedron__V_5_5)));
        }
#line 341 "polyhedron.m"
        if (libs__polyhedron__succeeded)
#line 341 "polyhedron.m"
          {
#line 3118 "libs.polyhedron.c"
            libs__polyhedron__TypeInfo_10_10 = (MR_Word) &libs__polyhedron_scalar_common_1[3];
#line 3120 "libs.polyhedron.c"
            {
#line 3122 "libs.polyhedron.c"
              return libs__polyhedron__succeeded = mercury__builtin__unify_2_p_0(libs__polyhedron__TypeInfo_10_10, ((MR_Box) (libs__polyhedron__V_4_4)), ((MR_Box) (libs__polyhedron__V_6_6)));
            }
#line 341 "polyhedron.m"
          }
#line 341 "polyhedron.m"
      }
#line 341 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 341 "polyhedron.m"
  }
#line 341 "polyhedron.m"
}

#line 498 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron__make_last_terms_4_p_0(
#line 498 "polyhedron.m"
  MR_Word libs__polyhedron__OriginalVar_5,
#line 498 "polyhedron.m"
  MR_Word libs__polyhedron__VarMap_6,
#line 498 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_Terms_0_9,
#line 498 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_Terms_10)
#line 498 "polyhedron.m"
{
#line 501 "polyhedron.m"
  {
#line 501 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 501 "polyhedron.m"
    MR_Word libs__polyhedron__TypeInfo_15_15 = (MR_Word) &libs__polyhedron_scalar_common_1[1];
#line 501 "polyhedron.m"
    MR_Word libs__polyhedron__TypeInfo_16_16;
#line 501 "polyhedron.m"
    MR_Word libs__polyhedron__NewVar_8;
#line 501 "polyhedron.m"
    MR_Word libs__polyhedron__V_11_11;
#line 501 "polyhedron.m"
    MR_Word libs__polyhedron__V_13_13;
#line 501 "polyhedron.m"
    MR_Word libs__polyhedron__V_14_14;
#line 502 "polyhedron.m"
    MR_Box libs__polyhedron__conv0_NewVar_8;

#line 502 "polyhedron.m"
    {
#line 502 "polyhedron.m"
      libs__polyhedron__succeeded = mercury__map__search_3_p_0(libs__polyhedron__TypeInfo_15_15, libs__polyhedron__TypeInfo_15_15, libs__polyhedron__VarMap_6, ((MR_Box) (libs__polyhedron__OriginalVar_5)), &libs__polyhedron__conv0_NewVar_8);
    }
#line 502 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 502 "polyhedron.m"
      {
#line 502 "polyhedron.m"
        libs__polyhedron__NewVar_8 = ((MR_Word) libs__polyhedron__conv0_NewVar_8);
#line 502 "polyhedron.m"
        libs__polyhedron__succeeded = MR_TRUE;
#line 502 "polyhedron.m"
      }
#line 501 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 501 "polyhedron.m"
      {
#line 503 "polyhedron.m"
        {
#line 503 "polyhedron.m"
          libs__polyhedron__V_14_14 = libs__rat__one_0_f_0();
        }
#line 503 "polyhedron.m"
        {
#line 503 "polyhedron.m"
          libs__polyhedron__V_13_13 = libs__rat__f_minus_1_f_0(libs__polyhedron__V_14_14);
        }
#line 3197 "libs.polyhedron.c"
        libs__polyhedron__TypeInfo_16_16 = (MR_Word) &libs__polyhedron_scalar_common_2[1];
#line 503 "polyhedron.m"
        {
#line 503 "polyhedron.m"
          libs__polyhedron__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 503 "polyhedron.m"
          MR_hl_field(MR_mktag(0), libs__polyhedron__V_11_11, 0) = ((MR_Box) (libs__polyhedron__NewVar_8));
#line 503 "polyhedron.m"
          MR_hl_field(MR_mktag(0), libs__polyhedron__V_11_11, 1) = ((MR_Box) (libs__polyhedron__V_13_13));
#line 503 "polyhedron.m"
        }
#line 503 "polyhedron.m"
        {
#line 503 "polyhedron.m"
          mercury__list__cons_3_p_0(libs__polyhedron__TypeInfo_16_16, ((MR_Box) (libs__polyhedron__V_11_11)), libs__polyhedron__STATE_VARIABLE_Terms_0_9, libs__polyhedron__STATE_VARIABLE_Terms_10);
        }
#line 503 "polyhedron.m"
        libs__polyhedron__succeeded = MR_TRUE;
#line 501 "polyhedron.m"
      }
#line 501 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 501 "polyhedron.m"
  }
#line 498 "polyhedron.m"
}

#line 494 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron__make_last_constraint_2_f_0_1(
#line 494 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 494 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 494 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 494 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_3)
#line 494 "polyhedron.m"
{
#line 494 "polyhedron.m"
  {
#line 494 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 494 "polyhedron.m"
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
#line 494 "polyhedron.m"
    MR_Word libs__polyhedron__conv0_STATE_VARIABLE_Terms_10;

#line 494 "polyhedron.m"
    {
#line 494 "polyhedron.m"
      libs__polyhedron__succeeded = libs__polyhedron__make_last_terms_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__closure, (MR_Integer) 3))), ((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2), &libs__polyhedron__conv0_STATE_VARIABLE_Terms_10);
    }
#line 494 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 494 "polyhedron.m"
      {
#line 494 "polyhedron.m"
        *libs__polyhedron__wrapper_arg_3 = ((MR_Box) (libs__polyhedron__conv0_STATE_VARIABLE_Terms_10));
#line 494 "polyhedron.m"
        libs__polyhedron__succeeded = MR_TRUE;
#line 494 "polyhedron.m"
      }
#line 494 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 494 "polyhedron.m"
  }
#line 494 "polyhedron.m"
}

#line 491 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron__make_last_constraint_2_f_0(
#line 491 "polyhedron.m"
  MR_Word libs__polyhedron__VarMaps_4,
#line 491 "polyhedron.m"
  MR_Word libs__polyhedron__OriginalVar_5,
#line 491 "polyhedron.m"
  MR_Word * libs__polyhedron__Constraint_6)
#line 491 "polyhedron.m"
{
#line 493 "polyhedron.m"
  {
#line 493 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 493 "polyhedron.m"
    MR_Word libs__polyhedron__LastTerms_7;
#line 493 "polyhedron.m"
    MR_Word libs__polyhedron__AllTerms_8;
#line 493 "polyhedron.m"
    MR_Word libs__polyhedron__V_9_9;
#line 493 "polyhedron.m"
    MR_Word libs__polyhedron__V_11_11;
#line 493 "polyhedron.m"
    MR_Word libs__polyhedron__V_12_12;
#line 493 "polyhedron.m"
    MR_Word libs__polyhedron__V_13_13;
#line 493 "polyhedron.m"
    MR_Word libs__polyhedron__V_14_14;
#line 494 "polyhedron.m"
    MR_Box libs__polyhedron__conv1_LastTerms_7;

#line 494 "polyhedron.m"
    {
#line 494 "polyhedron.m"
      libs__polyhedron__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 494 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_9_9, 0) = ((MR_Box) (&libs__polyhedron_scalar_common_6[1]));
#line 494 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_9_9, 1) = ((MR_Box) (libs__polyhedron__make_last_constraint_2_f_0_1));
#line 494 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 494 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_9_9, 3) = ((MR_Box) (libs__polyhedron__OriginalVar_5));
#line 494 "polyhedron.m"
    }
#line 494 "polyhedron.m"
    {
#line 494 "polyhedron.m"
      libs__polyhedron__succeeded = mercury__list__foldl_4_p_3((MR_Word) &libs__polyhedron_scalar_common_2[0], (MR_Word) &libs__polyhedron_scalar_common_1[5], libs__polyhedron__V_9_9, libs__polyhedron__VarMaps_4, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__polyhedron__conv1_LastTerms_7);
    }
#line 494 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 494 "polyhedron.m"
      {
#line 494 "polyhedron.m"
        libs__polyhedron__LastTerms_7 = ((MR_Word) libs__polyhedron__conv1_LastTerms_7);
#line 494 "polyhedron.m"
        libs__polyhedron__succeeded = MR_TRUE;
#line 494 "polyhedron.m"
      }
#line 493 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 493 "polyhedron.m"
      {
#line 495 "polyhedron.m"
        {
#line 495 "polyhedron.m"
          libs__polyhedron__V_12_12 = libs__rat__one_0_f_0();
        }
#line 496 "polyhedron.m"
        libs__polyhedron__V_13_13 = (MR_Integer) 1;
#line 495 "polyhedron.m"
        {
#line 495 "polyhedron.m"
          libs__polyhedron__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 495 "polyhedron.m"
          MR_hl_field(MR_mktag(0), libs__polyhedron__V_11_11, 0) = ((MR_Box) (libs__polyhedron__OriginalVar_5));
#line 495 "polyhedron.m"
          MR_hl_field(MR_mktag(0), libs__polyhedron__V_11_11, 1) = ((MR_Box) (libs__polyhedron__V_12_12));
#line 495 "polyhedron.m"
        }
#line 495 "polyhedron.m"
        {
#line 495 "polyhedron.m"
          libs__polyhedron__AllTerms_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "polyhedron.m"
          MR_hl_field(MR_mktag(1), libs__polyhedron__AllTerms_8, 0) = ((MR_Box) (libs__polyhedron__V_11_11));
#line 495 "polyhedron.m"
          MR_hl_field(MR_mktag(1), libs__polyhedron__AllTerms_8, 1) = ((MR_Box) (libs__polyhedron__LastTerms_7));
#line 495 "polyhedron.m"
        }
#line 496 "polyhedron.m"
        {
#line 496 "polyhedron.m"
          libs__polyhedron__V_14_14 = libs__rat__zero_0_f_0();
        }
#line 496 "polyhedron.m"
        {
#line 496 "polyhedron.m"
          *libs__polyhedron__Constraint_6 = libs__lp_rational__construct_constraint_3_f_0(libs__polyhedron__AllTerms_8, libs__polyhedron__V_13_13, libs__polyhedron__V_14_14);
        }
#line 496 "polyhedron.m"
        libs__polyhedron__succeeded = MR_TRUE;
#line 493 "polyhedron.m"
      }
#line 493 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 493 "polyhedron.m"
  }
#line 491 "polyhedron.m"
}

#line 487 "polyhedron.m"
static MR_Word MR_CALL 
libs__polyhedron__get_keys_from_map_2_f_0(
#line 487 "polyhedron.m"
  MR_Word libs__polyhedron__Map_4,
#line 487 "polyhedron.m"
  MR_Word libs__polyhedron__KeySet_5)
#line 487 "polyhedron.m"
{
#line 489 "polyhedron.m"
  {
#line 489 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 489 "polyhedron.m"
    MR_Word libs__polyhedron__HeadVar__3_3;
#line 489 "polyhedron.m"
    MR_Word libs__polyhedron__TypeInfo_7_7 = (MR_Word) &libs__polyhedron_scalar_common_1[1];
#line 489 "polyhedron.m"
    MR_Word libs__polyhedron__V_6_6;

#line 489 "polyhedron.m"
    {
#line 489 "polyhedron.m"
      libs__polyhedron__V_6_6 = mercury__map__keys_1_f_0(libs__polyhedron__TypeInfo_7_7, libs__polyhedron__TypeInfo_7_7, libs__polyhedron__Map_4);
    }
#line 489 "polyhedron.m"
    {
#line 489 "polyhedron.m"
      libs__polyhedron__HeadVar__3_3 = mercury__set__insert_list_2_f_0(libs__polyhedron__TypeInfo_7_7, libs__polyhedron__KeySet_5, libs__polyhedron__V_6_6);
    }
#line 489 "polyhedron.m"
    return libs__polyhedron__HeadVar__3_3;
#line 489 "polyhedron.m"
  }
#line 487 "polyhedron.m"
}

#line 478 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0_2(
#line 478 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 478 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 478 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_2)
#line 478 "polyhedron.m"
{
#line 478 "polyhedron.m"
  {
#line 478 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 478 "polyhedron.m"
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
#line 478 "polyhedron.m"
    MR_Word libs__polyhedron__conv2_Constraint_6;

#line 478 "polyhedron.m"
    {
#line 478 "polyhedron.m"
      libs__polyhedron__succeeded = libs__polyhedron__make_last_constraint_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__closure, (MR_Integer) 3))), ((MR_Word) libs__polyhedron__wrapper_arg_1), &libs__polyhedron__conv2_Constraint_6);
    }
#line 478 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 478 "polyhedron.m"
      {
#line 478 "polyhedron.m"
        *libs__polyhedron__wrapper_arg_2 = ((MR_Box) (libs__polyhedron__conv2_Constraint_6));
#line 478 "polyhedron.m"
        libs__polyhedron__succeeded = MR_TRUE;
#line 478 "polyhedron.m"
      }
#line 478 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 478 "polyhedron.m"
  }
#line 478 "polyhedron.m"
}

#line 485 "polyhedron.m"
static MR_Box MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0_1(
#line 485 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 485 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 485 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_2)
#line 485 "polyhedron.m"
{
#line 485 "polyhedron.m"
  {
#line 485 "polyhedron.m"
    MR_Box libs__polyhedron__wrapper_arg_3;
#line 485 "polyhedron.m"
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
#line 485 "polyhedron.m"
    MR_Word libs__polyhedron__conv0_HeadVar__3_3;

#line 485 "polyhedron.m"
    {
#line 485 "polyhedron.m"
      libs__polyhedron__conv0_HeadVar__3_3 = libs__polyhedron__get_keys_from_map_2_f_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    }
#line 485 "polyhedron.m"
    libs__polyhedron__wrapper_arg_3 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__3_3));
#line 485 "polyhedron.m"
    return libs__polyhedron__wrapper_arg_3;
#line 485 "polyhedron.m"
  }
#line 485 "polyhedron.m"
}

#line 474 "polyhedron.m"
static MR_Word MR_CALL 
libs__polyhedron__add_last_constraints_2_f_0(
#line 474 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_Constraints_0_8,
#line 474 "polyhedron.m"
  MR_Word libs__polyhedron__VarMaps_5)
#line 474 "polyhedron.m"
{
#line 476 "polyhedron.m"
  {
#line 476 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 476 "polyhedron.m"
    MR_Word libs__polyhedron__STATE_VARIABLE_Constraints_9;
#line 476 "polyhedron.m"
    MR_Word libs__polyhedron__TypeCtorInfo_14_14;
#line 476 "polyhedron.m"
    MR_Word libs__polyhedron__Keys_6;
#line 476 "polyhedron.m"
    MR_Word libs__polyhedron__NewLastConstraints_7;
#line 476 "polyhedron.m"
    MR_Word libs__polyhedron__V_10_10;
#line 476 "polyhedron.m"
    MR_Word libs__polyhedron__V_11_11;
#line 476 "polyhedron.m"
    MR_Word libs__polyhedron__V_19_19;
#line 485 "polyhedron.m"
    MR_Box libs__polyhedron__conv1_Keys_6;

#line 485 "polyhedron.m"
    {
#line 485 "polyhedron.m"
      libs__polyhedron__V_19_19 = mercury__set__init_0_f_0((MR_Word) &libs__polyhedron_scalar_common_1[1]);
    }
#line 485 "polyhedron.m"
    {
#line 485 "polyhedron.m"
      libs__polyhedron__conv1_Keys_6 = mercury__list__foldl_3_f_0((MR_Word) &libs__polyhedron_scalar_common_2[0], (MR_Word) &libs__polyhedron_scalar_common_1[4], (MR_Word) &libs__polyhedron_scalar_common_2[8], libs__polyhedron__VarMaps_5, ((MR_Box) (libs__polyhedron__V_19_19)));
    }
#line 485 "polyhedron.m"
    libs__polyhedron__Keys_6 = ((MR_Word) libs__polyhedron__conv1_Keys_6);
#line 3537 "libs.polyhedron.c"
    libs__polyhedron__TypeCtorInfo_14_14 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
#line 478 "polyhedron.m"
    {
#line 478 "polyhedron.m"
      libs__polyhedron__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 478 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_10_10, 0) = ((MR_Box) (&libs__polyhedron_scalar_common_5[3]));
#line 478 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_10_10, 1) = ((MR_Box) (libs__polyhedron__add_last_constraints_2_f_0_2));
#line 478 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 478 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_10_10, 3) = ((MR_Box) (libs__polyhedron__VarMaps_5));
#line 478 "polyhedron.m"
    }
#line 478 "polyhedron.m"
    {
#line 478 "polyhedron.m"
      libs__polyhedron__NewLastConstraints_7 = mercury__set__filter_map_2_f_0((MR_Word) &libs__polyhedron_scalar_common_1[1], libs__polyhedron__TypeCtorInfo_14_14, libs__polyhedron__V_10_10, libs__polyhedron__Keys_6);
    }
#line 479 "polyhedron.m"
    {
#line 479 "polyhedron.m"
      libs__polyhedron__V_11_11 = mercury__set__to_sorted_list_1_f_0(libs__polyhedron__TypeCtorInfo_14_14, libs__polyhedron__NewLastConstraints_7);
    }
#line 479 "polyhedron.m"
    {
#line 479 "polyhedron.m"
      mercury__list__append_3_p_1(libs__polyhedron__TypeCtorInfo_14_14, libs__polyhedron__V_11_11, libs__polyhedron__STATE_VARIABLE_Constraints_0_8, &libs__polyhedron__STATE_VARIABLE_Constraints_9);
    }
#line 476 "polyhedron.m"
    return libs__polyhedron__STATE_VARIABLE_Constraints_9;
#line 476 "polyhedron.m"
  }
#line 474 "polyhedron.m"
}

#line 441 "polyhedron.m"
static void MR_CALL 
libs__polyhedron__change_var_6_p_0(
#line 441 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_Term_0_13,
#line 441 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_Term_14,
#line 441 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_VarMap_0_15,
#line 441 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_VarMap_16,
#line 441 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_Varset_0_17,
#line 441 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_Varset_18)
#line 441 "polyhedron.m"
{
#line 446 "polyhedron.m"
  {
#line 446 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 446 "polyhedron.m"
    MR_Word libs__polyhedron__Coefficient_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__STATE_VARIABLE_Term_0_13, (MR_Integer) 1)));
#line 446 "polyhedron.m"
    MR_Word libs__polyhedron__STATE_VARIABLE_Var_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__STATE_VARIABLE_Term_0_13, (MR_Integer) 0)));
#line 446 "polyhedron.m"
    MR_Word libs__polyhedron__STATE_VARIABLE_Var_23_23;
#line 451 "polyhedron.m"
    MR_Word libs__polyhedron__STATE_VARIABLE_Var_20_20;
#line 449 "polyhedron.m"
    MR_Word libs__polyhedron__TypeInfo_25_25 = (MR_Word) &libs__polyhedron_scalar_common_1[1];
#line 449 "polyhedron.m"
    MR_Box libs__polyhedron__conv0_STATE_VARIABLE_Var_20_20;

#line 449 "polyhedron.m"
    {
#line 449 "polyhedron.m"
      libs__polyhedron__succeeded = mercury__map__search_3_p_0(libs__polyhedron__TypeInfo_25_25, libs__polyhedron__TypeInfo_25_25, libs__polyhedron__STATE_VARIABLE_VarMap_0_15, ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Var_19_19)), &libs__polyhedron__conv0_STATE_VARIABLE_Var_20_20);
    }
#line 449 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 449 "polyhedron.m"
      {
#line 449 "polyhedron.m"
        libs__polyhedron__STATE_VARIABLE_Var_20_20 = ((MR_Word) libs__polyhedron__conv0_STATE_VARIABLE_Var_20_20);
#line 449 "polyhedron.m"
        libs__polyhedron__succeeded = MR_TRUE;
#line 449 "polyhedron.m"
      }
#line 451 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 450 "polyhedron.m"
      {
#line 450 "polyhedron.m"
        libs__polyhedron__STATE_VARIABLE_Var_23_23 = libs__polyhedron__STATE_VARIABLE_Var_20_20;
#line 450 "polyhedron.m"
        *libs__polyhedron__STATE_VARIABLE_Varset_18 = libs__polyhedron__STATE_VARIABLE_Varset_0_17;
#line 450 "polyhedron.m"
        *libs__polyhedron__STATE_VARIABLE_VarMap_16 = libs__polyhedron__STATE_VARIABLE_VarMap_0_15;
#line 450 "polyhedron.m"
      }
#line 451 "polyhedron.m"
    else
#line 452 "polyhedron.m"
      {
#line 452 "polyhedron.m"
        MR_Word libs__polyhedron__TypeInfo_27_27;

#line 452 "polyhedron.m"
        {
#line 452 "polyhedron.m"
          mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &libs__polyhedron__STATE_VARIABLE_Var_23_23, libs__polyhedron__STATE_VARIABLE_Varset_0_17, libs__polyhedron__STATE_VARIABLE_Varset_18);
        }
#line 3648 "libs.polyhedron.c"
        libs__polyhedron__TypeInfo_27_27 = (MR_Word) &libs__polyhedron_scalar_common_1[1];
#line 453 "polyhedron.m"
        {
#line 453 "polyhedron.m"
          mercury__map__det_insert_4_p_0(libs__polyhedron__TypeInfo_27_27, libs__polyhedron__TypeInfo_27_27, ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Var_19_19)), ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Var_23_23)), libs__polyhedron__STATE_VARIABLE_VarMap_0_15, libs__polyhedron__STATE_VARIABLE_VarMap_16);
        }
#line 452 "polyhedron.m"
      }
#line 456 "polyhedron.m"
    {
#line 456 "polyhedron.m"
      MR_Word base;
#line 456 "polyhedron.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 456 "polyhedron.m"
      *libs__polyhedron__STATE_VARIABLE_Term_14 = base;
#line 456 "polyhedron.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Var_23_23));
#line 456 "polyhedron.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__polyhedron__Coefficient_11));
#line 456 "polyhedron.m"
    }
#line 446 "polyhedron.m"
  }
#line 441 "polyhedron.m"
}

#line 432 "polyhedron.m"
static void MR_CALL 
libs__polyhedron__transform_constraint_7_p_0_1(
#line 432 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 432 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 432 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_2,
#line 432 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_3,
#line 432 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_4,
#line 432 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_5,
#line 432 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_6)
#line 432 "polyhedron.m"
{
#line 432 "polyhedron.m"
  {
#line 432 "polyhedron.m"
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
#line 432 "polyhedron.m"
    MR_Word libs__polyhedron__conv2_STATE_VARIABLE_Term_14;
#line 432 "polyhedron.m"
    MR_Word libs__polyhedron__conv1_STATE_VARIABLE_VarMap_16;
#line 432 "polyhedron.m"
    MR_Word libs__polyhedron__conv0_STATE_VARIABLE_Varset_18;

#line 432 "polyhedron.m"
    {
#line 432 "polyhedron.m"
      libs__polyhedron__change_var_6_p_0(((MR_Word) libs__polyhedron__wrapper_arg_1), &libs__polyhedron__conv2_STATE_VARIABLE_Term_14, ((MR_Word) libs__polyhedron__wrapper_arg_3), &libs__polyhedron__conv1_STATE_VARIABLE_VarMap_16, ((MR_Word) libs__polyhedron__wrapper_arg_5), &libs__polyhedron__conv0_STATE_VARIABLE_Varset_18);
    }
#line 432 "polyhedron.m"
    *libs__polyhedron__wrapper_arg_2 = ((MR_Box) (libs__polyhedron__conv2_STATE_VARIABLE_Term_14));
#line 432 "polyhedron.m"
    *libs__polyhedron__wrapper_arg_4 = ((MR_Box) (libs__polyhedron__conv1_STATE_VARIABLE_VarMap_16));
#line 432 "polyhedron.m"
    *libs__polyhedron__wrapper_arg_6 = ((MR_Box) (libs__polyhedron__conv0_STATE_VARIABLE_Varset_18));
#line 432 "polyhedron.m"
  }
#line 432 "polyhedron.m"
}

#line 426 "polyhedron.m"
static void MR_CALL 
libs__polyhedron__transform_constraint_7_p_0(
#line 426 "polyhedron.m"
  MR_Word libs__polyhedron__Sigma_8,
#line 426 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_Constraint_0_15,
#line 426 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_Constraint_16,
#line 426 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_VarMap_0_17,
#line 426 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_VarMap_18,
#line 426 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_Varset_0_19,
#line 426 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_Varset_20)
#line 426 "polyhedron.m"
{
#line 431 "polyhedron.m"
  {
#line 431 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 431 "polyhedron.m"
    MR_Word libs__polyhedron__TypeInfo_37_37;
#line 431 "polyhedron.m"
    MR_Word libs__polyhedron__Op_13;
#line 431 "polyhedron.m"
    MR_Word libs__polyhedron__Const_14;
#line 431 "polyhedron.m"
    MR_Word libs__polyhedron__STATE_VARIABLE_Terms_21_21;
#line 431 "polyhedron.m"
    MR_Word libs__polyhedron__STATE_VARIABLE_Terms_23_23;
#line 431 "polyhedron.m"
    MR_Word libs__polyhedron__V_26_26;
#line 431 "polyhedron.m"
    MR_Word libs__polyhedron__STATE_VARIABLE_Terms_27_27;
#line 431 "polyhedron.m"
    MR_Word libs__polyhedron__V_28_28;
#line 431 "polyhedron.m"
    MR_Word libs__polyhedron__V_30_30;
#line 432 "polyhedron.m"
    MR_Box libs__polyhedron__conv4_STATE_VARIABLE_VarMap_18;
#line 432 "polyhedron.m"
    MR_Box libs__polyhedron__conv3_STATE_VARIABLE_Varset_20;

#line 431 "polyhedron.m"
    {
#line 431 "polyhedron.m"
      libs__lp_rational__deconstruct_constraint_4_p_0(libs__polyhedron__STATE_VARIABLE_Constraint_0_15, &libs__polyhedron__STATE_VARIABLE_Terms_21_21, &libs__polyhedron__Op_13, &libs__polyhedron__Const_14);
    }
#line 3773 "libs.polyhedron.c"
    libs__polyhedron__TypeInfo_37_37 = (MR_Word) &libs__polyhedron_scalar_common_2[1];
#line 432 "polyhedron.m"
    {
#line 432 "polyhedron.m"
      mercury__list__map_foldl2_7_p_0(libs__polyhedron__TypeInfo_37_37, libs__polyhedron__TypeInfo_37_37, (MR_Word) &libs__polyhedron_scalar_common_2[0], (MR_Word) &libs__polyhedron_scalar_common_1[3], (MR_Word) &libs__polyhedron_scalar_common_2[7], libs__polyhedron__STATE_VARIABLE_Terms_21_21, &libs__polyhedron__STATE_VARIABLE_Terms_23_23, ((MR_Box) (libs__polyhedron__STATE_VARIABLE_VarMap_0_17)), &libs__polyhedron__conv4_STATE_VARIABLE_VarMap_18, ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Varset_0_19)), &libs__polyhedron__conv3_STATE_VARIABLE_Varset_20);
    }
#line 432 "polyhedron.m"
    *libs__polyhedron__STATE_VARIABLE_VarMap_18 = ((MR_Word) libs__polyhedron__conv4_STATE_VARIABLE_VarMap_18);
#line 432 "polyhedron.m"
    *libs__polyhedron__STATE_VARIABLE_Varset_20 = ((MR_Word) libs__polyhedron__conv3_STATE_VARIABLE_Varset_20);
#line 433 "polyhedron.m"
    {
#line 433 "polyhedron.m"
      libs__polyhedron__V_28_28 = libs__rat__f_minus_1_f_0(libs__polyhedron__Const_14);
    }
#line 433 "polyhedron.m"
    {
#line 433 "polyhedron.m"
      libs__polyhedron__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_26_26, 0) = ((MR_Box) (libs__polyhedron__Sigma_8));
#line 433 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_26_26, 1) = ((MR_Box) (libs__polyhedron__V_28_28));
#line 433 "polyhedron.m"
    }
#line 433 "polyhedron.m"
    {
#line 433 "polyhedron.m"
      mercury__list__cons_3_p_0(libs__polyhedron__TypeInfo_37_37, ((MR_Box) (libs__polyhedron__V_26_26)), libs__polyhedron__STATE_VARIABLE_Terms_23_23, &libs__polyhedron__STATE_VARIABLE_Terms_27_27);
    }
#line 434 "polyhedron.m"
    {
#line 434 "polyhedron.m"
      libs__polyhedron__V_30_30 = libs__rat__zero_0_f_0();
    }
#line 434 "polyhedron.m"
    {
#line 434 "polyhedron.m"
      *libs__polyhedron__STATE_VARIABLE_Constraint_16 = libs__lp_rational__construct_constraint_3_f_0(libs__polyhedron__STATE_VARIABLE_Terms_27_27, libs__polyhedron__Op_13, libs__polyhedron__V_30_30);
    }
#line 431 "polyhedron.m"
  }
#line 426 "polyhedron.m"
}

#line 414 "polyhedron.m"
static void MR_CALL 
libs__polyhedron__transform_polyhedron_5_p_0_1(
#line 414 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 414 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 414 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_2,
#line 414 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_3,
#line 414 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_4,
#line 414 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_5,
#line 414 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_6)
#line 414 "polyhedron.m"
{
#line 414 "polyhedron.m"
  {
#line 414 "polyhedron.m"
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
#line 414 "polyhedron.m"
    MR_Word libs__polyhedron__conv2_STATE_VARIABLE_Constraint_16;
#line 414 "polyhedron.m"
    MR_Word libs__polyhedron__conv1_STATE_VARIABLE_VarMap_18;
#line 414 "polyhedron.m"
    MR_Word libs__polyhedron__conv0_STATE_VARIABLE_Varset_20;

#line 414 "polyhedron.m"
    {
#line 414 "polyhedron.m"
      libs__polyhedron__transform_constraint_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__closure, (MR_Integer) 3))), ((MR_Word) libs__polyhedron__wrapper_arg_1), &libs__polyhedron__conv2_STATE_VARIABLE_Constraint_16, ((MR_Word) libs__polyhedron__wrapper_arg_3), &libs__polyhedron__conv1_STATE_VARIABLE_VarMap_18, ((MR_Word) libs__polyhedron__wrapper_arg_5), &libs__polyhedron__conv0_STATE_VARIABLE_Varset_20);
    }
#line 414 "polyhedron.m"
    *libs__polyhedron__wrapper_arg_2 = ((MR_Box) (libs__polyhedron__conv2_STATE_VARIABLE_Constraint_16));
#line 414 "polyhedron.m"
    *libs__polyhedron__wrapper_arg_4 = ((MR_Box) (libs__polyhedron__conv1_STATE_VARIABLE_VarMap_18));
#line 414 "polyhedron.m"
    *libs__polyhedron__wrapper_arg_6 = ((MR_Box) (libs__polyhedron__conv0_STATE_VARIABLE_Varset_20));
#line 414 "polyhedron.m"
  }
#line 414 "polyhedron.m"
}

#line 407 "polyhedron.m"
static void MR_CALL 
libs__polyhedron__transform_polyhedron_5_p_0(
#line 407 "polyhedron.m"
  MR_Word libs__polyhedron__Poly_6,
#line 407 "polyhedron.m"
  MR_Word libs__polyhedron__Polys0_7,
#line 407 "polyhedron.m"
  MR_Word * libs__polyhedron__Polys_8,
#line 407 "polyhedron.m"
  MR_Word libs__polyhedron__STATE_VARIABLE_PolyInfo_0_16,
#line 407 "polyhedron.m"
  MR_Word * libs__polyhedron__STATE_VARIABLE_PolyInfo_17)
#line 407 "polyhedron.m"
{
#line 412 "polyhedron.m"
  {
#line 412 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 412 "polyhedron.m"
    MR_Word libs__polyhedron__TypeInfo_33_33;
#line 412 "polyhedron.m"
    MR_Word libs__polyhedron__TypeCtorInfo_34_34;
#line 412 "polyhedron.m"
    MR_Word libs__polyhedron__VarMaps_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__STATE_VARIABLE_PolyInfo_0_16, (MR_Integer) 0)));
#line 412 "polyhedron.m"
    MR_Word libs__polyhedron__Sigmas_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__STATE_VARIABLE_PolyInfo_0_16, (MR_Integer) 1)));
#line 412 "polyhedron.m"
    MR_Word libs__polyhedron__Sigma_13;
#line 412 "polyhedron.m"
    MR_Word libs__polyhedron__NewEqns_14;
#line 412 "polyhedron.m"
    MR_Word libs__polyhedron__VarMap_15;
#line 412 "polyhedron.m"
    MR_Word libs__polyhedron__STATE_VARIABLE_Varset_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__STATE_VARIABLE_PolyInfo_0_16, (MR_Integer) 2)));
#line 412 "polyhedron.m"
    MR_Word libs__polyhedron__STATE_VARIABLE_Varset_19_19;
#line 412 "polyhedron.m"
    MR_Word libs__polyhedron__V_20_20;
#line 412 "polyhedron.m"
    MR_Word libs__polyhedron__V_21_21;
#line 412 "polyhedron.m"
    MR_Word libs__polyhedron__STATE_VARIABLE_Varset_22_22;
#line 412 "polyhedron.m"
    MR_Word libs__polyhedron__V_24_24;
#line 412 "polyhedron.m"
    MR_Word libs__polyhedron__V_25_25;
#line 414 "polyhedron.m"
    MR_Box libs__polyhedron__conv4_VarMap_15;
#line 414 "polyhedron.m"
    MR_Box libs__polyhedron__conv3_STATE_VARIABLE_Varset_22_22;

#line 413 "polyhedron.m"
    {
#line 413 "polyhedron.m"
      mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &libs__polyhedron__Sigma_13, libs__polyhedron__STATE_VARIABLE_Varset_18_18, &libs__polyhedron__STATE_VARIABLE_Varset_19_19);
    }
#line 414 "polyhedron.m"
    {
#line 414 "polyhedron.m"
      libs__polyhedron__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 414 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_20_20, 0) = ((MR_Box) (&libs__polyhedron_scalar_common_9[0]));
#line 414 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_20_20, 1) = ((MR_Box) (libs__polyhedron__transform_polyhedron_5_p_0_1));
#line 414 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 414 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_20_20, 3) = ((MR_Box) (libs__polyhedron__Sigma_13));
#line 414 "polyhedron.m"
    }
#line 3936 "libs.polyhedron.c"
    libs__polyhedron__TypeInfo_33_33 = (MR_Word) &libs__polyhedron_scalar_common_1[1];
#line 414 "polyhedron.m"
    {
#line 414 "polyhedron.m"
      libs__polyhedron__V_21_21 = mercury__map__init_0_f_0(libs__polyhedron__TypeInfo_33_33, libs__polyhedron__TypeInfo_33_33);
    }
#line 3943 "libs.polyhedron.c"
    libs__polyhedron__TypeCtorInfo_34_34 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
#line 414 "polyhedron.m"
    {
#line 414 "polyhedron.m"
      mercury__list__map_foldl2_7_p_0(libs__polyhedron__TypeCtorInfo_34_34, libs__polyhedron__TypeCtorInfo_34_34, (MR_Word) &libs__polyhedron_scalar_common_2[0], (MR_Word) &libs__polyhedron_scalar_common_1[3], libs__polyhedron__V_20_20, libs__polyhedron__Poly_6, &libs__polyhedron__NewEqns_14, ((MR_Box) (libs__polyhedron__V_21_21)), &libs__polyhedron__conv4_VarMap_15, ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Varset_19_19)), &libs__polyhedron__conv3_STATE_VARIABLE_Varset_22_22);
    }
#line 414 "polyhedron.m"
    libs__polyhedron__VarMap_15 = ((MR_Word) libs__polyhedron__conv4_VarMap_15);
#line 414 "polyhedron.m"
    libs__polyhedron__STATE_VARIABLE_Varset_22_22 = ((MR_Word) libs__polyhedron__conv3_STATE_VARIABLE_Varset_22_22);
#line 416 "polyhedron.m"
    {
#line 416 "polyhedron.m"
      *libs__polyhedron__Polys_8 = mercury__list__f_43_43_2_f_0(libs__polyhedron__TypeCtorInfo_34_34, libs__polyhedron__NewEqns_14, libs__polyhedron__Polys0_7);
    }
#line 417 "polyhedron.m"
    {
#line 417 "polyhedron.m"
      libs__polyhedron__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "polyhedron.m"
      MR_hl_field(MR_mktag(1), libs__polyhedron__V_24_24, 0) = ((MR_Box) (libs__polyhedron__VarMap_15));
#line 417 "polyhedron.m"
      MR_hl_field(MR_mktag(1), libs__polyhedron__V_24_24, 1) = ((MR_Box) (libs__polyhedron__VarMaps_11));
#line 417 "polyhedron.m"
    }
#line 417 "polyhedron.m"
    {
#line 417 "polyhedron.m"
      libs__polyhedron__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "polyhedron.m"
      MR_hl_field(MR_mktag(1), libs__polyhedron__V_25_25, 0) = ((MR_Box) (libs__polyhedron__Sigma_13));
#line 417 "polyhedron.m"
      MR_hl_field(MR_mktag(1), libs__polyhedron__V_25_25, 1) = ((MR_Box) (libs__polyhedron__Sigmas_12));
#line 417 "polyhedron.m"
    }
#line 417 "polyhedron.m"
    {
#line 417 "polyhedron.m"
      MR_Word base;
#line 417 "polyhedron.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 417 "polyhedron.m"
      *libs__polyhedron__STATE_VARIABLE_PolyInfo_17 = base;
#line 417 "polyhedron.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__polyhedron__V_24_24));
#line 417 "polyhedron.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__polyhedron__V_25_25));
#line 417 "polyhedron.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Varset_22_22));
#line 417 "polyhedron.m"
    }
#line 412 "polyhedron.m"
  }
#line 407 "polyhedron.m"
}

#line 366 "polyhedron.m"
static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_4(
#line 366 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 366 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 366 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_2)
#line 366 "polyhedron.m"
{
#line 366 "polyhedron.m"
  {
#line 366 "polyhedron.m"
    MR_Box libs__polyhedron__wrapper_arg_3;
#line 366 "polyhedron.m"
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
#line 366 "polyhedron.m"
    MR_Word libs__polyhedron__conv6_HeadVar__3_42;

#line 366 "polyhedron.m"
    {
#line 366 "polyhedron.m"
      libs__polyhedron__conv6_HeadVar__3_42 = libs__polyhedron__IntroducedFrom__func__convex_hull__366__1_2_f_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2));
    }
#line 366 "polyhedron.m"
    libs__polyhedron__wrapper_arg_3 = ((MR_Box) (libs__polyhedron__conv6_HeadVar__3_42));
#line 366 "polyhedron.m"
    return libs__polyhedron__wrapper_arg_3;
#line 366 "polyhedron.m"
  }
#line 366 "polyhedron.m"
}

#line 468 "polyhedron.m"
static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_3(
#line 468 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 468 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1)
#line 468 "polyhedron.m"
{
#line 468 "polyhedron.m"
  {
#line 468 "polyhedron.m"
    MR_Box libs__polyhedron__wrapper_arg_2;
#line 468 "polyhedron.m"
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
#line 468 "polyhedron.m"
    MR_Word libs__polyhedron__conv5_HeadVar__2_2;

#line 468 "polyhedron.m"
    {
#line 468 "polyhedron.m"
      libs__polyhedron__conv5_HeadVar__2_2 = libs__lp_rational__lp_term_1_f_0(((MR_Word) libs__polyhedron__wrapper_arg_1));
    }
#line 468 "polyhedron.m"
    libs__polyhedron__wrapper_arg_2 = ((MR_Box) (libs__polyhedron__conv5_HeadVar__2_2));
#line 468 "polyhedron.m"
    return libs__polyhedron__wrapper_arg_2;
#line 468 "polyhedron.m"
  }
#line 468 "polyhedron.m"
}

#line 464 "polyhedron.m"
static MR_Box MR_CALL 
libs__polyhedron__convex_hull_4_p_0_2(
#line 464 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 464 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1)
#line 464 "polyhedron.m"
{
#line 464 "polyhedron.m"
  {
#line 464 "polyhedron.m"
    MR_Box libs__polyhedron__wrapper_arg_2;
#line 464 "polyhedron.m"
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
#line 464 "polyhedron.m"
    MR_Word libs__polyhedron__conv4_HeadVar__2_2;

#line 464 "polyhedron.m"
    {
#line 464 "polyhedron.m"
      libs__polyhedron__conv4_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) libs__polyhedron__wrapper_arg_1));
    }
#line 464 "polyhedron.m"
    libs__polyhedron__wrapper_arg_2 = ((MR_Box) (libs__polyhedron__conv4_HeadVar__2_2));
#line 464 "polyhedron.m"
    return libs__polyhedron__wrapper_arg_2;
#line 464 "polyhedron.m"
  }
#line 464 "polyhedron.m"
}

#line 405 "polyhedron.m"
static void MR_CALL 
libs__polyhedron__convex_hull_4_p_0_1(
#line 405 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 405 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1,
#line 405 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_2,
#line 405 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_3,
#line 405 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_4,
#line 405 "polyhedron.m"
  MR_Box * libs__polyhedron__wrapper_arg_5)
#line 405 "polyhedron.m"
{
#line 405 "polyhedron.m"
  {
#line 405 "polyhedron.m"
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
#line 405 "polyhedron.m"
    MR_Word libs__polyhedron__conv1_Polys_8;
#line 405 "polyhedron.m"
    MR_Word libs__polyhedron__conv0_STATE_VARIABLE_PolyInfo_17;

#line 405 "polyhedron.m"
    {
#line 405 "polyhedron.m"
      libs__polyhedron__transform_polyhedron_5_p_0(((MR_Word) libs__polyhedron__wrapper_arg_1), ((MR_Word) libs__polyhedron__wrapper_arg_2), &libs__polyhedron__conv1_Polys_8, ((MR_Word) libs__polyhedron__wrapper_arg_4), &libs__polyhedron__conv0_STATE_VARIABLE_PolyInfo_17);
    }
#line 405 "polyhedron.m"
    *libs__polyhedron__wrapper_arg_3 = ((MR_Box) (libs__polyhedron__conv1_Polys_8));
#line 405 "polyhedron.m"
    *libs__polyhedron__wrapper_arg_5 = ((MR_Box) (libs__polyhedron__conv0_STATE_VARIABLE_PolyInfo_17));
#line 405 "polyhedron.m"
  }
#line 405 "polyhedron.m"
}

#line 350 "polyhedron.m"
static void MR_CALL 
libs__polyhedron__convex_hull_4_p_0(
#line 350 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 350 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__2_2,
#line 350 "polyhedron.m"
  MR_Word libs__polyhedron__MaybeMaxSize_3,
#line 350 "polyhedron.m"
  MR_Word libs__polyhedron__Varset0_4)
#line 350 "polyhedron.m"
{
#line 353 "polyhedron.m"
  {
#line 353 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;

#line 353 "polyhedron.m"
    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 353 "polyhedron.m"
      {
#line 354 "polyhedron.m"
        {
#line 354 "polyhedron.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.polyhedron", (MR_String) "predicate \140libs.polyhedron.convex_hull\'/4", (MR_String) "empty list");
#line 354 "polyhedron.m"
          return;
        }
#line 353 "polyhedron.m"
      }
#line 353 "polyhedron.m"
    else
#line 353 "polyhedron.m"
      {
#line 353 "polyhedron.m"
        MR_Word libs__polyhedron__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 1)));
#line 353 "polyhedron.m"
        MR_Word libs__polyhedron__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));

#line 353 "polyhedron.m"
        if ((libs__polyhedron__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 355 "polyhedron.m"
          {
#line 355 "polyhedron.m"
            MR_Word base;
#line 355 "polyhedron.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 355 "polyhedron.m"
            *libs__polyhedron__HeadVar__2_2 = base;
#line 355 "polyhedron.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__polyhedron__V_61_61));
#line 355 "polyhedron.m"
          }
#line 353 "polyhedron.m"
        else
#line 356 "polyhedron.m"
          {
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__TypeInfo_18_75;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__TypeInfo_17_90;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__TypeCtorInfo_18_91;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__PolyInfo0_22;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__Matrix0_23;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__PolyInfo_24;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__VarMaps_25;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__Sigmas_26;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__Varset_27;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__Matrix1_28;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__Matrix_29;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__VarsToEliminate_34;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__ProjectionResult_35;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__V_44_44;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__SigmaConstraints_81;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__SigmaTerms_82;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__STATE_VARIABLE_Constraints_11_84;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__V_86_86;
#line 356 "polyhedron.m"
            MR_Word libs__polyhedron__V_89_89;
#line 405 "polyhedron.m"
            MR_Box libs__polyhedron__conv3_Matrix0_23;
#line 405 "polyhedron.m"
            MR_Box libs__polyhedron__conv2_PolyInfo_24;
#line 369 "polyhedron.m"
            MR_Box libs__polyhedron__conv7_V_44_44;

#line 361 "polyhedron.m"
            {
#line 361 "polyhedron.m"
              libs__polyhedron__PolyInfo0_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 361 "polyhedron.m"
              MR_hl_field(MR_mktag(0), libs__polyhedron__PolyInfo0_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "polyhedron.m"
              MR_hl_field(MR_mktag(0), libs__polyhedron__PolyInfo0_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "polyhedron.m"
              MR_hl_field(MR_mktag(0), libs__polyhedron__PolyInfo0_22, 2) = ((MR_Box) (libs__polyhedron__Varset0_4));
#line 361 "polyhedron.m"
            }
#line 4253 "libs.polyhedron.c"
            libs__polyhedron__TypeInfo_18_75 = (MR_Word) &libs__polyhedron_scalar_common_1[0];
#line 405 "polyhedron.m"
            {
#line 405 "polyhedron.m"
              mercury__list__foldl2_6_p_0(libs__polyhedron__TypeInfo_18_75, libs__polyhedron__TypeInfo_18_75, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedra_info_0, (MR_Word) &libs__polyhedron_scalar_common_2[3], libs__polyhedron__HeadVar__1_1, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__polyhedron__conv3_Matrix0_23, ((MR_Box) (libs__polyhedron__PolyInfo0_22)), &libs__polyhedron__conv2_PolyInfo_24);
            }
#line 405 "polyhedron.m"
            libs__polyhedron__Matrix0_23 = ((MR_Word) libs__polyhedron__conv3_Matrix0_23);
#line 405 "polyhedron.m"
            libs__polyhedron__PolyInfo_24 = ((MR_Word) libs__polyhedron__conv2_PolyInfo_24);
#line 363 "polyhedron.m"
            libs__polyhedron__VarMaps_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__PolyInfo_24, (MR_Integer) 0)));
#line 363 "polyhedron.m"
            libs__polyhedron__Sigmas_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__PolyInfo_24, (MR_Integer) 1)));
#line 363 "polyhedron.m"
            libs__polyhedron__Varset_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__PolyInfo_24, (MR_Integer) 2)));
#line 4270 "libs.polyhedron.c"
            libs__polyhedron__TypeInfo_17_90 = (MR_Word) &libs__polyhedron_scalar_common_1[1];
#line 4272 "libs.polyhedron.c"
            libs__polyhedron__TypeCtorInfo_18_91 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
#line 464 "polyhedron.m"
            {
#line 464 "polyhedron.m"
              libs__polyhedron__SigmaConstraints_81 = mercury__list__map_2_f_0(libs__polyhedron__TypeInfo_17_90, libs__polyhedron__TypeCtorInfo_18_91, (MR_Word) &libs__polyhedron_scalar_common_2[4], libs__polyhedron__Sigmas_26);
            }
#line 465 "polyhedron.m"
            {
#line 465 "polyhedron.m"
              mercury__list__append_3_p_1(libs__polyhedron__TypeCtorInfo_18_91, libs__polyhedron__SigmaConstraints_81, libs__polyhedron__Matrix0_23, &libs__polyhedron__STATE_VARIABLE_Constraints_11_84);
            }
#line 468 "polyhedron.m"
            {
#line 468 "polyhedron.m"
              libs__polyhedron__SigmaTerms_82 = mercury__list__map_2_f_0(libs__polyhedron__TypeInfo_17_90, (MR_Word) &libs__polyhedron_scalar_common_2[1], (MR_Word) &libs__polyhedron_scalar_common_2[5], libs__polyhedron__Sigmas_26);
            }
#line 469 "polyhedron.m"
            {
#line 469 "polyhedron.m"
              libs__polyhedron__V_89_89 = libs__rat__one_0_f_0();
            }
#line 469 "polyhedron.m"
            {
#line 469 "polyhedron.m"
              libs__polyhedron__V_86_86 = libs__lp_rational__construct_constraint_3_f_0(libs__polyhedron__SigmaTerms_82, (MR_Integer) 1, libs__polyhedron__V_89_89);
            }
#line 469 "polyhedron.m"
            {
#line 469 "polyhedron.m"
              mercury__list__cons_3_p_0(libs__polyhedron__TypeCtorInfo_18_91, ((MR_Box) (libs__polyhedron__V_86_86)), libs__polyhedron__STATE_VARIABLE_Constraints_11_84, &libs__polyhedron__Matrix1_28);
            }
#line 365 "polyhedron.m"
            {
#line 365 "polyhedron.m"
              libs__polyhedron__Matrix_29 = libs__polyhedron__add_last_constraints_2_f_0(libs__polyhedron__Matrix1_28, libs__polyhedron__VarMaps_25);
            }
#line 369 "polyhedron.m"
            {
#line 369 "polyhedron.m"
              libs__polyhedron__conv7_V_44_44 = mercury__list__foldl_3_f_0((MR_Word) &libs__polyhedron_scalar_common_2[0], (MR_Word) &libs__polyhedron_scalar_common_1[2], (MR_Word) &libs__polyhedron_scalar_common_2[6], libs__polyhedron__VarMaps_25, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
            }
#line 369 "polyhedron.m"
            libs__polyhedron__V_44_44 = ((MR_Word) libs__polyhedron__conv7_V_44_44);
#line 369 "polyhedron.m"
            {
#line 369 "polyhedron.m"
              libs__polyhedron__VarsToEliminate_34 = mercury__list__f_43_43_2_f_0((MR_Word) &libs__polyhedron_scalar_common_1[1], libs__polyhedron__Sigmas_26, libs__polyhedron__V_44_44);
            }
#line 377 "polyhedron.m"
            {
#line 377 "polyhedron.m"
              libs__lp_rational__project_5_p_0(libs__polyhedron__VarsToEliminate_34, libs__polyhedron__Varset_27, libs__polyhedron__MaybeMaxSize_3, libs__polyhedron__Matrix_29, &libs__polyhedron__ProjectionResult_35);
            }
#line 383 "polyhedron.m"
            if ((libs__polyhedron__ProjectionResult_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 381 "polyhedron.m"
              {
#line 381 "polyhedron.m"
                MR_Word libs__polyhedron__V_51_51;

#line 382 "polyhedron.m"
                {
#line 382 "polyhedron.m"
                  libs__polyhedron__V_51_51 = libs__lp_rational__nonneg_box_2_f_0(libs__polyhedron__VarsToEliminate_34, libs__polyhedron__Matrix_29);
                }
#line 382 "polyhedron.m"
                {
#line 382 "polyhedron.m"
                  MR_Word base;
#line 382 "polyhedron.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 382 "polyhedron.m"
                  *libs__polyhedron__HeadVar__2_2 = base;
#line 382 "polyhedron.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__polyhedron__V_51_51));
#line 382 "polyhedron.m"
                }
#line 381 "polyhedron.m"
              }
#line 383 "polyhedron.m"
            else
#line 383 "polyhedron.m"
              if ((libs__polyhedron__ProjectionResult_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "polyhedron.m"
                *libs__polyhedron__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 383 "polyhedron.m"
              else
#line 388 "polyhedron.m"
                {
#line 388 "polyhedron.m"
                  MR_Word libs__polyhedron__STATE_VARIABLE_Hull_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__ProjectionResult_35, (MR_Integer) 0)));
#line 388 "polyhedron.m"
                  MR_Word libs__polyhedron__STATE_VARIABLE_Hull_47_47;
#line 388 "polyhedron.m"
                  MR_Word libs__polyhedron__STATE_VARIABLE_Hull_48_48;
#line 395 "polyhedron.m"
                  MR_Word libs__polyhedron__STATE_VARIABLE_Hull_49_49;

#line 389 "polyhedron.m"
                  {
#line 389 "polyhedron.m"
                    libs__lp_rational__restore_equalities_2_p_0(libs__polyhedron__STATE_VARIABLE_Hull_46_46, &libs__polyhedron__STATE_VARIABLE_Hull_47_47);
                  }
#line 392 "polyhedron.m"
                  {
#line 392 "polyhedron.m"
                    libs__polyhedron__STATE_VARIABLE_Hull_48_48 = libs__lp_rational__simplify_constraints_1_f_0(libs__polyhedron__STATE_VARIABLE_Hull_47_47);
                  }
#line 393 "polyhedron.m"
                  {
#line 393 "polyhedron.m"
                    libs__polyhedron__succeeded = libs__lp_rational__remove_some_entailed_constraints_3_p_0(libs__polyhedron__Varset_27, libs__polyhedron__STATE_VARIABLE_Hull_48_48, &libs__polyhedron__STATE_VARIABLE_Hull_49_49);
                  }
#line 395 "polyhedron.m"
                  if (libs__polyhedron__succeeded)
#line 394 "polyhedron.m"
                    {
#line 394 "polyhedron.m"
                      MR_Word base;
#line 394 "polyhedron.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 394 "polyhedron.m"
                      *libs__polyhedron__HeadVar__2_2 = base;
#line 394 "polyhedron.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__polyhedron__STATE_VARIABLE_Hull_49_49));
#line 394 "polyhedron.m"
                    }
#line 395 "polyhedron.m"
                  else
#line 396 "polyhedron.m"
                    *libs__polyhedron__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "polyhedron.m"
                }
#line 356 "polyhedron.m"
          }
#line 353 "polyhedron.m"
      }
#line 353 "polyhedron.m"
  }
#line 350 "polyhedron.m"
}

#line 179 "polyhedron.m"
void MR_CALL 
libs__polyhedron__write_polyhedron_4_p_0(
#line 179 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 179 "polyhedron.m"
  MR_Word libs__polyhedron__Varset_2)
#line 179 "polyhedron.m"
{
#line 601 "polyhedron.m"
  {
#line 601 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;

#line 601 "polyhedron.m"
    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 601 "polyhedron.m"
      {
#line 602 "polyhedron.m"
        {
#line 602 "polyhedron.m"
          mercury__io__write_string_3_p_0((MR_String) "\tEmpty\n");
#line 602 "polyhedron.m"
          return;
        }
#line 601 "polyhedron.m"
      }
#line 601 "polyhedron.m"
    else
#line 601 "polyhedron.m"
      {
#line 601 "polyhedron.m"
        MR_Word libs__polyhedron__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));

#line 601 "polyhedron.m"
        if ((libs__polyhedron__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "polyhedron.m"
          {
#line 604 "polyhedron.m"
            {
#line 604 "polyhedron.m"
              mercury__io__write_string_3_p_0((MR_String) "\tUniverse\n");
#line 604 "polyhedron.m"
              return;
            }
#line 603 "polyhedron.m"
          }
#line 601 "polyhedron.m"
        else
#line 606 "polyhedron.m"
          {
#line 606 "polyhedron.m"
            libs__lp_rational__write_constraints_4_p_0(libs__polyhedron__V_27_27, libs__polyhedron__Varset_2);
#line 606 "polyhedron.m"
            return;
          }
#line 601 "polyhedron.m"
      }
#line 601 "polyhedron.m"
  }
#line 179 "polyhedron.m"
}

#line 174 "polyhedron.m"
MR_Word MR_CALL 
libs__polyhedron__zero_vars_2_f_0(
#line 174 "polyhedron.m"
  MR_Word libs__polyhedron__Vars_1,
#line 174 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2)
#line 174 "polyhedron.m"
{
#line 592 "polyhedron.m"
  {
#line 592 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 592 "polyhedron.m"
    MR_Word libs__polyhedron__HeadVar__3_3;

#line 592 "polyhedron.m"
    if ((libs__polyhedron__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "polyhedron.m"
      libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 592 "polyhedron.m"
    else
#line 593 "polyhedron.m"
      {
#line 593 "polyhedron.m"
        MR_Word libs__polyhedron__Constraints0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
#line 593 "polyhedron.m"
        MR_Word libs__polyhedron__Constraints_7;

#line 594 "polyhedron.m"
        {
#line 594 "polyhedron.m"
          libs__polyhedron__Constraints_7 = libs__lp_rational__set_vars_to_zero_2_f_0(libs__polyhedron__Vars_1, libs__polyhedron__Constraints0_6);
        }
#line 593 "polyhedron.m"
        {
#line 593 "polyhedron.m"
          libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 593 "polyhedron.m"
          MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__3_3, 0) = ((MR_Box) (libs__polyhedron__Constraints_7));
#line 593 "polyhedron.m"
        }
#line 593 "polyhedron.m"
      }
#line 592 "polyhedron.m"
    return libs__polyhedron__HeadVar__3_3;
#line 592 "polyhedron.m"
  }
#line 174 "polyhedron.m"
}

#line 161 "polyhedron.m"
MR_Word MR_CALL 
libs__polyhedron__substitute_vars_2_f_0(
#line 161 "polyhedron.m"
  MR_Word libs__polyhedron__SubstMap_4,
#line 161 "polyhedron.m"
  MR_Word libs__polyhedron__Polyhedron0_5)
#line 161 "polyhedron.m"
{
#line 582 "polyhedron.m"
  {
#line 582 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 582 "polyhedron.m"
    MR_Word libs__polyhedron__Polyhedron_6;
#line 582 "polyhedron.m"
    MR_Word libs__polyhedron__Constraints0_7;
#line 582 "polyhedron.m"
    MR_Word libs__polyhedron__Constraints_8;

#line 228 "polyhedron.m"
    if ((libs__polyhedron__Polyhedron0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "polyhedron.m"
      {
#line 229 "polyhedron.m"
        MR_Box libs__polyhedron__conv0_Constraints0_7;

#line 229 "polyhedron.m"
        {
#line 229 "polyhedron.m"
          libs__polyhedron__conv0_Constraints0_7 = mercury__require__unexpected_3_f_0((MR_Word) &libs__polyhedron_scalar_common_1[0], (MR_String) "libs.polyhedron", (MR_String) "function \140libs.polyhedron.non_false_constraints\'/1", (MR_String) "empty polyhedron");
        }
#line 229 "polyhedron.m"
        libs__polyhedron__Constraints0_7 = ((MR_Word) libs__polyhedron__conv0_Constraints0_7);
#line 229 "polyhedron.m"
      }
#line 228 "polyhedron.m"
    else
#line 228 "polyhedron.m"
      libs__polyhedron__Constraints0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__Polyhedron0_5, (MR_Integer) 0)));
#line 584 "polyhedron.m"
    {
#line 584 "polyhedron.m"
      libs__polyhedron__Constraints_8 = libs__lp_rational__substitute_vars_2_f_0(libs__polyhedron__SubstMap_4, libs__polyhedron__Constraints0_7);
    }
#line 585 "polyhedron.m"
    {
#line 585 "polyhedron.m"
      return libs__polyhedron__Polyhedron_6 = libs__polyhedron__from_constraints_1_f_0(libs__polyhedron__Constraints_8);
    }
#line 582 "polyhedron.m"
    return libs__polyhedron__Polyhedron_6;
#line 582 "polyhedron.m"
  }
#line 161 "polyhedron.m"
}

#line 160 "polyhedron.m"
MR_Word MR_CALL 
libs__polyhedron__substitute_vars_3_f_0(
#line 160 "polyhedron.m"
  MR_Word libs__polyhedron__OldVars_5,
#line 160 "polyhedron.m"
  MR_Word libs__polyhedron__NewVars_6,
#line 160 "polyhedron.m"
  MR_Word libs__polyhedron__Polyhedron0_7)
#line 160 "polyhedron.m"
{
#line 577 "polyhedron.m"
  {
#line 577 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 577 "polyhedron.m"
    MR_Word libs__polyhedron__Polyhedron_8;
#line 577 "polyhedron.m"
    MR_Word libs__polyhedron__Constraints0_9;
#line 577 "polyhedron.m"
    MR_Word libs__polyhedron__Constraints_10;

#line 228 "polyhedron.m"
    if ((libs__polyhedron__Polyhedron0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "polyhedron.m"
      {
#line 229 "polyhedron.m"
        MR_Box libs__polyhedron__conv0_Constraints0_9;

#line 229 "polyhedron.m"
        {
#line 229 "polyhedron.m"
          libs__polyhedron__conv0_Constraints0_9 = mercury__require__unexpected_3_f_0((MR_Word) &libs__polyhedron_scalar_common_1[0], (MR_String) "libs.polyhedron", (MR_String) "function \140libs.polyhedron.non_false_constraints\'/1", (MR_String) "empty polyhedron");
        }
#line 229 "polyhedron.m"
        libs__polyhedron__Constraints0_9 = ((MR_Word) libs__polyhedron__conv0_Constraints0_9);
#line 229 "polyhedron.m"
      }
#line 228 "polyhedron.m"
    else
#line 228 "polyhedron.m"
      libs__polyhedron__Constraints0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__Polyhedron0_7, (MR_Integer) 0)));
#line 579 "polyhedron.m"
    {
#line 579 "polyhedron.m"
      libs__polyhedron__Constraints_10 = libs__lp_rational__substitute_vars_3_f_0(libs__polyhedron__OldVars_5, libs__polyhedron__NewVars_6, libs__polyhedron__Constraints0_9);
    }
#line 580 "polyhedron.m"
    {
#line 580 "polyhedron.m"
      return libs__polyhedron__Polyhedron_8 = libs__polyhedron__from_constraints_1_f_0(libs__polyhedron__Constraints_10);
    }
#line 577 "polyhedron.m"
    return libs__polyhedron__Polyhedron_8;
#line 577 "polyhedron.m"
  }
#line 160 "polyhedron.m"
}

#line 151 "polyhedron.m"
void MR_CALL 
libs__polyhedron__project_4_p_0(
#line 151 "polyhedron.m"
  MR_Word libs__polyhedron__Vars_1,
#line 151 "polyhedron.m"
  MR_Word libs__polyhedron__Varset_2,
#line 151 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3,
#line 151 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__4_4)
#line 151 "polyhedron.m"
{
#line 558 "polyhedron.m"
  {
#line 558 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;

#line 558 "polyhedron.m"
    if ((libs__polyhedron__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 558 "polyhedron.m"
      *libs__polyhedron__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 558 "polyhedron.m"
    else
#line 559 "polyhedron.m"
      {
#line 559 "polyhedron.m"
        MR_Word libs__polyhedron__Constraints0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__3_3, (MR_Integer) 0)));
#line 559 "polyhedron.m"
        MR_Word libs__polyhedron__ProjectionResult_11;

#line 560 "polyhedron.m"
        {
#line 560 "polyhedron.m"
          libs__lp_rational__project_4_p_0(libs__polyhedron__Vars_1, libs__polyhedron__Varset_2, libs__polyhedron__Constraints0_9, &libs__polyhedron__ProjectionResult_11);
        }
#line 564 "polyhedron.m"
        if ((libs__polyhedron__ProjectionResult_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 562 "polyhedron.m"
          {
#line 563 "polyhedron.m"
            {
#line 563 "polyhedron.m"
              mercury__require__unexpected_3_p_0((MR_String) "libs.polyhedron", (MR_String) "predicate \140libs.polyhedron.project\'/4", (MR_String) "abort from project");
#line 563 "polyhedron.m"
              return;
            }
#line 562 "polyhedron.m"
          }
#line 564 "polyhedron.m"
        else
#line 564 "polyhedron.m"
          if ((libs__polyhedron__ProjectionResult_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 566 "polyhedron.m"
            *libs__polyhedron__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 564 "polyhedron.m"
          else
#line 568 "polyhedron.m"
            {
#line 568 "polyhedron.m"
              MR_Word libs__polyhedron__Constraints1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__ProjectionResult_11, (MR_Integer) 0)));
#line 568 "polyhedron.m"
              MR_Word libs__polyhedron__Constraints_13;

#line 569 "polyhedron.m"
              {
#line 569 "polyhedron.m"
                libs__lp_rational__restore_equalities_2_p_0(libs__polyhedron__Constraints1_12, &libs__polyhedron__Constraints_13);
              }
#line 570 "polyhedron.m"
              {
#line 570 "polyhedron.m"
                MR_Word base;
#line 570 "polyhedron.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 570 "polyhedron.m"
                *libs__polyhedron__HeadVar__4_4 = base;
#line 570 "polyhedron.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__polyhedron__Constraints_13));
#line 570 "polyhedron.m"
              }
#line 568 "polyhedron.m"
            }
#line 559 "polyhedron.m"
      }
#line 558 "polyhedron.m"
  }
#line 151 "polyhedron.m"
}

#line 150 "polyhedron.m"
MR_Word MR_CALL 
libs__polyhedron__project_3_f_0(
#line 150 "polyhedron.m"
  MR_Word libs__polyhedron__Vars_5,
#line 150 "polyhedron.m"
  MR_Word libs__polyhedron__Varset_6,
#line 150 "polyhedron.m"
  MR_Word libs__polyhedron__Polyhedron0_7)
#line 150 "polyhedron.m"
{
#line 556 "polyhedron.m"
  {
#line 556 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 556 "polyhedron.m"
    MR_Word libs__polyhedron__Polyhedron_8;

#line 556 "polyhedron.m"
    {
#line 556 "polyhedron.m"
      libs__polyhedron__project_4_p_0(libs__polyhedron__Vars_5, libs__polyhedron__Varset_6, libs__polyhedron__Polyhedron0_7, &libs__polyhedron__Polyhedron_8);
    }
#line 556 "polyhedron.m"
    return libs__polyhedron__Polyhedron_8;
#line 556 "polyhedron.m"
  }
#line 150 "polyhedron.m"
}

#line 533 "polyhedron.m"
static MR_Box MR_CALL 
libs__polyhedron__project_all_3_f_0_1(
#line 533 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 533 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1)
#line 533 "polyhedron.m"
{
#line 533 "polyhedron.m"
  {
#line 533 "polyhedron.m"
    MR_Box libs__polyhedron__wrapper_arg_2;
#line 533 "polyhedron.m"
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;
#line 533 "polyhedron.m"
    MR_Word libs__polyhedron__conv0_HeadVar__4_16;

#line 533 "polyhedron.m"
    {
#line 533 "polyhedron.m"
      libs__polyhedron__conv0_HeadVar__4_16 = libs__polyhedron__IntroducedFrom__func__project_all__549__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__closure, (MR_Integer) 4))), ((MR_Word) libs__polyhedron__wrapper_arg_1));
    }
#line 533 "polyhedron.m"
    libs__polyhedron__wrapper_arg_2 = ((MR_Box) (libs__polyhedron__conv0_HeadVar__4_16));
#line 533 "polyhedron.m"
    return libs__polyhedron__wrapper_arg_2;
#line 533 "polyhedron.m"
  }
#line 533 "polyhedron.m"
}

#line 148 "polyhedron.m"
MR_Word MR_CALL 
libs__polyhedron__project_all_3_f_0(
#line 148 "polyhedron.m"
  MR_Word libs__polyhedron__Varset_5,
#line 148 "polyhedron.m"
  MR_Word libs__polyhedron__Locals_6,
#line 148 "polyhedron.m"
  MR_Word libs__polyhedron__Polyhedra_7)
#line 148 "polyhedron.m"
{
#line 532 "polyhedron.m"
  {
#line 532 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 532 "polyhedron.m"
    MR_Word libs__polyhedron__HeadVar__4_4;
#line 532 "polyhedron.m"
    MR_Word libs__polyhedron__TypeCtorInfo_21_21 = (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0;
#line 532 "polyhedron.m"
    MR_Word libs__polyhedron__V_14_14;

#line 533 "polyhedron.m"
    {
#line 533 "polyhedron.m"
      libs__polyhedron__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 533 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_14_14, 0) = ((MR_Box) (&libs__polyhedron_scalar_common_6[0]));
#line 533 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_14_14, 1) = ((MR_Box) (libs__polyhedron__project_all_3_f_0_1));
#line 533 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 533 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_14_14, 3) = ((MR_Box) (libs__polyhedron__Varset_5));
#line 533 "polyhedron.m"
      MR_hl_field(MR_mktag(0), libs__polyhedron__V_14_14, 4) = ((MR_Box) (libs__polyhedron__Locals_6));
#line 533 "polyhedron.m"
    }
#line 532 "polyhedron.m"
    {
#line 532 "polyhedron.m"
      libs__polyhedron__HeadVar__4_4 = mercury__list__map_2_f_0(libs__polyhedron__TypeCtorInfo_21_21, libs__polyhedron__TypeCtorInfo_21_21, libs__polyhedron__V_14_14, libs__polyhedron__Polyhedra_7);
    }
#line 532 "polyhedron.m"
    return libs__polyhedron__HeadVar__4_4;
#line 532 "polyhedron.m"
  }
#line 148 "polyhedron.m"
}

#line 525 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron__widen_3_f_0_1(
#line 525 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 525 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1)
#line 525 "polyhedron.m"
{
#line 525 "polyhedron.m"
  {
#line 525 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 525 "polyhedron.m"
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;

#line 525 "polyhedron.m"
    {
#line 525 "polyhedron.m"
      return libs__polyhedron__succeeded = libs__lp_rational__entailed_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__polyhedron__closure, (MR_Integer) 4))), ((MR_Word) libs__polyhedron__wrapper_arg_1));
    }
#line 525 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 525 "polyhedron.m"
  }
#line 525 "polyhedron.m"
}

#line 142 "polyhedron.m"
MR_Word MR_CALL 
libs__polyhedron__widen_3_f_0(
#line 142 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 142 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 142 "polyhedron.m"
  MR_Word libs__polyhedron__Varset_3)
#line 142 "polyhedron.m"
{
#line 519 "polyhedron.m"
  {
#line 519 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 519 "polyhedron.m"
    MR_Word libs__polyhedron__HeadVar__4_4;

#line 519 "polyhedron.m"
    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 519 "polyhedron.m"
      if ((libs__polyhedron__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 519 "polyhedron.m"
        libs__polyhedron__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 519 "polyhedron.m"
      else
#line 522 "polyhedron.m"
        {
#line 522 "polyhedron.m"
          MR_Box libs__polyhedron__conv0_HeadVar__4_4;

#line 522 "polyhedron.m"
          {
#line 522 "polyhedron.m"
            libs__polyhedron__conv0_HeadVar__4_4 = mercury__require__unexpected_3_f_0((MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, (MR_String) "libs.polyhedron", (MR_String) "function \140libs.polyhedron.widen\'/3", (MR_String) "empty polyhedron");
          }
#line 522 "polyhedron.m"
          libs__polyhedron__HeadVar__4_4 = ((MR_Word) libs__polyhedron__conv0_HeadVar__4_4);
#line 522 "polyhedron.m"
        }
#line 519 "polyhedron.m"
    else
#line 519 "polyhedron.m"
      {
#line 519 "polyhedron.m"
        MR_Word libs__polyhedron__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));

#line 519 "polyhedron.m"
        if ((libs__polyhedron__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 520 "polyhedron.m"
          {
#line 520 "polyhedron.m"
            MR_Box libs__polyhedron__conv1_HeadVar__4_4;

#line 520 "polyhedron.m"
            {
#line 520 "polyhedron.m"
              libs__polyhedron__conv1_HeadVar__4_4 = mercury__require__unexpected_3_f_0((MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, (MR_String) "libs.polyhedron", (MR_String) "function \140libs.polyhedron.widen\'/3", (MR_String) "empty polyhedron");
            }
#line 520 "polyhedron.m"
            libs__polyhedron__HeadVar__4_4 = ((MR_Word) libs__polyhedron__conv1_HeadVar__4_4);
#line 520 "polyhedron.m"
          }
#line 519 "polyhedron.m"
        else
#line 524 "polyhedron.m"
          {
#line 524 "polyhedron.m"
            MR_Word libs__polyhedron__Poly2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
#line 524 "polyhedron.m"
            MR_Word libs__polyhedron__WidenedEqns_19;
#line 524 "polyhedron.m"
            MR_Word libs__polyhedron__V_20_20;

#line 525 "polyhedron.m"
            {
#line 525 "polyhedron.m"
              libs__polyhedron__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 525 "polyhedron.m"
              MR_hl_field(MR_mktag(0), libs__polyhedron__V_20_20, 0) = ((MR_Box) (&libs__polyhedron_scalar_common_5[0]));
#line 525 "polyhedron.m"
              MR_hl_field(MR_mktag(0), libs__polyhedron__V_20_20, 1) = ((MR_Box) (libs__polyhedron__widen_3_f_0_1));
#line 525 "polyhedron.m"
              MR_hl_field(MR_mktag(0), libs__polyhedron__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 525 "polyhedron.m"
              MR_hl_field(MR_mktag(0), libs__polyhedron__V_20_20, 3) = ((MR_Box) (libs__polyhedron__Varset_3));
#line 525 "polyhedron.m"
              MR_hl_field(MR_mktag(0), libs__polyhedron__V_20_20, 4) = ((MR_Box) (libs__polyhedron__Poly2_17));
#line 525 "polyhedron.m"
            }
#line 525 "polyhedron.m"
            {
#line 525 "polyhedron.m"
              libs__polyhedron__WidenedEqns_19 = mercury__list__filter_2_f_0((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, libs__polyhedron__V_20_20, libs__polyhedron__V_25_25);
            }
#line 524 "polyhedron.m"
            {
#line 524 "polyhedron.m"
              libs__polyhedron__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 524 "polyhedron.m"
              MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__4_4, 0) = ((MR_Box) (libs__polyhedron__WidenedEqns_19));
#line 524 "polyhedron.m"
            }
#line 524 "polyhedron.m"
          }
#line 519 "polyhedron.m"
      }
#line 519 "polyhedron.m"
    return libs__polyhedron__HeadVar__4_4;
#line 519 "polyhedron.m"
  }
#line 142 "polyhedron.m"
}

#line 134 "polyhedron.m"
MR_Word MR_CALL 
libs__polyhedron__bounding_box_2_f_0(
#line 134 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 134 "polyhedron.m"
  MR_Word libs__polyhedron__Varset_2)
#line 134 "polyhedron.m"
{
#line 510 "polyhedron.m"
  {
#line 510 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 510 "polyhedron.m"
    MR_Word libs__polyhedron__HeadVar__3_3;

#line 510 "polyhedron.m"
    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 510 "polyhedron.m"
      libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 510 "polyhedron.m"
    else
#line 511 "polyhedron.m"
      {
#line 511 "polyhedron.m"
        MR_Word libs__polyhedron__Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
#line 511 "polyhedron.m"
        MR_Word libs__polyhedron__V_7_7;

#line 512 "polyhedron.m"
        {
#line 512 "polyhedron.m"
          libs__polyhedron__V_7_7 = libs__lp_rational__bounding_box_2_f_0(libs__polyhedron__Varset_2, libs__polyhedron__Constraints_5);
        }
#line 511 "polyhedron.m"
        {
#line 511 "polyhedron.m"
          libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 511 "polyhedron.m"
          MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__3_3, 0) = ((MR_Box) (libs__polyhedron__V_7_7));
#line 511 "polyhedron.m"
        }
#line 511 "polyhedron.m"
      }
#line 510 "polyhedron.m"
    return libs__polyhedron__HeadVar__3_3;
#line 510 "polyhedron.m"
  }
#line 134 "polyhedron.m"
}

#line 128 "polyhedron.m"
void MR_CALL 
libs__polyhedron__convex_union_5_p_0(
#line 128 "polyhedron.m"
  MR_Word libs__polyhedron__Varset_1,
#line 128 "polyhedron.m"
  MR_Word libs__polyhedron__MaybeMaxSize_2,
#line 128 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__3_3,
#line 128 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__4_4,
#line 128 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__5_5)
#line 128 "polyhedron.m"
{
#line 281 "polyhedron.m"
  {
#line 281 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;

#line 281 "polyhedron.m"
    if ((libs__polyhedron__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 281 "polyhedron.m"
      if ((libs__polyhedron__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 281 "polyhedron.m"
        *libs__polyhedron__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 281 "polyhedron.m"
      else
#line 284 "polyhedron.m"
        *libs__polyhedron__HeadVar__5_5 = libs__polyhedron__HeadVar__4_4;
#line 281 "polyhedron.m"
    else
#line 281 "polyhedron.m"
      {
#line 281 "polyhedron.m"
        MR_Word libs__polyhedron__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__3_3, (MR_Integer) 0)));

#line 281 "polyhedron.m"
        if ((libs__polyhedron__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "polyhedron.m"
          *libs__polyhedron__HeadVar__5_5 = libs__polyhedron__HeadVar__3_3;
#line 281 "polyhedron.m"
        else
#line 287 "polyhedron.m"
          {
#line 287 "polyhedron.m"
            MR_Word libs__polyhedron__ConstraintsB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__4_4, (MR_Integer) 0)));
#line 287 "polyhedron.m"
            MR_Word libs__polyhedron__V_19_19;
#line 287 "polyhedron.m"
            MR_Word libs__polyhedron__V_20_20;

#line 288 "polyhedron.m"
            {
#line 288 "polyhedron.m"
              libs__polyhedron__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "polyhedron.m"
              MR_hl_field(MR_mktag(1), libs__polyhedron__V_20_20, 0) = ((MR_Box) (libs__polyhedron__ConstraintsB_17));
#line 288 "polyhedron.m"
              MR_hl_field(MR_mktag(1), libs__polyhedron__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 288 "polyhedron.m"
            }
#line 288 "polyhedron.m"
            {
#line 288 "polyhedron.m"
              libs__polyhedron__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "polyhedron.m"
              MR_hl_field(MR_mktag(1), libs__polyhedron__V_19_19, 0) = ((MR_Box) (libs__polyhedron__V_22_22));
#line 288 "polyhedron.m"
              MR_hl_field(MR_mktag(1), libs__polyhedron__V_19_19, 1) = ((MR_Box) (libs__polyhedron__V_20_20));
#line 288 "polyhedron.m"
            }
#line 288 "polyhedron.m"
            {
#line 288 "polyhedron.m"
              libs__polyhedron__convex_hull_4_p_0(libs__polyhedron__V_19_19, libs__polyhedron__HeadVar__5_5, libs__polyhedron__MaybeMaxSize_2, libs__polyhedron__Varset_1);
#line 288 "polyhedron.m"
              return;
            }
#line 287 "polyhedron.m"
          }
#line 281 "polyhedron.m"
      }
#line 281 "polyhedron.m"
  }
#line 128 "polyhedron.m"
}

#line 126 "polyhedron.m"
MR_Word MR_CALL 
libs__polyhedron__convex_union_4_f_0(
#line 126 "polyhedron.m"
  MR_Word libs__polyhedron__Varset_6,
#line 126 "polyhedron.m"
  MR_Word libs__polyhedron__MaxMatrixSize_7,
#line 126 "polyhedron.m"
  MR_Word libs__polyhedron__PolyhedronA_8,
#line 126 "polyhedron.m"
  MR_Word libs__polyhedron__PolyhedronB_9)
#line 126 "polyhedron.m"
{
#line 278 "polyhedron.m"
  {
#line 278 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 278 "polyhedron.m"
    MR_Word libs__polyhedron__Polyhedron_10;

#line 278 "polyhedron.m"
    {
#line 278 "polyhedron.m"
      libs__polyhedron__convex_union_5_p_0(libs__polyhedron__Varset_6, libs__polyhedron__MaxMatrixSize_7, libs__polyhedron__PolyhedronA_8, libs__polyhedron__PolyhedronB_9, &libs__polyhedron__Polyhedron_10);
    }
#line 278 "polyhedron.m"
    return libs__polyhedron__Polyhedron_10;
#line 278 "polyhedron.m"
  }
#line 126 "polyhedron.m"
}

#line 119 "polyhedron.m"
void MR_CALL 
libs__polyhedron__convex_union_4_p_0(
#line 119 "polyhedron.m"
  MR_Word libs__polyhedron__Varset_5,
#line 119 "polyhedron.m"
  MR_Word libs__polyhedron__PolyhedronA_6,
#line 119 "polyhedron.m"
  MR_Word libs__polyhedron__PolyhedronB_7,
#line 119 "polyhedron.m"
  MR_Word * libs__polyhedron__Polyhedron_8)
#line 119 "polyhedron.m"
{
#line 273 "polyhedron.m"
  {
#line 273 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;

#line 274 "polyhedron.m"
    {
#line 274 "polyhedron.m"
      libs__polyhedron__convex_union_5_p_0(libs__polyhedron__Varset_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__polyhedron__PolyhedronA_6, libs__polyhedron__PolyhedronB_7, libs__polyhedron__Polyhedron_8);
#line 274 "polyhedron.m"
      return;
    }
#line 273 "polyhedron.m"
  }
#line 119 "polyhedron.m"
}

#line 117 "polyhedron.m"
MR_Word MR_CALL 
libs__polyhedron__convex_union_3_f_0(
#line 117 "polyhedron.m"
  MR_Word libs__polyhedron__Varset_5,
#line 117 "polyhedron.m"
  MR_Word libs__polyhedron__PolyhedronA_6,
#line 117 "polyhedron.m"
  MR_Word libs__polyhedron__PolyhedronB_7)
#line 117 "polyhedron.m"
{
#line 270 "polyhedron.m"
  {
#line 270 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 270 "polyhedron.m"
    MR_Word libs__polyhedron__Polyhedron_8;

#line 271 "polyhedron.m"
    {
#line 271 "polyhedron.m"
      libs__polyhedron__convex_union_5_p_0(libs__polyhedron__Varset_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__polyhedron__PolyhedronA_6, libs__polyhedron__PolyhedronB_7, &libs__polyhedron__Polyhedron_8);
    }
#line 270 "polyhedron.m"
    return libs__polyhedron__Polyhedron_8;
#line 270 "polyhedron.m"
  }
#line 117 "polyhedron.m"
}

#line 111 "polyhedron.m"
void MR_CALL 
libs__polyhedron__intersection_3_p_0(
#line 111 "polyhedron.m"
  MR_Word libs__polyhedron__PolyA_4,
#line 111 "polyhedron.m"
  MR_Word libs__polyhedron__PolyB_5,
#line 111 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__3_3)
#line 111 "polyhedron.m"
{
#line 251 "polyhedron.m"
  {
#line 251 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;

#line 251 "polyhedron.m"
    {
#line 251 "polyhedron.m"
      *libs__polyhedron__HeadVar__3_3 = libs__polyhedron__intersection_2_f_0(libs__polyhedron__PolyA_4, libs__polyhedron__PolyB_5);
    }
#line 251 "polyhedron.m"
  }
#line 111 "polyhedron.m"
}

#line 110 "polyhedron.m"
MR_Word MR_CALL 
libs__polyhedron__intersection_2_f_0(
#line 110 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1,
#line 110 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2)
#line 110 "polyhedron.m"
{
#line 253 "polyhedron.m"
  {
#line 253 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 253 "polyhedron.m"
    MR_Word libs__polyhedron__HeadVar__3_3;

#line 253 "polyhedron.m"
    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 253 "polyhedron.m"
      libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 253 "polyhedron.m"
    else
#line 253 "polyhedron.m"
      {
#line 253 "polyhedron.m"
        MR_Word libs__polyhedron__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));

#line 253 "polyhedron.m"
        if ((libs__polyhedron__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "polyhedron.m"
          libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 253 "polyhedron.m"
        else
#line 255 "polyhedron.m"
          {
#line 255 "polyhedron.m"
            MR_Word libs__polyhedron__MatrixB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
#line 255 "polyhedron.m"
            MR_Word libs__polyhedron__Constraints_8;
#line 255 "polyhedron.m"
            MR_Word libs__polyhedron__Constraints0_9;
#line 255 "polyhedron.m"
            MR_Word libs__polyhedron__Constraints1_10;

#line 256 "polyhedron.m"
            {
#line 256 "polyhedron.m"
              libs__polyhedron__Constraints0_9 = mercury__list__f_43_43_2_f_0((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, libs__polyhedron__V_12_12, libs__polyhedron__MatrixB_7);
            }
#line 257 "polyhedron.m"
            {
#line 257 "polyhedron.m"
              libs__lp_rational__restore_equalities_2_p_0(libs__polyhedron__Constraints0_9, &libs__polyhedron__Constraints1_10);
            }
#line 258 "polyhedron.m"
            {
#line 258 "polyhedron.m"
              libs__polyhedron__Constraints_8 = libs__lp_rational__simplify_constraints_1_f_0(libs__polyhedron__Constraints1_10);
            }
#line 255 "polyhedron.m"
            {
#line 255 "polyhedron.m"
              libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 255 "polyhedron.m"
              MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__3_3, 0) = ((MR_Box) (libs__polyhedron__Constraints_8));
#line 255 "polyhedron.m"
            }
#line 255 "polyhedron.m"
          }
#line 253 "polyhedron.m"
      }
#line 253 "polyhedron.m"
    return libs__polyhedron__HeadVar__3_3;
#line 253 "polyhedron.m"
  }
#line 110 "polyhedron.m"
}

#line 103 "polyhedron.m"
void MR_CALL 
libs__polyhedron__optimize_3_p_0(
#line 103 "polyhedron.m"
  MR_Word libs__polyhedron__Varset_1,
#line 103 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__2_2,
#line 103 "polyhedron.m"
  MR_Word * libs__polyhedron__HeadVar__3_3)
#line 103 "polyhedron.m"
{
#line 237 "polyhedron.m"
  {
#line 237 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;

#line 237 "polyhedron.m"
    if ((libs__polyhedron__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "polyhedron.m"
      *libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 237 "polyhedron.m"
    else
#line 238 "polyhedron.m"
      {
#line 238 "polyhedron.m"
        MR_Word libs__polyhedron__Constraints0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "polyhedron.m"
        MR_Word libs__polyhedron__Constraints_8;

#line 239 "polyhedron.m"
        {
#line 239 "polyhedron.m"
          libs__polyhedron__Constraints_8 = libs__lp_rational__simplify_constraints_1_f_0(libs__polyhedron__Constraints0_6);
        }
#line 240 "polyhedron.m"
        {
#line 240 "polyhedron.m"
          libs__polyhedron__succeeded = libs__lp_rational__inconsistent_2_p_0(libs__polyhedron__Varset_1, libs__polyhedron__Constraints_8);
        }
#line 242 "polyhedron.m"
        if (libs__polyhedron__succeeded)
#line 241 "polyhedron.m"
          *libs__polyhedron__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 242 "polyhedron.m"
        else
#line 243 "polyhedron.m"
          {
#line 243 "polyhedron.m"
            MR_Word base;
#line 243 "polyhedron.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 243 "polyhedron.m"
            *libs__polyhedron__HeadVar__3_3 = base;
#line 243 "polyhedron.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__polyhedron__Constraints_8));
#line 243 "polyhedron.m"
          }
#line 238 "polyhedron.m"
      }
#line 237 "polyhedron.m"
  }
#line 103 "polyhedron.m"
}

#line 235 "polyhedron.m"
static MR_bool MR_CALL 
libs__polyhedron__is_universe_1_p_0_1(
#line 235 "polyhedron.m"
  MR_Box libs__polyhedron__closure_arg,
#line 235 "polyhedron.m"
  MR_Box libs__polyhedron__wrapper_arg_1)
#line 235 "polyhedron.m"
{
#line 235 "polyhedron.m"
  {
#line 235 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 235 "polyhedron.m"
    MR_Box libs__polyhedron__closure = libs__polyhedron__closure_arg;

#line 235 "polyhedron.m"
    {
#line 235 "polyhedron.m"
      return libs__polyhedron__succeeded = libs__lp_rational__nonneg_constr_1_p_0(((MR_Word) libs__polyhedron__wrapper_arg_1));
    }
#line 235 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 235 "polyhedron.m"
  }
#line 235 "polyhedron.m"
}

#line 97 "polyhedron.m"
MR_bool MR_CALL 
libs__polyhedron__is_universe_1_p_0(
#line 97 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1)
#line 97 "polyhedron.m"
{
#line 234 "polyhedron.m"
  {
#line 234 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded = ((MR_tag((MR_Word) libs__polyhedron__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 234 "polyhedron.m"
    MR_Word libs__polyhedron__TypeCtorInfo_5_5;
#line 234 "polyhedron.m"
    MR_Word libs__polyhedron__Constraints_2;
#line 234 "polyhedron.m"
    MR_Word libs__polyhedron__V_3_3;

#line 234 "polyhedron.m"
    if (libs__polyhedron__succeeded)
#line 234 "polyhedron.m"
      {
#line 234 "polyhedron.m"
        libs__polyhedron__Constraints_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
#line 235 "polyhedron.m"
        libs__polyhedron__V_3_3 = (MR_Word) &libs__polyhedron_scalar_common_2[2];
#line 5442 "libs.polyhedron.c"
        libs__polyhedron__TypeCtorInfo_5_5 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
#line 235 "polyhedron.m"
        {
#line 235 "polyhedron.m"
          return libs__polyhedron__succeeded = mercury__list__all_true_2_p_0(libs__polyhedron__TypeCtorInfo_5_5, libs__polyhedron__V_3_3, libs__polyhedron__Constraints_2);
        }
#line 234 "polyhedron.m"
      }
#line 234 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 234 "polyhedron.m"
  }
#line 97 "polyhedron.m"
}

#line 91 "polyhedron.m"
MR_bool MR_CALL 
libs__polyhedron__is_empty_1_p_0(
#line 91 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1)
#line 91 "polyhedron.m"
{
#line 232 "polyhedron.m"
  {
#line 232 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded = (libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 232 "polyhedron.m"
    return libs__polyhedron__succeeded;
#line 232 "polyhedron.m"
  }
#line 91 "polyhedron.m"
}

#line 82 "polyhedron.m"
MR_Word MR_CALL 
libs__polyhedron__non_false_constraints_1_f_0(
#line 82 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1)
#line 82 "polyhedron.m"
{
#line 228 "polyhedron.m"
  {
#line 228 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 228 "polyhedron.m"
    MR_Word libs__polyhedron__HeadVar__2_2;

#line 228 "polyhedron.m"
    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "polyhedron.m"
      {
#line 229 "polyhedron.m"
        MR_Box libs__polyhedron__conv0_HeadVar__2_2;

#line 229 "polyhedron.m"
        {
#line 229 "polyhedron.m"
          libs__polyhedron__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &libs__polyhedron_scalar_common_1[0], (MR_String) "libs.polyhedron", (MR_String) "function \140libs.polyhedron.non_false_constraints\'/1", (MR_String) "empty polyhedron");
        }
#line 229 "polyhedron.m"
        libs__polyhedron__HeadVar__2_2 = ((MR_Word) libs__polyhedron__conv0_HeadVar__2_2);
#line 229 "polyhedron.m"
      }
#line 228 "polyhedron.m"
    else
#line 228 "polyhedron.m"
      libs__polyhedron__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
#line 228 "polyhedron.m"
    return libs__polyhedron__HeadVar__2_2;
#line 228 "polyhedron.m"
  }
#line 82 "polyhedron.m"
}

#line 78 "polyhedron.m"
MR_Word MR_CALL 
libs__polyhedron__constraints_1_f_0(
#line 78 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1)
#line 78 "polyhedron.m"
{
#line 225 "polyhedron.m"
  {
#line 225 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 225 "polyhedron.m"
    MR_Word libs__polyhedron__HeadVar__2_2;

#line 225 "polyhedron.m"
    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 226 "polyhedron.m"
      {
#line 226 "polyhedron.m"
        MR_Word libs__polyhedron__V_4_4;

#line 226 "polyhedron.m"
        {
#line 226 "polyhedron.m"
          libs__polyhedron__V_4_4 = libs__lp_rational__false_constraint_0_f_0();
        }
#line 226 "polyhedron.m"
        {
#line 226 "polyhedron.m"
          libs__polyhedron__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "polyhedron.m"
          MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, 0) = ((MR_Box) (libs__polyhedron__V_4_4));
#line 226 "polyhedron.m"
          MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "polyhedron.m"
        }
#line 226 "polyhedron.m"
      }
#line 225 "polyhedron.m"
    else
#line 225 "polyhedron.m"
      libs__polyhedron__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
#line 225 "polyhedron.m"
    return libs__polyhedron__HeadVar__2_2;
#line 225 "polyhedron.m"
  }
#line 78 "polyhedron.m"
}

#line 73 "polyhedron.m"
MR_Word MR_CALL 
libs__polyhedron__from_constraints_1_f_0(
#line 73 "polyhedron.m"
  MR_Word libs__polyhedron__HeadVar__1_1)
#line 73 "polyhedron.m"
{
#line 216 "polyhedron.m"
  {
#line 216 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;
#line 216 "polyhedron.m"
    MR_Word libs__polyhedron__HeadVar__2_2;

#line 216 "polyhedron.m"
    if ((libs__polyhedron__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 216 "polyhedron.m"
      {
#line 216 "polyhedron.m"
        libs__polyhedron__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &libs__polyhedron_scalar_common_3[0]);
#line 216 "polyhedron.m"
      }
#line 216 "polyhedron.m"
    else
#line 217 "polyhedron.m"
      {
#line 217 "polyhedron.m"
        MR_Word libs__polyhedron__C_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 0)));
#line 217 "polyhedron.m"
        MR_Word libs__polyhedron__Cs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__1_1, (MR_Integer) 1)));

#line 218 "polyhedron.m"
        {
#line 218 "polyhedron.m"
          libs__polyhedron__succeeded = libs__lp_rational__is_false_1_p_0(libs__polyhedron__C_4);
        }
#line 220 "polyhedron.m"
        if (libs__polyhedron__succeeded)
#line 207 "polyhedron.m"
          libs__polyhedron__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 220 "polyhedron.m"
        else
#line 221 "polyhedron.m"
          {
#line 221 "polyhedron.m"
            MR_Word libs__polyhedron__Polyhedron0_7;
#line 221 "polyhedron.m"
            MR_Word libs__polyhedron__V_9_9;

#line 221 "polyhedron.m"
            {
#line 221 "polyhedron.m"
              libs__polyhedron__Polyhedron0_7 = libs__polyhedron__from_constraints_1_f_0(libs__polyhedron__Cs_5);
            }
#line 222 "polyhedron.m"
            {
#line 222 "polyhedron.m"
              libs__polyhedron__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "polyhedron.m"
              MR_hl_field(MR_mktag(1), libs__polyhedron__V_9_9, 0) = ((MR_Box) (libs__polyhedron__C_4));
#line 222 "polyhedron.m"
              MR_hl_field(MR_mktag(1), libs__polyhedron__V_9_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 222 "polyhedron.m"
            }
#line 253 "polyhedron.m"
            if ((libs__polyhedron__Polyhedron0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "polyhedron.m"
              libs__polyhedron__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 253 "polyhedron.m"
            else
#line 255 "polyhedron.m"
              {
#line 255 "polyhedron.m"
                MR_Word libs__polyhedron__MatrixB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__polyhedron__Polyhedron0_7, (MR_Integer) 0)));
#line 255 "polyhedron.m"
                MR_Word libs__polyhedron__Constraints_15;
#line 255 "polyhedron.m"
                MR_Word libs__polyhedron__Constraints0_16;
#line 255 "polyhedron.m"
                MR_Word libs__polyhedron__Constraints1_17;

#line 256 "polyhedron.m"
                {
#line 256 "polyhedron.m"
                  libs__polyhedron__Constraints0_16 = mercury__list__f_43_43_2_f_0((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, libs__polyhedron__V_9_9, libs__polyhedron__MatrixB_14);
                }
#line 257 "polyhedron.m"
                {
#line 257 "polyhedron.m"
                  libs__lp_rational__restore_equalities_2_p_0(libs__polyhedron__Constraints0_16, &libs__polyhedron__Constraints1_17);
                }
#line 258 "polyhedron.m"
                {
#line 258 "polyhedron.m"
                  libs__polyhedron__Constraints_15 = libs__lp_rational__simplify_constraints_1_f_0(libs__polyhedron__Constraints1_17);
                }
#line 255 "polyhedron.m"
                {
#line 255 "polyhedron.m"
                  libs__polyhedron__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 255 "polyhedron.m"
                  MR_hl_field(MR_mktag(1), libs__polyhedron__HeadVar__2_2, 0) = ((MR_Box) (libs__polyhedron__Constraints_15));
#line 255 "polyhedron.m"
                }
#line 255 "polyhedron.m"
              }
#line 221 "polyhedron.m"
          }
#line 217 "polyhedron.m"
      }
#line 216 "polyhedron.m"
    return libs__polyhedron__HeadVar__2_2;
#line 216 "polyhedron.m"
  }
#line 73 "polyhedron.m"
}

#line 69 "polyhedron.m"
MR_Word MR_CALL 
libs__polyhedron__universe_0_f_0(void)
#line 69 "polyhedron.m"
{
#line 209 "polyhedron.m"
  {
#line 209 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;

#line 209 "polyhedron.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &libs__polyhedron_scalar_common_3[0]);
#line 209 "polyhedron.m"
  }
#line 69 "polyhedron.m"
}

#line 65 "polyhedron.m"
MR_Word MR_CALL 
libs__polyhedron__empty_0_f_0(void)
#line 65 "polyhedron.m"
{
#line 207 "polyhedron.m"
  {
#line 207 "polyhedron.m"
    MR_bool libs__polyhedron__succeeded;

#line 207 "polyhedron.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 207 "polyhedron.m"
  }
#line 65 "polyhedron.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.polyhedron. */
