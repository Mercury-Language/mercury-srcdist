/*
** Automatically generated from `var_use_analysis.m'
** by the Mercury compiler,
** version 2015-10-27
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


/* :- module var_use_analysis. */
/* :- implementation. */

/*
INIT mercury__var_use_analysis__init
ENDINIT
*/

#include "var_use_analysis.mih"


#include "analysis_utils.mih"
#include "coverage.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "recursion_patterns.mih"
#include "report.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "float.mih"
#include "int.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 92 "var_use_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0;

#line 95 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct1 var_use_analysis__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

#line 98 "var_use_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

#line 101 "var_use_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0;

#line 104 "var_use_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 var_use_analysis__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

#line 107 "var_use_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_measurements__type_ctor_info_cs_cost_csq_0;

#line 110 "var_use_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0__plain_builtin__type_ctor_info_float_0;

#line 113 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct1 var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1builtin__type_ctor_info_float_0;

#line 116 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_first_use_rec_info_0_0[2];

#line 119 "var_use_analysis.c"
static const MR_ConstString var_use_analysis__var_use_analysis__field_names_first_use_rec_info_0_0[2];

#line 122 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_0;

#line 125 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_1;

#line 128 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_0[1];

#line 131 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_1[1];

#line 134 "var_use_analysis.c"
static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_first_use_rec_info_0[2];

#line 137 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_first_use_rec_info_0[2];

#line 140 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_first_use_rec_info_0[2];

#line 143 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_0;

#line 146 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_found_first_use_0_1[1];

#line 149 "var_use_analysis.c"
static const MR_ConstString var_use_analysis__var_use_analysis__field_names_found_first_use_0_1[1];

#line 152 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_1;

#line 155 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_0[1];

#line 158 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_1[1];

#line 161 "var_use_analysis.c"
static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_found_first_use_0[2];

#line 164 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_found_first_use_0[2];

#line 167 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_found_first_use_0[2];

#line 170 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_intermodule_var_use_0_0[1];

#line 173 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_0;

#line 176 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_1;

#line 179 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_0[1];

#line 182 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_1[1];

#line 185 "var_use_analysis.c"
static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_intermodule_var_use_0[2];

#line 188 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_intermodule_var_use_0[2];

#line 191 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_intermodule_var_use_0[2];

#line 194 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_0[1];

#line 197 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_0;

#line 200 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct1 var_use_analysis__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 203 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct2 var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 206 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct1 var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0;

#line 209 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct2 var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

#line 212 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct2 var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0;

#line 215 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_1[7];

#line 218 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_1;

#line 221 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_0[1];

#line 224 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_1[1];

#line 227 "var_use_analysis.c"
static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_proc_var_first_use_prepared_info_0[2];

#line 230 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_proc_var_first_use_prepared_info_0[2];

#line 233 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_proc_var_first_use_prepared_info_0[2];

#line 236 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct2 var_use_analysis__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0;

#line 239 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct1 var_use_analysis__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0;

#line 242 "var_use_analysis.c"
static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_0;

#line 245 "var_use_analysis.c"
static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_1;

#line 248 "var_use_analysis.c"
static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_value_ordered_recursive_case_0[2];

#line 251 "var_use_analysis.c"
static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_name_ordered_recursive_case_0[2];

#line 254 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_recursive_case_0[2];

#line 257 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct1 var_use_analysis__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 260 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_first_use_static_info_0_0[11];

#line 263 "var_use_analysis.c"
static const MR_ConstString var_use_analysis__var_use_analysis__field_names_var_first_use_static_info_0_0[11];

#line 266 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_first_use_static_info_0_0;

#line 269 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_first_use_static_info_0_0[1];

#line 272 "var_use_analysis.c"
static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_first_use_static_info_0[1];

#line 275 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_first_use_static_info_0[1];

#line 278 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_first_use_static_info_0[1];

#line 281 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_use_info_0_0[3];

#line 284 "var_use_analysis.c"
static const MR_ConstString var_use_analysis__var_use_analysis__field_names_var_use_info_0_0[3];

#line 287 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_use_info_0_0;

#line 290 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_use_info_0_0[1];

#line 293 "var_use_analysis.c"
static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_info_0[1];

#line 296 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_use_info_0[1];

#line 299 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_info_0[1];

#line 302 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_use_options_0_0[3];

#line 305 "var_use_analysis.c"
static const MR_ConstString var_use_analysis__var_use_analysis__field_names_var_use_options_0_0[3];

#line 308 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_use_options_0_0;

#line 311 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_use_options_0_0[1];

#line 314 "var_use_analysis.c"
static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_options_0[1];

#line 317 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_use_options_0[1];

#line 320 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_options_0[1];

#line 323 "var_use_analysis.c"
static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_0;

#line 326 "var_use_analysis.c"
static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_1;

#line 329 "var_use_analysis.c"
static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_2;

#line 332 "var_use_analysis.c"
static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_value_ordered_var_use_type_0[3];

#line 335 "var_use_analysis.c"
static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_name_ordered_var_use_type_0[3];

#line 338 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_type_0[3];

#line 341 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____first_use_rec_info_0_0_10001(
#line 344 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 346 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2);

#line 349 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____first_use_rec_info_0_0_10001(
#line 352 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 354 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 356 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3);

#line 359 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____found_first_use_0_0_10001(
#line 362 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 364 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2);

#line 367 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____found_first_use_0_0_10001(
#line 370 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 372 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 374 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3);

#line 377 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____intermodule_var_use_0_0_10001(
#line 380 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 382 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2);

#line 385 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____intermodule_var_use_0_0_10001(
#line 388 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 390 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 392 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3);

#line 395 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0_10001(
#line 398 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 400 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2);

#line 403 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0_10001(
#line 406 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 408 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 410 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3);

#line 413 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_calls_list_0_0_10001(
#line 416 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 418 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2);

#line 421 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____recursive_calls_list_0_0_10001(
#line 424 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 426 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 428 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3);

#line 431 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_case_0_0_10001(
#line 434 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 436 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2);

#line 439 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____recursive_case_0_0_10001(
#line 442 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 444 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 446 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3);

#line 449 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____var_first_use_static_info_0_0_10001(
#line 452 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 454 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2);

#line 457 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____var_first_use_static_info_0_0_10001(
#line 460 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 462 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 464 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3);

#line 467 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_info_0_0_10001(
#line 470 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 472 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2);

#line 475 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____var_use_info_0_0_10001(
#line 478 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 480 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 482 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3);

#line 485 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_options_0_0_10001(
#line 488 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 490 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2);

#line 493 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____var_use_options_0_0_10001(
#line 496 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 498 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 500 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3);

#line 503 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_type_0_0_10001(
#line 506 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 508 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2);

#line 511 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____var_use_type_0_0_10001(
#line 514 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 516 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 518 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3);

#line 411 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(
#line 411 "var_use_analysis.m"
  MR_Word var_use_analysis__CliquePtr_10,
#line 411 "var_use_analysis.m"
  MR_Word var_use_analysis__PDPtr_11,
#line 411 "var_use_analysis.m"
  MR_Integer var_use_analysis__ArgNum_12,
#line 411 "var_use_analysis.m"
  MR_Word var_use_analysis__RecursionType_13,
#line 411 "var_use_analysis.m"
  MR_Word var_use_analysis__Depth_14,
#line 411 "var_use_analysis.m"
  MR_Word var_use_analysis__CallStack_16,
#line 411 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_17,
#line 411 "var_use_analysis.m"
  MR_Word * var_use_analysis__MaybeVarUseInfo_18);

#line 1482 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__rec_switch_var_first_use__1482__1_2_p_0(
#line 1482 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_30,
#line 1482 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_70);

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(
#line 1257 "var_use_analysis.m"
  MR_Word var_use_analysis__GoalPathStep_4,
#line 1257 "var_use_analysis.m"
  MR_Word var_use_analysis__LambdaHeadVar__1_13,
#line 1257 "var_use_analysis.m"
  MR_Word * var_use_analysis__LambdaHeadVar__2_14);

#line 1247 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1247__1_2_p_0(
#line 1247 "var_use_analysis.m"
  MR_Word var_use_analysis__LambdaHeadVar__1_11,
#line 1247 "var_use_analysis.m"
  MR_Word * var_use_analysis__LambdaHeadVar__2_12);

#line 1119 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__switch_var_first_use__1119__1_2_p_0(
#line 1119 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_25,
#line 1119 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_50);

#line 169 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__average_var_use__169__1_2_p_0(
#line 169 "var_use_analysis.m"
  MR_Word var_use_analysis__Type_6,
#line 169 "var_use_analysis.m"
  MR_Word var_use_analysis__LambdaHeadVar__1_22);

#line 611 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis____Compare____var_first_use_static_info_0_0(
#line 611 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 611 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 611 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3);

#line 611 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis____Unify____var_first_use_static_info_0_0(
#line 611 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 611 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2);

#line 661 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis____Compare____recursive_case_0_0(
#line 661 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 661 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 661 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3);

#line 661 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_case_0_0(
#line 661 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_1,
#line 661 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2);

#line 1238 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis____Compare____recursive_calls_list_0_0(
#line 1238 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 1238 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 1238 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3);

#line 1238 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_calls_list_0_0(
#line 1238 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 1238 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2);

#line 497 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0(
#line 497 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 497 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 497 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3);

#line 497 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0(
#line 497 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 497 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2);

#line 602 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis____Compare____found_first_use_0_0(
#line 602 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 602 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 602 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3);

#line 602 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis____Unify____found_first_use_0_0(
#line 602 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 602 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2);

#line 648 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis____Compare____first_use_rec_info_0_0(
#line 648 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 648 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 648 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3);

#line 648 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis____Unify____first_use_rec_info_0_0(
#line 648 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 648 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2);

#line 1849 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__intermodule_var_use_should_follow_csd_2_p_0(
#line 1849 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_3,
#line 1849 "var_use_analysis.m"
  MR_Word var_use_analysis__CSDPtr_4);

#line 1789 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__goal_var_first_use_wrapper_13_p_0(
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__CliquePtr_14,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__CallStack_15,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__ContainingGoalMap_16,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__CoverageArray_17,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__CallSiteMap_18,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__RecursiveCallSiteMap_19,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__RT_20,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__CurDepth_21,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__Goal_22,
#line 1789 "var_use_analysis.m"
  MR_Float var_use_analysis__ProcCost_23,
#line 1789 "var_use_analysis.m"
  MR_Integer var_use_analysis__Var_24,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_25,
#line 1789 "var_use_analysis.m"
  MR_Word * var_use_analysis__VarUseInfo_26);

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__ite_rec_prob_8_p_0_2(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__ite_rec_prob_8_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 1764 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__ite_rec_prob_8_p_0(
#line 1764 "var_use_analysis.m"
  MR_Word var_use_analysis__Cond_9,
#line 1764 "var_use_analysis.m"
  MR_Word var_use_analysis__Then_10,
#line 1764 "var_use_analysis.m"
  MR_Word var_use_analysis__Else_11,
#line 1764 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_12,
#line 1764 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_13,
#line 1764 "var_use_analysis.m"
  MR_Float * var_use_analysis__Prob_14,
#line 1764 "var_use_analysis.m"
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_31,
#line 1764 "var_use_analysis.m"
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_32);

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__switch_rec_prob_2_9_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 1739 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__switch_rec_prob_2_9_p_0(
#line 1739 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 1739 "var_use_analysis.m"
  MR_Integer var_use_analysis__CaseNum_2,
#line 1739 "var_use_analysis.m"
  MR_Integer var_use_analysis__TotalCalls_3,
#line 1739 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_4,
#line 1739 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_5,
#line 1739 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__6_6,
#line 1739 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__7_7,
#line 1739 "var_use_analysis.m"
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_8,
#line 1739 "var_use_analysis.m"
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_9);

#line 1736 "var_use_analysis.m"
static MR_Box MR_CALL 
var_use_analysis__switch_rec_prob_7_p_0_1(
#line 1736 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1736 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1);

#line 1728 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__switch_rec_prob_7_p_0(
#line 1728 "var_use_analysis.m"
  MR_Word var_use_analysis__Cases_8,
#line 1728 "var_use_analysis.m"
  MR_Integer var_use_analysis__TotalCalls_9,
#line 1728 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_10,
#line 1728 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_11,
#line 1728 "var_use_analysis.m"
  MR_Float * var_use_analysis__Prob_12,
#line 1728 "var_use_analysis.m"
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_17,
#line 1728 "var_use_analysis.m"
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_18);

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__disj_rec_prob_7_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 1702 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__disj_rec_prob_7_p_0(
#line 1702 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 1702 "var_use_analysis.m"
  MR_Integer var_use_analysis__DisjNum_2,
#line 1702 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_3,
#line 1702 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_4,
#line 1702 "var_use_analysis.m"
  MR_Float * var_use_analysis__HeadVar__5_5,
#line 1702 "var_use_analysis.m"
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_6,
#line 1702 "var_use_analysis.m"
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_7);

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__conj_rec_prob_7_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 1676 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__conj_rec_prob_7_p_0(
#line 1676 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 1676 "var_use_analysis.m"
  MR_Integer var_use_analysis__ConjNum_2,
#line 1676 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_3,
#line 1676 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_4,
#line 1676 "var_use_analysis.m"
  MR_Float * var_use_analysis__HeadVar__5_5,
#line 1676 "var_use_analysis.m"
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_6,
#line 1676 "var_use_analysis.m"
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_7);

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0_2(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 1626 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0(
#line 1626 "var_use_analysis.m"
  MR_Word var_use_analysis__Goal_7,
#line 1626 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_8,
#line 1626 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_9,
#line 1626 "var_use_analysis.m"
  MR_Float * var_use_analysis__Prob_10,
#line 1626 "var_use_analysis.m"
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_35,
#line 1626 "var_use_analysis.m"
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_36);

#line 1606 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__adjust_weight_for_recursion_4_p_0(
#line 1606 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCase_5,
#line 1606 "var_use_analysis.m"
  MR_Float var_use_analysis__RecProb_6,
#line 1606 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_Weight_0_9,
#line 1606 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_Weight_10);

#line 1599 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_3(
#line 1599 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1599 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1599 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 1570 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_2(
#line 1570 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1570 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1570 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 1570 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_3);

#line 1568 "var_use_analysis.m"
static MR_Box MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_1(
#line 1568 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1568 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1);

#line 1539 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0(
#line 1539 "var_use_analysis.m"
  MR_Word var_use_analysis__Cond_9,
#line 1539 "var_use_analysis.m"
  MR_Word var_use_analysis__Then_10,
#line 1539 "var_use_analysis.m"
  MR_Word var_use_analysis__Else_11,
#line 1539 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_12,
#line 1539 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_13,
#line 1539 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_14,
#line 1539 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_46,
#line 1539 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_47);

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__rec_switch_var_first_use_2_9_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 1509 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_2_9_p_0(
#line 1509 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 1509 "var_use_analysis.m"
  MR_Integer var_use_analysis__CaseNum_2,
#line 1509 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_3,
#line 1509 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_4,
#line 1509 "var_use_analysis.m"
  MR_Float var_use_analysis__CostBeforeSwitch_5,
#line 1509 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__6_6,
#line 1509 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__7_7,
#line 1509 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__8_8,
#line 1509 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__9_9);

#line 1502 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_3(
#line 1502 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1502 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1502 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 1482 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_2(
#line 1482 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1482 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1);

#line 1473 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_1(
#line 1473 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1473 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1473 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 1473 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_3);

#line 1463 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0(
#line 1463 "var_use_analysis.m"
  MR_Word var_use_analysis__Cases_8,
#line 1463 "var_use_analysis.m"
  MR_Integer var_use_analysis__SwitchedOnVar_9,
#line 1463 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_10,
#line 1463 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_11,
#line 1463 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_12,
#line 1463 "var_use_analysis.m"
  MR_Float var_use_analysis__CostBeforeSwitch_13,
#line 1463 "var_use_analysis.m"
  MR_Float * var_use_analysis__CostAfterSwitch_14);

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__rec_disj_var_first_use_2_7_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 1429 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_disj_var_first_use_2_7_p_0(
#line 1429 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 1429 "var_use_analysis.m"
  MR_Integer var_use_analysis__DisjNum_2,
#line 1429 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_3,
#line 1429 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_4,
#line 1429 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__5_5,
#line 1429 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_6,
#line 1429 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_7);

#line 1397 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_disj_var_first_use_6_p_0(
#line 1397 "var_use_analysis.m"
  MR_Word var_use_analysis__Disjs_7,
#line 1397 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_8,
#line 1397 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_9,
#line 1397 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_10,
#line 1397 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_17,
#line 1397 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_18);

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__rec_conj_var_first_use_7_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 1365 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_conj_var_first_use_7_p_0(
#line 1365 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 1365 "var_use_analysis.m"
  MR_Integer var_use_analysis__ConjNum_2,
#line 1365 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_3,
#line 1365 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_4,
#line 1365 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__5_5,
#line 1365 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_6,
#line 1365 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_7);

#line 1271 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_goal_var_first_use_6_p_0(
#line 1271 "var_use_analysis.m"
  MR_Word var_use_analysis__Goal_7,
#line 1271 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_8,
#line 1271 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_9,
#line 1271 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_10,
#line 1271 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_70,
#line 1271 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_71);

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__filter_recursive_call_sites_3_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 1253 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__filter_recursive_call_sites_3_p_0(
#line 1253 "var_use_analysis.m"
  MR_Word var_use_analysis__GoalPathStep_4,
#line 1253 "var_use_analysis.m"
  MR_Word var_use_analysis__STATE_VARIABLE_RecCallSites_0_9,
#line 1253 "var_use_analysis.m"
  MR_Word * var_use_analysis__STATE_VARIABLE_RecCallSites_10);

#line 1247 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__build_recursive_call_sites_list_2_p_0_1(
#line 1247 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1247 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1247 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 1241 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__build_recursive_call_sites_list_2_p_0(
#line 1241 "var_use_analysis.m"
  MR_Word var_use_analysis__Map_3,
#line 1241 "var_use_analysis.m"
  MR_Word * var_use_analysis__List_4);

#line 1227 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__ffu_to_float_3_p_0(
#line 1227 "var_use_analysis.m"
  MR_Float var_use_analysis__Default_1,
#line 1227 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 1227 "var_use_analysis.m"
  MR_Float * var_use_analysis__HeadVar__3_3);

#line 1162 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__ite_var_first_use_8_p_0(
#line 1162 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_9,
#line 1162 "var_use_analysis.m"
  MR_Word var_use_analysis__Cond_10,
#line 1162 "var_use_analysis.m"
  MR_Word var_use_analysis__Then_11,
#line 1162 "var_use_analysis.m"
  MR_Word var_use_analysis__Else_12,
#line 1162 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_13,
#line 1162 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_40,
#line 1162 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_41,
#line 1162 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_15);

#line 1141 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__switch_var_first_use_2_8_p_0(
#line 1141 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_1,
#line 1141 "var_use_analysis.m"
  MR_Integer var_use_analysis__CaseNum_2,
#line 1141 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_3,
#line 1141 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__4_4,
#line 1141 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__5_5,
#line 1141 "var_use_analysis.m"
  MR_Float var_use_analysis__Cost0_6,
#line 1141 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__7_7,
#line 1141 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__8_8);

#line 1134 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0_2(
#line 1134 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1134 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1134 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 1119 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0_1(
#line 1119 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1119 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1);

#line 1103 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0(
#line 1103 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_8,
#line 1103 "var_use_analysis.m"
  MR_Integer var_use_analysis__SwitchedOnVar_9,
#line 1103 "var_use_analysis.m"
  MR_Word var_use_analysis__Cases_10,
#line 1103 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_11,
#line 1103 "var_use_analysis.m"
  MR_Float var_use_analysis__CostBeforeSwitch_12,
#line 1103 "var_use_analysis.m"
  MR_Float * var_use_analysis__CostAfterSwitch_13,
#line 1103 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_14);

#line 1035 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__disj_var_first_use_2_7_p_0(
#line 1035 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_1,
#line 1035 "var_use_analysis.m"
  MR_Integer var_use_analysis__DisjNum_2,
#line 1035 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3,
#line 1035 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_4,
#line 1035 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_5,
#line 1035 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_6,
#line 1035 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__7_7);

#line 1000 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__disj_var_first_use_7_p_0(
#line 1000 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_8,
#line 1000 "var_use_analysis.m"
  MR_Word var_use_analysis__Disjuncts_9,
#line 1000 "var_use_analysis.m"
  MR_Word var_use_analysis__Detism_10,
#line 1000 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_11,
#line 1000 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_19,
#line 1000 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_20,
#line 1000 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_13);

#line 974 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__conj_var_first_use_7_p_0(
#line 974 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_1,
#line 974 "var_use_analysis.m"
  MR_Integer var_use_analysis__ConjNum_2,
#line 974 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3,
#line 974 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_4,
#line 974 "var_use_analysis.m"
  MR_Float var_use_analysis__HeadVar__5_5,
#line 974 "var_use_analysis.m"
  MR_Float * var_use_analysis__HeadVar__6_6,
#line 974 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__7_7);

#line 944 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__atomic_trivial_var_first_use_5_p_0(
#line 944 "var_use_analysis.m"
  MR_Word var_use_analysis__AtomicGoal_6,
#line 944 "var_use_analysis.m"
  MR_Word var_use_analysis__BoundVars_7,
#line 944 "var_use_analysis.m"
  MR_Float var_use_analysis__CostSoFar_8,
#line 944 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_9,
#line 944 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_10);

#line 912 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_time_9_p_0(
#line 912 "var_use_analysis.m"
  MR_Word var_use_analysis__CliquePtr_10,
#line 912 "var_use_analysis.m"
  MR_Word var_use_analysis__CSDPtr_11,
#line 912 "var_use_analysis.m"
  MR_Word var_use_analysis__RecursionType_12,
#line 912 "var_use_analysis.m"
  MR_Word var_use_analysis__CurDepth_13,
#line 912 "var_use_analysis.m"
  MR_Float var_use_analysis__Cost_14,
#line 912 "var_use_analysis.m"
  MR_Word var_use_analysis__CallStack_15,
#line 912 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_16,
#line 912 "var_use_analysis.m"
  MR_Integer var_use_analysis__ArgNum_17,
#line 912 "var_use_analysis.m"
  MR_Float * var_use_analysis__Time_18);

#line 896 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__call_args_first_use_5_p_0_1(
#line 896 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 896 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 896 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2);

#line 875 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__call_args_first_use_5_p_0(
#line 875 "var_use_analysis.m"
  MR_Word var_use_analysis__Args_6,
#line 875 "var_use_analysis.m"
  MR_Float var_use_analysis__Cost_7,
#line 875 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_8,
#line 875 "var_use_analysis.m"
  MR_Word var_use_analysis__CostAndCallees_9,
#line 875 "var_use_analysis.m"
  MR_Word * var_use_analysis__Times_10);

#line 765 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__call_var_first_use_7_p_0(
#line 765 "var_use_analysis.m"
  MR_Word var_use_analysis__AtomicGoal_8,
#line 765 "var_use_analysis.m"
  MR_Word var_use_analysis__BoundVars_9,
#line 765 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_10,
#line 765 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_11,
#line 765 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_12,
#line 765 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_52,
#line 765 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_53);

#line 674 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__goal_var_first_use_6_p_0(
#line 674 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_7,
#line 674 "var_use_analysis.m"
  MR_Word var_use_analysis__Goal_8,
#line 674 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_9,
#line 674 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_67,
#line 674 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_68,
#line 674 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_11);

#line 564 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0_2(
#line 564 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 564 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 564 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 564 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_3,
#line 564 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_4,
#line 564 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_5);

#line 541 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0_1(
#line 541 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 541 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 541 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 541 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_3);

#line 509 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0(
#line 509 "var_use_analysis.m"
  MR_Word var_use_analysis__CliquePtr_8,
#line 509 "var_use_analysis.m"
  MR_Word var_use_analysis__PDPtr_9,
#line 509 "var_use_analysis.m"
  MR_Integer var_use_analysis__ArgNum_10,
#line 509 "var_use_analysis.m"
  MR_Word var_use_analysis__RecursionType_11,
#line 509 "var_use_analysis.m"
  MR_Word var_use_analysis__Depth_12,
#line 509 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_13,
#line 509 "var_use_analysis.m"
  MR_Word * var_use_analysis__Info_14);

#line 180 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__sum_use_info_costs_5_p_0(
#line 180 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 180 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_AccCost_0_11,
#line 180 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_AccCost_12,
#line 180 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_AccProcCost_0_13,
#line 180 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_AccProcCost_14);

#line 169 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__average_var_use_1_f_0_2(
#line 169 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 169 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1);

#line 165 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__average_var_use_1_f_0_1(
#line 165 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 165 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 165 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 165 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_3,
#line 165 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_4,
#line 165 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_5);


static /* final */ const MR_Box var_use_analysis_scalar_common_1[6][2];

static /* final */ const MR_Box var_use_analysis_scalar_common_2[12][3];

static /* final */ const MR_Box var_use_analysis_scalar_common_3[2][8];

static /* final */ const MR_Box var_use_analysis_scalar_common_4[5][5];

static /* final */ const MR_Box var_use_analysis_scalar_common_5[3][1];

static /* final */ const MR_Box var_use_analysis_scalar_common_6[2][7];

static /* final */ const MR_Box var_use_analysis_scalar_common_7[1][12];

static /* final */ const MR_Box var_use_analysis_scalar_common_8[5][4];

static /* final */ const MR_Box var_use_analysis_scalar_common_9[2][6];




static /* final */ const MR_Box var_use_analysis_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&var_use_analysis_scalar_common_2[4]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_2[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&var_use_analysis_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_cs_cost_csq_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_cs_cost_csq_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_3[0])),
    ((MR_Box) (var_use_analysis__average_var_use_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_3[1])),
    ((MR_Box) (var_use_analysis__prepare_for_proc_var_first_use_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_4[2])),
    ((MR_Box) (var_use_analysis__build_recursive_call_sites_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_4[3])),
    ((MR_Box) (var_use_analysis__rec_ite_var_first_use_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_4[4])),
    ((MR_Box) (var_use_analysis__switch_rec_prob_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_3[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_4[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_measurements__type_ctor_info_cs_cost_csq_0)),
    ((MR_Box) (&var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0__plain_builtin__type_ctor_info_float_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_5[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Cannot compute var use on a recursive call site for an unknown recursion depth"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "Cannot compute var use on a recursive call site for an unknown recursion type"))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&var_use_analysis__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_recursive_case_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_7[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_recursion_depth_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&var_use_analysis__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_options_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_8[5][4] = {
  /* row 0 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_4[1])),
    ((MR_Box) (var_use_analysis__switch_var_first_use_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_4[1])),
    ((MR_Box) (var_use_analysis__rec_switch_var_first_use_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_9[1])),
    ((MR_Box) (var_use_analysis__goal_rec_prob_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 3 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_9[1])),
    ((MR_Box) (var_use_analysis__ite_rec_prob_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_9[1])),
    ((MR_Box) (var_use_analysis__ite_rec_prob_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_9[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0)),
    ((MR_Box) (&var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0__plain_builtin__type_ctor_info_float_0))
  },
};



#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



#line 1829 "var_use_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

#line 1838 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct1 var_use_analysis__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_TypeInfo) &analysis_utils__analysis_utils__type_ctor_info_callee_0
  }
};

#line 1846 "var_use_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &var_use_analysis__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0
  }
};

#line 1855 "var_use_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &coverage__coverage__type_ctor_info_coverage_point_0
  }
};

#line 1864 "var_use_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 var_use_analysis__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 1872 "var_use_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_measurements__type_ctor_info_cs_cost_csq_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_cs_cost_csq_0
  }
};

#line 1881 "var_use_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 1890 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct1 var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1builtin__type_ctor_info_float_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 1898 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_first_use_rec_info_0_0[2] = {
  (MR_PseudoTypeInfo) &var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_recursive_case_0
};

#line 1904 "var_use_analysis.c"
static const MR_ConstString var_use_analysis__var_use_analysis__field_names_first_use_rec_info_0_0[2] = {
  (MR_String) "furi_rec_prob_array",
  (MR_String) "furi_rec_case"
};

#line 1910 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_0 = {
  (MR_String) "first_use_rec_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  var_use_analysis__var_use_analysis__field_types_first_use_rec_info_0_0,
  var_use_analysis__var_use_analysis__field_names_first_use_rec_info_0_0,
  NULL,
  NULL
};

#line 1925 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_1 = {
  (MR_String) "no_recursion_info",
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

#line 1940 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_1
};

#line 1945 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_1[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_0
};

#line 1950 "var_use_analysis.c"
static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_first_use_rec_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_1
  }
};

#line 1964 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_first_use_rec_info_0[2] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_0,
  &var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_1
};

#line 1970 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_first_use_rec_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1976 "var_use_analysis.c"
const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_first_use_rec_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____first_use_rec_info_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____first_use_rec_info_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "first_use_rec_info",
  {     var_use_analysis__var_use_analysis__du_name_ordered_first_use_rec_info_0 },
  {     var_use_analysis__var_use_analysis__du_ptag_ordered_first_use_rec_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_first_use_rec_info_0
};

#line 1993 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_0 = {
  (MR_String) "have_not_found_first_use",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2008 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_found_first_use_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2013 "var_use_analysis.c"
static const MR_ConstString var_use_analysis__var_use_analysis__field_names_found_first_use_0_1[1] = {
  (MR_String) "cost_before_use"
};

#line 2018 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_1 = {
  (MR_String) "found_first_use",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  var_use_analysis__var_use_analysis__field_types_found_first_use_0_1,
  var_use_analysis__var_use_analysis__field_names_found_first_use_0_1,
  NULL,
  NULL
};

#line 2033 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_0
};

#line 2038 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_1[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_1
};

#line 2043 "var_use_analysis.c"
static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_found_first_use_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_1
  }
};

#line 2057 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_found_first_use_0[2] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_1,
  &var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_0
};

#line 2063 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_found_first_use_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2069 "var_use_analysis.c"
const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____found_first_use_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____found_first_use_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "found_first_use",
  {     var_use_analysis__var_use_analysis__du_name_ordered_found_first_use_0 },
  {     var_use_analysis__var_use_analysis__du_ptag_ordered_found_first_use_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_found_first_use_0
};

#line 2086 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_intermodule_var_use_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2091 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_0 = {
  (MR_String) "follow_calls_into_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  var_use_analysis__var_use_analysis__field_types_intermodule_var_use_0_0,
  NULL,
  NULL,
  NULL
};

#line 2106 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_1 = {
  (MR_String) "follow_any_call",
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

#line 2121 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_1
};

#line 2126 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_1[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_0
};

#line 2131 "var_use_analysis.c"
static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_intermodule_var_use_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_1
  }
};

#line 2145 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_intermodule_var_use_0[2] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_1,
  &var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_0
};

#line 2151 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_intermodule_var_use_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2157 "var_use_analysis.c"
const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_intermodule_var_use_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____intermodule_var_use_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____intermodule_var_use_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "intermodule_var_use",
  {     var_use_analysis__var_use_analysis__du_name_ordered_intermodule_var_use_0 },
  {     var_use_analysis__var_use_analysis__du_ptag_ordered_intermodule_var_use_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_intermodule_var_use_0
};

#line 2174 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2179 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_0 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 2194 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct1 var_use_analysis__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 2202 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct2 var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 2211 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct1 var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  {
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_info_0
  }
};

#line 2219 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct2 var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_TypeInfo) &var_use_analysis__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0
  }
};

#line 2228 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct2 var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_cs_cost_csq_0
  }
};

#line 2237 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_1[7] = {
  (MR_PseudoTypeInfo) &var_use_analysis__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0,
  (MR_PseudoTypeInfo) &var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0,
  (MR_PseudoTypeInfo) &var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0,
  (MR_PseudoTypeInfo) &var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2248 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_1 = {
  (MR_String) "proc_var_first_use_prepared_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_1,
  NULL,
  NULL,
  NULL
};

#line 2263 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_0
};

#line 2268 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_1[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_1
};

#line 2273 "var_use_analysis.c"
static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_proc_var_first_use_prepared_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_1
  }
};

#line 2287 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_proc_var_first_use_prepared_info_0[2] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_0,
  &var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_1
};

#line 2293 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_proc_var_first_use_prepared_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2299 "var_use_analysis.c"
const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_proc_var_first_use_prepared_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "proc_var_first_use_prepared_info",
  {     var_use_analysis__var_use_analysis__du_name_ordered_proc_var_first_use_prepared_info_0 },
  {     var_use_analysis__var_use_analysis__du_ptag_ordered_proc_var_first_use_prepared_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_proc_var_first_use_prepared_info_0
};

#line 2316 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct2 var_use_analysis__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 2325 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct1 var_use_analysis__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &var_use_analysis__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0
  }
};

#line 2333 "var_use_analysis.c"
const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_recursive_calls_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (var_use_analysis____Unify____recursive_calls_list_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____recursive_calls_list_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "recursive_calls_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &var_use_analysis__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2350 "var_use_analysis.c"
static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_0 = {
  (MR_String) "recursive_case",
  (MR_Integer) 0
};

#line 2356 "var_use_analysis.c"
static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_1 = {
  (MR_String) "base_case",
  (MR_Integer) 1
};

#line 2362 "var_use_analysis.c"
static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_value_ordered_recursive_case_0[2] = {
  &var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_0,
  &var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_1
};

#line 2368 "var_use_analysis.c"
static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_name_ordered_recursive_case_0[2] = {
  &var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_1,
  &var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_0
};

#line 2374 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_recursive_case_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2380 "var_use_analysis.c"
const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_recursive_case_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (var_use_analysis____Unify____recursive_case_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____recursive_case_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "recursive_case",
  {     var_use_analysis__var_use_analysis__enum_name_ordered_recursive_case_0 },
  {     var_use_analysis__var_use_analysis__enum_value_ordered_recursive_case_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_recursive_case_0
};

#line 2397 "var_use_analysis.c"
static const MR_FA_TypeInfo_Struct1 var_use_analysis__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 2405 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_first_use_static_info_0_0[11] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0,
  (MR_PseudoTypeInfo) &var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0,
  (MR_PseudoTypeInfo) &var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0,
  (MR_PseudoTypeInfo) &var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_options_0,
  (MR_PseudoTypeInfo) &var_use_analysis__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_type_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_recursion_depth_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_first_use_rec_info_0
};

#line 2420 "var_use_analysis.c"
static const MR_ConstString var_use_analysis__var_use_analysis__field_names_var_first_use_static_info_0_0[11] = {
  (MR_String) "fui_clique",
  (MR_String) "fui_call_site_map",
  (MR_String) "fui_rec_call_site_map",
  (MR_String) "fui_containing_goal_map",
  (MR_String) "fui_coverage_array",
  (MR_String) "fui_var",
  (MR_String) "fui_var_use_opts",
  (MR_String) "fui_call_stack",
  (MR_String) "fui_recursion_type",
  (MR_String) "fui_cur_depth",
  (MR_String) "fui_rec_info"
};

#line 2435 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_first_use_static_info_0_0 = {
  (MR_String) "var_first_use_static_info",
  (MR_Integer) 11,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  var_use_analysis__var_use_analysis__field_types_var_first_use_static_info_0_0,
  var_use_analysis__var_use_analysis__field_names_var_first_use_static_info_0_0,
  NULL,
  NULL
};

#line 2450 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_first_use_static_info_0_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_var_first_use_static_info_0_0
};

#line 2455 "var_use_analysis.c"
static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_first_use_static_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_var_first_use_static_info_0_0
  }
};

#line 2464 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_first_use_static_info_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_var_first_use_static_info_0_0
};

#line 2469 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_first_use_static_info_0[1] = {
  (MR_Integer) 0
};

#line 2474 "var_use_analysis.c"
const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_var_first_use_static_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____var_first_use_static_info_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____var_first_use_static_info_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "var_first_use_static_info",
  {     var_use_analysis__var_use_analysis__du_name_ordered_var_first_use_static_info_0 },
  {     var_use_analysis__var_use_analysis__du_ptag_ordered_var_first_use_static_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_var_first_use_static_info_0
};

#line 2491 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_use_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0
};

#line 2498 "var_use_analysis.c"
static const MR_ConstString var_use_analysis__var_use_analysis__field_names_var_use_info_0_0[3] = {
  (MR_String) "vui_cost_until_use",
  (MR_String) "vui_proc_cost",
  (MR_String) "vui_use_type"
};

#line 2505 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_use_info_0_0 = {
  (MR_String) "var_use_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  var_use_analysis__var_use_analysis__field_types_var_use_info_0_0,
  var_use_analysis__var_use_analysis__field_names_var_use_info_0_0,
  NULL,
  NULL
};

#line 2520 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_use_info_0_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_var_use_info_0_0
};

#line 2525 "var_use_analysis.c"
static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_var_use_info_0_0
  }
};

#line 2534 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_use_info_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_var_use_info_0_0
};

#line 2539 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_info_0[1] = {
  (MR_Integer) 0
};

#line 2544 "var_use_analysis.c"
const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____var_use_info_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____var_use_info_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "var_use_info",
  {     var_use_analysis__var_use_analysis__du_name_ordered_var_use_info_0 },
  {     var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_var_use_info_0
};

#line 2561 "var_use_analysis.c"
static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_use_options_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_deep_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_intermodule_var_use_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0
};

#line 2568 "var_use_analysis.c"
static const MR_ConstString var_use_analysis__var_use_analysis__field_names_var_use_options_0_0[3] = {
  (MR_String) "vuo_deep",
  (MR_String) "vuo_intermodule_var_use",
  (MR_String) "vuo_var_use_type"
};

#line 2575 "var_use_analysis.c"
static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_use_options_0_0 = {
  (MR_String) "var_use_options",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  var_use_analysis__var_use_analysis__field_types_var_use_options_0_0,
  var_use_analysis__var_use_analysis__field_names_var_use_options_0_0,
  NULL,
  NULL
};

#line 2590 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_use_options_0_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_var_use_options_0_0
};

#line 2595 "var_use_analysis.c"
static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_options_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_var_use_options_0_0
  }
};

#line 2604 "var_use_analysis.c"
static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_use_options_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_var_use_options_0_0
};

#line 2609 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_options_0[1] = {
  (MR_Integer) 0
};

#line 2614 "var_use_analysis.c"
const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_var_use_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____var_use_options_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____var_use_options_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "var_use_options",
  {     var_use_analysis__var_use_analysis__du_name_ordered_var_use_options_0 },
  {     var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_options_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_var_use_options_0
};

#line 2631 "var_use_analysis.c"
static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_0 = {
  (MR_String) "var_use_production",
  (MR_Integer) 0
};

#line 2637 "var_use_analysis.c"
static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_1 = {
  (MR_String) "var_use_consumption",
  (MR_Integer) 1
};

#line 2643 "var_use_analysis.c"
static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_2 = {
  (MR_String) "var_use_other",
  (MR_Integer) 2
};

#line 2649 "var_use_analysis.c"
static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_value_ordered_var_use_type_0[3] = {
  &var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_0,
  &var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_1,
  &var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_2
};

#line 2656 "var_use_analysis.c"
static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_name_ordered_var_use_type_0[3] = {
  &var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_1,
  &var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_2,
  &var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_0
};

#line 2663 "var_use_analysis.c"
static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2670 "var_use_analysis.c"
const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (var_use_analysis____Unify____var_use_type_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____var_use_type_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "var_use_type",
  {     var_use_analysis__var_use_analysis__enum_name_ordered_var_use_type_0 },
  {     var_use_analysis__var_use_analysis__enum_value_ordered_var_use_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_var_use_type_0
};

#line 2687 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____first_use_rec_info_0_0_10001(
#line 2690 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 2692 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2)
#line 2694 "var_use_analysis.c"
{
#line 2696 "var_use_analysis.c"
  {
#line 2698 "var_use_analysis.c"
    MR_bool var_use_analysis__succeeded;

#line 2701 "var_use_analysis.c"
    {
#line 2703 "var_use_analysis.c"
      var_use_analysis__succeeded = var_use_analysis____Unify____first_use_rec_info_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
#line 2706 "var_use_analysis.c"
    return var_use_analysis__succeeded;
#line 2708 "var_use_analysis.c"
  }
#line 2710 "var_use_analysis.c"
}

#line 2713 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____first_use_rec_info_0_0_10001(
#line 2716 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 2718 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 2720 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3)
#line 2722 "var_use_analysis.c"
{
#line 2724 "var_use_analysis.c"
  {
#line 2726 "var_use_analysis.c"
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

#line 2729 "var_use_analysis.c"
    {
#line 2731 "var_use_analysis.c"
      var_use_analysis____Compare____first_use_rec_info_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
#line 2734 "var_use_analysis.c"
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
#line 2736 "var_use_analysis.c"
  }
#line 2738 "var_use_analysis.c"
}

#line 2741 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____found_first_use_0_0_10001(
#line 2744 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 2746 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2)
#line 2748 "var_use_analysis.c"
{
#line 2750 "var_use_analysis.c"
  {
#line 2752 "var_use_analysis.c"
    MR_bool var_use_analysis__succeeded;

#line 2755 "var_use_analysis.c"
    {
#line 2757 "var_use_analysis.c"
      var_use_analysis__succeeded = var_use_analysis____Unify____found_first_use_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
#line 2760 "var_use_analysis.c"
    return var_use_analysis__succeeded;
#line 2762 "var_use_analysis.c"
  }
#line 2764 "var_use_analysis.c"
}

#line 2767 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____found_first_use_0_0_10001(
#line 2770 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 2772 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 2774 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3)
#line 2776 "var_use_analysis.c"
{
#line 2778 "var_use_analysis.c"
  {
#line 2780 "var_use_analysis.c"
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

#line 2783 "var_use_analysis.c"
    {
#line 2785 "var_use_analysis.c"
      var_use_analysis____Compare____found_first_use_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
#line 2788 "var_use_analysis.c"
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
#line 2790 "var_use_analysis.c"
  }
#line 2792 "var_use_analysis.c"
}

#line 2795 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____intermodule_var_use_0_0_10001(
#line 2798 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 2800 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2)
#line 2802 "var_use_analysis.c"
{
#line 2804 "var_use_analysis.c"
  {
#line 2806 "var_use_analysis.c"
    MR_bool var_use_analysis__succeeded;

#line 2809 "var_use_analysis.c"
    {
#line 2811 "var_use_analysis.c"
      var_use_analysis__succeeded = var_use_analysis____Unify____intermodule_var_use_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
#line 2814 "var_use_analysis.c"
    return var_use_analysis__succeeded;
#line 2816 "var_use_analysis.c"
  }
#line 2818 "var_use_analysis.c"
}

#line 2821 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____intermodule_var_use_0_0_10001(
#line 2824 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 2826 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 2828 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3)
#line 2830 "var_use_analysis.c"
{
#line 2832 "var_use_analysis.c"
  {
#line 2834 "var_use_analysis.c"
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

#line 2837 "var_use_analysis.c"
    {
#line 2839 "var_use_analysis.c"
      var_use_analysis____Compare____intermodule_var_use_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
#line 2842 "var_use_analysis.c"
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
#line 2844 "var_use_analysis.c"
  }
#line 2846 "var_use_analysis.c"
}

#line 2849 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0_10001(
#line 2852 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 2854 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2)
#line 2856 "var_use_analysis.c"
{
#line 2858 "var_use_analysis.c"
  {
#line 2860 "var_use_analysis.c"
    MR_bool var_use_analysis__succeeded;

#line 2863 "var_use_analysis.c"
    {
#line 2865 "var_use_analysis.c"
      var_use_analysis__succeeded = var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
#line 2868 "var_use_analysis.c"
    return var_use_analysis__succeeded;
#line 2870 "var_use_analysis.c"
  }
#line 2872 "var_use_analysis.c"
}

#line 2875 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0_10001(
#line 2878 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 2880 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 2882 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3)
#line 2884 "var_use_analysis.c"
{
#line 2886 "var_use_analysis.c"
  {
#line 2888 "var_use_analysis.c"
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

#line 2891 "var_use_analysis.c"
    {
#line 2893 "var_use_analysis.c"
      var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
#line 2896 "var_use_analysis.c"
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
#line 2898 "var_use_analysis.c"
  }
#line 2900 "var_use_analysis.c"
}

#line 2903 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_calls_list_0_0_10001(
#line 2906 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 2908 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2)
#line 2910 "var_use_analysis.c"
{
#line 2912 "var_use_analysis.c"
  {
#line 2914 "var_use_analysis.c"
    MR_bool var_use_analysis__succeeded;

#line 2917 "var_use_analysis.c"
    {
#line 2919 "var_use_analysis.c"
      var_use_analysis__succeeded = var_use_analysis____Unify____recursive_calls_list_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
#line 2922 "var_use_analysis.c"
    return var_use_analysis__succeeded;
#line 2924 "var_use_analysis.c"
  }
#line 2926 "var_use_analysis.c"
}

#line 2929 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____recursive_calls_list_0_0_10001(
#line 2932 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 2934 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 2936 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3)
#line 2938 "var_use_analysis.c"
{
#line 2940 "var_use_analysis.c"
  {
#line 2942 "var_use_analysis.c"
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

#line 2945 "var_use_analysis.c"
    {
#line 2947 "var_use_analysis.c"
      var_use_analysis____Compare____recursive_calls_list_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
#line 2950 "var_use_analysis.c"
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
#line 2952 "var_use_analysis.c"
  }
#line 2954 "var_use_analysis.c"
}

#line 2957 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_case_0_0_10001(
#line 2960 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 2962 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2)
#line 2964 "var_use_analysis.c"
{
#line 2966 "var_use_analysis.c"
  {
#line 2968 "var_use_analysis.c"
    MR_bool var_use_analysis__succeeded;

#line 2971 "var_use_analysis.c"
    {
#line 2973 "var_use_analysis.c"
      var_use_analysis__succeeded = var_use_analysis____Unify____recursive_case_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
#line 2976 "var_use_analysis.c"
    return var_use_analysis__succeeded;
#line 2978 "var_use_analysis.c"
  }
#line 2980 "var_use_analysis.c"
}

#line 2983 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____recursive_case_0_0_10001(
#line 2986 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 2988 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 2990 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3)
#line 2992 "var_use_analysis.c"
{
#line 2994 "var_use_analysis.c"
  {
#line 2996 "var_use_analysis.c"
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

#line 2999 "var_use_analysis.c"
    {
#line 3001 "var_use_analysis.c"
      var_use_analysis____Compare____recursive_case_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
#line 3004 "var_use_analysis.c"
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
#line 3006 "var_use_analysis.c"
  }
#line 3008 "var_use_analysis.c"
}

#line 3011 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____var_first_use_static_info_0_0_10001(
#line 3014 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 3016 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2)
#line 3018 "var_use_analysis.c"
{
#line 3020 "var_use_analysis.c"
  {
#line 3022 "var_use_analysis.c"
    MR_bool var_use_analysis__succeeded;

#line 3025 "var_use_analysis.c"
    {
#line 3027 "var_use_analysis.c"
      var_use_analysis__succeeded = var_use_analysis____Unify____var_first_use_static_info_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
#line 3030 "var_use_analysis.c"
    return var_use_analysis__succeeded;
#line 3032 "var_use_analysis.c"
  }
#line 3034 "var_use_analysis.c"
}

#line 3037 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____var_first_use_static_info_0_0_10001(
#line 3040 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 3042 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 3044 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3)
#line 3046 "var_use_analysis.c"
{
#line 3048 "var_use_analysis.c"
  {
#line 3050 "var_use_analysis.c"
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

#line 3053 "var_use_analysis.c"
    {
#line 3055 "var_use_analysis.c"
      var_use_analysis____Compare____var_first_use_static_info_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
#line 3058 "var_use_analysis.c"
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
#line 3060 "var_use_analysis.c"
  }
#line 3062 "var_use_analysis.c"
}

#line 3065 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_info_0_0_10001(
#line 3068 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 3070 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2)
#line 3072 "var_use_analysis.c"
{
#line 3074 "var_use_analysis.c"
  {
#line 3076 "var_use_analysis.c"
    MR_bool var_use_analysis__succeeded;

#line 3079 "var_use_analysis.c"
    {
#line 3081 "var_use_analysis.c"
      var_use_analysis__succeeded = var_use_analysis____Unify____var_use_info_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
#line 3084 "var_use_analysis.c"
    return var_use_analysis__succeeded;
#line 3086 "var_use_analysis.c"
  }
#line 3088 "var_use_analysis.c"
}

#line 3091 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____var_use_info_0_0_10001(
#line 3094 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 3096 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 3098 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3)
#line 3100 "var_use_analysis.c"
{
#line 3102 "var_use_analysis.c"
  {
#line 3104 "var_use_analysis.c"
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

#line 3107 "var_use_analysis.c"
    {
#line 3109 "var_use_analysis.c"
      var_use_analysis____Compare____var_use_info_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
#line 3112 "var_use_analysis.c"
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
#line 3114 "var_use_analysis.c"
  }
#line 3116 "var_use_analysis.c"
}

#line 3119 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_options_0_0_10001(
#line 3122 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 3124 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2)
#line 3126 "var_use_analysis.c"
{
#line 3128 "var_use_analysis.c"
  {
#line 3130 "var_use_analysis.c"
    MR_bool var_use_analysis__succeeded;

#line 3133 "var_use_analysis.c"
    {
#line 3135 "var_use_analysis.c"
      var_use_analysis__succeeded = var_use_analysis____Unify____var_use_options_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
#line 3138 "var_use_analysis.c"
    return var_use_analysis__succeeded;
#line 3140 "var_use_analysis.c"
  }
#line 3142 "var_use_analysis.c"
}

#line 3145 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____var_use_options_0_0_10001(
#line 3148 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 3150 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 3152 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3)
#line 3154 "var_use_analysis.c"
{
#line 3156 "var_use_analysis.c"
  {
#line 3158 "var_use_analysis.c"
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

#line 3161 "var_use_analysis.c"
    {
#line 3163 "var_use_analysis.c"
      var_use_analysis____Compare____var_use_options_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
#line 3166 "var_use_analysis.c"
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
#line 3168 "var_use_analysis.c"
  }
#line 3170 "var_use_analysis.c"
}

#line 3173 "var_use_analysis.c"
static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_type_0_0_10001(
#line 3176 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 3178 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2)
#line 3180 "var_use_analysis.c"
{
#line 3182 "var_use_analysis.c"
  {
#line 3184 "var_use_analysis.c"
    MR_bool var_use_analysis__succeeded;

#line 3187 "var_use_analysis.c"
    {
#line 3189 "var_use_analysis.c"
      var_use_analysis__succeeded = var_use_analysis____Unify____var_use_type_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
#line 3192 "var_use_analysis.c"
    return var_use_analysis__succeeded;
#line 3194 "var_use_analysis.c"
  }
#line 3196 "var_use_analysis.c"
}

#line 3199 "var_use_analysis.c"
static void MR_CALL 
var_use_analysis____Compare____var_use_type_0_0_10001(
#line 3202 "var_use_analysis.c"
  MR_Box * var_use_analysis__wrapper_arg_1,
#line 3204 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 3206 "var_use_analysis.c"
  MR_Box var_use_analysis__wrapper_arg_3)
#line 3208 "var_use_analysis.c"
{
#line 3210 "var_use_analysis.c"
  {
#line 3212 "var_use_analysis.c"
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

#line 3215 "var_use_analysis.c"
    {
#line 3217 "var_use_analysis.c"
      var_use_analysis____Compare____var_use_type_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
#line 3220 "var_use_analysis.c"
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
#line 3222 "var_use_analysis.c"
  }
#line 3224 "var_use_analysis.c"
}

#line 411 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(
#line 411 "var_use_analysis.m"
  MR_Word var_use_analysis__CliquePtr_10,
#line 411 "var_use_analysis.m"
  MR_Word var_use_analysis__PDPtr_11,
#line 411 "var_use_analysis.m"
  MR_Integer var_use_analysis__ArgNum_12,
#line 411 "var_use_analysis.m"
  MR_Word var_use_analysis__RecursionType_13,
#line 411 "var_use_analysis.m"
  MR_Word var_use_analysis__Depth_14,
#line 411 "var_use_analysis.m"
  MR_Word var_use_analysis__CallStack_16,
#line 411 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_17,
#line 411 "var_use_analysis.m"
  MR_Word * var_use_analysis__MaybeVarUseInfo_18)
#line 411 "var_use_analysis.m"
{
#line 419 "var_use_analysis.m"
  {
#line 419 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 419 "var_use_analysis.m"
    MR_Word var_use_analysis__Info_19;

#line 420 "var_use_analysis.m"
    {
#line 420 "var_use_analysis.m"
      var_use_analysis__prepare_for_proc_var_first_use_7_p_0(var_use_analysis__CliquePtr_10, var_use_analysis__PDPtr_11, var_use_analysis__ArgNum_12, var_use_analysis__RecursionType_13, var_use_analysis__Depth_14, var_use_analysis__VarUseOptions_17, &var_use_analysis__Info_19);
    }
#line 492 "var_use_analysis.m"
    if (((MR_tag((MR_Word) var_use_analysis__Info_19)) == (MR_mktag((MR_Integer) 0))))
#line 493 "var_use_analysis.m"
      {
#line 493 "var_use_analysis.m"
        MR_String var_use_analysis__Error_45 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_19, (MR_Integer) 0)));

#line 494 "var_use_analysis.m"
        {
#line 494 "var_use_analysis.m"
          MR_Word base;
#line 494 "var_use_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 494 "var_use_analysis.m"
          *var_use_analysis__MaybeVarUseInfo_18 = base;
#line 494 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (var_use_analysis__Error_45));
#line 494 "var_use_analysis.m"
        }
#line 493 "var_use_analysis.m"
      }
#line 492 "var_use_analysis.m"
    else
#line 425 "var_use_analysis.m"
      {
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 0)));
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__LastGoalId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 1)));
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__ContainingGoalMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 2)));
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__CoverageArray_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 3)));
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__CallSiteCostMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 4)));
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__RecursiveCallSiteCostMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 5)));
#line 425 "var_use_analysis.m"
        MR_Integer var_use_analysis__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 6)));
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__VarUseInfo_27;
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__RecProbsArray0_28;
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__RecursiveCalls_29;
#line 425 "var_use_analysis.m"
        MR_Float var_use_analysis__RecProb_30;
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__RecProbsArray_31;
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__VarFirstUseInfoRecCase_32;
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__RecFoundFirstUse_33;
#line 425 "var_use_analysis.m"
        MR_Float var_use_analysis__RecTotalTime_34;
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__VarFirstUseInfoBaseCase_35;
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__BaseFoundFirstUse_36;
#line 425 "var_use_analysis.m"
        MR_Float var_use_analysis__BaseTotalTime_37;
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__VarUseType_38;
#line 425 "var_use_analysis.m"
        MR_Float var_use_analysis__VarUseTimeRec_39;
#line 425 "var_use_analysis.m"
        MR_Float var_use_analysis__VarUseTimeBase_40;
#line 425 "var_use_analysis.m"
        MR_Float var_use_analysis__DepthF_41;
#line 425 "var_use_analysis.m"
        MR_Float var_use_analysis__VarUseTime_42;
#line 425 "var_use_analysis.m"
        MR_Float var_use_analysis__Cost_43;
#line 425 "var_use_analysis.m"
        MR_Float var_use_analysis__V_47_47;
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__V_48_48;
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__V_51_51;
#line 425 "var_use_analysis.m"
        MR_Float var_use_analysis__V_54_54;
#line 425 "var_use_analysis.m"
        MR_Float var_use_analysis__V_55_55;
#line 425 "var_use_analysis.m"
        MR_Float var_use_analysis__V_56_56;
#line 425 "var_use_analysis.m"
        MR_Float var_use_analysis__V_57_57;
#line 425 "var_use_analysis.m"
        MR_Float var_use_analysis__V_58_58;
#line 425 "var_use_analysis.m"
        MR_Float var_use_analysis__V_59_59;
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__V_60_60;
#line 425 "var_use_analysis.m"
        MR_Word var_use_analysis__V_61_61;
#line 437 "var_use_analysis.m"
        MR_Word var_use_analysis__V_79_79;
#line 437 "var_use_analysis.m"
        MR_Word var_use_analysis__V_80_80;
#line 437 "var_use_analysis.m"
        MR_Word var_use_analysis__V_81_81;
#line 437 "var_use_analysis.m"
        MR_Word var_use_analysis__V_82_82;
#line 437 "var_use_analysis.m"
        MR_Word var_use_analysis__V_83_83;
#line 437 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_84_84;
#line 437 "var_use_analysis.m"
        MR_Word var_use_analysis__V_85_85;
#line 437 "var_use_analysis.m"
        MR_Word var_use_analysis__V_86_86;
#line 437 "var_use_analysis.m"
        MR_Word var_use_analysis__V_87_87;
#line 437 "var_use_analysis.m"
        MR_Word var_use_analysis__V_88_88;
#line 437 "var_use_analysis.m"
        MR_Word var_use_analysis__V_89_89;
#line 441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_90_90;
#line 441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_91_91;
#line 441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_92_92;
#line 441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_93_93;
#line 441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_94_94;
#line 441 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_95_95;
#line 441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_96_96;
#line 441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_97_97;
#line 441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_98_98;
#line 441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_99_99;
#line 441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_100_100;
#line 446 "var_use_analysis.m"
        MR_Word var_use_analysis__V_101_101;
#line 446 "var_use_analysis.m"
        MR_Word var_use_analysis__V_102_102;
#line 481 "var_use_analysis.m"
        MR_Word var_use_analysis__V_103_103;
#line 481 "var_use_analysis.m"
        MR_Word var_use_analysis__V_104_104;

#line 426 "var_use_analysis.m"
        {
#line 426 "var_use_analysis.m"
          var_use_analysis__VarUseInfo_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 426 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 0) = ((MR_Box) (var_use_analysis__CliquePtr_10));
#line 426 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 1) = ((MR_Box) (var_use_analysis__CallSiteCostMap_24));
#line 426 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 2) = ((MR_Box) (var_use_analysis__RecursiveCallSiteCostMap_25));
#line 426 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 3) = ((MR_Box) (var_use_analysis__ContainingGoalMap_22));
#line 426 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 4) = ((MR_Box) (var_use_analysis__CoverageArray_23));
#line 426 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 5) = ((MR_Box) (var_use_analysis__Var_26));
#line 426 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 6) = ((MR_Box) (var_use_analysis__VarUseOptions_17));
#line 426 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 7) = ((MR_Box) (var_use_analysis__CallStack_16));
#line 426 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 8) = ((MR_Box) (var_use_analysis__RecursionType_13));
#line 426 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 9) = ((MR_Box) (var_use_analysis__Depth_14));
#line 426 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "var_use_analysis.m"
        }
#line 431 "var_use_analysis.m"
        {
#line 431 "var_use_analysis.m"
          var_use_analysis__V_47_47 = measurement_units__impossible_0_f_0();
        }
#line 431 "var_use_analysis.m"
        {
#line 431 "var_use_analysis.m"
          var_use_analysis__RecProbsArray0_28 = mdbcomp__goal_path__create_goal_id_array_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, var_use_analysis__LastGoalId_21, MR_box_float(var_use_analysis__V_47_47));
        }
#line 432 "var_use_analysis.m"
        {
#line 432 "var_use_analysis.m"
          var_use_analysis__build_recursive_call_sites_list_2_p_0(var_use_analysis__RecursiveCallSiteCostMap_25, &var_use_analysis__RecursiveCalls_29);
        }
#line 434 "var_use_analysis.m"
        {
#line 434 "var_use_analysis.m"
          var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__Goal_20, var_use_analysis__RecursiveCalls_29, var_use_analysis__VarUseInfo_27, &var_use_analysis__RecProb_30, var_use_analysis__RecProbsArray0_28, &var_use_analysis__RecProbsArray_31);
        }
#line 438 "var_use_analysis.m"
        {
#line 438 "var_use_analysis.m"
          var_use_analysis__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), var_use_analysis__V_48_48, 0) = ((MR_Box) (var_use_analysis__RecProbsArray_31));
#line 438 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), var_use_analysis__V_48_48, 1) = ((MR_Box) ((MR_Integer) 0));
#line 438 "var_use_analysis.m"
        }
#line 437 "var_use_analysis.m"
        var_use_analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 0)));
#line 437 "var_use_analysis.m"
        var_use_analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 1)));
#line 437 "var_use_analysis.m"
        var_use_analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 2)));
#line 437 "var_use_analysis.m"
        var_use_analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 3)));
#line 437 "var_use_analysis.m"
        var_use_analysis__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 4)));
#line 437 "var_use_analysis.m"
        var_use_analysis__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 5)));
#line 437 "var_use_analysis.m"
        var_use_analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 6)));
#line 437 "var_use_analysis.m"
        var_use_analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 7)));
#line 437 "var_use_analysis.m"
        var_use_analysis__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 8)));
#line 437 "var_use_analysis.m"
        var_use_analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 9)));
#line 437 "var_use_analysis.m"
        var_use_analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 10)));
#line 437 "var_use_analysis.m"
        {
#line 437 "var_use_analysis.m"
          var_use_analysis__VarFirstUseInfoRecCase_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 437 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 0) = ((MR_Box) (var_use_analysis__V_79_79));
#line 437 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 1) = ((MR_Box) (var_use_analysis__V_80_80));
#line 437 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 2) = ((MR_Box) (var_use_analysis__V_81_81));
#line 437 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 3) = ((MR_Box) (var_use_analysis__V_82_82));
#line 437 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 4) = ((MR_Box) (var_use_analysis__V_83_83));
#line 437 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 5) = ((MR_Box) (var_use_analysis__V_84_84));
#line 437 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 6) = ((MR_Box) (var_use_analysis__V_85_85));
#line 437 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 7) = ((MR_Box) (var_use_analysis__V_86_86));
#line 437 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 8) = ((MR_Box) (var_use_analysis__V_87_87));
#line 437 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 9) = ((MR_Box) (var_use_analysis__V_88_88));
#line 437 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 10) = ((MR_Box) (var_use_analysis__V_48_48));
#line 437 "var_use_analysis.m"
        }
#line 439 "var_use_analysis.m"
        {
#line 439 "var_use_analysis.m"
          var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Goal_20, var_use_analysis__RecursiveCalls_29, var_use_analysis__VarFirstUseInfoRecCase_32, &var_use_analysis__RecFoundFirstUse_33, (MR_Float) 0.0000000000000000, &var_use_analysis__RecTotalTime_34);
        }
#line 442 "var_use_analysis.m"
        {
#line 442 "var_use_analysis.m"
          var_use_analysis__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), var_use_analysis__V_51_51, 0) = ((MR_Box) (var_use_analysis__RecProbsArray_31));
#line 442 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), var_use_analysis__V_51_51, 1) = ((MR_Box) ((MR_Integer) 1));
#line 442 "var_use_analysis.m"
        }
#line 441 "var_use_analysis.m"
        var_use_analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 0)));
#line 441 "var_use_analysis.m"
        var_use_analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 1)));
#line 441 "var_use_analysis.m"
        var_use_analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 2)));
#line 441 "var_use_analysis.m"
        var_use_analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 3)));
#line 441 "var_use_analysis.m"
        var_use_analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 4)));
#line 441 "var_use_analysis.m"
        var_use_analysis__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 5)));
#line 441 "var_use_analysis.m"
        var_use_analysis__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 6)));
#line 441 "var_use_analysis.m"
        var_use_analysis__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 7)));
#line 441 "var_use_analysis.m"
        var_use_analysis__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 8)));
#line 441 "var_use_analysis.m"
        var_use_analysis__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 9)));
#line 441 "var_use_analysis.m"
        var_use_analysis__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 10)));
#line 441 "var_use_analysis.m"
        {
#line 441 "var_use_analysis.m"
          var_use_analysis__VarFirstUseInfoBaseCase_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 441 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 0) = ((MR_Box) (var_use_analysis__V_90_90));
#line 441 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 1) = ((MR_Box) (var_use_analysis__V_91_91));
#line 441 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 2) = ((MR_Box) (var_use_analysis__V_92_92));
#line 441 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 3) = ((MR_Box) (var_use_analysis__V_93_93));
#line 441 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 4) = ((MR_Box) (var_use_analysis__V_94_94));
#line 441 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 5) = ((MR_Box) (var_use_analysis__V_95_95));
#line 441 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 6) = ((MR_Box) (var_use_analysis__V_96_96));
#line 441 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 7) = ((MR_Box) (var_use_analysis__V_97_97));
#line 441 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 8) = ((MR_Box) (var_use_analysis__V_98_98));
#line 441 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 9) = ((MR_Box) (var_use_analysis__V_99_99));
#line 441 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 10) = ((MR_Box) (var_use_analysis__V_51_51));
#line 441 "var_use_analysis.m"
        }
#line 443 "var_use_analysis.m"
        {
#line 443 "var_use_analysis.m"
          var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Goal_20, var_use_analysis__RecursiveCalls_29, var_use_analysis__VarFirstUseInfoBaseCase_35, &var_use_analysis__BaseFoundFirstUse_36, (MR_Float) 0.0000000000000000, &var_use_analysis__BaseTotalTime_37);
        }
#line 446 "var_use_analysis.m"
        var_use_analysis__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
#line 446 "var_use_analysis.m"
        var_use_analysis__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));
#line 446 "var_use_analysis.m"
        var_use_analysis__VarUseType_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));
#line 449 "var_use_analysis.m"
        if ((var_use_analysis__RecFoundFirstUse_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "var_use_analysis.m"
#line 454 "var_use_analysis.m"
          switch (var_use_analysis__VarUseType_38) {
#line 454 "var_use_analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 454 "var_use_analysis.m"
            case (MR_Integer) 1:
#line 453 "var_use_analysis.m"
              var_use_analysis__VarUseTimeRec_39 = (MR_Float) 0.0000000000000000;
#line 454 "var_use_analysis.m"
              break;
#line 454 "var_use_analysis.m"
            case (MR_Integer) 2:
#line 454 "var_use_analysis.m"
            case (MR_Integer) 0:
#line 458 "var_use_analysis.m"
              var_use_analysis__VarUseTimeRec_39 = var_use_analysis__RecTotalTime_34;
#line 454 "var_use_analysis.m"
              break;
#line 454 "var_use_analysis.m"
          }
#line 449 "var_use_analysis.m"
        else
#line 448 "var_use_analysis.m"
          var_use_analysis__VarUseTimeRec_39 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__RecFoundFirstUse_33, (MR_Integer) 0)));
#line 463 "var_use_analysis.m"
        if ((var_use_analysis__BaseFoundFirstUse_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 468 "var_use_analysis.m"
#line 468 "var_use_analysis.m"
          switch (var_use_analysis__VarUseType_38) {
#line 468 "var_use_analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 468 "var_use_analysis.m"
            case (MR_Integer) 1:
#line 467 "var_use_analysis.m"
              var_use_analysis__VarUseTimeBase_40 = (MR_Float) 0.0000000000000000;
#line 468 "var_use_analysis.m"
              break;
#line 468 "var_use_analysis.m"
            case (MR_Integer) 2:
#line 468 "var_use_analysis.m"
            case (MR_Integer) 0:
#line 472 "var_use_analysis.m"
              var_use_analysis__VarUseTimeBase_40 = var_use_analysis__BaseTotalTime_37;
#line 468 "var_use_analysis.m"
              break;
#line 468 "var_use_analysis.m"
          }
#line 463 "var_use_analysis.m"
        else
#line 462 "var_use_analysis.m"
          var_use_analysis__VarUseTimeBase_40 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__BaseFoundFirstUse_36, (MR_Integer) 0)));
#line 476 "var_use_analysis.m"
        {
#line 476 "var_use_analysis.m"
          var_use_analysis__DepthF_41 = measurements__recursion_depth_to_float_1_f_0(var_use_analysis__Depth_14);
        }
#line 478 "var_use_analysis.m"
        var_use_analysis__V_54_54 = (var_use_analysis__DepthF_41 * var_use_analysis__VarUseTimeRec_39);
#line 477 "var_use_analysis.m"
        var_use_analysis__VarUseTime_42 = (var_use_analysis__VarUseTimeBase_40 + var_use_analysis__V_54_54);
#line 479 "var_use_analysis.m"
        {
#line 479 "var_use_analysis.m"
          var_use_analysis__V_56_56 = measurement_units__probability_to_float_1_f_0(var_use_analysis__RecProb_30);
        }
#line 479 "var_use_analysis.m"
        var_use_analysis__V_55_55 = (var_use_analysis__RecTotalTime_34 * var_use_analysis__V_56_56);
#line 480 "var_use_analysis.m"
        {
#line 480 "var_use_analysis.m"
          var_use_analysis__V_59_59 = measurement_units__not_probability_1_f_0(var_use_analysis__RecProb_30);
        }
#line 480 "var_use_analysis.m"
        {
#line 480 "var_use_analysis.m"
          var_use_analysis__V_58_58 = measurement_units__probability_to_float_1_f_0(var_use_analysis__V_59_59);
        }
#line 480 "var_use_analysis.m"
        var_use_analysis__V_57_57 = (var_use_analysis__BaseTotalTime_37 * var_use_analysis__V_58_58);
#line 479 "var_use_analysis.m"
        var_use_analysis__Cost_43 = (var_use_analysis__V_55_55 + var_use_analysis__V_57_57);
#line 481 "var_use_analysis.m"
        var_use_analysis__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
#line 481 "var_use_analysis.m"
        var_use_analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));
#line 481 "var_use_analysis.m"
        var_use_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));
#line 481 "var_use_analysis.m"
        {
#line 481 "var_use_analysis.m"
          var_use_analysis__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 481 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_60_60, 0) = MR_box_float(var_use_analysis__VarUseTime_42);
#line 481 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_60_60, 1) = MR_box_float(var_use_analysis__Cost_43);
#line 481 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_60_60, 2) = ((MR_Box) (var_use_analysis__V_61_61));
#line 481 "var_use_analysis.m"
        }
#line 481 "var_use_analysis.m"
        {
#line 481 "var_use_analysis.m"
          MR_Word base;
#line 481 "var_use_analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 481 "var_use_analysis.m"
          *var_use_analysis__MaybeVarUseInfo_18 = base;
#line 481 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__V_60_60));
#line 481 "var_use_analysis.m"
        }
#line 425 "var_use_analysis.m"
      }
#line 419 "var_use_analysis.m"
  }
#line 411 "var_use_analysis.m"
}

#line 1482 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__rec_switch_var_first_use__1482__1_2_p_0(
#line 1482 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_30,
#line 1482 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_70)
#line 1482 "var_use_analysis.m"
{
#line 602 "var_use_analysis.m"
  {
#line 602 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 602 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_80 = (MR_Integer) var_use_analysis__HeadVar__1_30;
#line 602 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_81 = (MR_Integer) var_use_analysis__HeadVar__2_70;

#line 602 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_80 == var_use_analysis__CastY_81);
#line 602 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 602 "var_use_analysis.m"
      var_use_analysis__succeeded = MR_TRUE;
#line 602 "var_use_analysis.m"
    else
#line 602 "var_use_analysis.m"
      {
#line 602 "var_use_analysis.m"
        MR_Integer var_use_analysis__CastX_76 = (MR_Integer) var_use_analysis__HeadVar__1_30;
#line 602 "var_use_analysis.m"
        MR_Integer var_use_analysis__CastY_77 = (MR_Integer) var_use_analysis__HeadVar__2_70;

#line 602 "var_use_analysis.m"
        var_use_analysis__succeeded = (var_use_analysis__CastY_77 == var_use_analysis__CastX_76);
#line 602 "var_use_analysis.m"
      }
#line 602 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 602 "var_use_analysis.m"
  }
#line 1482 "var_use_analysis.m"
}

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(
#line 1257 "var_use_analysis.m"
  MR_Word var_use_analysis__GoalPathStep_4,
#line 1257 "var_use_analysis.m"
  MR_Word var_use_analysis__LambdaHeadVar__1_13,
#line 1257 "var_use_analysis.m"
  MR_Word * var_use_analysis__LambdaHeadVar__2_14)
#line 1257 "var_use_analysis.m"
{
#line 1257 "var_use_analysis.m"
  {
#line 1257 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
    MR_Word var_use_analysis__GP0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__LambdaHeadVar__1_13, (MR_Integer) 0)));
#line 1257 "var_use_analysis.m"
    MR_Float var_use_analysis__Coverage_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__LambdaHeadVar__1_13, (MR_Integer) 1)));
#line 1257 "var_use_analysis.m"
    MR_Word var_use_analysis__GP_17;
#line 1257 "var_use_analysis.m"
    MR_Word var_use_analysis__V_19_19;

#line 1258 "var_use_analysis.m"
    var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__GP0_15)) == (MR_mktag((MR_Integer) 1)));
#line 1258 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1258 "var_use_analysis.m"
      {
#line 1258 "var_use_analysis.m"
        var_use_analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__GP0_15, (MR_Integer) 0)));
#line 1258 "var_use_analysis.m"
        var_use_analysis__GP_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__GP0_15, (MR_Integer) 1)));
#line 1258 "var_use_analysis.m"
        {
#line 1258 "var_use_analysis.m"
          var_use_analysis__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(var_use_analysis__GoalPathStep_4, var_use_analysis__V_19_19);
        }
#line 1257 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 1257 "var_use_analysis.m"
          {
#line 1257 "var_use_analysis.m"
            {
#line 1257 "var_use_analysis.m"
              MR_Word base;
#line 1257 "var_use_analysis.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "var_use_analysis.m"
              *var_use_analysis__LambdaHeadVar__2_14 = base;
#line 1257 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__GP_17));
#line 1257 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__Coverage_16);
#line 1257 "var_use_analysis.m"
            }
#line 1257 "var_use_analysis.m"
            var_use_analysis__succeeded = MR_TRUE;
#line 1257 "var_use_analysis.m"
          }
#line 1258 "var_use_analysis.m"
      }
#line 1257 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
  }
#line 1257 "var_use_analysis.m"
}

#line 1247 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1247__1_2_p_0(
#line 1247 "var_use_analysis.m"
  MR_Word var_use_analysis__LambdaHeadVar__1_11,
#line 1247 "var_use_analysis.m"
  MR_Word * var_use_analysis__LambdaHeadVar__2_12)
#line 1247 "var_use_analysis.m"
{
#line 1247 "var_use_analysis.m"
  {
#line 1247 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1247 "var_use_analysis.m"
    MR_Word var_use_analysis__RevGoalPath_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__LambdaHeadVar__1_11, (MR_Integer) 0)));
#line 1247 "var_use_analysis.m"
    MR_Word var_use_analysis__Cost_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__LambdaHeadVar__1_11, (MR_Integer) 1)));
#line 1247 "var_use_analysis.m"
    MR_Word var_use_analysis__GoalPath_15;
#line 1247 "var_use_analysis.m"
    MR_Float var_use_analysis__Calls_16;

#line 1249 "var_use_analysis.m"
    {
#line 1249 "var_use_analysis.m"
      var_use_analysis__Calls_16 = measurements__cs_cost_get_calls_1_f_0(var_use_analysis__Cost_14);
    }
#line 1250 "var_use_analysis.m"
    {
#line 1250 "var_use_analysis.m"
      mdbcomp__goal_path__rgp_to_fgp_2_p_0(var_use_analysis__RevGoalPath_13, &var_use_analysis__GoalPath_15);
    }
#line 1248 "var_use_analysis.m"
    {
#line 1248 "var_use_analysis.m"
      MR_Word base;
#line 1248 "var_use_analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1248 "var_use_analysis.m"
      *var_use_analysis__LambdaHeadVar__2_12 = base;
#line 1248 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__GoalPath_15));
#line 1248 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__Calls_16);
#line 1248 "var_use_analysis.m"
    }
#line 1247 "var_use_analysis.m"
  }
#line 1247 "var_use_analysis.m"
}

#line 1119 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__switch_var_first_use__1119__1_2_p_0(
#line 1119 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_25,
#line 1119 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_50)
#line 1119 "var_use_analysis.m"
{
#line 602 "var_use_analysis.m"
  {
#line 602 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 602 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_61 = (MR_Integer) var_use_analysis__HeadVar__1_25;
#line 602 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_62 = (MR_Integer) var_use_analysis__HeadVar__2_50;

#line 602 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_61 == var_use_analysis__CastY_62);
#line 602 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 602 "var_use_analysis.m"
      var_use_analysis__succeeded = MR_TRUE;
#line 602 "var_use_analysis.m"
    else
#line 602 "var_use_analysis.m"
      {
#line 602 "var_use_analysis.m"
        MR_Integer var_use_analysis__CastX_57 = (MR_Integer) var_use_analysis__HeadVar__1_25;
#line 602 "var_use_analysis.m"
        MR_Integer var_use_analysis__CastY_58 = (MR_Integer) var_use_analysis__HeadVar__2_50;

#line 602 "var_use_analysis.m"
        var_use_analysis__succeeded = (var_use_analysis__CastY_58 == var_use_analysis__CastX_57);
#line 602 "var_use_analysis.m"
      }
#line 602 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 602 "var_use_analysis.m"
  }
#line 1119 "var_use_analysis.m"
}

#line 169 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__average_var_use__169__1_2_p_0(
#line 169 "var_use_analysis.m"
  MR_Word var_use_analysis__Type_6,
#line 169 "var_use_analysis.m"
  MR_Word var_use_analysis__LambdaHeadVar__1_22)
#line 169 "var_use_analysis.m"
{
#line 169 "var_use_analysis.m"
  {
#line 169 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 169 "var_use_analysis.m"
    MR_Word var_use_analysis__TypeI_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__LambdaHeadVar__1_22, (MR_Integer) 2)));
#line 170 "var_use_analysis.m"
    MR_Float var_use_analysis__V_29_29 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__LambdaHeadVar__1_22, (MR_Integer) 0)));
#line 170 "var_use_analysis.m"
    MR_Float var_use_analysis__V_30_30 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__LambdaHeadVar__1_22, (MR_Integer) 1)));

#line 171 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__Type_6 == var_use_analysis__TypeI_33);
#line 169 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 169 "var_use_analysis.m"
  }
#line 169 "var_use_analysis.m"
}

#line 58 "var_use_analysis.m"
void MR_CALL 
var_use_analysis____Compare____var_use_type_0_0(
#line 58 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 58 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 58 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3)
#line 58 "var_use_analysis.m"
{
#line 58 "var_use_analysis.m"
  {
#line 58 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 58 "var_use_analysis.m"
    MR_Integer var_use_analysis__Cast_HeadVar1_4 = (MR_Integer) var_use_analysis__HeadVar__2_2;
#line 58 "var_use_analysis.m"
    MR_Integer var_use_analysis__Cast_HeadVar2_5 = (MR_Integer) var_use_analysis__HeadVar__3_3;

#line 58 "var_use_analysis.m"
    {
#line 58 "var_use_analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__Cast_HeadVar1_4, var_use_analysis__Cast_HeadVar2_5);
#line 58 "var_use_analysis.m"
      return;
    }
#line 58 "var_use_analysis.m"
  }
#line 58 "var_use_analysis.m"
}

#line 58 "var_use_analysis.m"
MR_bool MR_CALL 
var_use_analysis____Unify____var_use_type_0_0(
#line 58 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_1,
#line 58 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2)
#line 58 "var_use_analysis.m"
{
#line 3992 "var_use_analysis.c"
  {
#line 3994 "var_use_analysis.c"
    MR_bool var_use_analysis__succeeded = (var_use_analysis__HeadVar__2_1 == var_use_analysis__HeadVar__2_2);

#line 3997 "var_use_analysis.c"
    return var_use_analysis__succeeded;
#line 3999 "var_use_analysis.c"
  }
#line 58 "var_use_analysis.m"
}

#line 47 "var_use_analysis.m"
void MR_CALL 
var_use_analysis____Compare____var_use_options_0_0(
#line 47 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 47 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 47 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3)
#line 47 "var_use_analysis.m"
{
#line 47 "var_use_analysis.m"
  {
#line 47 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 47 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_12 = (MR_Integer) var_use_analysis__HeadVar__2_2;
#line 47 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_13 = (MR_Integer) var_use_analysis__HeadVar__3_3;

#line 47 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_12 == var_use_analysis__CastY_13);
#line 47 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 4028 "var_use_analysis.c"
      *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "var_use_analysis.m"
    else
#line 47 "var_use_analysis.m"
      {
#line 47 "var_use_analysis.m"
        MR_Word var_use_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 47 "var_use_analysis.m"
        MR_Word var_use_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 47 "var_use_analysis.m"
        MR_Word var_use_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 47 "var_use_analysis.m"
        MR_Word var_use_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 47 "var_use_analysis.m"
        MR_Word var_use_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 47 "var_use_analysis.m"
        MR_Word var_use_analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 47 "var_use_analysis.m"
        MR_Word var_use_analysis__V_10_10;

#line 47 "var_use_analysis.m"
        {
#line 47 "var_use_analysis.m"
          profile____Compare____deep_0_0(&var_use_analysis__V_10_10, var_use_analysis__V_4_4, var_use_analysis__V_7_7);
        }
#line 4054 "var_use_analysis.c"
        var_use_analysis__succeeded = (var_use_analysis__V_10_10 == (MR_Integer) 0);
#line 47 "var_use_analysis.m"
        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 47 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 47 "var_use_analysis.m"
          *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_10_10;
#line 47 "var_use_analysis.m"
        else
#line 47 "var_use_analysis.m"
          {
#line 47 "var_use_analysis.m"
            MR_Word var_use_analysis__V_11_11;

#line 47 "var_use_analysis.m"
            {
#line 47 "var_use_analysis.m"
              var_use_analysis____Compare____intermodule_var_use_0_0(&var_use_analysis__V_11_11, var_use_analysis__V_5_5, var_use_analysis__V_8_8);
            }
#line 4074 "var_use_analysis.c"
            var_use_analysis__succeeded = (var_use_analysis__V_11_11 == (MR_Integer) 0);
#line 47 "var_use_analysis.m"
            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 47 "var_use_analysis.m"
            if (var_use_analysis__succeeded)
#line 47 "var_use_analysis.m"
              *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_11_11;
#line 47 "var_use_analysis.m"
            else
#line 47 "var_use_analysis.m"
              {
#line 47 "var_use_analysis.m"
                MR_Integer var_use_analysis__V_17_17 = (MR_Integer) var_use_analysis__V_6_6;
#line 47 "var_use_analysis.m"
                MR_Integer var_use_analysis__V_18_18 = (MR_Integer) var_use_analysis__V_9_9;

#line 47 "var_use_analysis.m"
                {
#line 47 "var_use_analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__V_17_17, var_use_analysis__V_18_18);
#line 47 "var_use_analysis.m"
                  return;
                }
#line 47 "var_use_analysis.m"
              }
#line 47 "var_use_analysis.m"
          }
#line 47 "var_use_analysis.m"
      }
#line 47 "var_use_analysis.m"
  }
#line 47 "var_use_analysis.m"
}

#line 47 "var_use_analysis.m"
MR_bool MR_CALL 
var_use_analysis____Unify____var_use_options_0_0(
#line 47 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 47 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2)
#line 47 "var_use_analysis.m"
{
#line 47 "var_use_analysis.m"
  {
#line 47 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 47 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_9 = (MR_Integer) var_use_analysis__HeadVar__1_1;
#line 47 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_10 = (MR_Integer) var_use_analysis__HeadVar__2_2;

#line 47 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_9 == var_use_analysis__CastY_10);
#line 47 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 47 "var_use_analysis.m"
      var_use_analysis__succeeded = MR_TRUE;
#line 47 "var_use_analysis.m"
    else
#line 47 "var_use_analysis.m"
      {
#line 47 "var_use_analysis.m"
        MR_Word var_use_analysis__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 47 "var_use_analysis.m"
        MR_Word var_use_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 47 "var_use_analysis.m"
        MR_Word var_use_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 47 "var_use_analysis.m"
        MR_Word var_use_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 47 "var_use_analysis.m"
        MR_Word var_use_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 47 "var_use_analysis.m"
        MR_Word var_use_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));

#line 4150 "var_use_analysis.c"
        {
#line 4152 "var_use_analysis.c"
          var_use_analysis__succeeded = profile____Unify____deep_0_0(var_use_analysis__V_3_3, var_use_analysis__V_6_6);
        }
#line 47 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 47 "var_use_analysis.m"
          {
#line 4159 "var_use_analysis.c"
            {
#line 4161 "var_use_analysis.c"
              var_use_analysis__succeeded = var_use_analysis____Unify____intermodule_var_use_0_0(var_use_analysis__V_4_4, var_use_analysis__V_7_7);
            }
#line 47 "var_use_analysis.m"
            if (var_use_analysis__succeeded)
#line 4166 "var_use_analysis.c"
              var_use_analysis__succeeded = (var_use_analysis__V_5_5 == var_use_analysis__V_8_8);
#line 47 "var_use_analysis.m"
          }
#line 47 "var_use_analysis.m"
      }
#line 47 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 47 "var_use_analysis.m"
  }
#line 47 "var_use_analysis.m"
}

#line 40 "var_use_analysis.m"
void MR_CALL 
var_use_analysis____Compare____var_use_info_0_0(
#line 40 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 40 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 40 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3)
#line 40 "var_use_analysis.m"
{
#line 40 "var_use_analysis.m"
  {
#line 40 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 40 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_12 = (MR_Integer) var_use_analysis__HeadVar__2_2;
#line 40 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_13 = (MR_Integer) var_use_analysis__HeadVar__3_3;

#line 40 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_12 == var_use_analysis__CastY_13);
#line 40 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 4203 "var_use_analysis.c"
      *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "var_use_analysis.m"
    else
#line 40 "var_use_analysis.m"
      {
#line 40 "var_use_analysis.m"
        MR_Float var_use_analysis__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "var_use_analysis.m"
        MR_Float var_use_analysis__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "var_use_analysis.m"
        MR_Word var_use_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 40 "var_use_analysis.m"
        MR_Float var_use_analysis__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 40 "var_use_analysis.m"
        MR_Float var_use_analysis__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 40 "var_use_analysis.m"
        MR_Word var_use_analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 40 "var_use_analysis.m"
        MR_Word var_use_analysis__V_10_10;

#line 40 "var_use_analysis.m"
        {
#line 40 "var_use_analysis.m"
          mercury__private_builtin__builtin_compare_float_3_p_0(&var_use_analysis__V_10_10, var_use_analysis__V_4_4, var_use_analysis__V_7_7);
        }
#line 4229 "var_use_analysis.c"
        var_use_analysis__succeeded = (var_use_analysis__V_10_10 == (MR_Integer) 0);
#line 40 "var_use_analysis.m"
        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 40 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 40 "var_use_analysis.m"
          *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_10_10;
#line 40 "var_use_analysis.m"
        else
#line 40 "var_use_analysis.m"
          {
#line 40 "var_use_analysis.m"
            MR_Word var_use_analysis__V_11_11;

#line 40 "var_use_analysis.m"
            {
#line 40 "var_use_analysis.m"
              mercury__private_builtin__builtin_compare_float_3_p_0(&var_use_analysis__V_11_11, var_use_analysis__V_5_5, var_use_analysis__V_8_8);
            }
#line 4249 "var_use_analysis.c"
            var_use_analysis__succeeded = (var_use_analysis__V_11_11 == (MR_Integer) 0);
#line 40 "var_use_analysis.m"
            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 40 "var_use_analysis.m"
            if (var_use_analysis__succeeded)
#line 40 "var_use_analysis.m"
              *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_11_11;
#line 40 "var_use_analysis.m"
            else
#line 40 "var_use_analysis.m"
              {
#line 40 "var_use_analysis.m"
                MR_Integer var_use_analysis__V_17_17 = (MR_Integer) var_use_analysis__V_6_6;
#line 40 "var_use_analysis.m"
                MR_Integer var_use_analysis__V_18_18 = (MR_Integer) var_use_analysis__V_9_9;

#line 40 "var_use_analysis.m"
                {
#line 40 "var_use_analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__V_17_17, var_use_analysis__V_18_18);
#line 40 "var_use_analysis.m"
                  return;
                }
#line 40 "var_use_analysis.m"
              }
#line 40 "var_use_analysis.m"
          }
#line 40 "var_use_analysis.m"
      }
#line 40 "var_use_analysis.m"
  }
#line 40 "var_use_analysis.m"
}

#line 40 "var_use_analysis.m"
MR_bool MR_CALL 
var_use_analysis____Unify____var_use_info_0_0(
#line 40 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 40 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2)
#line 40 "var_use_analysis.m"
{
#line 40 "var_use_analysis.m"
  {
#line 40 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 40 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_9 = (MR_Integer) var_use_analysis__HeadVar__1_1;
#line 40 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_10 = (MR_Integer) var_use_analysis__HeadVar__2_2;

#line 40 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_9 == var_use_analysis__CastY_10);
#line 40 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 40 "var_use_analysis.m"
      var_use_analysis__succeeded = MR_TRUE;
#line 40 "var_use_analysis.m"
    else
#line 40 "var_use_analysis.m"
      {
#line 40 "var_use_analysis.m"
        MR_Float var_use_analysis__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "var_use_analysis.m"
        MR_Float var_use_analysis__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 40 "var_use_analysis.m"
        MR_Word var_use_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 40 "var_use_analysis.m"
        MR_Float var_use_analysis__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "var_use_analysis.m"
        MR_Float var_use_analysis__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "var_use_analysis.m"
        MR_Word var_use_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));

#line 4325 "var_use_analysis.c"
        var_use_analysis__succeeded = (var_use_analysis__V_3_3 == var_use_analysis__V_6_6);
#line 40 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 40 "var_use_analysis.m"
          {
#line 4331 "var_use_analysis.c"
            var_use_analysis__succeeded = (var_use_analysis__V_4_4 == var_use_analysis__V_7_7);
#line 40 "var_use_analysis.m"
            if (var_use_analysis__succeeded)
#line 4335 "var_use_analysis.c"
              var_use_analysis__succeeded = (var_use_analysis__V_5_5 == var_use_analysis__V_8_8);
#line 40 "var_use_analysis.m"
          }
#line 40 "var_use_analysis.m"
      }
#line 40 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 40 "var_use_analysis.m"
  }
#line 40 "var_use_analysis.m"
}

#line 611 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis____Compare____var_first_use_static_info_0_0(
#line 611 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 611 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 611 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3)
#line 611 "var_use_analysis.m"
{
#line 611 "var_use_analysis.m"
  {
#line 611 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 611 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_36 = (MR_Integer) var_use_analysis__HeadVar__2_2;
#line 611 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_37 = (MR_Integer) var_use_analysis__HeadVar__3_3;

#line 611 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_36 == var_use_analysis__CastY_37);
#line 611 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 4372 "var_use_analysis.c"
      *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 611 "var_use_analysis.m"
    else
#line 611 "var_use_analysis.m"
      {
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 611 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 5)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 6)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 7)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 8)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 9)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 10)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 3)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 4)));
#line 611 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 5)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 6)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 7)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 8)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 9)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 10)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_26_26;
#line 611 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_49_49 = (MR_Integer) var_use_analysis__V_4_4;
#line 611 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_50_50 = (MR_Integer) var_use_analysis__V_15_15;

#line 611 "var_use_analysis.m"
        {
#line 611 "var_use_analysis.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&var_use_analysis__V_26_26, var_use_analysis__V_49_49, var_use_analysis__V_50_50);
        }
#line 4434 "var_use_analysis.c"
        var_use_analysis__succeeded = (var_use_analysis__V_26_26 == (MR_Integer) 0);
#line 611 "var_use_analysis.m"
        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 611 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
          *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_26_26;
#line 611 "var_use_analysis.m"
        else
#line 611 "var_use_analysis.m"
          {
#line 611 "var_use_analysis.m"
            MR_Word var_use_analysis__V_27_27;

#line 611 "var_use_analysis.m"
            {
#line 611 "var_use_analysis.m"
              mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_2[1], &var_use_analysis__V_27_27, ((MR_Box) (var_use_analysis__V_5_5)), ((MR_Box) (var_use_analysis__V_16_16)));
            }
#line 4454 "var_use_analysis.c"
            var_use_analysis__succeeded = (var_use_analysis__V_27_27 == (MR_Integer) 0);
#line 611 "var_use_analysis.m"
            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 611 "var_use_analysis.m"
            if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
              *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_27_27;
#line 611 "var_use_analysis.m"
            else
#line 611 "var_use_analysis.m"
              {
#line 611 "var_use_analysis.m"
                MR_Word var_use_analysis__V_28_28;

#line 611 "var_use_analysis.m"
                {
#line 611 "var_use_analysis.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_2[6], &var_use_analysis__V_28_28, ((MR_Box) (var_use_analysis__V_6_6)), ((MR_Box) (var_use_analysis__V_17_17)));
                }
#line 4474 "var_use_analysis.c"
                var_use_analysis__succeeded = (var_use_analysis__V_28_28 == (MR_Integer) 0);
#line 611 "var_use_analysis.m"
                var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 611 "var_use_analysis.m"
                if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
                  *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_28_28;
#line 611 "var_use_analysis.m"
                else
#line 611 "var_use_analysis.m"
                  {
#line 611 "var_use_analysis.m"
                    MR_Word var_use_analysis__V_29_29;

#line 611 "var_use_analysis.m"
                    {
#line 611 "var_use_analysis.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_2[5], &var_use_analysis__V_29_29, ((MR_Box) (var_use_analysis__V_7_7)), ((MR_Box) (var_use_analysis__V_18_18)));
                    }
#line 4494 "var_use_analysis.c"
                    var_use_analysis__succeeded = (var_use_analysis__V_29_29 == (MR_Integer) 0);
#line 611 "var_use_analysis.m"
                    var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 611 "var_use_analysis.m"
                    if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
                      *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_29_29;
#line 611 "var_use_analysis.m"
                    else
#line 611 "var_use_analysis.m"
                      {
#line 611 "var_use_analysis.m"
                        MR_Word var_use_analysis__V_30_30;

#line 611 "var_use_analysis.m"
                        {
#line 611 "var_use_analysis.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_1[3], &var_use_analysis__V_30_30, ((MR_Box) (var_use_analysis__V_8_8)), ((MR_Box) (var_use_analysis__V_19_19)));
                        }
#line 4514 "var_use_analysis.c"
                        var_use_analysis__succeeded = (var_use_analysis__V_30_30 == (MR_Integer) 0);
#line 611 "var_use_analysis.m"
                        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 611 "var_use_analysis.m"
                        if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
                          *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_30_30;
#line 611 "var_use_analysis.m"
                        else
#line 611 "var_use_analysis.m"
                          {
#line 611 "var_use_analysis.m"
                            MR_Word var_use_analysis__V_31_31;

#line 611 "var_use_analysis.m"
                            {
#line 611 "var_use_analysis.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&var_use_analysis__V_31_31, var_use_analysis__V_9_9, var_use_analysis__V_20_20);
                            }
#line 4534 "var_use_analysis.c"
                            var_use_analysis__succeeded = (var_use_analysis__V_31_31 == (MR_Integer) 0);
#line 611 "var_use_analysis.m"
                            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 611 "var_use_analysis.m"
                            if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
                              *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_31_31;
#line 611 "var_use_analysis.m"
                            else
#line 611 "var_use_analysis.m"
                              {
#line 611 "var_use_analysis.m"
                                MR_Word var_use_analysis__V_32_32;

#line 611 "var_use_analysis.m"
                                {
#line 611 "var_use_analysis.m"
                                  var_use_analysis____Compare____var_use_options_0_0(&var_use_analysis__V_32_32, var_use_analysis__V_10_10, var_use_analysis__V_21_21);
                                }
#line 4554 "var_use_analysis.c"
                                var_use_analysis__succeeded = (var_use_analysis__V_32_32 == (MR_Integer) 0);
#line 611 "var_use_analysis.m"
                                var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 611 "var_use_analysis.m"
                                if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
                                  *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_32_32;
#line 611 "var_use_analysis.m"
                                else
#line 611 "var_use_analysis.m"
                                  {
#line 611 "var_use_analysis.m"
                                    MR_Word var_use_analysis__V_33_33;

#line 611 "var_use_analysis.m"
                                    {
#line 611 "var_use_analysis.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_1[5], &var_use_analysis__V_33_33, ((MR_Box) (var_use_analysis__V_11_11)), ((MR_Box) (var_use_analysis__V_22_22)));
                                    }
#line 4574 "var_use_analysis.c"
                                    var_use_analysis__succeeded = (var_use_analysis__V_33_33 == (MR_Integer) 0);
#line 611 "var_use_analysis.m"
                                    var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 611 "var_use_analysis.m"
                                    if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
                                      *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_33_33;
#line 611 "var_use_analysis.m"
                                    else
#line 611 "var_use_analysis.m"
                                      {
#line 611 "var_use_analysis.m"
                                        MR_Word var_use_analysis__V_34_34;

#line 611 "var_use_analysis.m"
                                        {
#line 611 "var_use_analysis.m"
                                          report____Compare____recursion_type_0_0(&var_use_analysis__V_34_34, var_use_analysis__V_12_12, var_use_analysis__V_23_23);
                                        }
#line 4594 "var_use_analysis.c"
                                        var_use_analysis__succeeded = (var_use_analysis__V_34_34 == (MR_Integer) 0);
#line 611 "var_use_analysis.m"
                                        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 611 "var_use_analysis.m"
                                        if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
                                          *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_34_34;
#line 611 "var_use_analysis.m"
                                        else
#line 611 "var_use_analysis.m"
                                          {
#line 611 "var_use_analysis.m"
                                            MR_Word var_use_analysis__V_35_35;

#line 611 "var_use_analysis.m"
                                            {
#line 611 "var_use_analysis.m"
                                              measurements____Compare____recursion_depth_0_0(&var_use_analysis__V_35_35, var_use_analysis__V_13_13, var_use_analysis__V_24_24);
                                            }
#line 4614 "var_use_analysis.c"
                                            var_use_analysis__succeeded = (var_use_analysis__V_35_35 == (MR_Integer) 0);
#line 611 "var_use_analysis.m"
                                            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 611 "var_use_analysis.m"
                                            if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
                                              *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_35_35;
#line 611 "var_use_analysis.m"
                                            else
#line 611 "var_use_analysis.m"
                                              {
#line 611 "var_use_analysis.m"
                                                var_use_analysis____Compare____first_use_rec_info_0_0(var_use_analysis__HeadVar__1_1, var_use_analysis__V_14_14, var_use_analysis__V_25_25);
#line 611 "var_use_analysis.m"
                                                return;
                                              }
#line 611 "var_use_analysis.m"
                                          }
#line 611 "var_use_analysis.m"
                                      }
#line 611 "var_use_analysis.m"
                                  }
#line 611 "var_use_analysis.m"
                              }
#line 611 "var_use_analysis.m"
                          }
#line 611 "var_use_analysis.m"
                      }
#line 611 "var_use_analysis.m"
                  }
#line 611 "var_use_analysis.m"
              }
#line 611 "var_use_analysis.m"
          }
#line 611 "var_use_analysis.m"
      }
#line 611 "var_use_analysis.m"
  }
#line 611 "var_use_analysis.m"
}

#line 611 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis____Unify____var_first_use_static_info_0_0(
#line 611 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 611 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2)
#line 611 "var_use_analysis.m"
{
#line 611 "var_use_analysis.m"
  {
#line 611 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 611 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_25 = (MR_Integer) var_use_analysis__HeadVar__1_1;
#line 611 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_26 = (MR_Integer) var_use_analysis__HeadVar__2_2;

#line 611 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_25 == var_use_analysis__CastY_26);
#line 611 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
      var_use_analysis__succeeded = MR_TRUE;
#line 611 "var_use_analysis.m"
    else
#line 611 "var_use_analysis.m"
      {
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeInfo_28_28;
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeInfo_29_29;
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeInfo_30_30;
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeInfo_31_31;
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeInfo_32_32;
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 4)));
#line 611 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 5)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 6)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 7)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 8)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 9)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 10)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 611 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 5)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 6)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 7)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 8)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 9)));
#line 611 "var_use_analysis.m"
        MR_Word var_use_analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 10)));
#line 611 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_35_35 = (MR_Integer) var_use_analysis__V_3_3;
#line 611 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_36_36 = (MR_Integer) var_use_analysis__V_14_14;

#line 4743 "var_use_analysis.c"
        var_use_analysis__succeeded = (var_use_analysis__V_35_35 == var_use_analysis__V_36_36);
#line 611 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
          {
#line 4749 "var_use_analysis.c"
            var_use_analysis__TypeInfo_28_28 = (MR_Word) &var_use_analysis_scalar_common_2[1];
#line 4751 "var_use_analysis.c"
            {
#line 4753 "var_use_analysis.c"
              var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_28_28, ((MR_Box) (var_use_analysis__V_4_4)), ((MR_Box) (var_use_analysis__V_15_15)));
            }
#line 611 "var_use_analysis.m"
            if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
              {
#line 4760 "var_use_analysis.c"
                var_use_analysis__TypeInfo_29_29 = (MR_Word) &var_use_analysis_scalar_common_2[6];
#line 4762 "var_use_analysis.c"
                {
#line 4764 "var_use_analysis.c"
                  var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_29_29, ((MR_Box) (var_use_analysis__V_5_5)), ((MR_Box) (var_use_analysis__V_16_16)));
                }
#line 611 "var_use_analysis.m"
                if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
                  {
#line 4771 "var_use_analysis.c"
                    var_use_analysis__TypeInfo_30_30 = (MR_Word) &var_use_analysis_scalar_common_2[5];
#line 4773 "var_use_analysis.c"
                    {
#line 4775 "var_use_analysis.c"
                      var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_30_30, ((MR_Box) (var_use_analysis__V_6_6)), ((MR_Box) (var_use_analysis__V_17_17)));
                    }
#line 611 "var_use_analysis.m"
                    if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
                      {
#line 4782 "var_use_analysis.c"
                        var_use_analysis__TypeInfo_31_31 = (MR_Word) &var_use_analysis_scalar_common_1[3];
#line 4784 "var_use_analysis.c"
                        {
#line 4786 "var_use_analysis.c"
                          var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_31_31, ((MR_Box) (var_use_analysis__V_7_7)), ((MR_Box) (var_use_analysis__V_18_18)));
                        }
#line 611 "var_use_analysis.m"
                        if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
                          {
#line 4793 "var_use_analysis.c"
                            var_use_analysis__succeeded = (var_use_analysis__V_8_8 == var_use_analysis__V_19_19);
#line 611 "var_use_analysis.m"
                            if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
                              {
#line 4799 "var_use_analysis.c"
                                {
#line 4801 "var_use_analysis.c"
                                  var_use_analysis__succeeded = var_use_analysis____Unify____var_use_options_0_0(var_use_analysis__V_9_9, var_use_analysis__V_20_20);
                                }
#line 611 "var_use_analysis.m"
                                if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
                                  {
#line 4808 "var_use_analysis.c"
                                    var_use_analysis__TypeInfo_32_32 = (MR_Word) &var_use_analysis_scalar_common_1[5];
#line 4810 "var_use_analysis.c"
                                    {
#line 4812 "var_use_analysis.c"
                                      var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_32_32, ((MR_Box) (var_use_analysis__V_10_10)), ((MR_Box) (var_use_analysis__V_21_21)));
                                    }
#line 611 "var_use_analysis.m"
                                    if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
                                      {
#line 4819 "var_use_analysis.c"
                                        {
#line 4821 "var_use_analysis.c"
                                          var_use_analysis__succeeded = report____Unify____recursion_type_0_0(var_use_analysis__V_11_11, var_use_analysis__V_22_22);
                                        }
#line 611 "var_use_analysis.m"
                                        if (var_use_analysis__succeeded)
#line 611 "var_use_analysis.m"
                                          {
#line 4828 "var_use_analysis.c"
                                            {
#line 4830 "var_use_analysis.c"
                                              var_use_analysis__succeeded = measurements____Unify____recursion_depth_0_0(var_use_analysis__V_12_12, var_use_analysis__V_23_23);
                                            }
#line 611 "var_use_analysis.m"
                                            if (var_use_analysis__succeeded)
#line 4835 "var_use_analysis.c"
                                              {
#line 4837 "var_use_analysis.c"
                                                return var_use_analysis__succeeded = var_use_analysis____Unify____first_use_rec_info_0_0(var_use_analysis__V_13_13, var_use_analysis__V_24_24);
                                              }
#line 611 "var_use_analysis.m"
                                          }
#line 611 "var_use_analysis.m"
                                      }
#line 611 "var_use_analysis.m"
                                  }
#line 611 "var_use_analysis.m"
                              }
#line 611 "var_use_analysis.m"
                          }
#line 611 "var_use_analysis.m"
                      }
#line 611 "var_use_analysis.m"
                  }
#line 611 "var_use_analysis.m"
              }
#line 611 "var_use_analysis.m"
          }
#line 611 "var_use_analysis.m"
      }
#line 611 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 611 "var_use_analysis.m"
  }
#line 611 "var_use_analysis.m"
}

#line 661 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis____Compare____recursive_case_0_0(
#line 661 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 661 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 661 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3)
#line 661 "var_use_analysis.m"
{
#line 661 "var_use_analysis.m"
  {
#line 661 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 661 "var_use_analysis.m"
    MR_Integer var_use_analysis__Cast_HeadVar1_4 = (MR_Integer) var_use_analysis__HeadVar__2_2;
#line 661 "var_use_analysis.m"
    MR_Integer var_use_analysis__Cast_HeadVar2_5 = (MR_Integer) var_use_analysis__HeadVar__3_3;

#line 661 "var_use_analysis.m"
    {
#line 661 "var_use_analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__Cast_HeadVar1_4, var_use_analysis__Cast_HeadVar2_5);
#line 661 "var_use_analysis.m"
      return;
    }
#line 661 "var_use_analysis.m"
  }
#line 661 "var_use_analysis.m"
}

#line 661 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_case_0_0(
#line 661 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_1,
#line 661 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2)
#line 661 "var_use_analysis.m"
{
#line 4908 "var_use_analysis.c"
  {
#line 4910 "var_use_analysis.c"
    MR_bool var_use_analysis__succeeded = (var_use_analysis__HeadVar__2_1 == var_use_analysis__HeadVar__2_2);

#line 4913 "var_use_analysis.c"
    return var_use_analysis__succeeded;
#line 4915 "var_use_analysis.c"
  }
#line 661 "var_use_analysis.m"
}

#line 1238 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis____Compare____recursive_calls_list_0_0(
#line 1238 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 1238 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 1238 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3)
#line 1238 "var_use_analysis.m"
{
#line 1238 "var_use_analysis.m"
  {
#line 1238 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1238 "var_use_analysis.m"
    MR_Word var_use_analysis__Cast_HeadVar1_4 = var_use_analysis__HeadVar__2_2;
#line 1238 "var_use_analysis.m"
    MR_Word var_use_analysis__Cast_HeadVar2_5 = var_use_analysis__HeadVar__3_3;

#line 1238 "var_use_analysis.m"
    {
#line 1238 "var_use_analysis.m"
      mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_1[4], var_use_analysis__HeadVar__1_1, ((MR_Box) (var_use_analysis__Cast_HeadVar1_4)), ((MR_Box) (var_use_analysis__Cast_HeadVar2_5)));
#line 1238 "var_use_analysis.m"
      return;
    }
#line 1238 "var_use_analysis.m"
  }
#line 1238 "var_use_analysis.m"
}

#line 1238 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_calls_list_0_0(
#line 1238 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 1238 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2)
#line 1238 "var_use_analysis.m"
{
#line 1238 "var_use_analysis.m"
  {
#line 1238 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1238 "var_use_analysis.m"
    MR_Word var_use_analysis__Cast_HeadVar1_3 = var_use_analysis__HeadVar__1_1;
#line 1238 "var_use_analysis.m"
    MR_Word var_use_analysis__Cast_HeadVar2_4 = var_use_analysis__HeadVar__2_2;

#line 1238 "var_use_analysis.m"
    {
#line 1238 "var_use_analysis.m"
      return var_use_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &var_use_analysis_scalar_common_1[4], ((MR_Box) (var_use_analysis__Cast_HeadVar1_3)), ((MR_Box) (var_use_analysis__Cast_HeadVar2_4)));
    }
#line 1238 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1238 "var_use_analysis.m"
  }
#line 1238 "var_use_analysis.m"
}

#line 497 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0(
#line 497 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 497 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 497 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3)
#line 497 "var_use_analysis.m"
{
#line 497 "var_use_analysis.m"
  {
#line 497 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 497 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_42 = (MR_Integer) var_use_analysis__HeadVar__2_2;
#line 497 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_43 = (MR_Integer) var_use_analysis__HeadVar__3_3;

#line 497 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_42 == var_use_analysis__CastY_43);
#line 497 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 5006 "var_use_analysis.c"
      *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 497 "var_use_analysis.m"
    else
#line 497 "var_use_analysis.m"
    if (((MR_tag((MR_Word) var_use_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 497 "var_use_analysis.m"
      {
#line 497 "var_use_analysis.m"
        MR_String var_use_analysis__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));

#line 497 "var_use_analysis.m"
        if (((MR_tag((MR_Word) var_use_analysis__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 497 "var_use_analysis.m"
          {
#line 497 "var_use_analysis.m"
            MR_String var_use_analysis__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));

#line 497 "var_use_analysis.m"
            {
#line 497 "var_use_analysis.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__V_52_52, var_use_analysis__V_5_5);
#line 497 "var_use_analysis.m"
              return;
            }
#line 497 "var_use_analysis.m"
          }
#line 497 "var_use_analysis.m"
        else
#line 5035 "var_use_analysis.c"
          *var_use_analysis__HeadVar__1_1 = (MR_Integer) 1;
#line 497 "var_use_analysis.m"
      }
#line 497 "var_use_analysis.m"
    else
#line 497 "var_use_analysis.m"
      {
#line 497 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 6)));
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 5)));
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));

#line 497 "var_use_analysis.m"
        if (((MR_tag((MR_Word) var_use_analysis__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5060 "var_use_analysis.c"
          *var_use_analysis__HeadVar__1_1 = (MR_Integer) 2;
#line 497 "var_use_analysis.m"
        else
#line 497 "var_use_analysis.m"
          {
#line 497 "var_use_analysis.m"
            MR_Word var_use_analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 497 "var_use_analysis.m"
            MR_Word var_use_analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 497 "var_use_analysis.m"
            MR_Word var_use_analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 2)));
#line 497 "var_use_analysis.m"
            MR_Word var_use_analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 3)));
#line 497 "var_use_analysis.m"
            MR_Word var_use_analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 4)));
#line 497 "var_use_analysis.m"
            MR_Word var_use_analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 5)));
#line 497 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 6)));
#line 497 "var_use_analysis.m"
            MR_Word var_use_analysis__V_36_36;

#line 497 "var_use_analysis.m"
            {
#line 497 "var_use_analysis.m"
              mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_1[2], &var_use_analysis__V_36_36, ((MR_Box) (var_use_analysis__V_59_59)), ((MR_Box) (var_use_analysis__V_29_29)));
            }
#line 5088 "var_use_analysis.c"
            var_use_analysis__succeeded = (var_use_analysis__V_36_36 == (MR_Integer) 0);
#line 497 "var_use_analysis.m"
            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 497 "var_use_analysis.m"
            if (var_use_analysis__succeeded)
#line 497 "var_use_analysis.m"
              *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_36_36;
#line 497 "var_use_analysis.m"
            else
#line 497 "var_use_analysis.m"
              {
#line 497 "var_use_analysis.m"
                MR_Word var_use_analysis__V_37_37;
#line 497 "var_use_analysis.m"
                MR_Integer var_use_analysis__V_60_60 = (MR_Integer) var_use_analysis__V_58_58;
#line 497 "var_use_analysis.m"
                MR_Integer var_use_analysis__V_61_61 = (MR_Integer) var_use_analysis__V_30_30;

#line 497 "var_use_analysis.m"
                {
#line 497 "var_use_analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&var_use_analysis__V_37_37, var_use_analysis__V_60_60, var_use_analysis__V_61_61);
                }
#line 5112 "var_use_analysis.c"
                var_use_analysis__succeeded = (var_use_analysis__V_37_37 == (MR_Integer) 0);
#line 497 "var_use_analysis.m"
                var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 497 "var_use_analysis.m"
                if (var_use_analysis__succeeded)
#line 497 "var_use_analysis.m"
                  *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_37_37;
#line 497 "var_use_analysis.m"
                else
#line 497 "var_use_analysis.m"
                  {
#line 497 "var_use_analysis.m"
                    MR_Word var_use_analysis__V_38_38;

#line 497 "var_use_analysis.m"
                    {
#line 497 "var_use_analysis.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_2[5], &var_use_analysis__V_38_38, ((MR_Box) (var_use_analysis__V_57_57)), ((MR_Box) (var_use_analysis__V_31_31)));
                    }
#line 5132 "var_use_analysis.c"
                    var_use_analysis__succeeded = (var_use_analysis__V_38_38 == (MR_Integer) 0);
#line 497 "var_use_analysis.m"
                    var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 497 "var_use_analysis.m"
                    if (var_use_analysis__succeeded)
#line 497 "var_use_analysis.m"
                      *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_38_38;
#line 497 "var_use_analysis.m"
                    else
#line 497 "var_use_analysis.m"
                      {
#line 497 "var_use_analysis.m"
                        MR_Word var_use_analysis__V_39_39;

#line 497 "var_use_analysis.m"
                        {
#line 497 "var_use_analysis.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_1[3], &var_use_analysis__V_39_39, ((MR_Box) (var_use_analysis__V_56_56)), ((MR_Box) (var_use_analysis__V_32_32)));
                        }
#line 5152 "var_use_analysis.c"
                        var_use_analysis__succeeded = (var_use_analysis__V_39_39 == (MR_Integer) 0);
#line 497 "var_use_analysis.m"
                        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 497 "var_use_analysis.m"
                        if (var_use_analysis__succeeded)
#line 497 "var_use_analysis.m"
                          *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_39_39;
#line 497 "var_use_analysis.m"
                        else
#line 497 "var_use_analysis.m"
                          {
#line 497 "var_use_analysis.m"
                            MR_Word var_use_analysis__V_40_40;

#line 497 "var_use_analysis.m"
                            {
#line 497 "var_use_analysis.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_2[1], &var_use_analysis__V_40_40, ((MR_Box) (var_use_analysis__V_55_55)), ((MR_Box) (var_use_analysis__V_33_33)));
                            }
#line 5172 "var_use_analysis.c"
                            var_use_analysis__succeeded = (var_use_analysis__V_40_40 == (MR_Integer) 0);
#line 497 "var_use_analysis.m"
                            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 497 "var_use_analysis.m"
                            if (var_use_analysis__succeeded)
#line 497 "var_use_analysis.m"
                              *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_40_40;
#line 497 "var_use_analysis.m"
                            else
#line 497 "var_use_analysis.m"
                              {
#line 497 "var_use_analysis.m"
                                MR_Word var_use_analysis__V_41_41;

#line 497 "var_use_analysis.m"
                                {
#line 497 "var_use_analysis.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_2[6], &var_use_analysis__V_41_41, ((MR_Box) (var_use_analysis__V_54_54)), ((MR_Box) (var_use_analysis__V_34_34)));
                                }
#line 5192 "var_use_analysis.c"
                                var_use_analysis__succeeded = (var_use_analysis__V_41_41 == (MR_Integer) 0);
#line 497 "var_use_analysis.m"
                                var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 497 "var_use_analysis.m"
                                if (var_use_analysis__succeeded)
#line 497 "var_use_analysis.m"
                                  *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_41_41;
#line 497 "var_use_analysis.m"
                                else
#line 497 "var_use_analysis.m"
                                  {
#line 497 "var_use_analysis.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__V_53_53, var_use_analysis__V_35_35);
#line 497 "var_use_analysis.m"
                                    return;
                                  }
#line 497 "var_use_analysis.m"
                              }
#line 497 "var_use_analysis.m"
                          }
#line 497 "var_use_analysis.m"
                      }
#line 497 "var_use_analysis.m"
                  }
#line 497 "var_use_analysis.m"
              }
#line 497 "var_use_analysis.m"
          }
#line 497 "var_use_analysis.m"
      }
#line 497 "var_use_analysis.m"
  }
#line 497 "var_use_analysis.m"
}

#line 497 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0(
#line 497 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 497 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2)
#line 497 "var_use_analysis.m"
{
#line 497 "var_use_analysis.m"
  {
#line 497 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 497 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_19 = (MR_Integer) var_use_analysis__HeadVar__1_1;
#line 497 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_20 = (MR_Integer) var_use_analysis__HeadVar__2_2;

#line 497 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_19 == var_use_analysis__CastY_20);
#line 497 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 497 "var_use_analysis.m"
      var_use_analysis__succeeded = MR_TRUE;
#line 497 "var_use_analysis.m"
    else
#line 497 "var_use_analysis.m"
    if (((MR_tag((MR_Word) var_use_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 497 "var_use_analysis.m"
      {
#line 497 "var_use_analysis.m"
        MR_String var_use_analysis__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 497 "var_use_analysis.m"
        MR_String var_use_analysis__V_4_4;

#line 497 "var_use_analysis.m"
        var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 497 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 497 "var_use_analysis.m"
          {
#line 497 "var_use_analysis.m"
            var_use_analysis__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 5271 "var_use_analysis.c"
            var_use_analysis__succeeded = (strcmp(var_use_analysis__V_3_3, var_use_analysis__V_4_4) == 0);
#line 497 "var_use_analysis.m"
          }
#line 497 "var_use_analysis.m"
      }
#line 497 "var_use_analysis.m"
    else
#line 497 "var_use_analysis.m"
      {
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeInfo_21_21;
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeInfo_23_23;
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeInfo_24_24;
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeInfo_25_25;
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeInfo_26_26;
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 4)));
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 5)));
#line 497 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 6)));
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_12_12;
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_13_13;
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_14_14;
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_15_15;
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_16_16;
#line 497 "var_use_analysis.m"
        MR_Word var_use_analysis__V_17_17;
#line 497 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_18_18;
#line 497 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_27_27;
#line 497 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_28_28;

#line 497 "var_use_analysis.m"
        var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 497 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 497 "var_use_analysis.m"
          {
#line 497 "var_use_analysis.m"
            var_use_analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 497 "var_use_analysis.m"
            var_use_analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 497 "var_use_analysis.m"
            var_use_analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 497 "var_use_analysis.m"
            var_use_analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 497 "var_use_analysis.m"
            var_use_analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 497 "var_use_analysis.m"
            var_use_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 5)));
#line 497 "var_use_analysis.m"
            var_use_analysis__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 6)));
#line 5344 "var_use_analysis.c"
            var_use_analysis__TypeInfo_21_21 = (MR_Word) &var_use_analysis_scalar_common_1[2];
#line 5346 "var_use_analysis.c"
            {
#line 5348 "var_use_analysis.c"
              var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_21_21, ((MR_Box) (var_use_analysis__V_5_5)), ((MR_Box) (var_use_analysis__V_12_12)));
            }
#line 497 "var_use_analysis.m"
            if (var_use_analysis__succeeded)
#line 497 "var_use_analysis.m"
              {
#line 5355 "var_use_analysis.c"
                var_use_analysis__V_27_27 = (MR_Integer) var_use_analysis__V_6_6;
#line 5357 "var_use_analysis.c"
                var_use_analysis__V_28_28 = (MR_Integer) var_use_analysis__V_13_13;
#line 5359 "var_use_analysis.c"
                var_use_analysis__succeeded = (var_use_analysis__V_27_27 == var_use_analysis__V_28_28);
#line 497 "var_use_analysis.m"
                if (var_use_analysis__succeeded)
#line 497 "var_use_analysis.m"
                  {
#line 5365 "var_use_analysis.c"
                    var_use_analysis__TypeInfo_23_23 = (MR_Word) &var_use_analysis_scalar_common_2[5];
#line 5367 "var_use_analysis.c"
                    {
#line 5369 "var_use_analysis.c"
                      var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_23_23, ((MR_Box) (var_use_analysis__V_7_7)), ((MR_Box) (var_use_analysis__V_14_14)));
                    }
#line 497 "var_use_analysis.m"
                    if (var_use_analysis__succeeded)
#line 497 "var_use_analysis.m"
                      {
#line 5376 "var_use_analysis.c"
                        var_use_analysis__TypeInfo_24_24 = (MR_Word) &var_use_analysis_scalar_common_1[3];
#line 5378 "var_use_analysis.c"
                        {
#line 5380 "var_use_analysis.c"
                          var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_24_24, ((MR_Box) (var_use_analysis__V_8_8)), ((MR_Box) (var_use_analysis__V_15_15)));
                        }
#line 497 "var_use_analysis.m"
                        if (var_use_analysis__succeeded)
#line 497 "var_use_analysis.m"
                          {
#line 5387 "var_use_analysis.c"
                            var_use_analysis__TypeInfo_25_25 = (MR_Word) &var_use_analysis_scalar_common_2[1];
#line 5389 "var_use_analysis.c"
                            {
#line 5391 "var_use_analysis.c"
                              var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_25_25, ((MR_Box) (var_use_analysis__V_9_9)), ((MR_Box) (var_use_analysis__V_16_16)));
                            }
#line 497 "var_use_analysis.m"
                            if (var_use_analysis__succeeded)
#line 497 "var_use_analysis.m"
                              {
#line 5398 "var_use_analysis.c"
                                var_use_analysis__TypeInfo_26_26 = (MR_Word) &var_use_analysis_scalar_common_2[6];
#line 5400 "var_use_analysis.c"
                                {
#line 5402 "var_use_analysis.c"
                                  var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_26_26, ((MR_Box) (var_use_analysis__V_10_10)), ((MR_Box) (var_use_analysis__V_17_17)));
                                }
#line 497 "var_use_analysis.m"
                                if (var_use_analysis__succeeded)
#line 5407 "var_use_analysis.c"
                                  var_use_analysis__succeeded = (var_use_analysis__V_11_11 == var_use_analysis__V_18_18);
#line 497 "var_use_analysis.m"
                              }
#line 497 "var_use_analysis.m"
                          }
#line 497 "var_use_analysis.m"
                      }
#line 497 "var_use_analysis.m"
                  }
#line 497 "var_use_analysis.m"
              }
#line 497 "var_use_analysis.m"
          }
#line 497 "var_use_analysis.m"
      }
#line 497 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 497 "var_use_analysis.m"
  }
#line 497 "var_use_analysis.m"
}

#line 54 "var_use_analysis.m"
void MR_CALL 
var_use_analysis____Compare____intermodule_var_use_0_0(
#line 54 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 54 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 54 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3)
#line 54 "var_use_analysis.m"
{
#line 54 "var_use_analysis.m"
  {
#line 54 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 54 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_8 = (MR_Integer) var_use_analysis__HeadVar__2_2;
#line 54 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_9 = (MR_Integer) var_use_analysis__HeadVar__3_3;

#line 54 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_8 == var_use_analysis__CastY_9);
#line 54 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 5454 "var_use_analysis.c"
      *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 54 "var_use_analysis.m"
    else
#line 54 "var_use_analysis.m"
    if ((var_use_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 54 "var_use_analysis.m"
      if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 54 "var_use_analysis.m"
        *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 54 "var_use_analysis.m"
      else
#line 5466 "var_use_analysis.c"
        *var_use_analysis__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "var_use_analysis.m"
    else
#line 54 "var_use_analysis.m"
      {
#line 54 "var_use_analysis.m"
        MR_String var_use_analysis__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));

#line 54 "var_use_analysis.m"
        if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5477 "var_use_analysis.c"
          *var_use_analysis__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "var_use_analysis.m"
        else
#line 54 "var_use_analysis.m"
          {
#line 54 "var_use_analysis.m"
            MR_String var_use_analysis__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));

#line 54 "var_use_analysis.m"
            {
#line 54 "var_use_analysis.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__V_11_11, var_use_analysis__V_5_5);
#line 54 "var_use_analysis.m"
              return;
            }
#line 54 "var_use_analysis.m"
          }
#line 54 "var_use_analysis.m"
      }
#line 54 "var_use_analysis.m"
  }
#line 54 "var_use_analysis.m"
}

#line 54 "var_use_analysis.m"
MR_bool MR_CALL 
var_use_analysis____Unify____intermodule_var_use_0_0(
#line 54 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 54 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2)
#line 54 "var_use_analysis.m"
{
#line 54 "var_use_analysis.m"
  {
#line 54 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 54 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_7 = (MR_Integer) var_use_analysis__HeadVar__1_1;
#line 54 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_8 = (MR_Integer) var_use_analysis__HeadVar__2_2;

#line 54 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_7 == var_use_analysis__CastY_8);
#line 54 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 54 "var_use_analysis.m"
      var_use_analysis__succeeded = MR_TRUE;
#line 54 "var_use_analysis.m"
    else
#line 54 "var_use_analysis.m"
    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 54 "var_use_analysis.m"
      {
#line 54 "var_use_analysis.m"
        MR_Integer var_use_analysis__CastX_5 = (MR_Integer) var_use_analysis__HeadVar__1_1;
#line 54 "var_use_analysis.m"
        MR_Integer var_use_analysis__CastY_6 = (MR_Integer) var_use_analysis__HeadVar__2_2;

#line 54 "var_use_analysis.m"
        var_use_analysis__succeeded = (var_use_analysis__CastY_6 == var_use_analysis__CastX_5);
#line 54 "var_use_analysis.m"
      }
#line 54 "var_use_analysis.m"
    else
#line 54 "var_use_analysis.m"
      {
#line 54 "var_use_analysis.m"
        MR_String var_use_analysis__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 54 "var_use_analysis.m"
        MR_String var_use_analysis__V_4_4;

#line 54 "var_use_analysis.m"
        var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 54 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 54 "var_use_analysis.m"
          {
#line 54 "var_use_analysis.m"
            var_use_analysis__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 5558 "var_use_analysis.c"
            var_use_analysis__succeeded = (strcmp(var_use_analysis__V_3_3, var_use_analysis__V_4_4) == 0);
#line 54 "var_use_analysis.m"
          }
#line 54 "var_use_analysis.m"
      }
#line 54 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 54 "var_use_analysis.m"
  }
#line 54 "var_use_analysis.m"
}

#line 602 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis____Compare____found_first_use_0_0(
#line 602 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 602 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 602 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3)
#line 602 "var_use_analysis.m"
{
#line 602 "var_use_analysis.m"
  {
#line 602 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 602 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_8 = (MR_Integer) var_use_analysis__HeadVar__2_2;
#line 602 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_9 = (MR_Integer) var_use_analysis__HeadVar__3_3;

#line 602 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_8 == var_use_analysis__CastY_9);
#line 602 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 5595 "var_use_analysis.c"
      *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 602 "var_use_analysis.m"
    else
#line 602 "var_use_analysis.m"
    if ((var_use_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 602 "var_use_analysis.m"
      if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 602 "var_use_analysis.m"
        *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 602 "var_use_analysis.m"
      else
#line 5607 "var_use_analysis.c"
        *var_use_analysis__HeadVar__1_1 = (MR_Integer) 1;
#line 602 "var_use_analysis.m"
    else
#line 602 "var_use_analysis.m"
      {
#line 602 "var_use_analysis.m"
        MR_Float var_use_analysis__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));

#line 602 "var_use_analysis.m"
        if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5618 "var_use_analysis.c"
          *var_use_analysis__HeadVar__1_1 = (MR_Integer) 2;
#line 602 "var_use_analysis.m"
        else
#line 602 "var_use_analysis.m"
          {
#line 602 "var_use_analysis.m"
            MR_Float var_use_analysis__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));

#line 602 "var_use_analysis.m"
            {
#line 602 "var_use_analysis.m"
              mercury__private_builtin__builtin_compare_float_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__V_11_11, var_use_analysis__V_7_7);
#line 602 "var_use_analysis.m"
              return;
            }
#line 602 "var_use_analysis.m"
          }
#line 602 "var_use_analysis.m"
      }
#line 602 "var_use_analysis.m"
  }
#line 602 "var_use_analysis.m"
}

#line 602 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis____Unify____found_first_use_0_0(
#line 602 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 602 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2)
#line 602 "var_use_analysis.m"
{
#line 602 "var_use_analysis.m"
  {
#line 602 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 602 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_7 = (MR_Integer) var_use_analysis__HeadVar__1_1;
#line 602 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_8 = (MR_Integer) var_use_analysis__HeadVar__2_2;

#line 602 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_7 == var_use_analysis__CastY_8);
#line 602 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 602 "var_use_analysis.m"
      var_use_analysis__succeeded = MR_TRUE;
#line 602 "var_use_analysis.m"
    else
#line 602 "var_use_analysis.m"
    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 602 "var_use_analysis.m"
      {
#line 602 "var_use_analysis.m"
        MR_Integer var_use_analysis__CastX_3 = (MR_Integer) var_use_analysis__HeadVar__1_1;
#line 602 "var_use_analysis.m"
        MR_Integer var_use_analysis__CastY_4 = (MR_Integer) var_use_analysis__HeadVar__2_2;

#line 602 "var_use_analysis.m"
        var_use_analysis__succeeded = (var_use_analysis__CastY_4 == var_use_analysis__CastX_3);
#line 602 "var_use_analysis.m"
      }
#line 602 "var_use_analysis.m"
    else
#line 602 "var_use_analysis.m"
      {
#line 602 "var_use_analysis.m"
        MR_Float var_use_analysis__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 602 "var_use_analysis.m"
        MR_Float var_use_analysis__V_6_6;

#line 602 "var_use_analysis.m"
        var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 602 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 602 "var_use_analysis.m"
          {
#line 602 "var_use_analysis.m"
            var_use_analysis__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 5699 "var_use_analysis.c"
            var_use_analysis__succeeded = (var_use_analysis__V_5_5 == var_use_analysis__V_6_6);
#line 602 "var_use_analysis.m"
          }
#line 602 "var_use_analysis.m"
      }
#line 602 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 602 "var_use_analysis.m"
  }
#line 602 "var_use_analysis.m"
}

#line 648 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis____Compare____first_use_rec_info_0_0(
#line 648 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__1_1,
#line 648 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 648 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3)
#line 648 "var_use_analysis.m"
{
#line 648 "var_use_analysis.m"
  {
#line 648 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 648 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_13 = (MR_Integer) var_use_analysis__HeadVar__2_2;
#line 648 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_14 = (MR_Integer) var_use_analysis__HeadVar__3_3;

#line 648 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_13 == var_use_analysis__CastY_14);
#line 648 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 5736 "var_use_analysis.c"
      *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 648 "var_use_analysis.m"
    else
#line 648 "var_use_analysis.m"
    if ((var_use_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 648 "var_use_analysis.m"
      if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 648 "var_use_analysis.m"
        *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 648 "var_use_analysis.m"
      else
#line 5748 "var_use_analysis.c"
        *var_use_analysis__HeadVar__1_1 = (MR_Integer) 2;
#line 648 "var_use_analysis.m"
    else
#line 648 "var_use_analysis.m"
      {
#line 648 "var_use_analysis.m"
        MR_Word var_use_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 648 "var_use_analysis.m"
        MR_Word var_use_analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));

#line 648 "var_use_analysis.m"
        if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5761 "var_use_analysis.c"
          *var_use_analysis__HeadVar__1_1 = (MR_Integer) 1;
#line 648 "var_use_analysis.m"
        else
#line 648 "var_use_analysis.m"
          {
#line 648 "var_use_analysis.m"
            MR_Word var_use_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 648 "var_use_analysis.m"
            MR_Word var_use_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 648 "var_use_analysis.m"
            MR_Word var_use_analysis__V_8_8;

#line 648 "var_use_analysis.m"
            {
#line 648 "var_use_analysis.m"
              mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_1[1], &var_use_analysis__V_8_8, ((MR_Box) (var_use_analysis__V_18_18)), ((MR_Box) (var_use_analysis__V_6_6)));
            }
#line 5779 "var_use_analysis.c"
            var_use_analysis__succeeded = (var_use_analysis__V_8_8 == (MR_Integer) 0);
#line 648 "var_use_analysis.m"
            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 648 "var_use_analysis.m"
            if (var_use_analysis__succeeded)
#line 648 "var_use_analysis.m"
              *var_use_analysis__HeadVar__1_1 = var_use_analysis__V_8_8;
#line 648 "var_use_analysis.m"
            else
#line 648 "var_use_analysis.m"
              {
#line 648 "var_use_analysis.m"
                MR_Integer var_use_analysis__V_19_19 = (MR_Integer) var_use_analysis__V_17_17;
#line 648 "var_use_analysis.m"
                MR_Integer var_use_analysis__V_20_20 = (MR_Integer) var_use_analysis__V_7_7;

#line 648 "var_use_analysis.m"
                {
#line 648 "var_use_analysis.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__V_19_19, var_use_analysis__V_20_20);
#line 648 "var_use_analysis.m"
                  return;
                }
#line 648 "var_use_analysis.m"
              }
#line 648 "var_use_analysis.m"
          }
#line 648 "var_use_analysis.m"
      }
#line 648 "var_use_analysis.m"
  }
#line 648 "var_use_analysis.m"
}

#line 648 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis____Unify____first_use_rec_info_0_0(
#line 648 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 648 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2)
#line 648 "var_use_analysis.m"
{
#line 648 "var_use_analysis.m"
  {
#line 648 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 648 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastX_9 = (MR_Integer) var_use_analysis__HeadVar__1_1;
#line 648 "var_use_analysis.m"
    MR_Integer var_use_analysis__CastY_10 = (MR_Integer) var_use_analysis__HeadVar__2_2;

#line 648 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__CastX_9 == var_use_analysis__CastY_10);
#line 648 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 648 "var_use_analysis.m"
      var_use_analysis__succeeded = MR_TRUE;
#line 648 "var_use_analysis.m"
    else
#line 648 "var_use_analysis.m"
    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 648 "var_use_analysis.m"
      {
#line 648 "var_use_analysis.m"
        MR_Integer var_use_analysis__CastX_7 = (MR_Integer) var_use_analysis__HeadVar__1_1;
#line 648 "var_use_analysis.m"
        MR_Integer var_use_analysis__CastY_8 = (MR_Integer) var_use_analysis__HeadVar__2_2;

#line 648 "var_use_analysis.m"
        var_use_analysis__succeeded = (var_use_analysis__CastY_8 == var_use_analysis__CastX_7);
#line 648 "var_use_analysis.m"
      }
#line 648 "var_use_analysis.m"
    else
#line 648 "var_use_analysis.m"
      {
#line 648 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeInfo_11_11;
#line 648 "var_use_analysis.m"
        MR_Word var_use_analysis__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 648 "var_use_analysis.m"
        MR_Word var_use_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 648 "var_use_analysis.m"
        MR_Word var_use_analysis__V_5_5;
#line 648 "var_use_analysis.m"
        MR_Word var_use_analysis__V_6_6;

#line 648 "var_use_analysis.m"
        var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 648 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 648 "var_use_analysis.m"
          {
#line 648 "var_use_analysis.m"
            var_use_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 648 "var_use_analysis.m"
            var_use_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 5878 "var_use_analysis.c"
            var_use_analysis__TypeInfo_11_11 = (MR_Word) &var_use_analysis_scalar_common_1[1];
#line 5880 "var_use_analysis.c"
            {
#line 5882 "var_use_analysis.c"
              var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_11_11, ((MR_Box) (var_use_analysis__V_3_3)), ((MR_Box) (var_use_analysis__V_5_5)));
            }
#line 648 "var_use_analysis.m"
            if (var_use_analysis__succeeded)
#line 5887 "var_use_analysis.c"
              var_use_analysis__succeeded = (var_use_analysis__V_4_4 == var_use_analysis__V_6_6);
#line 648 "var_use_analysis.m"
          }
#line 648 "var_use_analysis.m"
      }
#line 648 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 648 "var_use_analysis.m"
  }
#line 648 "var_use_analysis.m"
}

#line 1849 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__intermodule_var_use_should_follow_csd_2_p_0(
#line 1849 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_3,
#line 1849 "var_use_analysis.m"
  MR_Word var_use_analysis__CSDPtr_4)
#line 1849 "var_use_analysis.m"
{
#line 1852 "var_use_analysis.m"
  {
#line 1852 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1852 "var_use_analysis.m"
    MR_Word var_use_analysis__FollowCall_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_3, (MR_Integer) 1)));
#line 1852 "var_use_analysis.m"
    MR_Word var_use_analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_3, (MR_Integer) 0)));
#line 1853 "var_use_analysis.m"
    MR_Word var_use_analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_3, (MR_Integer) 2)));

#line 1860 "var_use_analysis.m"
    if ((var_use_analysis__FollowCall_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1861 "var_use_analysis.m"
      var_use_analysis__succeeded = MR_TRUE;
#line 1860 "var_use_analysis.m"
    else
#line 1855 "var_use_analysis.m"
      {
#line 1855 "var_use_analysis.m"
        MR_String var_use_analysis__Module_6 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__FollowCall_5, (MR_Integer) 0)));
#line 1855 "var_use_analysis.m"
        MR_Word var_use_analysis__CSD_8;
#line 1855 "var_use_analysis.m"
        MR_Word var_use_analysis__PDPtr_9;
#line 1855 "var_use_analysis.m"
        MR_Word var_use_analysis__PD_19;
#line 1855 "var_use_analysis.m"
        MR_Word var_use_analysis__PSPtr_20;
#line 1855 "var_use_analysis.m"
        MR_Word var_use_analysis__PS_21;
#line 1855 "var_use_analysis.m"
        MR_Word var_use_analysis__Label_22;
#line 1858 "var_use_analysis.m"
        MR_Word var_use_analysis__V_14_14;
#line 1858 "var_use_analysis.m"
        MR_Word var_use_analysis__V_15_15;
#line 1882 "var_use_analysis.m"
        MR_ArrayPtr var_use_analysis__V_33_33;
#line 1882 "var_use_analysis.m"
        MR_Word var_use_analysis__V_34_34;
#line 1884 "var_use_analysis.m"
        MR_String var_use_analysis__V_35_35;
#line 1884 "var_use_analysis.m"
        MR_String var_use_analysis__V_36_36;
#line 1884 "var_use_analysis.m"
        MR_String var_use_analysis__V_37_37;
#line 1884 "var_use_analysis.m"
        MR_String var_use_analysis__V_38_38;
#line 1884 "var_use_analysis.m"
        MR_String var_use_analysis__V_39_39;
#line 1884 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_40_40;
#line 1884 "var_use_analysis.m"
        MR_Word var_use_analysis__V_41_41;
#line 1884 "var_use_analysis.m"
        MR_ArrayPtr var_use_analysis__V_42_42;
#line 1884 "var_use_analysis.m"
        MR_ArrayPtr var_use_analysis__V_43_43;
#line 1884 "var_use_analysis.m"
        MR_Word var_use_analysis__V_44_44;
#line 1884 "var_use_analysis.m"
        MR_Word var_use_analysis__V_45_45;

#line 1857 "var_use_analysis.m"
        {
#line 1857 "var_use_analysis.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(var_use_analysis__V_10_10, var_use_analysis__CSDPtr_4, &var_use_analysis__CSD_8);
        }
#line 1858 "var_use_analysis.m"
        var_use_analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_8, (MR_Integer) 0)));
#line 1858 "var_use_analysis.m"
        var_use_analysis__PDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_8, (MR_Integer) 1)));
#line 1858 "var_use_analysis.m"
        var_use_analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_8, (MR_Integer) 2)));
#line 1881 "var_use_analysis.m"
        {
#line 1881 "var_use_analysis.m"
          profile__deep_lookup_proc_dynamics_3_p_0(var_use_analysis__V_10_10, var_use_analysis__PDPtr_9, &var_use_analysis__PD_19);
        }
#line 1882 "var_use_analysis.m"
        var_use_analysis__PSPtr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_19, (MR_Integer) 0)));
#line 1882 "var_use_analysis.m"
        var_use_analysis__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_19, (MR_Integer) 1)));
#line 1882 "var_use_analysis.m"
        var_use_analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_19, (MR_Integer) 2)));
#line 1883 "var_use_analysis.m"
        {
#line 1883 "var_use_analysis.m"
          profile__deep_lookup_proc_statics_3_p_0(var_use_analysis__V_10_10, var_use_analysis__PSPtr_20, &var_use_analysis__PS_21);
        }
#line 1884 "var_use_analysis.m"
        var_use_analysis__Label_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 0)));
#line 1884 "var_use_analysis.m"
        var_use_analysis__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 1)));
#line 1884 "var_use_analysis.m"
        var_use_analysis__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 2)));
#line 1884 "var_use_analysis.m"
        var_use_analysis__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 3)));
#line 1884 "var_use_analysis.m"
        var_use_analysis__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 4)));
#line 1884 "var_use_analysis.m"
        var_use_analysis__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 5)));
#line 1884 "var_use_analysis.m"
        var_use_analysis__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 6)));
#line 1884 "var_use_analysis.m"
        var_use_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 7)));
#line 1884 "var_use_analysis.m"
        var_use_analysis__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 8)));
#line 1884 "var_use_analysis.m"
        var_use_analysis__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 9)));
#line 1884 "var_use_analysis.m"
        var_use_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 10)));
#line 1884 "var_use_analysis.m"
        var_use_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 11)));
#line 1886 "var_use_analysis.m"
        if (((MR_tag((MR_Word) var_use_analysis__Label_22)) == (MR_mktag((MR_Integer) 0))))
#line 1885 "var_use_analysis.m"
          {
#line 1885 "var_use_analysis.m"
            MR_String var_use_analysis__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__Label_22, (MR_Integer) 2)));
#line 1885 "var_use_analysis.m"
            MR_Word var_use_analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Label_22, (MR_Integer) 0)));
#line 1885 "var_use_analysis.m"
            MR_String var_use_analysis__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__Label_22, (MR_Integer) 1)));
#line 1885 "var_use_analysis.m"
            MR_String var_use_analysis__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__Label_22, (MR_Integer) 3)));
#line 1885 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Label_22, (MR_Integer) 4)));
#line 1885 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Label_22, (MR_Integer) 5)));

#line 1885 "var_use_analysis.m"
            var_use_analysis__succeeded = (strcmp(var_use_analysis__Module_6, var_use_analysis__V_46_46) == 0);
#line 1885 "var_use_analysis.m"
          }
#line 1886 "var_use_analysis.m"
        else
#line 1886 "var_use_analysis.m"
          {
#line 1886 "var_use_analysis.m"
            MR_String var_use_analysis__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__Label_22, (MR_Integer) 2)));
#line 1886 "var_use_analysis.m"
            MR_String var_use_analysis__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__Label_22, (MR_Integer) 0)));
#line 1886 "var_use_analysis.m"
            MR_String var_use_analysis__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__Label_22, (MR_Integer) 1)));
#line 1886 "var_use_analysis.m"
            MR_String var_use_analysis__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__Label_22, (MR_Integer) 3)));
#line 1886 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__Label_22, (MR_Integer) 4)));
#line 1886 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__Label_22, (MR_Integer) 5)));

#line 1886 "var_use_analysis.m"
            var_use_analysis__succeeded = (strcmp(var_use_analysis__Module_6, var_use_analysis__V_47_47) == 0);
#line 1886 "var_use_analysis.m"
          }
#line 1855 "var_use_analysis.m"
      }
#line 1852 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1852 "var_use_analysis.m"
  }
#line 1849 "var_use_analysis.m"
}

#line 1789 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__goal_var_first_use_wrapper_13_p_0(
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__CliquePtr_14,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__CallStack_15,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__ContainingGoalMap_16,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__CoverageArray_17,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__CallSiteMap_18,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__RecursiveCallSiteMap_19,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__RT_20,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__CurDepth_21,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__Goal_22,
#line 1789 "var_use_analysis.m"
  MR_Float var_use_analysis__ProcCost_23,
#line 1789 "var_use_analysis.m"
  MR_Integer var_use_analysis__Var_24,
#line 1789 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_25,
#line 1789 "var_use_analysis.m"
  MR_Word * var_use_analysis__VarUseInfo_26)
#line 1789 "var_use_analysis.m"
{
#line 1799 "var_use_analysis.m"
  {
#line 1799 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1799 "var_use_analysis.m"
    MR_Word var_use_analysis__FoundFirstUse_28;
#line 1799 "var_use_analysis.m"
    MR_Word var_use_analysis__VarUseType_29;
#line 1799 "var_use_analysis.m"
    MR_Word var_use_analysis__V_31_31;
#line 1800 "var_use_analysis.m"
    MR_Float var_use_analysis___Cost_27;
#line 1805 "var_use_analysis.m"
    MR_Word var_use_analysis__V_34_34;
#line 1805 "var_use_analysis.m"
    MR_Word var_use_analysis__V_35_35;

#line 1801 "var_use_analysis.m"
    {
#line 1801 "var_use_analysis.m"
      var_use_analysis__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1801 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_31_31, 0) = ((MR_Box) (var_use_analysis__CliquePtr_14));
#line 1801 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_31_31, 1) = ((MR_Box) (var_use_analysis__CallSiteMap_18));
#line 1801 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_31_31, 2) = ((MR_Box) (var_use_analysis__RecursiveCallSiteMap_19));
#line 1801 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_31_31, 3) = ((MR_Box) (var_use_analysis__ContainingGoalMap_16));
#line 1801 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_31_31, 4) = ((MR_Box) (var_use_analysis__CoverageArray_17));
#line 1801 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_31_31, 5) = ((MR_Box) (var_use_analysis__Var_24));
#line 1801 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_31_31, 6) = ((MR_Box) (var_use_analysis__VarUseOptions_25));
#line 1801 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_31_31, 7) = ((MR_Box) (var_use_analysis__CallStack_15));
#line 1801 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_31_31, 8) = ((MR_Box) (var_use_analysis__RT_20));
#line 1801 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_31_31, 9) = ((MR_Box) (var_use_analysis__CurDepth_21));
#line 1801 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_31_31, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1801 "var_use_analysis.m"
    }
#line 1800 "var_use_analysis.m"
    {
#line 1800 "var_use_analysis.m"
      var_use_analysis__goal_var_first_use_6_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), var_use_analysis__Goal_22, var_use_analysis__V_31_31, (MR_Float) 0.0000000000000000, &var_use_analysis___Cost_27, &var_use_analysis__FoundFirstUse_28);
    }
#line 1805 "var_use_analysis.m"
    var_use_analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_25, (MR_Integer) 0)));
#line 1805 "var_use_analysis.m"
    var_use_analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_25, (MR_Integer) 1)));
#line 1805 "var_use_analysis.m"
    var_use_analysis__VarUseType_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_25, (MR_Integer) 2)));
#line 1825 "var_use_analysis.m"
    if ((var_use_analysis__FoundFirstUse_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1838 "var_use_analysis.m"
#line 1838 "var_use_analysis.m"
      switch (var_use_analysis__VarUseType_29) {
#line 1838 "var_use_analysis.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1838 "var_use_analysis.m"
        case (MR_Integer) 1:
#line 1840 "var_use_analysis.m"
          {
#line 1840 "var_use_analysis.m"
            MR_Word base;
#line 1840 "var_use_analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1840 "var_use_analysis.m"
            *var_use_analysis__VarUseInfo_26 = base;
#line 1840 "var_use_analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(var_use_analysis__ProcCost_23);
#line 1840 "var_use_analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__ProcCost_23);
#line 1840 "var_use_analysis.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (var_use_analysis__VarUseType_29));
#line 1840 "var_use_analysis.m"
          }
#line 1838 "var_use_analysis.m"
          break;
#line 1838 "var_use_analysis.m"
        case (MR_Integer) 2:
#line 208 "var_use_analysis.m"
          {
#line 208 "var_use_analysis.m"
            MR_Word base;
#line 208 "var_use_analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 208 "var_use_analysis.m"
            *var_use_analysis__VarUseInfo_26 = base;
#line 208 "var_use_analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(var_use_analysis__ProcCost_23);
#line 208 "var_use_analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__ProcCost_23);
#line 208 "var_use_analysis.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (var_use_analysis__VarUseType_29));
#line 208 "var_use_analysis.m"
          }
#line 1838 "var_use_analysis.m"
          break;
#line 1838 "var_use_analysis.m"
        case (MR_Integer) 0:
#line 1835 "var_use_analysis.m"
          {
#line 1836 "var_use_analysis.m"
            {
#line 1836 "var_use_analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.found_first_use_to_use_info\'/4", (MR_String) "goal did not produce a variable that it should have");
#line 1836 "var_use_analysis.m"
              return;
            }
#line 1835 "var_use_analysis.m"
          }
#line 1838 "var_use_analysis.m"
          break;
#line 1838 "var_use_analysis.m"
      }
#line 1825 "var_use_analysis.m"
    else
#line 1825 "var_use_analysis.m"
      {
#line 1825 "var_use_analysis.m"
        MR_Float var_use_analysis__CostUntilUse_40 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__FoundFirstUse_28, (MR_Integer) 0)));

#line 1826 "var_use_analysis.m"
        {
#line 1826 "var_use_analysis.m"
          MR_Word base;
#line 1826 "var_use_analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1826 "var_use_analysis.m"
          *var_use_analysis__VarUseInfo_26 = base;
#line 1826 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(var_use_analysis__CostUntilUse_40);
#line 1826 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__ProcCost_23);
#line 1826 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (var_use_analysis__VarUseType_29));
#line 1826 "var_use_analysis.m"
        }
#line 1825 "var_use_analysis.m"
      }
#line 1799 "var_use_analysis.m"
  }
#line 1789 "var_use_analysis.m"
}

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__ite_rec_prob_8_p_0_2(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 1257 "var_use_analysis.m"
{
#line 1257 "var_use_analysis.m"
  {
#line 1257 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1257 "var_use_analysis.m"
    MR_Word var_use_analysis__conv1_LambdaHeadVar__2_14;

#line 1257 "var_use_analysis.m"
    {
#line 1257 "var_use_analysis.m"
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv1_LambdaHeadVar__2_14);
    }
#line 1257 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1257 "var_use_analysis.m"
      {
#line 1257 "var_use_analysis.m"
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv1_LambdaHeadVar__2_14));
#line 1257 "var_use_analysis.m"
        var_use_analysis__succeeded = MR_TRUE;
#line 1257 "var_use_analysis.m"
      }
#line 1257 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
  }
#line 1257 "var_use_analysis.m"
}

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__ite_rec_prob_8_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 1257 "var_use_analysis.m"
{
#line 1257 "var_use_analysis.m"
  {
#line 1257 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1257 "var_use_analysis.m"
    MR_Word var_use_analysis__conv0_LambdaHeadVar__2_14;

#line 1257 "var_use_analysis.m"
    {
#line 1257 "var_use_analysis.m"
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_LambdaHeadVar__2_14);
    }
#line 1257 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1257 "var_use_analysis.m"
      {
#line 1257 "var_use_analysis.m"
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv0_LambdaHeadVar__2_14));
#line 1257 "var_use_analysis.m"
        var_use_analysis__succeeded = MR_TRUE;
#line 1257 "var_use_analysis.m"
      }
#line 1257 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
  }
#line 1257 "var_use_analysis.m"
}

#line 1764 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__ite_rec_prob_8_p_0(
#line 1764 "var_use_analysis.m"
  MR_Word var_use_analysis__Cond_9,
#line 1764 "var_use_analysis.m"
  MR_Word var_use_analysis__Then_10,
#line 1764 "var_use_analysis.m"
  MR_Word var_use_analysis__Else_11,
#line 1764 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_12,
#line 1764 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_13,
#line 1764 "var_use_analysis.m"
  MR_Float * var_use_analysis__Prob_14,
#line 1764 "var_use_analysis.m"
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_31,
#line 1764 "var_use_analysis.m"
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_32)
#line 1764 "var_use_analysis.m"
{
#line 1770 "var_use_analysis.m"
  {
#line 1770 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1770 "var_use_analysis.m"
    MR_Word var_use_analysis__TypeInfo_18_74 = (MR_Word) &var_use_analysis_scalar_common_2[4];
#line 1770 "var_use_analysis.m"
    MR_Word var_use_analysis__TypeInfo_18_91;
#line 1770 "var_use_analysis.m"
    MR_Word var_use_analysis__CondRecCalls_16;
#line 1770 "var_use_analysis.m"
    MR_Word var_use_analysis__ThenRecCalls_17;
#line 1770 "var_use_analysis.m"
    MR_Word var_use_analysis__ElseRecCalls_18;
#line 1770 "var_use_analysis.m"
    MR_Float var_use_analysis__CondProb_19;
#line 1770 "var_use_analysis.m"
    MR_Float var_use_analysis__ThenProb0_20;
#line 1770 "var_use_analysis.m"
    MR_Float var_use_analysis__ElseProb0_21;
#line 1770 "var_use_analysis.m"
    MR_Word var_use_analysis__CondId_22;
#line 1770 "var_use_analysis.m"
    MR_Word var_use_analysis__Coverage_23;
#line 1770 "var_use_analysis.m"
    MR_Integer var_use_analysis__Before_24;
#line 1770 "var_use_analysis.m"
    MR_Integer var_use_analysis__After_25;
#line 1770 "var_use_analysis.m"
    MR_Float var_use_analysis__ThenCallProb_26;
#line 1770 "var_use_analysis.m"
    MR_Float var_use_analysis__ElseCallProb_27;
#line 1770 "var_use_analysis.m"
    MR_Float var_use_analysis__ThenProb_28;
#line 1770 "var_use_analysis.m"
    MR_Float var_use_analysis__ElseProb_29;
#line 1770 "var_use_analysis.m"
    MR_Float var_use_analysis__ThenElseProb_30;
#line 1770 "var_use_analysis.m"
    MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_36_36;
#line 1770 "var_use_analysis.m"
    MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_37_37;
#line 1770 "var_use_analysis.m"
    MR_Word var_use_analysis__V_39_39;
#line 1770 "var_use_analysis.m"
    MR_Float var_use_analysis__V_40_40;
#line 1770 "var_use_analysis.m"
    MR_Float var_use_analysis__V_41_41;
#line 1770 "var_use_analysis.m"
    MR_Float var_use_analysis__V_42_42;
#line 1770 "var_use_analysis.m"
    MR_Float var_use_analysis__V_43_43;
#line 1770 "var_use_analysis.m"
    MR_Float var_use_analysis__V_44_44;
#line 1770 "var_use_analysis.m"
    MR_Integer var_use_analysis__V_45_45;
#line 1770 "var_use_analysis.m"
    MR_Float var_use_analysis__V_46_46;
#line 1777 "var_use_analysis.m"
    MR_Word var_use_analysis__V_47_47;
#line 1777 "var_use_analysis.m"
    MR_Word var_use_analysis__V_48_48;
#line 1778 "var_use_analysis.m"
    MR_Word var_use_analysis__V_49_49;
#line 1778 "var_use_analysis.m"
    MR_Word var_use_analysis__V_50_50;
#line 1778 "var_use_analysis.m"
    MR_Word var_use_analysis__V_51_51;
#line 1778 "var_use_analysis.m"
    MR_Word var_use_analysis__V_52_52;
#line 1778 "var_use_analysis.m"
    MR_Integer var_use_analysis__V_53_53;
#line 1778 "var_use_analysis.m"
    MR_Word var_use_analysis__V_54_54;
#line 1778 "var_use_analysis.m"
    MR_Word var_use_analysis__V_55_55;
#line 1778 "var_use_analysis.m"
    MR_Word var_use_analysis__V_56_56;
#line 1778 "var_use_analysis.m"
    MR_Word var_use_analysis__V_57_57;
#line 1778 "var_use_analysis.m"
    MR_Word var_use_analysis__V_58_58;
#line 1778 "var_use_analysis.m"
    MR_Box var_use_analysis__conv2_Coverage_23;

#line 1257 "var_use_analysis.m"
    {
#line 1257 "var_use_analysis.m"
      mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_74, var_use_analysis__TypeInfo_18_74, (MR_Word) &var_use_analysis_scalar_common_8[3], var_use_analysis__RecCalls_12, &var_use_analysis__CondRecCalls_16);
    }
#line 6451 "var_use_analysis.c"
    var_use_analysis__TypeInfo_18_91 = (MR_Word) &var_use_analysis_scalar_common_2[4];
#line 1257 "var_use_analysis.m"
    {
#line 1257 "var_use_analysis.m"
      mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_91, var_use_analysis__TypeInfo_18_91, (MR_Word) &var_use_analysis_scalar_common_8[4], var_use_analysis__RecCalls_12, &var_use_analysis__ThenRecCalls_17);
    }
#line 1773 "var_use_analysis.m"
    {
#line 1773 "var_use_analysis.m"
      var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), var_use_analysis__RecCalls_12, &var_use_analysis__ElseRecCalls_18);
    }
#line 1774 "var_use_analysis.m"
    {
#line 1774 "var_use_analysis.m"
      var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__Cond_9, var_use_analysis__CondRecCalls_16, var_use_analysis__Info_13, &var_use_analysis__CondProb_19, var_use_analysis__STATE_VARIABLE_ProbArray_0_31, &var_use_analysis__STATE_VARIABLE_ProbArray_36_36);
    }
#line 1775 "var_use_analysis.m"
    {
#line 1775 "var_use_analysis.m"
      var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__Then_10, var_use_analysis__ThenRecCalls_17, var_use_analysis__Info_13, &var_use_analysis__ThenProb0_20, var_use_analysis__STATE_VARIABLE_ProbArray_36_36, &var_use_analysis__STATE_VARIABLE_ProbArray_37_37);
    }
#line 1776 "var_use_analysis.m"
    {
#line 1776 "var_use_analysis.m"
      var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__Else_11, var_use_analysis__ElseRecCalls_18, var_use_analysis__Info_13, &var_use_analysis__ElseProb0_21, var_use_analysis__STATE_VARIABLE_ProbArray_37_37, var_use_analysis__STATE_VARIABLE_ProbArray_32);
    }
#line 1777 "var_use_analysis.m"
    var_use_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Cond_9, (MR_Integer) 0)));
#line 1777 "var_use_analysis.m"
    var_use_analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Cond_9, (MR_Integer) 1)));
#line 1777 "var_use_analysis.m"
    var_use_analysis__CondId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Cond_9, (MR_Integer) 2)));
#line 1778 "var_use_analysis.m"
    var_use_analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 0)));
#line 1778 "var_use_analysis.m"
    var_use_analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 1)));
#line 1778 "var_use_analysis.m"
    var_use_analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 2)));
#line 1778 "var_use_analysis.m"
    var_use_analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 3)));
#line 1778 "var_use_analysis.m"
    var_use_analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 4)));
#line 1778 "var_use_analysis.m"
    var_use_analysis__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 5)));
#line 1778 "var_use_analysis.m"
    var_use_analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 6)));
#line 1778 "var_use_analysis.m"
    var_use_analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 7)));
#line 1778 "var_use_analysis.m"
    var_use_analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 8)));
#line 1778 "var_use_analysis.m"
    var_use_analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 9)));
#line 1778 "var_use_analysis.m"
    var_use_analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 10)));
#line 1778 "var_use_analysis.m"
    {
#line 1778 "var_use_analysis.m"
      var_use_analysis__conv2_Coverage_23 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__V_39_39, var_use_analysis__CondId_22);
    }
#line 1778 "var_use_analysis.m"
    var_use_analysis__Coverage_23 = ((MR_Word) var_use_analysis__conv2_Coverage_23);
#line 1779 "var_use_analysis.m"
    {
#line 1779 "var_use_analysis.m"
      coverage__get_coverage_before_and_after_det_3_p_0(var_use_analysis__Coverage_23, &var_use_analysis__Before_24, &var_use_analysis__After_25);
    }
#line 1780 "var_use_analysis.m"
    {
#line 1780 "var_use_analysis.m"
      var_use_analysis__V_41_41 = mercury__float__float_1_f_0(var_use_analysis__After_25);
    }
#line 1780 "var_use_analysis.m"
    {
#line 1780 "var_use_analysis.m"
      var_use_analysis__V_42_42 = mercury__float__float_1_f_0(var_use_analysis__Before_24);
    }
#line 1780 "var_use_analysis.m"
    {
#line 1780 "var_use_analysis.m"
      var_use_analysis__V_40_40 = mercury__float__f_slash_2_f_0(var_use_analysis__V_41_41, var_use_analysis__V_42_42);
    }
#line 1780 "var_use_analysis.m"
    {
#line 1780 "var_use_analysis.m"
      var_use_analysis__ThenCallProb_26 = measurement_units__probable_1_f_0(var_use_analysis__V_40_40);
    }
#line 1781 "var_use_analysis.m"
    var_use_analysis__V_45_45 = (var_use_analysis__Before_24 - var_use_analysis__After_25);
#line 1781 "var_use_analysis.m"
    {
#line 1781 "var_use_analysis.m"
      var_use_analysis__V_44_44 = mercury__float__float_1_f_0(var_use_analysis__V_45_45);
    }
#line 1781 "var_use_analysis.m"
    {
#line 1781 "var_use_analysis.m"
      var_use_analysis__V_46_46 = mercury__float__float_1_f_0(var_use_analysis__Before_24);
    }
#line 1781 "var_use_analysis.m"
    {
#line 1781 "var_use_analysis.m"
      var_use_analysis__V_43_43 = mercury__float__f_slash_2_f_0(var_use_analysis__V_44_44, var_use_analysis__V_46_46);
    }
#line 1781 "var_use_analysis.m"
    {
#line 1781 "var_use_analysis.m"
      var_use_analysis__ElseCallProb_27 = measurement_units__probable_1_f_0(var_use_analysis__V_43_43);
    }
#line 1782 "var_use_analysis.m"
    {
#line 1782 "var_use_analysis.m"
      var_use_analysis__ThenProb_28 = measurement_units__and_2_f_0(var_use_analysis__ThenProb0_20, var_use_analysis__ThenCallProb_26);
    }
#line 1783 "var_use_analysis.m"
    {
#line 1783 "var_use_analysis.m"
      var_use_analysis__ElseProb_29 = measurement_units__and_2_f_0(var_use_analysis__ElseProb0_21, var_use_analysis__ElseCallProb_27);
    }
#line 1784 "var_use_analysis.m"
    {
#line 1784 "var_use_analysis.m"
      var_use_analysis__ThenElseProb_30 = measurement_units__or_2_f_0(var_use_analysis__ThenProb_28, var_use_analysis__ElseProb_29);
    }
#line 1785 "var_use_analysis.m"
    {
#line 1785 "var_use_analysis.m"
      *var_use_analysis__Prob_14 = measurement_units__or_2_f_0(var_use_analysis__CondProb_19, var_use_analysis__ThenElseProb_30);
    }
#line 1770 "var_use_analysis.m"
  }
#line 1764 "var_use_analysis.m"
}

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__switch_rec_prob_2_9_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 1257 "var_use_analysis.m"
{
#line 1257 "var_use_analysis.m"
  {
#line 1257 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1257 "var_use_analysis.m"
    MR_Word var_use_analysis__conv0_LambdaHeadVar__2_14;

#line 1257 "var_use_analysis.m"
    {
#line 1257 "var_use_analysis.m"
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_LambdaHeadVar__2_14);
    }
#line 1257 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1257 "var_use_analysis.m"
      {
#line 1257 "var_use_analysis.m"
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv0_LambdaHeadVar__2_14));
#line 1257 "var_use_analysis.m"
        var_use_analysis__succeeded = MR_TRUE;
#line 1257 "var_use_analysis.m"
      }
#line 1257 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
  }
#line 1257 "var_use_analysis.m"
}

#line 1739 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__switch_rec_prob_2_9_p_0(
#line 1739 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 1739 "var_use_analysis.m"
  MR_Integer var_use_analysis__CaseNum_2,
#line 1739 "var_use_analysis.m"
  MR_Integer var_use_analysis__TotalCalls_3,
#line 1739 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_4,
#line 1739 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_5,
#line 1739 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__6_6,
#line 1739 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__7_7,
#line 1739 "var_use_analysis.m"
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_8,
#line 1739 "var_use_analysis.m"
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_9)
#line 1739 "var_use_analysis.m"
{
#line 1745 "var_use_analysis.m"
  {
#line 1745 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;

#line 1745 "var_use_analysis.m"
    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1745 "var_use_analysis.m"
      {
#line 1745 "var_use_analysis.m"
        *var_use_analysis__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1745 "var_use_analysis.m"
        *var_use_analysis__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1745 "var_use_analysis.m"
        *var_use_analysis__STATE_VARIABLE_ProbArray_9 = var_use_analysis__STATE_VARIABLE_ProbArray_0_8;
#line 1745 "var_use_analysis.m"
      }
#line 1745 "var_use_analysis.m"
    else
#line 1747 "var_use_analysis.m"
      {
#line 1747 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeInfo_18_75;
#line 1747 "var_use_analysis.m"
        MR_Word var_use_analysis__Case_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 1747 "var_use_analysis.m"
        MR_Word var_use_analysis__Cases_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 1747 "var_use_analysis.m"
        MR_Word var_use_analysis__Probs0_26;
#line 1747 "var_use_analysis.m"
        MR_Word var_use_analysis__Weights0_27;
#line 1747 "var_use_analysis.m"
        MR_Word var_use_analysis__Goal_30;
#line 1747 "var_use_analysis.m"
        MR_Word var_use_analysis__CaseRecCalls_31;
#line 1747 "var_use_analysis.m"
        MR_Float var_use_analysis__Prob_32;
#line 1747 "var_use_analysis.m"
        MR_Word var_use_analysis__GoalId_35;
#line 1747 "var_use_analysis.m"
        MR_Word var_use_analysis__Coverage_36;
#line 1747 "var_use_analysis.m"
        MR_Integer var_use_analysis__Before_37;
#line 1747 "var_use_analysis.m"
        MR_Float var_use_analysis__Weight_38;
#line 1747 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_41_41 = (var_use_analysis__CaseNum_2 + (MR_Integer) 1);
#line 1747 "var_use_analysis.m"
        MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_42_42;
#line 1747 "var_use_analysis.m"
        MR_Word var_use_analysis__V_44_44;
#line 1747 "var_use_analysis.m"
        MR_Word var_use_analysis__V_47_47;
#line 1747 "var_use_analysis.m"
        MR_Float var_use_analysis__V_48_48;
#line 1747 "var_use_analysis.m"
        MR_Float var_use_analysis__V_49_49;
#line 1747 "var_use_analysis.m"
        MR_Word var_use_analysis__V_68_68;
#line 1751 "var_use_analysis.m"
        MR_Word var_use_analysis__V_28_28;
#line 1751 "var_use_analysis.m"
        MR_Word var_use_analysis__V_29_29;
#line 1756 "var_use_analysis.m"
        MR_Word var_use_analysis__V_33_33;
#line 1756 "var_use_analysis.m"
        MR_Word var_use_analysis__V_34_34;
#line 1757 "var_use_analysis.m"
        MR_Word var_use_analysis__V_50_50;
#line 1757 "var_use_analysis.m"
        MR_Word var_use_analysis__V_51_51;
#line 1757 "var_use_analysis.m"
        MR_Word var_use_analysis__V_52_52;
#line 1757 "var_use_analysis.m"
        MR_Word var_use_analysis__V_53_53;
#line 1757 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_54_54;
#line 1757 "var_use_analysis.m"
        MR_Word var_use_analysis__V_55_55;
#line 1757 "var_use_analysis.m"
        MR_Word var_use_analysis__V_56_56;
#line 1757 "var_use_analysis.m"
        MR_Word var_use_analysis__V_57_57;
#line 1757 "var_use_analysis.m"
        MR_Word var_use_analysis__V_58_58;
#line 1757 "var_use_analysis.m"
        MR_Word var_use_analysis__V_59_59;
#line 1757 "var_use_analysis.m"
        MR_Box var_use_analysis__conv1_Coverage_36;

#line 1748 "var_use_analysis.m"
        {
#line 1748 "var_use_analysis.m"
          var_use_analysis__switch_rec_prob_2_9_p_0(var_use_analysis__Cases_18, var_use_analysis__V_41_41, var_use_analysis__TotalCalls_3, var_use_analysis__RecCalls_4, var_use_analysis__Info_5, &var_use_analysis__Probs0_26, &var_use_analysis__Weights0_27, var_use_analysis__STATE_VARIABLE_ProbArray_0_8, &var_use_analysis__STATE_VARIABLE_ProbArray_42_42);
        }
#line 1751 "var_use_analysis.m"
        var_use_analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_17, (MR_Integer) 0)));
#line 1751 "var_use_analysis.m"
        var_use_analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_17, (MR_Integer) 1)));
#line 1751 "var_use_analysis.m"
        var_use_analysis__Goal_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_17, (MR_Integer) 2)));
#line 1753 "var_use_analysis.m"
        {
#line 1753 "var_use_analysis.m"
          var_use_analysis__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1753 "var_use_analysis.m"
          MR_hl_field(MR_mktag(3), var_use_analysis__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1753 "var_use_analysis.m"
          MR_hl_field(MR_mktag(3), var_use_analysis__V_44_44, 1) = ((MR_Box) (var_use_analysis__CaseNum_2));
#line 1753 "var_use_analysis.m"
          MR_hl_field(MR_mktag(3), var_use_analysis__V_44_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1753 "var_use_analysis.m"
        }
#line 1257 "var_use_analysis.m"
        {
#line 1257 "var_use_analysis.m"
          var_use_analysis__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_68_68, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_68_68, 1) = ((MR_Box) (var_use_analysis__switch_rec_prob_2_9_p_0_1));
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_68_68, 3) = ((MR_Box) (var_use_analysis__V_44_44));
#line 1257 "var_use_analysis.m"
        }
#line 6777 "var_use_analysis.c"
        var_use_analysis__TypeInfo_18_75 = (MR_Word) &var_use_analysis_scalar_common_2[4];
#line 1257 "var_use_analysis.m"
        {
#line 1257 "var_use_analysis.m"
          mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_75, var_use_analysis__TypeInfo_18_75, var_use_analysis__V_68_68, var_use_analysis__RecCalls_4, &var_use_analysis__CaseRecCalls_31);
        }
#line 1755 "var_use_analysis.m"
        {
#line 1755 "var_use_analysis.m"
          var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__Goal_30, var_use_analysis__CaseRecCalls_31, var_use_analysis__Info_5, &var_use_analysis__Prob_32, var_use_analysis__STATE_VARIABLE_ProbArray_42_42, var_use_analysis__STATE_VARIABLE_ProbArray_9);
        }
#line 1756 "var_use_analysis.m"
        var_use_analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_30, (MR_Integer) 0)));
#line 1756 "var_use_analysis.m"
        var_use_analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_30, (MR_Integer) 1)));
#line 1756 "var_use_analysis.m"
        var_use_analysis__GoalId_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_30, (MR_Integer) 2)));
#line 1757 "var_use_analysis.m"
        var_use_analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 0)));
#line 1757 "var_use_analysis.m"
        var_use_analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 1)));
#line 1757 "var_use_analysis.m"
        var_use_analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 2)));
#line 1757 "var_use_analysis.m"
        var_use_analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 3)));
#line 1757 "var_use_analysis.m"
        var_use_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 4)));
#line 1757 "var_use_analysis.m"
        var_use_analysis__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 5)));
#line 1757 "var_use_analysis.m"
        var_use_analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 6)));
#line 1757 "var_use_analysis.m"
        var_use_analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 7)));
#line 1757 "var_use_analysis.m"
        var_use_analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 8)));
#line 1757 "var_use_analysis.m"
        var_use_analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 9)));
#line 1757 "var_use_analysis.m"
        var_use_analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 10)));
#line 1757 "var_use_analysis.m"
        {
#line 1757 "var_use_analysis.m"
          var_use_analysis__conv1_Coverage_36 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__V_47_47, var_use_analysis__GoalId_35);
        }
#line 1757 "var_use_analysis.m"
        var_use_analysis__Coverage_36 = ((MR_Word) var_use_analysis__conv1_Coverage_36);
#line 1758 "var_use_analysis.m"
        {
#line 1758 "var_use_analysis.m"
          coverage__get_coverage_before_det_2_p_0(var_use_analysis__Coverage_36, &var_use_analysis__Before_37);
        }
#line 1759 "var_use_analysis.m"
        {
#line 1759 "var_use_analysis.m"
          var_use_analysis__V_48_48 = mercury__float__float_1_f_0(var_use_analysis__Before_37);
        }
#line 1759 "var_use_analysis.m"
        {
#line 1759 "var_use_analysis.m"
          var_use_analysis__V_49_49 = mercury__float__float_1_f_0(var_use_analysis__TotalCalls_3);
        }
#line 1759 "var_use_analysis.m"
        {
#line 1759 "var_use_analysis.m"
          var_use_analysis__Weight_38 = mercury__float__f_slash_2_f_0(var_use_analysis__V_48_48, var_use_analysis__V_49_49);
        }
#line 1761 "var_use_analysis.m"
        {
#line 1761 "var_use_analysis.m"
          MR_Word base;
#line 1761 "var_use_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1761 "var_use_analysis.m"
          *var_use_analysis__HeadVar__6_6 = base;
#line 1761 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Prob_32);
#line 1761 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__Probs0_26));
#line 1761 "var_use_analysis.m"
        }
#line 1762 "var_use_analysis.m"
        {
#line 1762 "var_use_analysis.m"
          MR_Word base;
#line 1762 "var_use_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1762 "var_use_analysis.m"
          *var_use_analysis__HeadVar__7_7 = base;
#line 1762 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Weight_38);
#line 1762 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__Weights0_27));
#line 1762 "var_use_analysis.m"
        }
#line 1747 "var_use_analysis.m"
      }
#line 1745 "var_use_analysis.m"
  }
#line 1739 "var_use_analysis.m"
}

#line 1736 "var_use_analysis.m"
static MR_Box MR_CALL 
var_use_analysis__switch_rec_prob_7_p_0_1(
#line 1736 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1736 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1)
#line 1736 "var_use_analysis.m"
{
#line 1736 "var_use_analysis.m"
  {
#line 1736 "var_use_analysis.m"
    MR_Box var_use_analysis__wrapper_arg_2;
#line 1736 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1736 "var_use_analysis.m"
    MR_Float var_use_analysis__conv0_HeadVar__2_2;

#line 1736 "var_use_analysis.m"
    {
#line 1736 "var_use_analysis.m"
      var_use_analysis__conv0_HeadVar__2_2 = measurement_units__probability_to_float_1_f_0(MR_unbox_float(var_use_analysis__wrapper_arg_1));
    }
#line 1736 "var_use_analysis.m"
    var_use_analysis__wrapper_arg_2 = MR_box_float(var_use_analysis__conv0_HeadVar__2_2);
#line 1736 "var_use_analysis.m"
    return var_use_analysis__wrapper_arg_2;
#line 1736 "var_use_analysis.m"
  }
#line 1736 "var_use_analysis.m"
}

#line 1728 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__switch_rec_prob_7_p_0(
#line 1728 "var_use_analysis.m"
  MR_Word var_use_analysis__Cases_8,
#line 1728 "var_use_analysis.m"
  MR_Integer var_use_analysis__TotalCalls_9,
#line 1728 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_10,
#line 1728 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_11,
#line 1728 "var_use_analysis.m"
  MR_Float * var_use_analysis__Prob_12,
#line 1728 "var_use_analysis.m"
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_17,
#line 1728 "var_use_analysis.m"
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_18)
#line 1728 "var_use_analysis.m"
{
#line 1733 "var_use_analysis.m"
  {
#line 1733 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1733 "var_use_analysis.m"
    MR_Word var_use_analysis__TypeCtorInfo_23_23;
#line 1733 "var_use_analysis.m"
    MR_Word var_use_analysis__Probs_14;
#line 1733 "var_use_analysis.m"
    MR_Word var_use_analysis__Weights_15;
#line 1733 "var_use_analysis.m"
    MR_Float var_use_analysis__ProbFloat_16;
#line 1733 "var_use_analysis.m"
    MR_Word var_use_analysis__V_21_21;

#line 1734 "var_use_analysis.m"
    {
#line 1734 "var_use_analysis.m"
      var_use_analysis__switch_rec_prob_2_9_p_0(var_use_analysis__Cases_8, (MR_Integer) 1, var_use_analysis__TotalCalls_9, var_use_analysis__RecCalls_10, var_use_analysis__Info_11, &var_use_analysis__Probs_14, &var_use_analysis__Weights_15, var_use_analysis__STATE_VARIABLE_ProbArray_0_17, var_use_analysis__STATE_VARIABLE_ProbArray_18);
    }
#line 6950 "var_use_analysis.c"
    var_use_analysis__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 1736 "var_use_analysis.m"
    {
#line 1736 "var_use_analysis.m"
      var_use_analysis__V_21_21 = mercury__list__map_2_f_0(var_use_analysis__TypeCtorInfo_23_23, var_use_analysis__TypeCtorInfo_23_23, (MR_Word) &var_use_analysis_scalar_common_2[11], var_use_analysis__Probs_14);
    }
#line 1736 "var_use_analysis.m"
    {
#line 1736 "var_use_analysis.m"
      measurements__weighted_average_3_p_0(var_use_analysis__Weights_15, var_use_analysis__V_21_21, &var_use_analysis__ProbFloat_16);
    }
#line 1737 "var_use_analysis.m"
    {
#line 1737 "var_use_analysis.m"
      *var_use_analysis__Prob_12 = measurement_units__probable_1_f_0(var_use_analysis__ProbFloat_16);
    }
#line 1733 "var_use_analysis.m"
  }
#line 1728 "var_use_analysis.m"
}

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__disj_rec_prob_7_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 1257 "var_use_analysis.m"
{
#line 1257 "var_use_analysis.m"
  {
#line 1257 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1257 "var_use_analysis.m"
    MR_Word var_use_analysis__conv1_LambdaHeadVar__2_14;

#line 1257 "var_use_analysis.m"
    {
#line 1257 "var_use_analysis.m"
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv1_LambdaHeadVar__2_14);
    }
#line 1257 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1257 "var_use_analysis.m"
      {
#line 1257 "var_use_analysis.m"
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv1_LambdaHeadVar__2_14));
#line 1257 "var_use_analysis.m"
        var_use_analysis__succeeded = MR_TRUE;
#line 1257 "var_use_analysis.m"
      }
#line 1257 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
  }
#line 1257 "var_use_analysis.m"
}

#line 1702 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__disj_rec_prob_7_p_0(
#line 1702 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 1702 "var_use_analysis.m"
  MR_Integer var_use_analysis__DisjNum_2,
#line 1702 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_3,
#line 1702 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_4,
#line 1702 "var_use_analysis.m"
  MR_Float * var_use_analysis__HeadVar__5_5,
#line 1702 "var_use_analysis.m"
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_6,
#line 1702 "var_use_analysis.m"
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_7)
#line 1702 "var_use_analysis.m"
{
#line 1707 "var_use_analysis.m"
  {
#line 1707 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;

#line 1707 "var_use_analysis.m"
    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1707 "var_use_analysis.m"
      {
#line 1707 "var_use_analysis.m"
        {
#line 1707 "var_use_analysis.m"
          *var_use_analysis__HeadVar__5_5 = measurement_units__impossible_0_f_0();
        }
#line 1707 "var_use_analysis.m"
        *var_use_analysis__STATE_VARIABLE_ProbArray_7 = var_use_analysis__STATE_VARIABLE_ProbArray_0_6;
#line 1707 "var_use_analysis.m"
      }
#line 1707 "var_use_analysis.m"
    else
#line 1708 "var_use_analysis.m"
      {
#line 1708 "var_use_analysis.m"
        MR_Word var_use_analysis__Disj_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 1708 "var_use_analysis.m"
        MR_Word var_use_analysis__Disjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 1708 "var_use_analysis.m"
        MR_Word var_use_analysis__DisjId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_14, (MR_Integer) 2)));
#line 1708 "var_use_analysis.m"
        MR_Word var_use_analysis__Coverage_22;
#line 1708 "var_use_analysis.m"
        MR_Integer var_use_analysis__Before_23;
#line 1708 "var_use_analysis.m"
        MR_Integer var_use_analysis__After_24;
#line 1708 "var_use_analysis.m"
        MR_Word var_use_analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 4)));
#line 1709 "var_use_analysis.m"
        MR_Word var_use_analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_14, (MR_Integer) 0)));
#line 1709 "var_use_analysis.m"
        MR_Word var_use_analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_14, (MR_Integer) 1)));
#line 1710 "var_use_analysis.m"
        MR_Word var_use_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 0)));
#line 1710 "var_use_analysis.m"
        MR_Word var_use_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 1)));
#line 1710 "var_use_analysis.m"
        MR_Word var_use_analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 2)));
#line 1710 "var_use_analysis.m"
        MR_Word var_use_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 3)));
#line 1710 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 5)));
#line 1710 "var_use_analysis.m"
        MR_Word var_use_analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 6)));
#line 1710 "var_use_analysis.m"
        MR_Word var_use_analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 7)));
#line 1710 "var_use_analysis.m"
        MR_Word var_use_analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 8)));
#line 1710 "var_use_analysis.m"
        MR_Word var_use_analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 9)));
#line 1710 "var_use_analysis.m"
        MR_Word var_use_analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 10)));
#line 1710 "var_use_analysis.m"
        MR_Box var_use_analysis__conv0_Coverage_22;

#line 1710 "var_use_analysis.m"
        {
#line 1710 "var_use_analysis.m"
          var_use_analysis__conv0_Coverage_22 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__V_32_32, var_use_analysis__DisjId_21);
        }
#line 1710 "var_use_analysis.m"
        var_use_analysis__Coverage_22 = ((MR_Word) var_use_analysis__conv0_Coverage_22);
#line 1711 "var_use_analysis.m"
        {
#line 1711 "var_use_analysis.m"
          coverage__get_coverage_before_and_after_det_3_p_0(var_use_analysis__Coverage_22, &var_use_analysis__Before_23, &var_use_analysis__After_24);
        }
#line 1712 "var_use_analysis.m"
        var_use_analysis__succeeded = (var_use_analysis__Before_23 == (MR_Integer) 0);
#line 1715 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 1714 "var_use_analysis.m"
          {
#line 1714 "var_use_analysis.m"
            {
#line 1714 "var_use_analysis.m"
              *var_use_analysis__HeadVar__5_5 = measurement_units__impossible_0_f_0();
            }
#line 1714 "var_use_analysis.m"
            *var_use_analysis__STATE_VARIABLE_ProbArray_7 = var_use_analysis__STATE_VARIABLE_ProbArray_0_6;
#line 1714 "var_use_analysis.m"
          }
#line 1715 "var_use_analysis.m"
        else
#line 1717 "var_use_analysis.m"
          {
#line 1717 "var_use_analysis.m"
            MR_Word var_use_analysis__TypeInfo_18_69;
#line 1717 "var_use_analysis.m"
            MR_Float var_use_analysis__DisjsProb0_25;
#line 1717 "var_use_analysis.m"
            MR_Float var_use_analysis__FailureProb_26;
#line 1717 "var_use_analysis.m"
            MR_Float var_use_analysis__DisjsProb_27;
#line 1717 "var_use_analysis.m"
            MR_Word var_use_analysis__DisjRecCalls_28;
#line 1717 "var_use_analysis.m"
            MR_Float var_use_analysis__DisjProb_29;
#line 1717 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_33_33 = (var_use_analysis__DisjNum_2 + (MR_Integer) 1);
#line 1717 "var_use_analysis.m"
            MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_34_34;
#line 1717 "var_use_analysis.m"
            MR_Float var_use_analysis__V_36_36;
#line 1717 "var_use_analysis.m"
            MR_Float var_use_analysis__V_37_37;
#line 1717 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_38_38;
#line 1717 "var_use_analysis.m"
            MR_Float var_use_analysis__V_39_39;
#line 1717 "var_use_analysis.m"
            MR_Word var_use_analysis__V_40_40;
#line 1717 "var_use_analysis.m"
            MR_Word var_use_analysis__V_62_62;

#line 1716 "var_use_analysis.m"
            {
#line 1716 "var_use_analysis.m"
              var_use_analysis__disj_rec_prob_7_p_0(var_use_analysis__Disjs_15, var_use_analysis__V_33_33, var_use_analysis__RecCalls_3, var_use_analysis__Info_4, &var_use_analysis__DisjsProb0_25, var_use_analysis__STATE_VARIABLE_ProbArray_0_6, &var_use_analysis__STATE_VARIABLE_ProbArray_34_34);
            }
#line 1719 "var_use_analysis.m"
            var_use_analysis__V_38_38 = (var_use_analysis__Before_23 - var_use_analysis__After_24);
#line 1719 "var_use_analysis.m"
            {
#line 1719 "var_use_analysis.m"
              var_use_analysis__V_37_37 = mercury__float__float_1_f_0(var_use_analysis__V_38_38);
            }
#line 1719 "var_use_analysis.m"
            {
#line 1719 "var_use_analysis.m"
              var_use_analysis__V_39_39 = mercury__float__float_1_f_0(var_use_analysis__Before_23);
            }
#line 1719 "var_use_analysis.m"
            {
#line 1719 "var_use_analysis.m"
              var_use_analysis__V_36_36 = mercury__float__f_slash_2_f_0(var_use_analysis__V_37_37, var_use_analysis__V_39_39);
            }
#line 1719 "var_use_analysis.m"
            {
#line 1719 "var_use_analysis.m"
              var_use_analysis__FailureProb_26 = measurement_units__probable_1_f_0(var_use_analysis__V_36_36);
            }
#line 1720 "var_use_analysis.m"
            {
#line 1720 "var_use_analysis.m"
              var_use_analysis__DisjsProb_27 = measurement_units__and_2_f_0(var_use_analysis__FailureProb_26, var_use_analysis__DisjsProb0_25);
            }
#line 1722 "var_use_analysis.m"
            {
#line 1722 "var_use_analysis.m"
              var_use_analysis__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1722 "var_use_analysis.m"
              MR_hl_field(MR_mktag(2), var_use_analysis__V_40_40, 0) = ((MR_Box) (var_use_analysis__DisjNum_2));
#line 1722 "var_use_analysis.m"
            }
#line 1257 "var_use_analysis.m"
            {
#line 1257 "var_use_analysis.m"
              var_use_analysis__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_62_62, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
#line 1257 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_62_62, 1) = ((MR_Box) (var_use_analysis__disj_rec_prob_7_p_0_1));
#line 1257 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1257 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_62_62, 3) = ((MR_Box) (var_use_analysis__V_40_40));
#line 1257 "var_use_analysis.m"
            }
#line 7210 "var_use_analysis.c"
            var_use_analysis__TypeInfo_18_69 = (MR_Word) &var_use_analysis_scalar_common_2[4];
#line 1257 "var_use_analysis.m"
            {
#line 1257 "var_use_analysis.m"
              mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_69, var_use_analysis__TypeInfo_18_69, var_use_analysis__V_62_62, var_use_analysis__RecCalls_3, &var_use_analysis__DisjRecCalls_28);
            }
#line 1724 "var_use_analysis.m"
            {
#line 1724 "var_use_analysis.m"
              var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__Disj_14, var_use_analysis__DisjRecCalls_28, var_use_analysis__Info_4, &var_use_analysis__DisjProb_29, var_use_analysis__STATE_VARIABLE_ProbArray_34_34, var_use_analysis__STATE_VARIABLE_ProbArray_7);
            }
#line 1725 "var_use_analysis.m"
            {
#line 1725 "var_use_analysis.m"
              *var_use_analysis__HeadVar__5_5 = measurement_units__or_2_f_0(var_use_analysis__DisjProb_29, var_use_analysis__DisjsProb_27);
            }
#line 1717 "var_use_analysis.m"
          }
#line 1708 "var_use_analysis.m"
      }
#line 1707 "var_use_analysis.m"
  }
#line 1702 "var_use_analysis.m"
}

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__conj_rec_prob_7_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 1257 "var_use_analysis.m"
{
#line 1257 "var_use_analysis.m"
  {
#line 1257 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1257 "var_use_analysis.m"
    MR_Word var_use_analysis__conv1_LambdaHeadVar__2_14;

#line 1257 "var_use_analysis.m"
    {
#line 1257 "var_use_analysis.m"
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv1_LambdaHeadVar__2_14);
    }
#line 1257 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1257 "var_use_analysis.m"
      {
#line 1257 "var_use_analysis.m"
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv1_LambdaHeadVar__2_14));
#line 1257 "var_use_analysis.m"
        var_use_analysis__succeeded = MR_TRUE;
#line 1257 "var_use_analysis.m"
      }
#line 1257 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
  }
#line 1257 "var_use_analysis.m"
}

#line 1676 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__conj_rec_prob_7_p_0(
#line 1676 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 1676 "var_use_analysis.m"
  MR_Integer var_use_analysis__ConjNum_2,
#line 1676 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_3,
#line 1676 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_4,
#line 1676 "var_use_analysis.m"
  MR_Float * var_use_analysis__HeadVar__5_5,
#line 1676 "var_use_analysis.m"
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_6,
#line 1676 "var_use_analysis.m"
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_7)
#line 1676 "var_use_analysis.m"
{
#line 1681 "var_use_analysis.m"
  {
#line 1681 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;

#line 1681 "var_use_analysis.m"
    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1681 "var_use_analysis.m"
      {
#line 1681 "var_use_analysis.m"
        {
#line 1681 "var_use_analysis.m"
          *var_use_analysis__HeadVar__5_5 = measurement_units__impossible_0_f_0();
        }
#line 1681 "var_use_analysis.m"
        *var_use_analysis__STATE_VARIABLE_ProbArray_7 = var_use_analysis__STATE_VARIABLE_ProbArray_0_6;
#line 1681 "var_use_analysis.m"
      }
#line 1681 "var_use_analysis.m"
    else
#line 1682 "var_use_analysis.m"
      {
#line 1682 "var_use_analysis.m"
        MR_Word var_use_analysis__Conj_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 1682 "var_use_analysis.m"
        MR_Word var_use_analysis__Conjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 1682 "var_use_analysis.m"
        MR_Word var_use_analysis__ConjId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Conj_14, (MR_Integer) 2)));
#line 1682 "var_use_analysis.m"
        MR_Word var_use_analysis__Coverage_22;
#line 1682 "var_use_analysis.m"
        MR_Integer var_use_analysis__Before_23;
#line 1682 "var_use_analysis.m"
        MR_Integer var_use_analysis__After_24;
#line 1682 "var_use_analysis.m"
        MR_Word var_use_analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 4)));
#line 1683 "var_use_analysis.m"
        MR_Word var_use_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Conj_14, (MR_Integer) 0)));
#line 1683 "var_use_analysis.m"
        MR_Word var_use_analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Conj_14, (MR_Integer) 1)));
#line 1684 "var_use_analysis.m"
        MR_Word var_use_analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 0)));
#line 1684 "var_use_analysis.m"
        MR_Word var_use_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 1)));
#line 1684 "var_use_analysis.m"
        MR_Word var_use_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 2)));
#line 1684 "var_use_analysis.m"
        MR_Word var_use_analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 3)));
#line 1684 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 5)));
#line 1684 "var_use_analysis.m"
        MR_Word var_use_analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 6)));
#line 1684 "var_use_analysis.m"
        MR_Word var_use_analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 7)));
#line 1684 "var_use_analysis.m"
        MR_Word var_use_analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 8)));
#line 1684 "var_use_analysis.m"
        MR_Word var_use_analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 9)));
#line 1684 "var_use_analysis.m"
        MR_Word var_use_analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 10)));
#line 1684 "var_use_analysis.m"
        MR_Box var_use_analysis__conv0_Coverage_22;

#line 1684 "var_use_analysis.m"
        {
#line 1684 "var_use_analysis.m"
          var_use_analysis__conv0_Coverage_22 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__V_32_32, var_use_analysis__ConjId_21);
        }
#line 1684 "var_use_analysis.m"
        var_use_analysis__Coverage_22 = ((MR_Word) var_use_analysis__conv0_Coverage_22);
#line 1685 "var_use_analysis.m"
        {
#line 1685 "var_use_analysis.m"
          coverage__get_coverage_before_and_after_det_3_p_0(var_use_analysis__Coverage_22, &var_use_analysis__Before_23, &var_use_analysis__After_24);
        }
#line 1686 "var_use_analysis.m"
        var_use_analysis__succeeded = (var_use_analysis__Before_23 == (MR_Integer) 0);
#line 1690 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 1689 "var_use_analysis.m"
          {
#line 1689 "var_use_analysis.m"
            {
#line 1689 "var_use_analysis.m"
              *var_use_analysis__HeadVar__5_5 = measurement_units__impossible_0_f_0();
            }
#line 1689 "var_use_analysis.m"
            *var_use_analysis__STATE_VARIABLE_ProbArray_7 = var_use_analysis__STATE_VARIABLE_ProbArray_0_6;
#line 1689 "var_use_analysis.m"
          }
#line 1690 "var_use_analysis.m"
        else
#line 1692 "var_use_analysis.m"
          {
#line 1692 "var_use_analysis.m"
            MR_Word var_use_analysis__TypeInfo_18_68;
#line 1692 "var_use_analysis.m"
            MR_Float var_use_analysis__ConjsProb0_25;
#line 1692 "var_use_analysis.m"
            MR_Float var_use_analysis__SuccessProb_26;
#line 1692 "var_use_analysis.m"
            MR_Float var_use_analysis__ConjsProb_27;
#line 1692 "var_use_analysis.m"
            MR_Word var_use_analysis__ConjRecCalls_28;
#line 1692 "var_use_analysis.m"
            MR_Float var_use_analysis__ConjProb_29;
#line 1692 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_33_33 = (var_use_analysis__ConjNum_2 + (MR_Integer) 1);
#line 1692 "var_use_analysis.m"
            MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_34_34;
#line 1692 "var_use_analysis.m"
            MR_Float var_use_analysis__V_36_36;
#line 1692 "var_use_analysis.m"
            MR_Float var_use_analysis__V_37_37;
#line 1692 "var_use_analysis.m"
            MR_Float var_use_analysis__V_38_38;
#line 1692 "var_use_analysis.m"
            MR_Word var_use_analysis__V_39_39;
#line 1692 "var_use_analysis.m"
            MR_Word var_use_analysis__V_61_61;

#line 1691 "var_use_analysis.m"
            {
#line 1691 "var_use_analysis.m"
              var_use_analysis__conj_rec_prob_7_p_0(var_use_analysis__Conjs_15, var_use_analysis__V_33_33, var_use_analysis__RecCalls_3, var_use_analysis__Info_4, &var_use_analysis__ConjsProb0_25, var_use_analysis__STATE_VARIABLE_ProbArray_0_6, &var_use_analysis__STATE_VARIABLE_ProbArray_34_34);
            }
#line 1693 "var_use_analysis.m"
            {
#line 1693 "var_use_analysis.m"
              var_use_analysis__V_37_37 = mercury__float__float_1_f_0(var_use_analysis__After_24);
            }
#line 1693 "var_use_analysis.m"
            {
#line 1693 "var_use_analysis.m"
              var_use_analysis__V_38_38 = mercury__float__float_1_f_0(var_use_analysis__Before_23);
            }
#line 1693 "var_use_analysis.m"
            {
#line 1693 "var_use_analysis.m"
              var_use_analysis__V_36_36 = mercury__float__f_slash_2_f_0(var_use_analysis__V_37_37, var_use_analysis__V_38_38);
            }
#line 1693 "var_use_analysis.m"
            {
#line 1693 "var_use_analysis.m"
              var_use_analysis__SuccessProb_26 = measurement_units__probable_1_f_0(var_use_analysis__V_36_36);
            }
#line 1694 "var_use_analysis.m"
            {
#line 1694 "var_use_analysis.m"
              var_use_analysis__ConjsProb_27 = measurement_units__and_2_f_0(var_use_analysis__SuccessProb_26, var_use_analysis__ConjsProb0_25);
            }
#line 1696 "var_use_analysis.m"
            {
#line 1696 "var_use_analysis.m"
              var_use_analysis__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), var_use_analysis__V_39_39, 0) = ((MR_Box) (var_use_analysis__ConjNum_2));
#line 1696 "var_use_analysis.m"
            }
#line 1257 "var_use_analysis.m"
            {
#line 1257 "var_use_analysis.m"
              var_use_analysis__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_61_61, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
#line 1257 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_61_61, 1) = ((MR_Box) (var_use_analysis__conj_rec_prob_7_p_0_1));
#line 1257 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1257 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_61_61, 3) = ((MR_Box) (var_use_analysis__V_39_39));
#line 1257 "var_use_analysis.m"
            }
#line 7470 "var_use_analysis.c"
            var_use_analysis__TypeInfo_18_68 = (MR_Word) &var_use_analysis_scalar_common_2[4];
#line 1257 "var_use_analysis.m"
            {
#line 1257 "var_use_analysis.m"
              mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_68, var_use_analysis__TypeInfo_18_68, var_use_analysis__V_61_61, var_use_analysis__RecCalls_3, &var_use_analysis__ConjRecCalls_28);
            }
#line 1698 "var_use_analysis.m"
            {
#line 1698 "var_use_analysis.m"
              var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__Conj_14, var_use_analysis__ConjRecCalls_28, var_use_analysis__Info_4, &var_use_analysis__ConjProb_29, var_use_analysis__STATE_VARIABLE_ProbArray_34_34, var_use_analysis__STATE_VARIABLE_ProbArray_7);
            }
#line 1699 "var_use_analysis.m"
            {
#line 1699 "var_use_analysis.m"
              *var_use_analysis__HeadVar__5_5 = measurement_units__or_2_f_0(var_use_analysis__ConjProb_29, var_use_analysis__ConjsProb_27);
            }
#line 1692 "var_use_analysis.m"
          }
#line 1682 "var_use_analysis.m"
      }
#line 1681 "var_use_analysis.m"
  }
#line 1676 "var_use_analysis.m"
}

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0_2(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 1257 "var_use_analysis.m"
{
#line 1257 "var_use_analysis.m"
  {
#line 1257 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1257 "var_use_analysis.m"
    MR_Word var_use_analysis__conv2_LambdaHeadVar__2_14;

#line 1257 "var_use_analysis.m"
    {
#line 1257 "var_use_analysis.m"
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv2_LambdaHeadVar__2_14);
    }
#line 1257 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1257 "var_use_analysis.m"
      {
#line 1257 "var_use_analysis.m"
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv2_LambdaHeadVar__2_14));
#line 1257 "var_use_analysis.m"
        var_use_analysis__succeeded = MR_TRUE;
#line 1257 "var_use_analysis.m"
      }
#line 1257 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
  }
#line 1257 "var_use_analysis.m"
}

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 1257 "var_use_analysis.m"
{
#line 1257 "var_use_analysis.m"
  {
#line 1257 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1257 "var_use_analysis.m"
    MR_Word var_use_analysis__conv1_LambdaHeadVar__2_14;

#line 1257 "var_use_analysis.m"
    {
#line 1257 "var_use_analysis.m"
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv1_LambdaHeadVar__2_14);
    }
#line 1257 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1257 "var_use_analysis.m"
      {
#line 1257 "var_use_analysis.m"
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv1_LambdaHeadVar__2_14));
#line 1257 "var_use_analysis.m"
        var_use_analysis__succeeded = MR_TRUE;
#line 1257 "var_use_analysis.m"
      }
#line 1257 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
  }
#line 1257 "var_use_analysis.m"
}

#line 1626 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0(
#line 1626 "var_use_analysis.m"
  MR_Word var_use_analysis__Goal_7,
#line 1626 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_8,
#line 1626 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_9,
#line 1626 "var_use_analysis.m"
  MR_Float * var_use_analysis__Prob_10,
#line 1626 "var_use_analysis.m"
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_35,
#line 1626 "var_use_analysis.m"
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_36)
#line 1626 "var_use_analysis.m"
{
#line 1631 "var_use_analysis.m"
  {
#line 1631 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1631 "var_use_analysis.m"
    MR_Word var_use_analysis__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_7, (MR_Integer) 0)));
#line 1631 "var_use_analysis.m"
    MR_Word var_use_analysis__GoalId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_7, (MR_Integer) 2)));
#line 1631 "var_use_analysis.m"
    MR_Word var_use_analysis__Coverage_15;
#line 1631 "var_use_analysis.m"
    MR_Integer var_use_analysis__Before_16;
#line 1631 "var_use_analysis.m"
    MR_Word var_use_analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 4)));
#line 1632 "var_use_analysis.m"
    MR_Word var_use_analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_7, (MR_Integer) 1)));
#line 1633 "var_use_analysis.m"
    MR_Word var_use_analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 0)));
#line 1633 "var_use_analysis.m"
    MR_Word var_use_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 1)));
#line 1633 "var_use_analysis.m"
    MR_Word var_use_analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 2)));
#line 1633 "var_use_analysis.m"
    MR_Word var_use_analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 3)));
#line 1633 "var_use_analysis.m"
    MR_Integer var_use_analysis__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 5)));
#line 1633 "var_use_analysis.m"
    MR_Word var_use_analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 6)));
#line 1633 "var_use_analysis.m"
    MR_Word var_use_analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 7)));
#line 1633 "var_use_analysis.m"
    MR_Word var_use_analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 8)));
#line 1633 "var_use_analysis.m"
    MR_Word var_use_analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 9)));
#line 1633 "var_use_analysis.m"
    MR_Word var_use_analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 10)));
#line 1633 "var_use_analysis.m"
    MR_Box var_use_analysis__conv0_Coverage_15;

#line 1633 "var_use_analysis.m"
    {
#line 1633 "var_use_analysis.m"
      var_use_analysis__conv0_Coverage_15 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__V_37_37, var_use_analysis__GoalId_14);
    }
#line 1633 "var_use_analysis.m"
    var_use_analysis__Coverage_15 = ((MR_Word) var_use_analysis__conv0_Coverage_15);
#line 1634 "var_use_analysis.m"
    {
#line 1634 "var_use_analysis.m"
      coverage__get_coverage_before_det_2_p_0(var_use_analysis__Coverage_15, &var_use_analysis__Before_16);
    }
#line 1635 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__Before_16 == (MR_Integer) 0);
#line 1640 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1637 "var_use_analysis.m"
      {
#line 1637 "var_use_analysis.m"
        {
#line 1637 "var_use_analysis.m"
          *var_use_analysis__Prob_10 = measurement_units__impossible_0_f_0();
        }
#line 1637 "var_use_analysis.m"
        *var_use_analysis__STATE_VARIABLE_ProbArray_36 = var_use_analysis__STATE_VARIABLE_ProbArray_0_35;
#line 1637 "var_use_analysis.m"
      }
#line 1640 "var_use_analysis.m"
    else
#line 1672 "var_use_analysis.m"
      {
#line 1672 "var_use_analysis.m"
        MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_44_44;

#line 1644 "var_use_analysis.m"
#line 1644 "var_use_analysis.m"
        switch (MR_tag((MR_Word) var_use_analysis__GoalExpr_12)) {
#line 1644 "var_use_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1644 "var_use_analysis.m"
          case (MR_Integer) 0:
#line 1642 "var_use_analysis.m"
            {
#line 1642 "var_use_analysis.m"
              MR_Word var_use_analysis__Conjs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));

#line 1643 "var_use_analysis.m"
              {
#line 1643 "var_use_analysis.m"
                var_use_analysis__conj_rec_prob_7_p_0(var_use_analysis__Conjs_17, (MR_Integer) 1, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__Prob_10, var_use_analysis__STATE_VARIABLE_ProbArray_0_35, &var_use_analysis__STATE_VARIABLE_ProbArray_44_44);
              }
#line 1642 "var_use_analysis.m"
            }
#line 1644 "var_use_analysis.m"
            break;
#line 1644 "var_use_analysis.m"
          case (MR_Integer) 1:
#line 1645 "var_use_analysis.m"
            {
#line 1645 "var_use_analysis.m"
              MR_Word var_use_analysis__Disjs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));

#line 1646 "var_use_analysis.m"
              {
#line 1646 "var_use_analysis.m"
                var_use_analysis__disj_rec_prob_7_p_0(var_use_analysis__Disjs_18, (MR_Integer) 1, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__Prob_10, var_use_analysis__STATE_VARIABLE_ProbArray_0_35, &var_use_analysis__STATE_VARIABLE_ProbArray_44_44);
              }
#line 1645 "var_use_analysis.m"
            }
#line 1644 "var_use_analysis.m"
            break;
#line 1644 "var_use_analysis.m"
          case (MR_Integer) 2:
#line 1648 "var_use_analysis.m"
            {
#line 1648 "var_use_analysis.m"
              MR_Word var_use_analysis__Cases_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
#line 1648 "var_use_analysis.m"
              MR_Integer var_use_analysis__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));
#line 1648 "var_use_analysis.m"
              MR_Word var_use_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));

#line 1649 "var_use_analysis.m"
              {
#line 1649 "var_use_analysis.m"
                var_use_analysis__switch_rec_prob_7_p_0(var_use_analysis__Cases_21, var_use_analysis__Before_16, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__Prob_10, var_use_analysis__STATE_VARIABLE_ProbArray_0_35, &var_use_analysis__STATE_VARIABLE_ProbArray_44_44);
              }
#line 1648 "var_use_analysis.m"
            }
#line 1644 "var_use_analysis.m"
            break;
#line 1644 "var_use_analysis.m"
          case (MR_Integer) 3:
#line 1644 "var_use_analysis.m"
#line 1644 "var_use_analysis.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 0)))) {
#line 1644 "var_use_analysis.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1644 "var_use_analysis.m"
              case (MR_Integer) 0:
#line 1651 "var_use_analysis.m"
                {
#line 1651 "var_use_analysis.m"
                  MR_Word var_use_analysis__Cond_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
#line 1651 "var_use_analysis.m"
                  MR_Word var_use_analysis__Then_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
#line 1651 "var_use_analysis.m"
                  MR_Word var_use_analysis__Else_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 3)));

#line 1652 "var_use_analysis.m"
                  {
#line 1652 "var_use_analysis.m"
                    var_use_analysis__ite_rec_prob_8_p_0(var_use_analysis__Cond_22, var_use_analysis__Then_23, var_use_analysis__Else_24, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__Prob_10, var_use_analysis__STATE_VARIABLE_ProbArray_0_35, &var_use_analysis__STATE_VARIABLE_ProbArray_44_44);
                  }
#line 1651 "var_use_analysis.m"
                }
#line 1644 "var_use_analysis.m"
                break;
#line 1644 "var_use_analysis.m"
              case (MR_Integer) 1:
#line 1660 "var_use_analysis.m"
                {
#line 1660 "var_use_analysis.m"
                  MR_Word var_use_analysis__TypeInfo_18_75 = (MR_Word) &var_use_analysis_scalar_common_2[4];
#line 1660 "var_use_analysis.m"
                  MR_Word var_use_analysis__SubGoal_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
#line 1660 "var_use_analysis.m"
                  MR_Word var_use_analysis__SubGoalRecCalls_28;

#line 1257 "var_use_analysis.m"
                  {
#line 1257 "var_use_analysis.m"
                    mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_75, var_use_analysis__TypeInfo_18_75, (MR_Word) &var_use_analysis_scalar_common_8[2], var_use_analysis__RecCalls_8, &var_use_analysis__SubGoalRecCalls_28);
                  }
#line 1662 "var_use_analysis.m"
                  {
#line 1662 "var_use_analysis.m"
                    var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__SubGoal_25, var_use_analysis__SubGoalRecCalls_28, var_use_analysis__Info_9, var_use_analysis__Prob_10, var_use_analysis__STATE_VARIABLE_ProbArray_0_35, &var_use_analysis__STATE_VARIABLE_ProbArray_44_44);
                  }
#line 1660 "var_use_analysis.m"
                }
#line 1644 "var_use_analysis.m"
                break;
#line 1644 "var_use_analysis.m"
              case (MR_Integer) 2:
#line 1660 "var_use_analysis.m"
                {
#line 1660 "var_use_analysis.m"
                  MR_Word var_use_analysis__TypeInfo_18_92;
#line 1660 "var_use_analysis.m"
                  MR_Word var_use_analysis__MaybeCut_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
#line 1660 "var_use_analysis.m"
                  MR_Word var_use_analysis__SubGoal_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
#line 1660 "var_use_analysis.m"
                  MR_Word var_use_analysis__Step_59;
#line 1660 "var_use_analysis.m"
                  MR_Word var_use_analysis__SubGoalRecCalls_60;
#line 1660 "var_use_analysis.m"
                  MR_Word var_use_analysis__V_85_85;

#line 1659 "var_use_analysis.m"
                  {
#line 1659 "var_use_analysis.m"
                    var_use_analysis__Step_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1659 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(3), var_use_analysis__Step_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1659 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(3), var_use_analysis__Step_59, 1) = ((MR_Box) (var_use_analysis__MaybeCut_27));
#line 1659 "var_use_analysis.m"
                  }
#line 1257 "var_use_analysis.m"
                  {
#line 1257 "var_use_analysis.m"
                    var_use_analysis__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(0), var_use_analysis__V_85_85, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
#line 1257 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(0), var_use_analysis__V_85_85, 1) = ((MR_Box) (var_use_analysis__goal_rec_prob_6_p_0_2));
#line 1257 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(0), var_use_analysis__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1257 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(0), var_use_analysis__V_85_85, 3) = ((MR_Box) (var_use_analysis__Step_59));
#line 1257 "var_use_analysis.m"
                  }
#line 7820 "var_use_analysis.c"
                  var_use_analysis__TypeInfo_18_92 = (MR_Word) &var_use_analysis_scalar_common_2[4];
#line 1257 "var_use_analysis.m"
                  {
#line 1257 "var_use_analysis.m"
                    mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_92, var_use_analysis__TypeInfo_18_92, var_use_analysis__V_85_85, var_use_analysis__RecCalls_8, &var_use_analysis__SubGoalRecCalls_60);
                  }
#line 1662 "var_use_analysis.m"
                  {
#line 1662 "var_use_analysis.m"
                    var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__SubGoal_58, var_use_analysis__SubGoalRecCalls_60, var_use_analysis__Info_9, var_use_analysis__Prob_10, var_use_analysis__STATE_VARIABLE_ProbArray_0_35, &var_use_analysis__STATE_VARIABLE_ProbArray_44_44);
                  }
#line 1660 "var_use_analysis.m"
                }
#line 1644 "var_use_analysis.m"
                break;
#line 1644 "var_use_analysis.m"
              case (MR_Integer) 3:
#line 1664 "var_use_analysis.m"
                {
#line 1668 "var_use_analysis.m"
                  if ((var_use_analysis__RecCalls_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1667 "var_use_analysis.m"
                    {
#line 1667 "var_use_analysis.m"
                      *var_use_analysis__Prob_10 = measurement_units__impossible_0_f_0();
                    }
#line 1668 "var_use_analysis.m"
                  else
#line 1670 "var_use_analysis.m"
                    {
#line 1670 "var_use_analysis.m"
                      *var_use_analysis__Prob_10 = measurement_units__certain_0_f_0();
                    }
#line 1664 "var_use_analysis.m"
                  var_use_analysis__STATE_VARIABLE_ProbArray_44_44 = var_use_analysis__STATE_VARIABLE_ProbArray_0_35;
#line 1664 "var_use_analysis.m"
                }
#line 1644 "var_use_analysis.m"
                break;
#line 1644 "var_use_analysis.m"
            }
#line 1644 "var_use_analysis.m"
            break;
#line 1644 "var_use_analysis.m"
        }
#line 1673 "var_use_analysis.m"
        {
#line 1673 "var_use_analysis.m"
          mdbcomp__goal_path__update_goal_attribute_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, var_use_analysis__GoalId_14, MR_box_float(*var_use_analysis__Prob_10), var_use_analysis__STATE_VARIABLE_ProbArray_44_44, var_use_analysis__STATE_VARIABLE_ProbArray_36);
#line 1673 "var_use_analysis.m"
          return;
        }
#line 1672 "var_use_analysis.m"
      }
#line 1631 "var_use_analysis.m"
  }
#line 1626 "var_use_analysis.m"
}

#line 1606 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__adjust_weight_for_recursion_4_p_0(
#line 1606 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCase_5,
#line 1606 "var_use_analysis.m"
  MR_Float var_use_analysis__RecProb_6,
#line 1606 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_Weight_0_9,
#line 1606 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_Weight_10)
#line 1606 "var_use_analysis.m"
{
#line 1609 "var_use_analysis.m"
  {
#line 1609 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1609 "var_use_analysis.m"
    MR_Float var_use_analysis__Prob_8;
#line 1609 "var_use_analysis.m"
    MR_Float var_use_analysis__V_12_12;

#line 1613 "var_use_analysis.m"
#line 1613 "var_use_analysis.m"
    switch (var_use_analysis__RecCase_5) {
#line 1613 "var_use_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1613 "var_use_analysis.m"
      case (MR_Integer) 1:
#line 1615 "var_use_analysis.m"
        {
#line 1615 "var_use_analysis.m"
          var_use_analysis__Prob_8 = measurement_units__not_probability_1_f_0(var_use_analysis__RecProb_6);
        }
#line 1613 "var_use_analysis.m"
        break;
#line 1613 "var_use_analysis.m"
      case (MR_Integer) 0:
#line 1612 "var_use_analysis.m"
        var_use_analysis__Prob_8 = var_use_analysis__RecProb_6;
#line 1613 "var_use_analysis.m"
        break;
#line 1613 "var_use_analysis.m"
    }
#line 1617 "var_use_analysis.m"
    {
#line 1617 "var_use_analysis.m"
      var_use_analysis__V_12_12 = measurement_units__probability_to_float_1_f_0(var_use_analysis__Prob_8);
    }
#line 1617 "var_use_analysis.m"
    *var_use_analysis__STATE_VARIABLE_Weight_10 = (var_use_analysis__STATE_VARIABLE_Weight_0_9 * var_use_analysis__V_12_12);
#line 1609 "var_use_analysis.m"
  }
#line 1606 "var_use_analysis.m"
}

#line 1599 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_3(
#line 1599 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1599 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1599 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 1599 "var_use_analysis.m"
{
#line 1599 "var_use_analysis.m"
  {
#line 1599 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1599 "var_use_analysis.m"
    MR_Float var_use_analysis__conv6_HeadVar__3_3;

#line 1599 "var_use_analysis.m"
    {
#line 1599 "var_use_analysis.m"
      var_use_analysis__ffu_to_float_3_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv6_HeadVar__3_3);
    }
#line 1599 "var_use_analysis.m"
    *var_use_analysis__wrapper_arg_2 = MR_box_float(var_use_analysis__conv6_HeadVar__3_3);
#line 1599 "var_use_analysis.m"
  }
#line 1599 "var_use_analysis.m"
}

#line 1570 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_2(
#line 1570 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1570 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1570 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 1570 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_3)
#line 1570 "var_use_analysis.m"
{
#line 1570 "var_use_analysis.m"
  {
#line 1570 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1570 "var_use_analysis.m"
    MR_Float var_use_analysis__conv5_STATE_VARIABLE_Weight_10;

#line 1570 "var_use_analysis.m"
    {
#line 1570 "var_use_analysis.m"
      var_use_analysis__adjust_weight_for_recursion_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), MR_unbox_float(var_use_analysis__wrapper_arg_1), MR_unbox_float(var_use_analysis__wrapper_arg_2), &var_use_analysis__conv5_STATE_VARIABLE_Weight_10);
    }
#line 1570 "var_use_analysis.m"
    *var_use_analysis__wrapper_arg_3 = MR_box_float(var_use_analysis__conv5_STATE_VARIABLE_Weight_10);
#line 1570 "var_use_analysis.m"
  }
#line 1570 "var_use_analysis.m"
}

#line 1568 "var_use_analysis.m"
static MR_Box MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_1(
#line 1568 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1568 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1)
#line 1568 "var_use_analysis.m"
{
#line 1568 "var_use_analysis.m"
  {
#line 1568 "var_use_analysis.m"
    MR_Box var_use_analysis__wrapper_arg_2;
#line 1568 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1568 "var_use_analysis.m"
    MR_Float var_use_analysis__conv4_HeadVar__2_2;

#line 1568 "var_use_analysis.m"
    {
#line 1568 "var_use_analysis.m"
      var_use_analysis__conv4_HeadVar__2_2 = mercury__float__float_1_f_0(((MR_Integer) var_use_analysis__wrapper_arg_1));
    }
#line 1568 "var_use_analysis.m"
    var_use_analysis__wrapper_arg_2 = MR_box_float(var_use_analysis__conv4_HeadVar__2_2);
#line 1568 "var_use_analysis.m"
    return var_use_analysis__wrapper_arg_2;
#line 1568 "var_use_analysis.m"
  }
#line 1568 "var_use_analysis.m"
}

#line 1539 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0(
#line 1539 "var_use_analysis.m"
  MR_Word var_use_analysis__Cond_9,
#line 1539 "var_use_analysis.m"
  MR_Word var_use_analysis__Then_10,
#line 1539 "var_use_analysis.m"
  MR_Word var_use_analysis__Else_11,
#line 1539 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_12,
#line 1539 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_13,
#line 1539 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_14,
#line 1539 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_46,
#line 1539 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_47)
#line 1539 "var_use_analysis.m"
{
#line 1545 "var_use_analysis.m"
  {
#line 1545 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__TypeCtorInfo_116_116;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__TypeCtorInfo_117_117;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__CondRecCalls_16;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__ThenRecCalls_17;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__ElseRecCalls_18;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__CondFoundFirstUse_19;
#line 1545 "var_use_analysis.m"
    MR_Float var_use_analysis__CostAfterCond_20;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__ThenFoundFirstUse_21;
#line 1545 "var_use_analysis.m"
    MR_Float var_use_analysis__CostAfterThen_22;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__ElseFoundFirstUse_23;
#line 1545 "var_use_analysis.m"
    MR_Float var_use_analysis__CostAfterElse_24;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__CoverageArray_25;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__ThenId_28;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__ElseId_31;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__ThenCoverage_32;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__ElseCoverage_33;
#line 1545 "var_use_analysis.m"
    MR_Integer var_use_analysis__BeforeThen_34;
#line 1545 "var_use_analysis.m"
    MR_Integer var_use_analysis__BeforeElse_35;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__RecProbArray_36;
#line 1545 "var_use_analysis.m"
    MR_Float var_use_analysis__ThenRecProb_37;
#line 1545 "var_use_analysis.m"
    MR_Float var_use_analysis__ElseRecProb_38;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__Weights0_39;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__Weights_40;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__V_52_52;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__V_54_54;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__V_55_55;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__V_57_57;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__V_58_58;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__V_59_59;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__V_60_60;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__V_61_61;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__V_63_63;
#line 1545 "var_use_analysis.m"
    MR_Word var_use_analysis__V_65_65;
#line 1558 "var_use_analysis.m"
    MR_Word var_use_analysis__V_72_72;
#line 1558 "var_use_analysis.m"
    MR_Word var_use_analysis__V_73_73;
#line 1558 "var_use_analysis.m"
    MR_Word var_use_analysis__V_74_74;
#line 1558 "var_use_analysis.m"
    MR_Word var_use_analysis__V_75_75;
#line 1558 "var_use_analysis.m"
    MR_Integer var_use_analysis__V_76_76;
#line 1558 "var_use_analysis.m"
    MR_Word var_use_analysis__V_77_77;
#line 1558 "var_use_analysis.m"
    MR_Word var_use_analysis__V_78_78;
#line 1558 "var_use_analysis.m"
    MR_Word var_use_analysis__V_79_79;
#line 1558 "var_use_analysis.m"
    MR_Word var_use_analysis__V_80_80;
#line 1558 "var_use_analysis.m"
    MR_Word var_use_analysis__V_81_81;
#line 1559 "var_use_analysis.m"
    MR_Word var_use_analysis__V_26_26;
#line 1559 "var_use_analysis.m"
    MR_Word var_use_analysis__V_27_27;
#line 1560 "var_use_analysis.m"
    MR_Word var_use_analysis__V_29_29;
#line 1560 "var_use_analysis.m"
    MR_Word var_use_analysis__V_30_30;
#line 1561 "var_use_analysis.m"
    MR_Box var_use_analysis__conv0_ThenCoverage_32;
#line 1562 "var_use_analysis.m"
    MR_Box var_use_analysis__conv1_ElseCoverage_33;
#line 1565 "var_use_analysis.m"
    MR_Word var_use_analysis__V_82_82;
#line 1565 "var_use_analysis.m"
    MR_Word var_use_analysis__V_83_83;
#line 1565 "var_use_analysis.m"
    MR_Word var_use_analysis__V_84_84;
#line 1565 "var_use_analysis.m"
    MR_Word var_use_analysis__V_85_85;
#line 1565 "var_use_analysis.m"
    MR_Word var_use_analysis__V_86_86;
#line 1565 "var_use_analysis.m"
    MR_Integer var_use_analysis__V_87_87;
#line 1565 "var_use_analysis.m"
    MR_Word var_use_analysis__V_88_88;
#line 1565 "var_use_analysis.m"
    MR_Word var_use_analysis__V_89_89;
#line 1565 "var_use_analysis.m"
    MR_Word var_use_analysis__V_90_90;
#line 1565 "var_use_analysis.m"
    MR_Word var_use_analysis__V_91_91;
#line 1565 "var_use_analysis.m"
    MR_Word var_use_analysis__V_92_92;
#line 1566 "var_use_analysis.m"
    MR_Box var_use_analysis__conv2_ThenRecProb_37;
#line 1567 "var_use_analysis.m"
    MR_Box var_use_analysis__conv3_ElseRecProb_38;
#line 1570 "var_use_analysis.m"
    MR_Word var_use_analysis__V_93_93;
#line 1570 "var_use_analysis.m"
    MR_Word var_use_analysis__V_94_94;
#line 1570 "var_use_analysis.m"
    MR_Word var_use_analysis__V_95_95;
#line 1570 "var_use_analysis.m"
    MR_Word var_use_analysis__V_96_96;
#line 1570 "var_use_analysis.m"
    MR_Word var_use_analysis__V_97_97;
#line 1570 "var_use_analysis.m"
    MR_Integer var_use_analysis__V_98_98;
#line 1570 "var_use_analysis.m"
    MR_Word var_use_analysis__V_99_99;
#line 1570 "var_use_analysis.m"
    MR_Word var_use_analysis__V_100_100;
#line 1570 "var_use_analysis.m"
    MR_Word var_use_analysis__V_101_101;
#line 1570 "var_use_analysis.m"
    MR_Word var_use_analysis__V_102_102;
#line 1570 "var_use_analysis.m"
    MR_Word var_use_analysis__V_103_103;

#line 1546 "var_use_analysis.m"
    {
#line 1546 "var_use_analysis.m"
      var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), var_use_analysis__RecCalls_12, &var_use_analysis__CondRecCalls_16);
    }
#line 1547 "var_use_analysis.m"
    {
#line 1547 "var_use_analysis.m"
      var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), var_use_analysis__RecCalls_12, &var_use_analysis__ThenRecCalls_17);
    }
#line 1548 "var_use_analysis.m"
    {
#line 1548 "var_use_analysis.m"
      var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), var_use_analysis__RecCalls_12, &var_use_analysis__ElseRecCalls_18);
    }
#line 1549 "var_use_analysis.m"
    {
#line 1549 "var_use_analysis.m"
      var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Cond_9, var_use_analysis__CondRecCalls_16, var_use_analysis__Info_13, &var_use_analysis__CondFoundFirstUse_19, var_use_analysis__STATE_VARIABLE_CostSoFar_0_46, &var_use_analysis__CostAfterCond_20);
    }
#line 1552 "var_use_analysis.m"
    {
#line 1552 "var_use_analysis.m"
      var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Then_10, var_use_analysis__ThenRecCalls_17, var_use_analysis__Info_13, &var_use_analysis__ThenFoundFirstUse_21, var_use_analysis__CostAfterCond_20, &var_use_analysis__CostAfterThen_22);
    }
#line 1554 "var_use_analysis.m"
    {
#line 1554 "var_use_analysis.m"
      var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Else_11, var_use_analysis__ElseRecCalls_18, var_use_analysis__Info_13, &var_use_analysis__ElseFoundFirstUse_23, var_use_analysis__CostAfterCond_20, &var_use_analysis__CostAfterElse_24);
    }
#line 1558 "var_use_analysis.m"
    var_use_analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 0)));
#line 1558 "var_use_analysis.m"
    var_use_analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 1)));
#line 1558 "var_use_analysis.m"
    var_use_analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 2)));
#line 1558 "var_use_analysis.m"
    var_use_analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 3)));
#line 1558 "var_use_analysis.m"
    var_use_analysis__CoverageArray_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 4)));
#line 1558 "var_use_analysis.m"
    var_use_analysis__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 5)));
#line 1558 "var_use_analysis.m"
    var_use_analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 6)));
#line 1558 "var_use_analysis.m"
    var_use_analysis__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 7)));
#line 1558 "var_use_analysis.m"
    var_use_analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 8)));
#line 1558 "var_use_analysis.m"
    var_use_analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 9)));
#line 1558 "var_use_analysis.m"
    var_use_analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 10)));
#line 1559 "var_use_analysis.m"
    var_use_analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Then_10, (MR_Integer) 0)));
#line 1559 "var_use_analysis.m"
    var_use_analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Then_10, (MR_Integer) 1)));
#line 1559 "var_use_analysis.m"
    var_use_analysis__ThenId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Then_10, (MR_Integer) 2)));
#line 1560 "var_use_analysis.m"
    var_use_analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Else_11, (MR_Integer) 0)));
#line 1560 "var_use_analysis.m"
    var_use_analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Else_11, (MR_Integer) 1)));
#line 1560 "var_use_analysis.m"
    var_use_analysis__ElseId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Else_11, (MR_Integer) 2)));
#line 8266 "var_use_analysis.c"
    var_use_analysis__TypeCtorInfo_116_116 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0;
#line 1561 "var_use_analysis.m"
    {
#line 1561 "var_use_analysis.m"
      var_use_analysis__conv0_ThenCoverage_32 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_116_116, var_use_analysis__CoverageArray_25, var_use_analysis__ThenId_28);
    }
#line 1561 "var_use_analysis.m"
    var_use_analysis__ThenCoverage_32 = ((MR_Word) var_use_analysis__conv0_ThenCoverage_32);
#line 1562 "var_use_analysis.m"
    {
#line 1562 "var_use_analysis.m"
      var_use_analysis__conv1_ElseCoverage_33 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_116_116, var_use_analysis__CoverageArray_25, var_use_analysis__ElseId_31);
    }
#line 1562 "var_use_analysis.m"
    var_use_analysis__ElseCoverage_33 = ((MR_Word) var_use_analysis__conv1_ElseCoverage_33);
#line 1563 "var_use_analysis.m"
    {
#line 1563 "var_use_analysis.m"
      coverage__get_coverage_before_det_2_p_0(var_use_analysis__ThenCoverage_32, &var_use_analysis__BeforeThen_34);
    }
#line 1564 "var_use_analysis.m"
    {
#line 1564 "var_use_analysis.m"
      coverage__get_coverage_before_det_2_p_0(var_use_analysis__ElseCoverage_33, &var_use_analysis__BeforeElse_35);
    }
#line 1565 "var_use_analysis.m"
    var_use_analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 0)));
#line 1565 "var_use_analysis.m"
    var_use_analysis__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 1)));
#line 1565 "var_use_analysis.m"
    var_use_analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 2)));
#line 1565 "var_use_analysis.m"
    var_use_analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 3)));
#line 1565 "var_use_analysis.m"
    var_use_analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 4)));
#line 1565 "var_use_analysis.m"
    var_use_analysis__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 5)));
#line 1565 "var_use_analysis.m"
    var_use_analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 6)));
#line 1565 "var_use_analysis.m"
    var_use_analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 7)));
#line 1565 "var_use_analysis.m"
    var_use_analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 8)));
#line 1565 "var_use_analysis.m"
    var_use_analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 9)));
#line 1565 "var_use_analysis.m"
    var_use_analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 10)));
#line 1565 "var_use_analysis.m"
    var_use_analysis__RecProbArray_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__V_52_52, (MR_Integer) 0)));
#line 1565 "var_use_analysis.m"
    var_use_analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__V_52_52, (MR_Integer) 1)));
#line 8318 "var_use_analysis.c"
    var_use_analysis__TypeCtorInfo_117_117 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 1566 "var_use_analysis.m"
    {
#line 1566 "var_use_analysis.m"
      var_use_analysis__conv2_ThenRecProb_37 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_117_117, var_use_analysis__RecProbArray_36, var_use_analysis__ThenId_28);
    }
#line 1566 "var_use_analysis.m"
    var_use_analysis__ThenRecProb_37 = MR_unbox_float(var_use_analysis__conv2_ThenRecProb_37);
#line 1567 "var_use_analysis.m"
    {
#line 1567 "var_use_analysis.m"
      var_use_analysis__conv3_ElseRecProb_38 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_117_117, var_use_analysis__RecProbArray_36, var_use_analysis__ElseId_31);
    }
#line 1567 "var_use_analysis.m"
    var_use_analysis__ElseRecProb_38 = MR_unbox_float(var_use_analysis__conv3_ElseRecProb_38);
#line 1568 "var_use_analysis.m"
    {
#line 1568 "var_use_analysis.m"
      var_use_analysis__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1568 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_55_55, 0) = ((MR_Box) (var_use_analysis__BeforeElse_35));
#line 1568 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1568 "var_use_analysis.m"
    }
#line 1568 "var_use_analysis.m"
    {
#line 1568 "var_use_analysis.m"
      var_use_analysis__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1568 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_54_54, 0) = ((MR_Box) (var_use_analysis__BeforeThen_34));
#line 1568 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_54_54, 1) = ((MR_Box) (var_use_analysis__V_55_55));
#line 1568 "var_use_analysis.m"
    }
#line 1568 "var_use_analysis.m"
    {
#line 1568 "var_use_analysis.m"
      var_use_analysis__Weights0_39 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, var_use_analysis__TypeCtorInfo_117_117, (MR_Word) &var_use_analysis_scalar_common_2[10], var_use_analysis__V_54_54);
    }
#line 1570 "var_use_analysis.m"
    var_use_analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 0)));
#line 1570 "var_use_analysis.m"
    var_use_analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 1)));
#line 1570 "var_use_analysis.m"
    var_use_analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 2)));
#line 1570 "var_use_analysis.m"
    var_use_analysis__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 3)));
#line 1570 "var_use_analysis.m"
    var_use_analysis__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 4)));
#line 1570 "var_use_analysis.m"
    var_use_analysis__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 5)));
#line 1570 "var_use_analysis.m"
    var_use_analysis__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 6)));
#line 1570 "var_use_analysis.m"
    var_use_analysis__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 7)));
#line 1570 "var_use_analysis.m"
    var_use_analysis__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 8)));
#line 1570 "var_use_analysis.m"
    var_use_analysis__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 9)));
#line 1570 "var_use_analysis.m"
    var_use_analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 10)));
#line 1570 "var_use_analysis.m"
    var_use_analysis__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__V_60_60, (MR_Integer) 0)));
#line 1570 "var_use_analysis.m"
    var_use_analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__V_60_60, (MR_Integer) 1)));
#line 1570 "var_use_analysis.m"
    {
#line 1570 "var_use_analysis.m"
      var_use_analysis__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1570 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_57_57, 0) = ((MR_Box) (&var_use_analysis_scalar_common_6[1]));
#line 1570 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_57_57, 1) = ((MR_Box) (var_use_analysis__rec_ite_var_first_use_8_p_0_2));
#line 1570 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1570 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_57_57, 3) = ((MR_Box) (var_use_analysis__V_59_59));
#line 1570 "var_use_analysis.m"
    }
#line 1571 "var_use_analysis.m"
    {
#line 1571 "var_use_analysis.m"
      var_use_analysis__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1571 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_61_61, 0) = MR_box_float(var_use_analysis__ElseRecProb_38);
#line 1571 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1571 "var_use_analysis.m"
    }
#line 1571 "var_use_analysis.m"
    {
#line 1571 "var_use_analysis.m"
      var_use_analysis__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1571 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_58_58, 0) = MR_box_float(var_use_analysis__ThenRecProb_37);
#line 1571 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_58_58, 1) = ((MR_Box) (var_use_analysis__V_61_61));
#line 1571 "var_use_analysis.m"
    }
#line 1569 "var_use_analysis.m"
    {
#line 1569 "var_use_analysis.m"
      mercury__list__map_corresponding_4_p_0(var_use_analysis__TypeCtorInfo_117_117, var_use_analysis__TypeCtorInfo_117_117, var_use_analysis__TypeCtorInfo_117_117, var_use_analysis__V_57_57, var_use_analysis__V_58_58, var_use_analysis__Weights0_39, &var_use_analysis__Weights_40);
    }
#line 1574 "var_use_analysis.m"
    {
#line 1574 "var_use_analysis.m"
      var_use_analysis__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_65_65, 0) = MR_box_float(var_use_analysis__CostAfterElse_24);
#line 1574 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1574 "var_use_analysis.m"
    }
#line 1574 "var_use_analysis.m"
    {
#line 1574 "var_use_analysis.m"
      var_use_analysis__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_63_63, 0) = MR_box_float(var_use_analysis__CostAfterThen_22);
#line 1574 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_63_63, 1) = ((MR_Box) (var_use_analysis__V_65_65));
#line 1574 "var_use_analysis.m"
    }
#line 1574 "var_use_analysis.m"
    {
#line 1574 "var_use_analysis.m"
      measurements__weighted_average_3_p_0(var_use_analysis__Weights_40, var_use_analysis__V_63_63, var_use_analysis__STATE_VARIABLE_CostSoFar_47);
    }
#line 1580 "var_use_analysis.m"
    if ((var_use_analysis__CondFoundFirstUse_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1588 "var_use_analysis.m"
      {
#line 1584 "var_use_analysis.m"
        var_use_analysis__succeeded = (var_use_analysis__ThenFoundFirstUse_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1584 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 1585 "var_use_analysis.m"
          var_use_analysis__succeeded = (var_use_analysis__ElseFoundFirstUse_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1588 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 1587 "var_use_analysis.m"
          *var_use_analysis__FoundFirstUse_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1588 "var_use_analysis.m"
        else
#line 1589 "var_use_analysis.m"
          {
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__VarUseType_42;
#line 1589 "var_use_analysis.m"
            MR_Float var_use_analysis__Default_43;
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__UseTimes_44;
#line 1589 "var_use_analysis.m"
            MR_Float var_use_analysis__UseTime_45;
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 6)));
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__V_68_68;
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__V_69_69;
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__V_70_70;
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 0)));
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 1)));
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 2)));
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 3)));
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 4)));
#line 1589 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 5)));
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 7)));
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 8)));
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 9)));
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 10)));
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_67_67, (MR_Integer) 0)));
#line 1589 "var_use_analysis.m"
            MR_Word var_use_analysis__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_67_67, (MR_Integer) 1)));

#line 1589 "var_use_analysis.m"
            var_use_analysis__VarUseType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_67_67, (MR_Integer) 2)));
#line 1593 "var_use_analysis.m"
#line 1593 "var_use_analysis.m"
            switch (var_use_analysis__VarUseType_42) {
#line 1593 "var_use_analysis.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1593 "var_use_analysis.m"
              case (MR_Integer) 1:
#line 1592 "var_use_analysis.m"
                var_use_analysis__Default_43 = *var_use_analysis__STATE_VARIABLE_CostSoFar_47;
#line 1593 "var_use_analysis.m"
                break;
#line 1593 "var_use_analysis.m"
              case (MR_Integer) 2:
#line 1593 "var_use_analysis.m"
              case (MR_Integer) 0:
#line 1597 "var_use_analysis.m"
                var_use_analysis__Default_43 = var_use_analysis__CostAfterCond_20;
#line 1593 "var_use_analysis.m"
                break;
#line 1593 "var_use_analysis.m"
            }
#line 1599 "var_use_analysis.m"
            {
#line 1599 "var_use_analysis.m"
              var_use_analysis__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1599 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_68_68, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[0]));
#line 1599 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_68_68, 1) = ((MR_Box) (var_use_analysis__rec_ite_var_first_use_8_p_0_3));
#line 1599 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1599 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_68_68, 3) = MR_box_float(var_use_analysis__Default_43);
#line 1599 "var_use_analysis.m"
            }
#line 1599 "var_use_analysis.m"
            {
#line 1599 "var_use_analysis.m"
              var_use_analysis__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1599 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), var_use_analysis__V_70_70, 0) = ((MR_Box) (var_use_analysis__ElseFoundFirstUse_23));
#line 1599 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), var_use_analysis__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1599 "var_use_analysis.m"
            }
#line 1599 "var_use_analysis.m"
            {
#line 1599 "var_use_analysis.m"
              var_use_analysis__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1599 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), var_use_analysis__V_69_69, 0) = ((MR_Box) (var_use_analysis__ThenFoundFirstUse_21));
#line 1599 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), var_use_analysis__V_69_69, 1) = ((MR_Box) (var_use_analysis__V_70_70));
#line 1599 "var_use_analysis.m"
            }
#line 1599 "var_use_analysis.m"
            {
#line 1599 "var_use_analysis.m"
              mercury__list__map_3_p_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0, var_use_analysis__TypeCtorInfo_117_117, var_use_analysis__V_68_68, var_use_analysis__V_69_69, &var_use_analysis__UseTimes_44);
            }
#line 1601 "var_use_analysis.m"
            {
#line 1601 "var_use_analysis.m"
              measurements__weighted_average_3_p_0(var_use_analysis__Weights_40, var_use_analysis__UseTimes_44, &var_use_analysis__UseTime_45);
            }
#line 1602 "var_use_analysis.m"
            {
#line 1602 "var_use_analysis.m"
              MR_Word base;
#line 1602 "var_use_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1602 "var_use_analysis.m"
              *var_use_analysis__FoundFirstUse_14 = base;
#line 1602 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__UseTime_45);
#line 1602 "var_use_analysis.m"
            }
#line 1589 "var_use_analysis.m"
          }
#line 1588 "var_use_analysis.m"
      }
#line 1580 "var_use_analysis.m"
    else
#line 1579 "var_use_analysis.m"
      *var_use_analysis__FoundFirstUse_14 = var_use_analysis__CondFoundFirstUse_19;
#line 1545 "var_use_analysis.m"
  }
#line 1539 "var_use_analysis.m"
}

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__rec_switch_var_first_use_2_9_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 1257 "var_use_analysis.m"
{
#line 1257 "var_use_analysis.m"
  {
#line 1257 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1257 "var_use_analysis.m"
    MR_Word var_use_analysis__conv0_LambdaHeadVar__2_14;

#line 1257 "var_use_analysis.m"
    {
#line 1257 "var_use_analysis.m"
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_LambdaHeadVar__2_14);
    }
#line 1257 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1257 "var_use_analysis.m"
      {
#line 1257 "var_use_analysis.m"
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv0_LambdaHeadVar__2_14));
#line 1257 "var_use_analysis.m"
        var_use_analysis__succeeded = MR_TRUE;
#line 1257 "var_use_analysis.m"
      }
#line 1257 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
  }
#line 1257 "var_use_analysis.m"
}

#line 1509 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_2_9_p_0(
#line 1509 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 1509 "var_use_analysis.m"
  MR_Integer var_use_analysis__CaseNum_2,
#line 1509 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_3,
#line 1509 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_4,
#line 1509 "var_use_analysis.m"
  MR_Float var_use_analysis__CostBeforeSwitch_5,
#line 1509 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__6_6,
#line 1509 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__7_7,
#line 1509 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__8_8,
#line 1509 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__9_9)
#line 1509 "var_use_analysis.m"
{
#line 1515 "var_use_analysis.m"
  {
#line 1515 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;

#line 1515 "var_use_analysis.m"
    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1515 "var_use_analysis.m"
      {
#line 1515 "var_use_analysis.m"
        *var_use_analysis__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1515 "var_use_analysis.m"
        *var_use_analysis__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1515 "var_use_analysis.m"
        *var_use_analysis__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1515 "var_use_analysis.m"
        *var_use_analysis__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1515 "var_use_analysis.m"
      }
#line 1515 "var_use_analysis.m"
    else
#line 1517 "var_use_analysis.m"
      {
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeInfo_18_85;
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__Case_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__Cases_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__CasesWeights_24;
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__CasesFoundFirstUses_25;
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__CasesCostsAfter_26;
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__CasesRecProbs_27;
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__Goal_28;
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__GoalId_29;
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__CaseRecCalls_30;
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__FoundFirstUse_31;
#line 1517 "var_use_analysis.m"
        MR_Float var_use_analysis__CaseCostAfter_32;
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__Coverage_33;
#line 1517 "var_use_analysis.m"
        MR_Integer var_use_analysis__Before_34;
#line 1517 "var_use_analysis.m"
        MR_Float var_use_analysis__RecProb_35;
#line 1517 "var_use_analysis.m"
        MR_Float var_use_analysis__Weight_36;
#line 1517 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_37_37 = (var_use_analysis__CaseNum_2 + (MR_Integer) 1);
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__V_39_39;
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__V_41_41;
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__V_42_42;
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__V_43_43;
#line 1517 "var_use_analysis.m"
        MR_Word var_use_analysis__V_78_78;
#line 1521 "var_use_analysis.m"
        MR_Word var_use_analysis__V_44_44;
#line 1521 "var_use_analysis.m"
        MR_Word var_use_analysis__V_45_45;
#line 1522 "var_use_analysis.m"
        MR_Word var_use_analysis__V_46_46;
#line 1522 "var_use_analysis.m"
        MR_Word var_use_analysis__V_47_47;
#line 1528 "var_use_analysis.m"
        MR_Word var_use_analysis__V_48_48;
#line 1528 "var_use_analysis.m"
        MR_Word var_use_analysis__V_49_49;
#line 1528 "var_use_analysis.m"
        MR_Word var_use_analysis__V_50_50;
#line 1528 "var_use_analysis.m"
        MR_Word var_use_analysis__V_51_51;
#line 1528 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_52_52;
#line 1528 "var_use_analysis.m"
        MR_Word var_use_analysis__V_53_53;
#line 1528 "var_use_analysis.m"
        MR_Word var_use_analysis__V_54_54;
#line 1528 "var_use_analysis.m"
        MR_Word var_use_analysis__V_55_55;
#line 1528 "var_use_analysis.m"
        MR_Word var_use_analysis__V_56_56;
#line 1528 "var_use_analysis.m"
        MR_Word var_use_analysis__V_57_57;
#line 1528 "var_use_analysis.m"
        MR_Box var_use_analysis__conv1_Coverage_33;
#line 1530 "var_use_analysis.m"
        MR_Word var_use_analysis__V_58_58;
#line 1530 "var_use_analysis.m"
        MR_Word var_use_analysis__V_59_59;
#line 1530 "var_use_analysis.m"
        MR_Word var_use_analysis__V_60_60;
#line 1530 "var_use_analysis.m"
        MR_Word var_use_analysis__V_61_61;
#line 1530 "var_use_analysis.m"
        MR_Word var_use_analysis__V_62_62;
#line 1530 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_63_63;
#line 1530 "var_use_analysis.m"
        MR_Word var_use_analysis__V_64_64;
#line 1530 "var_use_analysis.m"
        MR_Word var_use_analysis__V_65_65;
#line 1530 "var_use_analysis.m"
        MR_Word var_use_analysis__V_66_66;
#line 1530 "var_use_analysis.m"
        MR_Word var_use_analysis__V_67_67;
#line 1530 "var_use_analysis.m"
        MR_Word var_use_analysis__V_68_68;
#line 1530 "var_use_analysis.m"
        MR_Box var_use_analysis__conv2_RecProb_35;

#line 1518 "var_use_analysis.m"
        {
#line 1518 "var_use_analysis.m"
          var_use_analysis__rec_switch_var_first_use_2_9_p_0(var_use_analysis__Cases_15, var_use_analysis__V_37_37, var_use_analysis__RecCalls_3, var_use_analysis__Info_4, var_use_analysis__CostBeforeSwitch_5, &var_use_analysis__CasesWeights_24, &var_use_analysis__CasesFoundFirstUses_25, &var_use_analysis__CasesCostsAfter_26, &var_use_analysis__CasesRecProbs_27);
        }
#line 1521 "var_use_analysis.m"
        var_use_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_14, (MR_Integer) 0)));
#line 1521 "var_use_analysis.m"
        var_use_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_14, (MR_Integer) 1)));
#line 1521 "var_use_analysis.m"
        var_use_analysis__Goal_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_14, (MR_Integer) 2)));
#line 1522 "var_use_analysis.m"
        var_use_analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_28, (MR_Integer) 0)));
#line 1522 "var_use_analysis.m"
        var_use_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_28, (MR_Integer) 1)));
#line 1522 "var_use_analysis.m"
        var_use_analysis__GoalId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_28, (MR_Integer) 2)));
#line 1524 "var_use_analysis.m"
        {
#line 1524 "var_use_analysis.m"
          var_use_analysis__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "var_use_analysis.m"
          MR_hl_field(MR_mktag(3), var_use_analysis__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1524 "var_use_analysis.m"
          MR_hl_field(MR_mktag(3), var_use_analysis__V_39_39, 1) = ((MR_Box) (var_use_analysis__CaseNum_2));
#line 1524 "var_use_analysis.m"
          MR_hl_field(MR_mktag(3), var_use_analysis__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1524 "var_use_analysis.m"
        }
#line 1257 "var_use_analysis.m"
        {
#line 1257 "var_use_analysis.m"
          var_use_analysis__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_78_78, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_78_78, 1) = ((MR_Box) (var_use_analysis__rec_switch_var_first_use_2_9_p_0_1));
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_78_78, 3) = ((MR_Box) (var_use_analysis__V_39_39));
#line 1257 "var_use_analysis.m"
        }
#line 8830 "var_use_analysis.c"
        var_use_analysis__TypeInfo_18_85 = (MR_Word) &var_use_analysis_scalar_common_2[4];
#line 1257 "var_use_analysis.m"
        {
#line 1257 "var_use_analysis.m"
          mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_85, var_use_analysis__TypeInfo_18_85, var_use_analysis__V_78_78, var_use_analysis__RecCalls_3, &var_use_analysis__CaseRecCalls_30);
        }
#line 1526 "var_use_analysis.m"
        {
#line 1526 "var_use_analysis.m"
          var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Goal_28, var_use_analysis__CaseRecCalls_30, var_use_analysis__Info_4, &var_use_analysis__FoundFirstUse_31, var_use_analysis__CostBeforeSwitch_5, &var_use_analysis__CaseCostAfter_32);
        }
#line 1528 "var_use_analysis.m"
        var_use_analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 0)));
#line 1528 "var_use_analysis.m"
        var_use_analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 1)));
#line 1528 "var_use_analysis.m"
        var_use_analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 2)));
#line 1528 "var_use_analysis.m"
        var_use_analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 3)));
#line 1528 "var_use_analysis.m"
        var_use_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 4)));
#line 1528 "var_use_analysis.m"
        var_use_analysis__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 5)));
#line 1528 "var_use_analysis.m"
        var_use_analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 6)));
#line 1528 "var_use_analysis.m"
        var_use_analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 7)));
#line 1528 "var_use_analysis.m"
        var_use_analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 8)));
#line 1528 "var_use_analysis.m"
        var_use_analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 9)));
#line 1528 "var_use_analysis.m"
        var_use_analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 10)));
#line 1528 "var_use_analysis.m"
        {
#line 1528 "var_use_analysis.m"
          var_use_analysis__conv1_Coverage_33 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__V_41_41, var_use_analysis__GoalId_29);
        }
#line 1528 "var_use_analysis.m"
        var_use_analysis__Coverage_33 = ((MR_Word) var_use_analysis__conv1_Coverage_33);
#line 1529 "var_use_analysis.m"
        {
#line 1529 "var_use_analysis.m"
          coverage__get_coverage_before_det_2_p_0(var_use_analysis__Coverage_33, &var_use_analysis__Before_34);
        }
#line 1530 "var_use_analysis.m"
        var_use_analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 0)));
#line 1530 "var_use_analysis.m"
        var_use_analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 1)));
#line 1530 "var_use_analysis.m"
        var_use_analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 2)));
#line 1530 "var_use_analysis.m"
        var_use_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 3)));
#line 1530 "var_use_analysis.m"
        var_use_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 4)));
#line 1530 "var_use_analysis.m"
        var_use_analysis__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 5)));
#line 1530 "var_use_analysis.m"
        var_use_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 6)));
#line 1530 "var_use_analysis.m"
        var_use_analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 7)));
#line 1530 "var_use_analysis.m"
        var_use_analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 8)));
#line 1530 "var_use_analysis.m"
        var_use_analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 9)));
#line 1530 "var_use_analysis.m"
        var_use_analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 10)));
#line 1530 "var_use_analysis.m"
        var_use_analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__V_43_43, (MR_Integer) 0)));
#line 1530 "var_use_analysis.m"
        var_use_analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__V_43_43, (MR_Integer) 1)));
#line 1530 "var_use_analysis.m"
        {
#line 1530 "var_use_analysis.m"
          var_use_analysis__conv2_RecProb_35 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, var_use_analysis__V_42_42, var_use_analysis__GoalId_29);
        }
#line 1530 "var_use_analysis.m"
        var_use_analysis__RecProb_35 = MR_unbox_float(var_use_analysis__conv2_RecProb_35);
#line 1533 "var_use_analysis.m"
        {
#line 1533 "var_use_analysis.m"
          var_use_analysis__Weight_36 = mercury__float__float_1_f_0(var_use_analysis__Before_34);
        }
#line 1534 "var_use_analysis.m"
        {
#line 1534 "var_use_analysis.m"
          MR_Word base;
#line 1534 "var_use_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1534 "var_use_analysis.m"
          *var_use_analysis__HeadVar__6_6 = base;
#line 1534 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Weight_36);
#line 1534 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__CasesWeights_24));
#line 1534 "var_use_analysis.m"
        }
#line 1535 "var_use_analysis.m"
        {
#line 1535 "var_use_analysis.m"
          MR_Word base;
#line 1535 "var_use_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1535 "var_use_analysis.m"
          *var_use_analysis__HeadVar__7_7 = base;
#line 1535 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (var_use_analysis__FoundFirstUse_31));
#line 1535 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__CasesFoundFirstUses_25));
#line 1535 "var_use_analysis.m"
        }
#line 1536 "var_use_analysis.m"
        {
#line 1536 "var_use_analysis.m"
          MR_Word base;
#line 1536 "var_use_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "var_use_analysis.m"
          *var_use_analysis__HeadVar__8_8 = base;
#line 1536 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__CaseCostAfter_32);
#line 1536 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__CasesCostsAfter_26));
#line 1536 "var_use_analysis.m"
        }
#line 1537 "var_use_analysis.m"
        {
#line 1537 "var_use_analysis.m"
          MR_Word base;
#line 1537 "var_use_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "var_use_analysis.m"
          *var_use_analysis__HeadVar__9_9 = base;
#line 1537 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__RecProb_35);
#line 1537 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__CasesRecProbs_27));
#line 1537 "var_use_analysis.m"
        }
#line 1517 "var_use_analysis.m"
      }
#line 1515 "var_use_analysis.m"
  }
#line 1509 "var_use_analysis.m"
}

#line 1502 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_3(
#line 1502 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1502 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1502 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 1502 "var_use_analysis.m"
{
#line 1502 "var_use_analysis.m"
  {
#line 1502 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1502 "var_use_analysis.m"
    MR_Float var_use_analysis__conv1_HeadVar__3_3;

#line 1502 "var_use_analysis.m"
    {
#line 1502 "var_use_analysis.m"
      var_use_analysis__ffu_to_float_3_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv1_HeadVar__3_3);
    }
#line 1502 "var_use_analysis.m"
    *var_use_analysis__wrapper_arg_2 = MR_box_float(var_use_analysis__conv1_HeadVar__3_3);
#line 1502 "var_use_analysis.m"
  }
#line 1502 "var_use_analysis.m"
}

#line 1482 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_2(
#line 1482 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1482 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1)
#line 1482 "var_use_analysis.m"
{
#line 1482 "var_use_analysis.m"
  {
#line 1482 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1482 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;

#line 1482 "var_use_analysis.m"
    {
#line 1482 "var_use_analysis.m"
      return var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__rec_switch_var_first_use__1482__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1));
    }
#line 1482 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1482 "var_use_analysis.m"
  }
#line 1482 "var_use_analysis.m"
}

#line 1473 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_1(
#line 1473 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1473 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1473 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 1473 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_3)
#line 1473 "var_use_analysis.m"
{
#line 1473 "var_use_analysis.m"
  {
#line 1473 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1473 "var_use_analysis.m"
    MR_Float var_use_analysis__conv0_STATE_VARIABLE_Weight_10;

#line 1473 "var_use_analysis.m"
    {
#line 1473 "var_use_analysis.m"
      var_use_analysis__adjust_weight_for_recursion_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), MR_unbox_float(var_use_analysis__wrapper_arg_1), MR_unbox_float(var_use_analysis__wrapper_arg_2), &var_use_analysis__conv0_STATE_VARIABLE_Weight_10);
    }
#line 1473 "var_use_analysis.m"
    *var_use_analysis__wrapper_arg_3 = MR_box_float(var_use_analysis__conv0_STATE_VARIABLE_Weight_10);
#line 1473 "var_use_analysis.m"
  }
#line 1473 "var_use_analysis.m"
}

#line 1463 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0(
#line 1463 "var_use_analysis.m"
  MR_Word var_use_analysis__Cases_8,
#line 1463 "var_use_analysis.m"
  MR_Integer var_use_analysis__SwitchedOnVar_9,
#line 1463 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_10,
#line 1463 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_11,
#line 1463 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_12,
#line 1463 "var_use_analysis.m"
  MR_Float var_use_analysis__CostBeforeSwitch_13,
#line 1463 "var_use_analysis.m"
  MR_Float * var_use_analysis__CostAfterSwitch_14)
#line 1463 "var_use_analysis.m"
{
#line 1469 "var_use_analysis.m"
  {
#line 1469 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1469 "var_use_analysis.m"
    MR_Word var_use_analysis__TypeCtorInfo_69_69;
#line 1469 "var_use_analysis.m"
    MR_Word var_use_analysis__CaseWeights0_15;
#line 1469 "var_use_analysis.m"
    MR_Word var_use_analysis__FoundFirstUseCases_16;
#line 1469 "var_use_analysis.m"
    MR_Word var_use_analysis__CostAfterCases_17;
#line 1469 "var_use_analysis.m"
    MR_Word var_use_analysis__RecProbs_18;
#line 1469 "var_use_analysis.m"
    MR_Word var_use_analysis__RecCase_19;
#line 1469 "var_use_analysis.m"
    MR_Word var_use_analysis__CaseWeights_20;
#line 1469 "var_use_analysis.m"
    MR_Integer var_use_analysis__Var_21;
#line 1469 "var_use_analysis.m"
    MR_Word var_use_analysis__V_27_27;
#line 1469 "var_use_analysis.m"
    MR_Word var_use_analysis__V_28_28;
#line 1472 "var_use_analysis.m"
    MR_Word var_use_analysis__V_33_33;
#line 1472 "var_use_analysis.m"
    MR_Word var_use_analysis__V_34_34;
#line 1472 "var_use_analysis.m"
    MR_Word var_use_analysis__V_35_35;
#line 1472 "var_use_analysis.m"
    MR_Word var_use_analysis__V_36_36;
#line 1472 "var_use_analysis.m"
    MR_Word var_use_analysis__V_37_37;
#line 1472 "var_use_analysis.m"
    MR_Integer var_use_analysis__V_38_38;
#line 1472 "var_use_analysis.m"
    MR_Word var_use_analysis__V_39_39;
#line 1472 "var_use_analysis.m"
    MR_Word var_use_analysis__V_40_40;
#line 1472 "var_use_analysis.m"
    MR_Word var_use_analysis__V_41_41;
#line 1472 "var_use_analysis.m"
    MR_Word var_use_analysis__V_42_42;
#line 1472 "var_use_analysis.m"
    MR_Word var_use_analysis__V_43_43;
#line 1477 "var_use_analysis.m"
    MR_Word var_use_analysis__V_44_44;
#line 1477 "var_use_analysis.m"
    MR_Word var_use_analysis__V_45_45;
#line 1477 "var_use_analysis.m"
    MR_Word var_use_analysis__V_46_46;
#line 1477 "var_use_analysis.m"
    MR_Word var_use_analysis__V_47_47;
#line 1477 "var_use_analysis.m"
    MR_Word var_use_analysis__V_48_48;
#line 1477 "var_use_analysis.m"
    MR_Word var_use_analysis__V_49_49;
#line 1477 "var_use_analysis.m"
    MR_Word var_use_analysis__V_50_50;
#line 1477 "var_use_analysis.m"
    MR_Word var_use_analysis__V_51_51;
#line 1477 "var_use_analysis.m"
    MR_Word var_use_analysis__V_52_52;
#line 1477 "var_use_analysis.m"
    MR_Word var_use_analysis__V_53_53;

#line 1470 "var_use_analysis.m"
    {
#line 1470 "var_use_analysis.m"
      var_use_analysis__rec_switch_var_first_use_2_9_p_0(var_use_analysis__Cases_8, (MR_Integer) 1, var_use_analysis__RecCalls_10, var_use_analysis__Info_11, var_use_analysis__CostBeforeSwitch_13, &var_use_analysis__CaseWeights0_15, &var_use_analysis__FoundFirstUseCases_16, &var_use_analysis__CostAfterCases_17, &var_use_analysis__RecProbs_18);
    }
#line 1472 "var_use_analysis.m"
    var_use_analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 0)));
#line 1472 "var_use_analysis.m"
    var_use_analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 1)));
#line 1472 "var_use_analysis.m"
    var_use_analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 2)));
#line 1472 "var_use_analysis.m"
    var_use_analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 3)));
#line 1472 "var_use_analysis.m"
    var_use_analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 4)));
#line 1472 "var_use_analysis.m"
    var_use_analysis__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 5)));
#line 1472 "var_use_analysis.m"
    var_use_analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 6)));
#line 1472 "var_use_analysis.m"
    var_use_analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 7)));
#line 1472 "var_use_analysis.m"
    var_use_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 8)));
#line 1472 "var_use_analysis.m"
    var_use_analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 9)));
#line 1472 "var_use_analysis.m"
    var_use_analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 10)));
#line 1472 "var_use_analysis.m"
    var_use_analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__V_27_27, (MR_Integer) 0)));
#line 1472 "var_use_analysis.m"
    var_use_analysis__RecCase_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__V_27_27, (MR_Integer) 1)));
#line 1473 "var_use_analysis.m"
    {
#line 1473 "var_use_analysis.m"
      var_use_analysis__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1473 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_28_28, 0) = ((MR_Box) (&var_use_analysis_scalar_common_6[1]));
#line 1473 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_28_28, 1) = ((MR_Box) (var_use_analysis__rec_switch_var_first_use_7_p_0_1));
#line 1473 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1473 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_28_28, 3) = ((MR_Box) (var_use_analysis__RecCase_19));
#line 1473 "var_use_analysis.m"
    }
#line 9198 "var_use_analysis.c"
    var_use_analysis__TypeCtorInfo_69_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 1473 "var_use_analysis.m"
    {
#line 1473 "var_use_analysis.m"
      mercury__list__map_corresponding_4_p_0(var_use_analysis__TypeCtorInfo_69_69, var_use_analysis__TypeCtorInfo_69_69, var_use_analysis__TypeCtorInfo_69_69, var_use_analysis__V_28_28, var_use_analysis__RecProbs_18, var_use_analysis__CaseWeights0_15, &var_use_analysis__CaseWeights_20);
    }
#line 1475 "var_use_analysis.m"
    {
#line 1475 "var_use_analysis.m"
      measurements__weighted_average_3_p_0(var_use_analysis__CaseWeights_20, var_use_analysis__CostAfterCases_17, var_use_analysis__CostAfterSwitch_14);
    }
#line 1477 "var_use_analysis.m"
    var_use_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 0)));
#line 1477 "var_use_analysis.m"
    var_use_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 1)));
#line 1477 "var_use_analysis.m"
    var_use_analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 2)));
#line 1477 "var_use_analysis.m"
    var_use_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 3)));
#line 1477 "var_use_analysis.m"
    var_use_analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 4)));
#line 1477 "var_use_analysis.m"
    var_use_analysis__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 5)));
#line 1477 "var_use_analysis.m"
    var_use_analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 6)));
#line 1477 "var_use_analysis.m"
    var_use_analysis__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 7)));
#line 1477 "var_use_analysis.m"
    var_use_analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 8)));
#line 1477 "var_use_analysis.m"
    var_use_analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 9)));
#line 1477 "var_use_analysis.m"
    var_use_analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 10)));
#line 1478 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__Var_21 == var_use_analysis__SwitchedOnVar_9);
#line 1480 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1479 "var_use_analysis.m"
      {
#line 1479 "var_use_analysis.m"
        MR_Word base;
#line 1479 "var_use_analysis.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "var_use_analysis.m"
        *var_use_analysis__FoundFirstUse_12 = base;
#line 1479 "var_use_analysis.m"
        MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__CostBeforeSwitch_13);
#line 1479 "var_use_analysis.m"
      }
#line 1480 "var_use_analysis.m"
    else
#line 1486 "var_use_analysis.m"
      {
#line 1482 "var_use_analysis.m"
        {
#line 1482 "var_use_analysis.m"
          var_use_analysis__succeeded = mercury__list__all_true_2_p_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0, (MR_Word) &var_use_analysis_scalar_common_8[1], var_use_analysis__FoundFirstUseCases_16);
        }
#line 1486 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 1485 "var_use_analysis.m"
          *var_use_analysis__FoundFirstUse_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1486 "var_use_analysis.m"
        else
#line 1487 "var_use_analysis.m"
          {
#line 1487 "var_use_analysis.m"
            MR_Word var_use_analysis__VarUseType_22;
#line 1487 "var_use_analysis.m"
            MR_Float var_use_analysis__DefaultCost_23;
#line 1487 "var_use_analysis.m"
            MR_Word var_use_analysis__FirstUseTimes_24;
#line 1487 "var_use_analysis.m"
            MR_Float var_use_analysis__UseTime_25;
#line 1487 "var_use_analysis.m"
            MR_Word var_use_analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 6)));
#line 1487 "var_use_analysis.m"
            MR_Word var_use_analysis__V_32_32;
#line 1487 "var_use_analysis.m"
            MR_Word var_use_analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 0)));
#line 1487 "var_use_analysis.m"
            MR_Word var_use_analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 1)));
#line 1487 "var_use_analysis.m"
            MR_Word var_use_analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 2)));
#line 1487 "var_use_analysis.m"
            MR_Word var_use_analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 3)));
#line 1487 "var_use_analysis.m"
            MR_Word var_use_analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 4)));
#line 1487 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 5)));
#line 1487 "var_use_analysis.m"
            MR_Word var_use_analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 7)));
#line 1487 "var_use_analysis.m"
            MR_Word var_use_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 8)));
#line 1487 "var_use_analysis.m"
            MR_Word var_use_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 9)));
#line 1487 "var_use_analysis.m"
            MR_Word var_use_analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 10)));
#line 1487 "var_use_analysis.m"
            MR_Word var_use_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_31_31, (MR_Integer) 0)));
#line 1487 "var_use_analysis.m"
            MR_Word var_use_analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_31_31, (MR_Integer) 1)));

#line 1487 "var_use_analysis.m"
            var_use_analysis__VarUseType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_31_31, (MR_Integer) 2)));
#line 1496 "var_use_analysis.m"
#line 1496 "var_use_analysis.m"
            switch (var_use_analysis__VarUseType_22) {
#line 1496 "var_use_analysis.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1496 "var_use_analysis.m"
              case (MR_Integer) 1:
#line 1495 "var_use_analysis.m"
                var_use_analysis__DefaultCost_23 = *var_use_analysis__CostAfterSwitch_14;
#line 1496 "var_use_analysis.m"
                break;
#line 1496 "var_use_analysis.m"
              case (MR_Integer) 2:
#line 1496 "var_use_analysis.m"
              case (MR_Integer) 0:
#line 1500 "var_use_analysis.m"
                var_use_analysis__DefaultCost_23 = var_use_analysis__CostBeforeSwitch_13;
#line 1496 "var_use_analysis.m"
                break;
#line 1496 "var_use_analysis.m"
            }
#line 1502 "var_use_analysis.m"
            {
#line 1502 "var_use_analysis.m"
              var_use_analysis__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1502 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_32_32, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[0]));
#line 1502 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_32_32, 1) = ((MR_Box) (var_use_analysis__rec_switch_var_first_use_7_p_0_3));
#line 1502 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1502 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_32_32, 3) = MR_box_float(var_use_analysis__DefaultCost_23);
#line 1502 "var_use_analysis.m"
            }
#line 1502 "var_use_analysis.m"
            {
#line 1502 "var_use_analysis.m"
              mercury__list__map_3_p_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0, var_use_analysis__TypeCtorInfo_69_69, var_use_analysis__V_32_32, var_use_analysis__FoundFirstUseCases_16, &var_use_analysis__FirstUseTimes_24);
            }
#line 1504 "var_use_analysis.m"
            {
#line 1504 "var_use_analysis.m"
              measurements__weighted_average_3_p_0(var_use_analysis__CaseWeights_20, var_use_analysis__FirstUseTimes_24, &var_use_analysis__UseTime_25);
            }
#line 1505 "var_use_analysis.m"
            {
#line 1505 "var_use_analysis.m"
              MR_Word base;
#line 1505 "var_use_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "var_use_analysis.m"
              *var_use_analysis__FoundFirstUse_12 = base;
#line 1505 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__UseTime_25);
#line 1505 "var_use_analysis.m"
            }
#line 1487 "var_use_analysis.m"
          }
#line 1486 "var_use_analysis.m"
      }
#line 1469 "var_use_analysis.m"
  }
#line 1463 "var_use_analysis.m"
}

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__rec_disj_var_first_use_2_7_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 1257 "var_use_analysis.m"
{
#line 1257 "var_use_analysis.m"
  {
#line 1257 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1257 "var_use_analysis.m"
    MR_Word var_use_analysis__conv0_LambdaHeadVar__2_14;

#line 1257 "var_use_analysis.m"
    {
#line 1257 "var_use_analysis.m"
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_LambdaHeadVar__2_14);
    }
#line 1257 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1257 "var_use_analysis.m"
      {
#line 1257 "var_use_analysis.m"
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv0_LambdaHeadVar__2_14));
#line 1257 "var_use_analysis.m"
        var_use_analysis__succeeded = MR_TRUE;
#line 1257 "var_use_analysis.m"
      }
#line 1257 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
  }
#line 1257 "var_use_analysis.m"
}

#line 1429 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_disj_var_first_use_2_7_p_0(
#line 1429 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 1429 "var_use_analysis.m"
  MR_Integer var_use_analysis__DisjNum_2,
#line 1429 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_3,
#line 1429 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_4,
#line 1429 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__5_5,
#line 1429 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_6,
#line 1429 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_7)
#line 1429 "var_use_analysis.m"
{
#line 1434 "var_use_analysis.m"
  {
#line 1434 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;

#line 1434 "var_use_analysis.m"
    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1434 "var_use_analysis.m"
      {
#line 1434 "var_use_analysis.m"
        *var_use_analysis__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1434 "var_use_analysis.m"
        *var_use_analysis__STATE_VARIABLE_CostSoFar_7 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_6;
#line 1434 "var_use_analysis.m"
      }
#line 1434 "var_use_analysis.m"
    else
#line 1436 "var_use_analysis.m"
      {
#line 1436 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeInfo_18_73;
#line 1436 "var_use_analysis.m"
        MR_Word var_use_analysis__Disj_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 1436 "var_use_analysis.m"
        MR_Word var_use_analysis__Disjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 1436 "var_use_analysis.m"
        MR_Word var_use_analysis__DisjRecCalls_21;
#line 1436 "var_use_analysis.m"
        MR_Word var_use_analysis__DisjFoundFirstUse_22;
#line 1436 "var_use_analysis.m"
        MR_Word var_use_analysis__CoverageArray_23;
#line 1436 "var_use_analysis.m"
        MR_Word var_use_analysis__Coverage_24;
#line 1436 "var_use_analysis.m"
        MR_Integer var_use_analysis__Before_25;
#line 1436 "var_use_analysis.m"
        MR_Integer var_use_analysis__After_26;
#line 1436 "var_use_analysis.m"
        MR_Float var_use_analysis__CostDisjs_27;
#line 1436 "var_use_analysis.m"
        MR_Word var_use_analysis__V_34_34;
#line 1436 "var_use_analysis.m"
        MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_35_35;
#line 1436 "var_use_analysis.m"
        MR_Word var_use_analysis__V_36_36;
#line 1436 "var_use_analysis.m"
        MR_Word var_use_analysis__V_66_66;
#line 1441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_46_46;
#line 1441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_47_47;
#line 1441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_48_48;
#line 1441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_49_49;
#line 1441 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_50_50;
#line 1441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_51_51;
#line 1441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_52_52;
#line 1441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_53_53;
#line 1441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_54_54;
#line 1441 "var_use_analysis.m"
        MR_Word var_use_analysis__V_55_55;
#line 1442 "var_use_analysis.m"
        MR_Word var_use_analysis__V_56_56;
#line 1442 "var_use_analysis.m"
        MR_Word var_use_analysis__V_57_57;
#line 1442 "var_use_analysis.m"
        MR_Box var_use_analysis__conv1_Coverage_24;

#line 1437 "var_use_analysis.m"
        {
#line 1437 "var_use_analysis.m"
          var_use_analysis__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "var_use_analysis.m"
          MR_hl_field(MR_mktag(2), var_use_analysis__V_34_34, 0) = ((MR_Box) (var_use_analysis__DisjNum_2));
#line 1437 "var_use_analysis.m"
        }
#line 1257 "var_use_analysis.m"
        {
#line 1257 "var_use_analysis.m"
          var_use_analysis__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_66_66, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_66_66, 1) = ((MR_Box) (var_use_analysis__rec_disj_var_first_use_2_7_p_0_1));
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_66_66, 3) = ((MR_Box) (var_use_analysis__V_34_34));
#line 1257 "var_use_analysis.m"
        }
#line 9527 "var_use_analysis.c"
        var_use_analysis__TypeInfo_18_73 = (MR_Word) &var_use_analysis_scalar_common_2[4];
#line 1257 "var_use_analysis.m"
        {
#line 1257 "var_use_analysis.m"
          mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_73, var_use_analysis__TypeInfo_18_73, var_use_analysis__V_66_66, var_use_analysis__RecCalls_3, &var_use_analysis__DisjRecCalls_21);
        }
#line 1438 "var_use_analysis.m"
        {
#line 1438 "var_use_analysis.m"
          var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Disj_14, var_use_analysis__DisjRecCalls_21, var_use_analysis__Info_4, &var_use_analysis__DisjFoundFirstUse_22, var_use_analysis__STATE_VARIABLE_CostSoFar_0_6, &var_use_analysis__STATE_VARIABLE_CostSoFar_35_35);
        }
#line 1441 "var_use_analysis.m"
        var_use_analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 0)));
#line 1441 "var_use_analysis.m"
        var_use_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 1)));
#line 1441 "var_use_analysis.m"
        var_use_analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 2)));
#line 1441 "var_use_analysis.m"
        var_use_analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 3)));
#line 1441 "var_use_analysis.m"
        var_use_analysis__CoverageArray_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 4)));
#line 1441 "var_use_analysis.m"
        var_use_analysis__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 5)));
#line 1441 "var_use_analysis.m"
        var_use_analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 6)));
#line 1441 "var_use_analysis.m"
        var_use_analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 7)));
#line 1441 "var_use_analysis.m"
        var_use_analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 8)));
#line 1441 "var_use_analysis.m"
        var_use_analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 9)));
#line 1441 "var_use_analysis.m"
        var_use_analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 10)));
#line 1442 "var_use_analysis.m"
        var_use_analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_14, (MR_Integer) 0)));
#line 1442 "var_use_analysis.m"
        var_use_analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_14, (MR_Integer) 1)));
#line 1442 "var_use_analysis.m"
        var_use_analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_14, (MR_Integer) 2)));
#line 1442 "var_use_analysis.m"
        {
#line 1442 "var_use_analysis.m"
          var_use_analysis__conv1_Coverage_24 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__CoverageArray_23, var_use_analysis__V_36_36);
        }
#line 1442 "var_use_analysis.m"
        var_use_analysis__Coverage_24 = ((MR_Word) var_use_analysis__conv1_Coverage_24);
#line 1443 "var_use_analysis.m"
        {
#line 1443 "var_use_analysis.m"
          coverage__get_coverage_before_and_after_det_3_p_0(var_use_analysis__Coverage_24, &var_use_analysis__Before_25, &var_use_analysis__After_26);
        }
#line 1444 "var_use_analysis.m"
        var_use_analysis__succeeded = (var_use_analysis__Before_25 == (MR_Integer) 0);
#line 1448 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 1446 "var_use_analysis.m"
          {
#line 1446 "var_use_analysis.m"
            var_use_analysis__CostDisjs_27 = (MR_Float) 0.0000000000000000;
#line 1447 "var_use_analysis.m"
            *var_use_analysis__HeadVar__5_5 = var_use_analysis__DisjFoundFirstUse_22;
#line 1446 "var_use_analysis.m"
          }
#line 1448 "var_use_analysis.m"
        else
#line 1450 "var_use_analysis.m"
          {
#line 1450 "var_use_analysis.m"
            MR_Word var_use_analysis__DisjsFoundFirstUse_28;
#line 1450 "var_use_analysis.m"
            MR_Float var_use_analysis__CostDisjs0_29;
#line 1450 "var_use_analysis.m"
            MR_Float var_use_analysis__FailureProb_30;
#line 1450 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_37_37 = (var_use_analysis__DisjNum_2 + (MR_Integer) 1);
#line 1450 "var_use_analysis.m"
            MR_Float var_use_analysis__V_40_40;
#line 1450 "var_use_analysis.m"
            MR_Float var_use_analysis__V_41_41;
#line 1450 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_42_42;
#line 1450 "var_use_analysis.m"
            MR_Float var_use_analysis__V_43_43;
#line 1450 "var_use_analysis.m"
            MR_Float var_use_analysis__V_44_44;

#line 1449 "var_use_analysis.m"
            {
#line 1449 "var_use_analysis.m"
              var_use_analysis__rec_disj_var_first_use_2_7_p_0(var_use_analysis__Disjs_15, var_use_analysis__V_37_37, var_use_analysis__RecCalls_3, var_use_analysis__Info_4, &var_use_analysis__DisjsFoundFirstUse_28, (MR_Float) 0.0000000000000000, &var_use_analysis__CostDisjs0_29);
            }
#line 1451 "var_use_analysis.m"
            var_use_analysis__V_42_42 = (var_use_analysis__Before_25 - var_use_analysis__After_26);
#line 1451 "var_use_analysis.m"
            {
#line 1451 "var_use_analysis.m"
              var_use_analysis__V_41_41 = mercury__float__float_1_f_0(var_use_analysis__V_42_42);
            }
#line 1451 "var_use_analysis.m"
            {
#line 1451 "var_use_analysis.m"
              var_use_analysis__V_43_43 = mercury__float__float_1_f_0(var_use_analysis__Before_25);
            }
#line 1451 "var_use_analysis.m"
            {
#line 1451 "var_use_analysis.m"
              var_use_analysis__V_40_40 = mercury__float__f_slash_2_f_0(var_use_analysis__V_41_41, var_use_analysis__V_43_43);
            }
#line 1451 "var_use_analysis.m"
            {
#line 1451 "var_use_analysis.m"
              var_use_analysis__FailureProb_30 = measurement_units__probable_1_f_0(var_use_analysis__V_40_40);
            }
#line 1452 "var_use_analysis.m"
            {
#line 1452 "var_use_analysis.m"
              var_use_analysis__V_44_44 = measurement_units__probability_to_float_1_f_0(var_use_analysis__FailureProb_30);
            }
#line 1452 "var_use_analysis.m"
            var_use_analysis__CostDisjs_27 = (var_use_analysis__CostDisjs0_29 * var_use_analysis__V_44_44);
#line 1456 "var_use_analysis.m"
            if ((var_use_analysis__DisjFoundFirstUse_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1455 "var_use_analysis.m"
              *var_use_analysis__HeadVar__5_5 = var_use_analysis__DisjsFoundFirstUse_28;
#line 1456 "var_use_analysis.m"
            else
#line 1458 "var_use_analysis.m"
              *var_use_analysis__HeadVar__5_5 = var_use_analysis__DisjFoundFirstUse_22;
#line 1450 "var_use_analysis.m"
          }
#line 1461 "var_use_analysis.m"
        *var_use_analysis__STATE_VARIABLE_CostSoFar_7 = (var_use_analysis__STATE_VARIABLE_CostSoFar_35_35 + var_use_analysis__CostDisjs_27);
#line 1436 "var_use_analysis.m"
      }
#line 1434 "var_use_analysis.m"
  }
#line 1429 "var_use_analysis.m"
}

#line 1397 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_disj_var_first_use_6_p_0(
#line 1397 "var_use_analysis.m"
  MR_Word var_use_analysis__Disjs_7,
#line 1397 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_8,
#line 1397 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_9,
#line 1397 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_10,
#line 1397 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_17,
#line 1397 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_18)
#line 1397 "var_use_analysis.m"
{
#line 1402 "var_use_analysis.m"
  {
#line 1402 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1402 "var_use_analysis.m"
    MR_Word var_use_analysis__FoundFirstUse0_13;

#line 1409 "var_use_analysis.m"
    {
#line 1409 "var_use_analysis.m"
      var_use_analysis__rec_disj_var_first_use_2_7_p_0(var_use_analysis__Disjs_7, (MR_Integer) 1, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, &var_use_analysis__FoundFirstUse0_13, var_use_analysis__STATE_VARIABLE_CostSoFar_0_17, var_use_analysis__STATE_VARIABLE_CostSoFar_18);
    }
#line 1424 "var_use_analysis.m"
    if ((var_use_analysis__FoundFirstUse0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1426 "var_use_analysis.m"
      *var_use_analysis__FoundFirstUse_10 = var_use_analysis__FoundFirstUse0_13;
#line 1424 "var_use_analysis.m"
    else
#line 1413 "var_use_analysis.m"
      {
#line 1413 "var_use_analysis.m"
        MR_Word var_use_analysis__VarUseType_16;
#line 1413 "var_use_analysis.m"
        MR_Word var_use_analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 6)));
#line 1414 "var_use_analysis.m"
        MR_Word var_use_analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 0)));
#line 1414 "var_use_analysis.m"
        MR_Word var_use_analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 1)));
#line 1414 "var_use_analysis.m"
        MR_Word var_use_analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 2)));
#line 1414 "var_use_analysis.m"
        MR_Word var_use_analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 3)));
#line 1414 "var_use_analysis.m"
        MR_Word var_use_analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 4)));
#line 1414 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 5)));
#line 1414 "var_use_analysis.m"
        MR_Word var_use_analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 7)));
#line 1414 "var_use_analysis.m"
        MR_Word var_use_analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 8)));
#line 1414 "var_use_analysis.m"
        MR_Word var_use_analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 9)));
#line 1414 "var_use_analysis.m"
        MR_Word var_use_analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 10)));
#line 1414 "var_use_analysis.m"
        MR_Word var_use_analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_21_21, (MR_Integer) 0)));
#line 1414 "var_use_analysis.m"
        MR_Word var_use_analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_21_21, (MR_Integer) 1)));

#line 1414 "var_use_analysis.m"
        var_use_analysis__VarUseType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_21_21, (MR_Integer) 2)));
#line 1418 "var_use_analysis.m"
#line 1418 "var_use_analysis.m"
        switch (var_use_analysis__VarUseType_16) {
#line 1418 "var_use_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1418 "var_use_analysis.m"
          case (MR_Integer) 1:
#line 1417 "var_use_analysis.m"
            {
#line 1417 "var_use_analysis.m"
              MR_Word base;
#line 1417 "var_use_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1417 "var_use_analysis.m"
              *var_use_analysis__FoundFirstUse_10 = base;
#line 1417 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__STATE_VARIABLE_CostSoFar_0_17);
#line 1417 "var_use_analysis.m"
            }
#line 1418 "var_use_analysis.m"
            break;
#line 1418 "var_use_analysis.m"
          case (MR_Integer) 2:
#line 1418 "var_use_analysis.m"
          case (MR_Integer) 0:
#line 1422 "var_use_analysis.m"
            {
#line 1422 "var_use_analysis.m"
              MR_Word base;
#line 1422 "var_use_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "var_use_analysis.m"
              *var_use_analysis__FoundFirstUse_10 = base;
#line 1422 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(*var_use_analysis__STATE_VARIABLE_CostSoFar_18);
#line 1422 "var_use_analysis.m"
            }
#line 1418 "var_use_analysis.m"
            break;
#line 1418 "var_use_analysis.m"
        }
#line 1413 "var_use_analysis.m"
      }
#line 1402 "var_use_analysis.m"
  }
#line 1397 "var_use_analysis.m"
}

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__rec_conj_var_first_use_7_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 1257 "var_use_analysis.m"
{
#line 1257 "var_use_analysis.m"
  {
#line 1257 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1257 "var_use_analysis.m"
    MR_Word var_use_analysis__conv0_LambdaHeadVar__2_14;

#line 1257 "var_use_analysis.m"
    {
#line 1257 "var_use_analysis.m"
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_LambdaHeadVar__2_14);
    }
#line 1257 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1257 "var_use_analysis.m"
      {
#line 1257 "var_use_analysis.m"
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv0_LambdaHeadVar__2_14));
#line 1257 "var_use_analysis.m"
        var_use_analysis__succeeded = MR_TRUE;
#line 1257 "var_use_analysis.m"
      }
#line 1257 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
  }
#line 1257 "var_use_analysis.m"
}

#line 1365 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_conj_var_first_use_7_p_0(
#line 1365 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 1365 "var_use_analysis.m"
  MR_Integer var_use_analysis__ConjNum_2,
#line 1365 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_3,
#line 1365 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_4,
#line 1365 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__5_5,
#line 1365 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_6,
#line 1365 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_7)
#line 1365 "var_use_analysis.m"
{
#line 1370 "var_use_analysis.m"
  {
#line 1370 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;

#line 1370 "var_use_analysis.m"
    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1370 "var_use_analysis.m"
      {
#line 1370 "var_use_analysis.m"
        *var_use_analysis__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1370 "var_use_analysis.m"
        *var_use_analysis__STATE_VARIABLE_CostSoFar_7 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_6;
#line 1370 "var_use_analysis.m"
      }
#line 1370 "var_use_analysis.m"
    else
#line 1372 "var_use_analysis.m"
      {
#line 1372 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeInfo_18_46;
#line 1372 "var_use_analysis.m"
        MR_Word var_use_analysis__Conj_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 1372 "var_use_analysis.m"
        MR_Word var_use_analysis__Conjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 1372 "var_use_analysis.m"
        MR_Word var_use_analysis__ConjRecCalls_21;
#line 1372 "var_use_analysis.m"
        MR_Word var_use_analysis__ConjFoundFirstUse_22;
#line 1372 "var_use_analysis.m"
        MR_Word var_use_analysis__ConjsFoundFirstUse_23;
#line 1372 "var_use_analysis.m"
        MR_Word var_use_analysis__V_27_27;
#line 1372 "var_use_analysis.m"
        MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_28_28;
#line 1372 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_29_29;
#line 1372 "var_use_analysis.m"
        MR_Word var_use_analysis__V_39_39;

#line 1373 "var_use_analysis.m"
        {
#line 1373 "var_use_analysis.m"
          var_use_analysis__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), var_use_analysis__V_27_27, 0) = ((MR_Box) (var_use_analysis__ConjNum_2));
#line 1373 "var_use_analysis.m"
        }
#line 1257 "var_use_analysis.m"
        {
#line 1257 "var_use_analysis.m"
          var_use_analysis__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_39_39, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_39_39, 1) = ((MR_Box) (var_use_analysis__rec_conj_var_first_use_7_p_0_1));
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1257 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__V_39_39, 3) = ((MR_Box) (var_use_analysis__V_27_27));
#line 1257 "var_use_analysis.m"
        }
#line 9906 "var_use_analysis.c"
        var_use_analysis__TypeInfo_18_46 = (MR_Word) &var_use_analysis_scalar_common_2[4];
#line 1257 "var_use_analysis.m"
        {
#line 1257 "var_use_analysis.m"
          mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_46, var_use_analysis__TypeInfo_18_46, var_use_analysis__V_39_39, var_use_analysis__RecCalls_3, &var_use_analysis__ConjRecCalls_21);
        }
#line 1374 "var_use_analysis.m"
        {
#line 1374 "var_use_analysis.m"
          var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Conj_14, var_use_analysis__ConjRecCalls_21, var_use_analysis__StaticInfo_4, &var_use_analysis__ConjFoundFirstUse_22, var_use_analysis__STATE_VARIABLE_CostSoFar_0_6, &var_use_analysis__STATE_VARIABLE_CostSoFar_28_28);
        }
#line 1376 "var_use_analysis.m"
        var_use_analysis__V_29_29 = (var_use_analysis__ConjNum_2 + (MR_Integer) 1);
#line 1376 "var_use_analysis.m"
        {
#line 1376 "var_use_analysis.m"
          var_use_analysis__rec_conj_var_first_use_7_p_0(var_use_analysis__Conjs_15, var_use_analysis__V_29_29, var_use_analysis__RecCalls_3, var_use_analysis__StaticInfo_4, &var_use_analysis__ConjsFoundFirstUse_23, var_use_analysis__STATE_VARIABLE_CostSoFar_28_28, var_use_analysis__STATE_VARIABLE_CostSoFar_7);
        }
#line 1385 "var_use_analysis.m"
        if ((var_use_analysis__ConjFoundFirstUse_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1394 "var_use_analysis.m"
          *var_use_analysis__HeadVar__5_5 = var_use_analysis__ConjsFoundFirstUse_23;
#line 1385 "var_use_analysis.m"
        else
#line 1384 "var_use_analysis.m"
          *var_use_analysis__HeadVar__5_5 = var_use_analysis__ConjFoundFirstUse_22;
#line 1372 "var_use_analysis.m"
      }
#line 1370 "var_use_analysis.m"
  }
#line 1365 "var_use_analysis.m"
}

#line 1271 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__rec_goal_var_first_use_6_p_0(
#line 1271 "var_use_analysis.m"
  MR_Word var_use_analysis__Goal_7,
#line 1271 "var_use_analysis.m"
  MR_Word var_use_analysis__RecCalls_8,
#line 1271 "var_use_analysis.m"
  MR_Word var_use_analysis__Info_9,
#line 1271 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_10,
#line 1271 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_70,
#line 1271 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_71)
#line 1271 "var_use_analysis.m"
{
#line 1277 "var_use_analysis.m"
  while (MR_TRUE)
#line 1277 "var_use_analysis.m"
    {
#line 1277 "var_use_analysis.m"
      /* tailcall optimized into a loop */
#line 1277 "var_use_analysis.m"
      {
#line 1277 "var_use_analysis.m"
        MR_bool var_use_analysis__succeeded;
#line 1277 "var_use_analysis.m"
        MR_Word var_use_analysis__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_7, (MR_Integer) 0)));
#line 1277 "var_use_analysis.m"
        MR_Word var_use_analysis__Detism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_7, (MR_Integer) 1)));
#line 1277 "var_use_analysis.m"
        MR_Word var_use_analysis__GoalId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_7, (MR_Integer) 2)));
#line 1277 "var_use_analysis.m"
        MR_Word var_use_analysis__Coverage_15;
#line 1277 "var_use_analysis.m"
        MR_Integer var_use_analysis__Before_16;
#line 1277 "var_use_analysis.m"
        MR_Integer var_use_analysis__After_17;
#line 1277 "var_use_analysis.m"
        MR_Word var_use_analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 4)));
#line 1279 "var_use_analysis.m"
        MR_Word var_use_analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 0)));
#line 1279 "var_use_analysis.m"
        MR_Word var_use_analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 1)));
#line 1279 "var_use_analysis.m"
        MR_Word var_use_analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 2)));
#line 1279 "var_use_analysis.m"
        MR_Word var_use_analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 3)));
#line 1279 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 5)));
#line 1279 "var_use_analysis.m"
        MR_Word var_use_analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 6)));
#line 1279 "var_use_analysis.m"
        MR_Word var_use_analysis__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 7)));
#line 1279 "var_use_analysis.m"
        MR_Word var_use_analysis__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 8)));
#line 1279 "var_use_analysis.m"
        MR_Word var_use_analysis__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 9)));
#line 1279 "var_use_analysis.m"
        MR_Word var_use_analysis__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 10)));
#line 1279 "var_use_analysis.m"
        MR_Box var_use_analysis__conv0_Coverage_15;

#line 1279 "var_use_analysis.m"
        {
#line 1279 "var_use_analysis.m"
          var_use_analysis__conv0_Coverage_15 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__V_72_72, var_use_analysis__GoalId_14);
        }
#line 1279 "var_use_analysis.m"
        var_use_analysis__Coverage_15 = ((MR_Word) var_use_analysis__conv0_Coverage_15);
#line 1280 "var_use_analysis.m"
        {
#line 1280 "var_use_analysis.m"
          coverage__get_coverage_before_and_after_det_3_p_0(var_use_analysis__Coverage_15, &var_use_analysis__Before_16, &var_use_analysis__After_17);
        }
#line 1285 "var_use_analysis.m"
        var_use_analysis__succeeded = (var_use_analysis__Before_16 == (MR_Integer) 0);
#line 1286 "var_use_analysis.m"
        if (!(var_use_analysis__succeeded))
#line 1287 "var_use_analysis.m"
          {
#line 1287 "var_use_analysis.m"
            MR_Word var_use_analysis__VarUseType_18;
#line 1287 "var_use_analysis.m"
            MR_Word var_use_analysis__V_73_73;
#line 1287 "var_use_analysis.m"
            MR_Word var_use_analysis__V_100_100;
#line 1287 "var_use_analysis.m"
            MR_Word var_use_analysis__V_101_101;
#line 1287 "var_use_analysis.m"
            MR_Word var_use_analysis__V_102_102;
#line 1287 "var_use_analysis.m"
            MR_Word var_use_analysis__V_103_103;
#line 1287 "var_use_analysis.m"
            MR_Word var_use_analysis__V_104_104;
#line 1287 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_105_105;
#line 1287 "var_use_analysis.m"
            MR_Word var_use_analysis__V_106_106;
#line 1287 "var_use_analysis.m"
            MR_Word var_use_analysis__V_107_107;
#line 1287 "var_use_analysis.m"
            MR_Word var_use_analysis__V_108_108;
#line 1287 "var_use_analysis.m"
            MR_Word var_use_analysis__V_109_109;
#line 1287 "var_use_analysis.m"
            MR_Word var_use_analysis__V_110_110;
#line 1287 "var_use_analysis.m"
            MR_Word var_use_analysis__V_111_111;

#line 1290 "var_use_analysis.m"
#line 1290 "var_use_analysis.m"
            switch (var_use_analysis__Detism_13) {
#line 1290 "var_use_analysis.m"
              default:
#line 1290 "var_use_analysis.m"
                var_use_analysis__succeeded = MR_FALSE;
#line 1290 "var_use_analysis.m"
                break;
#line 1290 "var_use_analysis.m"
              case (MR_Integer) 6:
#line 1289 "var_use_analysis.m"
                var_use_analysis__succeeded = MR_TRUE;
#line 1290 "var_use_analysis.m"
                break;
#line 1290 "var_use_analysis.m"
              case (MR_Integer) 7:
#line 1290 "var_use_analysis.m"
                var_use_analysis__succeeded = MR_TRUE;
#line 1290 "var_use_analysis.m"
                break;
#line 1290 "var_use_analysis.m"
            }
#line 1290 "var_use_analysis.m"
            if (!(var_use_analysis__succeeded))
#line 1291 "var_use_analysis.m"
              var_use_analysis__succeeded = (var_use_analysis__After_17 == (MR_Integer) 0);
#line 1287 "var_use_analysis.m"
            if (var_use_analysis__succeeded)
#line 1287 "var_use_analysis.m"
              {
#line 1287 "var_use_analysis.m"
                var_use_analysis__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 0)));
#line 1287 "var_use_analysis.m"
                var_use_analysis__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 1)));
#line 1287 "var_use_analysis.m"
                var_use_analysis__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 2)));
#line 1287 "var_use_analysis.m"
                var_use_analysis__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 3)));
#line 1287 "var_use_analysis.m"
                var_use_analysis__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 4)));
#line 1287 "var_use_analysis.m"
                var_use_analysis__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 5)));
#line 1287 "var_use_analysis.m"
                var_use_analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 6)));
#line 1287 "var_use_analysis.m"
                var_use_analysis__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 7)));
#line 1287 "var_use_analysis.m"
                var_use_analysis__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 8)));
#line 1287 "var_use_analysis.m"
                var_use_analysis__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 9)));
#line 1287 "var_use_analysis.m"
                var_use_analysis__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 10)));
#line 1287 "var_use_analysis.m"
                var_use_analysis__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_73_73, (MR_Integer) 0)));
#line 1287 "var_use_analysis.m"
                var_use_analysis__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_73_73, (MR_Integer) 1)));
#line 1287 "var_use_analysis.m"
                var_use_analysis__VarUseType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_73_73, (MR_Integer) 2)));
#line 1288 "var_use_analysis.m"
                var_use_analysis__succeeded = (var_use_analysis__VarUseType_18 == (MR_Integer) 0);
#line 1287 "var_use_analysis.m"
              }
#line 1287 "var_use_analysis.m"
          }
#line 1296 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 1295 "var_use_analysis.m"
          {
#line 1295 "var_use_analysis.m"
            *var_use_analysis__FoundFirstUse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1295 "var_use_analysis.m"
            *var_use_analysis__STATE_VARIABLE_CostSoFar_71 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_70;
#line 1295 "var_use_analysis.m"
          }
#line 1296 "var_use_analysis.m"
        else
#line 1301 "var_use_analysis.m"
#line 1301 "var_use_analysis.m"
          switch (MR_tag((MR_Word) var_use_analysis__GoalExpr_12)) {
#line 1301 "var_use_analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1301 "var_use_analysis.m"
            case (MR_Integer) 0:
#line 1298 "var_use_analysis.m"
              {
#line 1298 "var_use_analysis.m"
                MR_Word var_use_analysis__Conjs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));

#line 1299 "var_use_analysis.m"
                {
#line 1299 "var_use_analysis.m"
                  var_use_analysis__rec_conj_var_first_use_7_p_0(var_use_analysis__Conjs_19, (MR_Integer) 1, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__FoundFirstUse_10, var_use_analysis__STATE_VARIABLE_CostSoFar_0_70, var_use_analysis__STATE_VARIABLE_CostSoFar_71);
#line 1299 "var_use_analysis.m"
                  return;
                }
#line 1298 "var_use_analysis.m"
              }
#line 1301 "var_use_analysis.m"
              break;
#line 1301 "var_use_analysis.m"
            case (MR_Integer) 1:
#line 1302 "var_use_analysis.m"
              {
#line 1302 "var_use_analysis.m"
                MR_Word var_use_analysis__Disjs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));

#line 1303 "var_use_analysis.m"
                {
#line 1303 "var_use_analysis.m"
                  var_use_analysis__rec_disj_var_first_use_6_p_0(var_use_analysis__Disjs_20, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__FoundFirstUse_10, var_use_analysis__STATE_VARIABLE_CostSoFar_0_70, var_use_analysis__STATE_VARIABLE_CostSoFar_71);
#line 1303 "var_use_analysis.m"
                  return;
                }
#line 1302 "var_use_analysis.m"
              }
#line 1301 "var_use_analysis.m"
              break;
#line 1301 "var_use_analysis.m"
            case (MR_Integer) 2:
#line 1306 "var_use_analysis.m"
              {
#line 1306 "var_use_analysis.m"
                MR_Integer var_use_analysis__SwitchedOnVar_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));
#line 1306 "var_use_analysis.m"
                MR_Word var_use_analysis__Cases_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
#line 1306 "var_use_analysis.m"
                MR_Word var_use_analysis___CanFail_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));

#line 1307 "var_use_analysis.m"
                {
#line 1307 "var_use_analysis.m"
                  var_use_analysis__rec_switch_var_first_use_7_p_0(var_use_analysis__Cases_23, var_use_analysis__SwitchedOnVar_21, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__FoundFirstUse_10, var_use_analysis__STATE_VARIABLE_CostSoFar_0_70, var_use_analysis__STATE_VARIABLE_CostSoFar_71);
#line 1307 "var_use_analysis.m"
                  return;
                }
#line 1306 "var_use_analysis.m"
              }
#line 1301 "var_use_analysis.m"
              break;
#line 1301 "var_use_analysis.m"
            case (MR_Integer) 3:
#line 1301 "var_use_analysis.m"
#line 1301 "var_use_analysis.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 0)))) {
#line 1301 "var_use_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1301 "var_use_analysis.m"
                case (MR_Integer) 0:
#line 1310 "var_use_analysis.m"
                  {
#line 1310 "var_use_analysis.m"
                    MR_Word var_use_analysis__Cond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
#line 1310 "var_use_analysis.m"
                    MR_Word var_use_analysis__Then_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
#line 1310 "var_use_analysis.m"
                    MR_Word var_use_analysis__Else_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 3)));

#line 1311 "var_use_analysis.m"
                    {
#line 1311 "var_use_analysis.m"
                      var_use_analysis__rec_ite_var_first_use_8_p_0(var_use_analysis__Cond_24, var_use_analysis__Then_25, var_use_analysis__Else_26, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__FoundFirstUse_10, var_use_analysis__STATE_VARIABLE_CostSoFar_0_70, var_use_analysis__STATE_VARIABLE_CostSoFar_71);
#line 1311 "var_use_analysis.m"
                      return;
                    }
#line 1310 "var_use_analysis.m"
                  }
#line 1301 "var_use_analysis.m"
                  break;
#line 1301 "var_use_analysis.m"
                case (MR_Integer) 1:
#line 1320 "var_use_analysis.m"
                  {
#line 1320 "var_use_analysis.m"
                    MR_Word var_use_analysis__SubGoal_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
#line 1320 "var_use_analysis.m"
                    MR_Word var_use_analysis__RecCallsSubGoal_30;

#line 1321 "var_use_analysis.m"
                    {
#line 1321 "var_use_analysis.m"
                      var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), var_use_analysis__RecCalls_8, &var_use_analysis__RecCallsSubGoal_30);
                    }
#line 1323 "var_use_analysis.m"
                    /* direct tailcall eliminated */
#line 1323 "var_use_analysis.m"
                    {
#line 1323 "var_use_analysis.m"
                      MR_Word var_use_analysis__Goal__tmp_copy_7 = var_use_analysis__SubGoal_27;
#line 1323 "var_use_analysis.m"
                      MR_Word var_use_analysis__RecCalls__tmp_copy_8 = var_use_analysis__RecCallsSubGoal_30;

#line 1323 "var_use_analysis.m"
                      var_use_analysis__RecCalls_8 = var_use_analysis__RecCalls__tmp_copy_8;
#line 1323 "var_use_analysis.m"
                      var_use_analysis__Goal_7 = var_use_analysis__Goal__tmp_copy_7;
#line 1323 "var_use_analysis.m"
                    }
#line 1323 "var_use_analysis.m"
                    continue;
#line 1320 "var_use_analysis.m"
                  }
#line 1301 "var_use_analysis.m"
                  break;
#line 1301 "var_use_analysis.m"
                case (MR_Integer) 2:
#line 1320 "var_use_analysis.m"
                  {
#line 1320 "var_use_analysis.m"
                    MR_Word var_use_analysis__ScopeIsCut_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
#line 1320 "var_use_analysis.m"
                    MR_Word var_use_analysis__SubGoal_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
#line 1320 "var_use_analysis.m"
                    MR_Word var_use_analysis__GoalPathStep_134;
#line 1320 "var_use_analysis.m"
                    MR_Word var_use_analysis__RecCallsSubGoal_135;

#line 1319 "var_use_analysis.m"
                    {
#line 1319 "var_use_analysis.m"
                      var_use_analysis__GoalPathStep_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1319 "var_use_analysis.m"
                      MR_hl_field(MR_mktag(3), var_use_analysis__GoalPathStep_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1319 "var_use_analysis.m"
                      MR_hl_field(MR_mktag(3), var_use_analysis__GoalPathStep_134, 1) = ((MR_Box) (var_use_analysis__ScopeIsCut_29));
#line 1319 "var_use_analysis.m"
                    }
#line 1321 "var_use_analysis.m"
                    {
#line 1321 "var_use_analysis.m"
                      var_use_analysis__filter_recursive_call_sites_3_p_0(var_use_analysis__GoalPathStep_134, var_use_analysis__RecCalls_8, &var_use_analysis__RecCallsSubGoal_135);
                    }
#line 1323 "var_use_analysis.m"
                    /* direct tailcall eliminated */
#line 1323 "var_use_analysis.m"
                    {
#line 1323 "var_use_analysis.m"
                      MR_Word var_use_analysis__Goal__tmp_copy_7 = var_use_analysis__SubGoal_133;
#line 1323 "var_use_analysis.m"
                      MR_Word var_use_analysis__RecCalls__tmp_copy_8 = var_use_analysis__RecCallsSubGoal_135;

#line 1323 "var_use_analysis.m"
                      var_use_analysis__RecCalls_8 = var_use_analysis__RecCalls__tmp_copy_8;
#line 1323 "var_use_analysis.m"
                      var_use_analysis__Goal_7 = var_use_analysis__Goal__tmp_copy_7;
#line 1323 "var_use_analysis.m"
                    }
#line 1323 "var_use_analysis.m"
                    continue;
#line 1320 "var_use_analysis.m"
                  }
#line 1301 "var_use_analysis.m"
                  break;
#line 1301 "var_use_analysis.m"
                case (MR_Integer) 3:
#line 1326 "var_use_analysis.m"
                  {
#line 1326 "var_use_analysis.m"
                    MR_Word var_use_analysis__BoundVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 3)));
#line 1326 "var_use_analysis.m"
                    MR_Word var_use_analysis__AtomicGoal_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 4)));
#line 1326 "var_use_analysis.m"
                    MR_String var_use_analysis__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
#line 1326 "var_use_analysis.m"
                    MR_Integer var_use_analysis__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));

#line 1337 "var_use_analysis.m"
#line 1337 "var_use_analysis.m"
                    switch (MR_tag((MR_Word) var_use_analysis__AtomicGoal_34)) {
#line 1337 "var_use_analysis.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1337 "var_use_analysis.m"
                      case (MR_Integer) 0:
#line 1337 "var_use_analysis.m"
                      case (MR_Integer) 1:
#line 1337 "var_use_analysis.m"
                      case (MR_Integer) 2:
#line 1348 "var_use_analysis.m"
                        {
#line 1350 "var_use_analysis.m"
                          {
#line 1350 "var_use_analysis.m"
                            var_use_analysis__atomic_trivial_var_first_use_5_p_0(var_use_analysis__AtomicGoal_34, var_use_analysis__BoundVars_33, var_use_analysis__STATE_VARIABLE_CostSoFar_0_70, var_use_analysis__Info_9, var_use_analysis__FoundFirstUse_10);
                          }
#line 1348 "var_use_analysis.m"
                          *var_use_analysis__STATE_VARIABLE_CostSoFar_71 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_70;
#line 1348 "var_use_analysis.m"
                        }
#line 1337 "var_use_analysis.m"
                        break;
#line 1337 "var_use_analysis.m"
                      case (MR_Integer) 3:
#line 1337 "var_use_analysis.m"
#line 1337 "var_use_analysis.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_34, (MR_Integer) 0)))) {
#line 1337 "var_use_analysis.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1337 "var_use_analysis.m"
                          case (MR_Integer) 0:
#line 1337 "var_use_analysis.m"
                          case (MR_Integer) 1:
#line 1337 "var_use_analysis.m"
                          case (MR_Integer) 2:
#line 1337 "var_use_analysis.m"
                          case (MR_Integer) 3:
#line 1337 "var_use_analysis.m"
                          case (MR_Integer) 4:
#line 1337 "var_use_analysis.m"
                          case (MR_Integer) 8:
#line 1337 "var_use_analysis.m"
                          case (MR_Integer) 9:
#line 1348 "var_use_analysis.m"
                            {
#line 1350 "var_use_analysis.m"
                              {
#line 1350 "var_use_analysis.m"
                                var_use_analysis__atomic_trivial_var_first_use_5_p_0(var_use_analysis__AtomicGoal_34, var_use_analysis__BoundVars_33, var_use_analysis__STATE_VARIABLE_CostSoFar_0_70, var_use_analysis__Info_9, var_use_analysis__FoundFirstUse_10);
                              }
#line 1348 "var_use_analysis.m"
                              *var_use_analysis__STATE_VARIABLE_CostSoFar_71 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_70;
#line 1348 "var_use_analysis.m"
                            }
#line 1337 "var_use_analysis.m"
                            break;
#line 1337 "var_use_analysis.m"
                          case (MR_Integer) 5:
#line 1337 "var_use_analysis.m"
                          case (MR_Integer) 6:
#line 1337 "var_use_analysis.m"
                          case (MR_Integer) 7:
#line 1331 "var_use_analysis.m"
                            {
#line 1331 "var_use_analysis.m"
                              MR_Word var_use_analysis__ContainingGoalMap_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 3)));
#line 1331 "var_use_analysis.m"
                              MR_Word var_use_analysis__RevGoalPath_44;
#line 1332 "var_use_analysis.m"
                              MR_Word var_use_analysis__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 0)));
#line 1332 "var_use_analysis.m"
                              MR_Word var_use_analysis__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 1)));
#line 1332 "var_use_analysis.m"
                              MR_Word var_use_analysis__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 2)));
#line 1332 "var_use_analysis.m"
                              MR_Word var_use_analysis__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 4)));
#line 1332 "var_use_analysis.m"
                              MR_Integer var_use_analysis__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 5)));
#line 1332 "var_use_analysis.m"
                              MR_Word var_use_analysis__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 6)));
#line 1332 "var_use_analysis.m"
                              MR_Word var_use_analysis__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 7)));
#line 1332 "var_use_analysis.m"
                              MR_Word var_use_analysis__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 8)));
#line 1332 "var_use_analysis.m"
                              MR_Word var_use_analysis__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 9)));
#line 1332 "var_use_analysis.m"
                              MR_Word var_use_analysis__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 10)));

#line 1333 "var_use_analysis.m"
                              {
#line 1333 "var_use_analysis.m"
                                var_use_analysis__RevGoalPath_44 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(var_use_analysis__ContainingGoalMap_43, var_use_analysis__GoalId_14);
                              }
#line 1335 "var_use_analysis.m"
                              {
#line 1335 "var_use_analysis.m"
                                var_use_analysis__call_var_first_use_7_p_0(var_use_analysis__AtomicGoal_34, var_use_analysis__BoundVars_33, var_use_analysis__RevGoalPath_44, var_use_analysis__Info_9, var_use_analysis__FoundFirstUse_10, var_use_analysis__STATE_VARIABLE_CostSoFar_0_70, var_use_analysis__STATE_VARIABLE_CostSoFar_71);
#line 1335 "var_use_analysis.m"
                                return;
                              }
#line 1331 "var_use_analysis.m"
                            }
#line 1337 "var_use_analysis.m"
                            break;
#line 1337 "var_use_analysis.m"
                        }
#line 1337 "var_use_analysis.m"
                        break;
#line 1337 "var_use_analysis.m"
                    }
#line 1326 "var_use_analysis.m"
                  }
#line 1301 "var_use_analysis.m"
                  break;
#line 1301 "var_use_analysis.m"
              }
#line 1301 "var_use_analysis.m"
              break;
#line 1301 "var_use_analysis.m"
          }
#line 1277 "var_use_analysis.m"
      }
#line 1277 "var_use_analysis.m"
      break;
#line 1277 "var_use_analysis.m"
    }
#line 1271 "var_use_analysis.m"
}

#line 1257 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__filter_recursive_call_sites_3_p_0_1(
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1257 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1257 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 1257 "var_use_analysis.m"
{
#line 1257 "var_use_analysis.m"
  {
#line 1257 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1257 "var_use_analysis.m"
    MR_Word var_use_analysis__conv0_LambdaHeadVar__2_14;

#line 1257 "var_use_analysis.m"
    {
#line 1257 "var_use_analysis.m"
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_LambdaHeadVar__2_14);
    }
#line 1257 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1257 "var_use_analysis.m"
      {
#line 1257 "var_use_analysis.m"
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv0_LambdaHeadVar__2_14));
#line 1257 "var_use_analysis.m"
        var_use_analysis__succeeded = MR_TRUE;
#line 1257 "var_use_analysis.m"
      }
#line 1257 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1257 "var_use_analysis.m"
  }
#line 1257 "var_use_analysis.m"
}

#line 1253 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__filter_recursive_call_sites_3_p_0(
#line 1253 "var_use_analysis.m"
  MR_Word var_use_analysis__GoalPathStep_4,
#line 1253 "var_use_analysis.m"
  MR_Word var_use_analysis__STATE_VARIABLE_RecCallSites_0_9,
#line 1253 "var_use_analysis.m"
  MR_Word * var_use_analysis__STATE_VARIABLE_RecCallSites_10)
#line 1253 "var_use_analysis.m"
{
#line 1256 "var_use_analysis.m"
  {
#line 1256 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1256 "var_use_analysis.m"
    MR_Word var_use_analysis__TypeInfo_18_18;
#line 1256 "var_use_analysis.m"
    MR_Word var_use_analysis__V_11_11;

#line 1257 "var_use_analysis.m"
    {
#line 1257 "var_use_analysis.m"
      var_use_analysis__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_11_11, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
#line 1257 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_11_11, 1) = ((MR_Box) (var_use_analysis__filter_recursive_call_sites_3_p_0_1));
#line 1257 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1257 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_11_11, 3) = ((MR_Box) (var_use_analysis__GoalPathStep_4));
#line 1257 "var_use_analysis.m"
    }
#line 10525 "var_use_analysis.c"
    var_use_analysis__TypeInfo_18_18 = (MR_Word) &var_use_analysis_scalar_common_2[4];
#line 1257 "var_use_analysis.m"
    {
#line 1257 "var_use_analysis.m"
      mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_18, var_use_analysis__TypeInfo_18_18, var_use_analysis__V_11_11, var_use_analysis__STATE_VARIABLE_RecCallSites_0_9, var_use_analysis__STATE_VARIABLE_RecCallSites_10);
#line 1257 "var_use_analysis.m"
      return;
    }
#line 1256 "var_use_analysis.m"
  }
#line 1253 "var_use_analysis.m"
}

#line 1247 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__build_recursive_call_sites_list_2_p_0_1(
#line 1247 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1247 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1247 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 1247 "var_use_analysis.m"
{
#line 1247 "var_use_analysis.m"
  {
#line 1247 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1247 "var_use_analysis.m"
    MR_Word var_use_analysis__conv0_LambdaHeadVar__2_12;

#line 1247 "var_use_analysis.m"
    {
#line 1247 "var_use_analysis.m"
      var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1247__1_2_p_0(((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_LambdaHeadVar__2_12);
    }
#line 1247 "var_use_analysis.m"
    *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv0_LambdaHeadVar__2_12));
#line 1247 "var_use_analysis.m"
  }
#line 1247 "var_use_analysis.m"
}

#line 1241 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__build_recursive_call_sites_list_2_p_0(
#line 1241 "var_use_analysis.m"
  MR_Word var_use_analysis__Map_3,
#line 1241 "var_use_analysis.m"
  MR_Word * var_use_analysis__List_4)
#line 1241 "var_use_analysis.m"
{
#line 1245 "var_use_analysis.m"
  {
#line 1245 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1245 "var_use_analysis.m"
    MR_Word var_use_analysis__List0_5;

#line 1246 "var_use_analysis.m"
    {
#line 1246 "var_use_analysis.m"
      var_use_analysis__List0_5 = mercury__map__to_assoc_list_1_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0, var_use_analysis__Map_3);
    }
#line 1247 "var_use_analysis.m"
    {
#line 1247 "var_use_analysis.m"
      mercury__list__map_3_p_0((MR_Word) &var_use_analysis_scalar_common_2[3], (MR_Word) &var_use_analysis_scalar_common_2[4], (MR_Word) &var_use_analysis_scalar_common_2[9], var_use_analysis__List0_5, var_use_analysis__List_4);
#line 1247 "var_use_analysis.m"
      return;
    }
#line 1245 "var_use_analysis.m"
  }
#line 1241 "var_use_analysis.m"
}

#line 1227 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__ffu_to_float_3_p_0(
#line 1227 "var_use_analysis.m"
  MR_Float var_use_analysis__Default_1,
#line 1227 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__2_2,
#line 1227 "var_use_analysis.m"
  MR_Float * var_use_analysis__HeadVar__3_3)
#line 1227 "var_use_analysis.m"
{
#line 1229 "var_use_analysis.m"
  {
#line 1229 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;

#line 1229 "var_use_analysis.m"
    if ((var_use_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1229 "var_use_analysis.m"
      *var_use_analysis__HeadVar__3_3 = var_use_analysis__Default_1;
#line 1229 "var_use_analysis.m"
    else
#line 1230 "var_use_analysis.m"
      *var_use_analysis__HeadVar__3_3 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 1229 "var_use_analysis.m"
  }
#line 1227 "var_use_analysis.m"
}

#line 1162 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__ite_var_first_use_8_p_0(
#line 1162 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_9,
#line 1162 "var_use_analysis.m"
  MR_Word var_use_analysis__Cond_10,
#line 1162 "var_use_analysis.m"
  MR_Word var_use_analysis__Then_11,
#line 1162 "var_use_analysis.m"
  MR_Word var_use_analysis__Else_12,
#line 1162 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_13,
#line 1162 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_40,
#line 1162 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_41,
#line 1162 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_15)
#line 1162 "var_use_analysis.m"
{
#line 1169 "var_use_analysis.m"
  {
#line 1169 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__TypeCtorInfo_100_100 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__CoverageArray_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 4)));
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__ThenCoverage_17;
#line 1169 "var_use_analysis.m"
    MR_Integer var_use_analysis__CountBeforeThen_18;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__ElseCoverage_19;
#line 1169 "var_use_analysis.m"
    MR_Integer var_use_analysis__CountBeforeElse_20;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__Weights_21;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__RevCondGoalPath_22;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__RevThenGoalPath_23;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__RevElseGoalPath_24;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__VarUseType_25;
#line 1169 "var_use_analysis.m"
    MR_Float var_use_analysis__CostAfterCond_27;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__CondFoundFirstUse_28;
#line 1169 "var_use_analysis.m"
    MR_Float var_use_analysis__CostAfterThen_29;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__ThenFoundFirstUse_30;
#line 1169 "var_use_analysis.m"
    MR_Float var_use_analysis__CostAfterElse_31;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__ElseFoundFirstUse_32;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Then_11, (MR_Integer) 2)));
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__V_43_43;
#line 1169 "var_use_analysis.m"
    MR_Float var_use_analysis__V_44_44;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__V_45_45;
#line 1169 "var_use_analysis.m"
    MR_Float var_use_analysis__V_46_46;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__V_51_51;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__V_52_52;
#line 1169 "var_use_analysis.m"
    MR_Word var_use_analysis__V_53_53;
#line 1170 "var_use_analysis.m"
    MR_Word var_use_analysis__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 0)));
#line 1170 "var_use_analysis.m"
    MR_Word var_use_analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 1)));
#line 1170 "var_use_analysis.m"
    MR_Word var_use_analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 2)));
#line 1170 "var_use_analysis.m"
    MR_Word var_use_analysis__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 3)));
#line 1170 "var_use_analysis.m"
    MR_Integer var_use_analysis__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 5)));
#line 1170 "var_use_analysis.m"
    MR_Word var_use_analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 6)));
#line 1170 "var_use_analysis.m"
    MR_Word var_use_analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 7)));
#line 1170 "var_use_analysis.m"
    MR_Word var_use_analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 8)));
#line 1170 "var_use_analysis.m"
    MR_Word var_use_analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 9)));
#line 1170 "var_use_analysis.m"
    MR_Word var_use_analysis__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 10)));
#line 1172 "var_use_analysis.m"
    MR_Word var_use_analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Then_11, (MR_Integer) 0)));
#line 1172 "var_use_analysis.m"
    MR_Word var_use_analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Then_11, (MR_Integer) 1)));
#line 1172 "var_use_analysis.m"
    MR_Box var_use_analysis__conv0_ThenCoverage_17;
#line 1175 "var_use_analysis.m"
    MR_Word var_use_analysis__V_86_86;
#line 1175 "var_use_analysis.m"
    MR_Word var_use_analysis__V_87_87;
#line 1175 "var_use_analysis.m"
    MR_Box var_use_analysis__conv1_ElseCoverage_19;
#line 1181 "var_use_analysis.m"
    MR_Word var_use_analysis__V_88_88;
#line 1181 "var_use_analysis.m"
    MR_Word var_use_analysis__V_89_89;
#line 1181 "var_use_analysis.m"
    MR_Word var_use_analysis__V_90_90;
#line 1181 "var_use_analysis.m"
    MR_Word var_use_analysis__V_91_91;
#line 1181 "var_use_analysis.m"
    MR_Word var_use_analysis__V_92_92;
#line 1181 "var_use_analysis.m"
    MR_Integer var_use_analysis__V_93_93;
#line 1181 "var_use_analysis.m"
    MR_Word var_use_analysis__V_94_94;
#line 1181 "var_use_analysis.m"
    MR_Word var_use_analysis__V_95_95;
#line 1181 "var_use_analysis.m"
    MR_Word var_use_analysis__V_96_96;
#line 1181 "var_use_analysis.m"
    MR_Word var_use_analysis__V_97_97;
#line 1181 "var_use_analysis.m"
    MR_Word var_use_analysis__V_98_98;
#line 1181 "var_use_analysis.m"
    MR_Word var_use_analysis__V_99_99;

#line 1172 "var_use_analysis.m"
    {
#line 1172 "var_use_analysis.m"
      var_use_analysis__conv0_ThenCoverage_17 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_100_100, var_use_analysis__CoverageArray_16, var_use_analysis__V_42_42);
    }
#line 1172 "var_use_analysis.m"
    var_use_analysis__ThenCoverage_17 = ((MR_Word) var_use_analysis__conv0_ThenCoverage_17);
#line 1173 "var_use_analysis.m"
    {
#line 1173 "var_use_analysis.m"
      coverage__get_coverage_before_det_2_p_0(var_use_analysis__ThenCoverage_17, &var_use_analysis__CountBeforeThen_18);
    }
#line 1175 "var_use_analysis.m"
    var_use_analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Else_12, (MR_Integer) 0)));
#line 1175 "var_use_analysis.m"
    var_use_analysis__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Else_12, (MR_Integer) 1)));
#line 1175 "var_use_analysis.m"
    var_use_analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Else_12, (MR_Integer) 2)));
#line 1175 "var_use_analysis.m"
    {
#line 1175 "var_use_analysis.m"
      var_use_analysis__conv1_ElseCoverage_19 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_100_100, var_use_analysis__CoverageArray_16, var_use_analysis__V_43_43);
    }
#line 1175 "var_use_analysis.m"
    var_use_analysis__ElseCoverage_19 = ((MR_Word) var_use_analysis__conv1_ElseCoverage_19);
#line 1176 "var_use_analysis.m"
    {
#line 1176 "var_use_analysis.m"
      coverage__get_coverage_before_det_2_p_0(var_use_analysis__ElseCoverage_19, &var_use_analysis__CountBeforeElse_20);
    }
#line 1177 "var_use_analysis.m"
    {
#line 1177 "var_use_analysis.m"
      var_use_analysis__V_44_44 = mercury__float__float_1_f_0(var_use_analysis__CountBeforeThen_18);
    }
#line 1177 "var_use_analysis.m"
    {
#line 1177 "var_use_analysis.m"
      var_use_analysis__V_46_46 = mercury__float__float_1_f_0(var_use_analysis__CountBeforeElse_20);
    }
#line 1177 "var_use_analysis.m"
    {
#line 1177 "var_use_analysis.m"
      var_use_analysis__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_45_45, 0) = MR_box_float(var_use_analysis__V_46_46);
#line 1177 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1177 "var_use_analysis.m"
    }
#line 1177 "var_use_analysis.m"
    {
#line 1177 "var_use_analysis.m"
      var_use_analysis__Weights_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__Weights_21, 0) = MR_box_float(var_use_analysis__V_44_44);
#line 1177 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__Weights_21, 1) = ((MR_Box) (var_use_analysis__V_45_45));
#line 1177 "var_use_analysis.m"
    }
#line 1178 "var_use_analysis.m"
    {
#line 1178 "var_use_analysis.m"
      var_use_analysis__RevCondGoalPath_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__RevCondGoalPath_22, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_9));
#line 1178 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__RevCondGoalPath_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1178 "var_use_analysis.m"
    }
#line 1179 "var_use_analysis.m"
    {
#line 1179 "var_use_analysis.m"
      var_use_analysis__RevThenGoalPath_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__RevThenGoalPath_23, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_9));
#line 1179 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__RevThenGoalPath_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1179 "var_use_analysis.m"
    }
#line 1180 "var_use_analysis.m"
    {
#line 1180 "var_use_analysis.m"
      var_use_analysis__RevElseGoalPath_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__RevElseGoalPath_24, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_9));
#line 1180 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__RevElseGoalPath_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1180 "var_use_analysis.m"
    }
#line 1181 "var_use_analysis.m"
    var_use_analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 0)));
#line 1181 "var_use_analysis.m"
    var_use_analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 1)));
#line 1181 "var_use_analysis.m"
    var_use_analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 2)));
#line 1181 "var_use_analysis.m"
    var_use_analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 3)));
#line 1181 "var_use_analysis.m"
    var_use_analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 4)));
#line 1181 "var_use_analysis.m"
    var_use_analysis__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 5)));
#line 1181 "var_use_analysis.m"
    var_use_analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 6)));
#line 1181 "var_use_analysis.m"
    var_use_analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 7)));
#line 1181 "var_use_analysis.m"
    var_use_analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 8)));
#line 1181 "var_use_analysis.m"
    var_use_analysis__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 9)));
#line 1181 "var_use_analysis.m"
    var_use_analysis__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 10)));
#line 1181 "var_use_analysis.m"
    var_use_analysis__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_51_51, (MR_Integer) 0)));
#line 1181 "var_use_analysis.m"
    var_use_analysis__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_51_51, (MR_Integer) 1)));
#line 1181 "var_use_analysis.m"
    var_use_analysis__VarUseType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_51_51, (MR_Integer) 2)));
#line 1183 "var_use_analysis.m"
    {
#line 1183 "var_use_analysis.m"
      var_use_analysis__goal_var_first_use_6_p_0(var_use_analysis__RevCondGoalPath_22, var_use_analysis__Cond_10, var_use_analysis__StaticInfo_13, var_use_analysis__STATE_VARIABLE_CostSoFar_0_40, &var_use_analysis__CostAfterCond_27, &var_use_analysis__CondFoundFirstUse_28);
    }
#line 1185 "var_use_analysis.m"
    {
#line 1185 "var_use_analysis.m"
      var_use_analysis__goal_var_first_use_6_p_0(var_use_analysis__RevThenGoalPath_23, var_use_analysis__Then_11, var_use_analysis__StaticInfo_13, var_use_analysis__CostAfterCond_27, &var_use_analysis__CostAfterThen_29, &var_use_analysis__ThenFoundFirstUse_30);
    }
#line 1187 "var_use_analysis.m"
    {
#line 1187 "var_use_analysis.m"
      var_use_analysis__goal_var_first_use_6_p_0(var_use_analysis__RevElseGoalPath_24, var_use_analysis__Else_12, var_use_analysis__StaticInfo_13, var_use_analysis__CostAfterCond_27, &var_use_analysis__CostAfterElse_31, &var_use_analysis__ElseFoundFirstUse_32);
    }
#line 1189 "var_use_analysis.m"
    {
#line 1189 "var_use_analysis.m"
      var_use_analysis__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_53_53, 0) = MR_box_float(var_use_analysis__CostAfterElse_31);
#line 1189 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1189 "var_use_analysis.m"
    }
#line 1189 "var_use_analysis.m"
    {
#line 1189 "var_use_analysis.m"
      var_use_analysis__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_52_52, 0) = MR_box_float(var_use_analysis__CostAfterThen_29);
#line 1189 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_52_52, 1) = ((MR_Box) (var_use_analysis__V_53_53));
#line 1189 "var_use_analysis.m"
    }
#line 1189 "var_use_analysis.m"
    {
#line 1189 "var_use_analysis.m"
      measurements__weighted_average_3_p_0(var_use_analysis__Weights_21, var_use_analysis__V_52_52, var_use_analysis__STATE_VARIABLE_CostSoFar_41);
    }
#line 1194 "var_use_analysis.m"
    if ((var_use_analysis__CondFoundFirstUse_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1201 "var_use_analysis.m"
      {
#line 1197 "var_use_analysis.m"
        var_use_analysis__succeeded = (var_use_analysis__ThenFoundFirstUse_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1197 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 1198 "var_use_analysis.m"
          var_use_analysis__succeeded = (var_use_analysis__ElseFoundFirstUse_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1201 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 1200 "var_use_analysis.m"
          *var_use_analysis__FoundFirstUse_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1201 "var_use_analysis.m"
        else
#line 1210 "var_use_analysis.m"
          {
#line 1210 "var_use_analysis.m"
            MR_Float var_use_analysis__DefaultCost_35;
#line 1210 "var_use_analysis.m"
            MR_Float var_use_analysis__ThenVarUseTime_36;
#line 1210 "var_use_analysis.m"
            MR_Float var_use_analysis__ElseVarUseTime_37;
#line 1210 "var_use_analysis.m"
            MR_Float var_use_analysis__VarUseTime_38;
#line 1210 "var_use_analysis.m"
            MR_Word var_use_analysis__V_56_56;
#line 1210 "var_use_analysis.m"
            MR_Word var_use_analysis__V_57_57;

#line 1205 "var_use_analysis.m"
#line 1205 "var_use_analysis.m"
            switch (var_use_analysis__VarUseType_25) {
#line 1205 "var_use_analysis.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1205 "var_use_analysis.m"
              case (MR_Integer) 1:
#line 1204 "var_use_analysis.m"
                var_use_analysis__DefaultCost_35 = var_use_analysis__CostAfterCond_27;
#line 1205 "var_use_analysis.m"
                break;
#line 1205 "var_use_analysis.m"
              case (MR_Integer) 2:
#line 1205 "var_use_analysis.m"
              case (MR_Integer) 0:
#line 1209 "var_use_analysis.m"
                var_use_analysis__DefaultCost_35 = *var_use_analysis__STATE_VARIABLE_CostSoFar_41;
#line 1205 "var_use_analysis.m"
                break;
#line 1205 "var_use_analysis.m"
            }
#line 1211 "var_use_analysis.m"
            {
#line 1211 "var_use_analysis.m"
              var_use_analysis__ffu_to_float_3_p_0(var_use_analysis__DefaultCost_35, var_use_analysis__ThenFoundFirstUse_30, &var_use_analysis__ThenVarUseTime_36);
            }
#line 1212 "var_use_analysis.m"
            {
#line 1212 "var_use_analysis.m"
              var_use_analysis__ffu_to_float_3_p_0(var_use_analysis__DefaultCost_35, var_use_analysis__ElseFoundFirstUse_32, &var_use_analysis__ElseVarUseTime_37);
            }
#line 1213 "var_use_analysis.m"
            {
#line 1213 "var_use_analysis.m"
              var_use_analysis__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), var_use_analysis__V_57_57, 0) = MR_box_float(var_use_analysis__ElseVarUseTime_37);
#line 1213 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), var_use_analysis__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1213 "var_use_analysis.m"
            }
#line 1213 "var_use_analysis.m"
            {
#line 1213 "var_use_analysis.m"
              var_use_analysis__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), var_use_analysis__V_56_56, 0) = MR_box_float(var_use_analysis__ThenVarUseTime_36);
#line 1213 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), var_use_analysis__V_56_56, 1) = ((MR_Box) (var_use_analysis__V_57_57));
#line 1213 "var_use_analysis.m"
            }
#line 1213 "var_use_analysis.m"
            {
#line 1213 "var_use_analysis.m"
              measurements__weighted_average_3_p_0(var_use_analysis__Weights_21, var_use_analysis__V_56_56, &var_use_analysis__VarUseTime_38);
            }
#line 1215 "var_use_analysis.m"
            {
#line 1215 "var_use_analysis.m"
              MR_Word base;
#line 1215 "var_use_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "var_use_analysis.m"
              *var_use_analysis__FoundFirstUse_15 = base;
#line 1215 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__VarUseTime_38);
#line 1215 "var_use_analysis.m"
            }
#line 1210 "var_use_analysis.m"
          }
#line 1201 "var_use_analysis.m"
      }
#line 1194 "var_use_analysis.m"
    else
#line 1193 "var_use_analysis.m"
      *var_use_analysis__FoundFirstUse_15 = var_use_analysis__CondFoundFirstUse_28;
#line 1169 "var_use_analysis.m"
  }
#line 1162 "var_use_analysis.m"
}

#line 1141 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__switch_var_first_use_2_8_p_0(
#line 1141 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_1,
#line 1141 "var_use_analysis.m"
  MR_Integer var_use_analysis__CaseNum_2,
#line 1141 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_3,
#line 1141 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__4_4,
#line 1141 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__5_5,
#line 1141 "var_use_analysis.m"
  MR_Float var_use_analysis__Cost0_6,
#line 1141 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__7_7,
#line 1141 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__8_8)
#line 1141 "var_use_analysis.m"
{
#line 1146 "var_use_analysis.m"
  {
#line 1146 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;

#line 1146 "var_use_analysis.m"
    if ((var_use_analysis__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1146 "var_use_analysis.m"
      {
#line 1146 "var_use_analysis.m"
        *var_use_analysis__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1146 "var_use_analysis.m"
        *var_use_analysis__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1146 "var_use_analysis.m"
        *var_use_analysis__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1146 "var_use_analysis.m"
      }
#line 1146 "var_use_analysis.m"
    else
#line 1149 "var_use_analysis.m"
      {
#line 1149 "var_use_analysis.m"
        MR_Word var_use_analysis__Case_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__4_4, (MR_Integer) 0)));
#line 1149 "var_use_analysis.m"
        MR_Word var_use_analysis__Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__4_4, (MR_Integer) 1)));
#line 1149 "var_use_analysis.m"
        MR_Float var_use_analysis__Weight_18;
#line 1149 "var_use_analysis.m"
        MR_Word var_use_analysis__Weights_19;
#line 1149 "var_use_analysis.m"
        MR_Float var_use_analysis__Cost_21;
#line 1149 "var_use_analysis.m"
        MR_Word var_use_analysis__Costs_22;
#line 1149 "var_use_analysis.m"
        MR_Word var_use_analysis__FoundFirstUse_23;
#line 1149 "var_use_analysis.m"
        MR_Word var_use_analysis__FoundFirstUses_24;
#line 1149 "var_use_analysis.m"
        MR_Word var_use_analysis__Goal_27;
#line 1149 "var_use_analysis.m"
        MR_Word var_use_analysis__RevArmPath_28;
#line 1149 "var_use_analysis.m"
        MR_Word var_use_analysis__Coverage_29;
#line 1149 "var_use_analysis.m"
        MR_Integer var_use_analysis__BeforeCount_30;
#line 1149 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_31_31 = (var_use_analysis__CaseNum_2 + (MR_Integer) 1);
#line 1149 "var_use_analysis.m"
        MR_Word var_use_analysis__V_33_33;
#line 1149 "var_use_analysis.m"
        MR_Word var_use_analysis__V_35_35;
#line 1149 "var_use_analysis.m"
        MR_Word var_use_analysis__V_36_36;
#line 1152 "var_use_analysis.m"
        MR_Word var_use_analysis__V_25_25;
#line 1152 "var_use_analysis.m"
        MR_Word var_use_analysis__V_26_26;
#line 1157 "var_use_analysis.m"
        MR_Word var_use_analysis__V_37_37;
#line 1157 "var_use_analysis.m"
        MR_Word var_use_analysis__V_38_38;
#line 1157 "var_use_analysis.m"
        MR_Word var_use_analysis__V_39_39;
#line 1157 "var_use_analysis.m"
        MR_Word var_use_analysis__V_40_40;
#line 1157 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_41_41;
#line 1157 "var_use_analysis.m"
        MR_Word var_use_analysis__V_42_42;
#line 1157 "var_use_analysis.m"
        MR_Word var_use_analysis__V_43_43;
#line 1157 "var_use_analysis.m"
        MR_Word var_use_analysis__V_44_44;
#line 1157 "var_use_analysis.m"
        MR_Word var_use_analysis__V_45_45;
#line 1157 "var_use_analysis.m"
        MR_Word var_use_analysis__V_46_46;
#line 1157 "var_use_analysis.m"
        MR_Word var_use_analysis__V_47_47;
#line 1157 "var_use_analysis.m"
        MR_Word var_use_analysis__V_48_48;
#line 1157 "var_use_analysis.m"
        MR_Box var_use_analysis__conv0_Coverage_29;

#line 1150 "var_use_analysis.m"
        {
#line 1150 "var_use_analysis.m"
          var_use_analysis__switch_var_first_use_2_8_p_0(var_use_analysis__RevGoalPath_1, var_use_analysis__V_31_31, var_use_analysis__StaticInfo_3, var_use_analysis__Cases_17, &var_use_analysis__Weights_19, var_use_analysis__Cost0_6, &var_use_analysis__Costs_22, &var_use_analysis__FoundFirstUses_24);
        }
#line 1152 "var_use_analysis.m"
        var_use_analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_16, (MR_Integer) 0)));
#line 1152 "var_use_analysis.m"
        var_use_analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_16, (MR_Integer) 1)));
#line 1152 "var_use_analysis.m"
        var_use_analysis__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_16, (MR_Integer) 2)));
#line 1154 "var_use_analysis.m"
        {
#line 1154 "var_use_analysis.m"
          var_use_analysis__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "var_use_analysis.m"
          MR_hl_field(MR_mktag(3), var_use_analysis__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1154 "var_use_analysis.m"
          MR_hl_field(MR_mktag(3), var_use_analysis__V_33_33, 1) = ((MR_Box) (var_use_analysis__CaseNum_2));
#line 1154 "var_use_analysis.m"
          MR_hl_field(MR_mktag(3), var_use_analysis__V_33_33, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1154 "var_use_analysis.m"
        }
#line 1153 "var_use_analysis.m"
        {
#line 1153 "var_use_analysis.m"
          var_use_analysis__RevArmPath_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), var_use_analysis__RevArmPath_28, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_1));
#line 1153 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), var_use_analysis__RevArmPath_28, 1) = ((MR_Box) (var_use_analysis__V_33_33));
#line 1153 "var_use_analysis.m"
        }
#line 1155 "var_use_analysis.m"
        {
#line 1155 "var_use_analysis.m"
          var_use_analysis__goal_var_first_use_6_p_0(var_use_analysis__RevArmPath_28, var_use_analysis__Goal_27, var_use_analysis__StaticInfo_3, var_use_analysis__Cost0_6, &var_use_analysis__Cost_21, &var_use_analysis__FoundFirstUse_23);
        }
#line 1148 "var_use_analysis.m"
        {
#line 1148 "var_use_analysis.m"
          MR_Word base;
#line 1148 "var_use_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "var_use_analysis.m"
          *var_use_analysis__HeadVar__7_7 = base;
#line 1148 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Cost_21);
#line 1148 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__Costs_22));
#line 1148 "var_use_analysis.m"
        }
#line 1149 "var_use_analysis.m"
        {
#line 1149 "var_use_analysis.m"
          MR_Word base;
#line 1149 "var_use_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "var_use_analysis.m"
          *var_use_analysis__HeadVar__8_8 = base;
#line 1149 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (var_use_analysis__FoundFirstUse_23));
#line 1149 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__FoundFirstUses_24));
#line 1149 "var_use_analysis.m"
        }
#line 1157 "var_use_analysis.m"
        var_use_analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 0)));
#line 1157 "var_use_analysis.m"
        var_use_analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 1)));
#line 1157 "var_use_analysis.m"
        var_use_analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 2)));
#line 1157 "var_use_analysis.m"
        var_use_analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 3)));
#line 1157 "var_use_analysis.m"
        var_use_analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 4)));
#line 1157 "var_use_analysis.m"
        var_use_analysis__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 5)));
#line 1157 "var_use_analysis.m"
        var_use_analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 6)));
#line 1157 "var_use_analysis.m"
        var_use_analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 7)));
#line 1157 "var_use_analysis.m"
        var_use_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 8)));
#line 1157 "var_use_analysis.m"
        var_use_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 9)));
#line 1157 "var_use_analysis.m"
        var_use_analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 10)));
#line 1157 "var_use_analysis.m"
        var_use_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_27, (MR_Integer) 0)));
#line 1157 "var_use_analysis.m"
        var_use_analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_27, (MR_Integer) 1)));
#line 1157 "var_use_analysis.m"
        var_use_analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_27, (MR_Integer) 2)));
#line 1157 "var_use_analysis.m"
        {
#line 1157 "var_use_analysis.m"
          var_use_analysis__conv0_Coverage_29 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__V_35_35, var_use_analysis__V_36_36);
        }
#line 1157 "var_use_analysis.m"
        var_use_analysis__Coverage_29 = ((MR_Word) var_use_analysis__conv0_Coverage_29);
#line 1159 "var_use_analysis.m"
        {
#line 1159 "var_use_analysis.m"
          coverage__get_coverage_before_det_2_p_0(var_use_analysis__Coverage_29, &var_use_analysis__BeforeCount_30);
        }
#line 1160 "var_use_analysis.m"
        {
#line 1160 "var_use_analysis.m"
          var_use_analysis__Weight_18 = mercury__float__float_1_f_0(var_use_analysis__BeforeCount_30);
        }
#line 1148 "var_use_analysis.m"
        {
#line 1148 "var_use_analysis.m"
          MR_Word base;
#line 1148 "var_use_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "var_use_analysis.m"
          *var_use_analysis__HeadVar__5_5 = base;
#line 1148 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Weight_18);
#line 1148 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__Weights_19));
#line 1148 "var_use_analysis.m"
        }
#line 1149 "var_use_analysis.m"
      }
#line 1146 "var_use_analysis.m"
  }
#line 1141 "var_use_analysis.m"
}

#line 1134 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0_2(
#line 1134 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1134 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 1134 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 1134 "var_use_analysis.m"
{
#line 1134 "var_use_analysis.m"
  {
#line 1134 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 1134 "var_use_analysis.m"
    MR_Float var_use_analysis__conv0_HeadVar__3_3;

#line 1134 "var_use_analysis.m"
    {
#line 1134 "var_use_analysis.m"
      var_use_analysis__ffu_to_float_3_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_HeadVar__3_3);
    }
#line 1134 "var_use_analysis.m"
    *var_use_analysis__wrapper_arg_2 = MR_box_float(var_use_analysis__conv0_HeadVar__3_3);
#line 1134 "var_use_analysis.m"
  }
#line 1134 "var_use_analysis.m"
}

#line 1119 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0_1(
#line 1119 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 1119 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1)
#line 1119 "var_use_analysis.m"
{
#line 1119 "var_use_analysis.m"
  {
#line 1119 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1119 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;

#line 1119 "var_use_analysis.m"
    {
#line 1119 "var_use_analysis.m"
      return var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__switch_var_first_use__1119__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1));
    }
#line 1119 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 1119 "var_use_analysis.m"
  }
#line 1119 "var_use_analysis.m"
}

#line 1103 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0(
#line 1103 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_8,
#line 1103 "var_use_analysis.m"
  MR_Integer var_use_analysis__SwitchedOnVar_9,
#line 1103 "var_use_analysis.m"
  MR_Word var_use_analysis__Cases_10,
#line 1103 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_11,
#line 1103 "var_use_analysis.m"
  MR_Float var_use_analysis__CostBeforeSwitch_12,
#line 1103 "var_use_analysis.m"
  MR_Float * var_use_analysis__CostAfterSwitch_13,
#line 1103 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_14)
#line 1103 "var_use_analysis.m"
{
#line 1109 "var_use_analysis.m"
  {
#line 1109 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1109 "var_use_analysis.m"
    MR_Word var_use_analysis__CaseWeights_15;
#line 1109 "var_use_analysis.m"
    MR_Word var_use_analysis__CostCases_16;
#line 1109 "var_use_analysis.m"
    MR_Word var_use_analysis__FoundFirstUseCases_17;
#line 1109 "var_use_analysis.m"
    MR_Integer var_use_analysis__Var_18;
#line 1113 "var_use_analysis.m"
    MR_Word var_use_analysis__V_28_28;
#line 1113 "var_use_analysis.m"
    MR_Word var_use_analysis__V_29_29;
#line 1113 "var_use_analysis.m"
    MR_Word var_use_analysis__V_30_30;
#line 1113 "var_use_analysis.m"
    MR_Word var_use_analysis__V_31_31;
#line 1113 "var_use_analysis.m"
    MR_Word var_use_analysis__V_32_32;
#line 1113 "var_use_analysis.m"
    MR_Word var_use_analysis__V_33_33;
#line 1113 "var_use_analysis.m"
    MR_Word var_use_analysis__V_34_34;
#line 1113 "var_use_analysis.m"
    MR_Word var_use_analysis__V_35_35;
#line 1113 "var_use_analysis.m"
    MR_Word var_use_analysis__V_36_36;
#line 1113 "var_use_analysis.m"
    MR_Word var_use_analysis__V_37_37;

#line 1110 "var_use_analysis.m"
    {
#line 1110 "var_use_analysis.m"
      var_use_analysis__switch_var_first_use_2_8_p_0(var_use_analysis__RevGoalPath_8, (MR_Integer) 1, var_use_analysis__StaticInfo_11, var_use_analysis__Cases_10, &var_use_analysis__CaseWeights_15, var_use_analysis__CostBeforeSwitch_12, &var_use_analysis__CostCases_16, &var_use_analysis__FoundFirstUseCases_17);
    }
#line 1112 "var_use_analysis.m"
    {
#line 1112 "var_use_analysis.m"
      measurements__weighted_average_3_p_0(var_use_analysis__CaseWeights_15, var_use_analysis__CostCases_16, var_use_analysis__CostAfterSwitch_13);
    }
#line 1113 "var_use_analysis.m"
    var_use_analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 0)));
#line 1113 "var_use_analysis.m"
    var_use_analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 1)));
#line 1113 "var_use_analysis.m"
    var_use_analysis__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 2)));
#line 1113 "var_use_analysis.m"
    var_use_analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 3)));
#line 1113 "var_use_analysis.m"
    var_use_analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 4)));
#line 1113 "var_use_analysis.m"
    var_use_analysis__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 5)));
#line 1113 "var_use_analysis.m"
    var_use_analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 6)));
#line 1113 "var_use_analysis.m"
    var_use_analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 7)));
#line 1113 "var_use_analysis.m"
    var_use_analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 8)));
#line 1113 "var_use_analysis.m"
    var_use_analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 9)));
#line 1113 "var_use_analysis.m"
    var_use_analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 10)));
#line 1114 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__Var_18 == var_use_analysis__SwitchedOnVar_9);
#line 1117 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1116 "var_use_analysis.m"
      {
#line 1116 "var_use_analysis.m"
        MR_Word base;
#line 1116 "var_use_analysis.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "var_use_analysis.m"
        *var_use_analysis__FoundFirstUse_14 = base;
#line 1116 "var_use_analysis.m"
        MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__CostBeforeSwitch_12);
#line 1116 "var_use_analysis.m"
      }
#line 1117 "var_use_analysis.m"
    else
#line 1123 "var_use_analysis.m"
      {
#line 1119 "var_use_analysis.m"
        {
#line 1119 "var_use_analysis.m"
          var_use_analysis__succeeded = mercury__list__all_true_2_p_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0, (MR_Word) &var_use_analysis_scalar_common_8[0], var_use_analysis__FoundFirstUseCases_17);
        }
#line 1123 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 1122 "var_use_analysis.m"
          *var_use_analysis__FoundFirstUse_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1123 "var_use_analysis.m"
        else
#line 1124 "var_use_analysis.m"
          {
#line 1124 "var_use_analysis.m"
            MR_Word var_use_analysis__VarUseType_19;
#line 1124 "var_use_analysis.m"
            MR_Float var_use_analysis__DefaultCost_20;
#line 1124 "var_use_analysis.m"
            MR_Word var_use_analysis__FirstUseTimes_21;
#line 1124 "var_use_analysis.m"
            MR_Float var_use_analysis__AvgFirstUseTime_22;
#line 1124 "var_use_analysis.m"
            MR_Word var_use_analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 6)));
#line 1124 "var_use_analysis.m"
            MR_Word var_use_analysis__V_27_27;
#line 1124 "var_use_analysis.m"
            MR_Word var_use_analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 0)));
#line 1124 "var_use_analysis.m"
            MR_Word var_use_analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 1)));
#line 1124 "var_use_analysis.m"
            MR_Word var_use_analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 2)));
#line 1124 "var_use_analysis.m"
            MR_Word var_use_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 3)));
#line 1124 "var_use_analysis.m"
            MR_Word var_use_analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 4)));
#line 1124 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 5)));
#line 1124 "var_use_analysis.m"
            MR_Word var_use_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 7)));
#line 1124 "var_use_analysis.m"
            MR_Word var_use_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 8)));
#line 1124 "var_use_analysis.m"
            MR_Word var_use_analysis__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 9)));
#line 1124 "var_use_analysis.m"
            MR_Word var_use_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 10)));
#line 1124 "var_use_analysis.m"
            MR_Word var_use_analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_26_26, (MR_Integer) 0)));
#line 1124 "var_use_analysis.m"
            MR_Word var_use_analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_26_26, (MR_Integer) 1)));

#line 1124 "var_use_analysis.m"
            var_use_analysis__VarUseType_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_26_26, (MR_Integer) 2)));
#line 1128 "var_use_analysis.m"
#line 1128 "var_use_analysis.m"
            switch (var_use_analysis__VarUseType_19) {
#line 1128 "var_use_analysis.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1128 "var_use_analysis.m"
              case (MR_Integer) 1:
#line 1127 "var_use_analysis.m"
                var_use_analysis__DefaultCost_20 = *var_use_analysis__CostAfterSwitch_13;
#line 1128 "var_use_analysis.m"
                break;
#line 1128 "var_use_analysis.m"
              case (MR_Integer) 2:
#line 1128 "var_use_analysis.m"
              case (MR_Integer) 0:
#line 1132 "var_use_analysis.m"
                var_use_analysis__DefaultCost_20 = var_use_analysis__CostBeforeSwitch_12;
#line 1128 "var_use_analysis.m"
                break;
#line 1128 "var_use_analysis.m"
            }
#line 1134 "var_use_analysis.m"
            {
#line 1134 "var_use_analysis.m"
              var_use_analysis__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1134 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_27_27, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[0]));
#line 1134 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_27_27, 1) = ((MR_Box) (var_use_analysis__switch_var_first_use_7_p_0_2));
#line 1134 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1134 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_27_27, 3) = MR_box_float(var_use_analysis__DefaultCost_20);
#line 1134 "var_use_analysis.m"
            }
#line 1134 "var_use_analysis.m"
            {
#line 1134 "var_use_analysis.m"
              mercury__list__map_3_p_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, var_use_analysis__V_27_27, var_use_analysis__FoundFirstUseCases_17, &var_use_analysis__FirstUseTimes_21);
            }
#line 1136 "var_use_analysis.m"
            {
#line 1136 "var_use_analysis.m"
              measurements__weighted_average_3_p_0(var_use_analysis__CaseWeights_15, var_use_analysis__FirstUseTimes_21, &var_use_analysis__AvgFirstUseTime_22);
            }
#line 1137 "var_use_analysis.m"
            {
#line 1137 "var_use_analysis.m"
              MR_Word base;
#line 1137 "var_use_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "var_use_analysis.m"
              *var_use_analysis__FoundFirstUse_14 = base;
#line 1137 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__AvgFirstUseTime_22);
#line 1137 "var_use_analysis.m"
            }
#line 1124 "var_use_analysis.m"
          }
#line 1123 "var_use_analysis.m"
      }
#line 1109 "var_use_analysis.m"
  }
#line 1103 "var_use_analysis.m"
}

#line 1035 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__disj_var_first_use_2_7_p_0(
#line 1035 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_1,
#line 1035 "var_use_analysis.m"
  MR_Integer var_use_analysis__DisjNum_2,
#line 1035 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3,
#line 1035 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_4,
#line 1035 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_5,
#line 1035 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_6,
#line 1035 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__7_7)
#line 1035 "var_use_analysis.m"
{
#line 1040 "var_use_analysis.m"
  {
#line 1040 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;

#line 1040 "var_use_analysis.m"
    if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1040 "var_use_analysis.m"
      {
#line 1040 "var_use_analysis.m"
        *var_use_analysis__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1040 "var_use_analysis.m"
        *var_use_analysis__STATE_VARIABLE_CostSoFar_6 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_5;
#line 1040 "var_use_analysis.m"
      }
#line 1040 "var_use_analysis.m"
    else
#line 1042 "var_use_analysis.m"
      {
#line 1042 "var_use_analysis.m"
        MR_Word var_use_analysis__Disj_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 1042 "var_use_analysis.m"
        MR_Word var_use_analysis__Disjs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 1042 "var_use_analysis.m"
        MR_Word var_use_analysis__VarUseType_21;
#line 1042 "var_use_analysis.m"
        MR_Word var_use_analysis__CoverageArray_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 4)));
#line 1042 "var_use_analysis.m"
        MR_Word var_use_analysis__HeadFoundFirstUse_23;
#line 1042 "var_use_analysis.m"
        MR_Word var_use_analysis__TailFoundFirstUse_24;
#line 1042 "var_use_analysis.m"
        MR_Word var_use_analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 6)));
#line 1042 "var_use_analysis.m"
        MR_Word var_use_analysis__V_41_41;
#line 1042 "var_use_analysis.m"
        MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_42_42;
#line 1042 "var_use_analysis.m"
        MR_Word var_use_analysis__V_43_43;
#line 1042 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_44_44;
#line 1043 "var_use_analysis.m"
        MR_Word var_use_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 0)));
#line 1043 "var_use_analysis.m"
        MR_Word var_use_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 1)));
#line 1043 "var_use_analysis.m"
        MR_Word var_use_analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 2)));
#line 1043 "var_use_analysis.m"
        MR_Word var_use_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 3)));
#line 1043 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 5)));
#line 1043 "var_use_analysis.m"
        MR_Word var_use_analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 7)));
#line 1043 "var_use_analysis.m"
        MR_Word var_use_analysis__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 8)));
#line 1043 "var_use_analysis.m"
        MR_Word var_use_analysis__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 9)));
#line 1043 "var_use_analysis.m"
        MR_Word var_use_analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 10)));
#line 1043 "var_use_analysis.m"
        MR_Word var_use_analysis__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_40_40, (MR_Integer) 0)));
#line 1043 "var_use_analysis.m"
        MR_Word var_use_analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_40_40, (MR_Integer) 1)));

#line 1043 "var_use_analysis.m"
        var_use_analysis__VarUseType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_40_40, (MR_Integer) 2)));
#line 1045 "var_use_analysis.m"
        {
#line 1045 "var_use_analysis.m"
          var_use_analysis__V_43_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "var_use_analysis.m"
          MR_hl_field(MR_mktag(2), var_use_analysis__V_43_43, 0) = ((MR_Box) (var_use_analysis__DisjNum_2));
#line 1045 "var_use_analysis.m"
        }
#line 1045 "var_use_analysis.m"
        {
#line 1045 "var_use_analysis.m"
          var_use_analysis__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), var_use_analysis__V_41_41, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_1));
#line 1045 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), var_use_analysis__V_41_41, 1) = ((MR_Box) (var_use_analysis__V_43_43));
#line 1045 "var_use_analysis.m"
        }
#line 1045 "var_use_analysis.m"
        {
#line 1045 "var_use_analysis.m"
          var_use_analysis__goal_var_first_use_6_p_0(var_use_analysis__V_41_41, var_use_analysis__Disj_16, var_use_analysis__StaticInfo_4, var_use_analysis__STATE_VARIABLE_CostSoFar_0_5, &var_use_analysis__STATE_VARIABLE_CostSoFar_42_42, &var_use_analysis__HeadFoundFirstUse_23);
        }
#line 1047 "var_use_analysis.m"
        var_use_analysis__V_44_44 = (var_use_analysis__DisjNum_2 + (MR_Integer) 1);
#line 1047 "var_use_analysis.m"
        {
#line 1047 "var_use_analysis.m"
          var_use_analysis__disj_var_first_use_2_7_p_0(var_use_analysis__RevGoalPath_1, var_use_analysis__V_44_44, var_use_analysis__Disjs_17, var_use_analysis__StaticInfo_4, var_use_analysis__STATE_VARIABLE_CostSoFar_42_42, var_use_analysis__STATE_VARIABLE_CostSoFar_6, &var_use_analysis__TailFoundFirstUse_24);
        }
#line 1053 "var_use_analysis.m"
        if ((var_use_analysis__HeadFoundFirstUse_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1053 "var_use_analysis.m"
          if ((var_use_analysis__TailFoundFirstUse_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1050 "var_use_analysis.m"
            *var_use_analysis__HeadVar__7_7 = var_use_analysis__HeadFoundFirstUse_23;
#line 1053 "var_use_analysis.m"
          else
#line 1056 "var_use_analysis.m"
            *var_use_analysis__HeadVar__7_7 = var_use_analysis__TailFoundFirstUse_24;
#line 1053 "var_use_analysis.m"
        else
#line 1053 "var_use_analysis.m"
          {
#line 1053 "var_use_analysis.m"
            MR_Float var_use_analysis__V_88_88 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__HeadFoundFirstUse_23, (MR_Integer) 0)));

#line 1053 "var_use_analysis.m"
            if ((var_use_analysis__TailFoundFirstUse_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1060 "var_use_analysis.m"
              *var_use_analysis__HeadVar__7_7 = var_use_analysis__HeadFoundFirstUse_23;
#line 1053 "var_use_analysis.m"
            else
#line 1062 "var_use_analysis.m"
              {
#line 1062 "var_use_analysis.m"
                MR_Float var_use_analysis__TailCost_28 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__TailFoundFirstUse_24, (MR_Integer) 0)));
#line 1062 "var_use_analysis.m"
                MR_Float var_use_analysis__Cost_29;

#line 1069 "var_use_analysis.m"
#line 1069 "var_use_analysis.m"
                switch (var_use_analysis__VarUseType_21) {
#line 1069 "var_use_analysis.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1069 "var_use_analysis.m"
                  case (MR_Integer) 1:
#line 1065 "var_use_analysis.m"
                    var_use_analysis__Cost_29 = var_use_analysis__V_88_88;
#line 1069 "var_use_analysis.m"
                    break;
#line 1069 "var_use_analysis.m"
                  case (MR_Integer) 2:
#line 1069 "var_use_analysis.m"
                  case (MR_Integer) 0:
#line 1072 "var_use_analysis.m"
                    {
#line 1072 "var_use_analysis.m"
                      MR_Word var_use_analysis__TypeCtorInfo_87_87 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0;
#line 1072 "var_use_analysis.m"
                      MR_Word var_use_analysis__DisjCoverage_30;
#line 1072 "var_use_analysis.m"
                      MR_Float var_use_analysis__HeadWeight_32;
#line 1072 "var_use_analysis.m"
                      MR_Float var_use_analysis__TailWeight_33;
#line 1072 "var_use_analysis.m"
                      MR_Word var_use_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_16, (MR_Integer) 2)));
#line 1072 "var_use_analysis.m"
                      MR_Word var_use_analysis__V_55_55;
#line 1072 "var_use_analysis.m"
                      MR_Word var_use_analysis__V_56_56;
#line 1072 "var_use_analysis.m"
                      MR_Word var_use_analysis__V_57_57;
#line 1072 "var_use_analysis.m"
                      MR_Word var_use_analysis__V_59_59;
#line 1076 "var_use_analysis.m"
                      MR_Word var_use_analysis__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_16, (MR_Integer) 0)));
#line 1076 "var_use_analysis.m"
                      MR_Word var_use_analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_16, (MR_Integer) 1)));
#line 1076 "var_use_analysis.m"
                      MR_Box var_use_analysis__conv0_DisjCoverage_30;
#line 1079 "var_use_analysis.m"
                      MR_Integer var_use_analysis__HeadCount_31;

#line 1076 "var_use_analysis.m"
                      {
#line 1076 "var_use_analysis.m"
                        var_use_analysis__conv0_DisjCoverage_30 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_87_87, var_use_analysis__CoverageArray_22, var_use_analysis__V_47_47);
                      }
#line 1076 "var_use_analysis.m"
                      var_use_analysis__DisjCoverage_30 = ((MR_Word) var_use_analysis__conv0_DisjCoverage_30);
#line 1077 "var_use_analysis.m"
                      {
#line 1077 "var_use_analysis.m"
                        var_use_analysis__succeeded = coverage__get_coverage_before_2_p_0(var_use_analysis__DisjCoverage_30, &var_use_analysis__HeadCount_31);
                      }
#line 1079 "var_use_analysis.m"
                      if (var_use_analysis__succeeded)
#line 1078 "var_use_analysis.m"
                        {
#line 1078 "var_use_analysis.m"
                          var_use_analysis__HeadWeight_32 = mercury__float__float_1_f_0(var_use_analysis__HeadCount_31);
                        }
#line 1079 "var_use_analysis.m"
                      else
#line 1080 "var_use_analysis.m"
                        {
#line 1080 "var_use_analysis.m"
                          {
#line 1080 "var_use_analysis.m"
                            mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.disj_var_first_use_2\'/7", (MR_String) "unknown coverage before disjunct");
#line 1080 "var_use_analysis.m"
                            return;
                          }
#line 1080 "var_use_analysis.m"
                        }
#line 1086 "var_use_analysis.m"
                      if ((var_use_analysis__Disjs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1084 "var_use_analysis.m"
                        var_use_analysis__TailWeight_33 = (MR_Float) 0.0000000000000000;
#line 1086 "var_use_analysis.m"
                      else
#line 1087 "var_use_analysis.m"
                        {
#line 1087 "var_use_analysis.m"
                          MR_Word var_use_analysis__FirstTailDisj_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Disjs_17, (MR_Integer) 0)));
#line 1087 "var_use_analysis.m"
                          MR_Word var_use_analysis__FirstTailCoverage_36;
#line 1087 "var_use_analysis.m"
                          MR_Word var_use_analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__FirstTailDisj_34, (MR_Integer) 2)));
#line 1087 "var_use_analysis.m"
                          MR_Word var_use_analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Disjs_17, (MR_Integer) 1)));
#line 1088 "var_use_analysis.m"
                          MR_Word var_use_analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__FirstTailDisj_34, (MR_Integer) 0)));
#line 1088 "var_use_analysis.m"
                          MR_Word var_use_analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__FirstTailDisj_34, (MR_Integer) 1)));
#line 1088 "var_use_analysis.m"
                          MR_Box var_use_analysis__conv1_FirstTailCoverage_36;
#line 1092 "var_use_analysis.m"
                          MR_Integer var_use_analysis__TailCount_37;

#line 1088 "var_use_analysis.m"
                          {
#line 1088 "var_use_analysis.m"
                            var_use_analysis__conv1_FirstTailCoverage_36 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_87_87, var_use_analysis__CoverageArray_22, var_use_analysis__V_51_51);
                          }
#line 1088 "var_use_analysis.m"
                          var_use_analysis__FirstTailCoverage_36 = ((MR_Word) var_use_analysis__conv1_FirstTailCoverage_36);
#line 1090 "var_use_analysis.m"
                          {
#line 1090 "var_use_analysis.m"
                            var_use_analysis__succeeded = coverage__get_coverage_before_2_p_0(var_use_analysis__FirstTailCoverage_36, &var_use_analysis__TailCount_37);
                          }
#line 1092 "var_use_analysis.m"
                          if (var_use_analysis__succeeded)
#line 1091 "var_use_analysis.m"
                            {
#line 1091 "var_use_analysis.m"
                              var_use_analysis__TailWeight_33 = mercury__float__float_1_f_0(var_use_analysis__TailCount_37);
                            }
#line 1092 "var_use_analysis.m"
                          else
#line 1093 "var_use_analysis.m"
                            {
#line 1093 "var_use_analysis.m"
                              {
#line 1093 "var_use_analysis.m"
                                mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.disj_var_first_use_2\'/7", (MR_String) "unknown coverage before disjunct");
#line 1093 "var_use_analysis.m"
                                return;
                              }
#line 1093 "var_use_analysis.m"
                            }
#line 1087 "var_use_analysis.m"
                        }
#line 1097 "var_use_analysis.m"
                      {
#line 1097 "var_use_analysis.m"
                        var_use_analysis__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "var_use_analysis.m"
                        MR_hl_field(MR_mktag(1), var_use_analysis__V_57_57, 0) = MR_box_float(var_use_analysis__TailWeight_33);
#line 1097 "var_use_analysis.m"
                        MR_hl_field(MR_mktag(1), var_use_analysis__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1097 "var_use_analysis.m"
                      }
#line 1097 "var_use_analysis.m"
                      {
#line 1097 "var_use_analysis.m"
                        var_use_analysis__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "var_use_analysis.m"
                        MR_hl_field(MR_mktag(1), var_use_analysis__V_55_55, 0) = MR_box_float(var_use_analysis__HeadWeight_32);
#line 1097 "var_use_analysis.m"
                        MR_hl_field(MR_mktag(1), var_use_analysis__V_55_55, 1) = ((MR_Box) (var_use_analysis__V_57_57));
#line 1097 "var_use_analysis.m"
                      }
#line 1097 "var_use_analysis.m"
                      {
#line 1097 "var_use_analysis.m"
                        var_use_analysis__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "var_use_analysis.m"
                        MR_hl_field(MR_mktag(1), var_use_analysis__V_59_59, 0) = MR_box_float(var_use_analysis__TailCost_28);
#line 1097 "var_use_analysis.m"
                        MR_hl_field(MR_mktag(1), var_use_analysis__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1097 "var_use_analysis.m"
                      }
#line 1097 "var_use_analysis.m"
                      {
#line 1097 "var_use_analysis.m"
                        var_use_analysis__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "var_use_analysis.m"
                        MR_hl_field(MR_mktag(1), var_use_analysis__V_56_56, 0) = MR_box_float(var_use_analysis__V_88_88);
#line 1097 "var_use_analysis.m"
                        MR_hl_field(MR_mktag(1), var_use_analysis__V_56_56, 1) = ((MR_Box) (var_use_analysis__V_59_59));
#line 1097 "var_use_analysis.m"
                      }
#line 1097 "var_use_analysis.m"
                      {
#line 1097 "var_use_analysis.m"
                        measurements__weighted_average_3_p_0(var_use_analysis__V_55_55, var_use_analysis__V_56_56, &var_use_analysis__Cost_29);
                      }
#line 1072 "var_use_analysis.m"
                    }
#line 1069 "var_use_analysis.m"
                    break;
#line 1069 "var_use_analysis.m"
                }
#line 1100 "var_use_analysis.m"
                {
#line 1100 "var_use_analysis.m"
                  MR_Word base;
#line 1100 "var_use_analysis.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1100 "var_use_analysis.m"
                  *var_use_analysis__HeadVar__7_7 = base;
#line 1100 "var_use_analysis.m"
                  MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Cost_29);
#line 1100 "var_use_analysis.m"
                }
#line 1062 "var_use_analysis.m"
              }
#line 1053 "var_use_analysis.m"
          }
#line 1042 "var_use_analysis.m"
      }
#line 1040 "var_use_analysis.m"
  }
#line 1035 "var_use_analysis.m"
}

#line 1000 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__disj_var_first_use_7_p_0(
#line 1000 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_8,
#line 1000 "var_use_analysis.m"
  MR_Word var_use_analysis__Disjuncts_9,
#line 1000 "var_use_analysis.m"
  MR_Word var_use_analysis__Detism_10,
#line 1000 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_11,
#line 1000 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_19,
#line 1000 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_20,
#line 1000 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_13)
#line 1000 "var_use_analysis.m"
{
#line 1006 "var_use_analysis.m"
  {
#line 1006 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1006 "var_use_analysis.m"
    MR_Word var_use_analysis__FoundFirstUse0_15;
#line 1018 "var_use_analysis.m"
    MR_Word var_use_analysis__V_23_23;
#line 1019 "var_use_analysis.m"
    MR_Float var_use_analysis__V_17_17;

#line 1014 "var_use_analysis.m"
    {
#line 1014 "var_use_analysis.m"
      var_use_analysis__disj_var_first_use_2_7_p_0(var_use_analysis__RevGoalPath_8, (MR_Integer) 1, var_use_analysis__Disjuncts_9, var_use_analysis__StaticInfo_11, var_use_analysis__STATE_VARIABLE_CostSoFar_0_19, var_use_analysis__STATE_VARIABLE_CostSoFar_20, &var_use_analysis__FoundFirstUse0_15);
    }
#line 1018 "var_use_analysis.m"
    {
#line 1018 "var_use_analysis.m"
      var_use_analysis__V_23_23 = mdbcomp__program_representation__detism_get_solutions_1_f_0(var_use_analysis__Detism_10);
    }
#line 1018 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__V_23_23 == (MR_Integer) 2);
#line 1018 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1018 "var_use_analysis.m"
      {
#line 1019 "var_use_analysis.m"
        var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__FoundFirstUse0_15)) == (MR_mktag((MR_Integer) 1)));
#line 1019 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 1019 "var_use_analysis.m"
          var_use_analysis__V_17_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__FoundFirstUse0_15, (MR_Integer) 0)));
#line 1018 "var_use_analysis.m"
      }
#line 1031 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 1021 "var_use_analysis.m"
      {
#line 1021 "var_use_analysis.m"
        MR_Word var_use_analysis__VarUseType_18;
#line 1021 "var_use_analysis.m"
        MR_Word var_use_analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 6)));
#line 1021 "var_use_analysis.m"
        MR_Word var_use_analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 0)));
#line 1021 "var_use_analysis.m"
        MR_Word var_use_analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 1)));
#line 1021 "var_use_analysis.m"
        MR_Word var_use_analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 2)));
#line 1021 "var_use_analysis.m"
        MR_Word var_use_analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 3)));
#line 1021 "var_use_analysis.m"
        MR_Word var_use_analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 4)));
#line 1021 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 5)));
#line 1021 "var_use_analysis.m"
        MR_Word var_use_analysis__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 7)));
#line 1021 "var_use_analysis.m"
        MR_Word var_use_analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 8)));
#line 1021 "var_use_analysis.m"
        MR_Word var_use_analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 9)));
#line 1021 "var_use_analysis.m"
        MR_Word var_use_analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 10)));
#line 1021 "var_use_analysis.m"
        MR_Word var_use_analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_24_24, (MR_Integer) 0)));
#line 1021 "var_use_analysis.m"
        MR_Word var_use_analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_24_24, (MR_Integer) 1)));

#line 1021 "var_use_analysis.m"
        var_use_analysis__VarUseType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_24_24, (MR_Integer) 2)));
#line 1025 "var_use_analysis.m"
#line 1025 "var_use_analysis.m"
        switch (var_use_analysis__VarUseType_18) {
#line 1025 "var_use_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1025 "var_use_analysis.m"
          case (MR_Integer) 1:
#line 1024 "var_use_analysis.m"
            {
#line 1024 "var_use_analysis.m"
              MR_Word base;
#line 1024 "var_use_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "var_use_analysis.m"
              *var_use_analysis__FoundFirstUse_13 = base;
#line 1024 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__STATE_VARIABLE_CostSoFar_0_19);
#line 1024 "var_use_analysis.m"
            }
#line 1025 "var_use_analysis.m"
            break;
#line 1025 "var_use_analysis.m"
          case (MR_Integer) 2:
#line 1025 "var_use_analysis.m"
          case (MR_Integer) 0:
#line 1029 "var_use_analysis.m"
            {
#line 1029 "var_use_analysis.m"
              MR_Word base;
#line 1029 "var_use_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "var_use_analysis.m"
              *var_use_analysis__FoundFirstUse_13 = base;
#line 1029 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(*var_use_analysis__STATE_VARIABLE_CostSoFar_20);
#line 1029 "var_use_analysis.m"
            }
#line 1025 "var_use_analysis.m"
            break;
#line 1025 "var_use_analysis.m"
        }
#line 1021 "var_use_analysis.m"
      }
#line 1031 "var_use_analysis.m"
    else
#line 1032 "var_use_analysis.m"
      *var_use_analysis__FoundFirstUse_13 = var_use_analysis__FoundFirstUse0_15;
#line 1006 "var_use_analysis.m"
  }
#line 1000 "var_use_analysis.m"
}

#line 974 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__conj_var_first_use_7_p_0(
#line 974 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_1,
#line 974 "var_use_analysis.m"
  MR_Integer var_use_analysis__ConjNum_2,
#line 974 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__3_3,
#line 974 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_4,
#line 974 "var_use_analysis.m"
  MR_Float var_use_analysis__HeadVar__5_5,
#line 974 "var_use_analysis.m"
  MR_Float * var_use_analysis__HeadVar__6_6,
#line 974 "var_use_analysis.m"
  MR_Word * var_use_analysis__HeadVar__7_7)
#line 974 "var_use_analysis.m"
{
#line 979 "var_use_analysis.m"
  while (MR_TRUE)
#line 979 "var_use_analysis.m"
    {
#line 979 "var_use_analysis.m"
      /* tailcall optimized into a loop */
#line 979 "var_use_analysis.m"
      {
#line 979 "var_use_analysis.m"
        MR_bool var_use_analysis__succeeded;

#line 979 "var_use_analysis.m"
        if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 979 "var_use_analysis.m"
          {
#line 979 "var_use_analysis.m"
            *var_use_analysis__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 979 "var_use_analysis.m"
            *var_use_analysis__HeadVar__6_6 = var_use_analysis__HeadVar__5_5;
#line 979 "var_use_analysis.m"
          }
#line 979 "var_use_analysis.m"
        else
#line 981 "var_use_analysis.m"
          {
#line 981 "var_use_analysis.m"
            MR_Word var_use_analysis__Conj_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 981 "var_use_analysis.m"
            MR_Word var_use_analysis__Conjs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 981 "var_use_analysis.m"
            MR_Word var_use_analysis__HeadFoundFirstUse_21;
#line 981 "var_use_analysis.m"
            MR_Word var_use_analysis__V_26_26;
#line 981 "var_use_analysis.m"
            MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_27_27;
#line 981 "var_use_analysis.m"
            MR_Word var_use_analysis__V_28_28;

#line 982 "var_use_analysis.m"
            {
#line 982 "var_use_analysis.m"
              var_use_analysis__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 982 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), var_use_analysis__V_28_28, 0) = ((MR_Box) (var_use_analysis__ConjNum_2));
#line 982 "var_use_analysis.m"
            }
#line 982 "var_use_analysis.m"
            {
#line 982 "var_use_analysis.m"
              var_use_analysis__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), var_use_analysis__V_26_26, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_1));
#line 982 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), var_use_analysis__V_26_26, 1) = ((MR_Box) (var_use_analysis__V_28_28));
#line 982 "var_use_analysis.m"
            }
#line 982 "var_use_analysis.m"
            {
#line 982 "var_use_analysis.m"
              var_use_analysis__goal_var_first_use_6_p_0(var_use_analysis__V_26_26, var_use_analysis__Conj_16, var_use_analysis__StaticInfo_4, var_use_analysis__HeadVar__5_5, &var_use_analysis__STATE_VARIABLE_CostSoFar_27_27, &var_use_analysis__HeadFoundFirstUse_21);
            }
#line 993 "var_use_analysis.m"
            if ((var_use_analysis__HeadFoundFirstUse_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 994 "var_use_analysis.m"
              {
#line 994 "var_use_analysis.m"
                MR_Integer var_use_analysis__V_29_29 = (var_use_analysis__ConjNum_2 + (MR_Integer) 1);

#line 995 "var_use_analysis.m"
                /* direct tailcall eliminated */
#line 995 "var_use_analysis.m"
                {
#line 995 "var_use_analysis.m"
                  MR_Integer var_use_analysis__ConjNum__tmp_copy_2 = var_use_analysis__V_29_29;
#line 995 "var_use_analysis.m"
                  MR_Word var_use_analysis__HeadVar__3__tmp_copy_3 = var_use_analysis__Conjs_17;
#line 995 "var_use_analysis.m"
                  MR_Float var_use_analysis__HeadVar__5__tmp_copy_5 = var_use_analysis__STATE_VARIABLE_CostSoFar_27_27;

#line 995 "var_use_analysis.m"
                  var_use_analysis__HeadVar__5_5 = var_use_analysis__HeadVar__5__tmp_copy_5;
#line 995 "var_use_analysis.m"
                  var_use_analysis__HeadVar__3_3 = var_use_analysis__HeadVar__3__tmp_copy_3;
#line 995 "var_use_analysis.m"
                  var_use_analysis__ConjNum_2 = var_use_analysis__ConjNum__tmp_copy_2;
#line 995 "var_use_analysis.m"
                }
#line 995 "var_use_analysis.m"
                continue;
#line 994 "var_use_analysis.m"
              }
#line 993 "var_use_analysis.m"
            else
#line 991 "var_use_analysis.m"
              {
#line 992 "var_use_analysis.m"
                *var_use_analysis__HeadVar__7_7 = var_use_analysis__HeadFoundFirstUse_21;
#line 991 "var_use_analysis.m"
                *var_use_analysis__HeadVar__6_6 = var_use_analysis__STATE_VARIABLE_CostSoFar_27_27;
#line 991 "var_use_analysis.m"
              }
#line 981 "var_use_analysis.m"
          }
#line 979 "var_use_analysis.m"
      }
#line 979 "var_use_analysis.m"
      break;
#line 979 "var_use_analysis.m"
    }
#line 974 "var_use_analysis.m"
}

#line 944 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__atomic_trivial_var_first_use_5_p_0(
#line 944 "var_use_analysis.m"
  MR_Word var_use_analysis__AtomicGoal_6,
#line 944 "var_use_analysis.m"
  MR_Word var_use_analysis__BoundVars_7,
#line 944 "var_use_analysis.m"
  MR_Float var_use_analysis__CostSoFar_8,
#line 944 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_9,
#line 944 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_10)
#line 944 "var_use_analysis.m"
{
#line 949 "var_use_analysis.m"
  {
#line 949 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 949 "var_use_analysis.m"
    MR_Integer var_use_analysis__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 5)));
#line 949 "var_use_analysis.m"
    MR_Word var_use_analysis__VarUseType_12;
#line 949 "var_use_analysis.m"
    MR_Word var_use_analysis__Vars_13;
#line 949 "var_use_analysis.m"
    MR_Word var_use_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 6)));
#line 950 "var_use_analysis.m"
    MR_Word var_use_analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 0)));
#line 950 "var_use_analysis.m"
    MR_Word var_use_analysis__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 1)));
#line 950 "var_use_analysis.m"
    MR_Word var_use_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 2)));
#line 950 "var_use_analysis.m"
    MR_Word var_use_analysis__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 3)));
#line 950 "var_use_analysis.m"
    MR_Word var_use_analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 4)));
#line 950 "var_use_analysis.m"
    MR_Word var_use_analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 7)));
#line 950 "var_use_analysis.m"
    MR_Word var_use_analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 8)));
#line 950 "var_use_analysis.m"
    MR_Word var_use_analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 9)));
#line 950 "var_use_analysis.m"
    MR_Word var_use_analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 10)));
#line 951 "var_use_analysis.m"
    MR_Word var_use_analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_20_20, (MR_Integer) 0)));
#line 951 "var_use_analysis.m"
    MR_Word var_use_analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_20_20, (MR_Integer) 1)));
#line 954 "var_use_analysis.m"
    MR_Word var_use_analysis__TypeCtorInfo_37_37;

#line 951 "var_use_analysis.m"
    var_use_analysis__VarUseType_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_20_20, (MR_Integer) 2)));
#line 952 "var_use_analysis.m"
    {
#line 952 "var_use_analysis.m"
      program_representation_utils__atomic_goal_get_vars_2_p_0(var_use_analysis__AtomicGoal_6, &var_use_analysis__Vars_13);
    }
#line 12235 "var_use_analysis.c"
    var_use_analysis__TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 954 "var_use_analysis.m"
    {
#line 954 "var_use_analysis.m"
      var_use_analysis__succeeded = mercury__set__member_2_p_0(var_use_analysis__TypeCtorInfo_37_37, ((MR_Box) (var_use_analysis__Var_11)), var_use_analysis__Vars_13);
    }
#line 954 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 957 "var_use_analysis.m"
#line 957 "var_use_analysis.m"
      switch (var_use_analysis__VarUseType_12) {
#line 957 "var_use_analysis.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 957 "var_use_analysis.m"
        case (MR_Integer) 1:
#line 956 "var_use_analysis.m"
          var_use_analysis__succeeded = MR_TRUE;
#line 957 "var_use_analysis.m"
          break;
#line 957 "var_use_analysis.m"
        case (MR_Integer) 2:
#line 961 "var_use_analysis.m"
          var_use_analysis__succeeded = MR_TRUE;
#line 957 "var_use_analysis.m"
          break;
#line 957 "var_use_analysis.m"
        case (MR_Integer) 0:
#line 959 "var_use_analysis.m"
          {
#line 959 "var_use_analysis.m"
            var_use_analysis__succeeded = mercury__list__member_2_p_0(var_use_analysis__TypeCtorInfo_37_37, ((MR_Box) (var_use_analysis__Var_11)), var_use_analysis__BoundVars_7);
          }
#line 957 "var_use_analysis.m"
          break;
#line 957 "var_use_analysis.m"
      }
#line 965 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 964 "var_use_analysis.m"
      {
#line 964 "var_use_analysis.m"
        MR_Word base;
#line 964 "var_use_analysis.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 964 "var_use_analysis.m"
        *var_use_analysis__FoundFirstUse_10 = base;
#line 964 "var_use_analysis.m"
        MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__CostSoFar_8);
#line 964 "var_use_analysis.m"
      }
#line 965 "var_use_analysis.m"
    else
#line 966 "var_use_analysis.m"
      *var_use_analysis__FoundFirstUse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 949 "var_use_analysis.m"
  }
#line 944 "var_use_analysis.m"
}

#line 912 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_time_9_p_0(
#line 912 "var_use_analysis.m"
  MR_Word var_use_analysis__CliquePtr_10,
#line 912 "var_use_analysis.m"
  MR_Word var_use_analysis__CSDPtr_11,
#line 912 "var_use_analysis.m"
  MR_Word var_use_analysis__RecursionType_12,
#line 912 "var_use_analysis.m"
  MR_Word var_use_analysis__CurDepth_13,
#line 912 "var_use_analysis.m"
  MR_Float var_use_analysis__Cost_14,
#line 912 "var_use_analysis.m"
  MR_Word var_use_analysis__CallStack_15,
#line 912 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_16,
#line 912 "var_use_analysis.m"
  MR_Integer var_use_analysis__ArgNum_17,
#line 912 "var_use_analysis.m"
  MR_Float * var_use_analysis__Time_18)
#line 912 "var_use_analysis.m"
{
#line 919 "var_use_analysis.m"
  {
#line 919 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 919 "var_use_analysis.m"
    MR_Word var_use_analysis__MaybeVarUseInfo_19;
#line 919 "var_use_analysis.m"
    MR_Word var_use_analysis__V_25_25;

#line 921 "var_use_analysis.m"
    {
#line 921 "var_use_analysis.m"
      var_use_analysis__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 921 "var_use_analysis.m"
      MR_hl_field(MR_mktag(1), var_use_analysis__V_25_25, 0) = ((MR_Box) (var_use_analysis__CurDepth_13));
#line 921 "var_use_analysis.m"
    }
#line 920 "var_use_analysis.m"
    {
#line 920 "var_use_analysis.m"
      var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_1(var_use_analysis__CliquePtr_10, var_use_analysis__CSDPtr_11, var_use_analysis__ArgNum_17, var_use_analysis__RecursionType_12, var_use_analysis__V_25_25, var_use_analysis__Cost_14, var_use_analysis__CallStack_15, var_use_analysis__VarUseOptions_16, &var_use_analysis__MaybeVarUseInfo_19);
    }
#line 926 "var_use_analysis.m"
    if (((MR_tag((MR_Word) var_use_analysis__MaybeVarUseInfo_19)) == (MR_mktag((MR_Integer) 1))))
#line 927 "var_use_analysis.m"
      {
#line 927 "var_use_analysis.m"
        MR_Word var_use_analysis__VarUseType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_16, (MR_Integer) 2)));
#line 928 "var_use_analysis.m"
        MR_Word var_use_analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_16, (MR_Integer) 0)));
#line 928 "var_use_analysis.m"
        MR_Word var_use_analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_16, (MR_Integer) 1)));

#line 212 "var_use_analysis.m"
#line 212 "var_use_analysis.m"
        switch (var_use_analysis__VarUseType_24) {
#line 212 "var_use_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 212 "var_use_analysis.m"
          case (MR_Integer) 1:
#line 213 "var_use_analysis.m"
            *var_use_analysis__Time_18 = (MR_Float) 0.0000000000000000;
#line 212 "var_use_analysis.m"
            break;
#line 212 "var_use_analysis.m"
          case (MR_Integer) 2:
#line 212 "var_use_analysis.m"
          case (MR_Integer) 0:
#line 218 "var_use_analysis.m"
            *var_use_analysis__Time_18 = var_use_analysis__Cost_14;
#line 212 "var_use_analysis.m"
            break;
#line 212 "var_use_analysis.m"
        }
#line 927 "var_use_analysis.m"
      }
#line 926 "var_use_analysis.m"
    else
#line 924 "var_use_analysis.m"
      {
#line 924 "var_use_analysis.m"
        MR_Word var_use_analysis__VarUseInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeVarUseInfo_19, (MR_Integer) 0)));
#line 925 "var_use_analysis.m"
        MR_Float var_use_analysis__V_21_21;
#line 925 "var_use_analysis.m"
        MR_Word var_use_analysis__V_22_22;

#line 925 "var_use_analysis.m"
        *var_use_analysis__Time_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_20, (MR_Integer) 0)));
#line 925 "var_use_analysis.m"
        var_use_analysis__V_21_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_20, (MR_Integer) 1)));
#line 925 "var_use_analysis.m"
        var_use_analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_20, (MR_Integer) 2)));
#line 924 "var_use_analysis.m"
      }
#line 919 "var_use_analysis.m"
  }
#line 912 "var_use_analysis.m"
}

#line 896 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__call_args_first_use_5_p_0_1(
#line 896 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 896 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 896 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_2)
#line 896 "var_use_analysis.m"
{
#line 896 "var_use_analysis.m"
  {
#line 896 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 896 "var_use_analysis.m"
    MR_Float var_use_analysis__conv1_Time_18;

#line 896 "var_use_analysis.m"
    {
#line 896 "var_use_analysis.m"
      var_use_analysis__get_call_site_dynamic_var_use_time_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 6))), MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 9))), ((MR_Integer) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv1_Time_18);
    }
#line 896 "var_use_analysis.m"
    *var_use_analysis__wrapper_arg_2 = MR_box_float(var_use_analysis__conv1_Time_18);
#line 896 "var_use_analysis.m"
  }
#line 896 "var_use_analysis.m"
}

#line 875 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__call_args_first_use_5_p_0(
#line 875 "var_use_analysis.m"
  MR_Word var_use_analysis__Args_6,
#line 875 "var_use_analysis.m"
  MR_Float var_use_analysis__Cost_7,
#line 875 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_8,
#line 875 "var_use_analysis.m"
  MR_Word var_use_analysis__CostAndCallees_9,
#line 875 "var_use_analysis.m"
  MR_Word * var_use_analysis__Times_10)
#line 875 "var_use_analysis.m"
{
#line 879 "var_use_analysis.m"
  {
#line 879 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 879 "var_use_analysis.m"
    MR_Word var_use_analysis__CliquePtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 0)));
#line 879 "var_use_analysis.m"
    MR_Integer var_use_analysis__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 5)));
#line 879 "var_use_analysis.m"
    MR_Word var_use_analysis__VarUseOptions_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 6)));
#line 879 "var_use_analysis.m"
    MR_Word var_use_analysis__CallStack_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 7)));
#line 879 "var_use_analysis.m"
    MR_Word var_use_analysis__RecursionType_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 8)));
#line 879 "var_use_analysis.m"
    MR_Word var_use_analysis__CurDepth_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 9)));
#line 879 "var_use_analysis.m"
    MR_Word var_use_analysis__VarUseType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));
#line 879 "var_use_analysis.m"
    MR_Word var_use_analysis__HigherOrder_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_9, (MR_Integer) 3)));
#line 879 "var_use_analysis.m"
    MR_Word var_use_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_9, (MR_Integer) 2)));
#line 880 "var_use_analysis.m"
    MR_Word var_use_analysis___CostMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 1)));
#line 880 "var_use_analysis.m"
    MR_Word var_use_analysis___RecCostMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 2)));
#line 880 "var_use_analysis.m"
    MR_Word var_use_analysis___ContainingGoalMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 3)));
#line 880 "var_use_analysis.m"
    MR_Word var_use_analysis___CoverageArray_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 4)));
#line 880 "var_use_analysis.m"
    MR_Word var_use_analysis___RecInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 10)));
#line 883 "var_use_analysis.m"
    MR_Word var_use_analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
#line 883 "var_use_analysis.m"
    MR_Word var_use_analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));
#line 884 "var_use_analysis.m"
    MR_Word var_use_analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_9, (MR_Integer) 0)));
#line 884 "var_use_analysis.m"
    MR_Integer var_use_analysis__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_9, (MR_Integer) 1)));

#line 904 "var_use_analysis.m"
#line 904 "var_use_analysis.m"
    switch (var_use_analysis__HigherOrder_23) {
#line 904 "var_use_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 904 "var_use_analysis.m"
      case (MR_Integer) 0:
#line 886 "var_use_analysis.m"
        {
#line 886 "var_use_analysis.m"
          MR_Word var_use_analysis__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 886 "var_use_analysis.m"
          MR_Word var_use_analysis__ArgNums_25;

#line 888 "var_use_analysis.m"
          {
#line 888 "var_use_analysis.m"
            mercury__list__member_indexes0_3_p_0(var_use_analysis__TypeCtorInfo_46_46, ((MR_Box) (var_use_analysis__Var_16)), var_use_analysis__Args_6, &var_use_analysis__ArgNums_25);
          }
#line 889 "var_use_analysis.m"
          {
#line 889 "var_use_analysis.m"
            var_use_analysis__succeeded = mercury__set__empty_1_p_0((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, var_use_analysis__V_41_41);
          }
#line 893 "var_use_analysis.m"
          if (var_use_analysis__succeeded)
#line 891 "var_use_analysis.m"
            {
#line 891 "var_use_analysis.m"
              MR_Float var_use_analysis__Time_26;

#line 212 "var_use_analysis.m"
#line 212 "var_use_analysis.m"
              switch (var_use_analysis__VarUseType_22) {
#line 212 "var_use_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 212 "var_use_analysis.m"
                case (MR_Integer) 1:
#line 213 "var_use_analysis.m"
                  var_use_analysis__Time_26 = (MR_Float) 0.0000000000000000;
#line 212 "var_use_analysis.m"
                  break;
#line 212 "var_use_analysis.m"
                case (MR_Integer) 2:
#line 212 "var_use_analysis.m"
                case (MR_Integer) 0:
#line 218 "var_use_analysis.m"
                  var_use_analysis__Time_26 = var_use_analysis__Cost_7;
#line 212 "var_use_analysis.m"
                  break;
#line 212 "var_use_analysis.m"
              }
#line 892 "var_use_analysis.m"
              {
#line 892 "var_use_analysis.m"
                MR_Word base;
#line 892 "var_use_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "var_use_analysis.m"
                *var_use_analysis__Times_10 = base;
#line 892 "var_use_analysis.m"
                MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Time_26);
#line 892 "var_use_analysis.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 892 "var_use_analysis.m"
              }
#line 891 "var_use_analysis.m"
            }
#line 893 "var_use_analysis.m"
          else
#line 900 "var_use_analysis.m"
            {
#line 900 "var_use_analysis.m"
              MR_Word var_use_analysis__SingletonCallee_27;
#line 893 "var_use_analysis.m"
              MR_Box var_use_analysis__conv0_SingletonCallee_27;

#line 893 "var_use_analysis.m"
              {
#line 893 "var_use_analysis.m"
                var_use_analysis__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, var_use_analysis__V_41_41, &var_use_analysis__conv0_SingletonCallee_27);
              }
#line 893 "var_use_analysis.m"
              if (var_use_analysis__succeeded)
#line 893 "var_use_analysis.m"
                {
#line 893 "var_use_analysis.m"
                  var_use_analysis__SingletonCallee_27 = ((MR_Word) var_use_analysis__conv0_SingletonCallee_27);
#line 893 "var_use_analysis.m"
                  var_use_analysis__succeeded = MR_TRUE;
#line 893 "var_use_analysis.m"
                }
#line 900 "var_use_analysis.m"
              if (var_use_analysis__succeeded)
#line 894 "var_use_analysis.m"
                {
#line 894 "var_use_analysis.m"
                  MR_Word var_use_analysis__TypeCtorInfo_51_51;
#line 894 "var_use_analysis.m"
                  MR_Word var_use_analysis__CSDPtr_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__SingletonCallee_27, (MR_Integer) 1)));
#line 894 "var_use_analysis.m"
                  MR_Word var_use_analysis__Times0_29;
#line 894 "var_use_analysis.m"
                  MR_Word var_use_analysis__V_32_32;
#line 894 "var_use_analysis.m"
                  MR_Word var_use_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__SingletonCallee_27, (MR_Integer) 0)));

#line 896 "var_use_analysis.m"
                  {
#line 896 "var_use_analysis.m"
                    var_use_analysis__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 896 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(0), var_use_analysis__V_32_32, 0) = ((MR_Box) (&var_use_analysis_scalar_common_7[0]));
#line 896 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(0), var_use_analysis__V_32_32, 1) = ((MR_Box) (var_use_analysis__call_args_first_use_5_p_0_1));
#line 896 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(0), var_use_analysis__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 896 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(0), var_use_analysis__V_32_32, 3) = ((MR_Box) (var_use_analysis__CliquePtr_11));
#line 896 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(0), var_use_analysis__V_32_32, 4) = ((MR_Box) (var_use_analysis__CSDPtr_28));
#line 896 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(0), var_use_analysis__V_32_32, 5) = ((MR_Box) (var_use_analysis__RecursionType_19));
#line 896 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(0), var_use_analysis__V_32_32, 6) = ((MR_Box) (var_use_analysis__CurDepth_20));
#line 896 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(0), var_use_analysis__V_32_32, 7) = MR_box_float(var_use_analysis__Cost_7);
#line 896 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(0), var_use_analysis__V_32_32, 8) = ((MR_Box) (var_use_analysis__CallStack_18));
#line 896 "var_use_analysis.m"
                    MR_hl_field(MR_mktag(0), var_use_analysis__V_32_32, 9) = ((MR_Box) (var_use_analysis__VarUseOptions_17));
#line 896 "var_use_analysis.m"
                  }
#line 12617 "var_use_analysis.c"
                  var_use_analysis__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 895 "var_use_analysis.m"
                  {
#line 895 "var_use_analysis.m"
                    mercury__list__map_3_p_0(var_use_analysis__TypeCtorInfo_46_46, var_use_analysis__TypeCtorInfo_51_51, var_use_analysis__V_32_32, var_use_analysis__ArgNums_25, &var_use_analysis__Times0_29);
                  }
#line 899 "var_use_analysis.m"
                  {
#line 899 "var_use_analysis.m"
                    mercury__list__sort_and_remove_dups_2_p_0(var_use_analysis__TypeCtorInfo_51_51, var_use_analysis__Times0_29, var_use_analysis__Times_10);
#line 899 "var_use_analysis.m"
                    return;
                  }
#line 894 "var_use_analysis.m"
                }
#line 900 "var_use_analysis.m"
              else
#line 901 "var_use_analysis.m"
                {
#line 901 "var_use_analysis.m"
                  {
#line 901 "var_use_analysis.m"
                    mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.call_args_first_use\'/5", (MR_String) "wrong number of callees for normal call site");
#line 901 "var_use_analysis.m"
                    return;
                  }
#line 901 "var_use_analysis.m"
                }
#line 900 "var_use_analysis.m"
            }
#line 886 "var_use_analysis.m"
        }
#line 904 "var_use_analysis.m"
        break;
#line 904 "var_use_analysis.m"
      case (MR_Integer) 1:
#line 905 "var_use_analysis.m"
        {
#line 905 "var_use_analysis.m"
          MR_Float var_use_analysis__Time_36;

#line 212 "var_use_analysis.m"
#line 212 "var_use_analysis.m"
          switch (var_use_analysis__VarUseType_22) {
#line 212 "var_use_analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 212 "var_use_analysis.m"
            case (MR_Integer) 1:
#line 213 "var_use_analysis.m"
              var_use_analysis__Time_36 = (MR_Float) 0.0000000000000000;
#line 212 "var_use_analysis.m"
              break;
#line 212 "var_use_analysis.m"
            case (MR_Integer) 2:
#line 212 "var_use_analysis.m"
            case (MR_Integer) 0:
#line 218 "var_use_analysis.m"
              var_use_analysis__Time_36 = var_use_analysis__Cost_7;
#line 212 "var_use_analysis.m"
              break;
#line 212 "var_use_analysis.m"
          }
#line 909 "var_use_analysis.m"
          {
#line 909 "var_use_analysis.m"
            MR_Word base;
#line 909 "var_use_analysis.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "var_use_analysis.m"
            *var_use_analysis__Times_10 = base;
#line 909 "var_use_analysis.m"
            MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Time_36);
#line 909 "var_use_analysis.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 909 "var_use_analysis.m"
          }
#line 905 "var_use_analysis.m"
        }
#line 904 "var_use_analysis.m"
        break;
#line 904 "var_use_analysis.m"
    }
#line 879 "var_use_analysis.m"
  }
#line 875 "var_use_analysis.m"
}

#line 765 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__call_var_first_use_7_p_0(
#line 765 "var_use_analysis.m"
  MR_Word var_use_analysis__AtomicGoal_8,
#line 765 "var_use_analysis.m"
  MR_Word var_use_analysis__BoundVars_9,
#line 765 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_10,
#line 765 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_11,
#line 765 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_12,
#line 765 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_52,
#line 765 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_53)
#line 765 "var_use_analysis.m"
{
#line 771 "var_use_analysis.m"
  {
#line 771 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 771 "var_use_analysis.m"
    MR_Word var_use_analysis__TypeCtorInfo_77_77 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 771 "var_use_analysis.m"
    MR_Word var_use_analysis__CliquePtr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 0)));
#line 771 "var_use_analysis.m"
    MR_Word var_use_analysis__CostMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 1)));
#line 771 "var_use_analysis.m"
    MR_Word var_use_analysis__RecCostMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 2)));
#line 771 "var_use_analysis.m"
    MR_Integer var_use_analysis__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 5)));
#line 771 "var_use_analysis.m"
    MR_Word var_use_analysis__VarUseOptions_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 6)));
#line 771 "var_use_analysis.m"
    MR_Word var_use_analysis__VarUseType_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_21, (MR_Integer) 2)));
#line 771 "var_use_analysis.m"
    MR_Word var_use_analysis__CostAndCallees_27;
#line 771 "var_use_analysis.m"
    MR_Word var_use_analysis__Cost0_28;
#line 771 "var_use_analysis.m"
    MR_Float var_use_analysis__Cost_29;
#line 771 "var_use_analysis.m"
    MR_Word var_use_analysis__Args_32;
#line 771 "var_use_analysis.m"
    MR_Word var_use_analysis__Vars_33;
#line 773 "var_use_analysis.m"
    MR_Word var_use_analysis___ContainingGoalMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 3)));
#line 773 "var_use_analysis.m"
    MR_Word var_use_analysis___CoverageArray_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 4)));
#line 773 "var_use_analysis.m"
    MR_Word var_use_analysis___CallStack_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 7)));
#line 773 "var_use_analysis.m"
    MR_Word var_use_analysis___RecursionType_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 8)));
#line 773 "var_use_analysis.m"
    MR_Word var_use_analysis___MaybeCurDepth_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 9)));
#line 773 "var_use_analysis.m"
    MR_Word var_use_analysis___RecInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 10)));
#line 776 "var_use_analysis.m"
    MR_Word var_use_analysis__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_21, (MR_Integer) 0)));
#line 776 "var_use_analysis.m"
    MR_Word var_use_analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_21, (MR_Integer) 1)));
#line 777 "var_use_analysis.m"
    MR_Box var_use_analysis__conv0_CostAndCallees_27;
#line 785 "var_use_analysis.m"
    MR_Float var_use_analysis__V_54_54;

#line 777 "var_use_analysis.m"
    {
#line 777 "var_use_analysis.m"
      mercury__map__lookup_3_p_0(var_use_analysis__TypeCtorInfo_77_77, (MR_Word) &var_use_analysis_scalar_common_1[0], var_use_analysis__CostMap_16, ((MR_Box) (var_use_analysis__RevGoalPath_10)), &var_use_analysis__conv0_CostAndCallees_27);
    }
#line 777 "var_use_analysis.m"
    var_use_analysis__CostAndCallees_27 = ((MR_Word) var_use_analysis__conv0_CostAndCallees_27);
#line 780 "var_use_analysis.m"
    {
#line 780 "var_use_analysis.m"
      var_use_analysis__succeeded = analysis_utils__cost_and_callees_is_recursive_2_p_0(var_use_analysis__CliquePtr_15, var_use_analysis__CostAndCallees_27);
    }
#line 782 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 781 "var_use_analysis.m"
      {
#line 781 "var_use_analysis.m"
        MR_Box var_use_analysis__conv1_Cost0_28;

#line 781 "var_use_analysis.m"
        {
#line 781 "var_use_analysis.m"
          mercury__map__lookup_3_p_0(var_use_analysis__TypeCtorInfo_77_77, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0, var_use_analysis__RecCostMap_17, ((MR_Box) (var_use_analysis__RevGoalPath_10)), &var_use_analysis__conv1_Cost0_28);
        }
#line 781 "var_use_analysis.m"
        var_use_analysis__Cost0_28 = ((MR_Word) var_use_analysis__conv1_Cost0_28);
#line 781 "var_use_analysis.m"
      }
#line 782 "var_use_analysis.m"
    else
#line 783 "var_use_analysis.m"
      {
#line 783 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_74_74;
#line 783 "var_use_analysis.m"
        MR_Word var_use_analysis__V_75_75;
#line 783 "var_use_analysis.m"
        MR_Word var_use_analysis__V_76_76;

#line 783 "var_use_analysis.m"
        var_use_analysis__Cost0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_27, (MR_Integer) 0)));
#line 783 "var_use_analysis.m"
        var_use_analysis__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_27, (MR_Integer) 1)));
#line 783 "var_use_analysis.m"
        var_use_analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_27, (MR_Integer) 2)));
#line 783 "var_use_analysis.m"
        var_use_analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_27, (MR_Integer) 3)));
#line 783 "var_use_analysis.m"
      }
#line 785 "var_use_analysis.m"
    {
#line 785 "var_use_analysis.m"
      var_use_analysis__V_54_54 = measurements__cs_cost_get_calls_1_f_0(var_use_analysis__Cost0_28);
    }
#line 785 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__V_54_54 == ((MR_Float) 0.0000000000000000));
#line 787 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 786 "var_use_analysis.m"
      var_use_analysis__Cost_29 = (MR_Float) 0.0000000000000000;
#line 787 "var_use_analysis.m"
    else
#line 788 "var_use_analysis.m"
      {
#line 788 "var_use_analysis.m"
        var_use_analysis__Cost_29 = measurements__cs_cost_get_percall_1_f_0(var_use_analysis__Cost0_28);
      }
#line 790 "var_use_analysis.m"
    *var_use_analysis__STATE_VARIABLE_CostSoFar_53 = (var_use_analysis__STATE_VARIABLE_CostSoFar_0_52 + var_use_analysis__Cost_29);
#line 797 "var_use_analysis.m"
#line 797 "var_use_analysis.m"
    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 0)))) {
#line 797 "var_use_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 797 "var_use_analysis.m"
      case (MR_Integer) 5:
#line 800 "var_use_analysis.m"
        {
#line 800 "var_use_analysis.m"
          MR_Integer var_use_analysis__HOVar_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 1)));

#line 798 "var_use_analysis.m"
          var_use_analysis__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 2)));
#line 801 "var_use_analysis.m"
          {
#line 801 "var_use_analysis.m"
            var_use_analysis__Vars_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "var_use_analysis.m"
            MR_hl_field(MR_mktag(1), var_use_analysis__Vars_33, 0) = ((MR_Box) (var_use_analysis__HOVar_34));
#line 801 "var_use_analysis.m"
            MR_hl_field(MR_mktag(1), var_use_analysis__Vars_33, 1) = ((MR_Box) (var_use_analysis__Args_32));
#line 801 "var_use_analysis.m"
          }
#line 800 "var_use_analysis.m"
        }
#line 797 "var_use_analysis.m"
        break;
#line 797 "var_use_analysis.m"
      case (MR_Integer) 6:
#line 800 "var_use_analysis.m"
        {
#line 800 "var_use_analysis.m"
          MR_Integer var_use_analysis__HOVar_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 1)));
#line 799 "var_use_analysis.m"
          MR_Integer var_use_analysis__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 2)));

#line 799 "var_use_analysis.m"
          var_use_analysis__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 3)));
#line 801 "var_use_analysis.m"
          {
#line 801 "var_use_analysis.m"
            var_use_analysis__Vars_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "var_use_analysis.m"
            MR_hl_field(MR_mktag(1), var_use_analysis__Vars_33, 0) = ((MR_Box) (var_use_analysis__HOVar_85));
#line 801 "var_use_analysis.m"
            MR_hl_field(MR_mktag(1), var_use_analysis__Vars_33, 1) = ((MR_Box) (var_use_analysis__Args_32));
#line 801 "var_use_analysis.m"
          }
#line 800 "var_use_analysis.m"
        }
#line 797 "var_use_analysis.m"
        break;
#line 797 "var_use_analysis.m"
      case (MR_Integer) 7:
#line 795 "var_use_analysis.m"
        {
#line 795 "var_use_analysis.m"
          MR_String var_use_analysis__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 1)));
#line 795 "var_use_analysis.m"
          MR_String var_use_analysis__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 2)));

#line 795 "var_use_analysis.m"
          var_use_analysis__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 3)));
#line 796 "var_use_analysis.m"
          var_use_analysis__Vars_33 = var_use_analysis__Args_32;
#line 795 "var_use_analysis.m"
        }
#line 797 "var_use_analysis.m"
        break;
#line 797 "var_use_analysis.m"
    }
#line 803 "var_use_analysis.m"
    {
#line 803 "var_use_analysis.m"
      var_use_analysis__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (var_use_analysis__Var_20)), var_use_analysis__Vars_33);
    }
#line 865 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 831 "var_use_analysis.m"
      {
#line 831 "var_use_analysis.m"
        MR_Float var_use_analysis__FirstTime_41;
#line 831 "var_use_analysis.m"
        MR_Float var_use_analysis__V_62_62;
#line 838 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeCtorInfo_81_81;
#line 846 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeCtorInfo_82_82;

#line 812 "var_use_analysis.m"
#line 812 "var_use_analysis.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 0)))) {
#line 812 "var_use_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 812 "var_use_analysis.m"
          case (MR_Integer) 5:
#line 812 "var_use_analysis.m"
          case (MR_Integer) 6:
#line 811 "var_use_analysis.m"
            var_use_analysis__FirstTime_41 = (MR_Float) 0.0000000000000000;
#line 812 "var_use_analysis.m"
            break;
#line 812 "var_use_analysis.m"
          case (MR_Integer) 7:
#line 813 "var_use_analysis.m"
            {
#line 813 "var_use_analysis.m"
              MR_Word var_use_analysis__Times_45;

#line 814 "var_use_analysis.m"
              {
#line 814 "var_use_analysis.m"
                var_use_analysis__call_args_first_use_5_p_0(var_use_analysis__Args_32, var_use_analysis__Cost_29, var_use_analysis__StaticInfo_11, var_use_analysis__CostAndCallees_27, &var_use_analysis__Times_45);
              }
#line 819 "var_use_analysis.m"
              if ((var_use_analysis__Times_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 816 "var_use_analysis.m"
                {
#line 817 "var_use_analysis.m"
                  {
#line 817 "var_use_analysis.m"
                    mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.call_var_first_use\'/7", (MR_String) "no solutions for variable first use time");
#line 817 "var_use_analysis.m"
                    return;
                  }
#line 816 "var_use_analysis.m"
                }
#line 819 "var_use_analysis.m"
              else
#line 820 "var_use_analysis.m"
                {
#line 820 "var_use_analysis.m"
                  MR_Word var_use_analysis__LaterTimes_46;
#line 823 "var_use_analysis.m"
                  MR_Float var_use_analysis__V_47_47;
#line 823 "var_use_analysis.m"
                  MR_Word var_use_analysis__V_48_48;

#line 820 "var_use_analysis.m"
                  var_use_analysis__FirstTime_41 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__Times_45, (MR_Integer) 0)));
#line 820 "var_use_analysis.m"
                  var_use_analysis__LaterTimes_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Times_45, (MR_Integer) 1)));
#line 822 "var_use_analysis.m"
                  var_use_analysis__succeeded = (var_use_analysis__VarUseType_26 == (MR_Integer) 0);
#line 822 "var_use_analysis.m"
                  if (var_use_analysis__succeeded)
#line 822 "var_use_analysis.m"
                    {
#line 823 "var_use_analysis.m"
                      var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__LaterTimes_46)) == (MR_mktag((MR_Integer) 1)));
#line 823 "var_use_analysis.m"
                      if (var_use_analysis__succeeded)
#line 823 "var_use_analysis.m"
                        {
#line 823 "var_use_analysis.m"
                          var_use_analysis__V_47_47 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__LaterTimes_46, (MR_Integer) 0)));
#line 823 "var_use_analysis.m"
                          var_use_analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__LaterTimes_46, (MR_Integer) 1)));
#line 823 "var_use_analysis.m"
                        }
#line 822 "var_use_analysis.m"
                    }
#line 827 "var_use_analysis.m"
                  if (var_use_analysis__succeeded)
#line 825 "var_use_analysis.m"
                    {
#line 825 "var_use_analysis.m"
                      {
#line 825 "var_use_analysis.m"
                        mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.call_var_first_use\'/7", (MR_String) "multiple solutions for variable production time");
#line 825 "var_use_analysis.m"
                        return;
                      }
#line 825 "var_use_analysis.m"
                    }
#line 827 "var_use_analysis.m"
                  else
#line 828 "var_use_analysis.m"
                    {
#line 828 "var_use_analysis.m"
                    }
#line 820 "var_use_analysis.m"
                }
#line 813 "var_use_analysis.m"
            }
#line 812 "var_use_analysis.m"
            break;
#line 812 "var_use_analysis.m"
        }
#line 833 "var_use_analysis.m"
        var_use_analysis__V_62_62 = (var_use_analysis__STATE_VARIABLE_CostSoFar_0_52 + var_use_analysis__FirstTime_41);
#line 833 "var_use_analysis.m"
        {
#line 833 "var_use_analysis.m"
          MR_Word base;
#line 833 "var_use_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 833 "var_use_analysis.m"
          *var_use_analysis__FoundFirstUse_12 = base;
#line 833 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__V_62_62);
#line 833 "var_use_analysis.m"
        }
#line 837 "var_use_analysis.m"
        var_use_analysis__succeeded = (var_use_analysis__VarUseType_26 == (MR_Integer) 0);
#line 837 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 837 "var_use_analysis.m"
          {
#line 13052 "var_use_analysis.c"
            var_use_analysis__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 838 "var_use_analysis.m"
            {
#line 838 "var_use_analysis.m"
              var_use_analysis__succeeded = mercury__list__member_2_p_0(var_use_analysis__TypeCtorInfo_81_81, ((MR_Box) (var_use_analysis__Var_20)), var_use_analysis__BoundVars_9);
            }
#line 838 "var_use_analysis.m"
            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 837 "var_use_analysis.m"
          }
#line 842 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 840 "var_use_analysis.m"
          {
#line 840 "var_use_analysis.m"
            {
#line 840 "var_use_analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.call_var_first_use\'/7", (MR_String) "a bound var must be produced by a call if it is an argument.");
#line 840 "var_use_analysis.m"
              return;
            }
#line 840 "var_use_analysis.m"
          }
#line 842 "var_use_analysis.m"
        else
#line 843 "var_use_analysis.m"
          {
#line 843 "var_use_analysis.m"
          }
#line 846 "var_use_analysis.m"
        var_use_analysis__succeeded = (var_use_analysis__VarUseType_26 == (MR_Integer) 1);
#line 846 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 846 "var_use_analysis.m"
          {
#line 13088 "var_use_analysis.c"
            var_use_analysis__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 847 "var_use_analysis.m"
            {
#line 847 "var_use_analysis.m"
              var_use_analysis__succeeded = mercury__list__member_2_p_0(var_use_analysis__TypeCtorInfo_82_82, ((MR_Box) (var_use_analysis__Var_20)), var_use_analysis__BoundVars_9);
            }
#line 846 "var_use_analysis.m"
          }
#line 851 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 849 "var_use_analysis.m"
          {
#line 849 "var_use_analysis.m"
            {
#line 849 "var_use_analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.call_var_first_use\'/7", (MR_String) "a consumed var must not be mentioned in BoundVars");
#line 849 "var_use_analysis.m"
              return;
            }
#line 849 "var_use_analysis.m"
          }
#line 851 "var_use_analysis.m"
        else
#line 852 "var_use_analysis.m"
          {
#line 852 "var_use_analysis.m"
          }
#line 855 "var_use_analysis.m"
        var_use_analysis__succeeded = (var_use_analysis__VarUseType_26 == (MR_Integer) 0);
#line 855 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 857 "var_use_analysis.m"
          {
#line 857 "var_use_analysis.m"
            if (((((MR_tag((MR_Word) var_use_analysis__AtomicGoal_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 856 "var_use_analysis.m"
              {
#line 856 "var_use_analysis.m"
                MR_Integer var_use_analysis__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 1)));
#line 856 "var_use_analysis.m"
                MR_Word var_use_analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 2)));

#line 856 "var_use_analysis.m"
                var_use_analysis__succeeded = (var_use_analysis__Var_20 == var_use_analysis__V_83_83);
#line 856 "var_use_analysis.m"
              }
#line 857 "var_use_analysis.m"
            else
#line 857 "var_use_analysis.m"
            if (((((MR_tag((MR_Word) var_use_analysis__AtomicGoal_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 857 "var_use_analysis.m"
              {
#line 857 "var_use_analysis.m"
                MR_Integer var_use_analysis__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 1)));
#line 857 "var_use_analysis.m"
                MR_Integer var_use_analysis__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 2)));
#line 857 "var_use_analysis.m"
                MR_Word var_use_analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 3)));

#line 857 "var_use_analysis.m"
                var_use_analysis__succeeded = (var_use_analysis__Var_20 == var_use_analysis__V_84_84);
#line 857 "var_use_analysis.m"
              }
#line 857 "var_use_analysis.m"
            else
#line 857 "var_use_analysis.m"
              var_use_analysis__succeeded = MR_FALSE;
#line 857 "var_use_analysis.m"
          }
#line 862 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 860 "var_use_analysis.m"
          {
#line 860 "var_use_analysis.m"
            {
#line 860 "var_use_analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.call_var_first_use\'/7", (MR_String) "a HO call site cannot produce its own HO value");
#line 860 "var_use_analysis.m"
              return;
            }
#line 860 "var_use_analysis.m"
          }
#line 862 "var_use_analysis.m"
        else
#line 863 "var_use_analysis.m"
          {
#line 863 "var_use_analysis.m"
          }
#line 831 "var_use_analysis.m"
      }
#line 865 "var_use_analysis.m"
    else
#line 866 "var_use_analysis.m"
      *var_use_analysis__FoundFirstUse_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 771 "var_use_analysis.m"
  }
#line 765 "var_use_analysis.m"
}

#line 674 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__goal_var_first_use_6_p_0(
#line 674 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_7,
#line 674 "var_use_analysis.m"
  MR_Word var_use_analysis__Goal_8,
#line 674 "var_use_analysis.m"
  MR_Word var_use_analysis__StaticInfo_9,
#line 674 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_67,
#line 674 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_68,
#line 674 "var_use_analysis.m"
  MR_Word * var_use_analysis__FoundFirstUse_11)
#line 674 "var_use_analysis.m"
{
#line 678 "var_use_analysis.m"
  while (MR_TRUE)
#line 678 "var_use_analysis.m"
    {
#line 678 "var_use_analysis.m"
      /* tailcall optimized into a loop */
#line 678 "var_use_analysis.m"
      {
#line 678 "var_use_analysis.m"
        MR_bool var_use_analysis__succeeded;
#line 678 "var_use_analysis.m"
        MR_Word var_use_analysis__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_8, (MR_Integer) 0)));
#line 678 "var_use_analysis.m"
        MR_Word var_use_analysis__Detism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_8, (MR_Integer) 1)));
#line 678 "var_use_analysis.m"
        MR_Word var_use_analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_8, (MR_Integer) 2)));
#line 678 "var_use_analysis.m"
        MR_Word var_use_analysis__CoverageArray_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 4)));
#line 678 "var_use_analysis.m"
        MR_Word var_use_analysis__Coverage_16;
#line 680 "var_use_analysis.m"
        MR_Word var_use_analysis__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 0)));
#line 680 "var_use_analysis.m"
        MR_Word var_use_analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 1)));
#line 680 "var_use_analysis.m"
        MR_Word var_use_analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 2)));
#line 680 "var_use_analysis.m"
        MR_Word var_use_analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 3)));
#line 680 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 5)));
#line 680 "var_use_analysis.m"
        MR_Word var_use_analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 6)));
#line 680 "var_use_analysis.m"
        MR_Word var_use_analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 7)));
#line 680 "var_use_analysis.m"
        MR_Word var_use_analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 8)));
#line 680 "var_use_analysis.m"
        MR_Word var_use_analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 9)));
#line 680 "var_use_analysis.m"
        MR_Word var_use_analysis__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 10)));
#line 681 "var_use_analysis.m"
        MR_Box var_use_analysis__conv0_Coverage_16;

#line 681 "var_use_analysis.m"
        {
#line 681 "var_use_analysis.m"
          var_use_analysis__conv0_Coverage_16 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__CoverageArray_15, var_use_analysis__V_14_14);
        }
#line 681 "var_use_analysis.m"
        var_use_analysis__Coverage_16 = ((MR_Word) var_use_analysis__conv0_Coverage_16);
#line 686 "var_use_analysis.m"
        {
#line 686 "var_use_analysis.m"
          MR_Integer var_use_analysis__V_112_112;

#line 686 "var_use_analysis.m"
          {
#line 686 "var_use_analysis.m"
            var_use_analysis__succeeded = coverage__get_coverage_before_2_p_0(var_use_analysis__Coverage_16, &var_use_analysis__V_112_112);
          }
#line 686 "var_use_analysis.m"
          if (var_use_analysis__succeeded)
#line 686 "var_use_analysis.m"
            var_use_analysis__succeeded = ((MR_Integer) 0 == var_use_analysis__V_112_112);
#line 686 "var_use_analysis.m"
        }
#line 687 "var_use_analysis.m"
        if (!(var_use_analysis__succeeded))
#line 688 "var_use_analysis.m"
          {
#line 688 "var_use_analysis.m"
            MR_Word var_use_analysis__VarUseType_17;
#line 688 "var_use_analysis.m"
            MR_Word var_use_analysis__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 6)));
#line 688 "var_use_analysis.m"
            MR_Word var_use_analysis__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 0)));
#line 688 "var_use_analysis.m"
            MR_Word var_use_analysis__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 1)));
#line 688 "var_use_analysis.m"
            MR_Word var_use_analysis__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 2)));
#line 688 "var_use_analysis.m"
            MR_Word var_use_analysis__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 3)));
#line 688 "var_use_analysis.m"
            MR_Word var_use_analysis__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 4)));
#line 688 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 5)));
#line 688 "var_use_analysis.m"
            MR_Word var_use_analysis__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 7)));
#line 688 "var_use_analysis.m"
            MR_Word var_use_analysis__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 8)));
#line 688 "var_use_analysis.m"
            MR_Word var_use_analysis__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 9)));
#line 688 "var_use_analysis.m"
            MR_Word var_use_analysis__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 10)));
#line 688 "var_use_analysis.m"
            MR_Word var_use_analysis__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_70_70, (MR_Integer) 0)));
#line 688 "var_use_analysis.m"
            MR_Word var_use_analysis__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_70_70, (MR_Integer) 1)));

#line 688 "var_use_analysis.m"
            var_use_analysis__VarUseType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_70_70, (MR_Integer) 2)));
#line 689 "var_use_analysis.m"
            var_use_analysis__succeeded = (var_use_analysis__VarUseType_17 == (MR_Integer) 0);
#line 688 "var_use_analysis.m"
            if (var_use_analysis__succeeded)
#line 688 "var_use_analysis.m"
              {
#line 692 "var_use_analysis.m"
#line 692 "var_use_analysis.m"
                switch (var_use_analysis__Detism_13) {
#line 692 "var_use_analysis.m"
                  default:
#line 692 "var_use_analysis.m"
                    var_use_analysis__succeeded = MR_FALSE;
#line 692 "var_use_analysis.m"
                    break;
#line 692 "var_use_analysis.m"
                  case (MR_Integer) 6:
#line 691 "var_use_analysis.m"
                    var_use_analysis__succeeded = MR_TRUE;
#line 692 "var_use_analysis.m"
                    break;
#line 692 "var_use_analysis.m"
                  case (MR_Integer) 7:
#line 693 "var_use_analysis.m"
                    var_use_analysis__succeeded = MR_TRUE;
#line 692 "var_use_analysis.m"
                    break;
#line 692 "var_use_analysis.m"
                }
#line 692 "var_use_analysis.m"
                if (!(var_use_analysis__succeeded))
#line 695 "var_use_analysis.m"
                  {
#line 695 "var_use_analysis.m"
                    MR_Integer var_use_analysis__V_113_113;

#line 695 "var_use_analysis.m"
                    {
#line 695 "var_use_analysis.m"
                      var_use_analysis__succeeded = coverage__get_coverage_after_2_p_0(var_use_analysis__Coverage_16, &var_use_analysis__V_113_113);
                    }
#line 695 "var_use_analysis.m"
                    if (var_use_analysis__succeeded)
#line 695 "var_use_analysis.m"
                      var_use_analysis__succeeded = ((MR_Integer) 0 == var_use_analysis__V_113_113);
#line 695 "var_use_analysis.m"
                  }
#line 688 "var_use_analysis.m"
              }
#line 688 "var_use_analysis.m"
          }
#line 700 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 699 "var_use_analysis.m"
          {
#line 699 "var_use_analysis.m"
            *var_use_analysis__FoundFirstUse_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 699 "var_use_analysis.m"
            *var_use_analysis__STATE_VARIABLE_CostSoFar_68 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_67;
#line 699 "var_use_analysis.m"
          }
#line 700 "var_use_analysis.m"
        else
#line 705 "var_use_analysis.m"
#line 705 "var_use_analysis.m"
          switch (MR_tag((MR_Word) var_use_analysis__GoalExpr_12)) {
#line 705 "var_use_analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 705 "var_use_analysis.m"
            case (MR_Integer) 0:
#line 702 "var_use_analysis.m"
              {
#line 702 "var_use_analysis.m"
                MR_Word var_use_analysis__Conjuncts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));

#line 703 "var_use_analysis.m"
                {
#line 703 "var_use_analysis.m"
                  var_use_analysis__conj_var_first_use_7_p_0(var_use_analysis__RevGoalPath_7, (MR_Integer) 1, var_use_analysis__Conjuncts_18, var_use_analysis__StaticInfo_9, var_use_analysis__STATE_VARIABLE_CostSoFar_0_67, var_use_analysis__STATE_VARIABLE_CostSoFar_68, var_use_analysis__FoundFirstUse_11);
#line 703 "var_use_analysis.m"
                  return;
                }
#line 702 "var_use_analysis.m"
              }
#line 705 "var_use_analysis.m"
              break;
#line 705 "var_use_analysis.m"
            case (MR_Integer) 1:
#line 706 "var_use_analysis.m"
              {
#line 706 "var_use_analysis.m"
                MR_Word var_use_analysis__Disjuncts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));

#line 707 "var_use_analysis.m"
                {
#line 707 "var_use_analysis.m"
                  var_use_analysis__disj_var_first_use_7_p_0(var_use_analysis__RevGoalPath_7, var_use_analysis__Disjuncts_19, var_use_analysis__Detism_13, var_use_analysis__StaticInfo_9, var_use_analysis__STATE_VARIABLE_CostSoFar_0_67, var_use_analysis__STATE_VARIABLE_CostSoFar_68, var_use_analysis__FoundFirstUse_11);
#line 707 "var_use_analysis.m"
                  return;
                }
#line 706 "var_use_analysis.m"
              }
#line 705 "var_use_analysis.m"
              break;
#line 705 "var_use_analysis.m"
            case (MR_Integer) 2:
#line 710 "var_use_analysis.m"
              {
#line 710 "var_use_analysis.m"
                MR_Integer var_use_analysis__SwitchedOnVar_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));
#line 710 "var_use_analysis.m"
                MR_Word var_use_analysis__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
#line 710 "var_use_analysis.m"
                MR_Word var_use_analysis___CanFail_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));

#line 711 "var_use_analysis.m"
                {
#line 711 "var_use_analysis.m"
                  var_use_analysis__switch_var_first_use_7_p_0(var_use_analysis__RevGoalPath_7, var_use_analysis__SwitchedOnVar_20, var_use_analysis__Cases_22, var_use_analysis__StaticInfo_9, var_use_analysis__STATE_VARIABLE_CostSoFar_0_67, var_use_analysis__STATE_VARIABLE_CostSoFar_68, var_use_analysis__FoundFirstUse_11);
#line 711 "var_use_analysis.m"
                  return;
                }
#line 710 "var_use_analysis.m"
              }
#line 705 "var_use_analysis.m"
              break;
#line 705 "var_use_analysis.m"
            case (MR_Integer) 3:
#line 705 "var_use_analysis.m"
#line 705 "var_use_analysis.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 0)))) {
#line 705 "var_use_analysis.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 705 "var_use_analysis.m"
                case (MR_Integer) 0:
#line 714 "var_use_analysis.m"
                  {
#line 714 "var_use_analysis.m"
                    MR_Word var_use_analysis__Cond_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
#line 714 "var_use_analysis.m"
                    MR_Word var_use_analysis__Then_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
#line 714 "var_use_analysis.m"
                    MR_Word var_use_analysis__Else_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 3)));

#line 715 "var_use_analysis.m"
                    {
#line 715 "var_use_analysis.m"
                      var_use_analysis__ite_var_first_use_8_p_0(var_use_analysis__RevGoalPath_7, var_use_analysis__Cond_23, var_use_analysis__Then_24, var_use_analysis__Else_25, var_use_analysis__StaticInfo_9, var_use_analysis__STATE_VARIABLE_CostSoFar_0_67, var_use_analysis__STATE_VARIABLE_CostSoFar_68, var_use_analysis__FoundFirstUse_11);
#line 715 "var_use_analysis.m"
                      return;
                    }
#line 714 "var_use_analysis.m"
                  }
#line 705 "var_use_analysis.m"
                  break;
#line 705 "var_use_analysis.m"
                case (MR_Integer) 1:
#line 724 "var_use_analysis.m"
                  {
#line 724 "var_use_analysis.m"
                    MR_Word var_use_analysis__SubGoal_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
#line 724 "var_use_analysis.m"
                    MR_Word var_use_analysis__RevSubGoalPath_29;

#line 725 "var_use_analysis.m"
                    {
#line 725 "var_use_analysis.m"
                      var_use_analysis__RevSubGoalPath_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "var_use_analysis.m"
                      MR_hl_field(MR_mktag(1), var_use_analysis__RevSubGoalPath_29, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_7));
#line 725 "var_use_analysis.m"
                      MR_hl_field(MR_mktag(1), var_use_analysis__RevSubGoalPath_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 725 "var_use_analysis.m"
                    }
#line 726 "var_use_analysis.m"
                    /* direct tailcall eliminated */
#line 726 "var_use_analysis.m"
                    {
#line 726 "var_use_analysis.m"
                      MR_Word var_use_analysis__RevGoalPath__tmp_copy_7 = var_use_analysis__RevSubGoalPath_29;
#line 726 "var_use_analysis.m"
                      MR_Word var_use_analysis__Goal__tmp_copy_8 = var_use_analysis__SubGoal_26;

#line 726 "var_use_analysis.m"
                      var_use_analysis__Goal_8 = var_use_analysis__Goal__tmp_copy_8;
#line 726 "var_use_analysis.m"
                      var_use_analysis__RevGoalPath_7 = var_use_analysis__RevGoalPath__tmp_copy_7;
#line 726 "var_use_analysis.m"
                    }
#line 726 "var_use_analysis.m"
                    continue;
#line 724 "var_use_analysis.m"
                  }
#line 705 "var_use_analysis.m"
                  break;
#line 705 "var_use_analysis.m"
                case (MR_Integer) 2:
#line 724 "var_use_analysis.m"
                  {
#line 724 "var_use_analysis.m"
                    MR_Word var_use_analysis__ScopeIsCut_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
#line 724 "var_use_analysis.m"
                    MR_Word var_use_analysis__SubGoal_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
#line 724 "var_use_analysis.m"
                    MR_Word var_use_analysis__GoalPathStep_115;
#line 724 "var_use_analysis.m"
                    MR_Word var_use_analysis__RevSubGoalPath_116;

#line 723 "var_use_analysis.m"
                    {
#line 723 "var_use_analysis.m"
                      var_use_analysis__GoalPathStep_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "var_use_analysis.m"
                      MR_hl_field(MR_mktag(3), var_use_analysis__GoalPathStep_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 723 "var_use_analysis.m"
                      MR_hl_field(MR_mktag(3), var_use_analysis__GoalPathStep_115, 1) = ((MR_Box) (var_use_analysis__ScopeIsCut_28));
#line 723 "var_use_analysis.m"
                    }
#line 725 "var_use_analysis.m"
                    {
#line 725 "var_use_analysis.m"
                      var_use_analysis__RevSubGoalPath_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "var_use_analysis.m"
                      MR_hl_field(MR_mktag(1), var_use_analysis__RevSubGoalPath_116, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_7));
#line 725 "var_use_analysis.m"
                      MR_hl_field(MR_mktag(1), var_use_analysis__RevSubGoalPath_116, 1) = ((MR_Box) (var_use_analysis__GoalPathStep_115));
#line 725 "var_use_analysis.m"
                    }
#line 726 "var_use_analysis.m"
                    /* direct tailcall eliminated */
#line 726 "var_use_analysis.m"
                    {
#line 726 "var_use_analysis.m"
                      MR_Word var_use_analysis__RevGoalPath__tmp_copy_7 = var_use_analysis__RevSubGoalPath_116;
#line 726 "var_use_analysis.m"
                      MR_Word var_use_analysis__Goal__tmp_copy_8 = var_use_analysis__SubGoal_114;

#line 726 "var_use_analysis.m"
                      var_use_analysis__Goal_8 = var_use_analysis__Goal__tmp_copy_8;
#line 726 "var_use_analysis.m"
                      var_use_analysis__RevGoalPath_7 = var_use_analysis__RevGoalPath__tmp_copy_7;
#line 726 "var_use_analysis.m"
                    }
#line 726 "var_use_analysis.m"
                    continue;
#line 724 "var_use_analysis.m"
                  }
#line 705 "var_use_analysis.m"
                  break;
#line 705 "var_use_analysis.m"
                case (MR_Integer) 3:
#line 729 "var_use_analysis.m"
                  {
#line 729 "var_use_analysis.m"
                    MR_Word var_use_analysis__BoundVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 3)));
#line 729 "var_use_analysis.m"
                    MR_Word var_use_analysis__AtomicGoal_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 4)));
#line 729 "var_use_analysis.m"
                    MR_String var_use_analysis__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
#line 729 "var_use_analysis.m"
                    MR_Integer var_use_analysis__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));

#line 737 "var_use_analysis.m"
#line 737 "var_use_analysis.m"
                    switch (MR_tag((MR_Word) var_use_analysis__AtomicGoal_33)) {
#line 737 "var_use_analysis.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 737 "var_use_analysis.m"
                      case (MR_Integer) 0:
#line 737 "var_use_analysis.m"
                      case (MR_Integer) 1:
#line 737 "var_use_analysis.m"
                      case (MR_Integer) 2:
#line 748 "var_use_analysis.m"
                        {
#line 750 "var_use_analysis.m"
                          {
#line 750 "var_use_analysis.m"
                            var_use_analysis__atomic_trivial_var_first_use_5_p_0(var_use_analysis__AtomicGoal_33, var_use_analysis__BoundVars_32, var_use_analysis__STATE_VARIABLE_CostSoFar_0_67, var_use_analysis__StaticInfo_9, var_use_analysis__FoundFirstUse_11);
                          }
#line 748 "var_use_analysis.m"
                          *var_use_analysis__STATE_VARIABLE_CostSoFar_68 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_67;
#line 748 "var_use_analysis.m"
                        }
#line 737 "var_use_analysis.m"
                        break;
#line 737 "var_use_analysis.m"
                      case (MR_Integer) 3:
#line 737 "var_use_analysis.m"
#line 737 "var_use_analysis.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_33, (MR_Integer) 0)))) {
#line 737 "var_use_analysis.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 737 "var_use_analysis.m"
                          case (MR_Integer) 0:
#line 737 "var_use_analysis.m"
                          case (MR_Integer) 1:
#line 737 "var_use_analysis.m"
                          case (MR_Integer) 2:
#line 737 "var_use_analysis.m"
                          case (MR_Integer) 3:
#line 737 "var_use_analysis.m"
                          case (MR_Integer) 4:
#line 737 "var_use_analysis.m"
                          case (MR_Integer) 8:
#line 737 "var_use_analysis.m"
                          case (MR_Integer) 9:
#line 748 "var_use_analysis.m"
                            {
#line 750 "var_use_analysis.m"
                              {
#line 750 "var_use_analysis.m"
                                var_use_analysis__atomic_trivial_var_first_use_5_p_0(var_use_analysis__AtomicGoal_33, var_use_analysis__BoundVars_32, var_use_analysis__STATE_VARIABLE_CostSoFar_0_67, var_use_analysis__StaticInfo_9, var_use_analysis__FoundFirstUse_11);
                              }
#line 748 "var_use_analysis.m"
                              *var_use_analysis__STATE_VARIABLE_CostSoFar_68 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_67;
#line 748 "var_use_analysis.m"
                            }
#line 737 "var_use_analysis.m"
                            break;
#line 737 "var_use_analysis.m"
                          case (MR_Integer) 5:
#line 737 "var_use_analysis.m"
                          case (MR_Integer) 6:
#line 737 "var_use_analysis.m"
                          case (MR_Integer) 7:
#line 735 "var_use_analysis.m"
                            {
#line 735 "var_use_analysis.m"
                              var_use_analysis__call_var_first_use_7_p_0(var_use_analysis__AtomicGoal_33, var_use_analysis__BoundVars_32, var_use_analysis__RevGoalPath_7, var_use_analysis__StaticInfo_9, var_use_analysis__FoundFirstUse_11, var_use_analysis__STATE_VARIABLE_CostSoFar_0_67, var_use_analysis__STATE_VARIABLE_CostSoFar_68);
#line 735 "var_use_analysis.m"
                              return;
                            }
#line 737 "var_use_analysis.m"
                            break;
#line 737 "var_use_analysis.m"
                        }
#line 737 "var_use_analysis.m"
                        break;
#line 737 "var_use_analysis.m"
                    }
#line 729 "var_use_analysis.m"
                  }
#line 705 "var_use_analysis.m"
                  break;
#line 705 "var_use_analysis.m"
              }
#line 705 "var_use_analysis.m"
              break;
#line 705 "var_use_analysis.m"
          }
#line 678 "var_use_analysis.m"
      }
#line 678 "var_use_analysis.m"
      break;
#line 678 "var_use_analysis.m"
    }
#line 674 "var_use_analysis.m"
}

#line 564 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0_2(
#line 564 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 564 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 564 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 564 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_3,
#line 564 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_4,
#line 564 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_5)
#line 564 "var_use_analysis.m"
{
#line 564 "var_use_analysis.m"
  {
#line 564 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 564 "var_use_analysis.m"
    MR_Word var_use_analysis__conv4_HeadVar__3_3;
#line 564 "var_use_analysis.m"
    MR_Word var_use_analysis__conv3_HeadVar__5_5;

#line 564 "var_use_analysis.m"
    {
#line 564 "var_use_analysis.m"
      coverage__add_coverage_point_to_map_5_p_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2), &var_use_analysis__conv4_HeadVar__3_3, ((MR_Word) var_use_analysis__wrapper_arg_4), &var_use_analysis__conv3_HeadVar__5_5);
    }
#line 564 "var_use_analysis.m"
    *var_use_analysis__wrapper_arg_3 = ((MR_Box) (var_use_analysis__conv4_HeadVar__3_3));
#line 564 "var_use_analysis.m"
    *var_use_analysis__wrapper_arg_5 = ((MR_Box) (var_use_analysis__conv3_HeadVar__5_5));
#line 564 "var_use_analysis.m"
  }
#line 564 "var_use_analysis.m"
}

#line 541 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0_1(
#line 541 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 541 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 541 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 541 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_3)
#line 541 "var_use_analysis.m"
{
#line 541 "var_use_analysis.m"
  {
#line 541 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 541 "var_use_analysis.m"
    MR_Word var_use_analysis__conv1_HeadVar__4_4;

#line 541 "var_use_analysis.m"
    {
#line 541 "var_use_analysis.m"
      analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2), &var_use_analysis__conv1_HeadVar__4_4);
    }
#line 541 "var_use_analysis.m"
    *var_use_analysis__wrapper_arg_3 = ((MR_Box) (var_use_analysis__conv1_HeadVar__4_4));
#line 541 "var_use_analysis.m"
  }
#line 541 "var_use_analysis.m"
}

#line 509 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0(
#line 509 "var_use_analysis.m"
  MR_Word var_use_analysis__CliquePtr_8,
#line 509 "var_use_analysis.m"
  MR_Word var_use_analysis__PDPtr_9,
#line 509 "var_use_analysis.m"
  MR_Integer var_use_analysis__ArgNum_10,
#line 509 "var_use_analysis.m"
  MR_Word var_use_analysis__RecursionType_11,
#line 509 "var_use_analysis.m"
  MR_Word var_use_analysis__Depth_12,
#line 509 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_13,
#line 509 "var_use_analysis.m"
  MR_Word * var_use_analysis__Info_14)
#line 509 "var_use_analysis.m"
{
#line 515 "var_use_analysis.m"
  {
#line 515 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 515 "var_use_analysis.m"
    MR_Word var_use_analysis__Deep_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_13, (MR_Integer) 0)));
#line 515 "var_use_analysis.m"
    MR_Word var_use_analysis__PD_16;
#line 515 "var_use_analysis.m"
    MR_Word var_use_analysis__PSPtr_17;
#line 515 "var_use_analysis.m"
    MR_Word var_use_analysis__MaybeProcrep_18;
#line 516 "var_use_analysis.m"
    MR_Word var_use_analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_13, (MR_Integer) 1)));
#line 516 "var_use_analysis.m"
    MR_Word var_use_analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_13, (MR_Integer) 2)));
#line 518 "var_use_analysis.m"
    MR_ArrayPtr var_use_analysis__V_83_83;
#line 518 "var_use_analysis.m"
    MR_Word var_use_analysis__V_84_84;

#line 517 "var_use_analysis.m"
    {
#line 517 "var_use_analysis.m"
      profile__deep_lookup_proc_dynamics_3_p_0(var_use_analysis__Deep_15, var_use_analysis__PDPtr_9, &var_use_analysis__PD_16);
    }
#line 518 "var_use_analysis.m"
    var_use_analysis__PSPtr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_16, (MR_Integer) 0)));
#line 518 "var_use_analysis.m"
    var_use_analysis__V_83_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_16, (MR_Integer) 1)));
#line 518 "var_use_analysis.m"
    var_use_analysis__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_16, (MR_Integer) 2)));
#line 519 "var_use_analysis.m"
    {
#line 519 "var_use_analysis.m"
      analysis_utils__deep_get_maybe_procrep_3_p_0(var_use_analysis__Deep_15, var_use_analysis__PSPtr_17, &var_use_analysis__MaybeProcrep_18);
    }
#line 582 "var_use_analysis.m"
    if (((MR_tag((MR_Word) var_use_analysis__MaybeProcrep_18)) == (MR_mktag((MR_Integer) 1))))
#line 583 "var_use_analysis.m"
      {
#line 583 "var_use_analysis.m"
        MR_String var_use_analysis__Error_45 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__MaybeProcrep_18, (MR_Integer) 0)));

#line 584 "var_use_analysis.m"
        {
#line 584 "var_use_analysis.m"
          MR_Word base;
#line 584 "var_use_analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 584 "var_use_analysis.m"
          *var_use_analysis__Info_14 = base;
#line 584 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__Error_45));
#line 584 "var_use_analysis.m"
        }
#line 583 "var_use_analysis.m"
      }
#line 582 "var_use_analysis.m"
    else
#line 521 "var_use_analysis.m"
      {
#line 521 "var_use_analysis.m"
        MR_Word var_use_analysis__ProcRep_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeProcrep_18, (MR_Integer) 0)));
#line 521 "var_use_analysis.m"
        MR_Word var_use_analysis__ProcDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcRep_19, (MR_Integer) 1)));
#line 521 "var_use_analysis.m"
        MR_Word var_use_analysis__HeadVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 0)));
#line 522 "var_use_analysis.m"
        MR_Word var_use_analysis__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcRep_19, (MR_Integer) 0)));
#line 523 "var_use_analysis.m"
        MR_Word var_use_analysis__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 1)));
#line 523 "var_use_analysis.m"
        MR_Word var_use_analysis__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 2)));
#line 523 "var_use_analysis.m"
        MR_Word var_use_analysis__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 3)));
#line 523 "var_use_analysis.m"
        MR_Word var_use_analysis__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 4)));
#line 575 "var_use_analysis.m"
        MR_Integer var_use_analysis__Var_22;
#line 575 "var_use_analysis.m"
        MR_Word var_use_analysis__Mode_23;
#line 524 "var_use_analysis.m"
        MR_Word var_use_analysis__V_46_46;
#line 524 "var_use_analysis.m"
        MR_Box var_use_analysis__conv0_V_46_46;

#line 524 "var_use_analysis.m"
        {
#line 524 "var_use_analysis.m"
          var_use_analysis__succeeded = mercury__list__index0_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, var_use_analysis__HeadVars_21, var_use_analysis__ArgNum_10, &var_use_analysis__conv0_V_46_46);
        }
#line 524 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 524 "var_use_analysis.m"
          {
#line 524 "var_use_analysis.m"
            var_use_analysis__V_46_46 = ((MR_Word) var_use_analysis__conv0_V_46_46);
#line 524 "var_use_analysis.m"
            var_use_analysis__succeeded = MR_TRUE;
#line 524 "var_use_analysis.m"
          }
#line 524 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 524 "var_use_analysis.m"
          {
#line 524 "var_use_analysis.m"
            var_use_analysis__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__V_46_46, (MR_Integer) 0)));
#line 524 "var_use_analysis.m"
            var_use_analysis__Mode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_46_46, (MR_Integer) 1)));
#line 524 "var_use_analysis.m"
            var_use_analysis__succeeded = MR_TRUE;
#line 524 "var_use_analysis.m"
          }
#line 575 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 525 "var_use_analysis.m"
          {
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__TypeCtorInfo_125_125;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__TypeCtorInfo_135_135;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__TypeInfo_136_136;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__ComputedUse_24;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__VarUseType_25;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__Slots_28;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__CallSiteCostMap_29;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__MaybeRecursiveCallSiteCostMap_30;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__RecursiveCallSiteCostMap_31;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__Goal0_32;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__LastGoalId_33;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__ContainingGoalMap_34;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__Goal_35;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__PS_36;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__ProcLabel_37;
#line 525 "var_use_analysis.m"
            MR_ArrayPtr var_use_analysis__CoveragePointsArray_38;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__CoveragePoints_39;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__MaybeCoveragePointsArray_40;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__SolnsCoveragePointMap_41;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__BranchCoveragePointMap_42;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__Own_43;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__CoverageArray_44;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__V_63_63;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__V_64_64;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__V_65_65;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__V_71_71;
#line 525 "var_use_analysis.m"
            MR_Word var_use_analysis__V_72_72;
#line 525 "var_use_analysis.m"
            MR_ArrayPtr var_use_analysis__V_104_104;
#line 526 "var_use_analysis.m"
            MR_Word var_use_analysis__V_90_90;
#line 526 "var_use_analysis.m"
            MR_Word var_use_analysis__V_91_91;
#line 541 "var_use_analysis.m"
            MR_Box var_use_analysis__conv2_CallSiteCostMap_29;
#line 549 "var_use_analysis.m"
            MR_Word var_use_analysis__V_92_92;
#line 549 "var_use_analysis.m"
            MR_Word var_use_analysis__V_93_93;
#line 549 "var_use_analysis.m"
            MR_Word var_use_analysis__V_94_94;
#line 549 "var_use_analysis.m"
            MR_Word var_use_analysis__V_95_95;
#line 554 "var_use_analysis.m"
            MR_String var_use_analysis__V_96_96;
#line 554 "var_use_analysis.m"
            MR_String var_use_analysis__V_97_97;
#line 554 "var_use_analysis.m"
            MR_String var_use_analysis__V_98_98;
#line 554 "var_use_analysis.m"
            MR_String var_use_analysis__V_99_99;
#line 554 "var_use_analysis.m"
            MR_String var_use_analysis__V_100_100;
#line 554 "var_use_analysis.m"
            MR_Integer var_use_analysis__V_101_101;
#line 554 "var_use_analysis.m"
            MR_Word var_use_analysis__V_102_102;
#line 554 "var_use_analysis.m"
            MR_ArrayPtr var_use_analysis__V_103_103;
#line 554 "var_use_analysis.m"
            MR_Word var_use_analysis__V_105_105;
#line 554 "var_use_analysis.m"
            MR_Word var_use_analysis__V_106_106;
#line 557 "var_use_analysis.m"
            MR_Word var_use_analysis__V_118_118;
#line 557 "var_use_analysis.m"
            MR_ArrayPtr var_use_analysis__V_119_119;
#line 564 "var_use_analysis.m"
            MR_Box var_use_analysis__conv6_SolnsCoveragePointMap_41;
#line 564 "var_use_analysis.m"
            MR_Box var_use_analysis__conv5_BranchCoveragePointMap_42;

#line 525 "var_use_analysis.m"
            {
#line 525 "var_use_analysis.m"
              var_use_analysis__var_mode_to_var_use_type_2_p_0(var_use_analysis__Mode_23, &var_use_analysis__ComputedUse_24);
            }
#line 526 "var_use_analysis.m"
            var_use_analysis__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_13, (MR_Integer) 0)));
#line 526 "var_use_analysis.m"
            var_use_analysis__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_13, (MR_Integer) 1)));
#line 526 "var_use_analysis.m"
            var_use_analysis__VarUseType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_13, (MR_Integer) 2)));
#line 527 "var_use_analysis.m"
            var_use_analysis__succeeded = (var_use_analysis__VarUseType_25 == var_use_analysis__ComputedUse_24);
#line 529 "var_use_analysis.m"
            if (var_use_analysis__succeeded)
#line 528 "var_use_analysis.m"
              {
#line 528 "var_use_analysis.m"
              }
#line 529 "var_use_analysis.m"
            else
#line 530 "var_use_analysis.m"
              {
#line 530 "var_use_analysis.m"
                MR_Word var_use_analysis__TypeCtorInfo_121_121 = (MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0;
#line 530 "var_use_analysis.m"
                MR_Integer var_use_analysis__PDNum_26 = (MR_Integer) var_use_analysis__PDPtr_9;
#line 530 "var_use_analysis.m"
                MR_String var_use_analysis__Msg_27;
#line 530 "var_use_analysis.m"
                MR_String var_use_analysis__V_52_52;
#line 530 "var_use_analysis.m"
                MR_String var_use_analysis__V_55_55;
#line 530 "var_use_analysis.m"
                MR_String var_use_analysis__V_138_138;
#line 530 "var_use_analysis.m"
                MR_Word var_use_analysis__V_144_144;
#line 530 "var_use_analysis.m"
                MR_String var_use_analysis__V_146_146;
#line 530 "var_use_analysis.m"
                MR_String var_use_analysis__V_147_147;
#line 530 "var_use_analysis.m"
                MR_String var_use_analysis__V_154_154;
#line 530 "var_use_analysis.m"
                MR_String var_use_analysis__V_156_156;
#line 530 "var_use_analysis.m"
                MR_String var_use_analysis__V_157_157;
#line 530 "var_use_analysis.m"
                MR_String var_use_analysis__V_164_164;
#line 530 "var_use_analysis.m"
                MR_String var_use_analysis__V_166_166;
#line 530 "var_use_analysis.m"
                MR_String var_use_analysis__V_167_167;
#line 530 "var_use_analysis.m"
                MR_String var_use_analysis__V_174_174;

#line 534 "var_use_analysis.m"
                {
#line 534 "var_use_analysis.m"
                  var_use_analysis__V_52_52 = mercury__string__string_1_f_0(var_use_analysis__TypeCtorInfo_121_121, ((MR_Box) (var_use_analysis__VarUseType_25)));
                }
#line 534 "var_use_analysis.m"
                {
#line 534 "var_use_analysis.m"
                  var_use_analysis__V_55_55 = mercury__string__string_1_f_0(var_use_analysis__TypeCtorInfo_121_121, ((MR_Box) (var_use_analysis__ComputedUse_24)));
                }
#line 14040 "var_use_analysis.c"
                var_use_analysis__V_144_144 = (MR_Word) &var_use_analysis_scalar_common_5[2];
#line 535 "var_use_analysis.m"
                {
#line 535 "var_use_analysis.m"
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(var_use_analysis__V_144_144, var_use_analysis__PDNum_26, &var_use_analysis__V_138_138);
                }
#line 531 "var_use_analysis.m"
                {
#line 531 "var_use_analysis.m"
                  var_use_analysis__V_146_146 = mercury__string__f_43_43_2_f_0((MR_String) " in proc dynamic ", var_use_analysis__V_138_138);
                }
#line 535 "var_use_analysis.m"
                {
#line 535 "var_use_analysis.m"
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(var_use_analysis__V_144_144, var_use_analysis__ArgNum_10, &var_use_analysis__V_147_147);
                }
#line 531 "var_use_analysis.m"
                {
#line 531 "var_use_analysis.m"
                  var_use_analysis__V_154_154 = mercury__string__f_43_43_2_f_0(var_use_analysis__V_147_147, var_use_analysis__V_146_146);
                }
#line 531 "var_use_analysis.m"
                {
#line 531 "var_use_analysis.m"
                  var_use_analysis__V_156_156 = mercury__string__f_43_43_2_f_0((MR_String) ", Arg ", var_use_analysis__V_154_154);
                }
#line 534 "var_use_analysis.m"
                {
#line 534 "var_use_analysis.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(var_use_analysis__V_144_144, var_use_analysis__V_55_55, &var_use_analysis__V_157_157);
                }
#line 531 "var_use_analysis.m"
                {
#line 531 "var_use_analysis.m"
                  var_use_analysis__V_164_164 = mercury__string__f_43_43_2_f_0(var_use_analysis__V_157_157, var_use_analysis__V_156_156);
                }
#line 531 "var_use_analysis.m"
                {
#line 531 "var_use_analysis.m"
                  var_use_analysis__V_166_166 = mercury__string__f_43_43_2_f_0((MR_String) " calculated from procrep: ", var_use_analysis__V_164_164);
                }
#line 534 "var_use_analysis.m"
                {
#line 534 "var_use_analysis.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(var_use_analysis__V_144_144, var_use_analysis__V_52_52, &var_use_analysis__V_167_167);
                }
#line 531 "var_use_analysis.m"
                {
#line 531 "var_use_analysis.m"
                  var_use_analysis__V_174_174 = mercury__string__f_43_43_2_f_0(var_use_analysis__V_167_167, var_use_analysis__V_166_166);
                }
#line 531 "var_use_analysis.m"
                {
#line 531 "var_use_analysis.m"
                  var_use_analysis__Msg_27 = mercury__string__f_43_43_2_f_0((MR_String) "Var uses do not match, passed: ", var_use_analysis__V_174_174);
                }
#line 536 "var_use_analysis.m"
                {
#line 536 "var_use_analysis.m"
                  mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.prepare_for_proc_var_first_use\'/7", var_use_analysis__Msg_27);
#line 536 "var_use_analysis.m"
                  return;
                }
#line 530 "var_use_analysis.m"
              }
#line 540 "var_use_analysis.m"
            {
#line 540 "var_use_analysis.m"
              analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(var_use_analysis__Deep_15, var_use_analysis__PDPtr_9, &var_use_analysis__Slots_28);
            }
#line 541 "var_use_analysis.m"
            {
#line 541 "var_use_analysis.m"
              var_use_analysis__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 541 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_63_63, 0) = ((MR_Box) (&var_use_analysis_scalar_common_6[0]));
#line 541 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_63_63, 1) = ((MR_Box) (var_use_analysis__prepare_for_proc_var_first_use_7_p_0_1));
#line 541 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 541 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__V_63_63, 3) = ((MR_Box) (var_use_analysis__Deep_15));
#line 541 "var_use_analysis.m"
            }
#line 14125 "var_use_analysis.c"
            var_use_analysis__TypeCtorInfo_125_125 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 542 "var_use_analysis.m"
            {
#line 542 "var_use_analysis.m"
              var_use_analysis__V_64_64 = mercury__map__init_0_f_0(var_use_analysis__TypeCtorInfo_125_125, (MR_Word) &var_use_analysis_scalar_common_1[0]);
            }
#line 541 "var_use_analysis.m"
            {
#line 541 "var_use_analysis.m"
              mercury__list__foldl_4_p_0((MR_Word) &var_use_analysis_scalar_common_2[0], (MR_Word) &var_use_analysis_scalar_common_2[1], var_use_analysis__V_63_63, var_use_analysis__Slots_28, ((MR_Box) (var_use_analysis__V_64_64)), &var_use_analysis__conv2_CallSiteCostMap_29);
            }
#line 541 "var_use_analysis.m"
            var_use_analysis__CallSiteCostMap_29 = ((MR_Word) var_use_analysis__conv2_CallSiteCostMap_29);
#line 545 "var_use_analysis.m"
            {
#line 545 "var_use_analysis.m"
              var_use_analysis__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 545 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), var_use_analysis__V_65_65, 0) = ((MR_Box) (var_use_analysis__Depth_12));
#line 545 "var_use_analysis.m"
            }
#line 544 "var_use_analysis.m"
            {
#line 544 "var_use_analysis.m"
              analysis_utils__build_recursive_call_site_cost_map_6_p_0(var_use_analysis__Deep_15, var_use_analysis__CliquePtr_8, var_use_analysis__PDPtr_9, var_use_analysis__RecursionType_11, var_use_analysis__V_65_65, &var_use_analysis__MaybeRecursiveCallSiteCostMap_30);
            }
#line 546 "var_use_analysis.m"
            var_use_analysis__RecursiveCallSiteCostMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeRecursiveCallSiteCostMap_30, (MR_Integer) 0)));
#line 549 "var_use_analysis.m"
            var_use_analysis__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 0)));
#line 549 "var_use_analysis.m"
            var_use_analysis__Goal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 1)));
#line 549 "var_use_analysis.m"
            var_use_analysis__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 2)));
#line 549 "var_use_analysis.m"
            var_use_analysis__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 3)));
#line 549 "var_use_analysis.m"
            var_use_analysis__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 4)));
#line 550 "var_use_analysis.m"
            {
#line 550 "var_use_analysis.m"
              program_representation_utils__label_goals_4_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, &var_use_analysis__LastGoalId_33, &var_use_analysis__ContainingGoalMap_34, var_use_analysis__Goal0_32, &var_use_analysis__Goal_35);
            }
#line 553 "var_use_analysis.m"
            {
#line 553 "var_use_analysis.m"
              profile__deep_lookup_proc_statics_3_p_0(var_use_analysis__Deep_15, var_use_analysis__PSPtr_17, &var_use_analysis__PS_36);
            }
#line 554 "var_use_analysis.m"
            var_use_analysis__ProcLabel_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 0)));
#line 554 "var_use_analysis.m"
            var_use_analysis__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 1)));
#line 554 "var_use_analysis.m"
            var_use_analysis__V_97_97 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 2)));
#line 554 "var_use_analysis.m"
            var_use_analysis__V_98_98 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 3)));
#line 554 "var_use_analysis.m"
            var_use_analysis__V_99_99 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 4)));
#line 554 "var_use_analysis.m"
            var_use_analysis__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 5)));
#line 554 "var_use_analysis.m"
            var_use_analysis__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 6)));
#line 554 "var_use_analysis.m"
            var_use_analysis__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 7)));
#line 554 "var_use_analysis.m"
            var_use_analysis__V_103_103 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 8)));
#line 554 "var_use_analysis.m"
            var_use_analysis__V_104_104 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 9)));
#line 554 "var_use_analysis.m"
            var_use_analysis__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 10)));
#line 554 "var_use_analysis.m"
            var_use_analysis__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 11)));
#line 557 "var_use_analysis.m"
            var_use_analysis__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_16, (MR_Integer) 0)));
#line 557 "var_use_analysis.m"
            var_use_analysis__V_119_119 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_16, (MR_Integer) 1)));
#line 557 "var_use_analysis.m"
            var_use_analysis__MaybeCoveragePointsArray_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_16, (MR_Integer) 2)));
#line 560 "var_use_analysis.m"
            if ((var_use_analysis__MaybeCoveragePointsArray_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "var_use_analysis.m"
              {
#line 562 "var_use_analysis.m"
                {
#line 562 "var_use_analysis.m"
                  mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.prepare_for_proc_var_first_use\'/7", (MR_String) "Couldn\'t get coverage info");
#line 562 "var_use_analysis.m"
                  return;
                }
#line 561 "var_use_analysis.m"
              }
#line 560 "var_use_analysis.m"
            else
#line 559 "var_use_analysis.m"
              var_use_analysis__CoveragePointsArray_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), var_use_analysis__MaybeCoveragePointsArray_40, (MR_Integer) 0)));
#line 555 "var_use_analysis.m"
            {
#line 555 "var_use_analysis.m"
              coverage__coverage_point_arrays_to_list_3_p_0(var_use_analysis__V_104_104, var_use_analysis__CoveragePointsArray_38, &var_use_analysis__CoveragePoints_39);
            }
#line 14226 "var_use_analysis.c"
            var_use_analysis__TypeCtorInfo_135_135 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0;
#line 565 "var_use_analysis.m"
            {
#line 565 "var_use_analysis.m"
              var_use_analysis__V_71_71 = mercury__map__init_0_f_0(var_use_analysis__TypeCtorInfo_125_125, var_use_analysis__TypeCtorInfo_135_135);
            }
#line 566 "var_use_analysis.m"
            {
#line 566 "var_use_analysis.m"
              var_use_analysis__V_72_72 = mercury__map__init_0_f_0(var_use_analysis__TypeCtorInfo_125_125, var_use_analysis__TypeCtorInfo_135_135);
            }
#line 14238 "var_use_analysis.c"
            var_use_analysis__TypeInfo_136_136 = (MR_Word) &var_use_analysis_scalar_common_2[2];
#line 564 "var_use_analysis.m"
            {
#line 564 "var_use_analysis.m"
              mercury__list__foldl2_6_p_0(var_use_analysis__TypeCtorInfo_135_135, var_use_analysis__TypeInfo_136_136, var_use_analysis__TypeInfo_136_136, (MR_Word) &var_use_analysis_scalar_common_2[8], var_use_analysis__CoveragePoints_39, ((MR_Box) (var_use_analysis__V_71_71)), &var_use_analysis__conv6_SolnsCoveragePointMap_41, ((MR_Box) (var_use_analysis__V_72_72)), &var_use_analysis__conv5_BranchCoveragePointMap_42);
            }
#line 564 "var_use_analysis.m"
            var_use_analysis__SolnsCoveragePointMap_41 = ((MR_Word) var_use_analysis__conv6_SolnsCoveragePointMap_41);
#line 564 "var_use_analysis.m"
            var_use_analysis__BranchCoveragePointMap_42 = ((MR_Word) var_use_analysis__conv5_BranchCoveragePointMap_42);
#line 567 "var_use_analysis.m"
            {
#line 567 "var_use_analysis.m"
              profile__deep_lookup_pd_own_3_p_0(var_use_analysis__Deep_15, var_use_analysis__PDPtr_9, &var_use_analysis__Own_43);
            }
#line 568 "var_use_analysis.m"
            {
#line 568 "var_use_analysis.m"
              coverage__goal_annotate_with_coverage_9_p_0((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, var_use_analysis__ProcLabel_37, var_use_analysis__Goal_35, var_use_analysis__Own_43, var_use_analysis__CallSiteCostMap_29, var_use_analysis__SolnsCoveragePointMap_41, var_use_analysis__BranchCoveragePointMap_42, var_use_analysis__ContainingGoalMap_34, var_use_analysis__LastGoalId_33, &var_use_analysis__CoverageArray_44);
            }
#line 572 "var_use_analysis.m"
            {
#line 572 "var_use_analysis.m"
              MR_Word base;
#line 572 "var_use_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 572 "var_use_analysis.m"
              *var_use_analysis__Info_14 = base;
#line 572 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (var_use_analysis__Goal_35));
#line 572 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__LastGoalId_33));
#line 572 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (var_use_analysis__ContainingGoalMap_34));
#line 572 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (var_use_analysis__CoverageArray_44));
#line 572 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (var_use_analysis__CallSiteCostMap_29));
#line 572 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (var_use_analysis__RecursiveCallSiteCostMap_31));
#line 572 "var_use_analysis.m"
              MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (var_use_analysis__Var_22));
#line 572 "var_use_analysis.m"
            }
#line 525 "var_use_analysis.m"
          }
#line 575 "var_use_analysis.m"
        else
#line 576 "var_use_analysis.m"
          {
#line 576 "var_use_analysis.m"
            MR_Integer var_use_analysis__PDNum_79 = (MR_Integer) var_use_analysis__PDPtr_9;
#line 576 "var_use_analysis.m"
            MR_String var_use_analysis__Msg_80;
#line 576 "var_use_analysis.m"
            MR_String var_use_analysis__V_176_176;
#line 576 "var_use_analysis.m"
            MR_Word var_use_analysis__V_182_182 = (MR_Word) &var_use_analysis_scalar_common_5[2];
#line 576 "var_use_analysis.m"
            MR_String var_use_analysis__V_184_184;
#line 576 "var_use_analysis.m"
            MR_String var_use_analysis__V_185_185;
#line 576 "var_use_analysis.m"
            MR_String var_use_analysis__V_192_192;

#line 579 "var_use_analysis.m"
            {
#line 579 "var_use_analysis.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(var_use_analysis__V_182_182, var_use_analysis__PDNum_79, &var_use_analysis__V_176_176);
            }
#line 577 "var_use_analysis.m"
            {
#line 577 "var_use_analysis.m"
              var_use_analysis__V_184_184 = mercury__string__f_43_43_2_f_0((MR_String) " out of range for PD ", var_use_analysis__V_176_176);
            }
#line 579 "var_use_analysis.m"
            {
#line 579 "var_use_analysis.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(var_use_analysis__V_182_182, var_use_analysis__ArgNum_10, &var_use_analysis__V_185_185);
            }
#line 577 "var_use_analysis.m"
            {
#line 577 "var_use_analysis.m"
              var_use_analysis__V_192_192 = mercury__string__f_43_43_2_f_0(var_use_analysis__V_185_185, var_use_analysis__V_184_184);
            }
#line 577 "var_use_analysis.m"
            {
#line 577 "var_use_analysis.m"
              var_use_analysis__Msg_80 = mercury__string__f_43_43_2_f_0((MR_String) "proc_dynamic_var_use_info: ArgNum ", var_use_analysis__V_192_192);
            }
#line 580 "var_use_analysis.m"
            {
#line 580 "var_use_analysis.m"
              MR_Word base;
#line 580 "var_use_analysis.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 580 "var_use_analysis.m"
              *var_use_analysis__Info_14 = base;
#line 580 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__Msg_80));
#line 580 "var_use_analysis.m"
            }
#line 576 "var_use_analysis.m"
          }
#line 521 "var_use_analysis.m"
      }
#line 515 "var_use_analysis.m"
  }
#line 509 "var_use_analysis.m"
}

#line 180 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__sum_use_info_costs_5_p_0(
#line 180 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 180 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_AccCost_0_11,
#line 180 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_AccCost_12,
#line 180 "var_use_analysis.m"
  MR_Float var_use_analysis__STATE_VARIABLE_AccProcCost_0_13,
#line 180 "var_use_analysis.m"
  MR_Float * var_use_analysis__STATE_VARIABLE_AccProcCost_14)
#line 180 "var_use_analysis.m"
{
#line 183 "var_use_analysis.m"
  {
#line 183 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 183 "var_use_analysis.m"
    MR_Float var_use_analysis__Cost_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 183 "var_use_analysis.m"
    MR_Float var_use_analysis__ProcCost_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 183 "var_use_analysis.m"
    MR_Word var_use_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 2)));

#line 184 "var_use_analysis.m"
    *var_use_analysis__STATE_VARIABLE_AccCost_12 = (var_use_analysis__STATE_VARIABLE_AccCost_0_11 + var_use_analysis__Cost_6);
#line 185 "var_use_analysis.m"
    *var_use_analysis__STATE_VARIABLE_AccProcCost_14 = (var_use_analysis__STATE_VARIABLE_AccProcCost_0_13 + var_use_analysis__ProcCost_7);
#line 183 "var_use_analysis.m"
  }
#line 180 "var_use_analysis.m"
}

#line 133 "var_use_analysis.m"
void MR_CALL 
var_use_analysis__var_first_use_13_p_0(
#line 133 "var_use_analysis.m"
  MR_Word var_use_analysis__CliquePtr_14,
#line 133 "var_use_analysis.m"
  MR_Word var_use_analysis__CallSiteMap_15,
#line 133 "var_use_analysis.m"
  MR_Word var_use_analysis__RecursiveCallSiteMap_16,
#line 133 "var_use_analysis.m"
  MR_Word var_use_analysis__ContainingGoalMap_17,
#line 133 "var_use_analysis.m"
  MR_Word var_use_analysis__CoverageArray_18,
#line 133 "var_use_analysis.m"
  MR_Word var_use_analysis__RT_19,
#line 133 "var_use_analysis.m"
  MR_Word var_use_analysis__CurDepth_20,
#line 133 "var_use_analysis.m"
  MR_Word var_use_analysis__Goal_21,
#line 133 "var_use_analysis.m"
  MR_Word var_use_analysis__RevGoalPath_22,
#line 133 "var_use_analysis.m"
  MR_Float var_use_analysis__Cost_23,
#line 133 "var_use_analysis.m"
  MR_Integer var_use_analysis__Var_24,
#line 133 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_25,
#line 133 "var_use_analysis.m"
  MR_Word * var_use_analysis__VarUseInfo_26)
#line 133 "var_use_analysis.m"
{
#line 1811 "var_use_analysis.m"
  {
#line 1811 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 1811 "var_use_analysis.m"
    MR_Word var_use_analysis__FoundFirstUse_28;
#line 1811 "var_use_analysis.m"
    MR_Word var_use_analysis__VarUseType_29;
#line 1811 "var_use_analysis.m"
    MR_Word var_use_analysis__V_30_30;
#line 1811 "var_use_analysis.m"
    MR_Word var_use_analysis__V_32_32;
#line 1812 "var_use_analysis.m"
    MR_Float var_use_analysis__V_27_27;
#line 1817 "var_use_analysis.m"
    MR_Word var_use_analysis__V_34_34;
#line 1817 "var_use_analysis.m"
    MR_Word var_use_analysis__V_35_35;

#line 1814 "var_use_analysis.m"
    {
#line 1814 "var_use_analysis.m"
      var_use_analysis__V_32_32 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0);
    }
#line 1813 "var_use_analysis.m"
    {
#line 1813 "var_use_analysis.m"
      var_use_analysis__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1813 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_30_30, 0) = ((MR_Box) (var_use_analysis__CliquePtr_14));
#line 1813 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_30_30, 1) = ((MR_Box) (var_use_analysis__CallSiteMap_15));
#line 1813 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_30_30, 2) = ((MR_Box) (var_use_analysis__RecursiveCallSiteMap_16));
#line 1813 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_30_30, 3) = ((MR_Box) (var_use_analysis__ContainingGoalMap_17));
#line 1813 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_30_30, 4) = ((MR_Box) (var_use_analysis__CoverageArray_18));
#line 1813 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_30_30, 5) = ((MR_Box) (var_use_analysis__Var_24));
#line 1813 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_30_30, 6) = ((MR_Box) (var_use_analysis__VarUseOptions_25));
#line 1813 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_30_30, 7) = ((MR_Box) (var_use_analysis__V_32_32));
#line 1813 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_30_30, 8) = ((MR_Box) (var_use_analysis__RT_19));
#line 1813 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_30_30, 9) = ((MR_Box) (var_use_analysis__CurDepth_20));
#line 1813 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__V_30_30, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1813 "var_use_analysis.m"
    }
#line 1812 "var_use_analysis.m"
    {
#line 1812 "var_use_analysis.m"
      var_use_analysis__goal_var_first_use_6_p_0(var_use_analysis__RevGoalPath_22, var_use_analysis__Goal_21, var_use_analysis__V_30_30, (MR_Float) 0.0000000000000000, &var_use_analysis__V_27_27, &var_use_analysis__FoundFirstUse_28);
    }
#line 1817 "var_use_analysis.m"
    var_use_analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_25, (MR_Integer) 0)));
#line 1817 "var_use_analysis.m"
    var_use_analysis__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_25, (MR_Integer) 1)));
#line 1817 "var_use_analysis.m"
    var_use_analysis__VarUseType_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_25, (MR_Integer) 2)));
#line 1825 "var_use_analysis.m"
    if ((var_use_analysis__FoundFirstUse_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1838 "var_use_analysis.m"
#line 1838 "var_use_analysis.m"
      switch (var_use_analysis__VarUseType_29) {
#line 1838 "var_use_analysis.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1838 "var_use_analysis.m"
        case (MR_Integer) 1:
#line 1840 "var_use_analysis.m"
          {
#line 1840 "var_use_analysis.m"
            MR_Word base;
#line 1840 "var_use_analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1840 "var_use_analysis.m"
            *var_use_analysis__VarUseInfo_26 = base;
#line 1840 "var_use_analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(var_use_analysis__Cost_23);
#line 1840 "var_use_analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__Cost_23);
#line 1840 "var_use_analysis.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (var_use_analysis__VarUseType_29));
#line 1840 "var_use_analysis.m"
          }
#line 1838 "var_use_analysis.m"
          break;
#line 1838 "var_use_analysis.m"
        case (MR_Integer) 2:
#line 208 "var_use_analysis.m"
          {
#line 208 "var_use_analysis.m"
            MR_Word base;
#line 208 "var_use_analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 208 "var_use_analysis.m"
            *var_use_analysis__VarUseInfo_26 = base;
#line 208 "var_use_analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(var_use_analysis__Cost_23);
#line 208 "var_use_analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__Cost_23);
#line 208 "var_use_analysis.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (var_use_analysis__VarUseType_29));
#line 208 "var_use_analysis.m"
          }
#line 1838 "var_use_analysis.m"
          break;
#line 1838 "var_use_analysis.m"
        case (MR_Integer) 0:
#line 1835 "var_use_analysis.m"
          {
#line 1836 "var_use_analysis.m"
            {
#line 1836 "var_use_analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.found_first_use_to_use_info\'/4", (MR_String) "goal did not produce a variable that it should have");
#line 1836 "var_use_analysis.m"
              return;
            }
#line 1835 "var_use_analysis.m"
          }
#line 1838 "var_use_analysis.m"
          break;
#line 1838 "var_use_analysis.m"
      }
#line 1825 "var_use_analysis.m"
    else
#line 1825 "var_use_analysis.m"
      {
#line 1825 "var_use_analysis.m"
        MR_Float var_use_analysis__CostUntilUse_41 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__FoundFirstUse_28, (MR_Integer) 0)));

#line 1826 "var_use_analysis.m"
        {
#line 1826 "var_use_analysis.m"
          MR_Word base;
#line 1826 "var_use_analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1826 "var_use_analysis.m"
          *var_use_analysis__VarUseInfo_26 = base;
#line 1826 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(var_use_analysis__CostUntilUse_41);
#line 1826 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__Cost_23);
#line 1826 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (var_use_analysis__VarUseType_29));
#line 1826 "var_use_analysis.m"
        }
#line 1825 "var_use_analysis.m"
      }
#line 1811 "var_use_analysis.m"
  }
#line 133 "var_use_analysis.m"
}

#line 123 "var_use_analysis.m"
void MR_CALL 
var_use_analysis__proc_dynamic_var_use_info_9_p_0(
#line 123 "var_use_analysis.m"
  MR_Word var_use_analysis__CliquePtr_10,
#line 123 "var_use_analysis.m"
  MR_Word var_use_analysis__PDPtr_11,
#line 123 "var_use_analysis.m"
  MR_Integer var_use_analysis__ArgNum_12,
#line 123 "var_use_analysis.m"
  MR_Word var_use_analysis__RecursionType_13,
#line 123 "var_use_analysis.m"
  MR_Word var_use_analysis__Depth_14,
#line 123 "var_use_analysis.m"
  MR_Float var_use_analysis__ProcCost_15,
#line 123 "var_use_analysis.m"
  MR_Word var_use_analysis__CallStack_16,
#line 123 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_17,
#line 123 "var_use_analysis.m"
  MR_Word * var_use_analysis__MaybeVarUseInfo_18)
#line 123 "var_use_analysis.m"
{
#line 385 "var_use_analysis.m"
  {
#line 385 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 385 "var_use_analysis.m"
    MR_Word var_use_analysis__Info_19;

#line 386 "var_use_analysis.m"
    {
#line 386 "var_use_analysis.m"
      var_use_analysis__prepare_for_proc_var_first_use_7_p_0(var_use_analysis__CliquePtr_10, var_use_analysis__PDPtr_11, var_use_analysis__ArgNum_12, var_use_analysis__RecursionType_13, var_use_analysis__Depth_14, var_use_analysis__VarUseOptions_17, &var_use_analysis__Info_19);
    }
#line 397 "var_use_analysis.m"
    if (((MR_tag((MR_Word) var_use_analysis__Info_19)) == (MR_mktag((MR_Integer) 0))))
#line 398 "var_use_analysis.m"
      {
#line 398 "var_use_analysis.m"
        MR_String var_use_analysis__Error_28 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_19, (MR_Integer) 0)));

#line 399 "var_use_analysis.m"
        {
#line 399 "var_use_analysis.m"
          MR_Word base;
#line 399 "var_use_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 399 "var_use_analysis.m"
          *var_use_analysis__MaybeVarUseInfo_18 = base;
#line 399 "var_use_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (var_use_analysis__Error_28));
#line 399 "var_use_analysis.m"
        }
#line 398 "var_use_analysis.m"
      }
#line 397 "var_use_analysis.m"
    else
#line 391 "var_use_analysis.m"
      {
#line 391 "var_use_analysis.m"
        MR_Word var_use_analysis__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 0)));
#line 391 "var_use_analysis.m"
        MR_Word var_use_analysis__ContainingGoalMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 2)));
#line 391 "var_use_analysis.m"
        MR_Word var_use_analysis__CoverageArray_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 3)));
#line 391 "var_use_analysis.m"
        MR_Word var_use_analysis__CallSiteCostMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 4)));
#line 391 "var_use_analysis.m"
        MR_Word var_use_analysis__RecursiveCallSiteCostMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 5)));
#line 391 "var_use_analysis.m"
        MR_Integer var_use_analysis__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 6)));
#line 391 "var_use_analysis.m"
        MR_Word var_use_analysis__VarUseInfo_27;
#line 389 "var_use_analysis.m"
        MR_Word var_use_analysis___LastGoalId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 1)));

#line 392 "var_use_analysis.m"
        {
#line 392 "var_use_analysis.m"
          var_use_analysis__goal_var_first_use_wrapper_13_p_0(var_use_analysis__CliquePtr_10, var_use_analysis__CallStack_16, var_use_analysis__ContainingGoalMap_22, var_use_analysis__CoverageArray_23, var_use_analysis__CallSiteCostMap_24, var_use_analysis__RecursiveCallSiteCostMap_25, var_use_analysis__RecursionType_13, var_use_analysis__Depth_14, var_use_analysis__Goal_20, var_use_analysis__ProcCost_15, var_use_analysis__Var_26, var_use_analysis__VarUseOptions_17, &var_use_analysis__VarUseInfo_27);
        }
#line 396 "var_use_analysis.m"
        {
#line 396 "var_use_analysis.m"
          MR_Word base;
#line 396 "var_use_analysis.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 396 "var_use_analysis.m"
          *var_use_analysis__MaybeVarUseInfo_18 = base;
#line 396 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__VarUseInfo_27));
#line 396 "var_use_analysis.m"
        }
#line 391 "var_use_analysis.m"
      }
#line 385 "var_use_analysis.m"
  }
#line 123 "var_use_analysis.m"
}

#line 120 "var_use_analysis.m"
void MR_CALL 
var_use_analysis__clique_var_use_info_4_p_0(
#line 120 "var_use_analysis.m"
  MR_Word var_use_analysis__CliquePtr_5,
#line 120 "var_use_analysis.m"
  MR_Integer var_use_analysis__ArgNum_6,
#line 120 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_7,
#line 120 "var_use_analysis.m"
  MR_Word * var_use_analysis__MaybeVarUseInfo_8)
#line 120 "var_use_analysis.m"
{
#line 314 "var_use_analysis.m"
  {
#line 314 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 314 "var_use_analysis.m"
    MR_Word var_use_analysis__Deep_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_7, (MR_Integer) 0)));
#line 314 "var_use_analysis.m"
    MR_Word var_use_analysis__CSDPtr_10;
#line 314 "var_use_analysis.m"
    MR_Word var_use_analysis__CSDDesc_11;
#line 314 "var_use_analysis.m"
    MR_Float var_use_analysis__Cost_12;
#line 314 "var_use_analysis.m"
    MR_Word var_use_analysis__MaybeFirstProc_13;
#line 314 "var_use_analysis.m"
    MR_Integer var_use_analysis__V_40_40;
#line 315 "var_use_analysis.m"
    MR_Word var_use_analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_7, (MR_Integer) 1)));
#line 315 "var_use_analysis.m"
    MR_Word var_use_analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_7, (MR_Integer) 2)));
#line 319 "var_use_analysis.m"
    MR_Word var_use_analysis___OtherProcs_14;

#line 316 "var_use_analysis.m"
    {
#line 316 "var_use_analysis.m"
      profile__deep_lookup_clique_parents_3_p_0(var_use_analysis__Deep_9, var_use_analysis__CliquePtr_5, &var_use_analysis__CSDPtr_10);
    }
#line 317 "var_use_analysis.m"
    {
#line 317 "var_use_analysis.m"
      profile__deep_lookup_csd_desc_3_p_0(var_use_analysis__Deep_9, var_use_analysis__CSDPtr_10, &var_use_analysis__CSDDesc_11);
    }
#line 318 "var_use_analysis.m"
    {
#line 318 "var_use_analysis.m"
      var_use_analysis__V_40_40 = measurements__inherit_callseqs_1_f_0(var_use_analysis__CSDDesc_11);
    }
#line 318 "var_use_analysis.m"
    {
#line 318 "var_use_analysis.m"
      var_use_analysis__Cost_12 = mercury__float__float_1_f_0(var_use_analysis__V_40_40);
    }
#line 319 "var_use_analysis.m"
    {
#line 319 "var_use_analysis.m"
      analysis_utils__find_clique_first_and_other_procs_4_p_0(var_use_analysis__Deep_9, var_use_analysis__CliquePtr_5, &var_use_analysis__MaybeFirstProc_13, &var_use_analysis___OtherProcs_14);
    }
#line 379 "var_use_analysis.m"
    if ((var_use_analysis__MaybeFirstProc_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "var_use_analysis.m"
      {
#line 381 "var_use_analysis.m"
        {
#line 381 "var_use_analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.clique_var_use_info\'/4", (MR_String) "clique has no first procedure");
#line 381 "var_use_analysis.m"
          return;
        }
#line 380 "var_use_analysis.m"
      }
#line 379 "var_use_analysis.m"
    else
#line 322 "var_use_analysis.m"
      {
#line 322 "var_use_analysis.m"
        MR_Word var_use_analysis__FirstPDPtr_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__MaybeFirstProc_13, (MR_Integer) 0)));
#line 322 "var_use_analysis.m"
        MR_Word var_use_analysis__VarUseType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_7, (MR_Integer) 2)));
#line 323 "var_use_analysis.m"
        MR_Word var_use_analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_7, (MR_Integer) 0)));
#line 323 "var_use_analysis.m"
        MR_Word var_use_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_7, (MR_Integer) 1)));

#line 324 "var_use_analysis.m"
        {
#line 324 "var_use_analysis.m"
          var_use_analysis__succeeded = var_use_analysis__intermodule_var_use_should_follow_csd_2_p_0(var_use_analysis__VarUseOptions_7, var_use_analysis__CSDPtr_10);
        }
#line 375 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 326 "var_use_analysis.m"
          {
#line 326 "var_use_analysis.m"
            MR_Word var_use_analysis__MaybeRecursionReport_17;

#line 325 "var_use_analysis.m"
            {
#line 325 "var_use_analysis.m"
              recursion_patterns__create_clique_recursion_costs_report_3_p_0(var_use_analysis__Deep_9, var_use_analysis__CliquePtr_5, &var_use_analysis__MaybeRecursionReport_17);
            }
#line 14778 "var_use_analysis.c"
            if (((MR_tag((MR_Word) var_use_analysis__MaybeRecursionReport_17)) == (MR_mktag((MR_Integer) 1))))
#line 14780 "var_use_analysis.c"
              {
#line 14782 "var_use_analysis.c"
                MR_Word var_use_analysis__VarUseInfo_39;

#line 372 "var_use_analysis.m"
                {
#line 372 "var_use_analysis.m"
                  var_use_analysis__pessimistic_var_use_info_3_p_0(var_use_analysis__VarUseType_16, var_use_analysis__Cost_12, &var_use_analysis__VarUseInfo_39);
                }
#line 373 "var_use_analysis.m"
                {
#line 373 "var_use_analysis.m"
                  MR_Word base;
#line 373 "var_use_analysis.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 373 "var_use_analysis.m"
                  *var_use_analysis__MaybeVarUseInfo_8 = base;
#line 373 "var_use_analysis.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__VarUseInfo_39));
#line 373 "var_use_analysis.m"
                }
#line 14802 "var_use_analysis.c"
              }
#line 14804 "var_use_analysis.c"
            else
#line 14806 "var_use_analysis.c"
              {
#line 14808 "var_use_analysis.c"
                MR_Word var_use_analysis__RecursionReport_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeRecursionReport_17, (MR_Integer) 0)));
#line 14810 "var_use_analysis.c"
                MR_Word var_use_analysis__RecursionType_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__RecursionReport_18, (MR_Integer) 1)));
#line 329 "var_use_analysis.m"
                MR_Word var_use_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__RecursionReport_18, (MR_Integer) 0)));
#line 329 "var_use_analysis.m"
                MR_Integer var_use_analysis__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__RecursionReport_18, (MR_Integer) 2)));

#line 366 "var_use_analysis.m"
#line 366 "var_use_analysis.m"
                switch (MR_tag((MR_Word) var_use_analysis__RecursionType_100)) {
#line 366 "var_use_analysis.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 366 "var_use_analysis.m"
                  case (MR_Integer) 0:
#line 353 "var_use_analysis.m"
                    {
#line 353 "var_use_analysis.m"
                      MR_Word var_use_analysis__Depth_21;
#line 353 "var_use_analysis.m"
                      MR_Word var_use_analysis__MaybeVarUseInfo0_22;
#line 353 "var_use_analysis.m"
                      MR_Word var_use_analysis__V_50_50;
#line 353 "var_use_analysis.m"
                      MR_Word var_use_analysis__V_51_51;

#line 337 "var_use_analysis.m"
                      {
#line 337 "var_use_analysis.m"
                        recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_0(var_use_analysis__RecursionType_100, &var_use_analysis__V_50_50);
                      }
#line 338 "var_use_analysis.m"
                      var_use_analysis__Depth_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__V_50_50, (MR_Integer) 0)));
#line 342 "var_use_analysis.m"
                      {
#line 342 "var_use_analysis.m"
                        var_use_analysis__V_51_51 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0);
                      }
#line 341 "var_use_analysis.m"
                      {
#line 341 "var_use_analysis.m"
                        var_use_analysis__proc_dynamic_var_use_info_9_p_0(var_use_analysis__CliquePtr_5, var_use_analysis__FirstPDPtr_15, var_use_analysis__ArgNum_6, var_use_analysis__RecursionType_100, var_use_analysis__Depth_21, var_use_analysis__Cost_12, var_use_analysis__V_51_51, var_use_analysis__VarUseOptions_7, &var_use_analysis__MaybeVarUseInfo0_22);
                      }
#line 362 "var_use_analysis.m"
                      if (((MR_tag((MR_Word) var_use_analysis__MaybeVarUseInfo0_22)) == (MR_mktag((MR_Integer) 1))))
#line 364 "var_use_analysis.m"
                        *var_use_analysis__MaybeVarUseInfo_8 = var_use_analysis__MaybeVarUseInfo0_22;
#line 362 "var_use_analysis.m"
                      else
#line 356 "var_use_analysis.m"
                        {
#line 356 "var_use_analysis.m"
                          MR_Float var_use_analysis__UseTime0_28;
#line 356 "var_use_analysis.m"
                          MR_Float var_use_analysis__ProcTime0_29;
#line 356 "var_use_analysis.m"
                          MR_Word var_use_analysis__UseType_30;
#line 356 "var_use_analysis.m"
                          MR_Float var_use_analysis__UseTime_31;
#line 356 "var_use_analysis.m"
                          MR_Float var_use_analysis__ProcTime_32;
#line 356 "var_use_analysis.m"
                          MR_Word var_use_analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeVarUseInfo0_22, (MR_Integer) 0)));
#line 356 "var_use_analysis.m"
                          MR_Word var_use_analysis__V_55_55;

#line 355 "var_use_analysis.m"
                          var_use_analysis__UseTime0_28 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__V_52_52, (MR_Integer) 0)));
#line 355 "var_use_analysis.m"
                          var_use_analysis__ProcTime0_29 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__V_52_52, (MR_Integer) 1)));
#line 355 "var_use_analysis.m"
                          var_use_analysis__UseType_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_52_52, (MR_Integer) 2)));
#line 357 "var_use_analysis.m"
                          var_use_analysis__UseTime_31 = (var_use_analysis__UseTime0_28 + ((MR_Float) 1.0000000000000000));
#line 358 "var_use_analysis.m"
                          var_use_analysis__ProcTime_32 = (var_use_analysis__ProcTime0_29 + ((MR_Float) 1.0000000000000000));
#line 360 "var_use_analysis.m"
                          {
#line 360 "var_use_analysis.m"
                            var_use_analysis__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 360 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), var_use_analysis__V_55_55, 0) = MR_box_float(var_use_analysis__UseTime_31);
#line 360 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), var_use_analysis__V_55_55, 1) = MR_box_float(var_use_analysis__ProcTime_32);
#line 360 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), var_use_analysis__V_55_55, 2) = ((MR_Box) (var_use_analysis__UseType_30));
#line 360 "var_use_analysis.m"
                          }
#line 360 "var_use_analysis.m"
                          {
#line 360 "var_use_analysis.m"
                            MR_Word base;
#line 360 "var_use_analysis.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "var_use_analysis.m"
                            *var_use_analysis__MaybeVarUseInfo_8 = base;
#line 360 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__V_55_55));
#line 360 "var_use_analysis.m"
                          }
#line 356 "var_use_analysis.m"
                        }
#line 353 "var_use_analysis.m"
                    }
#line 366 "var_use_analysis.m"
                    break;
#line 366 "var_use_analysis.m"
                  case (MR_Integer) 1:
#line 353 "var_use_analysis.m"
                    {
#line 353 "var_use_analysis.m"
                      MR_Word var_use_analysis__V_46_46;
#line 353 "var_use_analysis.m"
                      MR_Word var_use_analysis__V_47_47;
#line 353 "var_use_analysis.m"
                      MR_Word var_use_analysis__V_48_48;
#line 353 "var_use_analysis.m"
                      MR_Word var_use_analysis__Depth_56;
#line 353 "var_use_analysis.m"
                      MR_Word var_use_analysis__MaybeVarUseInfo0_87;

#line 346 "var_use_analysis.m"
                      {
#line 346 "var_use_analysis.m"
                        recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_0(var_use_analysis__RecursionType_100, &var_use_analysis__V_46_46);
                      }
#line 347 "var_use_analysis.m"
                      var_use_analysis__Depth_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__V_46_46, (MR_Integer) 0)));
#line 351 "var_use_analysis.m"
                      {
#line 351 "var_use_analysis.m"
                        var_use_analysis__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "var_use_analysis.m"
                        MR_hl_field(MR_mktag(1), var_use_analysis__V_48_48, 0) = ((MR_Box) (var_use_analysis__FirstPDPtr_15));
#line 351 "var_use_analysis.m"
                        MR_hl_field(MR_mktag(1), var_use_analysis__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "var_use_analysis.m"
                      }
#line 351 "var_use_analysis.m"
                      {
#line 351 "var_use_analysis.m"
                        var_use_analysis__V_47_47 = mercury__set__set_1_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, var_use_analysis__V_48_48);
                      }
#line 350 "var_use_analysis.m"
                      {
#line 350 "var_use_analysis.m"
                        var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(var_use_analysis__CliquePtr_5, var_use_analysis__FirstPDPtr_15, var_use_analysis__ArgNum_6, var_use_analysis__RecursionType_100, var_use_analysis__Depth_56, var_use_analysis__V_47_47, var_use_analysis__VarUseOptions_7, &var_use_analysis__MaybeVarUseInfo0_87);
                      }
#line 362 "var_use_analysis.m"
                      if (((MR_tag((MR_Word) var_use_analysis__MaybeVarUseInfo0_87)) == (MR_mktag((MR_Integer) 1))))
#line 364 "var_use_analysis.m"
                        *var_use_analysis__MaybeVarUseInfo_8 = var_use_analysis__MaybeVarUseInfo0_87;
#line 362 "var_use_analysis.m"
                      else
#line 356 "var_use_analysis.m"
                        {
#line 356 "var_use_analysis.m"
                          MR_Float var_use_analysis__UseTime0_68;
#line 356 "var_use_analysis.m"
                          MR_Float var_use_analysis__ProcTime0_69;
#line 356 "var_use_analysis.m"
                          MR_Word var_use_analysis__UseType_70;
#line 356 "var_use_analysis.m"
                          MR_Float var_use_analysis__UseTime_71;
#line 356 "var_use_analysis.m"
                          MR_Float var_use_analysis__ProcTime_72;
#line 356 "var_use_analysis.m"
                          MR_Word var_use_analysis__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeVarUseInfo0_87, (MR_Integer) 0)));
#line 356 "var_use_analysis.m"
                          MR_Word var_use_analysis__V_76_76;

#line 355 "var_use_analysis.m"
                          var_use_analysis__UseTime0_68 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__V_73_73, (MR_Integer) 0)));
#line 355 "var_use_analysis.m"
                          var_use_analysis__ProcTime0_69 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__V_73_73, (MR_Integer) 1)));
#line 355 "var_use_analysis.m"
                          var_use_analysis__UseType_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_73_73, (MR_Integer) 2)));
#line 357 "var_use_analysis.m"
                          var_use_analysis__UseTime_71 = (var_use_analysis__UseTime0_68 + ((MR_Float) 1.0000000000000000));
#line 358 "var_use_analysis.m"
                          var_use_analysis__ProcTime_72 = (var_use_analysis__ProcTime0_69 + ((MR_Float) 1.0000000000000000));
#line 360 "var_use_analysis.m"
                          {
#line 360 "var_use_analysis.m"
                            var_use_analysis__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 360 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), var_use_analysis__V_76_76, 0) = MR_box_float(var_use_analysis__UseTime_71);
#line 360 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), var_use_analysis__V_76_76, 1) = MR_box_float(var_use_analysis__ProcTime_72);
#line 360 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), var_use_analysis__V_76_76, 2) = ((MR_Box) (var_use_analysis__UseType_70));
#line 360 "var_use_analysis.m"
                          }
#line 360 "var_use_analysis.m"
                          {
#line 360 "var_use_analysis.m"
                            MR_Word base;
#line 360 "var_use_analysis.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "var_use_analysis.m"
                            *var_use_analysis__MaybeVarUseInfo_8 = base;
#line 360 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__V_76_76));
#line 360 "var_use_analysis.m"
                          }
#line 356 "var_use_analysis.m"
                        }
#line 353 "var_use_analysis.m"
                    }
#line 366 "var_use_analysis.m"
                    break;
#line 366 "var_use_analysis.m"
                  case (MR_Integer) 2:
#line 371 "var_use_analysis.m"
                    {
#line 371 "var_use_analysis.m"
                      MR_Word var_use_analysis__VarUseInfo_98;

#line 372 "var_use_analysis.m"
                      {
#line 372 "var_use_analysis.m"
                        var_use_analysis__pessimistic_var_use_info_3_p_0(var_use_analysis__VarUseType_16, var_use_analysis__Cost_12, &var_use_analysis__VarUseInfo_98);
                      }
#line 373 "var_use_analysis.m"
                      {
#line 373 "var_use_analysis.m"
                        MR_Word base;
#line 373 "var_use_analysis.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 373 "var_use_analysis.m"
                        *var_use_analysis__MaybeVarUseInfo_8 = base;
#line 373 "var_use_analysis.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__VarUseInfo_98));
#line 373 "var_use_analysis.m"
                      }
#line 371 "var_use_analysis.m"
                    }
#line 366 "var_use_analysis.m"
                    break;
#line 366 "var_use_analysis.m"
                  case (MR_Integer) 3:
#line 371 "var_use_analysis.m"
                    {
#line 371 "var_use_analysis.m"
                      MR_Word var_use_analysis__VarUseInfo_98;

#line 372 "var_use_analysis.m"
                      {
#line 372 "var_use_analysis.m"
                        var_use_analysis__pessimistic_var_use_info_3_p_0(var_use_analysis__VarUseType_16, var_use_analysis__Cost_12, &var_use_analysis__VarUseInfo_98);
                      }
#line 373 "var_use_analysis.m"
                      {
#line 373 "var_use_analysis.m"
                        MR_Word base;
#line 373 "var_use_analysis.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 373 "var_use_analysis.m"
                        *var_use_analysis__MaybeVarUseInfo_8 = base;
#line 373 "var_use_analysis.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__VarUseInfo_98));
#line 373 "var_use_analysis.m"
                      }
#line 371 "var_use_analysis.m"
                    }
#line 366 "var_use_analysis.m"
                    break;
#line 366 "var_use_analysis.m"
                }
#line 15078 "var_use_analysis.c"
              }
#line 326 "var_use_analysis.m"
          }
#line 375 "var_use_analysis.m"
        else
#line 376 "var_use_analysis.m"
          {
#line 376 "var_use_analysis.m"
            MR_Word var_use_analysis__VarUseInfo_57;

#line 376 "var_use_analysis.m"
            {
#line 376 "var_use_analysis.m"
              var_use_analysis__pessimistic_var_use_info_3_p_0(var_use_analysis__VarUseType_16, var_use_analysis__Cost_12, &var_use_analysis__VarUseInfo_57);
            }
#line 377 "var_use_analysis.m"
            {
#line 377 "var_use_analysis.m"
              MR_Word base;
#line 377 "var_use_analysis.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 377 "var_use_analysis.m"
              *var_use_analysis__MaybeVarUseInfo_8 = base;
#line 377 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__VarUseInfo_57));
#line 377 "var_use_analysis.m"
            }
#line 376 "var_use_analysis.m"
          }
#line 322 "var_use_analysis.m"
      }
#line 314 "var_use_analysis.m"
  }
#line 120 "var_use_analysis.m"
}

#line 117 "var_use_analysis.m"
void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_1(
#line 117 "var_use_analysis.m"
  MR_Word var_use_analysis__ParentCliquePtr_10,
#line 117 "var_use_analysis.m"
  MR_Word var_use_analysis__CSDPtr_11,
#line 117 "var_use_analysis.m"
  MR_Integer var_use_analysis__ArgNum_12,
#line 117 "var_use_analysis.m"
  MR_Word var_use_analysis__RecursionType_13,
#line 117 "var_use_analysis.m"
  MR_Word var_use_analysis__MaybeDepth_14,
#line 117 "var_use_analysis.m"
  MR_Float var_use_analysis__Cost_15,
#line 117 "var_use_analysis.m"
  MR_Word var_use_analysis__CallStack0_16,
#line 117 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_17,
#line 117 "var_use_analysis.m"
  MR_Word * var_use_analysis__MaybeVarUseInfo_18)
#line 117 "var_use_analysis.m"
{
#line 239 "var_use_analysis.m"
  {
#line 239 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 239 "var_use_analysis.m"
    MR_Word var_use_analysis__Deep_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
#line 239 "var_use_analysis.m"
    MR_Word var_use_analysis__MaybeCalleeCliquePtr_20;
#line 240 "var_use_analysis.m"
    MR_Word var_use_analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));
#line 240 "var_use_analysis.m"
    MR_Word var_use_analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));

#line 241 "var_use_analysis.m"
    {
#line 241 "var_use_analysis.m"
      profile__deep_lookup_clique_maybe_child_3_p_0(var_use_analysis__Deep_19, var_use_analysis__CSDPtr_11, &var_use_analysis__MaybeCalleeCliquePtr_20);
    }
#line 250 "var_use_analysis.m"
    if ((var_use_analysis__MaybeCalleeCliquePtr_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 251 "var_use_analysis.m"
      {
#line 251 "var_use_analysis.m"
        MR_Word var_use_analysis__CSD_22;
#line 251 "var_use_analysis.m"
        MR_Word var_use_analysis__CalleePDPtr_23;
#line 255 "var_use_analysis.m"
        MR_Word var_use_analysis__V_61_61;
#line 255 "var_use_analysis.m"
        MR_Word var_use_analysis__V_62_62;

#line 254 "var_use_analysis.m"
        {
#line 254 "var_use_analysis.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(var_use_analysis__Deep_19, var_use_analysis__CSDPtr_11, &var_use_analysis__CSD_22);
        }
#line 255 "var_use_analysis.m"
        var_use_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_22, (MR_Integer) 0)));
#line 255 "var_use_analysis.m"
        var_use_analysis__CalleePDPtr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_22, (MR_Integer) 1)));
#line 255 "var_use_analysis.m"
        var_use_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_22, (MR_Integer) 2)));
#line 257 "var_use_analysis.m"
        {
#line 257 "var_use_analysis.m"
          var_use_analysis__succeeded = var_use_analysis__intermodule_var_use_should_follow_csd_2_p_0(var_use_analysis__VarUseOptions_17, var_use_analysis__CSDPtr_11);
        }
#line 257 "var_use_analysis.m"
        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 263 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 261 "var_use_analysis.m"
          {
#line 261 "var_use_analysis.m"
            MR_Word var_use_analysis__VarUseInfo_24;
#line 261 "var_use_analysis.m"
            MR_Word var_use_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));
#line 261 "var_use_analysis.m"
            MR_Float var_use_analysis__CostUntilUse_72;
#line 260 "var_use_analysis.m"
            MR_Word var_use_analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
#line 260 "var_use_analysis.m"
            MR_Word var_use_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));

#line 212 "var_use_analysis.m"
#line 212 "var_use_analysis.m"
            switch (var_use_analysis__V_45_45) {
#line 212 "var_use_analysis.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 212 "var_use_analysis.m"
              case (MR_Integer) 1:
#line 213 "var_use_analysis.m"
                var_use_analysis__CostUntilUse_72 = (MR_Float) 0.0000000000000000;
#line 212 "var_use_analysis.m"
                break;
#line 212 "var_use_analysis.m"
              case (MR_Integer) 2:
#line 212 "var_use_analysis.m"
              case (MR_Integer) 0:
#line 218 "var_use_analysis.m"
                var_use_analysis__CostUntilUse_72 = var_use_analysis__Cost_15;
#line 212 "var_use_analysis.m"
                break;
#line 212 "var_use_analysis.m"
            }
#line 208 "var_use_analysis.m"
            {
#line 208 "var_use_analysis.m"
              var_use_analysis__VarUseInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 208 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_24, 0) = MR_box_float(var_use_analysis__CostUntilUse_72);
#line 208 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_24, 1) = MR_box_float(var_use_analysis__Cost_15);
#line 208 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_24, 2) = ((MR_Box) (var_use_analysis__V_45_45));
#line 208 "var_use_analysis.m"
            }
#line 262 "var_use_analysis.m"
            {
#line 262 "var_use_analysis.m"
              MR_Word base;
#line 262 "var_use_analysis.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 262 "var_use_analysis.m"
              *var_use_analysis__MaybeVarUseInfo_18 = base;
#line 262 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__VarUseInfo_24));
#line 262 "var_use_analysis.m"
            }
#line 261 "var_use_analysis.m"
          }
#line 263 "var_use_analysis.m"
        else
#line 268 "var_use_analysis.m"
          {
#line 263 "var_use_analysis.m"
            {
#line 263 "var_use_analysis.m"
              var_use_analysis__succeeded = mercury__set__member_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, ((MR_Box) (var_use_analysis__CalleePDPtr_23)), var_use_analysis__CallStack0_16);
            }
#line 268 "var_use_analysis.m"
            if (var_use_analysis__succeeded)
#line 266 "var_use_analysis.m"
              {
#line 266 "var_use_analysis.m"
                MR_Word var_use_analysis__V_46_46;
#line 266 "var_use_analysis.m"
                MR_Word var_use_analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));
#line 266 "var_use_analysis.m"
                MR_Word var_use_analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
#line 266 "var_use_analysis.m"
                MR_Word var_use_analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));

#line 266 "var_use_analysis.m"
                {
#line 266 "var_use_analysis.m"
                  var_use_analysis__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 266 "var_use_analysis.m"
                  MR_hl_field(MR_mktag(0), var_use_analysis__V_46_46, 0) = MR_box_float((MR_Float) 1.0000000000000000);
#line 266 "var_use_analysis.m"
                  MR_hl_field(MR_mktag(0), var_use_analysis__V_46_46, 1) = MR_box_float(var_use_analysis__Cost_15);
#line 266 "var_use_analysis.m"
                  MR_hl_field(MR_mktag(0), var_use_analysis__V_46_46, 2) = ((MR_Box) (var_use_analysis__V_48_48));
#line 266 "var_use_analysis.m"
                }
#line 266 "var_use_analysis.m"
                {
#line 266 "var_use_analysis.m"
                  MR_Word base;
#line 266 "var_use_analysis.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 266 "var_use_analysis.m"
                  *var_use_analysis__MaybeVarUseInfo_18 = base;
#line 266 "var_use_analysis.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__V_46_46));
#line 266 "var_use_analysis.m"
                }
#line 266 "var_use_analysis.m"
              }
#line 268 "var_use_analysis.m"
            else
#line 305 "var_use_analysis.m"
            if ((var_use_analysis__MaybeDepth_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "var_use_analysis.m"
              {
#line 307 "var_use_analysis.m"
                *var_use_analysis__MaybeVarUseInfo_18 = (MR_Word) MR_mkword(MR_mktag(1), &var_use_analysis_scalar_common_5[0]);
#line 306 "var_use_analysis.m"
              }
#line 305 "var_use_analysis.m"
            else
#line 270 "var_use_analysis.m"
              {
#line 270 "var_use_analysis.m"
                MR_Word var_use_analysis__Depth0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__MaybeDepth_14, (MR_Integer) 0)));
#line 270 "var_use_analysis.m"
                MR_Word var_use_analysis__Depth_26;

#line 271 "var_use_analysis.m"
                {
#line 271 "var_use_analysis.m"
                  measurements__recursion_depth_descend_2_p_0(var_use_analysis__Depth0_25, &var_use_analysis__Depth_26);
                }
#line 295 "var_use_analysis.m"
#line 295 "var_use_analysis.m"
                switch (MR_tag((MR_Word) var_use_analysis__RecursionType_13)) {
#line 295 "var_use_analysis.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 295 "var_use_analysis.m"
                  case (MR_Integer) 0:
#line 275 "var_use_analysis.m"
                    {
#line 275 "var_use_analysis.m"
                      MR_Word var_use_analysis__CallStack_32;
#line 275 "var_use_analysis.m"
                      MR_Word var_use_analysis__MaybeVarUseInfo0_33;

#line 279 "var_use_analysis.m"
                      {
#line 279 "var_use_analysis.m"
                        mercury__set__insert_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, ((MR_Box) (var_use_analysis__CalleePDPtr_23)), var_use_analysis__CallStack0_16, &var_use_analysis__CallStack_32);
                      }
#line 280 "var_use_analysis.m"
                      {
#line 280 "var_use_analysis.m"
                        var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(var_use_analysis__ParentCliquePtr_10, var_use_analysis__CalleePDPtr_23, var_use_analysis__ArgNum_12, var_use_analysis__RecursionType_13, var_use_analysis__Depth_26, var_use_analysis__CallStack_32, var_use_analysis__VarUseOptions_17, &var_use_analysis__MaybeVarUseInfo0_33);
                      }
#line 291 "var_use_analysis.m"
                      if (((MR_tag((MR_Word) var_use_analysis__MaybeVarUseInfo0_33)) == (MR_mktag((MR_Integer) 1))))
#line 293 "var_use_analysis.m"
                        *var_use_analysis__MaybeVarUseInfo_18 = var_use_analysis__MaybeVarUseInfo0_33;
#line 291 "var_use_analysis.m"
                      else
#line 285 "var_use_analysis.m"
                        {
#line 285 "var_use_analysis.m"
                          MR_Float var_use_analysis__UseTime0_34;
#line 285 "var_use_analysis.m"
                          MR_Float var_use_analysis__ProcTime0_35;
#line 285 "var_use_analysis.m"
                          MR_Word var_use_analysis__UseType_36;
#line 285 "var_use_analysis.m"
                          MR_Float var_use_analysis__UseTime_37;
#line 285 "var_use_analysis.m"
                          MR_Float var_use_analysis__ProcTime_38;
#line 285 "var_use_analysis.m"
                          MR_Word var_use_analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeVarUseInfo0_33, (MR_Integer) 0)));
#line 285 "var_use_analysis.m"
                          MR_Word var_use_analysis__V_58_58;

#line 284 "var_use_analysis.m"
                          var_use_analysis__UseTime0_34 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__V_55_55, (MR_Integer) 0)));
#line 284 "var_use_analysis.m"
                          var_use_analysis__ProcTime0_35 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__V_55_55, (MR_Integer) 1)));
#line 284 "var_use_analysis.m"
                          var_use_analysis__UseType_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_55_55, (MR_Integer) 2)));
#line 286 "var_use_analysis.m"
                          var_use_analysis__UseTime_37 = (var_use_analysis__UseTime0_34 + ((MR_Float) 1.0000000000000000));
#line 287 "var_use_analysis.m"
                          var_use_analysis__ProcTime_38 = (var_use_analysis__ProcTime0_35 + ((MR_Float) 1.0000000000000000));
#line 289 "var_use_analysis.m"
                          {
#line 289 "var_use_analysis.m"
                            var_use_analysis__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 289 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), var_use_analysis__V_58_58, 0) = MR_box_float(var_use_analysis__UseTime_37);
#line 289 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), var_use_analysis__V_58_58, 1) = MR_box_float(var_use_analysis__ProcTime_38);
#line 289 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), var_use_analysis__V_58_58, 2) = ((MR_Box) (var_use_analysis__UseType_36));
#line 289 "var_use_analysis.m"
                          }
#line 289 "var_use_analysis.m"
                          {
#line 289 "var_use_analysis.m"
                            MR_Word base;
#line 289 "var_use_analysis.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 289 "var_use_analysis.m"
                            *var_use_analysis__MaybeVarUseInfo_18 = base;
#line 289 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__V_58_58));
#line 289 "var_use_analysis.m"
                          }
#line 285 "var_use_analysis.m"
                        }
#line 275 "var_use_analysis.m"
                    }
#line 295 "var_use_analysis.m"
                    break;
#line 295 "var_use_analysis.m"
                  case (MR_Integer) 1:
#line 275 "var_use_analysis.m"
                    {
#line 275 "var_use_analysis.m"
                      MR_Word var_use_analysis__CallStack_32;
#line 275 "var_use_analysis.m"
                      MR_Word var_use_analysis__MaybeVarUseInfo0_33;

#line 279 "var_use_analysis.m"
                      {
#line 279 "var_use_analysis.m"
                        mercury__set__insert_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, ((MR_Box) (var_use_analysis__CalleePDPtr_23)), var_use_analysis__CallStack0_16, &var_use_analysis__CallStack_32);
                      }
#line 280 "var_use_analysis.m"
                      {
#line 280 "var_use_analysis.m"
                        var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(var_use_analysis__ParentCliquePtr_10, var_use_analysis__CalleePDPtr_23, var_use_analysis__ArgNum_12, var_use_analysis__RecursionType_13, var_use_analysis__Depth_26, var_use_analysis__CallStack_32, var_use_analysis__VarUseOptions_17, &var_use_analysis__MaybeVarUseInfo0_33);
                      }
#line 291 "var_use_analysis.m"
                      if (((MR_tag((MR_Word) var_use_analysis__MaybeVarUseInfo0_33)) == (MR_mktag((MR_Integer) 1))))
#line 293 "var_use_analysis.m"
                        *var_use_analysis__MaybeVarUseInfo_18 = var_use_analysis__MaybeVarUseInfo0_33;
#line 291 "var_use_analysis.m"
                      else
#line 285 "var_use_analysis.m"
                        {
#line 285 "var_use_analysis.m"
                          MR_Float var_use_analysis__UseTime0_34;
#line 285 "var_use_analysis.m"
                          MR_Float var_use_analysis__ProcTime0_35;
#line 285 "var_use_analysis.m"
                          MR_Word var_use_analysis__UseType_36;
#line 285 "var_use_analysis.m"
                          MR_Float var_use_analysis__UseTime_37;
#line 285 "var_use_analysis.m"
                          MR_Float var_use_analysis__ProcTime_38;
#line 285 "var_use_analysis.m"
                          MR_Word var_use_analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeVarUseInfo0_33, (MR_Integer) 0)));
#line 285 "var_use_analysis.m"
                          MR_Word var_use_analysis__V_58_58;

#line 284 "var_use_analysis.m"
                          var_use_analysis__UseTime0_34 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__V_55_55, (MR_Integer) 0)));
#line 284 "var_use_analysis.m"
                          var_use_analysis__ProcTime0_35 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__V_55_55, (MR_Integer) 1)));
#line 284 "var_use_analysis.m"
                          var_use_analysis__UseType_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_55_55, (MR_Integer) 2)));
#line 286 "var_use_analysis.m"
                          var_use_analysis__UseTime_37 = (var_use_analysis__UseTime0_34 + ((MR_Float) 1.0000000000000000));
#line 287 "var_use_analysis.m"
                          var_use_analysis__ProcTime_38 = (var_use_analysis__ProcTime0_35 + ((MR_Float) 1.0000000000000000));
#line 289 "var_use_analysis.m"
                          {
#line 289 "var_use_analysis.m"
                            var_use_analysis__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 289 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), var_use_analysis__V_58_58, 0) = MR_box_float(var_use_analysis__UseTime_37);
#line 289 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), var_use_analysis__V_58_58, 1) = MR_box_float(var_use_analysis__ProcTime_38);
#line 289 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), var_use_analysis__V_58_58, 2) = ((MR_Box) (var_use_analysis__UseType_36));
#line 289 "var_use_analysis.m"
                          }
#line 289 "var_use_analysis.m"
                          {
#line 289 "var_use_analysis.m"
                            MR_Word base;
#line 289 "var_use_analysis.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 289 "var_use_analysis.m"
                            *var_use_analysis__MaybeVarUseInfo_18 = base;
#line 289 "var_use_analysis.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__V_58_58));
#line 289 "var_use_analysis.m"
                          }
#line 285 "var_use_analysis.m"
                        }
#line 275 "var_use_analysis.m"
                    }
#line 295 "var_use_analysis.m"
                    break;
#line 295 "var_use_analysis.m"
                  case (MR_Integer) 2:
#line 300 "var_use_analysis.m"
                    {
#line 301 "var_use_analysis.m"
                      *var_use_analysis__MaybeVarUseInfo_18 = (MR_Word) MR_mkword(MR_mktag(1), &var_use_analysis_scalar_common_5[1]);
#line 300 "var_use_analysis.m"
                    }
#line 295 "var_use_analysis.m"
                    break;
#line 295 "var_use_analysis.m"
                  case (MR_Integer) 3:
#line 300 "var_use_analysis.m"
                    {
#line 301 "var_use_analysis.m"
                      *var_use_analysis__MaybeVarUseInfo_18 = (MR_Word) MR_mkword(MR_mktag(1), &var_use_analysis_scalar_common_5[1]);
#line 300 "var_use_analysis.m"
                    }
#line 295 "var_use_analysis.m"
                    break;
#line 295 "var_use_analysis.m"
                }
#line 270 "var_use_analysis.m"
              }
#line 268 "var_use_analysis.m"
          }
#line 251 "var_use_analysis.m"
      }
#line 250 "var_use_analysis.m"
    else
#line 243 "var_use_analysis.m"
      {
#line 243 "var_use_analysis.m"
        MR_Word var_use_analysis__CalleeCliquePtr_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__MaybeCalleeCliquePtr_20, (MR_Integer) 0)));

#line 248 "var_use_analysis.m"
        {
#line 248 "var_use_analysis.m"
          var_use_analysis__clique_var_use_info_4_p_0(var_use_analysis__CalleeCliquePtr_21, var_use_analysis__ArgNum_12, var_use_analysis__VarUseOptions_17, var_use_analysis__MaybeVarUseInfo_18);
#line 248 "var_use_analysis.m"
          return;
        }
#line 243 "var_use_analysis.m"
      }
#line 239 "var_use_analysis.m"
  }
#line 117 "var_use_analysis.m"
}

#line 114 "var_use_analysis.m"
void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_0(
#line 114 "var_use_analysis.m"
  MR_Word var_use_analysis__ParentCliquePtr_10,
#line 114 "var_use_analysis.m"
  MR_Word var_use_analysis__CSDPtr_11,
#line 114 "var_use_analysis.m"
  MR_Integer var_use_analysis__ArgNum_12,
#line 114 "var_use_analysis.m"
  MR_Word var_use_analysis__RecursionType_13,
#line 114 "var_use_analysis.m"
  MR_Word var_use_analysis__MaybeDepth_14,
#line 114 "var_use_analysis.m"
  MR_Float var_use_analysis__Cost_15,
#line 114 "var_use_analysis.m"
  MR_Word var_use_analysis__CallStack0_16,
#line 114 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_17,
#line 114 "var_use_analysis.m"
  MR_Word * var_use_analysis__MaybeVarUseInfo_18)
#line 114 "var_use_analysis.m"
{
#line 239 "var_use_analysis.m"
  {
#line 239 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 239 "var_use_analysis.m"
    MR_Word var_use_analysis__Deep_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
#line 239 "var_use_analysis.m"
    MR_Word var_use_analysis__MaybeCalleeCliquePtr_20;
#line 240 "var_use_analysis.m"
    MR_Word var_use_analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));
#line 240 "var_use_analysis.m"
    MR_Word var_use_analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));

#line 241 "var_use_analysis.m"
    {
#line 241 "var_use_analysis.m"
      profile__deep_lookup_clique_maybe_child_3_p_0(var_use_analysis__Deep_19, var_use_analysis__CSDPtr_11, &var_use_analysis__MaybeCalleeCliquePtr_20);
    }
#line 250 "var_use_analysis.m"
    if ((var_use_analysis__MaybeCalleeCliquePtr_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 251 "var_use_analysis.m"
      {
#line 251 "var_use_analysis.m"
        MR_Word var_use_analysis__CSD_22;
#line 251 "var_use_analysis.m"
        MR_Word var_use_analysis__CalleePDPtr_23;
#line 255 "var_use_analysis.m"
        MR_Word var_use_analysis__V_61_61;
#line 255 "var_use_analysis.m"
        MR_Word var_use_analysis__V_62_62;

#line 254 "var_use_analysis.m"
        {
#line 254 "var_use_analysis.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(var_use_analysis__Deep_19, var_use_analysis__CSDPtr_11, &var_use_analysis__CSD_22);
        }
#line 255 "var_use_analysis.m"
        var_use_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_22, (MR_Integer) 0)));
#line 255 "var_use_analysis.m"
        var_use_analysis__CalleePDPtr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_22, (MR_Integer) 1)));
#line 255 "var_use_analysis.m"
        var_use_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_22, (MR_Integer) 2)));
#line 257 "var_use_analysis.m"
        {
#line 257 "var_use_analysis.m"
          var_use_analysis__succeeded = var_use_analysis__intermodule_var_use_should_follow_csd_2_p_0(var_use_analysis__VarUseOptions_17, var_use_analysis__CSDPtr_11);
        }
#line 257 "var_use_analysis.m"
        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
#line 263 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 261 "var_use_analysis.m"
          {
#line 261 "var_use_analysis.m"
            MR_Word var_use_analysis__VarUseInfo_24;
#line 261 "var_use_analysis.m"
            MR_Word var_use_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));
#line 261 "var_use_analysis.m"
            MR_Float var_use_analysis__CostUntilUse_72;
#line 260 "var_use_analysis.m"
            MR_Word var_use_analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
#line 260 "var_use_analysis.m"
            MR_Word var_use_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));

#line 212 "var_use_analysis.m"
#line 212 "var_use_analysis.m"
            switch (var_use_analysis__V_45_45) {
#line 212 "var_use_analysis.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 212 "var_use_analysis.m"
              case (MR_Integer) 1:
#line 213 "var_use_analysis.m"
                var_use_analysis__CostUntilUse_72 = (MR_Float) 0.0000000000000000;
#line 212 "var_use_analysis.m"
                break;
#line 212 "var_use_analysis.m"
              case (MR_Integer) 2:
#line 212 "var_use_analysis.m"
              case (MR_Integer) 0:
#line 218 "var_use_analysis.m"
                var_use_analysis__CostUntilUse_72 = var_use_analysis__Cost_15;
#line 212 "var_use_analysis.m"
                break;
#line 212 "var_use_analysis.m"
            }
#line 208 "var_use_analysis.m"
            {
#line 208 "var_use_analysis.m"
              var_use_analysis__VarUseInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 208 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_24, 0) = MR_box_float(var_use_analysis__CostUntilUse_72);
#line 208 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_24, 1) = MR_box_float(var_use_analysis__Cost_15);
#line 208 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_24, 2) = ((MR_Box) (var_use_analysis__V_45_45));
#line 208 "var_use_analysis.m"
            }
#line 262 "var_use_analysis.m"
            {
#line 262 "var_use_analysis.m"
              MR_Word base;
#line 262 "var_use_analysis.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 262 "var_use_analysis.m"
              *var_use_analysis__MaybeVarUseInfo_18 = base;
#line 262 "var_use_analysis.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__VarUseInfo_24));
#line 262 "var_use_analysis.m"
            }
#line 261 "var_use_analysis.m"
          }
#line 263 "var_use_analysis.m"
        else
#line 268 "var_use_analysis.m"
          {
#line 263 "var_use_analysis.m"
            {
#line 263 "var_use_analysis.m"
              var_use_analysis__succeeded = mercury__set__member_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, ((MR_Box) (var_use_analysis__CalleePDPtr_23)), var_use_analysis__CallStack0_16);
            }
#line 268 "var_use_analysis.m"
            if (var_use_analysis__succeeded)
#line 266 "var_use_analysis.m"
              {
#line 266 "var_use_analysis.m"
                MR_Word var_use_analysis__V_46_46;
#line 266 "var_use_analysis.m"
                MR_Word var_use_analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));
#line 266 "var_use_analysis.m"
                MR_Word var_use_analysis__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
#line 266 "var_use_analysis.m"
                MR_Word var_use_analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));

#line 266 "var_use_analysis.m"
                {
#line 266 "var_use_analysis.m"
                  var_use_analysis__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 266 "var_use_analysis.m"
                  MR_hl_field(MR_mktag(0), var_use_analysis__V_46_46, 0) = MR_box_float((MR_Float) 1.0000000000000000);
#line 266 "var_use_analysis.m"
                  MR_hl_field(MR_mktag(0), var_use_analysis__V_46_46, 1) = MR_box_float(var_use_analysis__Cost_15);
#line 266 "var_use_analysis.m"
                  MR_hl_field(MR_mktag(0), var_use_analysis__V_46_46, 2) = ((MR_Box) (var_use_analysis__V_48_48));
#line 266 "var_use_analysis.m"
                }
#line 266 "var_use_analysis.m"
                {
#line 266 "var_use_analysis.m"
                  MR_Word base;
#line 266 "var_use_analysis.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 266 "var_use_analysis.m"
                  *var_use_analysis__MaybeVarUseInfo_18 = base;
#line 266 "var_use_analysis.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__V_46_46));
#line 266 "var_use_analysis.m"
                }
#line 266 "var_use_analysis.m"
              }
#line 268 "var_use_analysis.m"
            else
#line 305 "var_use_analysis.m"
              {
#line 305 "var_use_analysis.m"
                MR_Word var_use_analysis__Depth0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__MaybeDepth_14, (MR_Integer) 0)));
#line 305 "var_use_analysis.m"
                MR_Word var_use_analysis__Depth_26;
#line 305 "var_use_analysis.m"
                MR_Word var_use_analysis__CallStack_32;
#line 305 "var_use_analysis.m"
                MR_Word var_use_analysis__MaybeVarUseInfo0_33;

#line 271 "var_use_analysis.m"
                {
#line 271 "var_use_analysis.m"
                  measurements__recursion_depth_descend_2_p_0(var_use_analysis__Depth0_25, &var_use_analysis__Depth_26);
                }
#line 279 "var_use_analysis.m"
                {
#line 279 "var_use_analysis.m"
                  mercury__set__insert_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, ((MR_Box) (var_use_analysis__CalleePDPtr_23)), var_use_analysis__CallStack0_16, &var_use_analysis__CallStack_32);
                }
#line 280 "var_use_analysis.m"
                {
#line 280 "var_use_analysis.m"
                  var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(var_use_analysis__ParentCliquePtr_10, var_use_analysis__CalleePDPtr_23, var_use_analysis__ArgNum_12, var_use_analysis__RecursionType_13, var_use_analysis__Depth_26, var_use_analysis__CallStack_32, var_use_analysis__VarUseOptions_17, &var_use_analysis__MaybeVarUseInfo0_33);
                }
#line 291 "var_use_analysis.m"
                if (((MR_tag((MR_Word) var_use_analysis__MaybeVarUseInfo0_33)) == (MR_mktag((MR_Integer) 1))))
#line 293 "var_use_analysis.m"
                  *var_use_analysis__MaybeVarUseInfo_18 = var_use_analysis__MaybeVarUseInfo0_33;
#line 291 "var_use_analysis.m"
                else
#line 285 "var_use_analysis.m"
                  {
#line 285 "var_use_analysis.m"
                    MR_Float var_use_analysis__UseTime0_34;
#line 285 "var_use_analysis.m"
                    MR_Float var_use_analysis__ProcTime0_35;
#line 285 "var_use_analysis.m"
                    MR_Word var_use_analysis__UseType_36;
#line 285 "var_use_analysis.m"
                    MR_Float var_use_analysis__UseTime_37;
#line 285 "var_use_analysis.m"
                    MR_Float var_use_analysis__ProcTime_38;
#line 285 "var_use_analysis.m"
                    MR_Word var_use_analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeVarUseInfo0_33, (MR_Integer) 0)));
#line 285 "var_use_analysis.m"
                    MR_Word var_use_analysis__V_58_58;

#line 284 "var_use_analysis.m"
                    var_use_analysis__UseTime0_34 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__V_55_55, (MR_Integer) 0)));
#line 284 "var_use_analysis.m"
                    var_use_analysis__ProcTime0_35 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__V_55_55, (MR_Integer) 1)));
#line 284 "var_use_analysis.m"
                    var_use_analysis__UseType_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_55_55, (MR_Integer) 2)));
#line 286 "var_use_analysis.m"
                    var_use_analysis__UseTime_37 = (var_use_analysis__UseTime0_34 + ((MR_Float) 1.0000000000000000));
#line 287 "var_use_analysis.m"
                    var_use_analysis__ProcTime_38 = (var_use_analysis__ProcTime0_35 + ((MR_Float) 1.0000000000000000));
#line 289 "var_use_analysis.m"
                    {
#line 289 "var_use_analysis.m"
                      var_use_analysis__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 289 "var_use_analysis.m"
                      MR_hl_field(MR_mktag(0), var_use_analysis__V_58_58, 0) = MR_box_float(var_use_analysis__UseTime_37);
#line 289 "var_use_analysis.m"
                      MR_hl_field(MR_mktag(0), var_use_analysis__V_58_58, 1) = MR_box_float(var_use_analysis__ProcTime_38);
#line 289 "var_use_analysis.m"
                      MR_hl_field(MR_mktag(0), var_use_analysis__V_58_58, 2) = ((MR_Box) (var_use_analysis__UseType_36));
#line 289 "var_use_analysis.m"
                    }
#line 289 "var_use_analysis.m"
                    {
#line 289 "var_use_analysis.m"
                      MR_Word base;
#line 289 "var_use_analysis.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 289 "var_use_analysis.m"
                      *var_use_analysis__MaybeVarUseInfo_18 = base;
#line 289 "var_use_analysis.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__V_58_58));
#line 289 "var_use_analysis.m"
                    }
#line 285 "var_use_analysis.m"
                  }
#line 305 "var_use_analysis.m"
              }
#line 268 "var_use_analysis.m"
          }
#line 251 "var_use_analysis.m"
      }
#line 250 "var_use_analysis.m"
    else
#line 243 "var_use_analysis.m"
      {
#line 243 "var_use_analysis.m"
        MR_Word var_use_analysis__CalleeCliquePtr_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__MaybeCalleeCliquePtr_20, (MR_Integer) 0)));

#line 248 "var_use_analysis.m"
        {
#line 248 "var_use_analysis.m"
          var_use_analysis__clique_var_use_info_4_p_0(var_use_analysis__CalleeCliquePtr_21, var_use_analysis__ArgNum_12, var_use_analysis__VarUseOptions_17, var_use_analysis__MaybeVarUseInfo_18);
#line 248 "var_use_analysis.m"
          return;
        }
#line 243 "var_use_analysis.m"
      }
#line 239 "var_use_analysis.m"
  }
#line 114 "var_use_analysis.m"
}

#line 95 "var_use_analysis.m"
void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_info_6_p_1(
#line 95 "var_use_analysis.m"
  MR_Word var_use_analysis__CSDPtr_7,
#line 95 "var_use_analysis.m"
  MR_Integer var_use_analysis__ArgNum_8,
#line 95 "var_use_analysis.m"
  MR_Word var_use_analysis__RecursionType_9,
#line 95 "var_use_analysis.m"
  MR_Float var_use_analysis__Cost_10,
#line 95 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_11,
#line 95 "var_use_analysis.m"
  MR_Word * var_use_analysis__MaybeVarUseInfo_12)
#line 95 "var_use_analysis.m"
{
#line 224 "var_use_analysis.m"
  {
#line 224 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 224 "var_use_analysis.m"
    MR_Word var_use_analysis__Deep_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_11, (MR_Integer) 0)));
#line 224 "var_use_analysis.m"
    MR_Word var_use_analysis__CSD_14;
#line 224 "var_use_analysis.m"
    MR_Word var_use_analysis__ParentCliquePtr_15;
#line 224 "var_use_analysis.m"
    MR_Word var_use_analysis__MaybeCurDepth_16;
#line 224 "var_use_analysis.m"
    MR_Word var_use_analysis__V_17_17;
#line 224 "var_use_analysis.m"
    MR_Word var_use_analysis__V_18_18;
#line 229 "var_use_analysis.m"
    MR_Word var_use_analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_11, (MR_Integer) 1)));
#line 229 "var_use_analysis.m"
    MR_Word var_use_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_11, (MR_Integer) 2)));
#line 231 "var_use_analysis.m"
    MR_Word var_use_analysis__V_21_21;
#line 231 "var_use_analysis.m"
    MR_Word var_use_analysis__V_22_22;

#line 230 "var_use_analysis.m"
    {
#line 230 "var_use_analysis.m"
      profile__deep_lookup_call_site_dynamics_3_p_0(var_use_analysis__Deep_13, var_use_analysis__CSDPtr_7, &var_use_analysis__CSD_14);
    }
#line 231 "var_use_analysis.m"
    var_use_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_14, (MR_Integer) 0)));
#line 231 "var_use_analysis.m"
    var_use_analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_14, (MR_Integer) 1)));
#line 231 "var_use_analysis.m"
    var_use_analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_14, (MR_Integer) 2)));
#line 231 "var_use_analysis.m"
    {
#line 231 "var_use_analysis.m"
      profile__deep_lookup_clique_index_3_p_0(var_use_analysis__Deep_13, var_use_analysis__V_17_17, &var_use_analysis__ParentCliquePtr_15);
    }
#line 232 "var_use_analysis.m"
    {
#line 232 "var_use_analysis.m"
      recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_1(var_use_analysis__RecursionType_9, &var_use_analysis__MaybeCurDepth_16);
    }
#line 234 "var_use_analysis.m"
    {
#line 234 "var_use_analysis.m"
      var_use_analysis__V_18_18 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0);
    }
#line 233 "var_use_analysis.m"
    {
#line 233 "var_use_analysis.m"
      var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_1(var_use_analysis__ParentCliquePtr_15, var_use_analysis__CSDPtr_7, var_use_analysis__ArgNum_8, var_use_analysis__RecursionType_9, var_use_analysis__MaybeCurDepth_16, var_use_analysis__Cost_10, var_use_analysis__V_18_18, var_use_analysis__VarUseOptions_11, var_use_analysis__MaybeVarUseInfo_12);
#line 233 "var_use_analysis.m"
      return;
    }
#line 224 "var_use_analysis.m"
  }
#line 95 "var_use_analysis.m"
}

#line 93 "var_use_analysis.m"
void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_info_6_p_0(
#line 93 "var_use_analysis.m"
  MR_Word var_use_analysis__CSDPtr_7,
#line 93 "var_use_analysis.m"
  MR_Integer var_use_analysis__ArgNum_8,
#line 93 "var_use_analysis.m"
  MR_Word var_use_analysis__RecursionType_9,
#line 93 "var_use_analysis.m"
  MR_Float var_use_analysis__Cost_10,
#line 93 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseOptions_11,
#line 93 "var_use_analysis.m"
  MR_Word * var_use_analysis__MaybeVarUseInfo_12)
#line 93 "var_use_analysis.m"
{
#line 224 "var_use_analysis.m"
  {
#line 224 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 224 "var_use_analysis.m"
    MR_Word var_use_analysis__Deep_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_11, (MR_Integer) 0)));
#line 224 "var_use_analysis.m"
    MR_Word var_use_analysis__CSD_14;
#line 224 "var_use_analysis.m"
    MR_Word var_use_analysis__ParentCliquePtr_15;
#line 224 "var_use_analysis.m"
    MR_Word var_use_analysis__MaybeCurDepth_16;
#line 224 "var_use_analysis.m"
    MR_Word var_use_analysis__V_17_17;
#line 224 "var_use_analysis.m"
    MR_Word var_use_analysis__V_18_18;
#line 229 "var_use_analysis.m"
    MR_Word var_use_analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_11, (MR_Integer) 1)));
#line 229 "var_use_analysis.m"
    MR_Word var_use_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_11, (MR_Integer) 2)));
#line 231 "var_use_analysis.m"
    MR_Word var_use_analysis__V_21_21;
#line 231 "var_use_analysis.m"
    MR_Word var_use_analysis__V_22_22;

#line 230 "var_use_analysis.m"
    {
#line 230 "var_use_analysis.m"
      profile__deep_lookup_call_site_dynamics_3_p_0(var_use_analysis__Deep_13, var_use_analysis__CSDPtr_7, &var_use_analysis__CSD_14);
    }
#line 231 "var_use_analysis.m"
    var_use_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_14, (MR_Integer) 0)));
#line 231 "var_use_analysis.m"
    var_use_analysis__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_14, (MR_Integer) 1)));
#line 231 "var_use_analysis.m"
    var_use_analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_14, (MR_Integer) 2)));
#line 231 "var_use_analysis.m"
    {
#line 231 "var_use_analysis.m"
      profile__deep_lookup_clique_index_3_p_0(var_use_analysis__Deep_13, var_use_analysis__V_17_17, &var_use_analysis__ParentCliquePtr_15);
    }
#line 232 "var_use_analysis.m"
    {
#line 232 "var_use_analysis.m"
      recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_0(var_use_analysis__RecursionType_9, &var_use_analysis__MaybeCurDepth_16);
    }
#line 234 "var_use_analysis.m"
    {
#line 234 "var_use_analysis.m"
      var_use_analysis__V_18_18 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0);
    }
#line 233 "var_use_analysis.m"
    {
#line 233 "var_use_analysis.m"
      var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_0(var_use_analysis__ParentCliquePtr_15, var_use_analysis__CSDPtr_7, var_use_analysis__ArgNum_8, var_use_analysis__RecursionType_9, var_use_analysis__MaybeCurDepth_16, var_use_analysis__Cost_10, var_use_analysis__V_18_18, var_use_analysis__VarUseOptions_11, var_use_analysis__MaybeVarUseInfo_12);
#line 233 "var_use_analysis.m"
      return;
    }
#line 224 "var_use_analysis.m"
  }
#line 93 "var_use_analysis.m"
}

#line 75 "var_use_analysis.m"
void MR_CALL 
var_use_analysis__pessimistic_var_use_time_3_p_0(
#line 75 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseType_4,
#line 75 "var_use_analysis.m"
  MR_Float var_use_analysis__ProcCost_5,
#line 75 "var_use_analysis.m"
  MR_Float * var_use_analysis__CostUntilUse_6)
#line 75 "var_use_analysis.m"
{
#line 212 "var_use_analysis.m"
  {
#line 212 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;

#line 212 "var_use_analysis.m"
#line 212 "var_use_analysis.m"
    switch (var_use_analysis__VarUseType_4) {
#line 212 "var_use_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 212 "var_use_analysis.m"
      case (MR_Integer) 1:
#line 213 "var_use_analysis.m"
        *var_use_analysis__CostUntilUse_6 = (MR_Float) 0.0000000000000000;
#line 212 "var_use_analysis.m"
        break;
#line 212 "var_use_analysis.m"
      case (MR_Integer) 2:
#line 212 "var_use_analysis.m"
      case (MR_Integer) 0:
#line 218 "var_use_analysis.m"
        *var_use_analysis__CostUntilUse_6 = var_use_analysis__ProcCost_5;
#line 212 "var_use_analysis.m"
        break;
#line 212 "var_use_analysis.m"
    }
#line 212 "var_use_analysis.m"
  }
#line 75 "var_use_analysis.m"
}

#line 72 "var_use_analysis.m"
void MR_CALL 
var_use_analysis__pessimistic_var_use_info_3_p_0(
#line 72 "var_use_analysis.m"
  MR_Word var_use_analysis__VarUseType_4,
#line 72 "var_use_analysis.m"
  MR_Float var_use_analysis__ProcCost_5,
#line 72 "var_use_analysis.m"
  MR_Word * var_use_analysis__VarUseInfo_6)
#line 72 "var_use_analysis.m"
{
#line 206 "var_use_analysis.m"
  {
#line 206 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 206 "var_use_analysis.m"
    MR_Float var_use_analysis__CostUntilUse_7;

#line 212 "var_use_analysis.m"
#line 212 "var_use_analysis.m"
    switch (var_use_analysis__VarUseType_4) {
#line 212 "var_use_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 212 "var_use_analysis.m"
      case (MR_Integer) 1:
#line 213 "var_use_analysis.m"
        var_use_analysis__CostUntilUse_7 = (MR_Float) 0.0000000000000000;
#line 212 "var_use_analysis.m"
        break;
#line 212 "var_use_analysis.m"
      case (MR_Integer) 2:
#line 212 "var_use_analysis.m"
      case (MR_Integer) 0:
#line 218 "var_use_analysis.m"
        var_use_analysis__CostUntilUse_7 = var_use_analysis__ProcCost_5;
#line 212 "var_use_analysis.m"
        break;
#line 212 "var_use_analysis.m"
    }
#line 208 "var_use_analysis.m"
    {
#line 208 "var_use_analysis.m"
      MR_Word base;
#line 208 "var_use_analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 208 "var_use_analysis.m"
      *var_use_analysis__VarUseInfo_6 = base;
#line 208 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(var_use_analysis__CostUntilUse_7);
#line 208 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__ProcCost_5);
#line 208 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (var_use_analysis__VarUseType_4));
#line 208 "var_use_analysis.m"
    }
#line 206 "var_use_analysis.m"
  }
#line 72 "var_use_analysis.m"
}

#line 70 "var_use_analysis.m"
void MR_CALL 
var_use_analysis__var_mode_to_var_use_type_2_p_0(
#line 70 "var_use_analysis.m"
  MR_Word var_use_analysis__HeadVar__1_1,
#line 70 "var_use_analysis.m"
  MR_Word * var_use_analysis__VarUseType_5)
#line 70 "var_use_analysis.m"
{
#line 189 "var_use_analysis.m"
  {
#line 189 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 189 "var_use_analysis.m"
    MR_Word var_use_analysis__InitialInst_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 189 "var_use_analysis.m"
    MR_Word var_use_analysis__FinalInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));

#line 191 "var_use_analysis.m"
    var_use_analysis__succeeded = (var_use_analysis__InitialInst_3 == (MR_Integer) 1);
#line 191 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 192 "var_use_analysis.m"
      var_use_analysis__succeeded = (var_use_analysis__FinalInst_4 == (MR_Integer) 1);
#line 195 "var_use_analysis.m"
    if (var_use_analysis__succeeded)
#line 194 "var_use_analysis.m"
      *var_use_analysis__VarUseType_5 = (MR_Integer) 1;
#line 195 "var_use_analysis.m"
    else
#line 200 "var_use_analysis.m"
      {
#line 196 "var_use_analysis.m"
        var_use_analysis__succeeded = (var_use_analysis__InitialInst_3 == (MR_Integer) 0);
#line 196 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 197 "var_use_analysis.m"
          var_use_analysis__succeeded = (var_use_analysis__FinalInst_4 == (MR_Integer) 1);
#line 200 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 199 "var_use_analysis.m"
          *var_use_analysis__VarUseType_5 = (MR_Integer) 0;
#line 200 "var_use_analysis.m"
        else
#line 201 "var_use_analysis.m"
          *var_use_analysis__VarUseType_5 = (MR_Integer) 2;
#line 200 "var_use_analysis.m"
      }
#line 189 "var_use_analysis.m"
  }
#line 70 "var_use_analysis.m"
}

#line 169 "var_use_analysis.m"
static MR_bool MR_CALL 
var_use_analysis__average_var_use_1_f_0_2(
#line 169 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 169 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1)
#line 169 "var_use_analysis.m"
{
#line 169 "var_use_analysis.m"
  {
#line 169 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 169 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;

#line 169 "var_use_analysis.m"
    {
#line 169 "var_use_analysis.m"
      return var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__average_var_use__169__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1));
    }
#line 169 "var_use_analysis.m"
    return var_use_analysis__succeeded;
#line 169 "var_use_analysis.m"
  }
#line 169 "var_use_analysis.m"
}

#line 165 "var_use_analysis.m"
static void MR_CALL 
var_use_analysis__average_var_use_1_f_0_1(
#line 165 "var_use_analysis.m"
  MR_Box var_use_analysis__closure_arg,
#line 165 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_1,
#line 165 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_2,
#line 165 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_3,
#line 165 "var_use_analysis.m"
  MR_Box var_use_analysis__wrapper_arg_4,
#line 165 "var_use_analysis.m"
  MR_Box * var_use_analysis__wrapper_arg_5)
#line 165 "var_use_analysis.m"
{
#line 165 "var_use_analysis.m"
  {
#line 165 "var_use_analysis.m"
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
#line 165 "var_use_analysis.m"
    MR_Float var_use_analysis__conv1_STATE_VARIABLE_AccCost_12;
#line 165 "var_use_analysis.m"
    MR_Float var_use_analysis__conv0_STATE_VARIABLE_AccProcCost_14;

#line 165 "var_use_analysis.m"
    {
#line 165 "var_use_analysis.m"
      var_use_analysis__sum_use_info_costs_5_p_0(((MR_Word) var_use_analysis__wrapper_arg_1), MR_unbox_float(var_use_analysis__wrapper_arg_2), &var_use_analysis__conv1_STATE_VARIABLE_AccCost_12, MR_unbox_float(var_use_analysis__wrapper_arg_4), &var_use_analysis__conv0_STATE_VARIABLE_AccProcCost_14);
    }
#line 165 "var_use_analysis.m"
    *var_use_analysis__wrapper_arg_3 = MR_box_float(var_use_analysis__conv1_STATE_VARIABLE_AccCost_12);
#line 165 "var_use_analysis.m"
    *var_use_analysis__wrapper_arg_5 = MR_box_float(var_use_analysis__conv0_STATE_VARIABLE_AccProcCost_14);
#line 165 "var_use_analysis.m"
  }
#line 165 "var_use_analysis.m"
}

#line 68 "var_use_analysis.m"
MR_Word MR_CALL 
var_use_analysis__average_var_use_1_f_0(
#line 68 "var_use_analysis.m"
  MR_Word var_use_analysis__Uses_3)
#line 68 "var_use_analysis.m"
{
#line 159 "var_use_analysis.m"
  {
#line 159 "var_use_analysis.m"
    MR_bool var_use_analysis__succeeded;
#line 159 "var_use_analysis.m"
    MR_Word var_use_analysis__HeadVar__2_2;
#line 159 "var_use_analysis.m"
    MR_Float var_use_analysis__CostUntilUse_4;
#line 159 "var_use_analysis.m"
    MR_Float var_use_analysis__AvgProcCost_5;
#line 159 "var_use_analysis.m"
    MR_Word var_use_analysis__Type_6;

#line 163 "var_use_analysis.m"
    if ((var_use_analysis__Uses_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 161 "var_use_analysis.m"
      {
#line 162 "var_use_analysis.m"
        {
#line 162 "var_use_analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "function \140var_use_analysis.average_var_use\'/1", (MR_String) "cannot average zero items");
        }
#line 161 "var_use_analysis.m"
      }
#line 163 "var_use_analysis.m"
    else
#line 164 "var_use_analysis.m"
      {
#line 164 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeCtorInfo_39_39;
#line 164 "var_use_analysis.m"
        MR_Word var_use_analysis__TypeCtorInfo_40_40;
#line 164 "var_use_analysis.m"
        MR_Float var_use_analysis__SumCost_10;
#line 164 "var_use_analysis.m"
        MR_Float var_use_analysis__SumProcCost_11;
#line 164 "var_use_analysis.m"
        MR_Float var_use_analysis__Num_12;
#line 164 "var_use_analysis.m"
        MR_Word var_use_analysis__TestType_13;
#line 164 "var_use_analysis.m"
        MR_Word var_use_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Uses_3, (MR_Integer) 0)));
#line 164 "var_use_analysis.m"
        MR_Integer var_use_analysis__V_21_21;
#line 164 "var_use_analysis.m"
        MR_Word var_use_analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Uses_3, (MR_Integer) 1)));
#line 164 "var_use_analysis.m"
        MR_Float var_use_analysis__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__V_17_17, (MR_Integer) 0)));
#line 164 "var_use_analysis.m"
        MR_Float var_use_analysis__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__V_17_17, (MR_Integer) 1)));
#line 165 "var_use_analysis.m"
        MR_Box var_use_analysis__conv3_SumCost_10;
#line 165 "var_use_analysis.m"
        MR_Box var_use_analysis__conv2_SumProcCost_11;

#line 164 "var_use_analysis.m"
        var_use_analysis__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__V_17_17, (MR_Integer) 2)));
#line 16282 "var_use_analysis.c"
        var_use_analysis__TypeCtorInfo_39_39 = (MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0;
#line 16284 "var_use_analysis.c"
        var_use_analysis__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 165 "var_use_analysis.m"
        {
#line 165 "var_use_analysis.m"
          mercury__list__foldl2_6_p_0(var_use_analysis__TypeCtorInfo_39_39, var_use_analysis__TypeCtorInfo_40_40, var_use_analysis__TypeCtorInfo_40_40, (MR_Word) &var_use_analysis_scalar_common_2[7], var_use_analysis__Uses_3, MR_box_float((MR_Float) 0.0000000000000000), &var_use_analysis__conv3_SumCost_10, MR_box_float((MR_Float) 0.0000000000000000), &var_use_analysis__conv2_SumProcCost_11);
        }
#line 165 "var_use_analysis.m"
        var_use_analysis__SumCost_10 = MR_unbox_float(var_use_analysis__conv3_SumCost_10);
#line 165 "var_use_analysis.m"
        var_use_analysis__SumProcCost_11 = MR_unbox_float(var_use_analysis__conv2_SumProcCost_11);
#line 166 "var_use_analysis.m"
        {
#line 166 "var_use_analysis.m"
          var_use_analysis__V_21_21 = mercury__list__length_1_f_0(var_use_analysis__TypeCtorInfo_39_39, var_use_analysis__Uses_3);
        }
#line 166 "var_use_analysis.m"
        {
#line 166 "var_use_analysis.m"
          var_use_analysis__Num_12 = mercury__float__float_1_f_0(var_use_analysis__V_21_21);
        }
#line 167 "var_use_analysis.m"
        {
#line 167 "var_use_analysis.m"
          var_use_analysis__CostUntilUse_4 = mercury__float__f_slash_2_f_0(var_use_analysis__SumCost_10, var_use_analysis__Num_12);
        }
#line 168 "var_use_analysis.m"
        {
#line 168 "var_use_analysis.m"
          var_use_analysis__AvgProcCost_5 = mercury__float__f_slash_2_f_0(var_use_analysis__SumProcCost_11, var_use_analysis__Num_12);
        }
#line 169 "var_use_analysis.m"
        {
#line 169 "var_use_analysis.m"
          var_use_analysis__TestType_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 169 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__TestType_13, 0) = ((MR_Box) (&var_use_analysis_scalar_common_4[0]));
#line 169 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__TestType_13, 1) = ((MR_Box) (var_use_analysis__average_var_use_1_f_0_2));
#line 169 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__TestType_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 169 "var_use_analysis.m"
          MR_hl_field(MR_mktag(0), var_use_analysis__TestType_13, 3) = ((MR_Box) (var_use_analysis__Type_6));
#line 169 "var_use_analysis.m"
        }
#line 173 "var_use_analysis.m"
        {
#line 173 "var_use_analysis.m"
          var_use_analysis__succeeded = mercury__list__all_true_2_p_0(var_use_analysis__TypeCtorInfo_39_39, var_use_analysis__TestType_13, var_use_analysis__Uses_3);
        }
#line 175 "var_use_analysis.m"
        if (var_use_analysis__succeeded)
#line 174 "var_use_analysis.m"
          {
#line 174 "var_use_analysis.m"
          }
#line 175 "var_use_analysis.m"
        else
#line 176 "var_use_analysis.m"
          {
#line 176 "var_use_analysis.m"
            {
#line 176 "var_use_analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "function \140var_use_analysis.average_var_use\'/1", (MR_String) "use types do not match");
            }
#line 176 "var_use_analysis.m"
          }
#line 164 "var_use_analysis.m"
      }
#line 159 "var_use_analysis.m"
    {
#line 159 "var_use_analysis.m"
      var_use_analysis__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 159 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, 0) = MR_box_float(var_use_analysis__CostUntilUse_4);
#line 159 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, 1) = MR_box_float(var_use_analysis__AvgProcCost_5);
#line 159 "var_use_analysis.m"
      MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, 2) = ((MR_Box) (var_use_analysis__Type_6));
#line 159 "var_use_analysis.m"
    }
#line 159 "var_use_analysis.m"
    return var_use_analysis__HeadVar__2_2;
#line 159 "var_use_analysis.m"
  }
#line 68 "var_use_analysis.m"
}

void mercury__var_use_analysis__init(void)
{
}

void mercury__var_use_analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_first_use_rec_info_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_intermodule_var_use_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_proc_var_first_use_prepared_info_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_recursive_calls_list_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_recursive_case_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_var_first_use_static_info_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_var_use_options_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0);
}

void mercury__var_use_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module var_use_analysis. */
