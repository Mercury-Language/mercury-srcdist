/*
** Automatically generated from `profile.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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


/* :- module profile. */
/* :- implementation. */

/*
INIT mercury__profile__init
ENDINIT
*/

#include "profile.mih"


#include "array.mih"
#include "array_util.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exclude.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 79 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_0[1];

#line 82 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_array_slot_0_0;

#line 85 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 88 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_1[2];

#line 91 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_array_slot_0_1;

#line 94 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_array_slot_0_0[1];

#line 97 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_array_slot_0_1[1];

#line 100 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_array_slot_0[2];

#line 103 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_array_slot_0[2];

#line 106 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_array_slot_0[2];

#line 109 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_callees_0[1];

#line 112 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 115 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_callees_0;

#line 118 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_caller_0[1];

#line 121 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_caller_0;

#line 124 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_dynamic_0_0[3];

#line 127 "profile.c"
static const MR_ConstString profile__profile__field_names_call_site_dynamic_0_0[3];

#line 130 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_dynamic_0_0;

#line 133 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_dynamic_0_0[1];

#line 136 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_dynamic_0[1];

#line 139 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_dynamic_0[1];

#line 142 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_dynamic_0[1];

#line 145 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_dynamic_ptr_0[1];

#line 148 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_dynamic_ptr_0;

#line 151 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0;

#line 154 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_0;

#line 157 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_1;

#line 160 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_2;

#line 163 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_3;

#line 166 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_4;

#line 169 "profile.c"
static const MR_ForeignEnumFunctorDescPtr profile__profile__foreign_enum_ordinal_ordered_call_site_kind_0[5];

#line 172 "profile.c"
static const MR_ForeignEnumFunctorDescPtr profile__profile__foreign_enum_name_ordered_call_site_kind_0[5];

#line 175 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_kind_0[5];

#line 178 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_kind_and_callee_1_0[2];

#line 181 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_0;

#line 184 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_1;

#line 187 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_2;

#line 190 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_3;

#line 193 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_4;

#line 196 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_callee_1_0[4];

#line 199 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_callee_1_1[1];

#line 202 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_kind_and_callee_1[2];

#line 205 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_kind_and_callee_1[5];

#line 208 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_kind_and_callee_1[5];

#line 211 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0;

#line 214 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_kind_and_info_1_0[1];

#line 217 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_0;

#line 220 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_1;

#line 223 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_2;

#line 226 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_3;

#line 229 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_4;

#line 232 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_info_1_0[4];

#line 235 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_info_1_1[1];

#line 238 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_kind_and_info_1[2];

#line 241 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_kind_and_info_1[5];

#line 244 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_kind_and_info_1[5];

#line 247 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_static_0_0[5];

#line 250 "profile.c"
static const MR_ConstString profile__profile__field_names_call_site_static_0_0[5];

#line 253 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_static_0_0;

#line 256 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_static_0_0[1];

#line 259 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_static_0[1];

#line 262 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_static_0[1];

#line 265 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_static_0[1];

#line 268 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0;

#line 271 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_static_ptr_0[1];

#line 274 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_static_ptr_0;

#line 277 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_static_0;

#line 280 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_canonical_flag_0_0;

#line 283 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_canonical_flag_0_1;

#line 286 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_canonical_flag_0[2];

#line 289 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_canonical_flag_0[2];

#line 292 "profile.c"
static const MR_Integer profile__profile__functor_number_map_canonical_flag_0[2];

#line 295 "profile.c"
static const MR_Integer profile__profile__functor_number_map_clique_ptr_0[1];

#line 298 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_clique_ptr_0;

#line 301 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0;

#line 304 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_0;

#line 307 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_1;

#line 310 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_2;

#line 313 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_coverage_data_type_0[3];

#line 316 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_coverage_data_type_0[3];

#line 319 "profile.c"
static const MR_Integer profile__profile__functor_number_map_coverage_data_type_0[3];

#line 322 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0;

#line 325 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_proc_static_0;

#line 328 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_clique_ptr_0;

#line 331 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 334 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0;

#line 337 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0;

#line 340 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 343 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 346 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 349 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 352 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1measurements__type_ctor_info_own_prof_info_0;

#line 355 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0;

#line 358 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0;

#line 361 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2builtin__type_ctor_info_string_0profile__type_ctor_info_module_data_0;

#line 364 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1builtin__type_ctor_info_int_0;

#line 367 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

#line 370 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

#line 373 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

#line 376 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0;

#line 379 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0;

#line 382 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0;

#line 385 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_deep_0_0[29];

#line 388 "profile.c"
static const MR_ConstString profile__profile__field_names_deep_0_0[29];

#line 391 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_deep_0_0;

#line 394 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_deep_0_0[1];

#line 397 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_deep_0[1];

#line 400 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_deep_0[1];

#line 403 "profile.c"
static const MR_Integer profile__profile__functor_number_map_deep_0[1];

#line 406 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_deep_compression_flag_0_0;

#line 409 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_deep_compression_flag_0[1];

#line 412 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_deep_compression_flag_0[1];

#line 415 "profile.c"
static const MR_Integer profile__profile__functor_number_map_deep_compression_flag_0[1];

#line 418 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_deep_flags_0_0[4];

#line 421 "profile.c"
static const MR_ConstString profile__profile__field_names_deep_flags_0_0[4];

#line 424 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_deep_flags_0_0;

#line 427 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_deep_flags_0_0[1];

#line 430 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_deep_flags_0[1];

#line 433 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_deep_flags_0[1];

#line 436 "profile.c"
static const MR_Integer profile__profile__functor_number_map_deep_flags_0[1];

#line 439 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_initial_deep_0_0[6];

#line 442 "profile.c"
static const MR_ConstString profile__profile__field_names_initial_deep_0_0[6];

#line 445 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_initial_deep_0_0;

#line 448 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_initial_deep_0_0[1];

#line 451 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_initial_deep_0[1];

#line 454 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_initial_deep_0[1];

#line 457 "profile.c"
static const MR_Integer profile__profile__functor_number_map_initial_deep_0[1];

#line 460 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_is_zeroed_0_0;

#line 463 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_is_zeroed_0_1;

#line 466 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_is_zeroed_0[2];

#line 469 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_is_zeroed_0[2];

#line 472 "profile.c"
static const MR_Integer profile__profile__functor_number_map_is_zeroed_0[2];

#line 475 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0;

#line 478 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_module_data_0_0[3];

#line 481 "profile.c"
static const MR_ConstString profile__profile__field_names_module_data_0_0[3];

#line 484 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_module_data_0_0;

#line 487 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_module_data_0_0[1];

#line 490 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_module_data_0[1];

#line 493 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_module_data_0[1];

#line 496 "profile.c"
static const MR_Integer profile__profile__functor_number_map_module_data_0[1];

#line 499 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_array_slot_0;

#line 502 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_proc_dynamic_0_0[3];

#line 505 "profile.c"
static const MR_ConstString profile__profile__field_names_proc_dynamic_0_0[3];

#line 508 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_proc_dynamic_0_0;

#line 511 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_proc_dynamic_0_0[1];

#line 514 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_proc_dynamic_0[1];

#line 517 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_proc_dynamic_0[1];

#line 520 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_dynamic_0[1];

#line 523 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_dynamic_ptr_0[1];

#line 526 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_proc_dynamic_ptr_0;

#line 529 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;

#line 532 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_proc_static_0_0[12];

#line 535 "profile.c"
static const MR_ConstString profile__profile__field_names_proc_static_0_0[12];

#line 538 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_proc_static_0_0;

#line 541 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_proc_static_0_0[1];

#line 544 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_proc_static_0[1];

#line 547 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_proc_static_0[1];

#line 550 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_static_0[1];

#line 553 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_static_ptr_0[1];

#line 556 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_proc_static_ptr_0;

#line 559 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_profile_stats_0_0[10];

#line 562 "profile.c"
static const MR_ConstString profile__profile__field_names_profile_stats_0_0[10];

#line 565 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_profile_stats_0_0;

#line 568 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_profile_stats_0_0[1];

#line 571 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_profile_stats_0[1];

#line 574 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_profile_stats_0[1];

#line 577 "profile.c"
static const MR_Integer profile__profile__functor_number_map_profile_stats_0[1];

#line 580 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_array_slot_0_0_10001(
#line 583 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 585 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 588 "profile.c"
static void MR_CALL 
profile____Compare____call_site_array_slot_0_0_10001(
#line 591 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 593 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 595 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 598 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_callees_0_0_10001(
#line 601 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 603 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 606 "profile.c"
static void MR_CALL 
profile____Compare____call_site_callees_0_0_10001(
#line 609 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 611 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 613 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 616 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_caller_0_0_10001(
#line 619 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 621 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 624 "profile.c"
static void MR_CALL 
profile____Compare____call_site_caller_0_0_10001(
#line 627 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 629 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 631 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 634 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_0_0_10001(
#line 637 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 639 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 642 "profile.c"
static void MR_CALL 
profile____Compare____call_site_dynamic_0_0_10001(
#line 645 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 647 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 649 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 652 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_ptr_0_0_10001(
#line 655 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 657 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 660 "profile.c"
static void MR_CALL 
profile____Compare____call_site_dynamic_ptr_0_0_10001(
#line 663 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 665 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 667 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 670 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_dynamics_0_0_10001(
#line 673 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 675 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 678 "profile.c"
static void MR_CALL 
profile____Compare____call_site_dynamics_0_0_10001(
#line 681 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 683 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 685 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 688 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_0_0_10001(
#line 691 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 693 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 696 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_0_0_10001(
#line 699 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 701 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 703 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 706 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_1_0_10001(
#line 709 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 711 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 713 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 716 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_and_callee_1_0_10001(
#line 719 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 721 "profile.c"
  MR_Box * profile__wrapper_arg_2,
#line 723 "profile.c"
  MR_Box profile__wrapper_arg_3,
#line 725 "profile.c"
  MR_Box profile__wrapper_arg_4);

#line 728 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_0_0_10001(
#line 731 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 733 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 736 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_and_callee_0_0_10001(
#line 739 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 741 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 743 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 746 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_info_1_0_10001(
#line 749 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 751 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 753 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 756 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_and_info_1_0_10001(
#line 759 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 761 "profile.c"
  MR_Box * profile__wrapper_arg_2,
#line 763 "profile.c"
  MR_Box profile__wrapper_arg_3,
#line 765 "profile.c"
  MR_Box profile__wrapper_arg_4);

#line 768 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_static_0_0_10001(
#line 771 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 773 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 776 "profile.c"
static void MR_CALL 
profile____Compare____call_site_static_0_0_10001(
#line 779 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 781 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 783 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 786 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_static_map_0_0_10001(
#line 789 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 791 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 794 "profile.c"
static void MR_CALL 
profile____Compare____call_site_static_map_0_0_10001(
#line 797 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 799 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 801 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 804 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_static_ptr_0_0_10001(
#line 807 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 809 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 812 "profile.c"
static void MR_CALL 
profile____Compare____call_site_static_ptr_0_0_10001(
#line 815 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 817 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 819 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 822 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_statics_0_0_10001(
#line 825 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 827 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 830 "profile.c"
static void MR_CALL 
profile____Compare____call_site_statics_0_0_10001(
#line 833 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 835 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 837 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 840 "profile.c"
static MR_bool MR_CALL 
profile____Unify____canonical_flag_0_0_10001(
#line 843 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 845 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 848 "profile.c"
static void MR_CALL 
profile____Compare____canonical_flag_0_0_10001(
#line 851 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 853 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 855 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 858 "profile.c"
static MR_bool MR_CALL 
profile____Unify____clique_ptr_0_0_10001(
#line 861 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 863 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 866 "profile.c"
static void MR_CALL 
profile____Compare____clique_ptr_0_0_10001(
#line 869 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 871 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 873 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 876 "profile.c"
static MR_bool MR_CALL 
profile____Unify____compensation_table_0_0_10001(
#line 879 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 881 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 884 "profile.c"
static void MR_CALL 
profile____Compare____compensation_table_0_0_10001(
#line 887 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 889 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 891 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 894 "profile.c"
static MR_bool MR_CALL 
profile____Unify____coverage_data_type_0_0_10001(
#line 897 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 899 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 902 "profile.c"
static void MR_CALL 
profile____Compare____coverage_data_type_0_0_10001(
#line 905 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 907 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 909 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 912 "profile.c"
static MR_bool MR_CALL 
profile____Unify____deep_0_0_10001(
#line 915 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 917 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 920 "profile.c"
static void MR_CALL 
profile____Compare____deep_0_0_10001(
#line 923 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 925 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 927 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 930 "profile.c"
static MR_bool MR_CALL 
profile____Unify____deep_compression_flag_0_0_10001(
#line 933 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 935 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 938 "profile.c"
static void MR_CALL 
profile____Compare____deep_compression_flag_0_0_10001(
#line 941 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 943 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 945 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 948 "profile.c"
static MR_bool MR_CALL 
profile____Unify____deep_flags_0_0_10001(
#line 951 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 953 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 956 "profile.c"
static void MR_CALL 
profile____Compare____deep_flags_0_0_10001(
#line 959 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 961 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 963 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 966 "profile.c"
static MR_bool MR_CALL 
profile____Unify____initial_deep_0_0_10001(
#line 969 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 971 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 974 "profile.c"
static void MR_CALL 
profile____Compare____initial_deep_0_0_10001(
#line 977 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 979 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 981 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 984 "profile.c"
static MR_bool MR_CALL 
profile____Unify____is_zeroed_0_0_10001(
#line 987 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 989 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 992 "profile.c"
static void MR_CALL 
profile____Compare____is_zeroed_0_0_10001(
#line 995 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 997 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 999 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1002 "profile.c"
static MR_bool MR_CALL 
profile____Unify____module_data_0_0_10001(
#line 1005 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1007 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1010 "profile.c"
static void MR_CALL 
profile____Compare____module_data_0_0_10001(
#line 1013 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1015 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1017 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1020 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_dynamic_0_0_10001(
#line 1023 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1025 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1028 "profile.c"
static void MR_CALL 
profile____Compare____proc_dynamic_0_0_10001(
#line 1031 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1033 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1035 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1038 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_dynamic_ptr_0_0_10001(
#line 1041 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1043 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1046 "profile.c"
static void MR_CALL 
profile____Compare____proc_dynamic_ptr_0_0_10001(
#line 1049 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1051 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1053 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1056 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_dynamics_0_0_10001(
#line 1059 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1061 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1064 "profile.c"
static void MR_CALL 
profile____Compare____proc_dynamics_0_0_10001(
#line 1067 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1069 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1071 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1074 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_static_0_0_10001(
#line 1077 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1079 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1082 "profile.c"
static void MR_CALL 
profile____Compare____proc_static_0_0_10001(
#line 1085 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1087 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1089 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1092 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_static_ptr_0_0_10001(
#line 1095 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1097 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1100 "profile.c"
static void MR_CALL 
profile____Compare____proc_static_ptr_0_0_10001(
#line 1103 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1105 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1107 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1110 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_statics_0_0_10001(
#line 1113 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1115 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1118 "profile.c"
static void MR_CALL 
profile____Compare____proc_statics_0_0_10001(
#line 1121 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1123 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1125 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1128 "profile.c"
static MR_bool MR_CALL 
profile____Unify____profile_stats_0_0_10001(
#line 1131 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1133 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1136 "profile.c"
static void MR_CALL 
profile____Compare____profile_stats_0_0_10001(
#line 1139 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1141 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1143 "profile.c"
  MR_Box profile__wrapper_arg_3);


static /* final */ const MR_Box profile_scalar_common_1[27][2];

static /* final */ const MR_Box profile_scalar_common_2[4][3];

static /* final */ const MR_Box profile_scalar_common_3[2][6];

static /* final */ const MR_Box profile_scalar_common_4[1][1];




static /* final */ const MR_Box profile_scalar_common_1[27][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile_scalar_common_2[1]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_kind_and_callee_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile_scalar_common_1[0]))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile_scalar_common_1[1]))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile_scalar_common_1[2]))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile_scalar_common_2[0]))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_static_coverage_info_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&profile_scalar_common_1[18]))
  },
  /* row 20 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_prog_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&profile_scalar_common_2[3]))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 25 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&profile_scalar_common_1[24]))
  },
  /* row 26 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0))
  },
};

static /* final */ const MR_Box profile_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&profile_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_module_data_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&profile_scalar_common_1[20])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box profile_scalar_common_3[2][6] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "mercury_runtime")),
    ((MR_Box) ((MR_String) "mercury_runtime")),
    ((MR_Box) ((MR_String) "main_parent")),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box profile_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "There is no readable procedure representation information file."))
  },
};



#include "profile.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1371 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_0[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 1376 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_array_slot_0_0 = {
  (MR_String) "slot_normal",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  profile__profile__field_types_call_site_array_slot_0_0,
  NULL,
  NULL,
  NULL
};

#line 1391 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1399 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_1[2] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_is_zeroed_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 1405 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_array_slot_0_1 = {
  (MR_String) "slot_multi",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  profile__profile__field_types_call_site_array_slot_0_1,
  NULL,
  NULL,
  NULL
};

#line 1420 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_array_slot_0_0[1] = {
  &profile__profile__du_functor_desc_call_site_array_slot_0_0
};

#line 1425 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_array_slot_0_1[1] = {
  &profile__profile__du_functor_desc_call_site_array_slot_0_1
};

#line 1430 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_array_slot_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_array_slot_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_array_slot_0_1
  }
};

#line 1444 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_array_slot_0[2] = {
  &profile__profile__du_functor_desc_call_site_array_slot_0_1,
  &profile__profile__du_functor_desc_call_site_array_slot_0_0
};

#line 1450 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_array_slot_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1456 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_array_slot_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____call_site_array_slot_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_array_slot_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_array_slot",
  {
    profile__profile__du_name_ordered_call_site_array_slot_0
  },
  {
    profile__profile__du_ptag_ordered_call_site_array_slot_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_array_slot_0
};

#line 1477 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_callees_0[1] = {
  (MR_Integer) 0
};

#line 1482 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 1490 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_callees_0 = {
  (MR_String) "call_site_callees",
  (MR_PseudoTypeInfo) &profile__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0,
  NULL
};

#line 1497 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_callees_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____call_site_callees_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_callees_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_callees",
  {
    &profile__profile__notag_functor_desc_call_site_callees_0
  },
  {
    &profile__profile__notag_functor_desc_call_site_callees_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_callees_0
};

#line 1518 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_caller_0[1] = {
  (MR_Integer) 0
};

#line 1523 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_caller_0 = {
  (MR_String) "call_site_caller",
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
  NULL
};

#line 1530 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_caller_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____call_site_caller_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_caller_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_caller",
  {
    &profile__profile__notag_functor_desc_call_site_caller_0
  },
  {
    &profile__profile__notag_functor_desc_call_site_caller_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_caller_0
};

#line 1551 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_dynamic_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0
};

#line 1558 "profile.c"
static const MR_ConstString profile__profile__field_names_call_site_dynamic_0_0[3] = {
  (MR_String) "csd_caller",
  (MR_String) "csd_callee",
  (MR_String) "csd_own_prof"
};

#line 1565 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_dynamic_0_0 = {
  (MR_String) "call_site_dynamic",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  profile__profile__field_types_call_site_dynamic_0_0,
  profile__profile__field_names_call_site_dynamic_0_0,
  NULL,
  NULL
};

#line 1580 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_dynamic_0_0[1] = {
  &profile__profile__du_functor_desc_call_site_dynamic_0_0
};

#line 1585 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_dynamic_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_dynamic_0_0
  }
};

#line 1594 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_dynamic_0[1] = {
  &profile__profile__du_functor_desc_call_site_dynamic_0_0
};

#line 1599 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_dynamic_0[1] = {
  (MR_Integer) 0
};

#line 1604 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_dynamic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____call_site_dynamic_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_dynamic_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_dynamic",
  {
    profile__profile__du_name_ordered_call_site_dynamic_0
  },
  {
    profile__profile__du_ptag_ordered_call_site_dynamic_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_dynamic_0
};

#line 1625 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_dynamic_ptr_0[1] = {
  (MR_Integer) 0
};

#line 1630 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_dynamic_ptr_0 = {
  (MR_String) "call_site_dynamic_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1637 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____call_site_dynamic_ptr_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_dynamic_ptr_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_dynamic_ptr",
  {
    &profile__profile__notag_functor_desc_call_site_dynamic_ptr_0
  },
  {
    &profile__profile__notag_functor_desc_call_site_dynamic_ptr_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_dynamic_ptr_0
};

#line 1658 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_0
  }
};

#line 1666 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_dynamics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____call_site_dynamics_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_dynamics_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_dynamics",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1687 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_0 = {
  (MR_String) "normal_call",
  (MR_Integer) 0,
  ((int) MR_callsite_normal_call)
};

#line 1694 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_1 = {
  (MR_String) "special_call",
  (MR_Integer) 1,
  ((int) MR_callsite_special_call)
};

#line 1701 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_2 = {
  (MR_String) "higher_order_call",
  (MR_Integer) 2,
  ((int) MR_callsite_higher_order_call)
};

#line 1708 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_3 = {
  (MR_String) "method_call",
  (MR_Integer) 3,
  ((int) MR_callsite_method_call)
};

#line 1715 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_4 = {
  (MR_String) "callback",
  (MR_Integer) 4,
  ((int) MR_callsite_callback)
};

#line 1722 "profile.c"
static const MR_ForeignEnumFunctorDescPtr profile__profile__foreign_enum_ordinal_ordered_call_site_kind_0[5] = {
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_0,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_1,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_2,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_3,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_4
};

#line 1731 "profile.c"
static const MR_ForeignEnumFunctorDescPtr profile__profile__foreign_enum_name_ordered_call_site_kind_0[5] = {
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_4,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_2,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_3,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_0,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_1
};

#line 1740 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_kind_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1749 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN_ENUM,
  ((MR_Box) (profile____Unify____call_site_kind_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_kind_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_kind",
  {
    profile__profile__foreign_enum_name_ordered_call_site_kind_0
  },
  {
    profile__profile__foreign_enum_ordinal_ordered_call_site_kind_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_kind_0
};

#line 1770 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_kind_and_callee_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1776 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_0 = {
  (MR_String) "normal_call_and_callee",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  profile__profile__field_types_call_site_kind_and_callee_1_0,
  NULL,
  NULL,
  NULL
};

#line 1791 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_1 = {
  (MR_String) "special_call_and_no_callee",
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

#line 1806 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_2 = {
  (MR_String) "higher_order_call_and_no_callee",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1821 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_3 = {
  (MR_String) "method_call_and_no_callee",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1836 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_4 = {
  (MR_String) "callback_and_no_callee",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1851 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_callee_1_0[4] = {
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_1,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_2,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_3,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_4
};

#line 1859 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_callee_1_1[1] = {
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_0
};

#line 1864 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_kind_and_callee_1[2] = {
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    profile__profile__du_stag_ordered_call_site_kind_and_callee_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_kind_and_callee_1_1
  }
};

#line 1878 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_kind_and_callee_1[5] = {
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_4,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_2,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_3,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_0,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_1
};

#line 1887 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_kind_and_callee_1[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1896 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_kind_and_callee_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____call_site_kind_and_callee_1_0_10001)),
  ((MR_Box) (profile____Compare____call_site_kind_and_callee_1_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_kind_and_callee",
  {
    profile__profile__du_name_ordered_call_site_kind_and_callee_1
  },
  {
    profile__profile__du_ptag_ordered_call_site_kind_and_callee_1
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_kind_and_callee_1
};

#line 1917 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 1925 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_kind_and_callee_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____call_site_kind_and_callee_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_kind_and_callee_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_kind_and_callee",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1946 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_kind_and_info_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1951 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_0 = {
  (MR_String) "normal_call_and_info",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  profile__profile__field_types_call_site_kind_and_info_1_0,
  NULL,
  NULL,
  NULL
};

#line 1966 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_1 = {
  (MR_String) "special_call_and_no_info",
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

#line 1981 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_2 = {
  (MR_String) "higher_order_call_and_no_info",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1996 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_3 = {
  (MR_String) "method_call_and_no_info",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2011 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_4 = {
  (MR_String) "callback_and_no_info",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2026 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_info_1_0[4] = {
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_1,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_2,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_3,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_4
};

#line 2034 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_info_1_1[1] = {
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_0
};

#line 2039 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_kind_and_info_1[2] = {
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    profile__profile__du_stag_ordered_call_site_kind_and_info_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_kind_and_info_1_1
  }
};

#line 2053 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_kind_and_info_1[5] = {
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_4,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_2,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_3,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_0,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_1
};

#line 2062 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_kind_and_info_1[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2071 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_kind_and_info_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____call_site_kind_and_info_1_0_10001)),
  ((MR_Box) (profile____Compare____call_site_kind_and_info_1_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_kind_and_info",
  {
    profile__profile__du_name_ordered_call_site_kind_and_info_1
  },
  {
    profile__profile__du_ptag_ordered_call_site_kind_and_info_1
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_kind_and_info_1
};

#line 2092 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_static_0_0[5] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 2101 "profile.c"
static const MR_ConstString profile__profile__field_names_call_site_static_0_0[5] = {
  (MR_String) "css_container",
  (MR_String) "css_slot_num",
  (MR_String) "css_kind",
  (MR_String) "css_line_num",
  (MR_String) "css_goal_path"
};

#line 2110 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_static_0_0 = {
  (MR_String) "call_site_static",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  profile__profile__field_types_call_site_static_0_0,
  profile__profile__field_names_call_site_static_0_0,
  NULL,
  NULL
};

#line 2125 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_static_0_0[1] = {
  &profile__profile__du_functor_desc_call_site_static_0_0
};

#line 2130 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_static_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_static_0_0
  }
};

#line 2139 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_static_0[1] = {
  &profile__profile__du_functor_desc_call_site_static_0_0
};

#line 2144 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_static_0[1] = {
  (MR_Integer) 0
};

#line 2149 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_static_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____call_site_static_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_static_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_static",
  {
    profile__profile__du_name_ordered_call_site_static_0
  },
  {
    profile__profile__du_ptag_ordered_call_site_static_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_static_0
};

#line 2170 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
  }
};

#line 2178 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_static_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____call_site_static_map_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_static_map_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_static_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2199 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_static_ptr_0[1] = {
  (MR_Integer) 0
};

#line 2204 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_static_ptr_0 = {
  (MR_String) "call_site_static_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2211 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_static_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____call_site_static_ptr_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_static_ptr_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_static_ptr",
  {
    &profile__profile__notag_functor_desc_call_site_static_ptr_0
  },
  {
    &profile__profile__notag_functor_desc_call_site_static_ptr_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_static_ptr_0
};

#line 2232 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_static_0
  }
};

#line 2240 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_statics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____call_site_statics_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_statics_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_statics",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_static_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2261 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_canonical_flag_0_0 = {
  (MR_String) "is_canonical",
  (MR_Integer) 0
};

#line 2267 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_canonical_flag_0_1 = {
  (MR_String) "maybe_not_canonical",
  (MR_Integer) 1
};

#line 2273 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_canonical_flag_0[2] = {
  &profile__profile__enum_functor_desc_canonical_flag_0_0,
  &profile__profile__enum_functor_desc_canonical_flag_0_1
};

#line 2279 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_canonical_flag_0[2] = {
  &profile__profile__enum_functor_desc_canonical_flag_0_0,
  &profile__profile__enum_functor_desc_canonical_flag_0_1
};

#line 2285 "profile.c"
static const MR_Integer profile__profile__functor_number_map_canonical_flag_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2291 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_canonical_flag_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (profile____Unify____canonical_flag_0_0_10001)),
  ((MR_Box) (profile____Compare____canonical_flag_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "canonical_flag",
  {
    profile__profile__enum_name_ordered_canonical_flag_0
  },
  {
    profile__profile__enum_value_ordered_canonical_flag_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  profile__profile__functor_number_map_canonical_flag_0
};

#line 2312 "profile.c"
static const MR_Integer profile__profile__functor_number_map_clique_ptr_0[1] = {
  (MR_Integer) 0
};

#line 2317 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_clique_ptr_0 = {
  (MR_String) "clique_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2324 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_clique_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____clique_ptr_0_0_10001)),
  ((MR_Box) (profile____Compare____clique_ptr_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "clique_ptr",
  {
    &profile__profile__notag_functor_desc_clique_ptr_0
  },
  {
    &profile__profile__notag_functor_desc_clique_ptr_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_clique_ptr_0
};

#line 2345 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
  }
};

#line 2354 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_compensation_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____compensation_table_0_0_10001)),
  ((MR_Box) (profile____Compare____compensation_table_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "compensation_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2375 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_0 = {
  (MR_String) "no_coverage_data",
  (MR_Integer) 0
};

#line 2381 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_1 = {
  (MR_String) "static_coverage_data",
  (MR_Integer) 1
};

#line 2387 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_2 = {
  (MR_String) "dynamic_coverage_data",
  (MR_Integer) 2
};

#line 2393 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_coverage_data_type_0[3] = {
  &profile__profile__enum_functor_desc_coverage_data_type_0_0,
  &profile__profile__enum_functor_desc_coverage_data_type_0_1,
  &profile__profile__enum_functor_desc_coverage_data_type_0_2
};

#line 2400 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_coverage_data_type_0[3] = {
  &profile__profile__enum_functor_desc_coverage_data_type_0_2,
  &profile__profile__enum_functor_desc_coverage_data_type_0_0,
  &profile__profile__enum_functor_desc_coverage_data_type_0_1
};

#line 2407 "profile.c"
static const MR_Integer profile__profile__functor_number_map_coverage_data_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2414 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_coverage_data_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (profile____Unify____coverage_data_type_0_0_10001)),
  ((MR_Box) (profile____Compare____coverage_data_type_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "coverage_data_type",
  {
    profile__profile__enum_name_ordered_coverage_data_type_0
  },
  {
    profile__profile__enum_value_ordered_coverage_data_type_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  profile__profile__functor_number_map_coverage_data_type_0
};

#line 2435 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_0
  }
};

#line 2443 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_proc_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_0
  }
};

#line 2451 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

#line 2459 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 2467 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

#line 2475 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0
  }
};

#line 2483 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2491 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2499 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &profile__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2508 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2516 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1measurements__type_ctor_info_own_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0
  }
};

#line 2524 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
  }
};

#line 2532 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0
  }
};

#line 2540 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2builtin__type_ctor_info_string_0profile__type_ctor_info_module_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &profile__profile__type_ctor_info_module_data_0
  }
};

#line 2549 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2557 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &profile__array__ti_array_1builtin__type_ctor_info_int_0
  }
};

#line 2565 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0
  }
};

#line 2573 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &profile__array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0
  }
};

#line 2581 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_prog_rep_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 2589 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &profile__mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2598 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &profile__maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0
  }
};

#line 2606 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_deep_0_0[29] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_profile_stats_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_static_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_proc_static_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1measurements__type_ctor_info_own_prof_info_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1measurements__type_ctor_info_own_prof_info_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1measurements__type_ctor_info_own_prof_info_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0,
  (MR_PseudoTypeInfo) &profile__tree234__ti_tree234_2builtin__type_ctor_info_string_0profile__type_ctor_info_module_data_0,
  (MR_PseudoTypeInfo) &profile__maybe__ti_maybe_1array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &exclude__exclude__type_ctor_info_exclude_file_0,
  (MR_PseudoTypeInfo) &profile__maybe__ti_maybe_1maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0
};

#line 2639 "profile.c"
static const MR_ConstString profile__profile__field_names_deep_0_0[29] = {
  (MR_String) "profile_stats",
  (MR_String) "server_name_port",
  (MR_String) "script_name",
  (MR_String) "data_file_name",
  (MR_String) "root",
  (MR_String) "call_site_dynamics",
  (MR_String) "proc_dynamics",
  (MR_String) "call_site_statics",
  (MR_String) "proc_statics",
  (MR_String) "clique_index",
  (MR_String) "clique_members",
  (MR_String) "clique_parents",
  (MR_String) "clique_maybe_child",
  (MR_String) "proc_callers",
  (MR_String) "call_site_static_map",
  (MR_String) "call_site_calls",
  (MR_String) "pd_own",
  (MR_String) "pd_desc",
  (MR_String) "csd_desc",
  (MR_String) "ps_own",
  (MR_String) "ps_desc",
  (MR_String) "css_own",
  (MR_String) "css_desc",
  (MR_String) "pd_comp_table",
  (MR_String) "csd_comp_table",
  (MR_String) "module_data",
  (MR_String) "maybe_static_coverage",
  (MR_String) "exclude_contour_file",
  (MR_String) "procrep_file"
};

#line 2672 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_deep_0_0 = {
  (MR_String) "deep",
  (MR_Integer) 29,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  profile__profile__field_types_deep_0_0,
  profile__profile__field_names_deep_0_0,
  NULL,
  NULL
};

#line 2687 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_deep_0_0[1] = {
  &profile__profile__du_functor_desc_deep_0_0
};

#line 2692 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_deep_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_deep_0_0
  }
};

#line 2701 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_deep_0[1] = {
  &profile__profile__du_functor_desc_deep_0_0
};

#line 2706 "profile.c"
static const MR_Integer profile__profile__functor_number_map_deep_0[1] = {
  (MR_Integer) 0
};

#line 2711 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_deep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____deep_0_0_10001)),
  ((MR_Box) (profile____Compare____deep_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "deep",
  {
    profile__profile__du_name_ordered_deep_0
  },
  {
    profile__profile__du_ptag_ordered_deep_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_deep_0
};

#line 2732 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_deep_compression_flag_0_0 = {
  (MR_String) "no_compression",
  (MR_Integer) 0
};

#line 2738 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_deep_compression_flag_0[1] = {
  &profile__profile__enum_functor_desc_deep_compression_flag_0_0
};

#line 2743 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_deep_compression_flag_0[1] = {
  &profile__profile__enum_functor_desc_deep_compression_flag_0_0
};

#line 2748 "profile.c"
static const MR_Integer profile__profile__functor_number_map_deep_compression_flag_0[1] = {
  (MR_Integer) 0
};

#line 2753 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_deep_compression_flag_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (profile____Unify____deep_compression_flag_0_0_10001)),
  ((MR_Box) (profile____Compare____deep_compression_flag_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "deep_compression_flag",
  {
    profile__profile__enum_name_ordered_deep_compression_flag_0
  },
  {
    profile__profile__enum_value_ordered_deep_compression_flag_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_deep_compression_flag_0
};

#line 2774 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_deep_flags_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_canonical_flag_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_deep_compression_flag_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_coverage_data_type_0
};

#line 2782 "profile.c"
static const MR_ConstString profile__profile__field_names_deep_flags_0_0[4] = {
  (MR_String) "df_bytes_per_int",
  (MR_String) "df_canonical_flag",
  (MR_String) "df_compression_flag",
  (MR_String) "df_coverage_data_type"
};

#line 2790 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_deep_flags_0_0 = {
  (MR_String) "deep_flags",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  profile__profile__field_types_deep_flags_0_0,
  profile__profile__field_names_deep_flags_0_0,
  NULL,
  NULL
};

#line 2805 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_deep_flags_0_0[1] = {
  &profile__profile__du_functor_desc_deep_flags_0_0
};

#line 2810 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_deep_flags_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_deep_flags_0_0
  }
};

#line 2819 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_deep_flags_0[1] = {
  &profile__profile__du_functor_desc_deep_flags_0_0
};

#line 2824 "profile.c"
static const MR_Integer profile__profile__functor_number_map_deep_flags_0[1] = {
  (MR_Integer) 0
};

#line 2829 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_deep_flags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____deep_flags_0_0_10001)),
  ((MR_Box) (profile____Compare____deep_flags_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "deep_flags",
  {
    profile__profile__du_name_ordered_deep_flags_0
  },
  {
    profile__profile__du_ptag_ordered_deep_flags_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_deep_flags_0
};

#line 2850 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_initial_deep_0_0[6] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_profile_stats_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_static_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_proc_static_0
};

#line 2860 "profile.c"
static const MR_ConstString profile__profile__field_names_initial_deep_0_0[6] = {
  (MR_String) "init_profile_stats",
  (MR_String) "init_root",
  (MR_String) "init_call_site_dynamics",
  (MR_String) "init_proc_dynamics",
  (MR_String) "init_call_site_statics",
  (MR_String) "init_proc_statics"
};

#line 2870 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_initial_deep_0_0 = {
  (MR_String) "initial_deep",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  profile__profile__field_types_initial_deep_0_0,
  profile__profile__field_names_initial_deep_0_0,
  NULL,
  NULL
};

#line 2885 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_initial_deep_0_0[1] = {
  &profile__profile__du_functor_desc_initial_deep_0_0
};

#line 2890 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_initial_deep_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_initial_deep_0_0
  }
};

#line 2899 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_initial_deep_0[1] = {
  &profile__profile__du_functor_desc_initial_deep_0_0
};

#line 2904 "profile.c"
static const MR_Integer profile__profile__functor_number_map_initial_deep_0[1] = {
  (MR_Integer) 0
};

#line 2909 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_initial_deep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____initial_deep_0_0_10001)),
  ((MR_Box) (profile____Compare____initial_deep_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "initial_deep",
  {
    profile__profile__du_name_ordered_initial_deep_0
  },
  {
    profile__profile__du_ptag_ordered_initial_deep_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_initial_deep_0
};

#line 2930 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_is_zeroed_0_0 = {
  (MR_String) "zeroed",
  (MR_Integer) 0
};

#line 2936 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_is_zeroed_0_1 = {
  (MR_String) "not_zeroed",
  (MR_Integer) 1
};

#line 2942 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_is_zeroed_0[2] = {
  &profile__profile__enum_functor_desc_is_zeroed_0_0,
  &profile__profile__enum_functor_desc_is_zeroed_0_1
};

#line 2948 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_is_zeroed_0[2] = {
  &profile__profile__enum_functor_desc_is_zeroed_0_1,
  &profile__profile__enum_functor_desc_is_zeroed_0_0
};

#line 2954 "profile.c"
static const MR_Integer profile__profile__functor_number_map_is_zeroed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2960 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_is_zeroed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (profile____Unify____is_zeroed_0_0_10001)),
  ((MR_Box) (profile____Compare____is_zeroed_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "is_zeroed",
  {
    profile__profile__enum_name_ordered_is_zeroed_0
  },
  {
    profile__profile__enum_value_ordered_is_zeroed_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  profile__profile__functor_number_map_is_zeroed_0
};

#line 2981 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 2989 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_module_data_0_0[3] = {
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0,
  (MR_PseudoTypeInfo) &profile__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0
};

#line 2996 "profile.c"
static const MR_ConstString profile__profile__field_names_module_data_0_0[3] = {
  (MR_String) "module_own",
  (MR_String) "module_desc",
  (MR_String) "module_procs"
};

#line 3003 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_module_data_0_0 = {
  (MR_String) "module_data",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  profile__profile__field_types_module_data_0_0,
  profile__profile__field_names_module_data_0_0,
  NULL,
  NULL
};

#line 3018 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_module_data_0_0[1] = {
  &profile__profile__du_functor_desc_module_data_0_0
};

#line 3023 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_module_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_module_data_0_0
  }
};

#line 3032 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_module_data_0[1] = {
  &profile__profile__du_functor_desc_module_data_0_0
};

#line 3037 "profile.c"
static const MR_Integer profile__profile__functor_number_map_module_data_0[1] = {
  (MR_Integer) 0
};

#line 3042 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_module_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____module_data_0_0_10001)),
  ((MR_Box) (profile____Compare____module_data_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "module_data",
  {
    profile__profile__du_name_ordered_module_data_0
  },
  {
    profile__profile__du_ptag_ordered_module_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_module_data_0
};

#line 3063 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

#line 3071 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_proc_dynamic_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_array_slot_0,
  (MR_PseudoTypeInfo) &profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0
};

#line 3078 "profile.c"
static const MR_ConstString profile__profile__field_names_proc_dynamic_0_0[3] = {
  (MR_String) "pd_proc_static",
  (MR_String) "pd_sites",
  (MR_String) "pd_maybe_coverage_points"
};

#line 3085 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_proc_dynamic_0_0 = {
  (MR_String) "proc_dynamic",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  profile__profile__field_types_proc_dynamic_0_0,
  profile__profile__field_names_proc_dynamic_0_0,
  NULL,
  NULL
};

#line 3100 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_proc_dynamic_0_0[1] = {
  &profile__profile__du_functor_desc_proc_dynamic_0_0
};

#line 3105 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_proc_dynamic_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_proc_dynamic_0_0
  }
};

#line 3114 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_proc_dynamic_0[1] = {
  &profile__profile__du_functor_desc_proc_dynamic_0_0
};

#line 3119 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_dynamic_0[1] = {
  (MR_Integer) 0
};

#line 3124 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_dynamic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____proc_dynamic_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_dynamic_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_dynamic",
  {
    profile__profile__du_name_ordered_proc_dynamic_0
  },
  {
    profile__profile__du_ptag_ordered_proc_dynamic_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_proc_dynamic_0
};

#line 3145 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_dynamic_ptr_0[1] = {
  (MR_Integer) 0
};

#line 3150 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_proc_dynamic_ptr_0 = {
  (MR_String) "proc_dynamic_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 3157 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_dynamic_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____proc_dynamic_ptr_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_dynamic_ptr_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_dynamic_ptr",
  {
    &profile__profile__notag_functor_desc_proc_dynamic_ptr_0
  },
  {
    &profile__profile__notag_functor_desc_proc_dynamic_ptr_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_proc_dynamic_ptr_0
};

#line 3178 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_dynamics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____proc_dynamics_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_dynamics_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_dynamics",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3199 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1mdbcomp__program_representation__type_ctor_info_coverage_point_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0
  }
};

#line 3207 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_proc_static_0_0[12] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1mdbcomp__program_representation__type_ctor_info_coverage_point_info_0,
  (MR_PseudoTypeInfo) &profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_is_zeroed_0
};

#line 3223 "profile.c"
static const MR_ConstString profile__profile__field_names_proc_static_0_0[12] = {
  (MR_String) "ps_id",
  (MR_String) "ps_decl_module",
  (MR_String) "ps_uq_refined_id",
  (MR_String) "ps_q_refined_id",
  (MR_String) "ps_raw_id",
  (MR_String) "ps_file_name",
  (MR_String) "ps_line_number",
  (MR_String) "ps_in_interface",
  (MR_String) "ps_sites",
  (MR_String) "ps_coverage_point_infos",
  (MR_String) "ps_maybe_coverage_points",
  (MR_String) "ps_is_zeroed"
};

#line 3239 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_proc_static_0_0 = {
  (MR_String) "proc_static",
  (MR_Integer) 12,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  profile__profile__field_types_proc_static_0_0,
  profile__profile__field_names_proc_static_0_0,
  NULL,
  NULL
};

#line 3254 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_proc_static_0_0[1] = {
  &profile__profile__du_functor_desc_proc_static_0_0
};

#line 3259 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_proc_static_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_proc_static_0_0
  }
};

#line 3268 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_proc_static_0[1] = {
  &profile__profile__du_functor_desc_proc_static_0_0
};

#line 3273 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_static_0[1] = {
  (MR_Integer) 0
};

#line 3278 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_static_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____proc_static_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_static_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_static",
  {
    profile__profile__du_name_ordered_proc_static_0
  },
  {
    profile__profile__du_ptag_ordered_proc_static_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_proc_static_0
};

#line 3299 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_static_ptr_0[1] = {
  (MR_Integer) 0
};

#line 3304 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_proc_static_ptr_0 = {
  (MR_String) "proc_static_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 3311 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_static_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____proc_static_ptr_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_static_ptr_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_static_ptr",
  {
    &profile__profile__notag_functor_desc_proc_static_ptr_0
  },
  {
    &profile__profile__notag_functor_desc_proc_static_ptr_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_proc_static_ptr_0
};

#line 3332 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_statics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____proc_statics_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_statics_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_statics",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_proc_static_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3353 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_profile_stats_0_0[10] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_deep_flags_0
};

#line 3367 "profile.c"
static const MR_ConstString profile__profile__field_names_profile_stats_0_0[10] = {
  (MR_String) "prs_program_name",
  (MR_String) "prs_num_csd",
  (MR_String) "prs_num_css",
  (MR_String) "prs_num_pd",
  (MR_String) "prs_num_ps",
  (MR_String) "prs_ticks_per_sec",
  (MR_String) "prs_instrument_quanta",
  (MR_String) "prs_user_quanta",
  (MR_String) "prs_num_callseqs",
  (MR_String) "prs_deep_flags"
};

#line 3381 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_profile_stats_0_0 = {
  (MR_String) "profile_stats",
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  profile__profile__field_types_profile_stats_0_0,
  profile__profile__field_names_profile_stats_0_0,
  NULL,
  NULL
};

#line 3396 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_profile_stats_0_0[1] = {
  &profile__profile__du_functor_desc_profile_stats_0_0
};

#line 3401 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_profile_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_profile_stats_0_0
  }
};

#line 3410 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_profile_stats_0[1] = {
  &profile__profile__du_functor_desc_profile_stats_0_0
};

#line 3415 "profile.c"
static const MR_Integer profile__profile__functor_number_map_profile_stats_0[1] = {
  (MR_Integer) 0
};

#line 3420 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_profile_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____profile_stats_0_0_10001)),
  ((MR_Box) (profile____Compare____profile_stats_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "profile_stats",
  {
    profile__profile__du_name_ordered_profile_stats_0
  },
  {
    profile__profile__du_ptag_ordered_profile_stats_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_profile_stats_0
};

#line 3441 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_array_slot_0_0_10001(
#line 3444 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3446 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3448 "profile.c"
{
#line 3450 "profile.c"
  {
#line 3452 "profile.c"
    MR_bool profile__succeeded;

#line 3455 "profile.c"
    {
#line 3457 "profile.c"
      profile__succeeded = profile____Unify____call_site_array_slot_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3460 "profile.c"
    return profile__succeeded;
#line 3462 "profile.c"
  }
#line 3464 "profile.c"
}

#line 3467 "profile.c"
static void MR_CALL 
profile____Compare____call_site_array_slot_0_0_10001(
#line 3470 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3472 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3474 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3476 "profile.c"
{
#line 3478 "profile.c"
  {
#line 3480 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3483 "profile.c"
    {
#line 3485 "profile.c"
      profile____Compare____call_site_array_slot_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3488 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3490 "profile.c"
  }
#line 3492 "profile.c"
}

#line 3495 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_callees_0_0_10001(
#line 3498 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3500 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3502 "profile.c"
{
#line 3504 "profile.c"
  {
#line 3506 "profile.c"
    MR_bool profile__succeeded;

#line 3509 "profile.c"
    {
#line 3511 "profile.c"
      profile__succeeded = profile____Unify____call_site_callees_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3514 "profile.c"
    return profile__succeeded;
#line 3516 "profile.c"
  }
#line 3518 "profile.c"
}

#line 3521 "profile.c"
static void MR_CALL 
profile____Compare____call_site_callees_0_0_10001(
#line 3524 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3526 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3528 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3530 "profile.c"
{
#line 3532 "profile.c"
  {
#line 3534 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3537 "profile.c"
    {
#line 3539 "profile.c"
      profile____Compare____call_site_callees_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3542 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3544 "profile.c"
  }
#line 3546 "profile.c"
}

#line 3549 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_caller_0_0_10001(
#line 3552 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3554 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3556 "profile.c"
{
#line 3558 "profile.c"
  {
#line 3560 "profile.c"
    MR_bool profile__succeeded;

#line 3563 "profile.c"
    {
#line 3565 "profile.c"
      profile__succeeded = profile____Unify____call_site_caller_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3568 "profile.c"
    return profile__succeeded;
#line 3570 "profile.c"
  }
#line 3572 "profile.c"
}

#line 3575 "profile.c"
static void MR_CALL 
profile____Compare____call_site_caller_0_0_10001(
#line 3578 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3580 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3582 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3584 "profile.c"
{
#line 3586 "profile.c"
  {
#line 3588 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3591 "profile.c"
    {
#line 3593 "profile.c"
      profile____Compare____call_site_caller_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3596 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3598 "profile.c"
  }
#line 3600 "profile.c"
}

#line 3603 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_0_0_10001(
#line 3606 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3608 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3610 "profile.c"
{
#line 3612 "profile.c"
  {
#line 3614 "profile.c"
    MR_bool profile__succeeded;

#line 3617 "profile.c"
    {
#line 3619 "profile.c"
      profile__succeeded = profile____Unify____call_site_dynamic_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3622 "profile.c"
    return profile__succeeded;
#line 3624 "profile.c"
  }
#line 3626 "profile.c"
}

#line 3629 "profile.c"
static void MR_CALL 
profile____Compare____call_site_dynamic_0_0_10001(
#line 3632 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3634 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3636 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3638 "profile.c"
{
#line 3640 "profile.c"
  {
#line 3642 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3645 "profile.c"
    {
#line 3647 "profile.c"
      profile____Compare____call_site_dynamic_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3650 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3652 "profile.c"
  }
#line 3654 "profile.c"
}

#line 3657 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_ptr_0_0_10001(
#line 3660 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3662 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3664 "profile.c"
{
#line 3666 "profile.c"
  {
#line 3668 "profile.c"
    MR_bool profile__succeeded;

#line 3671 "profile.c"
    {
#line 3673 "profile.c"
      profile__succeeded = profile____Unify____call_site_dynamic_ptr_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3676 "profile.c"
    return profile__succeeded;
#line 3678 "profile.c"
  }
#line 3680 "profile.c"
}

#line 3683 "profile.c"
static void MR_CALL 
profile____Compare____call_site_dynamic_ptr_0_0_10001(
#line 3686 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3688 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3690 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3692 "profile.c"
{
#line 3694 "profile.c"
  {
#line 3696 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3699 "profile.c"
    {
#line 3701 "profile.c"
      profile____Compare____call_site_dynamic_ptr_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3704 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3706 "profile.c"
  }
#line 3708 "profile.c"
}

#line 3711 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_dynamics_0_0_10001(
#line 3714 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3716 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3718 "profile.c"
{
#line 3720 "profile.c"
  {
#line 3722 "profile.c"
    MR_bool profile__succeeded;

#line 3725 "profile.c"
    {
#line 3727 "profile.c"
      profile__succeeded = profile____Unify____call_site_dynamics_0_0(((MR_ArrayPtr) profile__wrapper_arg_1), ((MR_ArrayPtr) profile__wrapper_arg_2));
    }
#line 3730 "profile.c"
    return profile__succeeded;
#line 3732 "profile.c"
  }
#line 3734 "profile.c"
}

#line 3737 "profile.c"
static void MR_CALL 
profile____Compare____call_site_dynamics_0_0_10001(
#line 3740 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3742 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3744 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3746 "profile.c"
{
#line 3748 "profile.c"
  {
#line 3750 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3753 "profile.c"
    {
#line 3755 "profile.c"
      profile____Compare____call_site_dynamics_0_0(&profile__conv0_HeadVar__1_1, ((MR_ArrayPtr) profile__wrapper_arg_2), ((MR_ArrayPtr) profile__wrapper_arg_3));
    }
#line 3758 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3760 "profile.c"
  }
#line 3762 "profile.c"
}

#line 3765 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_0_0_10001(
#line 3768 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3770 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3772 "profile.c"
{
#line 3774 "profile.c"
  {
#line 3776 "profile.c"
    MR_bool profile__succeeded;

#line 3779 "profile.c"
    {
#line 3781 "profile.c"
      profile__succeeded = profile____Unify____call_site_kind_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3784 "profile.c"
    return profile__succeeded;
#line 3786 "profile.c"
  }
#line 3788 "profile.c"
}

#line 3791 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_0_0_10001(
#line 3794 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3796 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3798 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3800 "profile.c"
{
#line 3802 "profile.c"
  {
#line 3804 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3807 "profile.c"
    {
#line 3809 "profile.c"
      profile____Compare____call_site_kind_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3812 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3814 "profile.c"
  }
#line 3816 "profile.c"
}

#line 3819 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_1_0_10001(
#line 3822 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3824 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3826 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3828 "profile.c"
{
#line 3830 "profile.c"
  {
#line 3832 "profile.c"
    MR_bool profile__succeeded;

#line 3835 "profile.c"
    {
#line 3837 "profile.c"
      profile__succeeded = profile____Unify____call_site_kind_and_callee_1_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3840 "profile.c"
    return profile__succeeded;
#line 3842 "profile.c"
  }
#line 3844 "profile.c"
}

#line 3847 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_and_callee_1_0_10001(
#line 3850 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3852 "profile.c"
  MR_Box * profile__wrapper_arg_2,
#line 3854 "profile.c"
  MR_Box profile__wrapper_arg_3,
#line 3856 "profile.c"
  MR_Box profile__wrapper_arg_4)
#line 3858 "profile.c"
{
#line 3860 "profile.c"
  {
#line 3862 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3865 "profile.c"
    {
#line 3867 "profile.c"
      profile____Compare____call_site_kind_and_callee_1_0(((MR_Word) profile__wrapper_arg_1), &profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_3), ((MR_Word) profile__wrapper_arg_4));
    }
#line 3870 "profile.c"
    *profile__wrapper_arg_2 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3872 "profile.c"
  }
#line 3874 "profile.c"
}

#line 3877 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_0_0_10001(
#line 3880 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3882 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3884 "profile.c"
{
#line 3886 "profile.c"
  {
#line 3888 "profile.c"
    MR_bool profile__succeeded;

#line 3891 "profile.c"
    {
#line 3893 "profile.c"
      profile__succeeded = profile____Unify____call_site_kind_and_callee_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3896 "profile.c"
    return profile__succeeded;
#line 3898 "profile.c"
  }
#line 3900 "profile.c"
}

#line 3903 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_and_callee_0_0_10001(
#line 3906 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3908 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3910 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3912 "profile.c"
{
#line 3914 "profile.c"
  {
#line 3916 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3919 "profile.c"
    {
#line 3921 "profile.c"
      profile____Compare____call_site_kind_and_callee_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3924 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3926 "profile.c"
  }
#line 3928 "profile.c"
}

#line 3931 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_info_1_0_10001(
#line 3934 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3936 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3938 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3940 "profile.c"
{
#line 3942 "profile.c"
  {
#line 3944 "profile.c"
    MR_bool profile__succeeded;

#line 3947 "profile.c"
    {
#line 3949 "profile.c"
      profile__succeeded = profile____Unify____call_site_kind_and_info_1_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3952 "profile.c"
    return profile__succeeded;
#line 3954 "profile.c"
  }
#line 3956 "profile.c"
}

#line 3959 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_and_info_1_0_10001(
#line 3962 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3964 "profile.c"
  MR_Box * profile__wrapper_arg_2,
#line 3966 "profile.c"
  MR_Box profile__wrapper_arg_3,
#line 3968 "profile.c"
  MR_Box profile__wrapper_arg_4)
#line 3970 "profile.c"
{
#line 3972 "profile.c"
  {
#line 3974 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3977 "profile.c"
    {
#line 3979 "profile.c"
      profile____Compare____call_site_kind_and_info_1_0(((MR_Word) profile__wrapper_arg_1), &profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_3), ((MR_Word) profile__wrapper_arg_4));
    }
#line 3982 "profile.c"
    *profile__wrapper_arg_2 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3984 "profile.c"
  }
#line 3986 "profile.c"
}

#line 3989 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_static_0_0_10001(
#line 3992 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3994 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3996 "profile.c"
{
#line 3998 "profile.c"
  {
#line 4000 "profile.c"
    MR_bool profile__succeeded;

#line 4003 "profile.c"
    {
#line 4005 "profile.c"
      profile__succeeded = profile____Unify____call_site_static_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4008 "profile.c"
    return profile__succeeded;
#line 4010 "profile.c"
  }
#line 4012 "profile.c"
}

#line 4015 "profile.c"
static void MR_CALL 
profile____Compare____call_site_static_0_0_10001(
#line 4018 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4020 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4022 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4024 "profile.c"
{
#line 4026 "profile.c"
  {
#line 4028 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4031 "profile.c"
    {
#line 4033 "profile.c"
      profile____Compare____call_site_static_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4036 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4038 "profile.c"
  }
#line 4040 "profile.c"
}

#line 4043 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_static_map_0_0_10001(
#line 4046 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4048 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4050 "profile.c"
{
#line 4052 "profile.c"
  {
#line 4054 "profile.c"
    MR_bool profile__succeeded;

#line 4057 "profile.c"
    {
#line 4059 "profile.c"
      profile__succeeded = profile____Unify____call_site_static_map_0_0(((MR_ArrayPtr) profile__wrapper_arg_1), ((MR_ArrayPtr) profile__wrapper_arg_2));
    }
#line 4062 "profile.c"
    return profile__succeeded;
#line 4064 "profile.c"
  }
#line 4066 "profile.c"
}

#line 4069 "profile.c"
static void MR_CALL 
profile____Compare____call_site_static_map_0_0_10001(
#line 4072 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4074 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4076 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4078 "profile.c"
{
#line 4080 "profile.c"
  {
#line 4082 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4085 "profile.c"
    {
#line 4087 "profile.c"
      profile____Compare____call_site_static_map_0_0(&profile__conv0_HeadVar__1_1, ((MR_ArrayPtr) profile__wrapper_arg_2), ((MR_ArrayPtr) profile__wrapper_arg_3));
    }
#line 4090 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4092 "profile.c"
  }
#line 4094 "profile.c"
}

#line 4097 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_static_ptr_0_0_10001(
#line 4100 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4102 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4104 "profile.c"
{
#line 4106 "profile.c"
  {
#line 4108 "profile.c"
    MR_bool profile__succeeded;

#line 4111 "profile.c"
    {
#line 4113 "profile.c"
      profile__succeeded = profile____Unify____call_site_static_ptr_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4116 "profile.c"
    return profile__succeeded;
#line 4118 "profile.c"
  }
#line 4120 "profile.c"
}

#line 4123 "profile.c"
static void MR_CALL 
profile____Compare____call_site_static_ptr_0_0_10001(
#line 4126 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4128 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4130 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4132 "profile.c"
{
#line 4134 "profile.c"
  {
#line 4136 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4139 "profile.c"
    {
#line 4141 "profile.c"
      profile____Compare____call_site_static_ptr_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4144 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4146 "profile.c"
  }
#line 4148 "profile.c"
}

#line 4151 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_statics_0_0_10001(
#line 4154 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4156 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4158 "profile.c"
{
#line 4160 "profile.c"
  {
#line 4162 "profile.c"
    MR_bool profile__succeeded;

#line 4165 "profile.c"
    {
#line 4167 "profile.c"
      profile__succeeded = profile____Unify____call_site_statics_0_0(((MR_ArrayPtr) profile__wrapper_arg_1), ((MR_ArrayPtr) profile__wrapper_arg_2));
    }
#line 4170 "profile.c"
    return profile__succeeded;
#line 4172 "profile.c"
  }
#line 4174 "profile.c"
}

#line 4177 "profile.c"
static void MR_CALL 
profile____Compare____call_site_statics_0_0_10001(
#line 4180 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4182 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4184 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4186 "profile.c"
{
#line 4188 "profile.c"
  {
#line 4190 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4193 "profile.c"
    {
#line 4195 "profile.c"
      profile____Compare____call_site_statics_0_0(&profile__conv0_HeadVar__1_1, ((MR_ArrayPtr) profile__wrapper_arg_2), ((MR_ArrayPtr) profile__wrapper_arg_3));
    }
#line 4198 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4200 "profile.c"
  }
#line 4202 "profile.c"
}

#line 4205 "profile.c"
static MR_bool MR_CALL 
profile____Unify____canonical_flag_0_0_10001(
#line 4208 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4210 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4212 "profile.c"
{
#line 4214 "profile.c"
  {
#line 4216 "profile.c"
    MR_bool profile__succeeded;

#line 4219 "profile.c"
    {
#line 4221 "profile.c"
      profile__succeeded = profile____Unify____canonical_flag_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4224 "profile.c"
    return profile__succeeded;
#line 4226 "profile.c"
  }
#line 4228 "profile.c"
}

#line 4231 "profile.c"
static void MR_CALL 
profile____Compare____canonical_flag_0_0_10001(
#line 4234 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4236 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4238 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4240 "profile.c"
{
#line 4242 "profile.c"
  {
#line 4244 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4247 "profile.c"
    {
#line 4249 "profile.c"
      profile____Compare____canonical_flag_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4252 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4254 "profile.c"
  }
#line 4256 "profile.c"
}

#line 4259 "profile.c"
static MR_bool MR_CALL 
profile____Unify____clique_ptr_0_0_10001(
#line 4262 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4264 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4266 "profile.c"
{
#line 4268 "profile.c"
  {
#line 4270 "profile.c"
    MR_bool profile__succeeded;

#line 4273 "profile.c"
    {
#line 4275 "profile.c"
      profile__succeeded = profile____Unify____clique_ptr_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4278 "profile.c"
    return profile__succeeded;
#line 4280 "profile.c"
  }
#line 4282 "profile.c"
}

#line 4285 "profile.c"
static void MR_CALL 
profile____Compare____clique_ptr_0_0_10001(
#line 4288 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4290 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4292 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4294 "profile.c"
{
#line 4296 "profile.c"
  {
#line 4298 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4301 "profile.c"
    {
#line 4303 "profile.c"
      profile____Compare____clique_ptr_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4306 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4308 "profile.c"
  }
#line 4310 "profile.c"
}

#line 4313 "profile.c"
static MR_bool MR_CALL 
profile____Unify____compensation_table_0_0_10001(
#line 4316 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4318 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4320 "profile.c"
{
#line 4322 "profile.c"
  {
#line 4324 "profile.c"
    MR_bool profile__succeeded;

#line 4327 "profile.c"
    {
#line 4329 "profile.c"
      profile__succeeded = profile____Unify____compensation_table_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4332 "profile.c"
    return profile__succeeded;
#line 4334 "profile.c"
  }
#line 4336 "profile.c"
}

#line 4339 "profile.c"
static void MR_CALL 
profile____Compare____compensation_table_0_0_10001(
#line 4342 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4344 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4346 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4348 "profile.c"
{
#line 4350 "profile.c"
  {
#line 4352 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4355 "profile.c"
    {
#line 4357 "profile.c"
      profile____Compare____compensation_table_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4360 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4362 "profile.c"
  }
#line 4364 "profile.c"
}

#line 4367 "profile.c"
static MR_bool MR_CALL 
profile____Unify____coverage_data_type_0_0_10001(
#line 4370 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4372 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4374 "profile.c"
{
#line 4376 "profile.c"
  {
#line 4378 "profile.c"
    MR_bool profile__succeeded;

#line 4381 "profile.c"
    {
#line 4383 "profile.c"
      profile__succeeded = profile____Unify____coverage_data_type_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4386 "profile.c"
    return profile__succeeded;
#line 4388 "profile.c"
  }
#line 4390 "profile.c"
}

#line 4393 "profile.c"
static void MR_CALL 
profile____Compare____coverage_data_type_0_0_10001(
#line 4396 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4398 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4400 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4402 "profile.c"
{
#line 4404 "profile.c"
  {
#line 4406 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4409 "profile.c"
    {
#line 4411 "profile.c"
      profile____Compare____coverage_data_type_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4414 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4416 "profile.c"
  }
#line 4418 "profile.c"
}

#line 4421 "profile.c"
static MR_bool MR_CALL 
profile____Unify____deep_0_0_10001(
#line 4424 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4426 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4428 "profile.c"
{
#line 4430 "profile.c"
  {
#line 4432 "profile.c"
    MR_bool profile__succeeded;

#line 4435 "profile.c"
    {
#line 4437 "profile.c"
      profile__succeeded = profile____Unify____deep_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4440 "profile.c"
    return profile__succeeded;
#line 4442 "profile.c"
  }
#line 4444 "profile.c"
}

#line 4447 "profile.c"
static void MR_CALL 
profile____Compare____deep_0_0_10001(
#line 4450 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4452 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4454 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4456 "profile.c"
{
#line 4458 "profile.c"
  {
#line 4460 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4463 "profile.c"
    {
#line 4465 "profile.c"
      profile____Compare____deep_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4468 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4470 "profile.c"
  }
#line 4472 "profile.c"
}

#line 4475 "profile.c"
static MR_bool MR_CALL 
profile____Unify____deep_compression_flag_0_0_10001(
#line 4478 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4480 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4482 "profile.c"
{
#line 4484 "profile.c"
  {
#line 4486 "profile.c"
    MR_bool profile__succeeded;

#line 4489 "profile.c"
    {
#line 4491 "profile.c"
      profile__succeeded = profile____Unify____deep_compression_flag_0_0();
    }
#line 4494 "profile.c"
    return profile__succeeded;
#line 4496 "profile.c"
  }
#line 4498 "profile.c"
}

#line 4501 "profile.c"
static void MR_CALL 
profile____Compare____deep_compression_flag_0_0_10001(
#line 4504 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4506 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4508 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4510 "profile.c"
{
#line 4512 "profile.c"
  {
#line 4514 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4517 "profile.c"
    {
#line 4519 "profile.c"
      profile____Compare____deep_compression_flag_0_0(&profile__conv0_HeadVar__1_1);
    }
#line 4522 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4524 "profile.c"
  }
#line 4526 "profile.c"
}

#line 4529 "profile.c"
static MR_bool MR_CALL 
profile____Unify____deep_flags_0_0_10001(
#line 4532 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4534 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4536 "profile.c"
{
#line 4538 "profile.c"
  {
#line 4540 "profile.c"
    MR_bool profile__succeeded;

#line 4543 "profile.c"
    {
#line 4545 "profile.c"
      profile__succeeded = profile____Unify____deep_flags_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4548 "profile.c"
    return profile__succeeded;
#line 4550 "profile.c"
  }
#line 4552 "profile.c"
}

#line 4555 "profile.c"
static void MR_CALL 
profile____Compare____deep_flags_0_0_10001(
#line 4558 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4560 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4562 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4564 "profile.c"
{
#line 4566 "profile.c"
  {
#line 4568 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4571 "profile.c"
    {
#line 4573 "profile.c"
      profile____Compare____deep_flags_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4576 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4578 "profile.c"
  }
#line 4580 "profile.c"
}

#line 4583 "profile.c"
static MR_bool MR_CALL 
profile____Unify____initial_deep_0_0_10001(
#line 4586 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4588 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4590 "profile.c"
{
#line 4592 "profile.c"
  {
#line 4594 "profile.c"
    MR_bool profile__succeeded;

#line 4597 "profile.c"
    {
#line 4599 "profile.c"
      profile__succeeded = profile____Unify____initial_deep_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4602 "profile.c"
    return profile__succeeded;
#line 4604 "profile.c"
  }
#line 4606 "profile.c"
}

#line 4609 "profile.c"
static void MR_CALL 
profile____Compare____initial_deep_0_0_10001(
#line 4612 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4614 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4616 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4618 "profile.c"
{
#line 4620 "profile.c"
  {
#line 4622 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4625 "profile.c"
    {
#line 4627 "profile.c"
      profile____Compare____initial_deep_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4630 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4632 "profile.c"
  }
#line 4634 "profile.c"
}

#line 4637 "profile.c"
static MR_bool MR_CALL 
profile____Unify____is_zeroed_0_0_10001(
#line 4640 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4642 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4644 "profile.c"
{
#line 4646 "profile.c"
  {
#line 4648 "profile.c"
    MR_bool profile__succeeded;

#line 4651 "profile.c"
    {
#line 4653 "profile.c"
      profile__succeeded = profile____Unify____is_zeroed_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4656 "profile.c"
    return profile__succeeded;
#line 4658 "profile.c"
  }
#line 4660 "profile.c"
}

#line 4663 "profile.c"
static void MR_CALL 
profile____Compare____is_zeroed_0_0_10001(
#line 4666 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4668 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4670 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4672 "profile.c"
{
#line 4674 "profile.c"
  {
#line 4676 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4679 "profile.c"
    {
#line 4681 "profile.c"
      profile____Compare____is_zeroed_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4684 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4686 "profile.c"
  }
#line 4688 "profile.c"
}

#line 4691 "profile.c"
static MR_bool MR_CALL 
profile____Unify____module_data_0_0_10001(
#line 4694 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4696 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4698 "profile.c"
{
#line 4700 "profile.c"
  {
#line 4702 "profile.c"
    MR_bool profile__succeeded;

#line 4705 "profile.c"
    {
#line 4707 "profile.c"
      profile__succeeded = profile____Unify____module_data_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4710 "profile.c"
    return profile__succeeded;
#line 4712 "profile.c"
  }
#line 4714 "profile.c"
}

#line 4717 "profile.c"
static void MR_CALL 
profile____Compare____module_data_0_0_10001(
#line 4720 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4722 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4724 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4726 "profile.c"
{
#line 4728 "profile.c"
  {
#line 4730 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4733 "profile.c"
    {
#line 4735 "profile.c"
      profile____Compare____module_data_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4738 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4740 "profile.c"
  }
#line 4742 "profile.c"
}

#line 4745 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_dynamic_0_0_10001(
#line 4748 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4750 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4752 "profile.c"
{
#line 4754 "profile.c"
  {
#line 4756 "profile.c"
    MR_bool profile__succeeded;

#line 4759 "profile.c"
    {
#line 4761 "profile.c"
      profile__succeeded = profile____Unify____proc_dynamic_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4764 "profile.c"
    return profile__succeeded;
#line 4766 "profile.c"
  }
#line 4768 "profile.c"
}

#line 4771 "profile.c"
static void MR_CALL 
profile____Compare____proc_dynamic_0_0_10001(
#line 4774 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4776 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4778 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4780 "profile.c"
{
#line 4782 "profile.c"
  {
#line 4784 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4787 "profile.c"
    {
#line 4789 "profile.c"
      profile____Compare____proc_dynamic_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4792 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4794 "profile.c"
  }
#line 4796 "profile.c"
}

#line 4799 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_dynamic_ptr_0_0_10001(
#line 4802 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4804 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4806 "profile.c"
{
#line 4808 "profile.c"
  {
#line 4810 "profile.c"
    MR_bool profile__succeeded;

#line 4813 "profile.c"
    {
#line 4815 "profile.c"
      profile__succeeded = profile____Unify____proc_dynamic_ptr_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4818 "profile.c"
    return profile__succeeded;
#line 4820 "profile.c"
  }
#line 4822 "profile.c"
}

#line 4825 "profile.c"
static void MR_CALL 
profile____Compare____proc_dynamic_ptr_0_0_10001(
#line 4828 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4830 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4832 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4834 "profile.c"
{
#line 4836 "profile.c"
  {
#line 4838 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4841 "profile.c"
    {
#line 4843 "profile.c"
      profile____Compare____proc_dynamic_ptr_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4846 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4848 "profile.c"
  }
#line 4850 "profile.c"
}

#line 4853 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_dynamics_0_0_10001(
#line 4856 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4858 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4860 "profile.c"
{
#line 4862 "profile.c"
  {
#line 4864 "profile.c"
    MR_bool profile__succeeded;

#line 4867 "profile.c"
    {
#line 4869 "profile.c"
      profile__succeeded = profile____Unify____proc_dynamics_0_0(((MR_ArrayPtr) profile__wrapper_arg_1), ((MR_ArrayPtr) profile__wrapper_arg_2));
    }
#line 4872 "profile.c"
    return profile__succeeded;
#line 4874 "profile.c"
  }
#line 4876 "profile.c"
}

#line 4879 "profile.c"
static void MR_CALL 
profile____Compare____proc_dynamics_0_0_10001(
#line 4882 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4884 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4886 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4888 "profile.c"
{
#line 4890 "profile.c"
  {
#line 4892 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4895 "profile.c"
    {
#line 4897 "profile.c"
      profile____Compare____proc_dynamics_0_0(&profile__conv0_HeadVar__1_1, ((MR_ArrayPtr) profile__wrapper_arg_2), ((MR_ArrayPtr) profile__wrapper_arg_3));
    }
#line 4900 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4902 "profile.c"
  }
#line 4904 "profile.c"
}

#line 4907 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_static_0_0_10001(
#line 4910 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4912 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4914 "profile.c"
{
#line 4916 "profile.c"
  {
#line 4918 "profile.c"
    MR_bool profile__succeeded;

#line 4921 "profile.c"
    {
#line 4923 "profile.c"
      profile__succeeded = profile____Unify____proc_static_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4926 "profile.c"
    return profile__succeeded;
#line 4928 "profile.c"
  }
#line 4930 "profile.c"
}

#line 4933 "profile.c"
static void MR_CALL 
profile____Compare____proc_static_0_0_10001(
#line 4936 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4938 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4940 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4942 "profile.c"
{
#line 4944 "profile.c"
  {
#line 4946 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4949 "profile.c"
    {
#line 4951 "profile.c"
      profile____Compare____proc_static_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4954 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4956 "profile.c"
  }
#line 4958 "profile.c"
}

#line 4961 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_static_ptr_0_0_10001(
#line 4964 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4966 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4968 "profile.c"
{
#line 4970 "profile.c"
  {
#line 4972 "profile.c"
    MR_bool profile__succeeded;

#line 4975 "profile.c"
    {
#line 4977 "profile.c"
      profile__succeeded = profile____Unify____proc_static_ptr_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4980 "profile.c"
    return profile__succeeded;
#line 4982 "profile.c"
  }
#line 4984 "profile.c"
}

#line 4987 "profile.c"
static void MR_CALL 
profile____Compare____proc_static_ptr_0_0_10001(
#line 4990 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4992 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4994 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4996 "profile.c"
{
#line 4998 "profile.c"
  {
#line 5000 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 5003 "profile.c"
    {
#line 5005 "profile.c"
      profile____Compare____proc_static_ptr_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 5008 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 5010 "profile.c"
  }
#line 5012 "profile.c"
}

#line 5015 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_statics_0_0_10001(
#line 5018 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 5020 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 5022 "profile.c"
{
#line 5024 "profile.c"
  {
#line 5026 "profile.c"
    MR_bool profile__succeeded;

#line 5029 "profile.c"
    {
#line 5031 "profile.c"
      profile__succeeded = profile____Unify____proc_statics_0_0(((MR_ArrayPtr) profile__wrapper_arg_1), ((MR_ArrayPtr) profile__wrapper_arg_2));
    }
#line 5034 "profile.c"
    return profile__succeeded;
#line 5036 "profile.c"
  }
#line 5038 "profile.c"
}

#line 5041 "profile.c"
static void MR_CALL 
profile____Compare____proc_statics_0_0_10001(
#line 5044 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 5046 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 5048 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 5050 "profile.c"
{
#line 5052 "profile.c"
  {
#line 5054 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 5057 "profile.c"
    {
#line 5059 "profile.c"
      profile____Compare____proc_statics_0_0(&profile__conv0_HeadVar__1_1, ((MR_ArrayPtr) profile__wrapper_arg_2), ((MR_ArrayPtr) profile__wrapper_arg_3));
    }
#line 5062 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 5064 "profile.c"
  }
#line 5066 "profile.c"
}

#line 5069 "profile.c"
static MR_bool MR_CALL 
profile____Unify____profile_stats_0_0_10001(
#line 5072 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 5074 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 5076 "profile.c"
{
#line 5078 "profile.c"
  {
#line 5080 "profile.c"
    MR_bool profile__succeeded;

#line 5083 "profile.c"
    {
#line 5085 "profile.c"
      profile__succeeded = profile____Unify____profile_stats_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 5088 "profile.c"
    return profile__succeeded;
#line 5090 "profile.c"
  }
#line 5092 "profile.c"
}

#line 5095 "profile.c"
static void MR_CALL 
profile____Compare____profile_stats_0_0_10001(
#line 5098 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 5100 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 5102 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 5104 "profile.c"
{
#line 5106 "profile.c"
  {
#line 5108 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 5111 "profile.c"
    {
#line 5113 "profile.c"
      profile____Compare____profile_stats_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 5116 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 5118 "profile.c"
  }
#line 5120 "profile.c"
}

#line 40 "profile.m"
void MR_CALL 
profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_114_111_102_105_108_101_95_95_100_101_101_112_95_99_111_109_112_114_101_115_115_105_111_110_95_102_108_97_103_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 40 "profile.m"
  MR_Word * profile__HeadVar__1_1)
#line 40 "profile.m"
{
#line 40 "profile.m"
  {
#line 40 "profile.m"
    MR_bool profile__succeeded;

#line 40 "profile.m"
    *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "profile.m"
  }
#line 40 "profile.m"
}

#line 40 "profile.m"
MR_bool MR_CALL 
profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_114_111_102_105_108_101_95_95_100_101_101_112_95_99_111_109_112_114_101_115_115_105_111_110_95_102_108_97_103_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 40 "profile.m"
{
#line 40 "profile.m"
  {
#line 40 "profile.m"
    return MR_TRUE;
#line 40 "profile.m"
  }
#line 40 "profile.m"
}

#line 55 "profile.m"
void MR_CALL 
profile____Compare____profile_stats_0_0(
#line 55 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 55 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 55 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 55 "profile.m"
{
#line 55 "profile.m"
  {
#line 55 "profile.m"
    MR_bool profile__succeeded;
#line 55 "profile.m"
    MR_Integer profile__CastX_33 = (MR_Integer) profile__HeadVar__2_2;
#line 55 "profile.m"
    MR_Integer profile__CastY_34 = (MR_Integer) profile__HeadVar__3_3;

#line 55 "profile.m"
    profile__succeeded = (profile__CastX_33 == profile__CastY_34);
#line 55 "profile.m"
    if (profile__succeeded)
#line 5180 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 55 "profile.m"
    else
#line 55 "profile.m"
      {
#line 55 "profile.m"
        MR_String profile__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 55 "profile.m"
        MR_Integer profile__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 55 "profile.m"
        MR_Integer profile__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
#line 55 "profile.m"
        MR_Integer profile__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
#line 55 "profile.m"
        MR_Integer profile__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
#line 55 "profile.m"
        MR_Integer profile__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
#line 55 "profile.m"
        MR_Integer profile__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 6)));
#line 55 "profile.m"
        MR_Integer profile__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 7)));
#line 55 "profile.m"
        MR_Integer profile__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 8)));
#line 55 "profile.m"
        MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 9)));
#line 55 "profile.m"
        MR_String profile__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
#line 55 "profile.m"
        MR_Integer profile__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
#line 55 "profile.m"
        MR_Integer profile__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
#line 55 "profile.m"
        MR_Integer profile__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 3)));
#line 55 "profile.m"
        MR_Integer profile__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 4)));
#line 55 "profile.m"
        MR_Integer profile__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 5)));
#line 55 "profile.m"
        MR_Integer profile__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 6)));
#line 55 "profile.m"
        MR_Integer profile__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 7)));
#line 55 "profile.m"
        MR_Integer profile__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 8)));
#line 55 "profile.m"
        MR_Word profile__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 9)));
#line 55 "profile.m"
        MR_Word profile__V_24_24;

#line 55 "profile.m"
        {
#line 55 "profile.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_24_24, profile__V_4_4, profile__V_14_14);
        }
#line 5234 "profile.c"
        profile__succeeded = (profile__V_24_24 == (MR_Integer) 0);
#line 55 "profile.m"
        profile__succeeded = !(profile__succeeded);
#line 55 "profile.m"
        if (profile__succeeded)
#line 55 "profile.m"
          *profile__HeadVar__1_1 = profile__V_24_24;
#line 55 "profile.m"
        else
#line 55 "profile.m"
          {
#line 55 "profile.m"
            MR_Word profile__V_25_25;

#line 55 "profile.m"
            {
#line 55 "profile.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_25_25, profile__V_5_5, profile__V_15_15);
            }
#line 5254 "profile.c"
            profile__succeeded = (profile__V_25_25 == (MR_Integer) 0);
#line 55 "profile.m"
            profile__succeeded = !(profile__succeeded);
#line 55 "profile.m"
            if (profile__succeeded)
#line 55 "profile.m"
              *profile__HeadVar__1_1 = profile__V_25_25;
#line 55 "profile.m"
            else
#line 55 "profile.m"
              {
#line 55 "profile.m"
                MR_Word profile__V_26_26;

#line 55 "profile.m"
                {
#line 55 "profile.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_26_26, profile__V_6_6, profile__V_16_16);
                }
#line 5274 "profile.c"
                profile__succeeded = (profile__V_26_26 == (MR_Integer) 0);
#line 55 "profile.m"
                profile__succeeded = !(profile__succeeded);
#line 55 "profile.m"
                if (profile__succeeded)
#line 55 "profile.m"
                  *profile__HeadVar__1_1 = profile__V_26_26;
#line 55 "profile.m"
                else
#line 55 "profile.m"
                  {
#line 55 "profile.m"
                    MR_Word profile__V_27_27;

#line 55 "profile.m"
                    {
#line 55 "profile.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_27_27, profile__V_7_7, profile__V_17_17);
                    }
#line 5294 "profile.c"
                    profile__succeeded = (profile__V_27_27 == (MR_Integer) 0);
#line 55 "profile.m"
                    profile__succeeded = !(profile__succeeded);
#line 55 "profile.m"
                    if (profile__succeeded)
#line 55 "profile.m"
                      *profile__HeadVar__1_1 = profile__V_27_27;
#line 55 "profile.m"
                    else
#line 55 "profile.m"
                      {
#line 55 "profile.m"
                        MR_Word profile__V_28_28;

#line 55 "profile.m"
                        {
#line 55 "profile.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_28_28, profile__V_8_8, profile__V_18_18);
                        }
#line 5314 "profile.c"
                        profile__succeeded = (profile__V_28_28 == (MR_Integer) 0);
#line 55 "profile.m"
                        profile__succeeded = !(profile__succeeded);
#line 55 "profile.m"
                        if (profile__succeeded)
#line 55 "profile.m"
                          *profile__HeadVar__1_1 = profile__V_28_28;
#line 55 "profile.m"
                        else
#line 55 "profile.m"
                          {
#line 55 "profile.m"
                            MR_Word profile__V_29_29;

#line 55 "profile.m"
                            {
#line 55 "profile.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_29_29, profile__V_9_9, profile__V_19_19);
                            }
#line 5334 "profile.c"
                            profile__succeeded = (profile__V_29_29 == (MR_Integer) 0);
#line 55 "profile.m"
                            profile__succeeded = !(profile__succeeded);
#line 55 "profile.m"
                            if (profile__succeeded)
#line 55 "profile.m"
                              *profile__HeadVar__1_1 = profile__V_29_29;
#line 55 "profile.m"
                            else
#line 55 "profile.m"
                              {
#line 55 "profile.m"
                                MR_Word profile__V_30_30;

#line 55 "profile.m"
                                {
#line 55 "profile.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_30_30, profile__V_10_10, profile__V_20_20);
                                }
#line 5354 "profile.c"
                                profile__succeeded = (profile__V_30_30 == (MR_Integer) 0);
#line 55 "profile.m"
                                profile__succeeded = !(profile__succeeded);
#line 55 "profile.m"
                                if (profile__succeeded)
#line 55 "profile.m"
                                  *profile__HeadVar__1_1 = profile__V_30_30;
#line 55 "profile.m"
                                else
#line 55 "profile.m"
                                  {
#line 55 "profile.m"
                                    MR_Word profile__V_31_31;

#line 55 "profile.m"
                                    {
#line 55 "profile.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_31_31, profile__V_11_11, profile__V_21_21);
                                    }
#line 5374 "profile.c"
                                    profile__succeeded = (profile__V_31_31 == (MR_Integer) 0);
#line 55 "profile.m"
                                    profile__succeeded = !(profile__succeeded);
#line 55 "profile.m"
                                    if (profile__succeeded)
#line 55 "profile.m"
                                      *profile__HeadVar__1_1 = profile__V_31_31;
#line 55 "profile.m"
                                    else
#line 55 "profile.m"
                                      {
#line 55 "profile.m"
                                        MR_Word profile__V_32_32;

#line 55 "profile.m"
                                        {
#line 55 "profile.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_32_32, profile__V_12_12, profile__V_22_22);
                                        }
#line 5394 "profile.c"
                                        profile__succeeded = (profile__V_32_32 == (MR_Integer) 0);
#line 55 "profile.m"
                                        profile__succeeded = !(profile__succeeded);
#line 55 "profile.m"
                                        if (profile__succeeded)
#line 55 "profile.m"
                                          *profile__HeadVar__1_1 = profile__V_32_32;
#line 55 "profile.m"
                                        else
#line 55 "profile.m"
                                          {
#line 55 "profile.m"
                                            profile____Compare____deep_flags_0_0(profile__HeadVar__1_1, profile__V_13_13, profile__V_23_23);
#line 55 "profile.m"
                                            return;
                                          }
#line 55 "profile.m"
                                      }
#line 55 "profile.m"
                                  }
#line 55 "profile.m"
                              }
#line 55 "profile.m"
                          }
#line 55 "profile.m"
                      }
#line 55 "profile.m"
                  }
#line 55 "profile.m"
              }
#line 55 "profile.m"
          }
#line 55 "profile.m"
      }
#line 55 "profile.m"
  }
#line 55 "profile.m"
}

#line 55 "profile.m"
MR_bool MR_CALL 
profile____Unify____profile_stats_0_0(
#line 55 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 55 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 55 "profile.m"
{
#line 55 "profile.m"
  {
#line 55 "profile.m"
    MR_bool profile__succeeded;
#line 55 "profile.m"
    MR_Integer profile__CastX_23 = (MR_Integer) profile__HeadVar__1_1;
#line 55 "profile.m"
    MR_Integer profile__CastY_24 = (MR_Integer) profile__HeadVar__2_2;

#line 55 "profile.m"
    profile__succeeded = (profile__CastX_23 == profile__CastY_24);
#line 55 "profile.m"
    if (profile__succeeded)
#line 55 "profile.m"
      profile__succeeded = MR_TRUE;
#line 55 "profile.m"
    else
#line 55 "profile.m"
      {
#line 55 "profile.m"
        MR_String profile__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
#line 55 "profile.m"
        MR_Integer profile__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
#line 55 "profile.m"
        MR_Integer profile__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
#line 55 "profile.m"
        MR_Integer profile__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 3)));
#line 55 "profile.m"
        MR_Integer profile__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 4)));
#line 55 "profile.m"
        MR_Integer profile__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 5)));
#line 55 "profile.m"
        MR_Integer profile__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 6)));
#line 55 "profile.m"
        MR_Integer profile__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 7)));
#line 55 "profile.m"
        MR_Integer profile__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 8)));
#line 55 "profile.m"
        MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 9)));
#line 55 "profile.m"
        MR_String profile__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 55 "profile.m"
        MR_Integer profile__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 55 "profile.m"
        MR_Integer profile__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
#line 55 "profile.m"
        MR_Integer profile__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
#line 55 "profile.m"
        MR_Integer profile__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
#line 55 "profile.m"
        MR_Integer profile__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
#line 55 "profile.m"
        MR_Integer profile__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 6)));
#line 55 "profile.m"
        MR_Integer profile__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 7)));
#line 55 "profile.m"
        MR_Integer profile__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 8)));
#line 55 "profile.m"
        MR_Word profile__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 9)));

#line 5503 "profile.c"
        profile__succeeded = (strcmp(profile__V_3_3, profile__V_13_13) == 0);
#line 55 "profile.m"
        if (profile__succeeded)
#line 55 "profile.m"
          {
#line 5509 "profile.c"
            profile__succeeded = (profile__V_4_4 == profile__V_14_14);
#line 55 "profile.m"
            if (profile__succeeded)
#line 55 "profile.m"
              {
#line 5515 "profile.c"
                profile__succeeded = (profile__V_5_5 == profile__V_15_15);
#line 55 "profile.m"
                if (profile__succeeded)
#line 55 "profile.m"
                  {
#line 5521 "profile.c"
                    profile__succeeded = (profile__V_6_6 == profile__V_16_16);
#line 55 "profile.m"
                    if (profile__succeeded)
#line 55 "profile.m"
                      {
#line 5527 "profile.c"
                        profile__succeeded = (profile__V_7_7 == profile__V_17_17);
#line 55 "profile.m"
                        if (profile__succeeded)
#line 55 "profile.m"
                          {
#line 5533 "profile.c"
                            profile__succeeded = (profile__V_8_8 == profile__V_18_18);
#line 55 "profile.m"
                            if (profile__succeeded)
#line 55 "profile.m"
                              {
#line 5539 "profile.c"
                                profile__succeeded = (profile__V_9_9 == profile__V_19_19);
#line 55 "profile.m"
                                if (profile__succeeded)
#line 55 "profile.m"
                                  {
#line 5545 "profile.c"
                                    profile__succeeded = (profile__V_10_10 == profile__V_20_20);
#line 55 "profile.m"
                                    if (profile__succeeded)
#line 55 "profile.m"
                                      {
#line 5551 "profile.c"
                                        profile__succeeded = (profile__V_11_11 == profile__V_21_21);
#line 55 "profile.m"
                                        if (profile__succeeded)
#line 5555 "profile.c"
                                          {
#line 5557 "profile.c"
                                            return profile__succeeded = profile____Unify____deep_flags_0_0(profile__V_12_12, profile__V_22_22);
                                          }
#line 55 "profile.m"
                                      }
#line 55 "profile.m"
                                  }
#line 55 "profile.m"
                              }
#line 55 "profile.m"
                          }
#line 55 "profile.m"
                      }
#line 55 "profile.m"
                  }
#line 55 "profile.m"
              }
#line 55 "profile.m"
          }
#line 55 "profile.m"
      }
#line 55 "profile.m"
    return profile__succeeded;
#line 55 "profile.m"
  }
#line 55 "profile.m"
}

#line 171 "profile.m"
void MR_CALL 
profile____Compare____proc_statics_0_0(
#line 171 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 171 "profile.m"
  MR_ArrayPtr profile__HeadVar__2_2,
#line 171 "profile.m"
  MR_ArrayPtr profile__HeadVar__3_3)
#line 171 "profile.m"
{
#line 171 "profile.m"
  {
#line 171 "profile.m"
    MR_bool profile__succeeded;
#line 171 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar1_4 = profile__HeadVar__2_2;
#line 171 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar2_5 = profile__HeadVar__3_3;

#line 171 "profile.m"
    {
#line 171 "profile.m"
      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[12], profile__HeadVar__1_1, ((MR_Box) (profile__Cast_HeadVar1_4)), ((MR_Box) (profile__Cast_HeadVar2_5)));
#line 171 "profile.m"
      return;
    }
#line 171 "profile.m"
  }
#line 171 "profile.m"
}

#line 171 "profile.m"
MR_bool MR_CALL 
profile____Unify____proc_statics_0_0(
#line 171 "profile.m"
  MR_ArrayPtr profile__HeadVar__1_1,
#line 171 "profile.m"
  MR_ArrayPtr profile__HeadVar__2_2)
#line 171 "profile.m"
{
#line 171 "profile.m"
  {
#line 171 "profile.m"
    MR_bool profile__succeeded;
#line 171 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar1_3 = profile__HeadVar__1_1;
#line 171 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar2_4 = profile__HeadVar__2_2;

#line 171 "profile.m"
    {
#line 171 "profile.m"
      return profile__succeeded = mercury__array____Unify____array_1_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_ArrayPtr) profile__Cast_HeadVar1_3, (MR_ArrayPtr) profile__Cast_HeadVar2_4);
    }
#line 171 "profile.m"
    return profile__succeeded;
#line 171 "profile.m"
  }
#line 171 "profile.m"
}

#line 179 "profile.m"
void MR_CALL 
profile____Compare____proc_static_ptr_0_0(
#line 179 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 179 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 179 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 179 "profile.m"
{
#line 179 "profile.m"
  {
#line 179 "profile.m"
    MR_bool profile__succeeded;
#line 179 "profile.m"
    MR_Integer profile__CastX_6 = (MR_Integer) profile__HeadVar__2_2;
#line 179 "profile.m"
    MR_Integer profile__CastY_7 = (MR_Integer) profile__HeadVar__3_3;

#line 179 "profile.m"
    profile__succeeded = (profile__CastX_6 == profile__CastY_7);
#line 179 "profile.m"
    if (profile__succeeded)
#line 5671 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 179 "profile.m"
    else
#line 179 "profile.m"
      {
#line 179 "profile.m"
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;
#line 179 "profile.m"
        MR_Integer profile__V_5_5 = (MR_Integer) profile__HeadVar__3_3;

#line 179 "profile.m"
        {
#line 179 "profile.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_4_4, profile__V_5_5);
#line 179 "profile.m"
          return;
        }
#line 179 "profile.m"
      }
#line 179 "profile.m"
  }
#line 179 "profile.m"
}

#line 179 "profile.m"
MR_bool MR_CALL 
profile____Unify____proc_static_ptr_0_0(
#line 179 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 179 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 179 "profile.m"
{
#line 179 "profile.m"
  {
#line 179 "profile.m"
    MR_bool profile__succeeded;
#line 179 "profile.m"
    MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
#line 179 "profile.m"
    MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

#line 179 "profile.m"
    profile__succeeded = (profile__CastX_5 == profile__CastY_6);
#line 179 "profile.m"
    if (profile__succeeded)
#line 179 "profile.m"
      profile__succeeded = MR_TRUE;
#line 179 "profile.m"
    else
#line 179 "profile.m"
      {
#line 179 "profile.m"
        MR_Integer profile__V_3_3 = (MR_Integer) profile__HeadVar__1_1;
#line 179 "profile.m"
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;

#line 5729 "profile.c"
        profile__succeeded = (profile__V_3_3 == profile__V_4_4);
#line 179 "profile.m"
      }
#line 179 "profile.m"
    return profile__succeeded;
#line 179 "profile.m"
  }
#line 179 "profile.m"
}

#line 205 "profile.m"
void MR_CALL 
profile____Compare____proc_static_0_0(
#line 205 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 205 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 205 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 205 "profile.m"
{
#line 205 "profile.m"
  {
#line 205 "profile.m"
    MR_bool profile__succeeded;
#line 205 "profile.m"
    MR_Integer profile__CastX_39 = (MR_Integer) profile__HeadVar__2_2;
#line 205 "profile.m"
    MR_Integer profile__CastY_40 = (MR_Integer) profile__HeadVar__3_3;

#line 205 "profile.m"
    profile__succeeded = (profile__CastX_39 == profile__CastY_40);
#line 205 "profile.m"
    if (profile__succeeded)
#line 5764 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "profile.m"
    else
#line 205 "profile.m"
      {
#line 205 "profile.m"
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 205 "profile.m"
        MR_String profile__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "profile.m"
        MR_String profile__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "profile.m"
        MR_String profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
#line 205 "profile.m"
        MR_String profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
#line 205 "profile.m"
        MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
#line 205 "profile.m"
        MR_Integer profile__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 6)));
#line 205 "profile.m"
        MR_Word profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 7)));
#line 205 "profile.m"
        MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 8)));
#line 205 "profile.m"
        MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 9)));
#line 205 "profile.m"
        MR_Word profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 10)));
#line 205 "profile.m"
        MR_Word profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 11)));
#line 205 "profile.m"
        MR_Word profile__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
#line 205 "profile.m"
        MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "profile.m"
        MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
#line 205 "profile.m"
        MR_String profile__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 3)));
#line 205 "profile.m"
        MR_String profile__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 4)));
#line 205 "profile.m"
        MR_String profile__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 5)));
#line 205 "profile.m"
        MR_Integer profile__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 6)));
#line 205 "profile.m"
        MR_Word profile__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 7)));
#line 205 "profile.m"
        MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 8)));
#line 205 "profile.m"
        MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 9)));
#line 205 "profile.m"
        MR_Word profile__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 10)));
#line 205 "profile.m"
        MR_Word profile__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 11)));
#line 205 "profile.m"
        MR_Word profile__V_28_28;

#line 205 "profile.m"
        {
#line 205 "profile.m"
          mdbcomp__program_representation____Compare____string_proc_label_0_0(&profile__V_28_28, profile__V_4_4, profile__V_16_16);
        }
#line 5826 "profile.c"
        profile__succeeded = (profile__V_28_28 == (MR_Integer) 0);
#line 205 "profile.m"
        profile__succeeded = !(profile__succeeded);
#line 205 "profile.m"
        if (profile__succeeded)
#line 205 "profile.m"
          *profile__HeadVar__1_1 = profile__V_28_28;
#line 205 "profile.m"
        else
#line 205 "profile.m"
          {
#line 205 "profile.m"
            MR_Word profile__V_29_29;

#line 205 "profile.m"
            {
#line 205 "profile.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_29_29, profile__V_5_5, profile__V_17_17);
            }
#line 5846 "profile.c"
            profile__succeeded = (profile__V_29_29 == (MR_Integer) 0);
#line 205 "profile.m"
            profile__succeeded = !(profile__succeeded);
#line 205 "profile.m"
            if (profile__succeeded)
#line 205 "profile.m"
              *profile__HeadVar__1_1 = profile__V_29_29;
#line 205 "profile.m"
            else
#line 205 "profile.m"
              {
#line 205 "profile.m"
                MR_Word profile__V_30_30;

#line 205 "profile.m"
                {
#line 205 "profile.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_30_30, profile__V_6_6, profile__V_18_18);
                }
#line 5866 "profile.c"
                profile__succeeded = (profile__V_30_30 == (MR_Integer) 0);
#line 205 "profile.m"
                profile__succeeded = !(profile__succeeded);
#line 205 "profile.m"
                if (profile__succeeded)
#line 205 "profile.m"
                  *profile__HeadVar__1_1 = profile__V_30_30;
#line 205 "profile.m"
                else
#line 205 "profile.m"
                  {
#line 205 "profile.m"
                    MR_Word profile__V_31_31;

#line 205 "profile.m"
                    {
#line 205 "profile.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_31_31, profile__V_7_7, profile__V_19_19);
                    }
#line 5886 "profile.c"
                    profile__succeeded = (profile__V_31_31 == (MR_Integer) 0);
#line 205 "profile.m"
                    profile__succeeded = !(profile__succeeded);
#line 205 "profile.m"
                    if (profile__succeeded)
#line 205 "profile.m"
                      *profile__HeadVar__1_1 = profile__V_31_31;
#line 205 "profile.m"
                    else
#line 205 "profile.m"
                      {
#line 205 "profile.m"
                        MR_Word profile__V_32_32;

#line 205 "profile.m"
                        {
#line 205 "profile.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_32_32, profile__V_8_8, profile__V_20_20);
                        }
#line 5906 "profile.c"
                        profile__succeeded = (profile__V_32_32 == (MR_Integer) 0);
#line 205 "profile.m"
                        profile__succeeded = !(profile__succeeded);
#line 205 "profile.m"
                        if (profile__succeeded)
#line 205 "profile.m"
                          *profile__HeadVar__1_1 = profile__V_32_32;
#line 205 "profile.m"
                        else
#line 205 "profile.m"
                          {
#line 205 "profile.m"
                            MR_Word profile__V_33_33;

#line 205 "profile.m"
                            {
#line 205 "profile.m"
                              mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_33_33, profile__V_9_9, profile__V_21_21);
                            }
#line 5926 "profile.c"
                            profile__succeeded = (profile__V_33_33 == (MR_Integer) 0);
#line 205 "profile.m"
                            profile__succeeded = !(profile__succeeded);
#line 205 "profile.m"
                            if (profile__succeeded)
#line 205 "profile.m"
                              *profile__HeadVar__1_1 = profile__V_33_33;
#line 205 "profile.m"
                            else
#line 205 "profile.m"
                              {
#line 205 "profile.m"
                                MR_Word profile__V_34_34;

#line 205 "profile.m"
                                {
#line 205 "profile.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_34_34, profile__V_10_10, profile__V_22_22);
                                }
#line 5946 "profile.c"
                                profile__succeeded = (profile__V_34_34 == (MR_Integer) 0);
#line 205 "profile.m"
                                profile__succeeded = !(profile__succeeded);
#line 205 "profile.m"
                                if (profile__succeeded)
#line 205 "profile.m"
                                  *profile__HeadVar__1_1 = profile__V_34_34;
#line 205 "profile.m"
                                else
#line 205 "profile.m"
                                  {
#line 205 "profile.m"
                                    MR_Word profile__V_35_35;
#line 205 "profile.m"
                                    MR_Integer profile__V_53_53 = (MR_Integer) profile__V_11_11;
#line 205 "profile.m"
                                    MR_Integer profile__V_54_54 = (MR_Integer) profile__V_23_23;

#line 205 "profile.m"
                                    {
#line 205 "profile.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_35_35, profile__V_53_53, profile__V_54_54);
                                    }
#line 5970 "profile.c"
                                    profile__succeeded = (profile__V_35_35 == (MR_Integer) 0);
#line 205 "profile.m"
                                    profile__succeeded = !(profile__succeeded);
#line 205 "profile.m"
                                    if (profile__succeeded)
#line 205 "profile.m"
                                      *profile__HeadVar__1_1 = profile__V_35_35;
#line 205 "profile.m"
                                    else
#line 205 "profile.m"
                                      {
#line 205 "profile.m"
                                        MR_Word profile__V_36_36;

#line 205 "profile.m"
                                        {
#line 205 "profile.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[9], &profile__V_36_36, ((MR_Box) (profile__V_12_12)), ((MR_Box) (profile__V_24_24)));
                                        }
#line 5990 "profile.c"
                                        profile__succeeded = (profile__V_36_36 == (MR_Integer) 0);
#line 205 "profile.m"
                                        profile__succeeded = !(profile__succeeded);
#line 205 "profile.m"
                                        if (profile__succeeded)
#line 205 "profile.m"
                                          *profile__HeadVar__1_1 = profile__V_36_36;
#line 205 "profile.m"
                                        else
#line 205 "profile.m"
                                          {
#line 205 "profile.m"
                                            MR_Word profile__V_37_37;

#line 205 "profile.m"
                                            {
#line 205 "profile.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[26], &profile__V_37_37, ((MR_Box) (profile__V_13_13)), ((MR_Box) (profile__V_25_25)));
                                            }
#line 6010 "profile.c"
                                            profile__succeeded = (profile__V_37_37 == (MR_Integer) 0);
#line 205 "profile.m"
                                            profile__succeeded = !(profile__succeeded);
#line 205 "profile.m"
                                            if (profile__succeeded)
#line 205 "profile.m"
                                              *profile__HeadVar__1_1 = profile__V_37_37;
#line 205 "profile.m"
                                            else
#line 205 "profile.m"
                                              {
#line 205 "profile.m"
                                                MR_Word profile__V_38_38;

#line 205 "profile.m"
                                                {
#line 205 "profile.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[25], &profile__V_38_38, ((MR_Box) (profile__V_14_14)), ((MR_Box) (profile__V_26_26)));
                                                }
#line 6030 "profile.c"
                                                profile__succeeded = (profile__V_38_38 == (MR_Integer) 0);
#line 205 "profile.m"
                                                profile__succeeded = !(profile__succeeded);
#line 205 "profile.m"
                                                if (profile__succeeded)
#line 205 "profile.m"
                                                  *profile__HeadVar__1_1 = profile__V_38_38;
#line 205 "profile.m"
                                                else
#line 205 "profile.m"
                                                  {
#line 205 "profile.m"
                                                    MR_Integer profile__V_55_55 = (MR_Integer) profile__V_15_15;
#line 205 "profile.m"
                                                    MR_Integer profile__V_56_56 = (MR_Integer) profile__V_27_27;

#line 205 "profile.m"
                                                    {
#line 205 "profile.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_55_55, profile__V_56_56);
#line 205 "profile.m"
                                                      return;
                                                    }
#line 205 "profile.m"
                                                  }
#line 205 "profile.m"
                                              }
#line 205 "profile.m"
                                          }
#line 205 "profile.m"
                                      }
#line 205 "profile.m"
                                  }
#line 205 "profile.m"
                              }
#line 205 "profile.m"
                          }
#line 205 "profile.m"
                      }
#line 205 "profile.m"
                  }
#line 205 "profile.m"
              }
#line 205 "profile.m"
          }
#line 205 "profile.m"
      }
#line 205 "profile.m"
  }
#line 205 "profile.m"
}

#line 205 "profile.m"
MR_bool MR_CALL 
profile____Unify____proc_static_0_0(
#line 205 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 205 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 205 "profile.m"
{
#line 205 "profile.m"
  {
#line 205 "profile.m"
    MR_bool profile__succeeded;
#line 205 "profile.m"
    MR_Integer profile__CastX_27 = (MR_Integer) profile__HeadVar__1_1;
#line 205 "profile.m"
    MR_Integer profile__CastY_28 = (MR_Integer) profile__HeadVar__2_2;

#line 205 "profile.m"
    profile__succeeded = (profile__CastX_27 == profile__CastY_28);
#line 205 "profile.m"
    if (profile__succeeded)
#line 205 "profile.m"
      profile__succeeded = MR_TRUE;
#line 205 "profile.m"
    else
#line 205 "profile.m"
      {
#line 205 "profile.m"
        MR_Word profile__TypeCtorInfo_30_30;
#line 205 "profile.m"
        MR_Word profile__TypeCtorInfo_31_31;
#line 205 "profile.m"
        MR_Word profile__TypeInfo_32_32;
#line 205 "profile.m"
        MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
#line 205 "profile.m"
        MR_String profile__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "profile.m"
        MR_String profile__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
#line 205 "profile.m"
        MR_String profile__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 3)));
#line 205 "profile.m"
        MR_String profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 4)));
#line 205 "profile.m"
        MR_String profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 5)));
#line 205 "profile.m"
        MR_Integer profile__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 6)));
#line 205 "profile.m"
        MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 7)));
#line 205 "profile.m"
        MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 8)));
#line 205 "profile.m"
        MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 9)));
#line 205 "profile.m"
        MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 10)));
#line 205 "profile.m"
        MR_Word profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 11)));
#line 205 "profile.m"
        MR_Word profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 205 "profile.m"
        MR_String profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "profile.m"
        MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "profile.m"
        MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
#line 205 "profile.m"
        MR_String profile__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
#line 205 "profile.m"
        MR_String profile__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
#line 205 "profile.m"
        MR_Integer profile__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 6)));
#line 205 "profile.m"
        MR_Word profile__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 7)));
#line 205 "profile.m"
        MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 8)));
#line 205 "profile.m"
        MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 9)));
#line 205 "profile.m"
        MR_Word profile__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 10)));
#line 205 "profile.m"
        MR_Word profile__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 11)));

#line 6166 "profile.c"
        {
#line 6168 "profile.c"
          profile__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(profile__V_3_3, profile__V_15_15);
        }
#line 205 "profile.m"
        if (profile__succeeded)
#line 205 "profile.m"
          {
#line 6175 "profile.c"
            profile__succeeded = (strcmp(profile__V_4_4, profile__V_16_16) == 0);
#line 205 "profile.m"
            if (profile__succeeded)
#line 205 "profile.m"
              {
#line 6181 "profile.c"
                profile__succeeded = (strcmp(profile__V_5_5, profile__V_17_17) == 0);
#line 205 "profile.m"
                if (profile__succeeded)
#line 205 "profile.m"
                  {
#line 6187 "profile.c"
                    profile__succeeded = (strcmp(profile__V_6_6, profile__V_18_18) == 0);
#line 205 "profile.m"
                    if (profile__succeeded)
#line 205 "profile.m"
                      {
#line 6193 "profile.c"
                        profile__succeeded = (strcmp(profile__V_7_7, profile__V_19_19) == 0);
#line 205 "profile.m"
                        if (profile__succeeded)
#line 205 "profile.m"
                          {
#line 6199 "profile.c"
                            profile__succeeded = (strcmp(profile__V_8_8, profile__V_20_20) == 0);
#line 205 "profile.m"
                            if (profile__succeeded)
#line 205 "profile.m"
                              {
#line 6205 "profile.c"
                                profile__succeeded = (profile__V_9_9 == profile__V_21_21);
#line 205 "profile.m"
                                if (profile__succeeded)
#line 205 "profile.m"
                                  {
#line 6211 "profile.c"
                                    profile__succeeded = (profile__V_10_10 == profile__V_22_22);
#line 205 "profile.m"
                                    if (profile__succeeded)
#line 205 "profile.m"
                                      {
#line 6217 "profile.c"
                                        profile__TypeCtorInfo_30_30 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
#line 6219 "profile.c"
                                        {
#line 6221 "profile.c"
                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_30_30, (MR_ArrayPtr) profile__V_11_11, (MR_ArrayPtr) profile__V_23_23);
                                        }
#line 205 "profile.m"
                                        if (profile__succeeded)
#line 205 "profile.m"
                                          {
#line 6228 "profile.c"
                                            profile__TypeCtorInfo_31_31 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;
#line 6230 "profile.c"
                                            {
#line 6232 "profile.c"
                                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_31_31, (MR_ArrayPtr) profile__V_12_12, (MR_ArrayPtr) profile__V_24_24);
                                            }
#line 205 "profile.m"
                                            if (profile__succeeded)
#line 205 "profile.m"
                                              {
#line 6239 "profile.c"
                                                profile__TypeInfo_32_32 = (MR_Word) &profile_scalar_common_1[25];
#line 6241 "profile.c"
                                                {
#line 6243 "profile.c"
                                                  profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_32_32, ((MR_Box) (profile__V_13_13)), ((MR_Box) (profile__V_25_25)));
                                                }
#line 205 "profile.m"
                                                if (profile__succeeded)
#line 6248 "profile.c"
                                                  profile__succeeded = (profile__V_14_14 == profile__V_26_26);
#line 205 "profile.m"
                                              }
#line 205 "profile.m"
                                          }
#line 205 "profile.m"
                                      }
#line 205 "profile.m"
                                  }
#line 205 "profile.m"
                              }
#line 205 "profile.m"
                          }
#line 205 "profile.m"
                      }
#line 205 "profile.m"
                  }
#line 205 "profile.m"
              }
#line 205 "profile.m"
          }
#line 205 "profile.m"
      }
#line 205 "profile.m"
    return profile__succeeded;
#line 205 "profile.m"
  }
#line 205 "profile.m"
}

#line 170 "profile.m"
void MR_CALL 
profile____Compare____proc_dynamics_0_0(
#line 170 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 170 "profile.m"
  MR_ArrayPtr profile__HeadVar__2_2,
#line 170 "profile.m"
  MR_ArrayPtr profile__HeadVar__3_3)
#line 170 "profile.m"
{
#line 170 "profile.m"
  {
#line 170 "profile.m"
    MR_bool profile__succeeded;
#line 170 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar1_4 = profile__HeadVar__2_2;
#line 170 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar2_5 = profile__HeadVar__3_3;

#line 170 "profile.m"
    {
#line 170 "profile.m"
      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[11], profile__HeadVar__1_1, ((MR_Box) (profile__Cast_HeadVar1_4)), ((MR_Box) (profile__Cast_HeadVar2_5)));
#line 170 "profile.m"
      return;
    }
#line 170 "profile.m"
  }
#line 170 "profile.m"
}

#line 170 "profile.m"
MR_bool MR_CALL 
profile____Unify____proc_dynamics_0_0(
#line 170 "profile.m"
  MR_ArrayPtr profile__HeadVar__1_1,
#line 170 "profile.m"
  MR_ArrayPtr profile__HeadVar__2_2)
#line 170 "profile.m"
{
#line 170 "profile.m"
  {
#line 170 "profile.m"
    MR_bool profile__succeeded;
#line 170 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar1_3 = profile__HeadVar__1_1;
#line 170 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar2_4 = profile__HeadVar__2_2;

#line 170 "profile.m"
    {
#line 170 "profile.m"
      return profile__succeeded = mercury__array____Unify____array_1_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) profile__Cast_HeadVar1_3, (MR_ArrayPtr) profile__Cast_HeadVar2_4);
    }
#line 170 "profile.m"
    return profile__succeeded;
#line 170 "profile.m"
  }
#line 170 "profile.m"
}

#line 176 "profile.m"
void MR_CALL 
profile____Compare____proc_dynamic_ptr_0_0(
#line 176 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 176 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 176 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 176 "profile.m"
{
#line 176 "profile.m"
  {
#line 176 "profile.m"
    MR_bool profile__succeeded;
#line 176 "profile.m"
    MR_Integer profile__CastX_6 = (MR_Integer) profile__HeadVar__2_2;
#line 176 "profile.m"
    MR_Integer profile__CastY_7 = (MR_Integer) profile__HeadVar__3_3;

#line 176 "profile.m"
    profile__succeeded = (profile__CastX_6 == profile__CastY_7);
#line 176 "profile.m"
    if (profile__succeeded)
#line 6365 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 176 "profile.m"
    else
#line 176 "profile.m"
      {
#line 176 "profile.m"
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;
#line 176 "profile.m"
        MR_Integer profile__V_5_5 = (MR_Integer) profile__HeadVar__3_3;

#line 176 "profile.m"
        {
#line 176 "profile.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_4_4, profile__V_5_5);
#line 176 "profile.m"
          return;
        }
#line 176 "profile.m"
      }
#line 176 "profile.m"
  }
#line 176 "profile.m"
}

#line 176 "profile.m"
MR_bool MR_CALL 
profile____Unify____proc_dynamic_ptr_0_0(
#line 176 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 176 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 176 "profile.m"
{
#line 176 "profile.m"
  {
#line 176 "profile.m"
    MR_bool profile__succeeded;
#line 176 "profile.m"
    MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
#line 176 "profile.m"
    MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

#line 176 "profile.m"
    profile__succeeded = (profile__CastX_5 == profile__CastY_6);
#line 176 "profile.m"
    if (profile__succeeded)
#line 176 "profile.m"
      profile__succeeded = MR_TRUE;
#line 176 "profile.m"
    else
#line 176 "profile.m"
      {
#line 176 "profile.m"
        MR_Integer profile__V_3_3 = (MR_Integer) profile__HeadVar__1_1;
#line 176 "profile.m"
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;

#line 6423 "profile.c"
        profile__succeeded = (profile__V_3_3 == profile__V_4_4);
#line 176 "profile.m"
      }
#line 176 "profile.m"
    return profile__succeeded;
#line 176 "profile.m"
  }
#line 176 "profile.m"
}

#line 193 "profile.m"
void MR_CALL 
profile____Compare____proc_dynamic_0_0(
#line 193 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 193 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 193 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 193 "profile.m"
{
#line 193 "profile.m"
  {
#line 193 "profile.m"
    MR_bool profile__succeeded;
#line 193 "profile.m"
    MR_Integer profile__CastX_12 = (MR_Integer) profile__HeadVar__2_2;
#line 193 "profile.m"
    MR_Integer profile__CastY_13 = (MR_Integer) profile__HeadVar__3_3;

#line 193 "profile.m"
    profile__succeeded = (profile__CastX_12 == profile__CastY_13);
#line 193 "profile.m"
    if (profile__succeeded)
#line 6458 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 193 "profile.m"
    else
#line 193 "profile.m"
      {
#line 193 "profile.m"
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 193 "profile.m"
        MR_ArrayPtr profile__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 193 "profile.m"
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
#line 193 "profile.m"
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
#line 193 "profile.m"
        MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
#line 193 "profile.m"
        MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
#line 193 "profile.m"
        MR_Word profile__V_10_10;
#line 193 "profile.m"
        MR_Integer profile__V_17_17 = (MR_Integer) profile__V_4_4;
#line 193 "profile.m"
        MR_Integer profile__V_18_18 = (MR_Integer) profile__V_7_7;

#line 193 "profile.m"
        {
#line 193 "profile.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_10_10, profile__V_17_17, profile__V_18_18);
        }
#line 6488 "profile.c"
        profile__succeeded = (profile__V_10_10 == (MR_Integer) 0);
#line 193 "profile.m"
        profile__succeeded = !(profile__succeeded);
#line 193 "profile.m"
        if (profile__succeeded)
#line 193 "profile.m"
          *profile__HeadVar__1_1 = profile__V_10_10;
#line 193 "profile.m"
        else
#line 193 "profile.m"
          {
#line 193 "profile.m"
            MR_Word profile__V_11_11;

#line 193 "profile.m"
            {
#line 193 "profile.m"
              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[23], &profile__V_11_11, ((MR_Box) (profile__V_5_5)), ((MR_Box) (profile__V_8_8)));
            }
#line 6508 "profile.c"
            profile__succeeded = (profile__V_11_11 == (MR_Integer) 0);
#line 193 "profile.m"
            profile__succeeded = !(profile__succeeded);
#line 193 "profile.m"
            if (profile__succeeded)
#line 193 "profile.m"
              *profile__HeadVar__1_1 = profile__V_11_11;
#line 193 "profile.m"
            else
#line 193 "profile.m"
              {
#line 193 "profile.m"
                {
#line 193 "profile.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[25], profile__HeadVar__1_1, ((MR_Box) (profile__V_6_6)), ((MR_Box) (profile__V_9_9)));
#line 193 "profile.m"
                  return;
                }
#line 193 "profile.m"
              }
#line 193 "profile.m"
          }
#line 193 "profile.m"
      }
#line 193 "profile.m"
  }
#line 193 "profile.m"
}

#line 193 "profile.m"
MR_bool MR_CALL 
profile____Unify____proc_dynamic_0_0(
#line 193 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 193 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 193 "profile.m"
{
#line 193 "profile.m"
  {
#line 193 "profile.m"
    MR_bool profile__succeeded;
#line 193 "profile.m"
    MR_Integer profile__CastX_9 = (MR_Integer) profile__HeadVar__1_1;
#line 193 "profile.m"
    MR_Integer profile__CastY_10 = (MR_Integer) profile__HeadVar__2_2;

#line 193 "profile.m"
    profile__succeeded = (profile__CastX_9 == profile__CastY_10);
#line 193 "profile.m"
    if (profile__succeeded)
#line 193 "profile.m"
      profile__succeeded = MR_TRUE;
#line 193 "profile.m"
    else
#line 193 "profile.m"
      {
#line 193 "profile.m"
        MR_Word profile__TypeCtorInfo_11_11;
#line 193 "profile.m"
        MR_Word profile__TypeInfo_12_12;
#line 193 "profile.m"
        MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
#line 193 "profile.m"
        MR_ArrayPtr profile__V_4_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
#line 193 "profile.m"
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
#line 193 "profile.m"
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 193 "profile.m"
        MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 193 "profile.m"
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
#line 179 "profile.m"
        MR_Integer profile__CastX_15 = (MR_Integer) profile__V_3_3;
#line 179 "profile.m"
        MR_Integer profile__CastY_16 = (MR_Integer) profile__V_6_6;

#line 179 "profile.m"
        profile__succeeded = (profile__CastX_15 == profile__CastY_16);
#line 179 "profile.m"
        if (profile__succeeded)
#line 179 "profile.m"
          profile__succeeded = MR_TRUE;
#line 179 "profile.m"
        else
#line 179 "profile.m"
          {
#line 179 "profile.m"
            MR_Integer profile__V_13_13 = (MR_Integer) profile__V_3_3;
#line 179 "profile.m"
            MR_Integer profile__V_14_14 = (MR_Integer) profile__V_6_6;

#line 6602 "profile.c"
            profile__succeeded = (profile__V_13_13 == profile__V_14_14);
#line 179 "profile.m"
          }
#line 193 "profile.m"
        if (profile__succeeded)
#line 193 "profile.m"
          {
#line 6610 "profile.c"
            profile__TypeCtorInfo_11_11 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
#line 6612 "profile.c"
            {
#line 6614 "profile.c"
              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_11_11, (MR_ArrayPtr) profile__V_4_4, (MR_ArrayPtr) profile__V_7_7);
            }
#line 193 "profile.m"
            if (profile__succeeded)
#line 193 "profile.m"
              {
#line 6621 "profile.c"
                profile__TypeInfo_12_12 = (MR_Word) &profile_scalar_common_1[25];
#line 6623 "profile.c"
                {
#line 6625 "profile.c"
                  return profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_12_12, ((MR_Box) (profile__V_5_5)), ((MR_Box) (profile__V_8_8)));
                }
#line 193 "profile.m"
              }
#line 193 "profile.m"
          }
#line 193 "profile.m"
      }
#line 193 "profile.m"
    return profile__succeeded;
#line 193 "profile.m"
  }
#line 193 "profile.m"
}

#line 158 "profile.m"
void MR_CALL 
profile____Compare____module_data_0_0(
#line 158 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 158 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 158 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 158 "profile.m"
{
#line 158 "profile.m"
  {
#line 158 "profile.m"
    MR_bool profile__succeeded;
#line 158 "profile.m"
    MR_Integer profile__CastX_12 = (MR_Integer) profile__HeadVar__2_2;
#line 158 "profile.m"
    MR_Integer profile__CastY_13 = (MR_Integer) profile__HeadVar__3_3;

#line 158 "profile.m"
    profile__succeeded = (profile__CastX_12 == profile__CastY_13);
#line 158 "profile.m"
    if (profile__succeeded)
#line 6665 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 158 "profile.m"
    else
#line 158 "profile.m"
      {
#line 158 "profile.m"
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 158 "profile.m"
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 158 "profile.m"
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
#line 158 "profile.m"
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
#line 158 "profile.m"
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
#line 158 "profile.m"
        MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
#line 158 "profile.m"
        MR_Word profile__V_10_10;

#line 158 "profile.m"
        {
#line 158 "profile.m"
          measurements____Compare____own_prof_info_0_0(&profile__V_10_10, profile__V_4_4, profile__V_7_7);
        }
#line 6691 "profile.c"
        profile__succeeded = (profile__V_10_10 == (MR_Integer) 0);
#line 158 "profile.m"
        profile__succeeded = !(profile__succeeded);
#line 158 "profile.m"
        if (profile__succeeded)
#line 158 "profile.m"
          *profile__HeadVar__1_1 = profile__V_10_10;
#line 158 "profile.m"
        else
#line 158 "profile.m"
          {
#line 158 "profile.m"
            MR_Word profile__V_11_11;

#line 158 "profile.m"
            {
#line 158 "profile.m"
              measurements____Compare____inherit_prof_info_0_0(&profile__V_11_11, profile__V_5_5, profile__V_8_8);
            }
#line 6711 "profile.c"
            profile__succeeded = (profile__V_11_11 == (MR_Integer) 0);
#line 158 "profile.m"
            profile__succeeded = !(profile__succeeded);
#line 158 "profile.m"
            if (profile__succeeded)
#line 158 "profile.m"
              *profile__HeadVar__1_1 = profile__V_11_11;
#line 158 "profile.m"
            else
#line 158 "profile.m"
              {
#line 158 "profile.m"
                {
#line 158 "profile.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[22], profile__HeadVar__1_1, ((MR_Box) (profile__V_6_6)), ((MR_Box) (profile__V_9_9)));
#line 158 "profile.m"
                  return;
                }
#line 158 "profile.m"
              }
#line 158 "profile.m"
          }
#line 158 "profile.m"
      }
#line 158 "profile.m"
  }
#line 158 "profile.m"
}

#line 158 "profile.m"
MR_bool MR_CALL 
profile____Unify____module_data_0_0(
#line 158 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 158 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 158 "profile.m"
{
#line 158 "profile.m"
  {
#line 158 "profile.m"
    MR_bool profile__succeeded;
#line 158 "profile.m"
    MR_Integer profile__CastX_9 = (MR_Integer) profile__HeadVar__1_1;
#line 158 "profile.m"
    MR_Integer profile__CastY_10 = (MR_Integer) profile__HeadVar__2_2;

#line 158 "profile.m"
    profile__succeeded = (profile__CastX_9 == profile__CastY_10);
#line 158 "profile.m"
    if (profile__succeeded)
#line 158 "profile.m"
      profile__succeeded = MR_TRUE;
#line 158 "profile.m"
    else
#line 158 "profile.m"
      {
#line 158 "profile.m"
        MR_Word profile__TypeInfo_13_13;
#line 158 "profile.m"
        MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
#line 158 "profile.m"
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
#line 158 "profile.m"
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
#line 158 "profile.m"
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 158 "profile.m"
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 158 "profile.m"
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));

#line 6784 "profile.c"
        {
#line 6786 "profile.c"
          profile__succeeded = measurements____Unify____own_prof_info_0_0(profile__V_3_3, profile__V_6_6);
        }
#line 158 "profile.m"
        if (profile__succeeded)
#line 158 "profile.m"
          {
#line 6793 "profile.c"
            {
#line 6795 "profile.c"
              profile__succeeded = measurements____Unify____inherit_prof_info_0_0(profile__V_4_4, profile__V_7_7);
            }
#line 158 "profile.m"
            if (profile__succeeded)
#line 158 "profile.m"
              {
#line 6802 "profile.c"
                profile__TypeInfo_13_13 = (MR_Word) &profile_scalar_common_1[22];
#line 6804 "profile.c"
                {
#line 6806 "profile.c"
                  return profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_13_13, ((MR_Box) (profile__V_5_5)), ((MR_Box) (profile__V_8_8)));
                }
#line 158 "profile.m"
              }
#line 158 "profile.m"
          }
#line 158 "profile.m"
      }
#line 158 "profile.m"
    return profile__succeeded;
#line 158 "profile.m"
  }
#line 158 "profile.m"
}

#line 261 "profile.m"
void MR_CALL 
profile____Compare____is_zeroed_0_0(
#line 261 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 261 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 261 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 261 "profile.m"
{
#line 261 "profile.m"
  {
#line 261 "profile.m"
    MR_bool profile__succeeded;
#line 261 "profile.m"
    MR_Integer profile__Cast_HeadVar1_4 = (MR_Integer) profile__HeadVar__2_2;
#line 261 "profile.m"
    MR_Integer profile__Cast_HeadVar2_5 = (MR_Integer) profile__HeadVar__3_3;

#line 261 "profile.m"
    {
#line 261 "profile.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__Cast_HeadVar1_4, profile__Cast_HeadVar2_5);
#line 261 "profile.m"
      return;
    }
#line 261 "profile.m"
  }
#line 261 "profile.m"
}

#line 261 "profile.m"
MR_bool MR_CALL 
profile____Unify____is_zeroed_0_0(
#line 261 "profile.m"
  MR_Word profile__HeadVar__2_1,
#line 261 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 261 "profile.m"
{
#line 6863 "profile.c"
  {
#line 6865 "profile.c"
    MR_bool profile__succeeded = (profile__HeadVar__2_1 == profile__HeadVar__2_2);

#line 6868 "profile.c"
    return profile__succeeded;
#line 6870 "profile.c"
  }
#line 261 "profile.m"
}

#line 69 "profile.m"
void MR_CALL 
profile____Compare____initial_deep_0_0(
#line 69 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 69 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 69 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 69 "profile.m"
{
#line 69 "profile.m"
  {
#line 69 "profile.m"
    MR_bool profile__succeeded;
#line 69 "profile.m"
    MR_Integer profile__CastX_21 = (MR_Integer) profile__HeadVar__2_2;
#line 69 "profile.m"
    MR_Integer profile__CastY_22 = (MR_Integer) profile__HeadVar__3_3;

#line 69 "profile.m"
    profile__succeeded = (profile__CastX_21 == profile__CastY_22);
#line 69 "profile.m"
    if (profile__succeeded)
#line 6899 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 69 "profile.m"
    else
#line 69 "profile.m"
      {
#line 69 "profile.m"
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "profile.m"
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
#line 69 "profile.m"
        MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
#line 69 "profile.m"
        MR_Word profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 3)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 4)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 5)));
#line 69 "profile.m"
        MR_Word profile__V_16_16;

#line 69 "profile.m"
        {
#line 69 "profile.m"
          profile____Compare____profile_stats_0_0(&profile__V_16_16, profile__V_4_4, profile__V_10_10);
        }
#line 6937 "profile.c"
        profile__succeeded = (profile__V_16_16 == (MR_Integer) 0);
#line 69 "profile.m"
        profile__succeeded = !(profile__succeeded);
#line 69 "profile.m"
        if (profile__succeeded)
#line 69 "profile.m"
          *profile__HeadVar__1_1 = profile__V_16_16;
#line 69 "profile.m"
        else
#line 69 "profile.m"
          {
#line 69 "profile.m"
            MR_Word profile__V_17_17;
#line 69 "profile.m"
            MR_Integer profile__V_29_29 = (MR_Integer) profile__V_5_5;
#line 69 "profile.m"
            MR_Integer profile__V_30_30 = (MR_Integer) profile__V_11_11;

#line 69 "profile.m"
            {
#line 69 "profile.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_17_17, profile__V_29_29, profile__V_30_30);
            }
#line 6961 "profile.c"
            profile__succeeded = (profile__V_17_17 == (MR_Integer) 0);
#line 69 "profile.m"
            profile__succeeded = !(profile__succeeded);
#line 69 "profile.m"
            if (profile__succeeded)
#line 69 "profile.m"
              *profile__HeadVar__1_1 = profile__V_17_17;
#line 69 "profile.m"
            else
#line 69 "profile.m"
              {
#line 69 "profile.m"
                MR_Word profile__V_18_18;

#line 69 "profile.m"
                {
#line 69 "profile.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[7], &profile__V_18_18, ((MR_Box) (profile__V_6_6)), ((MR_Box) (profile__V_12_12)));
                }
#line 6981 "profile.c"
                profile__succeeded = (profile__V_18_18 == (MR_Integer) 0);
#line 69 "profile.m"
                profile__succeeded = !(profile__succeeded);
#line 69 "profile.m"
                if (profile__succeeded)
#line 69 "profile.m"
                  *profile__HeadVar__1_1 = profile__V_18_18;
#line 69 "profile.m"
                else
#line 69 "profile.m"
                  {
#line 69 "profile.m"
                    MR_Word profile__V_19_19;

#line 69 "profile.m"
                    {
#line 69 "profile.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[11], &profile__V_19_19, ((MR_Box) (profile__V_7_7)), ((MR_Box) (profile__V_13_13)));
                    }
#line 7001 "profile.c"
                    profile__succeeded = (profile__V_19_19 == (MR_Integer) 0);
#line 69 "profile.m"
                    profile__succeeded = !(profile__succeeded);
#line 69 "profile.m"
                    if (profile__succeeded)
#line 69 "profile.m"
                      *profile__HeadVar__1_1 = profile__V_19_19;
#line 69 "profile.m"
                    else
#line 69 "profile.m"
                      {
#line 69 "profile.m"
                        MR_Word profile__V_20_20;

#line 69 "profile.m"
                        {
#line 69 "profile.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[10], &profile__V_20_20, ((MR_Box) (profile__V_8_8)), ((MR_Box) (profile__V_14_14)));
                        }
#line 7021 "profile.c"
                        profile__succeeded = (profile__V_20_20 == (MR_Integer) 0);
#line 69 "profile.m"
                        profile__succeeded = !(profile__succeeded);
#line 69 "profile.m"
                        if (profile__succeeded)
#line 69 "profile.m"
                          *profile__HeadVar__1_1 = profile__V_20_20;
#line 69 "profile.m"
                        else
#line 69 "profile.m"
                          {
#line 69 "profile.m"
                            {
#line 69 "profile.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[12], profile__HeadVar__1_1, ((MR_Box) (profile__V_9_9)), ((MR_Box) (profile__V_15_15)));
#line 69 "profile.m"
                              return;
                            }
#line 69 "profile.m"
                          }
#line 69 "profile.m"
                      }
#line 69 "profile.m"
                  }
#line 69 "profile.m"
              }
#line 69 "profile.m"
          }
#line 69 "profile.m"
      }
#line 69 "profile.m"
  }
#line 69 "profile.m"
}

#line 69 "profile.m"
MR_bool MR_CALL 
profile____Unify____initial_deep_0_0(
#line 69 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 69 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 69 "profile.m"
{
#line 69 "profile.m"
  {
#line 69 "profile.m"
    MR_bool profile__succeeded;
#line 69 "profile.m"
    MR_Integer profile__CastX_15 = (MR_Integer) profile__HeadVar__1_1;
#line 69 "profile.m"
    MR_Integer profile__CastY_16 = (MR_Integer) profile__HeadVar__2_2;

#line 69 "profile.m"
    profile__succeeded = (profile__CastX_15 == profile__CastY_16);
#line 69 "profile.m"
    if (profile__succeeded)
#line 69 "profile.m"
      profile__succeeded = MR_TRUE;
#line 69 "profile.m"
    else
#line 69 "profile.m"
      {
#line 69 "profile.m"
        MR_Word profile__TypeCtorInfo_17_17;
#line 69 "profile.m"
        MR_Word profile__TypeCtorInfo_18_18;
#line 69 "profile.m"
        MR_Word profile__TypeCtorInfo_19_19;
#line 69 "profile.m"
        MR_Word profile__TypeCtorInfo_20_20;
#line 69 "profile.m"
        MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
#line 69 "profile.m"
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 3)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 4)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 5)));
#line 69 "profile.m"
        MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "profile.m"
        MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
#line 69 "profile.m"
        MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
#line 176 "profile.m"
        MR_Integer profile__CastX_23;
#line 176 "profile.m"
        MR_Integer profile__CastY_24;

#line 7122 "profile.c"
        {
#line 7124 "profile.c"
          profile__succeeded = profile____Unify____profile_stats_0_0(profile__V_3_3, profile__V_9_9);
        }
#line 69 "profile.m"
        if (profile__succeeded)
#line 69 "profile.m"
          {
#line 176 "profile.m"
            profile__CastX_23 = (MR_Integer) profile__V_4_4;
#line 176 "profile.m"
            profile__CastY_24 = (MR_Integer) profile__V_10_10;
#line 176 "profile.m"
            profile__succeeded = (profile__CastX_23 == profile__CastY_24);
#line 176 "profile.m"
            if (profile__succeeded)
#line 176 "profile.m"
              profile__succeeded = MR_TRUE;
#line 176 "profile.m"
            else
#line 176 "profile.m"
              {
#line 176 "profile.m"
                MR_Integer profile__V_21_21 = (MR_Integer) profile__V_4_4;
#line 176 "profile.m"
                MR_Integer profile__V_22_22 = (MR_Integer) profile__V_10_10;

#line 7150 "profile.c"
                profile__succeeded = (profile__V_21_21 == profile__V_22_22);
#line 176 "profile.m"
              }
#line 69 "profile.m"
            if (profile__succeeded)
#line 69 "profile.m"
              {
#line 7158 "profile.c"
                profile__TypeCtorInfo_17_17 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
#line 7160 "profile.c"
                {
#line 7162 "profile.c"
                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_17_17, (MR_ArrayPtr) profile__V_5_5, (MR_ArrayPtr) profile__V_11_11);
                }
#line 69 "profile.m"
                if (profile__succeeded)
#line 69 "profile.m"
                  {
#line 7169 "profile.c"
                    profile__TypeCtorInfo_18_18 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
#line 7171 "profile.c"
                    {
#line 7173 "profile.c"
                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_18_18, (MR_ArrayPtr) profile__V_6_6, (MR_ArrayPtr) profile__V_12_12);
                    }
#line 69 "profile.m"
                    if (profile__succeeded)
#line 69 "profile.m"
                      {
#line 7180 "profile.c"
                        profile__TypeCtorInfo_19_19 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_0;
#line 7182 "profile.c"
                        {
#line 7184 "profile.c"
                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_19_19, (MR_ArrayPtr) profile__V_7_7, (MR_ArrayPtr) profile__V_13_13);
                        }
#line 69 "profile.m"
                        if (profile__succeeded)
#line 69 "profile.m"
                          {
#line 7191 "profile.c"
                            profile__TypeCtorInfo_20_20 = (MR_Word) &profile__profile__type_ctor_info_proc_static_0;
#line 7193 "profile.c"
                            {
#line 7195 "profile.c"
                              return profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_20_20, (MR_ArrayPtr) profile__V_8_8, (MR_ArrayPtr) profile__V_14_14);
                            }
#line 69 "profile.m"
                          }
#line 69 "profile.m"
                      }
#line 69 "profile.m"
                  }
#line 69 "profile.m"
              }
#line 69 "profile.m"
          }
#line 69 "profile.m"
      }
#line 69 "profile.m"
    return profile__succeeded;
#line 69 "profile.m"
  }
#line 69 "profile.m"
}

#line 47 "profile.m"
void MR_CALL 
profile____Compare____deep_flags_0_0(
#line 47 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 47 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 47 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 47 "profile.m"
{
#line 47 "profile.m"
  {
#line 47 "profile.m"
    MR_bool profile__succeeded;
#line 47 "profile.m"
    MR_Integer profile__CastX_14 = (MR_Integer) profile__HeadVar__2_2;
#line 47 "profile.m"
    MR_Integer profile__CastY_15 = (MR_Integer) profile__HeadVar__3_3;

#line 47 "profile.m"
    profile__succeeded = (profile__CastX_14 == profile__CastY_15);
#line 47 "profile.m"
    if (profile__succeeded)
#line 7241 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "profile.m"
    else
#line 47 "profile.m"
      {
#line 47 "profile.m"
        MR_Integer profile__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 47 "profile.m"
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 47 "profile.m"
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
#line 47 "profile.m"
        MR_Integer profile__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
#line 47 "profile.m"
        MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
#line 47 "profile.m"
        MR_Word profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 3)));
#line 47 "profile.m"
        MR_Word profile__V_12_12;

#line 47 "profile.m"
        {
#line 47 "profile.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_12_12, profile__V_4_4, profile__V_8_8);
        }
#line 7267 "profile.c"
        profile__succeeded = (profile__V_12_12 == (MR_Integer) 0);
#line 47 "profile.m"
        profile__succeeded = !(profile__succeeded);
#line 47 "profile.m"
        if (profile__succeeded)
#line 47 "profile.m"
          *profile__HeadVar__1_1 = profile__V_12_12;
#line 47 "profile.m"
        else
#line 47 "profile.m"
          {
#line 47 "profile.m"
            MR_Word profile__V_13_13;
#line 47 "profile.m"
            MR_Integer profile__V_19_19 = (MR_Integer) profile__V_5_5;
#line 47 "profile.m"
            MR_Integer profile__V_20_20 = (MR_Integer) profile__V_9_9;

#line 47 "profile.m"
            {
#line 47 "profile.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_13_13, profile__V_19_19, profile__V_20_20);
            }
#line 7291 "profile.c"
            profile__succeeded = (profile__V_13_13 == (MR_Integer) 0);
#line 47 "profile.m"
            profile__succeeded = !(profile__succeeded);
#line 47 "profile.m"
            if (profile__succeeded)
#line 47 "profile.m"
              *profile__HeadVar__1_1 = profile__V_13_13;
#line 47 "profile.m"
            else
#line 47 "profile.m"
              {
#line 47 "profile.m"
                MR_Integer profile__V_21_21 = (MR_Integer) profile__V_7_7;
#line 47 "profile.m"
                MR_Integer profile__V_22_22 = (MR_Integer) profile__V_11_11;

#line 47 "profile.m"
                {
#line 47 "profile.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_21_21, profile__V_22_22);
#line 47 "profile.m"
                  return;
                }
#line 47 "profile.m"
              }
#line 47 "profile.m"
          }
#line 47 "profile.m"
      }
#line 47 "profile.m"
  }
#line 47 "profile.m"
}

#line 47 "profile.m"
MR_bool MR_CALL 
profile____Unify____deep_flags_0_0(
#line 47 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 47 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 47 "profile.m"
{
#line 47 "profile.m"
  {
#line 47 "profile.m"
    MR_bool profile__succeeded;
#line 47 "profile.m"
    MR_Integer profile__CastX_11 = (MR_Integer) profile__HeadVar__1_1;
#line 47 "profile.m"
    MR_Integer profile__CastY_12 = (MR_Integer) profile__HeadVar__2_2;

#line 47 "profile.m"
    profile__succeeded = (profile__CastX_11 == profile__CastY_12);
#line 47 "profile.m"
    if (profile__succeeded)
#line 47 "profile.m"
      profile__succeeded = MR_TRUE;
#line 47 "profile.m"
    else
#line 47 "profile.m"
      {
#line 47 "profile.m"
        MR_Integer profile__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
#line 47 "profile.m"
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
#line 47 "profile.m"
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 3)));
#line 47 "profile.m"
        MR_Integer profile__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 47 "profile.m"
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 47 "profile.m"
        MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));

#line 7367 "profile.c"
        profile__succeeded = (profile__V_3_3 == profile__V_7_7);
#line 47 "profile.m"
        if (profile__succeeded)
#line 47 "profile.m"
          {
#line 7373 "profile.c"
            profile__succeeded = (profile__V_4_4 == profile__V_8_8);
#line 47 "profile.m"
            if (profile__succeeded)
#line 7377 "profile.c"
              profile__succeeded = (profile__V_6_6 == profile__V_10_10);
#line 47 "profile.m"
          }
#line 47 "profile.m"
      }
#line 47 "profile.m"
    return profile__succeeded;
#line 47 "profile.m"
  }
#line 47 "profile.m"
}

#line 40 "profile.m"
void MR_CALL 
profile____Compare____deep_compression_flag_0_0(
#line 40 "profile.m"
  MR_Word * profile__HeadVar__1_1)
#line 40 "profile.m"
{
#line 40 "profile.m"
  {
#line 40 "profile.m"
    MR_bool profile__succeeded;

#line 40 "profile.m"
    {
#line 40 "profile.m"
      profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_114_111_102_105_108_101_95_95_100_101_101_112_95_99_111_109_112_114_101_115_115_105_111_110_95_102_108_97_103_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(profile__HeadVar__1_1);
#line 40 "profile.m"
      return;
    }
#line 40 "profile.m"
  }
#line 40 "profile.m"
}

#line 40 "profile.m"
MR_bool MR_CALL 
profile____Unify____deep_compression_flag_0_0(void)
#line 40 "profile.m"
{
#line 40 "profile.m"
  {
#line 40 "profile.m"
    MR_bool profile__succeeded;

#line 40 "profile.m"
    {
#line 40 "profile.m"
      return profile__succeeded = profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_114_111_102_105_108_101_95_95_100_101_101_112_95_99_111_109_112_114_101_115_115_105_111_110_95_102_108_97_103_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 40 "profile.m"
    return profile__succeeded;
#line 40 "profile.m"
  }
#line 40 "profile.m"
}

#line 82 "profile.m"
void MR_CALL 
profile____Compare____deep_0_0(
#line 82 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 82 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 82 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 82 "profile.m"
{
#line 82 "profile.m"
  {
#line 82 "profile.m"
    MR_bool profile__succeeded;
#line 82 "profile.m"
    MR_Integer profile__CastX_90 = (MR_Integer) profile__HeadVar__2_2;
#line 82 "profile.m"
    MR_Integer profile__CastY_91 = (MR_Integer) profile__HeadVar__3_3;

#line 82 "profile.m"
    profile__succeeded = (profile__CastX_90 == profile__CastY_91);
#line 82 "profile.m"
    if (profile__succeeded)
#line 7460 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 82 "profile.m"
    else
#line 82 "profile.m"
      {
#line 82 "profile.m"
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 82 "profile.m"
        MR_String profile__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 82 "profile.m"
        MR_String profile__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
#line 82 "profile.m"
        MR_String profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
#line 82 "profile.m"
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 6)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 7)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 8)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 9)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 10)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 11)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 12)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 13)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 14)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 15)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 16)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 17)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 18)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 19)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 20)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 21)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 22)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 23)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 24)));
#line 82 "profile.m"
        MR_Word profile__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 25)));
#line 82 "profile.m"
        MR_Word profile__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 26)));
#line 82 "profile.m"
        MR_Word profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 27)));
#line 82 "profile.m"
        MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 28)));
#line 82 "profile.m"
        MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
#line 82 "profile.m"
        MR_String profile__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
#line 82 "profile.m"
        MR_String profile__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
#line 82 "profile.m"
        MR_String profile__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 3)));
#line 82 "profile.m"
        MR_Word profile__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 4)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 5)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 6)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 7)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 8)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 9)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 10)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 11)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 12)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 13)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 14)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 15)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 16)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 17)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 18)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 19)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 20)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 21)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 22)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 23)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 24)));
#line 82 "profile.m"
        MR_Word profile__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 25)));
#line 82 "profile.m"
        MR_Word profile__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 26)));
#line 82 "profile.m"
        MR_Word profile__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 27)));
#line 82 "profile.m"
        MR_Word profile__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 28)));
#line 82 "profile.m"
        MR_Word profile__V_62_62;

#line 82 "profile.m"
        {
#line 82 "profile.m"
          profile____Compare____profile_stats_0_0(&profile__V_62_62, profile__V_4_4, profile__V_33_33);
        }
#line 7590 "profile.c"
        profile__succeeded = (profile__V_62_62 == (MR_Integer) 0);
#line 82 "profile.m"
        profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
        if (profile__succeeded)
#line 82 "profile.m"
          *profile__HeadVar__1_1 = profile__V_62_62;
#line 82 "profile.m"
        else
#line 82 "profile.m"
          {
#line 82 "profile.m"
            MR_Word profile__V_63_63;

#line 82 "profile.m"
            {
#line 82 "profile.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_63_63, profile__V_5_5, profile__V_34_34);
            }
#line 7610 "profile.c"
            profile__succeeded = (profile__V_63_63 == (MR_Integer) 0);
#line 82 "profile.m"
            profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
            if (profile__succeeded)
#line 82 "profile.m"
              *profile__HeadVar__1_1 = profile__V_63_63;
#line 82 "profile.m"
            else
#line 82 "profile.m"
              {
#line 82 "profile.m"
                MR_Word profile__V_64_64;

#line 82 "profile.m"
                {
#line 82 "profile.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_64_64, profile__V_6_6, profile__V_35_35);
                }
#line 7630 "profile.c"
                profile__succeeded = (profile__V_64_64 == (MR_Integer) 0);
#line 82 "profile.m"
                profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                if (profile__succeeded)
#line 82 "profile.m"
                  *profile__HeadVar__1_1 = profile__V_64_64;
#line 82 "profile.m"
                else
#line 82 "profile.m"
                  {
#line 82 "profile.m"
                    MR_Word profile__V_65_65;

#line 82 "profile.m"
                    {
#line 82 "profile.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_65_65, profile__V_7_7, profile__V_36_36);
                    }
#line 7650 "profile.c"
                    profile__succeeded = (profile__V_65_65 == (MR_Integer) 0);
#line 82 "profile.m"
                    profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                    if (profile__succeeded)
#line 82 "profile.m"
                      *profile__HeadVar__1_1 = profile__V_65_65;
#line 82 "profile.m"
                    else
#line 82 "profile.m"
                      {
#line 82 "profile.m"
                        MR_Word profile__V_66_66;
#line 82 "profile.m"
                        MR_Integer profile__V_121_121 = (MR_Integer) profile__V_8_8;
#line 82 "profile.m"
                        MR_Integer profile__V_122_122 = (MR_Integer) profile__V_37_37;

#line 82 "profile.m"
                        {
#line 82 "profile.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_66_66, profile__V_121_121, profile__V_122_122);
                        }
#line 7674 "profile.c"
                        profile__succeeded = (profile__V_66_66 == (MR_Integer) 0);
#line 82 "profile.m"
                        profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                        if (profile__succeeded)
#line 82 "profile.m"
                          *profile__HeadVar__1_1 = profile__V_66_66;
#line 82 "profile.m"
                        else
#line 82 "profile.m"
                          {
#line 82 "profile.m"
                            MR_Word profile__V_67_67;

#line 82 "profile.m"
                            {
#line 82 "profile.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[7], &profile__V_67_67, ((MR_Box) (profile__V_9_9)), ((MR_Box) (profile__V_38_38)));
                            }
#line 7694 "profile.c"
                            profile__succeeded = (profile__V_67_67 == (MR_Integer) 0);
#line 82 "profile.m"
                            profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                            if (profile__succeeded)
#line 82 "profile.m"
                              *profile__HeadVar__1_1 = profile__V_67_67;
#line 82 "profile.m"
                            else
#line 82 "profile.m"
                              {
#line 82 "profile.m"
                                MR_Word profile__V_68_68;

#line 82 "profile.m"
                                {
#line 82 "profile.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[11], &profile__V_68_68, ((MR_Box) (profile__V_10_10)), ((MR_Box) (profile__V_39_39)));
                                }
#line 7714 "profile.c"
                                profile__succeeded = (profile__V_68_68 == (MR_Integer) 0);
#line 82 "profile.m"
                                profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                if (profile__succeeded)
#line 82 "profile.m"
                                  *profile__HeadVar__1_1 = profile__V_68_68;
#line 82 "profile.m"
                                else
#line 82 "profile.m"
                                  {
#line 82 "profile.m"
                                    MR_Word profile__V_69_69;

#line 82 "profile.m"
                                    {
#line 82 "profile.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[10], &profile__V_69_69, ((MR_Box) (profile__V_11_11)), ((MR_Box) (profile__V_40_40)));
                                    }
#line 7734 "profile.c"
                                    profile__succeeded = (profile__V_69_69 == (MR_Integer) 0);
#line 82 "profile.m"
                                    profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                    if (profile__succeeded)
#line 82 "profile.m"
                                      *profile__HeadVar__1_1 = profile__V_69_69;
#line 82 "profile.m"
                                    else
#line 82 "profile.m"
                                      {
#line 82 "profile.m"
                                        MR_Word profile__V_70_70;

#line 82 "profile.m"
                                        {
#line 82 "profile.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[12], &profile__V_70_70, ((MR_Box) (profile__V_12_12)), ((MR_Box) (profile__V_41_41)));
                                        }
#line 7754 "profile.c"
                                        profile__succeeded = (profile__V_70_70 == (MR_Integer) 0);
#line 82 "profile.m"
                                        profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                        if (profile__succeeded)
#line 82 "profile.m"
                                          *profile__HeadVar__1_1 = profile__V_70_70;
#line 82 "profile.m"
                                        else
#line 82 "profile.m"
                                          {
#line 82 "profile.m"
                                            MR_Word profile__V_71_71;

#line 82 "profile.m"
                                            {
#line 82 "profile.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[13], &profile__V_71_71, ((MR_Box) (profile__V_13_13)), ((MR_Box) (profile__V_42_42)));
                                            }
#line 7774 "profile.c"
                                            profile__succeeded = (profile__V_71_71 == (MR_Integer) 0);
#line 82 "profile.m"
                                            profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                            if (profile__succeeded)
#line 82 "profile.m"
                                              *profile__HeadVar__1_1 = profile__V_71_71;
#line 82 "profile.m"
                                            else
#line 82 "profile.m"
                                              {
#line 82 "profile.m"
                                                MR_Word profile__V_72_72;

#line 82 "profile.m"
                                                {
#line 82 "profile.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[14], &profile__V_72_72, ((MR_Box) (profile__V_14_14)), ((MR_Box) (profile__V_43_43)));
                                                }
#line 7794 "profile.c"
                                                profile__succeeded = (profile__V_72_72 == (MR_Integer) 0);
#line 82 "profile.m"
                                                profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                if (profile__succeeded)
#line 82 "profile.m"
                                                  *profile__HeadVar__1_1 = profile__V_72_72;
#line 82 "profile.m"
                                                else
#line 82 "profile.m"
                                                  {
#line 82 "profile.m"
                                                    MR_Word profile__V_73_73;

#line 82 "profile.m"
                                                    {
#line 82 "profile.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[6], &profile__V_73_73, ((MR_Box) (profile__V_15_15)), ((MR_Box) (profile__V_44_44)));
                                                    }
#line 7814 "profile.c"
                                                    profile__succeeded = (profile__V_73_73 == (MR_Integer) 0);
#line 82 "profile.m"
                                                    profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                    if (profile__succeeded)
#line 82 "profile.m"
                                                      *profile__HeadVar__1_1 = profile__V_73_73;
#line 82 "profile.m"
                                                    else
#line 82 "profile.m"
                                                      {
#line 82 "profile.m"
                                                        MR_Word profile__V_74_74;

#line 82 "profile.m"
                                                        {
#line 82 "profile.m"
                                                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[15], &profile__V_74_74, ((MR_Box) (profile__V_16_16)), ((MR_Box) (profile__V_45_45)));
                                                        }
#line 7834 "profile.c"
                                                        profile__succeeded = (profile__V_74_74 == (MR_Integer) 0);
#line 82 "profile.m"
                                                        profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                        if (profile__succeeded)
#line 82 "profile.m"
                                                          *profile__HeadVar__1_1 = profile__V_74_74;
#line 82 "profile.m"
                                                        else
#line 82 "profile.m"
                                                          {
#line 82 "profile.m"
                                                            MR_Word profile__V_75_75;

#line 82 "profile.m"
                                                            {
#line 82 "profile.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[16], &profile__V_75_75, ((MR_Box) (profile__V_17_17)), ((MR_Box) (profile__V_46_46)));
                                                            }
#line 7854 "profile.c"
                                                            profile__succeeded = (profile__V_75_75 == (MR_Integer) 0);
#line 82 "profile.m"
                                                            profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                            if (profile__succeeded)
#line 82 "profile.m"
                                                              *profile__HeadVar__1_1 = profile__V_75_75;
#line 82 "profile.m"
                                                            else
#line 82 "profile.m"
                                                              {
#line 82 "profile.m"
                                                                MR_Word profile__V_76_76;

#line 82 "profile.m"
                                                                {
#line 82 "profile.m"
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[9], &profile__V_76_76, ((MR_Box) (profile__V_18_18)), ((MR_Box) (profile__V_47_47)));
                                                                }
#line 7874 "profile.c"
                                                                profile__succeeded = (profile__V_76_76 == (MR_Integer) 0);
#line 82 "profile.m"
                                                                profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                                if (profile__succeeded)
#line 82 "profile.m"
                                                                  *profile__HeadVar__1_1 = profile__V_76_76;
#line 82 "profile.m"
                                                                else
#line 82 "profile.m"
                                                                  {
#line 82 "profile.m"
                                                                    MR_Word profile__V_77_77;

#line 82 "profile.m"
                                                                    {
#line 82 "profile.m"
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[17], &profile__V_77_77, ((MR_Box) (profile__V_19_19)), ((MR_Box) (profile__V_48_48)));
                                                                    }
#line 7894 "profile.c"
                                                                    profile__succeeded = (profile__V_77_77 == (MR_Integer) 0);
#line 82 "profile.m"
                                                                    profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                                    if (profile__succeeded)
#line 82 "profile.m"
                                                                      *profile__HeadVar__1_1 = profile__V_77_77;
#line 82 "profile.m"
                                                                    else
#line 82 "profile.m"
                                                                      {
#line 82 "profile.m"
                                                                        MR_Word profile__V_78_78;

#line 82 "profile.m"
                                                                        {
#line 82 "profile.m"
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[4], &profile__V_78_78, ((MR_Box) (profile__V_20_20)), ((MR_Box) (profile__V_49_49)));
                                                                        }
#line 7914 "profile.c"
                                                                        profile__succeeded = (profile__V_78_78 == (MR_Integer) 0);
#line 82 "profile.m"
                                                                        profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                                        if (profile__succeeded)
#line 82 "profile.m"
                                                                          *profile__HeadVar__1_1 = profile__V_78_78;
#line 82 "profile.m"
                                                                        else
#line 82 "profile.m"
                                                                          {
#line 82 "profile.m"
                                                                            MR_Word profile__V_79_79;

#line 82 "profile.m"
                                                                            {
#line 82 "profile.m"
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[3], &profile__V_79_79, ((MR_Box) (profile__V_21_21)), ((MR_Box) (profile__V_50_50)));
                                                                            }
#line 7934 "profile.c"
                                                                            profile__succeeded = (profile__V_79_79 == (MR_Integer) 0);
#line 82 "profile.m"
                                                                            profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                                            if (profile__succeeded)
#line 82 "profile.m"
                                                                              *profile__HeadVar__1_1 = profile__V_79_79;
#line 82 "profile.m"
                                                                            else
#line 82 "profile.m"
                                                                              {
#line 82 "profile.m"
                                                                                MR_Word profile__V_80_80;

#line 82 "profile.m"
                                                                                {
#line 82 "profile.m"
                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[3], &profile__V_80_80, ((MR_Box) (profile__V_22_22)), ((MR_Box) (profile__V_51_51)));
                                                                                }
#line 7954 "profile.c"
                                                                                profile__succeeded = (profile__V_80_80 == (MR_Integer) 0);
#line 82 "profile.m"
                                                                                profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                                                if (profile__succeeded)
#line 82 "profile.m"
                                                                                  *profile__HeadVar__1_1 = profile__V_80_80;
#line 82 "profile.m"
                                                                                else
#line 82 "profile.m"
                                                                                  {
#line 82 "profile.m"
                                                                                    MR_Word profile__V_81_81;

#line 82 "profile.m"
                                                                                    {
#line 82 "profile.m"
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[4], &profile__V_81_81, ((MR_Box) (profile__V_23_23)), ((MR_Box) (profile__V_52_52)));
                                                                                    }
#line 7974 "profile.c"
                                                                                    profile__succeeded = (profile__V_81_81 == (MR_Integer) 0);
#line 82 "profile.m"
                                                                                    profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                                                    if (profile__succeeded)
#line 82 "profile.m"
                                                                                      *profile__HeadVar__1_1 = profile__V_81_81;
#line 82 "profile.m"
                                                                                    else
#line 82 "profile.m"
                                                                                      {
#line 82 "profile.m"
                                                                                        MR_Word profile__V_82_82;

#line 82 "profile.m"
                                                                                        {
#line 82 "profile.m"
                                                                                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[3], &profile__V_82_82, ((MR_Box) (profile__V_24_24)), ((MR_Box) (profile__V_53_53)));
                                                                                        }
#line 7994 "profile.c"
                                                                                        profile__succeeded = (profile__V_82_82 == (MR_Integer) 0);
#line 82 "profile.m"
                                                                                        profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                                                        if (profile__succeeded)
#line 82 "profile.m"
                                                                                          *profile__HeadVar__1_1 = profile__V_82_82;
#line 82 "profile.m"
                                                                                        else
#line 82 "profile.m"
                                                                                          {
#line 82 "profile.m"
                                                                                            MR_Word profile__V_83_83;

#line 82 "profile.m"
                                                                                            {
#line 82 "profile.m"
                                                                                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[4], &profile__V_83_83, ((MR_Box) (profile__V_25_25)), ((MR_Box) (profile__V_54_54)));
                                                                                            }
#line 8014 "profile.c"
                                                                                            profile__succeeded = (profile__V_83_83 == (MR_Integer) 0);
#line 82 "profile.m"
                                                                                            profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                                                            if (profile__succeeded)
#line 82 "profile.m"
                                                                                              *profile__HeadVar__1_1 = profile__V_83_83;
#line 82 "profile.m"
                                                                                            else
#line 82 "profile.m"
                                                                                              {
#line 82 "profile.m"
                                                                                                MR_Word profile__V_84_84;

#line 82 "profile.m"
                                                                                                {
#line 82 "profile.m"
                                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[3], &profile__V_84_84, ((MR_Box) (profile__V_26_26)), ((MR_Box) (profile__V_55_55)));
                                                                                                }
#line 8034 "profile.c"
                                                                                                profile__succeeded = (profile__V_84_84 == (MR_Integer) 0);
#line 82 "profile.m"
                                                                                                profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                                                                if (profile__succeeded)
#line 82 "profile.m"
                                                                                                  *profile__HeadVar__1_1 = profile__V_84_84;
#line 82 "profile.m"
                                                                                                else
#line 82 "profile.m"
                                                                                                  {
#line 82 "profile.m"
                                                                                                    MR_Word profile__V_85_85;

#line 82 "profile.m"
                                                                                                    {
#line 82 "profile.m"
                                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[5], &profile__V_85_85, ((MR_Box) (profile__V_27_27)), ((MR_Box) (profile__V_56_56)));
                                                                                                    }
#line 8054 "profile.c"
                                                                                                    profile__succeeded = (profile__V_85_85 == (MR_Integer) 0);
#line 82 "profile.m"
                                                                                                    profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                                                                    if (profile__succeeded)
#line 82 "profile.m"
                                                                                                      *profile__HeadVar__1_1 = profile__V_85_85;
#line 82 "profile.m"
                                                                                                    else
#line 82 "profile.m"
                                                                                                      {
#line 82 "profile.m"
                                                                                                        MR_Word profile__V_86_86;

#line 82 "profile.m"
                                                                                                        {
#line 82 "profile.m"
                                                                                                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[5], &profile__V_86_86, ((MR_Box) (profile__V_28_28)), ((MR_Box) (profile__V_57_57)));
                                                                                                        }
#line 8074 "profile.c"
                                                                                                        profile__succeeded = (profile__V_86_86 == (MR_Integer) 0);
#line 82 "profile.m"
                                                                                                        profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                                                                        if (profile__succeeded)
#line 82 "profile.m"
                                                                                                          *profile__HeadVar__1_1 = profile__V_86_86;
#line 82 "profile.m"
                                                                                                        else
#line 82 "profile.m"
                                                                                                          {
#line 82 "profile.m"
                                                                                                            MR_Word profile__V_87_87;

#line 82 "profile.m"
                                                                                                            {
#line 82 "profile.m"
                                                                                                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_2[2], &profile__V_87_87, ((MR_Box) (profile__V_29_29)), ((MR_Box) (profile__V_58_58)));
                                                                                                            }
#line 8094 "profile.c"
                                                                                                            profile__succeeded = (profile__V_87_87 == (MR_Integer) 0);
#line 82 "profile.m"
                                                                                                            profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                                                                            if (profile__succeeded)
#line 82 "profile.m"
                                                                                                              *profile__HeadVar__1_1 = profile__V_87_87;
#line 82 "profile.m"
                                                                                                            else
#line 82 "profile.m"
                                                                                                              {
#line 82 "profile.m"
                                                                                                                MR_Word profile__V_88_88;

#line 82 "profile.m"
                                                                                                                {
#line 82 "profile.m"
                                                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[19], &profile__V_88_88, ((MR_Box) (profile__V_30_30)), ((MR_Box) (profile__V_59_59)));
                                                                                                                }
#line 8114 "profile.c"
                                                                                                                profile__succeeded = (profile__V_88_88 == (MR_Integer) 0);
#line 82 "profile.m"
                                                                                                                profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                                                                                if (profile__succeeded)
#line 82 "profile.m"
                                                                                                                  *profile__HeadVar__1_1 = profile__V_88_88;
#line 82 "profile.m"
                                                                                                                else
#line 82 "profile.m"
                                                                                                                  {
#line 82 "profile.m"
                                                                                                                    MR_Word profile__V_89_89;

#line 82 "profile.m"
                                                                                                                    {
#line 82 "profile.m"
                                                                                                                      exclude____Compare____exclude_file_0_0(&profile__V_89_89, profile__V_31_31, profile__V_60_60);
                                                                                                                    }
#line 8134 "profile.c"
                                                                                                                    profile__succeeded = (profile__V_89_89 == (MR_Integer) 0);
#line 82 "profile.m"
                                                                                                                    profile__succeeded = !(profile__succeeded);
#line 82 "profile.m"
                                                                                                                    if (profile__succeeded)
#line 82 "profile.m"
                                                                                                                      *profile__HeadVar__1_1 = profile__V_89_89;
#line 82 "profile.m"
                                                                                                                    else
#line 82 "profile.m"
                                                                                                                      {
#line 82 "profile.m"
                                                                                                                        {
#line 82 "profile.m"
                                                                                                                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[21], profile__HeadVar__1_1, ((MR_Box) (profile__V_32_32)), ((MR_Box) (profile__V_61_61)));
#line 82 "profile.m"
                                                                                                                          return;
                                                                                                                        }
#line 82 "profile.m"
                                                                                                                      }
#line 82 "profile.m"
                                                                                                                  }
#line 82 "profile.m"
                                                                                                              }
#line 82 "profile.m"
                                                                                                          }
#line 82 "profile.m"
                                                                                                      }
#line 82 "profile.m"
                                                                                                  }
#line 82 "profile.m"
                                                                                              }
#line 82 "profile.m"
                                                                                          }
#line 82 "profile.m"
                                                                                      }
#line 82 "profile.m"
                                                                                  }
#line 82 "profile.m"
                                                                              }
#line 82 "profile.m"
                                                                          }
#line 82 "profile.m"
                                                                      }
#line 82 "profile.m"
                                                                  }
#line 82 "profile.m"
                                                              }
#line 82 "profile.m"
                                                          }
#line 82 "profile.m"
                                                      }
#line 82 "profile.m"
                                                  }
#line 82 "profile.m"
                                              }
#line 82 "profile.m"
                                          }
#line 82 "profile.m"
                                      }
#line 82 "profile.m"
                                  }
#line 82 "profile.m"
                              }
#line 82 "profile.m"
                          }
#line 82 "profile.m"
                      }
#line 82 "profile.m"
                  }
#line 82 "profile.m"
              }
#line 82 "profile.m"
          }
#line 82 "profile.m"
      }
#line 82 "profile.m"
  }
#line 82 "profile.m"
}

#line 82 "profile.m"
MR_bool MR_CALL 
profile____Unify____deep_0_0(
#line 82 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 82 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 82 "profile.m"
{
#line 82 "profile.m"
  {
#line 82 "profile.m"
    MR_bool profile__succeeded;
#line 82 "profile.m"
    MR_Integer profile__CastX_61 = (MR_Integer) profile__HeadVar__1_1;
#line 82 "profile.m"
    MR_Integer profile__CastY_62 = (MR_Integer) profile__HeadVar__2_2;

#line 82 "profile.m"
    profile__succeeded = (profile__CastX_61 == profile__CastY_62);
#line 82 "profile.m"
    if (profile__succeeded)
#line 82 "profile.m"
      profile__succeeded = MR_TRUE;
#line 82 "profile.m"
    else
#line 82 "profile.m"
      {
#line 82 "profile.m"
        MR_Word profile__TypeCtorInfo_63_63;
#line 82 "profile.m"
        MR_Word profile__TypeCtorInfo_64_64;
#line 82 "profile.m"
        MR_Word profile__TypeCtorInfo_65_65;
#line 82 "profile.m"
        MR_Word profile__TypeCtorInfo_66_66;
#line 82 "profile.m"
        MR_Word profile__TypeCtorInfo_67_67;
#line 82 "profile.m"
        MR_Word profile__TypeInfo_68_68;
#line 82 "profile.m"
        MR_Word profile__TypeCtorInfo_69_69;
#line 82 "profile.m"
        MR_Word profile__TypeInfo_70_70;
#line 82 "profile.m"
        MR_Word profile__TypeInfo_71_71;
#line 82 "profile.m"
        MR_Word profile__TypeCtorInfo_72_72;
#line 82 "profile.m"
        MR_Word profile__TypeInfo_73_73;
#line 82 "profile.m"
        MR_Word profile__TypeCtorInfo_74_74;
#line 82 "profile.m"
        MR_Word profile__TypeCtorInfo_75_75;
#line 82 "profile.m"
        MR_Word profile__TypeCtorInfo_76_76;
#line 82 "profile.m"
        MR_Word profile__TypeCtorInfo_77_77;
#line 82 "profile.m"
        MR_Word profile__TypeCtorInfo_78_78;
#line 82 "profile.m"
        MR_Word profile__TypeCtorInfo_79_79;
#line 82 "profile.m"
        MR_Word profile__TypeCtorInfo_80_80;
#line 82 "profile.m"
        MR_Word profile__TypeInfo_81_81;
#line 82 "profile.m"
        MR_Word profile__TypeInfo_82_82;
#line 82 "profile.m"
        MR_Word profile__TypeInfo_83_83;
#line 82 "profile.m"
        MR_Word profile__TypeInfo_84_84;
#line 82 "profile.m"
        MR_Word profile__TypeInfo_86_86;
#line 82 "profile.m"
        MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
#line 82 "profile.m"
        MR_String profile__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
#line 82 "profile.m"
        MR_String profile__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
#line 82 "profile.m"
        MR_String profile__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 3)));
#line 82 "profile.m"
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 4)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 5)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 6)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 7)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 8)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 9)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 10)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 11)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 12)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 13)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 14)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 15)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 16)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 17)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 18)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 19)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 20)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 21)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 22)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 23)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 24)));
#line 82 "profile.m"
        MR_Word profile__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 25)));
#line 82 "profile.m"
        MR_Word profile__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 26)));
#line 82 "profile.m"
        MR_Word profile__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 27)));
#line 82 "profile.m"
        MR_Word profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 28)));
#line 82 "profile.m"
        MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 82 "profile.m"
        MR_String profile__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 82 "profile.m"
        MR_String profile__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
#line 82 "profile.m"
        MR_String profile__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
#line 82 "profile.m"
        MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 6)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 7)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 8)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 9)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 10)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 11)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 12)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 13)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 14)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 15)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 16)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 17)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 18)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 19)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 20)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 21)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 22)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 23)));
#line 82 "profile.m"
        MR_ArrayPtr profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 24)));
#line 82 "profile.m"
        MR_Word profile__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 25)));
#line 82 "profile.m"
        MR_Word profile__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 26)));
#line 82 "profile.m"
        MR_Word profile__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 27)));
#line 82 "profile.m"
        MR_Word profile__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 28)));
#line 176 "profile.m"
        MR_Integer profile__CastX_89;
#line 176 "profile.m"
        MR_Integer profile__CastY_90;

#line 8411 "profile.c"
        {
#line 8413 "profile.c"
          profile__succeeded = profile____Unify____profile_stats_0_0(profile__V_3_3, profile__V_32_32);
        }
#line 82 "profile.m"
        if (profile__succeeded)
#line 82 "profile.m"
          {
#line 8420 "profile.c"
            profile__succeeded = (strcmp(profile__V_4_4, profile__V_33_33) == 0);
#line 82 "profile.m"
            if (profile__succeeded)
#line 82 "profile.m"
              {
#line 8426 "profile.c"
                profile__succeeded = (strcmp(profile__V_5_5, profile__V_34_34) == 0);
#line 82 "profile.m"
                if (profile__succeeded)
#line 82 "profile.m"
                  {
#line 8432 "profile.c"
                    profile__succeeded = (strcmp(profile__V_6_6, profile__V_35_35) == 0);
#line 82 "profile.m"
                    if (profile__succeeded)
#line 82 "profile.m"
                      {
#line 176 "profile.m"
                        profile__CastX_89 = (MR_Integer) profile__V_7_7;
#line 176 "profile.m"
                        profile__CastY_90 = (MR_Integer) profile__V_36_36;
#line 176 "profile.m"
                        profile__succeeded = (profile__CastX_89 == profile__CastY_90);
#line 176 "profile.m"
                        if (profile__succeeded)
#line 176 "profile.m"
                          profile__succeeded = MR_TRUE;
#line 176 "profile.m"
                        else
#line 176 "profile.m"
                          {
#line 176 "profile.m"
                            MR_Integer profile__V_87_87 = (MR_Integer) profile__V_7_7;
#line 176 "profile.m"
                            MR_Integer profile__V_88_88 = (MR_Integer) profile__V_36_36;

#line 8457 "profile.c"
                            profile__succeeded = (profile__V_87_87 == profile__V_88_88);
#line 176 "profile.m"
                          }
#line 82 "profile.m"
                        if (profile__succeeded)
#line 82 "profile.m"
                          {
#line 8465 "profile.c"
                            profile__TypeCtorInfo_63_63 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
#line 8467 "profile.c"
                            {
#line 8469 "profile.c"
                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_63_63, (MR_ArrayPtr) profile__V_8_8, (MR_ArrayPtr) profile__V_37_37);
                            }
#line 82 "profile.m"
                            if (profile__succeeded)
#line 82 "profile.m"
                              {
#line 8476 "profile.c"
                                profile__TypeCtorInfo_64_64 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
#line 8478 "profile.c"
                                {
#line 8480 "profile.c"
                                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_64_64, (MR_ArrayPtr) profile__V_9_9, (MR_ArrayPtr) profile__V_38_38);
                                }
#line 82 "profile.m"
                                if (profile__succeeded)
#line 82 "profile.m"
                                  {
#line 8487 "profile.c"
                                    profile__TypeCtorInfo_65_65 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_0;
#line 8489 "profile.c"
                                    {
#line 8491 "profile.c"
                                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_65_65, (MR_ArrayPtr) profile__V_10_10, (MR_ArrayPtr) profile__V_39_39);
                                    }
#line 82 "profile.m"
                                    if (profile__succeeded)
#line 82 "profile.m"
                                      {
#line 8498 "profile.c"
                                        profile__TypeCtorInfo_66_66 = (MR_Word) &profile__profile__type_ctor_info_proc_static_0;
#line 8500 "profile.c"
                                        {
#line 8502 "profile.c"
                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_66_66, (MR_ArrayPtr) profile__V_11_11, (MR_ArrayPtr) profile__V_40_40);
                                        }
#line 82 "profile.m"
                                        if (profile__succeeded)
#line 82 "profile.m"
                                          {
#line 8509 "profile.c"
                                            profile__TypeCtorInfo_67_67 = (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0;
#line 8511 "profile.c"
                                            {
#line 8513 "profile.c"
                                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_67_67, (MR_ArrayPtr) profile__V_12_12, (MR_ArrayPtr) profile__V_41_41);
                                            }
#line 82 "profile.m"
                                            if (profile__succeeded)
#line 82 "profile.m"
                                              {
#line 8520 "profile.c"
                                                profile__TypeInfo_68_68 = (MR_Word) &profile_scalar_common_1[0];
#line 8522 "profile.c"
                                                {
#line 8524 "profile.c"
                                                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_68_68, (MR_ArrayPtr) profile__V_13_13, (MR_ArrayPtr) profile__V_42_42);
                                                }
#line 82 "profile.m"
                                                if (profile__succeeded)
#line 82 "profile.m"
                                                  {
#line 8531 "profile.c"
                                                    profile__TypeCtorInfo_69_69 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 8533 "profile.c"
                                                    {
#line 8535 "profile.c"
                                                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_69_69, (MR_ArrayPtr) profile__V_14_14, (MR_ArrayPtr) profile__V_43_43);
                                                    }
#line 82 "profile.m"
                                                    if (profile__succeeded)
#line 82 "profile.m"
                                                      {
#line 8542 "profile.c"
                                                        profile__TypeInfo_70_70 = (MR_Word) &profile_scalar_common_1[1];
#line 8544 "profile.c"
                                                        {
#line 8546 "profile.c"
                                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_70_70, (MR_ArrayPtr) profile__V_15_15, (MR_ArrayPtr) profile__V_44_44);
                                                        }
#line 82 "profile.m"
                                                        if (profile__succeeded)
#line 82 "profile.m"
                                                          {
#line 8553 "profile.c"
                                                            profile__TypeInfo_71_71 = (MR_Word) &profile_scalar_common_1[2];
#line 8555 "profile.c"
                                                            {
#line 8557 "profile.c"
                                                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_71_71, (MR_ArrayPtr) profile__V_16_16, (MR_ArrayPtr) profile__V_45_45);
                                                            }
#line 82 "profile.m"
                                                            if (profile__succeeded)
#line 82 "profile.m"
                                                              {
#line 8564 "profile.c"
                                                                profile__TypeCtorInfo_72_72 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
#line 8566 "profile.c"
                                                                {
#line 8568 "profile.c"
                                                                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_72_72, (MR_ArrayPtr) profile__V_17_17, (MR_ArrayPtr) profile__V_46_46);
                                                                }
#line 82 "profile.m"
                                                                if (profile__succeeded)
#line 82 "profile.m"
                                                                  {
#line 8575 "profile.c"
                                                                    profile__TypeInfo_73_73 = (MR_Word) &profile_scalar_common_2[0];
#line 8577 "profile.c"
                                                                    {
#line 8579 "profile.c"
                                                                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_73_73, (MR_ArrayPtr) profile__V_18_18, (MR_ArrayPtr) profile__V_47_47);
                                                                    }
#line 82 "profile.m"
                                                                    if (profile__succeeded)
#line 82 "profile.m"
                                                                      {
#line 8586 "profile.c"
                                                                        profile__TypeCtorInfo_74_74 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 8588 "profile.c"
                                                                        {
#line 8590 "profile.c"
                                                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_74_74, (MR_ArrayPtr) profile__V_19_19, (MR_ArrayPtr) profile__V_48_48);
                                                                        }
#line 82 "profile.m"
                                                                        if (profile__succeeded)
#line 82 "profile.m"
                                                                          {
#line 8597 "profile.c"
                                                                            profile__TypeCtorInfo_75_75 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 8599 "profile.c"
                                                                            {
#line 8601 "profile.c"
                                                                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_75_75, (MR_ArrayPtr) profile__V_20_20, (MR_ArrayPtr) profile__V_49_49);
                                                                            }
#line 82 "profile.m"
                                                                            if (profile__succeeded)
#line 82 "profile.m"
                                                                              {
#line 8608 "profile.c"
                                                                                profile__TypeCtorInfo_76_76 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 8610 "profile.c"
                                                                                {
#line 8612 "profile.c"
                                                                                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_76_76, (MR_ArrayPtr) profile__V_21_21, (MR_ArrayPtr) profile__V_50_50);
                                                                                }
#line 82 "profile.m"
                                                                                if (profile__succeeded)
#line 82 "profile.m"
                                                                                  {
#line 8619 "profile.c"
                                                                                    profile__TypeCtorInfo_77_77 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 8621 "profile.c"
                                                                                    {
#line 8623 "profile.c"
                                                                                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_77_77, (MR_ArrayPtr) profile__V_22_22, (MR_ArrayPtr) profile__V_51_51);
                                                                                    }
#line 82 "profile.m"
                                                                                    if (profile__succeeded)
#line 82 "profile.m"
                                                                                      {
#line 8630 "profile.c"
                                                                                        profile__TypeCtorInfo_78_78 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 8632 "profile.c"
                                                                                        {
#line 8634 "profile.c"
                                                                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_78_78, (MR_ArrayPtr) profile__V_23_23, (MR_ArrayPtr) profile__V_52_52);
                                                                                        }
#line 82 "profile.m"
                                                                                        if (profile__succeeded)
#line 82 "profile.m"
                                                                                          {
#line 8641 "profile.c"
                                                                                            profile__TypeCtorInfo_79_79 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 8643 "profile.c"
                                                                                            {
#line 8645 "profile.c"
                                                                                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_79_79, (MR_ArrayPtr) profile__V_24_24, (MR_ArrayPtr) profile__V_53_53);
                                                                                            }
#line 82 "profile.m"
                                                                                            if (profile__succeeded)
#line 82 "profile.m"
                                                                                              {
#line 8652 "profile.c"
                                                                                                profile__TypeCtorInfo_80_80 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 8654 "profile.c"
                                                                                                {
#line 8656 "profile.c"
                                                                                                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_80_80, (MR_ArrayPtr) profile__V_25_25, (MR_ArrayPtr) profile__V_54_54);
                                                                                                }
#line 82 "profile.m"
                                                                                                if (profile__succeeded)
#line 82 "profile.m"
                                                                                                  {
#line 8663 "profile.c"
                                                                                                    profile__TypeInfo_81_81 = (MR_Word) &profile_scalar_common_2[1];
#line 8665 "profile.c"
                                                                                                    {
#line 8667 "profile.c"
                                                                                                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_81_81, (MR_ArrayPtr) profile__V_26_26, (MR_ArrayPtr) profile__V_55_55);
                                                                                                    }
#line 82 "profile.m"
                                                                                                    if (profile__succeeded)
#line 82 "profile.m"
                                                                                                      {
#line 8674 "profile.c"
                                                                                                        profile__TypeInfo_82_82 = (MR_Word) &profile_scalar_common_2[1];
#line 8676 "profile.c"
                                                                                                        {
#line 8678 "profile.c"
                                                                                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_82_82, (MR_ArrayPtr) profile__V_27_27, (MR_ArrayPtr) profile__V_56_56);
                                                                                                        }
#line 82 "profile.m"
                                                                                                        if (profile__succeeded)
#line 82 "profile.m"
                                                                                                          {
#line 8685 "profile.c"
                                                                                                            profile__TypeInfo_83_83 = (MR_Word) &profile_scalar_common_2[2];
#line 8687 "profile.c"
                                                                                                            {
#line 8689 "profile.c"
                                                                                                              profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_83_83, ((MR_Box) (profile__V_28_28)), ((MR_Box) (profile__V_57_57)));
                                                                                                            }
#line 82 "profile.m"
                                                                                                            if (profile__succeeded)
#line 82 "profile.m"
                                                                                                              {
#line 8696 "profile.c"
                                                                                                                profile__TypeInfo_84_84 = (MR_Word) &profile_scalar_common_1[19];
#line 8698 "profile.c"
                                                                                                                {
#line 8700 "profile.c"
                                                                                                                  profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_84_84, ((MR_Box) (profile__V_29_29)), ((MR_Box) (profile__V_58_58)));
                                                                                                                }
#line 82 "profile.m"
                                                                                                                if (profile__succeeded)
#line 82 "profile.m"
                                                                                                                  {
#line 8707 "profile.c"
                                                                                                                    {
#line 8709 "profile.c"
                                                                                                                      profile__succeeded = exclude____Unify____exclude_file_0_0(profile__V_30_30, profile__V_59_59);
                                                                                                                    }
#line 82 "profile.m"
                                                                                                                    if (profile__succeeded)
#line 82 "profile.m"
                                                                                                                      {
#line 8716 "profile.c"
                                                                                                                        profile__TypeInfo_86_86 = (MR_Word) &profile_scalar_common_1[21];
#line 8718 "profile.c"
                                                                                                                        {
#line 8720 "profile.c"
                                                                                                                          return profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_86_86, ((MR_Box) (profile__V_31_31)), ((MR_Box) (profile__V_60_60)));
                                                                                                                        }
#line 82 "profile.m"
                                                                                                                      }
#line 82 "profile.m"
                                                                                                                  }
#line 82 "profile.m"
                                                                                                              }
#line 82 "profile.m"
                                                                                                          }
#line 82 "profile.m"
                                                                                                      }
#line 82 "profile.m"
                                                                                                  }
#line 82 "profile.m"
                                                                                              }
#line 82 "profile.m"
                                                                                          }
#line 82 "profile.m"
                                                                                      }
#line 82 "profile.m"
                                                                                  }
#line 82 "profile.m"
                                                                              }
#line 82 "profile.m"
                                                                          }
#line 82 "profile.m"
                                                                      }
#line 82 "profile.m"
                                                                  }
#line 82 "profile.m"
                                                              }
#line 82 "profile.m"
                                                          }
#line 82 "profile.m"
                                                      }
#line 82 "profile.m"
                                                  }
#line 82 "profile.m"
                                              }
#line 82 "profile.m"
                                          }
#line 82 "profile.m"
                                      }
#line 82 "profile.m"
                                  }
#line 82 "profile.m"
                              }
#line 82 "profile.m"
                          }
#line 82 "profile.m"
                      }
#line 82 "profile.m"
                  }
#line 82 "profile.m"
              }
#line 82 "profile.m"
          }
#line 82 "profile.m"
      }
#line 82 "profile.m"
    return profile__succeeded;
#line 82 "profile.m"
  }
#line 82 "profile.m"
}

#line 307 "profile.m"
void MR_CALL 
profile____Compare____coverage_data_type_0_0(
#line 307 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 307 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 307 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 307 "profile.m"
{
#line 307 "profile.m"
  {
#line 307 "profile.m"
    MR_bool profile__succeeded;
#line 307 "profile.m"
    MR_Integer profile__Cast_HeadVar1_4 = (MR_Integer) profile__HeadVar__2_2;
#line 307 "profile.m"
    MR_Integer profile__Cast_HeadVar2_5 = (MR_Integer) profile__HeadVar__3_3;

#line 307 "profile.m"
    {
#line 307 "profile.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__Cast_HeadVar1_4, profile__Cast_HeadVar2_5);
#line 307 "profile.m"
      return;
    }
#line 307 "profile.m"
  }
#line 307 "profile.m"
}

#line 307 "profile.m"
MR_bool MR_CALL 
profile____Unify____coverage_data_type_0_0(
#line 307 "profile.m"
  MR_Word profile__HeadVar__2_1,
#line 307 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 307 "profile.m"
{
#line 8829 "profile.c"
  {
#line 8831 "profile.c"
    MR_bool profile__succeeded = (profile__HeadVar__2_1 == profile__HeadVar__2_2);

#line 8834 "profile.c"
    return profile__succeeded;
#line 8836 "profile.c"
  }
#line 307 "profile.m"
}

#line 156 "profile.m"
void MR_CALL 
profile____Compare____compensation_table_0_0(
#line 156 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 156 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 156 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 156 "profile.m"
{
#line 156 "profile.m"
  {
#line 156 "profile.m"
    MR_bool profile__succeeded;
#line 156 "profile.m"
    MR_Word profile__Cast_HeadVar1_4 = profile__HeadVar__2_2;
#line 156 "profile.m"
    MR_Word profile__Cast_HeadVar2_5 = profile__HeadVar__3_3;

#line 156 "profile.m"
    {
#line 156 "profile.m"
      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_2[1], profile__HeadVar__1_1, ((MR_Box) (profile__Cast_HeadVar1_4)), ((MR_Box) (profile__Cast_HeadVar2_5)));
#line 156 "profile.m"
      return;
    }
#line 156 "profile.m"
  }
#line 156 "profile.m"
}

#line 156 "profile.m"
MR_bool MR_CALL 
profile____Unify____compensation_table_0_0(
#line 156 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 156 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 156 "profile.m"
{
#line 156 "profile.m"
  {
#line 156 "profile.m"
    MR_bool profile__succeeded;
#line 156 "profile.m"
    MR_Word profile__Cast_HeadVar1_3 = profile__HeadVar__1_1;
#line 156 "profile.m"
    MR_Word profile__Cast_HeadVar2_4 = profile__HeadVar__2_2;

#line 156 "profile.m"
    {
#line 156 "profile.m"
      return profile__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &profile_scalar_common_2[1], ((MR_Box) (profile__Cast_HeadVar1_3)), ((MR_Box) (profile__Cast_HeadVar2_4)));
    }
#line 156 "profile.m"
    return profile__succeeded;
#line 156 "profile.m"
  }
#line 156 "profile.m"
}

#line 188 "profile.m"
void MR_CALL 
profile____Compare____clique_ptr_0_0(
#line 188 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 188 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 188 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 188 "profile.m"
{
#line 188 "profile.m"
  {
#line 188 "profile.m"
    MR_bool profile__succeeded;
#line 188 "profile.m"
    MR_Integer profile__CastX_6 = (MR_Integer) profile__HeadVar__2_2;
#line 188 "profile.m"
    MR_Integer profile__CastY_7 = (MR_Integer) profile__HeadVar__3_3;

#line 188 "profile.m"
    profile__succeeded = (profile__CastX_6 == profile__CastY_7);
#line 188 "profile.m"
    if (profile__succeeded)
#line 8927 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 188 "profile.m"
    else
#line 188 "profile.m"
      {
#line 188 "profile.m"
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;
#line 188 "profile.m"
        MR_Integer profile__V_5_5 = (MR_Integer) profile__HeadVar__3_3;

#line 188 "profile.m"
        {
#line 188 "profile.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_4_4, profile__V_5_5);
#line 188 "profile.m"
          return;
        }
#line 188 "profile.m"
      }
#line 188 "profile.m"
  }
#line 188 "profile.m"
}

#line 188 "profile.m"
MR_bool MR_CALL 
profile____Unify____clique_ptr_0_0(
#line 188 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 188 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 188 "profile.m"
{
#line 188 "profile.m"
  {
#line 188 "profile.m"
    MR_bool profile__succeeded;
#line 188 "profile.m"
    MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
#line 188 "profile.m"
    MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

#line 188 "profile.m"
    profile__succeeded = (profile__CastX_5 == profile__CastY_6);
#line 188 "profile.m"
    if (profile__succeeded)
#line 188 "profile.m"
      profile__succeeded = MR_TRUE;
#line 188 "profile.m"
    else
#line 188 "profile.m"
      {
#line 188 "profile.m"
        MR_Integer profile__V_3_3 = (MR_Integer) profile__HeadVar__1_1;
#line 188 "profile.m"
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;

#line 8985 "profile.c"
        profile__succeeded = (profile__V_3_3 == profile__V_4_4);
#line 188 "profile.m"
      }
#line 188 "profile.m"
    return profile__succeeded;
#line 188 "profile.m"
  }
#line 188 "profile.m"
}

#line 43 "profile.m"
void MR_CALL 
profile____Compare____canonical_flag_0_0(
#line 43 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 43 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 43 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 43 "profile.m"
{
#line 43 "profile.m"
  {
#line 43 "profile.m"
    MR_bool profile__succeeded;
#line 43 "profile.m"
    MR_Integer profile__Cast_HeadVar1_4 = (MR_Integer) profile__HeadVar__2_2;
#line 43 "profile.m"
    MR_Integer profile__Cast_HeadVar2_5 = (MR_Integer) profile__HeadVar__3_3;

#line 43 "profile.m"
    {
#line 43 "profile.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__Cast_HeadVar1_4, profile__Cast_HeadVar2_5);
#line 43 "profile.m"
      return;
    }
#line 43 "profile.m"
  }
#line 43 "profile.m"
}

#line 43 "profile.m"
MR_bool MR_CALL 
profile____Unify____canonical_flag_0_0(
#line 43 "profile.m"
  MR_Word profile__HeadVar__2_1,
#line 43 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 43 "profile.m"
{
#line 9037 "profile.c"
  {
#line 9039 "profile.c"
    MR_bool profile__succeeded = (profile__HeadVar__2_1 == profile__HeadVar__2_2);

#line 9042 "profile.c"
    return profile__succeeded;
#line 9044 "profile.c"
  }
#line 43 "profile.m"
}

#line 173 "profile.m"
void MR_CALL 
profile____Compare____call_site_statics_0_0(
#line 173 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 173 "profile.m"
  MR_ArrayPtr profile__HeadVar__2_2,
#line 173 "profile.m"
  MR_ArrayPtr profile__HeadVar__3_3)
#line 173 "profile.m"
{
#line 173 "profile.m"
  {
#line 173 "profile.m"
    MR_bool profile__succeeded;
#line 173 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar1_4 = profile__HeadVar__2_2;
#line 173 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar2_5 = profile__HeadVar__3_3;

#line 173 "profile.m"
    {
#line 173 "profile.m"
      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[10], profile__HeadVar__1_1, ((MR_Box) (profile__Cast_HeadVar1_4)), ((MR_Box) (profile__Cast_HeadVar2_5)));
#line 173 "profile.m"
      return;
    }
#line 173 "profile.m"
  }
#line 173 "profile.m"
}

#line 173 "profile.m"
MR_bool MR_CALL 
profile____Unify____call_site_statics_0_0(
#line 173 "profile.m"
  MR_ArrayPtr profile__HeadVar__1_1,
#line 173 "profile.m"
  MR_ArrayPtr profile__HeadVar__2_2)
#line 173 "profile.m"
{
#line 173 "profile.m"
  {
#line 173 "profile.m"
    MR_bool profile__succeeded;
#line 173 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar1_3 = profile__HeadVar__1_1;
#line 173 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar2_4 = profile__HeadVar__2_2;

#line 173 "profile.m"
    {
#line 173 "profile.m"
      return profile__succeeded = mercury__array____Unify____array_1_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_ArrayPtr) profile__Cast_HeadVar1_3, (MR_ArrayPtr) profile__Cast_HeadVar2_4);
    }
#line 173 "profile.m"
    return profile__succeeded;
#line 173 "profile.m"
  }
#line 173 "profile.m"
}

#line 185 "profile.m"
void MR_CALL 
profile____Compare____call_site_static_ptr_0_0(
#line 185 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 185 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 185 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 185 "profile.m"
{
#line 185 "profile.m"
  {
#line 185 "profile.m"
    MR_bool profile__succeeded;
#line 185 "profile.m"
    MR_Integer profile__CastX_6 = (MR_Integer) profile__HeadVar__2_2;
#line 185 "profile.m"
    MR_Integer profile__CastY_7 = (MR_Integer) profile__HeadVar__3_3;

#line 185 "profile.m"
    profile__succeeded = (profile__CastX_6 == profile__CastY_7);
#line 185 "profile.m"
    if (profile__succeeded)
#line 9135 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 185 "profile.m"
    else
#line 185 "profile.m"
      {
#line 185 "profile.m"
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;
#line 185 "profile.m"
        MR_Integer profile__V_5_5 = (MR_Integer) profile__HeadVar__3_3;

#line 185 "profile.m"
        {
#line 185 "profile.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_4_4, profile__V_5_5);
#line 185 "profile.m"
          return;
        }
#line 185 "profile.m"
      }
#line 185 "profile.m"
  }
#line 185 "profile.m"
}

#line 185 "profile.m"
MR_bool MR_CALL 
profile____Unify____call_site_static_ptr_0_0(
#line 185 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 185 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 185 "profile.m"
{
#line 185 "profile.m"
  {
#line 185 "profile.m"
    MR_bool profile__succeeded;
#line 185 "profile.m"
    MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
#line 185 "profile.m"
    MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

#line 185 "profile.m"
    profile__succeeded = (profile__CastX_5 == profile__CastY_6);
#line 185 "profile.m"
    if (profile__succeeded)
#line 185 "profile.m"
      profile__succeeded = MR_TRUE;
#line 185 "profile.m"
    else
#line 185 "profile.m"
      {
#line 185 "profile.m"
        MR_Integer profile__V_3_3 = (MR_Integer) profile__HeadVar__1_1;
#line 185 "profile.m"
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;

#line 9193 "profile.c"
        profile__succeeded = (profile__V_3_3 == profile__V_4_4);
#line 185 "profile.m"
      }
#line 185 "profile.m"
    return profile__succeeded;
#line 185 "profile.m"
  }
#line 185 "profile.m"
}

#line 174 "profile.m"
void MR_CALL 
profile____Compare____call_site_static_map_0_0(
#line 174 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 174 "profile.m"
  MR_ArrayPtr profile__HeadVar__2_2,
#line 174 "profile.m"
  MR_ArrayPtr profile__HeadVar__3_3)
#line 174 "profile.m"
{
#line 174 "profile.m"
  {
#line 174 "profile.m"
    MR_bool profile__succeeded;
#line 174 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar1_4 = profile__HeadVar__2_2;
#line 174 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar2_5 = profile__HeadVar__3_3;

#line 174 "profile.m"
    {
#line 174 "profile.m"
      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[9], profile__HeadVar__1_1, ((MR_Box) (profile__Cast_HeadVar1_4)), ((MR_Box) (profile__Cast_HeadVar2_5)));
#line 174 "profile.m"
      return;
    }
#line 174 "profile.m"
  }
#line 174 "profile.m"
}

#line 174 "profile.m"
MR_bool MR_CALL 
profile____Unify____call_site_static_map_0_0(
#line 174 "profile.m"
  MR_ArrayPtr profile__HeadVar__1_1,
#line 174 "profile.m"
  MR_ArrayPtr profile__HeadVar__2_2)
#line 174 "profile.m"
{
#line 174 "profile.m"
  {
#line 174 "profile.m"
    MR_bool profile__succeeded;
#line 174 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar1_3 = profile__HeadVar__1_1;
#line 174 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar2_4 = profile__HeadVar__2_2;

#line 174 "profile.m"
    {
#line 174 "profile.m"
      return profile__succeeded = mercury__array____Unify____array_1_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) profile__Cast_HeadVar1_3, (MR_ArrayPtr) profile__Cast_HeadVar2_4);
    }
#line 174 "profile.m"
    return profile__succeeded;
#line 174 "profile.m"
  }
#line 174 "profile.m"
}

#line 244 "profile.m"
void MR_CALL 
profile____Compare____call_site_static_0_0(
#line 244 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 244 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 244 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 244 "profile.m"
{
#line 244 "profile.m"
  {
#line 244 "profile.m"
    MR_bool profile__succeeded;
#line 244 "profile.m"
    MR_Integer profile__CastX_18 = (MR_Integer) profile__HeadVar__2_2;
#line 244 "profile.m"
    MR_Integer profile__CastY_19 = (MR_Integer) profile__HeadVar__3_3;

#line 244 "profile.m"
    profile__succeeded = (profile__CastX_18 == profile__CastY_19);
#line 244 "profile.m"
    if (profile__succeeded)
#line 9290 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 244 "profile.m"
    else
#line 244 "profile.m"
      {
#line 244 "profile.m"
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 244 "profile.m"
        MR_Integer profile__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 244 "profile.m"
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
#line 244 "profile.m"
        MR_Integer profile__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
#line 244 "profile.m"
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
#line 244 "profile.m"
        MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
#line 244 "profile.m"
        MR_Integer profile__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
#line 244 "profile.m"
        MR_Word profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
#line 244 "profile.m"
        MR_Integer profile__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 3)));
#line 244 "profile.m"
        MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 4)));
#line 244 "profile.m"
        MR_Word profile__V_14_14;
#line 244 "profile.m"
        MR_Integer profile__V_25_25 = (MR_Integer) profile__V_4_4;
#line 244 "profile.m"
        MR_Integer profile__V_26_26 = (MR_Integer) profile__V_9_9;

#line 244 "profile.m"
        {
#line 244 "profile.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_14_14, profile__V_25_25, profile__V_26_26);
        }
#line 9328 "profile.c"
        profile__succeeded = (profile__V_14_14 == (MR_Integer) 0);
#line 244 "profile.m"
        profile__succeeded = !(profile__succeeded);
#line 244 "profile.m"
        if (profile__succeeded)
#line 244 "profile.m"
          *profile__HeadVar__1_1 = profile__V_14_14;
#line 244 "profile.m"
        else
#line 244 "profile.m"
          {
#line 244 "profile.m"
            MR_Word profile__V_15_15;

#line 244 "profile.m"
            {
#line 244 "profile.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_15_15, profile__V_5_5, profile__V_10_10);
            }
#line 9348 "profile.c"
            profile__succeeded = (profile__V_15_15 == (MR_Integer) 0);
#line 244 "profile.m"
            profile__succeeded = !(profile__succeeded);
#line 244 "profile.m"
            if (profile__succeeded)
#line 244 "profile.m"
              *profile__HeadVar__1_1 = profile__V_15_15;
#line 244 "profile.m"
            else
#line 244 "profile.m"
              {
#line 244 "profile.m"
                MR_Word profile__V_16_16;

#line 244 "profile.m"
                {
#line 244 "profile.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[8], &profile__V_16_16, ((MR_Box) (profile__V_6_6)), ((MR_Box) (profile__V_11_11)));
                }
#line 9368 "profile.c"
                profile__succeeded = (profile__V_16_16 == (MR_Integer) 0);
#line 244 "profile.m"
                profile__succeeded = !(profile__succeeded);
#line 244 "profile.m"
                if (profile__succeeded)
#line 244 "profile.m"
                  *profile__HeadVar__1_1 = profile__V_16_16;
#line 244 "profile.m"
                else
#line 244 "profile.m"
                  {
#line 244 "profile.m"
                    MR_Word profile__V_17_17;

#line 244 "profile.m"
                    {
#line 244 "profile.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_17_17, profile__V_7_7, profile__V_12_12);
                    }
#line 9388 "profile.c"
                    profile__succeeded = (profile__V_17_17 == (MR_Integer) 0);
#line 244 "profile.m"
                    profile__succeeded = !(profile__succeeded);
#line 244 "profile.m"
                    if (profile__succeeded)
#line 244 "profile.m"
                      *profile__HeadVar__1_1 = profile__V_17_17;
#line 244 "profile.m"
                    else
#line 244 "profile.m"
                      {
#line 244 "profile.m"
                        mdbcomp__goal_path____Compare____reverse_goal_path_0_0(profile__HeadVar__1_1, profile__V_8_8, profile__V_13_13);
#line 244 "profile.m"
                        return;
                      }
#line 244 "profile.m"
                  }
#line 244 "profile.m"
              }
#line 244 "profile.m"
          }
#line 244 "profile.m"
      }
#line 244 "profile.m"
  }
#line 244 "profile.m"
}

#line 244 "profile.m"
MR_bool MR_CALL 
profile____Unify____call_site_static_0_0(
#line 244 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 244 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 244 "profile.m"
{
#line 244 "profile.m"
  {
#line 244 "profile.m"
    MR_bool profile__succeeded;
#line 244 "profile.m"
    MR_Integer profile__CastX_13 = (MR_Integer) profile__HeadVar__1_1;
#line 244 "profile.m"
    MR_Integer profile__CastY_14 = (MR_Integer) profile__HeadVar__2_2;

#line 244 "profile.m"
    profile__succeeded = (profile__CastX_13 == profile__CastY_14);
#line 244 "profile.m"
    if (profile__succeeded)
#line 244 "profile.m"
      profile__succeeded = MR_TRUE;
#line 244 "profile.m"
    else
#line 244 "profile.m"
      {
#line 244 "profile.m"
        MR_Word profile__TypeCtorInfo_15_15;
#line 244 "profile.m"
        MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
#line 244 "profile.m"
        MR_Integer profile__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
#line 244 "profile.m"
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
#line 244 "profile.m"
        MR_Integer profile__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 3)));
#line 244 "profile.m"
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 4)));
#line 244 "profile.m"
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 244 "profile.m"
        MR_Integer profile__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 244 "profile.m"
        MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
#line 244 "profile.m"
        MR_Integer profile__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
#line 244 "profile.m"
        MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
#line 179 "profile.m"
        MR_Integer profile__CastX_19 = (MR_Integer) profile__V_3_3;
#line 179 "profile.m"
        MR_Integer profile__CastY_20 = (MR_Integer) profile__V_8_8;

#line 179 "profile.m"
        profile__succeeded = (profile__CastX_19 == profile__CastY_20);
#line 179 "profile.m"
        if (profile__succeeded)
#line 179 "profile.m"
          profile__succeeded = MR_TRUE;
#line 179 "profile.m"
        else
#line 179 "profile.m"
          {
#line 179 "profile.m"
            MR_Integer profile__V_17_17 = (MR_Integer) profile__V_3_3;
#line 179 "profile.m"
            MR_Integer profile__V_18_18 = (MR_Integer) profile__V_8_8;

#line 9488 "profile.c"
            profile__succeeded = (profile__V_17_17 == profile__V_18_18);
#line 179 "profile.m"
          }
#line 244 "profile.m"
        if (profile__succeeded)
#line 244 "profile.m"
          {
#line 9496 "profile.c"
            profile__succeeded = (profile__V_4_4 == profile__V_9_9);
#line 244 "profile.m"
            if (profile__succeeded)
#line 244 "profile.m"
              {
#line 9502 "profile.c"
                profile__TypeCtorInfo_15_15 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
#line 9504 "profile.c"
                {
#line 9506 "profile.c"
                  profile__succeeded = profile____Unify____call_site_kind_and_callee_1_0(profile__TypeCtorInfo_15_15, profile__V_5_5, profile__V_10_10);
                }
#line 244 "profile.m"
                if (profile__succeeded)
#line 244 "profile.m"
                  {
#line 9513 "profile.c"
                    profile__succeeded = (profile__V_6_6 == profile__V_11_11);
#line 244 "profile.m"
                    if (profile__succeeded)
#line 9517 "profile.c"
                      {
#line 9519 "profile.c"
                        return profile__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(profile__V_7_7, profile__V_12_12);
                      }
#line 244 "profile.m"
                  }
#line 244 "profile.m"
              }
#line 244 "profile.m"
          }
#line 244 "profile.m"
      }
#line 244 "profile.m"
    return profile__succeeded;
#line 244 "profile.m"
  }
#line 244 "profile.m"
}

#line 288 "profile.m"
void MR_CALL 
profile____Compare____call_site_kind_and_info_1_0(
#line 288 "profile.m"
  MR_Word profile__TypeInfo_for_T_16,
#line 288 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 288 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 288 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 288 "profile.m"
{
#line 288 "profile.m"
  {
#line 288 "profile.m"
    MR_bool profile__succeeded;
#line 288 "profile.m"
    MR_Integer profile__CastX_14 = (MR_Integer) profile__HeadVar__2_2;
#line 288 "profile.m"
    MR_Integer profile__CastY_15 = (MR_Integer) profile__HeadVar__3_3;

#line 288 "profile.m"
    profile__succeeded = (profile__CastX_14 == profile__CastY_15);
#line 288 "profile.m"
    if (profile__succeeded)
#line 9563 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 288 "profile.m"
    else
#line 288 "profile.m"
      if ((profile__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 288 "profile.m"
        if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 288 "profile.m"
          *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 288 "profile.m"
        else
#line 288 "profile.m"
          if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 288 "profile.m"
            *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 288 "profile.m"
          else
#line 288 "profile.m"
            if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 288 "profile.m"
              *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 288 "profile.m"
            else
#line 288 "profile.m"
              if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "profile.m"
                *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 288 "profile.m"
              else
#line 9593 "profile.c"
                *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 288 "profile.m"
      else
#line 288 "profile.m"
        if ((profile__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 288 "profile.m"
          if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 288 "profile.m"
            *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 288 "profile.m"
          else
#line 288 "profile.m"
            if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 288 "profile.m"
              *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 288 "profile.m"
            else
#line 288 "profile.m"
              if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 288 "profile.m"
                *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 288 "profile.m"
              else
#line 288 "profile.m"
                if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "profile.m"
                  *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 288 "profile.m"
                else
#line 9623 "profile.c"
                  *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 288 "profile.m"
        else
#line 288 "profile.m"
          if ((profile__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 288 "profile.m"
            if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 288 "profile.m"
              *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 288 "profile.m"
            else
#line 288 "profile.m"
              if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 288 "profile.m"
                *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 288 "profile.m"
              else
#line 288 "profile.m"
                if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 288 "profile.m"
                  *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 288 "profile.m"
                else
#line 288 "profile.m"
                  if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "profile.m"
                    *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 288 "profile.m"
                  else
#line 9653 "profile.c"
                    *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 288 "profile.m"
          else
#line 288 "profile.m"
            if ((profile__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "profile.m"
              if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 288 "profile.m"
                *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 288 "profile.m"
              else
#line 288 "profile.m"
                if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 288 "profile.m"
                  *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 288 "profile.m"
                else
#line 288 "profile.m"
                  if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 288 "profile.m"
                    *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 288 "profile.m"
                  else
#line 288 "profile.m"
                    if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "profile.m"
                      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 288 "profile.m"
                    else
#line 9683 "profile.c"
                      *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 288 "profile.m"
            else
#line 288 "profile.m"
              {
#line 288 "profile.m"
                MR_Box profile__V_17_17 = (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 0));

#line 288 "profile.m"
                if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 9694 "profile.c"
                  *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 288 "profile.m"
                else
#line 288 "profile.m"
                  if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 9700 "profile.c"
                    *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 288 "profile.m"
                  else
#line 288 "profile.m"
                    if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 9706 "profile.c"
                      *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 288 "profile.m"
                    else
#line 288 "profile.m"
                      if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9712 "profile.c"
                        *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 288 "profile.m"
                      else
#line 288 "profile.m"
                        {
#line 288 "profile.m"
                          MR_Box profile__V_5_5 = (MR_hl_field(MR_mktag(1), profile__HeadVar__3_3, (MR_Integer) 0));

#line 288 "profile.m"
                          {
#line 288 "profile.m"
                            mercury__builtin__compare_3_p_0(profile__TypeInfo_for_T_16, profile__HeadVar__1_1, profile__V_17_17, profile__V_5_5);
#line 288 "profile.m"
                            return;
                          }
#line 288 "profile.m"
                        }
#line 288 "profile.m"
              }
#line 288 "profile.m"
  }
#line 288 "profile.m"
}

#line 288 "profile.m"
MR_bool MR_CALL 
profile____Unify____call_site_kind_and_info_1_0(
#line 288 "profile.m"
  MR_Word profile__TypeInfo_for_T_15,
#line 288 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 288 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 288 "profile.m"
{
#line 288 "profile.m"
  {
#line 288 "profile.m"
    MR_bool profile__succeeded;
#line 288 "profile.m"
    MR_Integer profile__CastX_13 = (MR_Integer) profile__HeadVar__1_1;
#line 288 "profile.m"
    MR_Integer profile__CastY_14 = (MR_Integer) profile__HeadVar__2_2;

#line 288 "profile.m"
    profile__succeeded = (profile__CastX_13 == profile__CastY_14);
#line 288 "profile.m"
    if (profile__succeeded)
#line 288 "profile.m"
      profile__succeeded = MR_TRUE;
#line 288 "profile.m"
    else
#line 288 "profile.m"
      if ((profile__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 288 "profile.m"
        {
#line 288 "profile.m"
          MR_Integer profile__CastX_11 = (MR_Integer) profile__HeadVar__1_1;
#line 288 "profile.m"
          MR_Integer profile__CastY_12 = (MR_Integer) profile__HeadVar__2_2;

#line 288 "profile.m"
          profile__succeeded = (profile__CastY_12 == profile__CastX_11);
#line 288 "profile.m"
        }
#line 288 "profile.m"
      else
#line 288 "profile.m"
        if ((profile__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 288 "profile.m"
          {
#line 288 "profile.m"
            MR_Integer profile__CastX_7 = (MR_Integer) profile__HeadVar__1_1;
#line 288 "profile.m"
            MR_Integer profile__CastY_8 = (MR_Integer) profile__HeadVar__2_2;

#line 288 "profile.m"
            profile__succeeded = (profile__CastY_8 == profile__CastX_7);
#line 288 "profile.m"
          }
#line 288 "profile.m"
        else
#line 288 "profile.m"
          if ((profile__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 288 "profile.m"
            {
#line 288 "profile.m"
              MR_Integer profile__CastX_9 = (MR_Integer) profile__HeadVar__1_1;
#line 288 "profile.m"
              MR_Integer profile__CastY_10 = (MR_Integer) profile__HeadVar__2_2;

#line 288 "profile.m"
              profile__succeeded = (profile__CastY_10 == profile__CastX_9);
#line 288 "profile.m"
            }
#line 288 "profile.m"
          else
#line 288 "profile.m"
            if ((profile__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "profile.m"
              {
#line 288 "profile.m"
                MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
#line 288 "profile.m"
                MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

#line 288 "profile.m"
                profile__succeeded = (profile__CastY_6 == profile__CastX_5);
#line 288 "profile.m"
              }
#line 288 "profile.m"
            else
#line 288 "profile.m"
              {
#line 288 "profile.m"
                MR_Box profile__V_3_3 = (MR_hl_field(MR_mktag(1), profile__HeadVar__1_1, (MR_Integer) 0));
#line 288 "profile.m"
                MR_Box profile__V_4_4;

#line 288 "profile.m"
                profile__succeeded = ((MR_tag((MR_Word) profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 288 "profile.m"
                if (profile__succeeded)
#line 288 "profile.m"
                  {
#line 288 "profile.m"
                    profile__V_4_4 = (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 0));
#line 9840 "profile.c"
                    {
#line 9842 "profile.c"
                      return profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_for_T_15, profile__V_3_3, profile__V_4_4);
                    }
#line 288 "profile.m"
                  }
#line 288 "profile.m"
              }
#line 288 "profile.m"
    return profile__succeeded;
#line 288 "profile.m"
  }
#line 288 "profile.m"
}

#line 275 "profile.m"
void MR_CALL 
profile____Compare____call_site_kind_and_callee_1_0(
#line 275 "profile.m"
  MR_Word profile__TypeInfo_for_T_27,
#line 275 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 275 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 275 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 275 "profile.m"
{
#line 275 "profile.m"
  {
#line 275 "profile.m"
    MR_bool profile__succeeded;
#line 275 "profile.m"
    MR_Integer profile__CastX_25 = (MR_Integer) profile__HeadVar__2_2;
#line 275 "profile.m"
    MR_Integer profile__CastY_26 = (MR_Integer) profile__HeadVar__3_3;

#line 275 "profile.m"
    profile__succeeded = (profile__CastX_25 == profile__CastY_26);
#line 275 "profile.m"
    if (profile__succeeded)
#line 9882 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 275 "profile.m"
    else
#line 275 "profile.m"
      if ((profile__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 275 "profile.m"
        if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 275 "profile.m"
          *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 275 "profile.m"
        else
#line 275 "profile.m"
          if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 275 "profile.m"
            *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 275 "profile.m"
          else
#line 275 "profile.m"
            if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 275 "profile.m"
              *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 275 "profile.m"
            else
#line 275 "profile.m"
              if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "profile.m"
                *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 275 "profile.m"
              else
#line 9912 "profile.c"
                *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 275 "profile.m"
      else
#line 275 "profile.m"
        if ((profile__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 275 "profile.m"
          if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 275 "profile.m"
            *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 275 "profile.m"
          else
#line 275 "profile.m"
            if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 275 "profile.m"
              *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 275 "profile.m"
            else
#line 275 "profile.m"
              if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 275 "profile.m"
                *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 275 "profile.m"
              else
#line 275 "profile.m"
                if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "profile.m"
                  *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 275 "profile.m"
                else
#line 9942 "profile.c"
                  *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 275 "profile.m"
        else
#line 275 "profile.m"
          if ((profile__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 275 "profile.m"
            if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 275 "profile.m"
              *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 275 "profile.m"
            else
#line 275 "profile.m"
              if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 275 "profile.m"
                *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 275 "profile.m"
              else
#line 275 "profile.m"
                if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 275 "profile.m"
                  *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 275 "profile.m"
                else
#line 275 "profile.m"
                  if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "profile.m"
                    *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 275 "profile.m"
                  else
#line 9972 "profile.c"
                    *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 275 "profile.m"
          else
#line 275 "profile.m"
            if ((profile__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "profile.m"
              if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 275 "profile.m"
                *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 275 "profile.m"
              else
#line 275 "profile.m"
                if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 275 "profile.m"
                  *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 275 "profile.m"
                else
#line 275 "profile.m"
                  if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 275 "profile.m"
                    *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 275 "profile.m"
                  else
#line 275 "profile.m"
                    if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "profile.m"
                      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 275 "profile.m"
                    else
#line 10002 "profile.c"
                      *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 275 "profile.m"
            else
#line 275 "profile.m"
              {
#line 275 "profile.m"
                MR_String profile__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "profile.m"
                MR_Box profile__V_30_30 = (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 0));

#line 275 "profile.m"
                if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 10015 "profile.c"
                  *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 275 "profile.m"
                else
#line 275 "profile.m"
                  if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 10021 "profile.c"
                    *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 275 "profile.m"
                  else
#line 275 "profile.m"
                    if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 10027 "profile.c"
                      *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 275 "profile.m"
                    else
#line 275 "profile.m"
                      if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 10033 "profile.c"
                        *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 275 "profile.m"
                      else
#line 275 "profile.m"
                        {
#line 275 "profile.m"
                          MR_Box profile__V_6_6 = (MR_hl_field(MR_mktag(1), profile__HeadVar__3_3, (MR_Integer) 0));
#line 275 "profile.m"
                          MR_String profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "profile.m"
                          MR_Word profile__V_8_8;

#line 275 "profile.m"
                          {
#line 275 "profile.m"
                            mercury__builtin__compare_3_p_0(profile__TypeInfo_for_T_27, &profile__V_8_8, profile__V_30_30, profile__V_6_6);
                          }
#line 10051 "profile.c"
                          profile__succeeded = (profile__V_8_8 == (MR_Integer) 0);
#line 275 "profile.m"
                          profile__succeeded = !(profile__succeeded);
#line 275 "profile.m"
                          if (profile__succeeded)
#line 275 "profile.m"
                            *profile__HeadVar__1_1 = profile__V_8_8;
#line 275 "profile.m"
                          else
#line 275 "profile.m"
                            {
#line 275 "profile.m"
                              mercury__private_builtin__builtin_compare_string_3_p_0(profile__HeadVar__1_1, profile__V_29_29, profile__V_7_7);
#line 275 "profile.m"
                              return;
                            }
#line 275 "profile.m"
                        }
#line 275 "profile.m"
              }
#line 275 "profile.m"
  }
#line 275 "profile.m"
}

#line 275 "profile.m"
MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_1_0(
#line 275 "profile.m"
  MR_Word profile__TypeInfo_for_T_17,
#line 275 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 275 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 275 "profile.m"
{
#line 275 "profile.m"
  {
#line 275 "profile.m"
    MR_bool profile__succeeded;
#line 275 "profile.m"
    MR_Integer profile__CastX_15 = (MR_Integer) profile__HeadVar__1_1;
#line 275 "profile.m"
    MR_Integer profile__CastY_16 = (MR_Integer) profile__HeadVar__2_2;

#line 275 "profile.m"
    profile__succeeded = (profile__CastX_15 == profile__CastY_16);
#line 275 "profile.m"
    if (profile__succeeded)
#line 275 "profile.m"
      profile__succeeded = MR_TRUE;
#line 275 "profile.m"
    else
#line 275 "profile.m"
      if ((profile__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 275 "profile.m"
        {
#line 275 "profile.m"
          MR_Integer profile__CastX_13 = (MR_Integer) profile__HeadVar__1_1;
#line 275 "profile.m"
          MR_Integer profile__CastY_14 = (MR_Integer) profile__HeadVar__2_2;

#line 275 "profile.m"
          profile__succeeded = (profile__CastY_14 == profile__CastX_13);
#line 275 "profile.m"
        }
#line 275 "profile.m"
      else
#line 275 "profile.m"
        if ((profile__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 275 "profile.m"
          {
#line 275 "profile.m"
            MR_Integer profile__CastX_9 = (MR_Integer) profile__HeadVar__1_1;
#line 275 "profile.m"
            MR_Integer profile__CastY_10 = (MR_Integer) profile__HeadVar__2_2;

#line 275 "profile.m"
            profile__succeeded = (profile__CastY_10 == profile__CastX_9);
#line 275 "profile.m"
          }
#line 275 "profile.m"
        else
#line 275 "profile.m"
          if ((profile__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 275 "profile.m"
            {
#line 275 "profile.m"
              MR_Integer profile__CastX_11 = (MR_Integer) profile__HeadVar__1_1;
#line 275 "profile.m"
              MR_Integer profile__CastY_12 = (MR_Integer) profile__HeadVar__2_2;

#line 275 "profile.m"
              profile__succeeded = (profile__CastY_12 == profile__CastX_11);
#line 275 "profile.m"
            }
#line 275 "profile.m"
          else
#line 275 "profile.m"
            if ((profile__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "profile.m"
              {
#line 275 "profile.m"
                MR_Integer profile__CastX_7 = (MR_Integer) profile__HeadVar__1_1;
#line 275 "profile.m"
                MR_Integer profile__CastY_8 = (MR_Integer) profile__HeadVar__2_2;

#line 275 "profile.m"
                profile__succeeded = (profile__CastY_8 == profile__CastX_7);
#line 275 "profile.m"
              }
#line 275 "profile.m"
            else
#line 275 "profile.m"
              {
#line 275 "profile.m"
                MR_Box profile__V_3_3 = (MR_hl_field(MR_mktag(1), profile__HeadVar__1_1, (MR_Integer) 0));
#line 275 "profile.m"
                MR_String profile__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "profile.m"
                MR_Box profile__V_5_5;
#line 275 "profile.m"
                MR_String profile__V_6_6;

#line 275 "profile.m"
                profile__succeeded = ((MR_tag((MR_Word) profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 275 "profile.m"
                if (profile__succeeded)
#line 275 "profile.m"
                  {
#line 275 "profile.m"
                    profile__V_5_5 = (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 0));
#line 275 "profile.m"
                    profile__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 10186 "profile.c"
                    {
#line 10188 "profile.c"
                      profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_for_T_17, profile__V_3_3, profile__V_5_5);
                    }
#line 275 "profile.m"
                    if (profile__succeeded)
#line 10193 "profile.c"
                      profile__succeeded = (strcmp(profile__V_4_4, profile__V_6_6) == 0);
#line 275 "profile.m"
                  }
#line 275 "profile.m"
              }
#line 275 "profile.m"
    return profile__succeeded;
#line 275 "profile.m"
  }
#line 275 "profile.m"
}

#line 272 "profile.m"
void MR_CALL 
profile____Compare____call_site_kind_and_callee_0_0(
#line 272 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 272 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 272 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 272 "profile.m"
{
#line 272 "profile.m"
  {
#line 272 "profile.m"
    MR_bool profile__succeeded;
#line 272 "profile.m"
    MR_Word profile__Cast_HeadVar1_4 = profile__HeadVar__2_2;
#line 272 "profile.m"
    MR_Word profile__Cast_HeadVar2_5 = profile__HeadVar__3_3;

#line 272 "profile.m"
    {
#line 272 "profile.m"
      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[8], profile__HeadVar__1_1, ((MR_Box) (profile__Cast_HeadVar1_4)), ((MR_Box) (profile__Cast_HeadVar2_5)));
#line 272 "profile.m"
      return;
    }
#line 272 "profile.m"
  }
#line 272 "profile.m"
}

#line 272 "profile.m"
MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_0_0(
#line 272 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 272 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 272 "profile.m"
{
#line 272 "profile.m"
  {
#line 272 "profile.m"
    MR_bool profile__succeeded;
#line 272 "profile.m"
    MR_Word profile__Cast_HeadVar1_3 = profile__HeadVar__1_1;
#line 272 "profile.m"
    MR_Word profile__Cast_HeadVar2_4 = profile__HeadVar__2_2;

#line 272 "profile.m"
    {
#line 272 "profile.m"
      return profile__succeeded = profile____Unify____call_site_kind_and_callee_1_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, profile__Cast_HeadVar1_3, profile__Cast_HeadVar2_4);
    }
#line 272 "profile.m"
    return profile__succeeded;
#line 272 "profile.m"
  }
#line 272 "profile.m"
}

#line 265 "profile.m"
void MR_CALL 
profile____Compare____call_site_kind_0_0(
#line 265 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 265 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 265 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 265 "profile.m"
{
#line 265 "profile.m"
  {
#line 265 "profile.m"
    MR_bool profile__succeeded;
#line 265 "profile.m"
    MR_Integer profile__Cast_HeadVar1_4 = (MR_Integer) profile__HeadVar__2_2;
#line 265 "profile.m"
    MR_Integer profile__Cast_HeadVar2_5 = (MR_Integer) profile__HeadVar__3_3;

#line 265 "profile.m"
    {
#line 265 "profile.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__Cast_HeadVar1_4, profile__Cast_HeadVar2_5);
#line 265 "profile.m"
      return;
    }
#line 265 "profile.m"
  }
#line 265 "profile.m"
}

#line 265 "profile.m"
MR_bool MR_CALL 
profile____Unify____call_site_kind_0_0(
#line 265 "profile.m"
  MR_Word profile__HeadVar__2_1,
#line 265 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 265 "profile.m"
{
#line 10309 "profile.c"
  {
#line 10311 "profile.c"
    MR_bool profile__succeeded = (profile__HeadVar__2_1 == profile__HeadVar__2_2);

#line 10314 "profile.c"
    return profile__succeeded;
#line 10316 "profile.c"
  }
#line 265 "profile.m"
}

#line 172 "profile.m"
void MR_CALL 
profile____Compare____call_site_dynamics_0_0(
#line 172 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 172 "profile.m"
  MR_ArrayPtr profile__HeadVar__2_2,
#line 172 "profile.m"
  MR_ArrayPtr profile__HeadVar__3_3)
#line 172 "profile.m"
{
#line 172 "profile.m"
  {
#line 172 "profile.m"
    MR_bool profile__succeeded;
#line 172 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar1_4 = profile__HeadVar__2_2;
#line 172 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar2_5 = profile__HeadVar__3_3;

#line 172 "profile.m"
    {
#line 172 "profile.m"
      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[7], profile__HeadVar__1_1, ((MR_Box) (profile__Cast_HeadVar1_4)), ((MR_Box) (profile__Cast_HeadVar2_5)));
#line 172 "profile.m"
      return;
    }
#line 172 "profile.m"
  }
#line 172 "profile.m"
}

#line 172 "profile.m"
MR_bool MR_CALL 
profile____Unify____call_site_dynamics_0_0(
#line 172 "profile.m"
  MR_ArrayPtr profile__HeadVar__1_1,
#line 172 "profile.m"
  MR_ArrayPtr profile__HeadVar__2_2)
#line 172 "profile.m"
{
#line 172 "profile.m"
  {
#line 172 "profile.m"
    MR_bool profile__succeeded;
#line 172 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar1_3 = profile__HeadVar__1_1;
#line 172 "profile.m"
    MR_ArrayPtr profile__Cast_HeadVar2_4 = profile__HeadVar__2_2;

#line 172 "profile.m"
    {
#line 172 "profile.m"
      return profile__succeeded = mercury__array____Unify____array_1_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) profile__Cast_HeadVar1_3, (MR_ArrayPtr) profile__Cast_HeadVar2_4);
    }
#line 172 "profile.m"
    return profile__succeeded;
#line 172 "profile.m"
  }
#line 172 "profile.m"
}

#line 182 "profile.m"
void MR_CALL 
profile____Compare____call_site_dynamic_ptr_0_0(
#line 182 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 182 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 182 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 182 "profile.m"
{
#line 182 "profile.m"
  {
#line 182 "profile.m"
    MR_bool profile__succeeded;
#line 182 "profile.m"
    MR_Integer profile__CastX_6 = (MR_Integer) profile__HeadVar__2_2;
#line 182 "profile.m"
    MR_Integer profile__CastY_7 = (MR_Integer) profile__HeadVar__3_3;

#line 182 "profile.m"
    profile__succeeded = (profile__CastX_6 == profile__CastY_7);
#line 182 "profile.m"
    if (profile__succeeded)
#line 10407 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 182 "profile.m"
    else
#line 182 "profile.m"
      {
#line 182 "profile.m"
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;
#line 182 "profile.m"
        MR_Integer profile__V_5_5 = (MR_Integer) profile__HeadVar__3_3;

#line 182 "profile.m"
        {
#line 182 "profile.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_4_4, profile__V_5_5);
#line 182 "profile.m"
          return;
        }
#line 182 "profile.m"
      }
#line 182 "profile.m"
  }
#line 182 "profile.m"
}

#line 182 "profile.m"
MR_bool MR_CALL 
profile____Unify____call_site_dynamic_ptr_0_0(
#line 182 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 182 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 182 "profile.m"
{
#line 182 "profile.m"
  {
#line 182 "profile.m"
    MR_bool profile__succeeded;
#line 182 "profile.m"
    MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
#line 182 "profile.m"
    MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

#line 182 "profile.m"
    profile__succeeded = (profile__CastX_5 == profile__CastY_6);
#line 182 "profile.m"
    if (profile__succeeded)
#line 182 "profile.m"
      profile__succeeded = MR_TRUE;
#line 182 "profile.m"
    else
#line 182 "profile.m"
      {
#line 182 "profile.m"
        MR_Integer profile__V_3_3 = (MR_Integer) profile__HeadVar__1_1;
#line 182 "profile.m"
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;

#line 10465 "profile.c"
        profile__succeeded = (profile__V_3_3 == profile__V_4_4);
#line 182 "profile.m"
      }
#line 182 "profile.m"
    return profile__succeeded;
#line 182 "profile.m"
  }
#line 182 "profile.m"
}

#line 237 "profile.m"
void MR_CALL 
profile____Compare____call_site_dynamic_0_0(
#line 237 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 237 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 237 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 237 "profile.m"
{
#line 237 "profile.m"
  {
#line 237 "profile.m"
    MR_bool profile__succeeded;
#line 237 "profile.m"
    MR_Integer profile__CastX_12 = (MR_Integer) profile__HeadVar__2_2;
#line 237 "profile.m"
    MR_Integer profile__CastY_13 = (MR_Integer) profile__HeadVar__3_3;

#line 237 "profile.m"
    profile__succeeded = (profile__CastX_12 == profile__CastY_13);
#line 237 "profile.m"
    if (profile__succeeded)
#line 10500 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "profile.m"
    else
#line 237 "profile.m"
      {
#line 237 "profile.m"
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "profile.m"
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "profile.m"
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
#line 237 "profile.m"
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
#line 237 "profile.m"
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
#line 237 "profile.m"
        MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
#line 237 "profile.m"
        MR_Word profile__V_10_10;
#line 237 "profile.m"
        MR_Integer profile__V_17_17 = (MR_Integer) profile__V_4_4;
#line 237 "profile.m"
        MR_Integer profile__V_18_18 = (MR_Integer) profile__V_7_7;

#line 237 "profile.m"
        {
#line 237 "profile.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_10_10, profile__V_17_17, profile__V_18_18);
        }
#line 10530 "profile.c"
        profile__succeeded = (profile__V_10_10 == (MR_Integer) 0);
#line 237 "profile.m"
        profile__succeeded = !(profile__succeeded);
#line 237 "profile.m"
        if (profile__succeeded)
#line 237 "profile.m"
          *profile__HeadVar__1_1 = profile__V_10_10;
#line 237 "profile.m"
        else
#line 237 "profile.m"
          {
#line 237 "profile.m"
            MR_Word profile__V_11_11;
#line 237 "profile.m"
            MR_Integer profile__V_19_19 = (MR_Integer) profile__V_5_5;
#line 237 "profile.m"
            MR_Integer profile__V_20_20 = (MR_Integer) profile__V_8_8;

#line 237 "profile.m"
            {
#line 237 "profile.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_11_11, profile__V_19_19, profile__V_20_20);
            }
#line 10554 "profile.c"
            profile__succeeded = (profile__V_11_11 == (MR_Integer) 0);
#line 237 "profile.m"
            profile__succeeded = !(profile__succeeded);
#line 237 "profile.m"
            if (profile__succeeded)
#line 237 "profile.m"
              *profile__HeadVar__1_1 = profile__V_11_11;
#line 237 "profile.m"
            else
#line 237 "profile.m"
              {
#line 237 "profile.m"
                measurements____Compare____own_prof_info_0_0(profile__HeadVar__1_1, profile__V_6_6, profile__V_9_9);
#line 237 "profile.m"
                return;
              }
#line 237 "profile.m"
          }
#line 237 "profile.m"
      }
#line 237 "profile.m"
  }
#line 237 "profile.m"
}

#line 237 "profile.m"
MR_bool MR_CALL 
profile____Unify____call_site_dynamic_0_0(
#line 237 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 237 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 237 "profile.m"
{
#line 237 "profile.m"
  {
#line 237 "profile.m"
    MR_bool profile__succeeded;
#line 237 "profile.m"
    MR_Integer profile__CastX_9 = (MR_Integer) profile__HeadVar__1_1;
#line 237 "profile.m"
    MR_Integer profile__CastY_10 = (MR_Integer) profile__HeadVar__2_2;

#line 237 "profile.m"
    profile__succeeded = (profile__CastX_9 == profile__CastY_10);
#line 237 "profile.m"
    if (profile__succeeded)
#line 237 "profile.m"
      profile__succeeded = MR_TRUE;
#line 237 "profile.m"
    else
#line 237 "profile.m"
      {
#line 237 "profile.m"
        MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
#line 237 "profile.m"
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
#line 237 "profile.m"
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
#line 237 "profile.m"
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "profile.m"
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "profile.m"
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
#line 176 "profile.m"
        MR_Integer profile__CastX_14 = (MR_Integer) profile__V_3_3;
#line 176 "profile.m"
        MR_Integer profile__CastY_15 = (MR_Integer) profile__V_6_6;
#line 176 "profile.m"
        MR_Integer profile__CastX_18;
#line 176 "profile.m"
        MR_Integer profile__CastY_19;

#line 176 "profile.m"
        profile__succeeded = (profile__CastX_14 == profile__CastY_15);
#line 176 "profile.m"
        if (profile__succeeded)
#line 176 "profile.m"
          profile__succeeded = MR_TRUE;
#line 176 "profile.m"
        else
#line 176 "profile.m"
          {
#line 176 "profile.m"
            MR_Integer profile__V_12_12 = (MR_Integer) profile__V_3_3;
#line 176 "profile.m"
            MR_Integer profile__V_13_13 = (MR_Integer) profile__V_6_6;

#line 10644 "profile.c"
            profile__succeeded = (profile__V_12_12 == profile__V_13_13);
#line 176 "profile.m"
          }
#line 237 "profile.m"
        if (profile__succeeded)
#line 237 "profile.m"
          {
#line 176 "profile.m"
            profile__CastX_18 = (MR_Integer) profile__V_4_4;
#line 176 "profile.m"
            profile__CastY_19 = (MR_Integer) profile__V_7_7;
#line 176 "profile.m"
            profile__succeeded = (profile__CastX_18 == profile__CastY_19);
#line 176 "profile.m"
            if (profile__succeeded)
#line 176 "profile.m"
              profile__succeeded = MR_TRUE;
#line 176 "profile.m"
            else
#line 176 "profile.m"
              {
#line 176 "profile.m"
                MR_Integer profile__V_16_16 = (MR_Integer) profile__V_4_4;
#line 176 "profile.m"
                MR_Integer profile__V_17_17 = (MR_Integer) profile__V_7_7;

#line 10671 "profile.c"
                profile__succeeded = (profile__V_16_16 == profile__V_17_17);
#line 176 "profile.m"
              }
#line 237 "profile.m"
            if (profile__succeeded)
#line 10677 "profile.c"
              {
#line 10679 "profile.c"
                return profile__succeeded = measurements____Unify____own_prof_info_0_0(profile__V_5_5, profile__V_8_8);
              }
#line 237 "profile.m"
          }
#line 237 "profile.m"
      }
#line 237 "profile.m"
    return profile__succeeded;
#line 237 "profile.m"
  }
#line 237 "profile.m"
}

#line 300 "profile.m"
void MR_CALL 
profile____Compare____call_site_caller_0_0(
#line 300 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 300 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 300 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 300 "profile.m"
{
#line 300 "profile.m"
  {
#line 300 "profile.m"
    MR_bool profile__succeeded;
#line 300 "profile.m"
    MR_Integer profile__CastX_6 = (MR_Integer) profile__HeadVar__2_2;
#line 300 "profile.m"
    MR_Integer profile__CastY_7 = (MR_Integer) profile__HeadVar__3_3;

#line 300 "profile.m"
    profile__succeeded = (profile__CastX_6 == profile__CastY_7);
#line 300 "profile.m"
    if (profile__succeeded)
#line 10717 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 300 "profile.m"
    else
#line 300 "profile.m"
      {
#line 300 "profile.m"
        MR_Word profile__V_4_4 = (MR_Word) profile__HeadVar__2_2;
#line 300 "profile.m"
        MR_Word profile__V_5_5 = (MR_Word) profile__HeadVar__3_3;
#line 300 "profile.m"
        MR_Integer profile__V_9_9 = (MR_Integer) profile__V_4_4;
#line 300 "profile.m"
        MR_Integer profile__V_10_10 = (MR_Integer) profile__V_5_5;

#line 300 "profile.m"
        {
#line 300 "profile.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_9_9, profile__V_10_10);
#line 300 "profile.m"
          return;
        }
#line 300 "profile.m"
      }
#line 300 "profile.m"
  }
#line 300 "profile.m"
}

#line 300 "profile.m"
MR_bool MR_CALL 
profile____Unify____call_site_caller_0_0(
#line 300 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 300 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 300 "profile.m"
{
#line 300 "profile.m"
  {
#line 300 "profile.m"
    MR_bool profile__succeeded;
#line 300 "profile.m"
    MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
#line 300 "profile.m"
    MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

#line 300 "profile.m"
    profile__succeeded = (profile__CastX_5 == profile__CastY_6);
#line 300 "profile.m"
    if (profile__succeeded)
#line 300 "profile.m"
      profile__succeeded = MR_TRUE;
#line 300 "profile.m"
    else
#line 300 "profile.m"
      {
#line 300 "profile.m"
        MR_Word profile__V_3_3 = (MR_Word) profile__HeadVar__1_1;
#line 300 "profile.m"
        MR_Word profile__V_4_4 = (MR_Word) profile__HeadVar__2_2;
#line 185 "profile.m"
        MR_Integer profile__CastX_9 = (MR_Integer) profile__V_3_3;
#line 185 "profile.m"
        MR_Integer profile__CastY_10 = (MR_Integer) profile__V_4_4;

#line 185 "profile.m"
        profile__succeeded = (profile__CastX_9 == profile__CastY_10);
#line 185 "profile.m"
        if (profile__succeeded)
#line 185 "profile.m"
          profile__succeeded = MR_TRUE;
#line 185 "profile.m"
        else
#line 185 "profile.m"
          {
#line 185 "profile.m"
            MR_Integer profile__V_7_7 = (MR_Integer) profile__V_3_3;
#line 185 "profile.m"
            MR_Integer profile__V_8_8 = (MR_Integer) profile__V_4_4;

#line 10798 "profile.c"
            profile__succeeded = (profile__V_7_7 == profile__V_8_8);
#line 185 "profile.m"
          }
#line 300 "profile.m"
      }
#line 300 "profile.m"
    return profile__succeeded;
#line 300 "profile.m"
  }
#line 300 "profile.m"
}

#line 295 "profile.m"
void MR_CALL 
profile____Compare____call_site_callees_0_0(
#line 295 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 295 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 295 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 295 "profile.m"
{
#line 295 "profile.m"
  {
#line 295 "profile.m"
    MR_bool profile__succeeded;
#line 295 "profile.m"
    MR_Integer profile__CastX_6 = (MR_Integer) profile__HeadVar__2_2;
#line 295 "profile.m"
    MR_Integer profile__CastY_7 = (MR_Integer) profile__HeadVar__3_3;

#line 295 "profile.m"
    profile__succeeded = (profile__CastX_6 == profile__CastY_7);
#line 295 "profile.m"
    if (profile__succeeded)
#line 10835 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 295 "profile.m"
    else
#line 295 "profile.m"
      {
#line 295 "profile.m"
        MR_Word profile__V_4_4 = (MR_Word) profile__HeadVar__2_2;
#line 295 "profile.m"
        MR_Word profile__V_5_5 = (MR_Word) profile__HeadVar__3_3;

#line 295 "profile.m"
        {
#line 295 "profile.m"
          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[0], profile__HeadVar__1_1, ((MR_Box) (profile__V_4_4)), ((MR_Box) (profile__V_5_5)));
#line 295 "profile.m"
          return;
        }
#line 295 "profile.m"
      }
#line 295 "profile.m"
  }
#line 295 "profile.m"
}

#line 295 "profile.m"
MR_bool MR_CALL 
profile____Unify____call_site_callees_0_0(
#line 295 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 295 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 295 "profile.m"
{
#line 295 "profile.m"
  {
#line 295 "profile.m"
    MR_bool profile__succeeded;
#line 295 "profile.m"
    MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
#line 295 "profile.m"
    MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

#line 295 "profile.m"
    profile__succeeded = (profile__CastX_5 == profile__CastY_6);
#line 295 "profile.m"
    if (profile__succeeded)
#line 295 "profile.m"
      profile__succeeded = MR_TRUE;
#line 295 "profile.m"
    else
#line 295 "profile.m"
      {
#line 295 "profile.m"
        MR_Word profile__V_3_3 = (MR_Word) profile__HeadVar__1_1;
#line 295 "profile.m"
        MR_Word profile__V_4_4 = (MR_Word) profile__HeadVar__2_2;

#line 10893 "profile.c"
        {
#line 10895 "profile.c"
          return profile__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &profile_scalar_common_1[0], ((MR_Box) (profile__V_3_3)), ((MR_Box) (profile__V_4_4)));
        }
#line 295 "profile.m"
      }
#line 295 "profile.m"
    return profile__succeeded;
#line 295 "profile.m"
  }
#line 295 "profile.m"
}

#line 257 "profile.m"
void MR_CALL 
profile____Compare____call_site_array_slot_0_0(
#line 257 "profile.m"
  MR_Word * profile__HeadVar__1_1,
#line 257 "profile.m"
  MR_Word profile__HeadVar__2_2,
#line 257 "profile.m"
  MR_Word profile__HeadVar__3_3)
#line 257 "profile.m"
{
#line 257 "profile.m"
  {
#line 257 "profile.m"
    MR_bool profile__succeeded;
#line 257 "profile.m"
    MR_Integer profile__CastX_17 = (MR_Integer) profile__HeadVar__2_2;
#line 257 "profile.m"
    MR_Integer profile__CastY_18 = (MR_Integer) profile__HeadVar__3_3;

#line 257 "profile.m"
    profile__succeeded = (profile__CastX_17 == profile__CastY_18);
#line 257 "profile.m"
    if (profile__succeeded)
#line 10931 "profile.c"
      *profile__HeadVar__1_1 = (MR_Integer) 0;
#line 257 "profile.m"
    else
#line 257 "profile.m"
      if (((MR_tag((MR_Word) profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 257 "profile.m"
        {
#line 257 "profile.m"
          MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 257 "profile.m"
          MR_Word profile__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 0)));

#line 257 "profile.m"
          if (((MR_tag((MR_Word) profile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 257 "profile.m"
            {
#line 257 "profile.m"
              MR_Word profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), profile__HeadVar__3_3, (MR_Integer) 0)));
#line 257 "profile.m"
              MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), profile__HeadVar__3_3, (MR_Integer) 1)));
#line 257 "profile.m"
              MR_Word profile__V_16_16;
#line 257 "profile.m"
              MR_Integer profile__V_25_25 = (MR_Integer) profile__V_23_23;
#line 257 "profile.m"
              MR_Integer profile__V_26_26 = (MR_Integer) profile__V_14_14;

#line 257 "profile.m"
              {
#line 257 "profile.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_16_16, profile__V_25_25, profile__V_26_26);
              }
#line 10964 "profile.c"
              profile__succeeded = (profile__V_16_16 == (MR_Integer) 0);
#line 257 "profile.m"
              profile__succeeded = !(profile__succeeded);
#line 257 "profile.m"
              if (profile__succeeded)
#line 257 "profile.m"
                *profile__HeadVar__1_1 = profile__V_16_16;
#line 257 "profile.m"
              else
#line 257 "profile.m"
                {
#line 257 "profile.m"
                  {
#line 257 "profile.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[6], profile__HeadVar__1_1, ((MR_Box) (profile__V_22_22)), ((MR_Box) (profile__V_15_15)));
#line 257 "profile.m"
                    return;
                  }
#line 257 "profile.m"
                }
#line 257 "profile.m"
            }
#line 257 "profile.m"
          else
#line 10989 "profile.c"
            *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 257 "profile.m"
        }
#line 257 "profile.m"
      else
#line 257 "profile.m"
        {
#line 257 "profile.m"
          MR_Word profile__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));

#line 257 "profile.m"
          if (((MR_tag((MR_Word) profile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11002 "profile.c"
            *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 257 "profile.m"
          else
#line 257 "profile.m"
            {
#line 257 "profile.m"
              MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
#line 257 "profile.m"
              MR_Integer profile__V_27_27 = (MR_Integer) profile__V_24_24;
#line 257 "profile.m"
              MR_Integer profile__V_28_28 = (MR_Integer) profile__V_5_5;

#line 257 "profile.m"
              {
#line 257 "profile.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_27_27, profile__V_28_28);
#line 257 "profile.m"
                return;
              }
#line 257 "profile.m"
            }
#line 257 "profile.m"
        }
#line 257 "profile.m"
  }
#line 257 "profile.m"
}

#line 257 "profile.m"
MR_bool MR_CALL 
profile____Unify____call_site_array_slot_0_0(
#line 257 "profile.m"
  MR_Word profile__HeadVar__1_1,
#line 257 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 257 "profile.m"
{
#line 257 "profile.m"
  {
#line 257 "profile.m"
    MR_bool profile__succeeded;
#line 257 "profile.m"
    MR_Integer profile__CastX_9 = (MR_Integer) profile__HeadVar__1_1;
#line 257 "profile.m"
    MR_Integer profile__CastY_10 = (MR_Integer) profile__HeadVar__2_2;

#line 257 "profile.m"
    profile__succeeded = (profile__CastX_9 == profile__CastY_10);
#line 257 "profile.m"
    if (profile__succeeded)
#line 257 "profile.m"
      profile__succeeded = MR_TRUE;
#line 257 "profile.m"
    else
#line 257 "profile.m"
      if (((MR_tag((MR_Word) profile__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 257 "profile.m"
        {
#line 257 "profile.m"
          MR_Word profile__TypeCtorInfo_11_11;
#line 257 "profile.m"
          MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), profile__HeadVar__1_1, (MR_Integer) 0)));
#line 257 "profile.m"
          MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), profile__HeadVar__1_1, (MR_Integer) 1)));
#line 257 "profile.m"
          MR_Word profile__V_7_7;
#line 257 "profile.m"
          MR_ArrayPtr profile__V_8_8;

#line 257 "profile.m"
          profile__succeeded = ((MR_tag((MR_Word) profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 257 "profile.m"
          if (profile__succeeded)
#line 257 "profile.m"
            {
#line 257 "profile.m"
              profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 257 "profile.m"
              profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 1)));
#line 11082 "profile.c"
              profile__succeeded = (profile__V_5_5 == profile__V_7_7);
#line 257 "profile.m"
              if (profile__succeeded)
#line 257 "profile.m"
                {
#line 11088 "profile.c"
                  profile__TypeCtorInfo_11_11 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 11090 "profile.c"
                  {
#line 11092 "profile.c"
                    return profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_11_11, (MR_ArrayPtr) profile__V_6_6, (MR_ArrayPtr) profile__V_8_8);
                  }
#line 257 "profile.m"
                }
#line 257 "profile.m"
            }
#line 257 "profile.m"
        }
#line 257 "profile.m"
      else
#line 257 "profile.m"
        {
#line 257 "profile.m"
          MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
#line 257 "profile.m"
          MR_Word profile__V_4_4;
#line 182 "profile.m"
          MR_Integer profile__CastX_14;
#line 182 "profile.m"
          MR_Integer profile__CastY_15;

#line 257 "profile.m"
          profile__succeeded = ((MR_tag((MR_Word) profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 257 "profile.m"
          if (profile__succeeded)
#line 257 "profile.m"
            {
#line 257 "profile.m"
              profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
#line 182 "profile.m"
              profile__CastX_14 = (MR_Integer) profile__V_3_3;
#line 182 "profile.m"
              profile__CastY_15 = (MR_Integer) profile__V_4_4;
#line 182 "profile.m"
              profile__succeeded = (profile__CastX_14 == profile__CastY_15);
#line 182 "profile.m"
              if (profile__succeeded)
#line 182 "profile.m"
                profile__succeeded = MR_TRUE;
#line 182 "profile.m"
              else
#line 182 "profile.m"
                {
#line 182 "profile.m"
                  MR_Integer profile__V_12_12 = (MR_Integer) profile__V_3_3;
#line 182 "profile.m"
                  MR_Integer profile__V_13_13 = (MR_Integer) profile__V_4_4;

#line 11141 "profile.c"
                  profile__succeeded = (profile__V_12_12 == profile__V_13_13);
#line 182 "profile.m"
                }
#line 257 "profile.m"
            }
#line 257 "profile.m"
        }
#line 257 "profile.m"
    return profile__succeeded;
#line 257 "profile.m"
  }
#line 257 "profile.m"
}

#line 526 "profile.m"
void MR_CALL 
profile__deep_get_maybe_progrep_2_p_0(
#line 526 "profile.m"
  MR_Word profile__Deep_3,
#line 526 "profile.m"
  MR_Word * profile__MaybeProgRep_4)
#line 526 "profile.m"
{
#line 1070 "profile.m"
  {
#line 1070 "profile.m"
    MR_bool profile__succeeded;
#line 1070 "profile.m"
    MR_Word profile__MaybeProgRep0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
#line 1071 "profile.m"
    MR_Word profile__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
#line 1071 "profile.m"
    MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
#line 1071 "profile.m"
    MR_String profile__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
#line 1071 "profile.m"
    MR_String profile__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
#line 1071 "profile.m"
    MR_Word profile__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
#line 1071 "profile.m"
    MR_ArrayPtr profile__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
#line 1071 "profile.m"
    MR_Word profile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
#line 1071 "profile.m"
    MR_Word profile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
#line 1071 "profile.m"
    MR_Word profile__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));

#line 1076 "profile.m"
    if ((profile__MaybeProgRep0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1073 "profile.m"
      {
#line 1074 "profile.m"
        *profile__MaybeProgRep_4 = (MR_Word) MR_mkword(MR_mktag(1), &profile_scalar_common_4[0]);
#line 1073 "profile.m"
      }
#line 1076 "profile.m"
    else
#line 1076 "profile.m"
      {
#line 1076 "profile.m"
        MR_Word profile__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), profile__MaybeProgRep0_5, (MR_Integer) 0)));

#line 1076 "profile.m"
        if (((MR_tag((MR_Word) profile__V_45_45)) == (MR_mktag((MR_Integer) 1))))
#line 1077 "profile.m"
          {
#line 1077 "profile.m"
            MR_String profile__Error_6 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__V_45_45, (MR_Integer) 0)));
#line 1077 "profile.m"
            MR_String profile__V_10_10;
#line 1077 "profile.m"
            MR_String profile__V_12_12;

#line 1078 "profile.m"
            {
#line 1078 "profile.m"
              profile__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "information file: ", profile__Error_6);
            }
#line 1078 "profile.m"
            {
#line 1078 "profile.m"
              profile__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading procedure representation ", profile__V_12_12);
            }
#line 1078 "profile.m"
            {
#line 1078 "profile.m"
              MR_Word base;
#line 1078 "profile.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1078 "profile.m"
              *profile__MaybeProgRep_4 = base;
#line 1078 "profile.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (profile__V_10_10));
#line 1078 "profile.m"
            }
#line 1077 "profile.m"
          }
#line 1076 "profile.m"
        else
#line 1082 "profile.m"
          *profile__MaybeProgRep_4 = profile__V_45_45;
#line 1076 "profile.m"
      }
#line 1070 "profile.m"
  }
#line 526 "profile.m"
}

#line 524 "profile.m"
void MR_CALL 
profile__deep_get_progrep_det_2_p_0(
#line 524 "profile.m"
  MR_Word profile__Deep_3,
#line 524 "profile.m"
  MR_Word * profile__ProgRep_4)
#line 524 "profile.m"
{
#line 1061 "profile.m"
  {
#line 1061 "profile.m"
    MR_bool profile__succeeded;
#line 1061 "profile.m"
    MR_Word profile__MaybeProgRep_5;

#line 1062 "profile.m"
    {
#line 1062 "profile.m"
      profile__deep_get_maybe_progrep_2_p_0(profile__Deep_3, &profile__MaybeProgRep_5);
    }
#line 1065 "profile.m"
    if (((MR_tag((MR_Word) profile__MaybeProgRep_5)) == (MR_mktag((MR_Integer) 1))))
#line 1066 "profile.m"
      {
#line 1066 "profile.m"
        MR_String profile__Error_6 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__MaybeProgRep_5, (MR_Integer) 0)));

#line 1067 "profile.m"
        {
#line 1067 "profile.m"
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.deep_get_progrep_det\'/2", profile__Error_6);
#line 1067 "profile.m"
          return;
        }
#line 1066 "profile.m"
      }
#line 1065 "profile.m"
    else
#line 1064 "profile.m"
      *profile__ProgRep_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__MaybeProgRep_5, (MR_Integer) 0)));
#line 1061 "profile.m"
  }
#line 524 "profile.m"
}

#line 518 "profile.m"
MR_Word MR_CALL 
profile__root_own_info_1_f_0(
#line 518 "profile.m"
  MR_Word profile__Deep_3)
#line 518 "profile.m"
{
#line 1056 "profile.m"
  {
#line 1056 "profile.m"
    MR_bool profile__succeeded;
#line 1056 "profile.m"
    MR_Word profile__RootOwn_4;
#line 1056 "profile.m"
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
#line 1056 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
#line 1056 "profile.m"
    MR_Integer profile__PDI_37 = (MR_Integer) profile__V_5_5;
#line 1057 "profile.m"
    MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
#line 1057 "profile.m"
    MR_String profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
#line 1057 "profile.m"
    MR_String profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
#line 1057 "profile.m"
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
#line 1057 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
#line 1057 "profile.m"
    MR_Word profile__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
#line 1057 "profile.m"
    MR_Word profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
#line 1057 "profile.m"
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
#line 1057 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
#line 866 "profile.m"
    MR_Box profile__conv0_RootOwn_4;

#line 866 "profile.m"
    {
#line 866 "profile.m"
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__V_21_21, profile__PDI_37, &profile__conv0_RootOwn_4);
    }
#line 866 "profile.m"
    profile__RootOwn_4 = ((MR_Word) profile__conv0_RootOwn_4);
#line 1056 "profile.m"
    return profile__RootOwn_4;
#line 1056 "profile.m"
  }
#line 518 "profile.m"
}

#line 517 "profile.m"
MR_Word MR_CALL 
profile__root_desc_info_1_f_0(
#line 517 "profile.m"
  MR_Word profile__Deep_3)
#line 517 "profile.m"
{
#line 1053 "profile.m"
  {
#line 1053 "profile.m"
    MR_bool profile__succeeded;
#line 1053 "profile.m"
    MR_Word profile__RootDesc_4;
#line 1053 "profile.m"
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
#line 1053 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
#line 1053 "profile.m"
    MR_Integer profile__PDI_37 = (MR_Integer) profile__V_5_5;
#line 1054 "profile.m"
    MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
#line 1054 "profile.m"
    MR_String profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
#line 1054 "profile.m"
    MR_String profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
#line 1054 "profile.m"
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
#line 1054 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
#line 1054 "profile.m"
    MR_Word profile__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
#line 1054 "profile.m"
    MR_Word profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
#line 1054 "profile.m"
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
#line 1054 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
#line 870 "profile.m"
    MR_Box profile__conv0_RootDesc_4;

#line 870 "profile.m"
    {
#line 870 "profile.m"
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__V_22_22, profile__PDI_37, &profile__conv0_RootDesc_4);
    }
#line 870 "profile.m"
    profile__RootDesc_4 = ((MR_Word) profile__conv0_RootDesc_4);
#line 1053 "profile.m"
    return profile__RootDesc_4;
#line 1053 "profile.m"
  }
#line 517 "profile.m"
}

#line 516 "profile.m"
MR_Word MR_CALL 
profile__root_total_info_1_f_0(
#line 516 "profile.m"
  MR_Word profile__Deep_3)
#line 516 "profile.m"
{
#line 1048 "profile.m"
  {
#line 1048 "profile.m"
    MR_bool profile__succeeded;
#line 1048 "profile.m"
    MR_Word profile__RootTotal_4;
#line 1048 "profile.m"
    MR_Word profile__RootOwn_5;
#line 1048 "profile.m"
    MR_Word profile__RootDesc_6;
#line 1048 "profile.m"
    MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
#line 1048 "profile.m"
    MR_Word profile__V_8_8;
#line 1049 "profile.m"
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
#line 1049 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
#line 1049 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
#line 1049 "profile.m"
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
#line 1049 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
#line 1049 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
#line 1049 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
#line 1049 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
#line 1049 "profile.m"
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
#line 1050 "profile.m"
    MR_Word profile__V_37_37;
#line 1050 "profile.m"
    MR_String profile__V_38_38;
#line 1050 "profile.m"
    MR_String profile__V_39_39;
#line 1050 "profile.m"
    MR_String profile__V_40_40;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_41_41;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_42_42;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_43_43;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_44_44;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_45_45;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_46_46;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_47_47;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_48_48;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_49_49;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_50_50;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_51_51;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_52_52;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_53_53;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_54_54;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_55_55;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_56_56;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_57_57;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_58_58;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_59_59;
#line 1050 "profile.m"
    MR_ArrayPtr profile__V_60_60;
#line 1050 "profile.m"
    MR_Word profile__V_61_61;
#line 1050 "profile.m"
    MR_Word profile__V_62_62;
#line 1050 "profile.m"
    MR_Word profile__V_63_63;
#line 1050 "profile.m"
    MR_Word profile__V_64_64;

#line 1049 "profile.m"
    {
#line 1049 "profile.m"
      profile__deep_lookup_pd_own_3_p_0(profile__Deep_3, profile__V_7_7, &profile__RootOwn_5);
    }
#line 1050 "profile.m"
    profile__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
#line 1050 "profile.m"
    profile__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
#line 1050 "profile.m"
    profile__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
#line 1050 "profile.m"
    profile__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
#line 1050 "profile.m"
    profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
#line 1050 "profile.m"
    profile__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
#line 1050 "profile.m"
    profile__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
#line 1050 "profile.m"
    profile__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
#line 1050 "profile.m"
    profile__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
#line 1050 "profile.m"
    profile__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
#line 1050 "profile.m"
    profile__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
#line 1050 "profile.m"
    profile__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
#line 1050 "profile.m"
    profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
#line 1050 "profile.m"
    profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
#line 1050 "profile.m"
    profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
#line 1050 "profile.m"
    profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
#line 1050 "profile.m"
    profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
#line 1050 "profile.m"
    profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
#line 1050 "profile.m"
    profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
#line 1050 "profile.m"
    profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
#line 1050 "profile.m"
    profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
#line 1050 "profile.m"
    profile__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
#line 1050 "profile.m"
    profile__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
#line 1050 "profile.m"
    profile__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
#line 1050 "profile.m"
    profile__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
#line 1050 "profile.m"
    profile__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
#line 1050 "profile.m"
    profile__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
#line 1050 "profile.m"
    profile__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
#line 1050 "profile.m"
    profile__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
#line 1050 "profile.m"
    {
#line 1050 "profile.m"
      profile__deep_lookup_pd_desc_3_p_0(profile__Deep_3, profile__V_8_8, &profile__RootDesc_6);
    }
#line 1051 "profile.m"
    {
#line 1051 "profile.m"
      return profile__RootTotal_4 = measurements__add_own_to_inherit_2_f_0(profile__RootOwn_5, profile__RootDesc_6);
    }
#line 1048 "profile.m"
    return profile__RootTotal_4;
#line 1048 "profile.m"
  }
#line 516 "profile.m"
}

#line 514 "profile.m"
MR_Word MR_CALL 
profile__wrap_proc_static_ptr_1_f_0(
#line 514 "profile.m"
  MR_Integer profile__PSI_3)
#line 514 "profile.m"
{
#line 1044 "profile.m"
  {
#line 1044 "profile.m"
    MR_bool profile__succeeded;
#line 1044 "profile.m"
    MR_Word profile__HeadVar__2_2 = (MR_Word) profile__PSI_3;

#line 1044 "profile.m"
    return profile__HeadVar__2_2;
#line 1044 "profile.m"
  }
#line 514 "profile.m"
}

#line 511 "profile.m"
void MR_CALL 
profile__deep_extract_csdptr_callee_3_p_0(
#line 511 "profile.m"
  MR_Word profile__Deep_4,
#line 511 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 511 "profile.m"
  MR_Word * profile__CalleePDPtr_6)
#line 511 "profile.m"
{
#line 1038 "profile.m"
  {
#line 1038 "profile.m"
    MR_bool profile__succeeded;
#line 1038 "profile.m"
    MR_Word profile__CSD_7;
#line 1038 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 1039 "profile.m"
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 1039 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 1039 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 1039 "profile.m"
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 1039 "profile.m"
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 1039 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 1039 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 1039 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 1039 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 1039 "profile.m"
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
#line 1040 "profile.m"
    MR_Word profile__V_37_37;
#line 1040 "profile.m"
    MR_Word profile__V_38_38;

#line 1039 "profile.m"
    {
#line 1039 "profile.m"
      profile__lookup_call_site_dynamics_3_p_0(profile__V_8_8, profile__CSDPtr_5, &profile__CSD_7);
    }
#line 1040 "profile.m"
    profile__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 0)));
#line 1040 "profile.m"
    *profile__CalleePDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 1)));
#line 1040 "profile.m"
    profile__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 2)));
#line 1038 "profile.m"
  }
#line 511 "profile.m"
}

#line 509 "profile.m"
void MR_CALL 
profile__deep_extract_csdptr_caller_3_p_0(
#line 509 "profile.m"
  MR_Word profile__Deep_4,
#line 509 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 509 "profile.m"
  MR_Word * profile__CallerPDPtr_6)
#line 509 "profile.m"
{
#line 1034 "profile.m"
  {
#line 1034 "profile.m"
    MR_bool profile__succeeded;
#line 1034 "profile.m"
    MR_Word profile__CSD_7;
#line 1034 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 1035 "profile.m"
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 1035 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 1035 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 1035 "profile.m"
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 1035 "profile.m"
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 1035 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 1035 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 1035 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 1035 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 1035 "profile.m"
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
#line 1036 "profile.m"
    MR_Word profile__V_37_37;
#line 1036 "profile.m"
    MR_Word profile__V_38_38;

#line 1035 "profile.m"
    {
#line 1035 "profile.m"
      profile__lookup_call_site_dynamics_3_p_0(profile__V_8_8, profile__CSDPtr_5, &profile__CSD_7);
    }
#line 1036 "profile.m"
    *profile__CallerPDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 0)));
#line 1036 "profile.m"
    profile__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 1)));
#line 1036 "profile.m"
    profile__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 2)));
#line 1034 "profile.m"
  }
#line 509 "profile.m"
}

#line 506 "profile.m"
void MR_CALL 
profile__extract_init_root_2_p_0(
#line 506 "profile.m"
  MR_Word profile__InitDeep_3,
#line 506 "profile.m"
  MR_Word * profile__HeadVar__2_2)
#line 506 "profile.m"
{
#line 1030 "profile.m"
  {
#line 1030 "profile.m"
    MR_bool profile__succeeded;
#line 1030 "profile.m"
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
#line 1030 "profile.m"
    MR_ArrayPtr profile__V_5_5;
#line 1030 "profile.m"
    MR_ArrayPtr profile__V_6_6;
#line 1030 "profile.m"
    MR_ArrayPtr profile__V_7_7;
#line 1030 "profile.m"
    MR_ArrayPtr profile__V_8_8;

#line 1030 "profile.m"
    *profile__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
#line 1030 "profile.m"
    profile__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
#line 1030 "profile.m"
    profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
#line 1030 "profile.m"
    profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
#line 1030 "profile.m"
    profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
#line 1030 "profile.m"
  }
#line 506 "profile.m"
}

#line 504 "profile.m"
void MR_CALL 
profile__extract_init_proc_statics_2_p_0(
#line 504 "profile.m"
  MR_Word profile__InitDeep_3,
#line 504 "profile.m"
  MR_ArrayPtr * profile__HeadVar__2_2)
#line 504 "profile.m"
{
#line 1028 "profile.m"
  {
#line 1028 "profile.m"
    MR_bool profile__succeeded;
#line 1028 "profile.m"
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
#line 1028 "profile.m"
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
#line 1028 "profile.m"
    MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
#line 1028 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
#line 1028 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));

#line 1028 "profile.m"
    *profile__HeadVar__2_2 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
#line 1028 "profile.m"
  }
#line 504 "profile.m"
}

#line 502 "profile.m"
void MR_CALL 
profile__extract_init_proc_dynamics_2_p_0(
#line 502 "profile.m"
  MR_Word profile__InitDeep_3,
#line 502 "profile.m"
  MR_ArrayPtr * profile__HeadVar__2_2)
#line 502 "profile.m"
{
#line 1026 "profile.m"
  {
#line 1026 "profile.m"
    MR_bool profile__succeeded;
#line 1026 "profile.m"
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
#line 1026 "profile.m"
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
#line 1026 "profile.m"
    MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
#line 1026 "profile.m"
    MR_ArrayPtr profile__V_7_7;
#line 1026 "profile.m"
    MR_ArrayPtr profile__V_8_8;

#line 1026 "profile.m"
    *profile__HeadVar__2_2 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
#line 1026 "profile.m"
    profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
#line 1026 "profile.m"
    profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
#line 1026 "profile.m"
  }
#line 502 "profile.m"
}

#line 500 "profile.m"
void MR_CALL 
profile__extract_init_call_site_statics_2_p_0(
#line 500 "profile.m"
  MR_Word profile__InitDeep_3,
#line 500 "profile.m"
  MR_ArrayPtr * profile__HeadVar__2_2)
#line 500 "profile.m"
{
#line 1024 "profile.m"
  {
#line 1024 "profile.m"
    MR_bool profile__succeeded;
#line 1024 "profile.m"
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
#line 1024 "profile.m"
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
#line 1024 "profile.m"
    MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
#line 1024 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
#line 1024 "profile.m"
    MR_ArrayPtr profile__V_8_8;

#line 1024 "profile.m"
    *profile__HeadVar__2_2 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
#line 1024 "profile.m"
    profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
#line 1024 "profile.m"
  }
#line 500 "profile.m"
}

#line 498 "profile.m"
void MR_CALL 
profile__extract_init_call_site_dynamics_2_p_0(
#line 498 "profile.m"
  MR_Word profile__InitDeep_3,
#line 498 "profile.m"
  MR_ArrayPtr * profile__HeadVar__2_2)
#line 498 "profile.m"
{
#line 1022 "profile.m"
  {
#line 1022 "profile.m"
    MR_bool profile__succeeded;
#line 1022 "profile.m"
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
#line 1022 "profile.m"
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
#line 1022 "profile.m"
    MR_ArrayPtr profile__V_6_6;
#line 1022 "profile.m"
    MR_ArrayPtr profile__V_7_7;
#line 1022 "profile.m"
    MR_ArrayPtr profile__V_8_8;

#line 1022 "profile.m"
    *profile__HeadVar__2_2 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
#line 1022 "profile.m"
    profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
#line 1022 "profile.m"
    profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
#line 1022 "profile.m"
    profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
#line 1022 "profile.m"
  }
#line 498 "profile.m"
}

#line 497 "profile.m"
void MR_CALL 
profile__extract_max_pd_2_p_0(
#line 497 "profile.m"
  MR_Word profile__InitDeep_3,
#line 497 "profile.m"
  MR_Integer * profile__MaxPD_4)
#line 497 "profile.m"
{
#line 1019 "profile.m"
  {
#line 1019 "profile.m"
    MR_bool profile__succeeded;
#line 1019 "profile.m"
    MR_ArrayPtr profile__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
#line 1020 "profile.m"
    MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
#line 1020 "profile.m"
    MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
#line 1020 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
#line 1020 "profile.m"
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
#line 1020 "profile.m"
    MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));

#line 1020 "profile.m"
    {
#line 1020 "profile.m"
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) profile__V_5_5, profile__MaxPD_4);
#line 1020 "profile.m"
      return;
    }
#line 1019 "profile.m"
  }
#line 497 "profile.m"
}

#line 496 "profile.m"
void MR_CALL 
profile__extract_max_csd_2_p_0(
#line 496 "profile.m"
  MR_Word profile__InitDeep_3,
#line 496 "profile.m"
  MR_Integer * profile__MaxCSD_4)
#line 496 "profile.m"
{
#line 1016 "profile.m"
  {
#line 1016 "profile.m"
    MR_bool profile__succeeded;
#line 1016 "profile.m"
    MR_ArrayPtr profile__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
#line 1017 "profile.m"
    MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
#line 1017 "profile.m"
    MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
#line 1017 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
#line 1017 "profile.m"
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
#line 1017 "profile.m"
    MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));

#line 1017 "profile.m"
    {
#line 1017 "profile.m"
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) profile__V_5_5, profile__MaxCSD_4);
#line 1017 "profile.m"
      return;
    }
#line 1016 "profile.m"
  }
#line 496 "profile.m"
}

#line 495 "profile.m"
void MR_CALL 
profile__extract_max_ps_2_p_0(
#line 495 "profile.m"
  MR_Word profile__InitDeep_3,
#line 495 "profile.m"
  MR_Integer * profile__MaxPS_4)
#line 495 "profile.m"
{
#line 1013 "profile.m"
  {
#line 1013 "profile.m"
    MR_bool profile__succeeded;
#line 1013 "profile.m"
    MR_ArrayPtr profile__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
#line 1014 "profile.m"
    MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
#line 1014 "profile.m"
    MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
#line 1014 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
#line 1014 "profile.m"
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
#line 1014 "profile.m"
    MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));

#line 1014 "profile.m"
    {
#line 1014 "profile.m"
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_ArrayPtr) profile__V_5_5, profile__MaxPS_4);
#line 1014 "profile.m"
      return;
    }
#line 1013 "profile.m"
  }
#line 495 "profile.m"
}

#line 494 "profile.m"
void MR_CALL 
profile__extract_max_css_2_p_0(
#line 494 "profile.m"
  MR_Word profile__InitDeep_3,
#line 494 "profile.m"
  MR_Integer * profile__MaxCSS_4)
#line 494 "profile.m"
{
#line 1010 "profile.m"
  {
#line 1010 "profile.m"
    MR_bool profile__succeeded;
#line 1010 "profile.m"
    MR_ArrayPtr profile__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
#line 1011 "profile.m"
    MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
#line 1011 "profile.m"
    MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
#line 1011 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
#line 1011 "profile.m"
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
#line 1011 "profile.m"
    MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));

#line 1011 "profile.m"
    {
#line 1011 "profile.m"
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_ArrayPtr) profile__V_5_5, profile__MaxCSS_4);
#line 1011 "profile.m"
      return;
    }
#line 1010 "profile.m"
  }
#line 494 "profile.m"
}

#line 493 "profile.m"
void MR_CALL 
profile__extract_num_callseqs_2_p_0(
#line 493 "profile.m"
  MR_Word profile__InitDeep_3,
#line 493 "profile.m"
  MR_Integer * profile__HeadVar__2_2)
#line 493 "profile.m"
{
#line 1007 "profile.m"
  {
#line 1007 "profile.m"
    MR_bool profile__succeeded;
#line 1007 "profile.m"
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
#line 1007 "profile.m"
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
#line 1007 "profile.m"
    MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
#line 1007 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
#line 1007 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
#line 1007 "profile.m"
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
#line 1007 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 0)));
#line 1007 "profile.m"
    MR_Integer profile__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 1)));
#line 1007 "profile.m"
    MR_Integer profile__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 2)));
#line 1007 "profile.m"
    MR_Integer profile__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 3)));
#line 1007 "profile.m"
    MR_Integer profile__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 4)));
#line 1007 "profile.m"
    MR_Integer profile__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 5)));
#line 1007 "profile.m"
    MR_Integer profile__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 6)));
#line 1007 "profile.m"
    MR_Integer profile__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 7)));
#line 1007 "profile.m"
    MR_Word profile__V_18_18;

#line 1007 "profile.m"
    *profile__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 8)));
#line 1007 "profile.m"
    profile__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 9)));
#line 1007 "profile.m"
  }
#line 493 "profile.m"
}

#line 492 "profile.m"
void MR_CALL 
profile__extract_user_quanta_2_p_0(
#line 492 "profile.m"
  MR_Word profile__InitDeep_3,
#line 492 "profile.m"
  MR_Integer * profile__HeadVar__2_2)
#line 492 "profile.m"
{
#line 1004 "profile.m"
  {
#line 1004 "profile.m"
    MR_bool profile__succeeded;
#line 1004 "profile.m"
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
#line 1004 "profile.m"
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
#line 1004 "profile.m"
    MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
#line 1004 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
#line 1004 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
#line 1004 "profile.m"
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
#line 1004 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 0)));
#line 1004 "profile.m"
    MR_Integer profile__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 1)));
#line 1004 "profile.m"
    MR_Integer profile__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 2)));
#line 1004 "profile.m"
    MR_Integer profile__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 3)));
#line 1004 "profile.m"
    MR_Integer profile__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 4)));
#line 1004 "profile.m"
    MR_Integer profile__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 5)));
#line 1004 "profile.m"
    MR_Integer profile__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 6)));
#line 1004 "profile.m"
    MR_Integer profile__V_17_17;
#line 1004 "profile.m"
    MR_Word profile__V_18_18;

#line 1004 "profile.m"
    *profile__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 7)));
#line 1004 "profile.m"
    profile__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 8)));
#line 1004 "profile.m"
    profile__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 9)));
#line 1004 "profile.m"
  }
#line 492 "profile.m"
}

#line 491 "profile.m"
void MR_CALL 
profile__extract_instrument_quanta_2_p_0(
#line 491 "profile.m"
  MR_Word profile__InitDeep_3,
#line 491 "profile.m"
  MR_Integer * profile__HeadVar__2_2)
#line 491 "profile.m"
{
#line 1001 "profile.m"
  {
#line 1001 "profile.m"
    MR_bool profile__succeeded;
#line 1001 "profile.m"
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
#line 1001 "profile.m"
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
#line 1001 "profile.m"
    MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
#line 1001 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
#line 1001 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
#line 1001 "profile.m"
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
#line 1001 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 0)));
#line 1001 "profile.m"
    MR_Integer profile__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 1)));
#line 1001 "profile.m"
    MR_Integer profile__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 2)));
#line 1001 "profile.m"
    MR_Integer profile__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 3)));
#line 1001 "profile.m"
    MR_Integer profile__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 4)));
#line 1001 "profile.m"
    MR_Integer profile__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 5)));
#line 1001 "profile.m"
    MR_Integer profile__V_16_16;
#line 1001 "profile.m"
    MR_Integer profile__V_17_17;
#line 1001 "profile.m"
    MR_Word profile__V_18_18;

#line 1001 "profile.m"
    *profile__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 6)));
#line 1001 "profile.m"
    profile__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 7)));
#line 1001 "profile.m"
    profile__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 8)));
#line 1001 "profile.m"
    profile__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 9)));
#line 1001 "profile.m"
  }
#line 491 "profile.m"
}

#line 490 "profile.m"
void MR_CALL 
profile__extract_ticks_per_sec_2_p_0(
#line 490 "profile.m"
  MR_Word profile__InitDeep_3,
#line 490 "profile.m"
  MR_Integer * profile__HeadVar__2_2)
#line 490 "profile.m"
{
#line 998 "profile.m"
  {
#line 998 "profile.m"
    MR_bool profile__succeeded;
#line 998 "profile.m"
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
#line 998 "profile.m"
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
#line 998 "profile.m"
    MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
#line 998 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
#line 998 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
#line 998 "profile.m"
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
#line 998 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 0)));
#line 998 "profile.m"
    MR_Integer profile__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 1)));
#line 998 "profile.m"
    MR_Integer profile__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 2)));
#line 998 "profile.m"
    MR_Integer profile__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 3)));
#line 998 "profile.m"
    MR_Integer profile__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 4)));
#line 998 "profile.m"
    MR_Integer profile__V_15_15;
#line 998 "profile.m"
    MR_Integer profile__V_16_16;
#line 998 "profile.m"
    MR_Integer profile__V_17_17;
#line 998 "profile.m"
    MR_Word profile__V_18_18;

#line 998 "profile.m"
    *profile__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 5)));
#line 998 "profile.m"
    profile__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 6)));
#line 998 "profile.m"
    profile__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 7)));
#line 998 "profile.m"
    profile__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 8)));
#line 998 "profile.m"
    profile__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 9)));
#line 998 "profile.m"
  }
#line 490 "profile.m"
}

#line 488 "profile.m"
void MR_CALL 
profile__extract_csdptr_callee_3_p_0(
#line 488 "profile.m"
  MR_Word profile__InitDeep_4,
#line 488 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 488 "profile.m"
  MR_Word * profile__CalleePDPtr_6)
#line 488 "profile.m"
{
#line 993 "profile.m"
  {
#line 993 "profile.m"
    MR_bool profile__succeeded;
#line 993 "profile.m"
    MR_Word profile__CSD_7;
#line 993 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 2)));
#line 994 "profile.m"
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 0)));
#line 994 "profile.m"
    MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 1)));
#line 994 "profile.m"
    MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 3)));
#line 994 "profile.m"
    MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 4)));
#line 994 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 5)));
#line 996 "profile.m"
    MR_Word profile__V_14_14;
#line 996 "profile.m"
    MR_Word profile__V_15_15;

#line 994 "profile.m"
    {
#line 994 "profile.m"
      profile__lookup_call_site_dynamics_3_p_0(profile__V_8_8, profile__CSDPtr_5, &profile__CSD_7);
    }
#line 996 "profile.m"
    profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 0)));
#line 996 "profile.m"
    *profile__CalleePDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 1)));
#line 996 "profile.m"
    profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 2)));
#line 993 "profile.m"
  }
#line 488 "profile.m"
}

#line 486 "profile.m"
void MR_CALL 
profile__extract_csdptr_caller_3_p_0(
#line 486 "profile.m"
  MR_Word profile__InitDeep_4,
#line 486 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 486 "profile.m"
  MR_Word * profile__CallerPDPtr_6)
#line 486 "profile.m"
{
#line 988 "profile.m"
  {
#line 988 "profile.m"
    MR_bool profile__succeeded;
#line 988 "profile.m"
    MR_Word profile__CSD_7;
#line 988 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 2)));
#line 989 "profile.m"
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 0)));
#line 989 "profile.m"
    MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 1)));
#line 989 "profile.m"
    MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 3)));
#line 989 "profile.m"
    MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 4)));
#line 989 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 5)));
#line 991 "profile.m"
    MR_Word profile__V_14_14;
#line 991 "profile.m"
    MR_Word profile__V_15_15;

#line 989 "profile.m"
    {
#line 989 "profile.m"
      profile__lookup_call_site_dynamics_3_p_0(profile__V_8_8, profile__CSDPtr_5, &profile__CSD_7);
    }
#line 991 "profile.m"
    *profile__CallerPDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 0)));
#line 991 "profile.m"
    profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 1)));
#line 991 "profile.m"
    profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 2)));
#line 988 "profile.m"
  }
#line 486 "profile.m"
}

#line 484 "profile.m"
void MR_CALL 
profile__extract_csd_callee_2_p_0(
#line 484 "profile.m"
  MR_Word profile__CSD_3,
#line 484 "profile.m"
  MR_Word * profile__HeadVar__2_2)
#line 484 "profile.m"
{
#line 986 "profile.m"
  {
#line 986 "profile.m"
    MR_bool profile__succeeded;
#line 986 "profile.m"
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_3, (MR_Integer) 0)));
#line 986 "profile.m"
    MR_Word profile__V_5_5;

#line 986 "profile.m"
    *profile__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_3, (MR_Integer) 1)));
#line 986 "profile.m"
    profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_3, (MR_Integer) 2)));
#line 986 "profile.m"
  }
#line 484 "profile.m"
}

#line 482 "profile.m"
void MR_CALL 
profile__extract_csd_caller_2_p_0(
#line 482 "profile.m"
  MR_Word profile__CSD_3,
#line 482 "profile.m"
  MR_Word * profile__HeadVar__2_2)
#line 482 "profile.m"
{
#line 984 "profile.m"
  {
#line 984 "profile.m"
    MR_bool profile__succeeded;
#line 984 "profile.m"
    MR_Word profile__V_4_4;
#line 984 "profile.m"
    MR_Word profile__V_5_5;

#line 984 "profile.m"
    *profile__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_3, (MR_Integer) 0)));
#line 984 "profile.m"
    profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_3, (MR_Integer) 1)));
#line 984 "profile.m"
    profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_3, (MR_Integer) 2)));
#line 984 "profile.m"
  }
#line 482 "profile.m"
}

#line 480 "profile.m"
void MR_CALL 
profile__extract_pd_sites_2_p_0(
#line 480 "profile.m"
  MR_Word profile__PD_3,
#line 480 "profile.m"
  MR_ArrayPtr * profile__HeadVar__2_2)
#line 480 "profile.m"
{
#line 982 "profile.m"
  {
#line 982 "profile.m"
    MR_bool profile__succeeded;
#line 982 "profile.m"
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__PD_3, (MR_Integer) 0)));
#line 982 "profile.m"
    MR_Word profile__V_5_5;

#line 982 "profile.m"
    *profile__HeadVar__2_2 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__PD_3, (MR_Integer) 1)));
#line 982 "profile.m"
    profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__PD_3, (MR_Integer) 2)));
#line 982 "profile.m"
  }
#line 480 "profile.m"
}

#line 477 "profile.m"
void MR_CALL 
profile__deep_update_csd_comp_table_4_p_0(
#line 477 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 477 "profile.m"
  MR_Word profile__CompTable_6,
#line 477 "profile.m"
  MR_Word profile__STATE_VARIABLE_Deep_0_10,
#line 477 "profile.m"
  MR_Word * profile__STATE_VARIABLE_Deep_11)
#line 477 "profile.m"
{
#line 975 "profile.m"
  {
#line 975 "profile.m"
    MR_bool profile__succeeded;
#line 975 "profile.m"
    MR_Integer profile__CSDI_8 = (MR_Integer) profile__CSDPtr_5;
#line 975 "profile.m"
    MR_ArrayPtr profile__CSDCompTables_9;
#line 975 "profile.m"
    MR_ArrayPtr profile__V_12_12;
#line 975 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
#line 977 "profile.m"
    MR_Word profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
#line 977 "profile.m"
    MR_String profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
#line 977 "profile.m"
    MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
#line 977 "profile.m"
    MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
#line 977 "profile.m"
    MR_Word profile__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
#line 977 "profile.m"
    MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
#line 977 "profile.m"
    MR_Word profile__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
#line 977 "profile.m"
    MR_Word profile__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
#line 977 "profile.m"
    MR_Word profile__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
#line 977 "profile.m"
    MR_Word profile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
#line 977 "profile.m"
    MR_Box profile__conv0_V_12_12;
#line 977 "profile.m"
    MR_ArrayPtr profile__conv1_CSDCompTables_9;
#line 978 "profile.m"
    MR_Word profile__V_43_43;
#line 978 "profile.m"
    MR_String profile__V_44_44;
#line 978 "profile.m"
    MR_String profile__V_45_45;
#line 978 "profile.m"
    MR_String profile__V_46_46;
#line 978 "profile.m"
    MR_Word profile__V_47_47;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_48_48;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_49_49;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_50_50;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_51_51;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_52_52;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_53_53;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_54_54;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_55_55;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_56_56;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_57_57;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_58_58;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_59_59;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_60_60;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_61_61;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_62_62;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_63_63;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_64_64;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_65_65;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_66_66;
#line 978 "profile.m"
    MR_Word profile__V_68_68;
#line 978 "profile.m"
    MR_Word profile__V_69_69;
#line 978 "profile.m"
    MR_Word profile__V_70_70;
#line 978 "profile.m"
    MR_Word profile__V_71_71;
#line 978 "profile.m"
    MR_ArrayPtr profile__V_67_67;

#line 977 "profile.m"
    {
#line 977 "profile.m"
      profile__conv0_V_12_12 = array_util__u_1_f_0((MR_Word) &profile_scalar_common_1[5], ((MR_Box) (profile__V_13_13)));
    }
#line 977 "profile.m"
    profile__V_12_12 = ((MR_ArrayPtr) profile__conv0_V_12_12);
#line 977 "profile.m"
    {
#line 977 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &profile_scalar_common_2[1], profile__CSDI_8, ((MR_Box) (profile__CompTable_6)), (MR_ArrayPtr) profile__V_12_12, &profile__conv1_CSDCompTables_9);
    }
#line 977 "profile.m"
    profile__CSDCompTables_9 = (MR_ArrayPtr) profile__conv1_CSDCompTables_9;
#line 978 "profile.m"
    profile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
#line 978 "profile.m"
    profile__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
#line 978 "profile.m"
    profile__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
#line 978 "profile.m"
    profile__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
#line 978 "profile.m"
    profile__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
#line 978 "profile.m"
    profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
#line 978 "profile.m"
    profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
#line 978 "profile.m"
    profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
#line 978 "profile.m"
    profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
#line 978 "profile.m"
    profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
#line 978 "profile.m"
    profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
#line 978 "profile.m"
    profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
#line 978 "profile.m"
    profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
#line 978 "profile.m"
    profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
#line 978 "profile.m"
    profile__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
#line 978 "profile.m"
    profile__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
#line 978 "profile.m"
    profile__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
#line 978 "profile.m"
    profile__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
#line 978 "profile.m"
    profile__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
#line 978 "profile.m"
    profile__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
#line 978 "profile.m"
    profile__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
#line 978 "profile.m"
    profile__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
#line 978 "profile.m"
    profile__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
#line 978 "profile.m"
    profile__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
#line 978 "profile.m"
    profile__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
#line 978 "profile.m"
    profile__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
#line 978 "profile.m"
    profile__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
#line 978 "profile.m"
    profile__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
#line 978 "profile.m"
    profile__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
#line 978 "profile.m"
    {
#line 978 "profile.m"
      MR_Word base;
#line 978 "profile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 978 "profile.m"
      *profile__STATE_VARIABLE_Deep_11 = base;
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (profile__V_43_43));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (profile__V_44_44));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (profile__V_45_45));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (profile__V_46_46));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (profile__V_47_47));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (profile__V_48_48));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (profile__V_49_49));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (profile__V_50_50));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (profile__V_51_51));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (profile__V_52_52));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (profile__V_53_53));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (profile__V_54_54));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (profile__V_55_55));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (profile__V_56_56));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (profile__V_57_57));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (profile__V_58_58));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (profile__V_59_59));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (profile__V_60_60));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (profile__V_61_61));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (profile__V_62_62));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (profile__V_63_63));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (profile__V_64_64));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (profile__V_65_65));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (profile__V_66_66));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (profile__CSDCompTables_9));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (profile__V_68_68));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (profile__V_69_69));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (profile__V_70_70));
#line 978 "profile.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (profile__V_71_71));
#line 978 "profile.m"
    }
#line 975 "profile.m"
  }
#line 477 "profile.m"
}

#line 475 "profile.m"
void MR_CALL 
profile__deep_update_pd_comp_table_4_p_0(
#line 475 "profile.m"
  MR_Word profile__PDPtr_5,
#line 475 "profile.m"
  MR_Word profile__CompTable_6,
#line 475 "profile.m"
  MR_Word profile__STATE_VARIABLE_Deep_0_10,
#line 475 "profile.m"
  MR_Word * profile__STATE_VARIABLE_Deep_11)
#line 475 "profile.m"
{
#line 970 "profile.m"
  {
#line 970 "profile.m"
    MR_bool profile__succeeded;
#line 970 "profile.m"
    MR_Integer profile__PDI_8 = (MR_Integer) profile__PDPtr_5;
#line 970 "profile.m"
    MR_ArrayPtr profile__PDCompTables_9;
#line 970 "profile.m"
    MR_ArrayPtr profile__V_12_12;
#line 970 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
#line 972 "profile.m"
    MR_Word profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
#line 972 "profile.m"
    MR_String profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
#line 972 "profile.m"
    MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
#line 972 "profile.m"
    MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
#line 972 "profile.m"
    MR_Word profile__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
#line 972 "profile.m"
    MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
#line 972 "profile.m"
    MR_Word profile__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
#line 972 "profile.m"
    MR_Word profile__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
#line 972 "profile.m"
    MR_Word profile__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
#line 972 "profile.m"
    MR_Word profile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
#line 972 "profile.m"
    MR_Box profile__conv0_V_12_12;
#line 972 "profile.m"
    MR_ArrayPtr profile__conv1_PDCompTables_9;
#line 973 "profile.m"
    MR_Word profile__V_43_43;
#line 973 "profile.m"
    MR_String profile__V_44_44;
#line 973 "profile.m"
    MR_String profile__V_45_45;
#line 973 "profile.m"
    MR_String profile__V_46_46;
#line 973 "profile.m"
    MR_Word profile__V_47_47;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_48_48;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_49_49;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_50_50;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_51_51;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_52_52;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_53_53;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_54_54;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_55_55;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_56_56;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_57_57;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_58_58;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_59_59;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_60_60;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_61_61;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_62_62;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_63_63;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_64_64;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_65_65;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_67_67;
#line 973 "profile.m"
    MR_Word profile__V_68_68;
#line 973 "profile.m"
    MR_Word profile__V_69_69;
#line 973 "profile.m"
    MR_Word profile__V_70_70;
#line 973 "profile.m"
    MR_Word profile__V_71_71;
#line 973 "profile.m"
    MR_ArrayPtr profile__V_66_66;

#line 972 "profile.m"
    {
#line 972 "profile.m"
      profile__conv0_V_12_12 = array_util__u_1_f_0((MR_Word) &profile_scalar_common_1[5], ((MR_Box) (profile__V_13_13)));
    }
#line 972 "profile.m"
    profile__V_12_12 = ((MR_ArrayPtr) profile__conv0_V_12_12);
#line 972 "profile.m"
    {
#line 972 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &profile_scalar_common_2[1], profile__PDI_8, ((MR_Box) (profile__CompTable_6)), (MR_ArrayPtr) profile__V_12_12, &profile__conv1_PDCompTables_9);
    }
#line 972 "profile.m"
    profile__PDCompTables_9 = (MR_ArrayPtr) profile__conv1_PDCompTables_9;
#line 973 "profile.m"
    profile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
#line 973 "profile.m"
    profile__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
#line 973 "profile.m"
    profile__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
#line 973 "profile.m"
    profile__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
#line 973 "profile.m"
    profile__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
#line 973 "profile.m"
    profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
#line 973 "profile.m"
    profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
#line 973 "profile.m"
    profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
#line 973 "profile.m"
    profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
#line 973 "profile.m"
    profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
#line 973 "profile.m"
    profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
#line 973 "profile.m"
    profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
#line 973 "profile.m"
    profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
#line 973 "profile.m"
    profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
#line 973 "profile.m"
    profile__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
#line 973 "profile.m"
    profile__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
#line 973 "profile.m"
    profile__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
#line 973 "profile.m"
    profile__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
#line 973 "profile.m"
    profile__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
#line 973 "profile.m"
    profile__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
#line 973 "profile.m"
    profile__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
#line 973 "profile.m"
    profile__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
#line 973 "profile.m"
    profile__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
#line 973 "profile.m"
    profile__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
#line 973 "profile.m"
    profile__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
#line 973 "profile.m"
    profile__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
#line 973 "profile.m"
    profile__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
#line 973 "profile.m"
    profile__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
#line 973 "profile.m"
    profile__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
#line 973 "profile.m"
    {
#line 973 "profile.m"
      MR_Word base;
#line 973 "profile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 973 "profile.m"
      *profile__STATE_VARIABLE_Deep_11 = base;
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (profile__V_43_43));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (profile__V_44_44));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (profile__V_45_45));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (profile__V_46_46));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (profile__V_47_47));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (profile__V_48_48));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (profile__V_49_49));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (profile__V_50_50));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (profile__V_51_51));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (profile__V_52_52));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (profile__V_53_53));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (profile__V_54_54));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (profile__V_55_55));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (profile__V_56_56));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (profile__V_57_57));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (profile__V_58_58));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (profile__V_59_59));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (profile__V_60_60));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (profile__V_61_61));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (profile__V_62_62));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (profile__V_63_63));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (profile__V_64_64));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (profile__V_65_65));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (profile__PDCompTables_9));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (profile__V_67_67));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (profile__V_68_68));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (profile__V_69_69));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (profile__V_70_70));
#line 973 "profile.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (profile__V_71_71));
#line 973 "profile.m"
    }
#line 970 "profile.m"
  }
#line 475 "profile.m"
}

#line 473 "profile.m"
void MR_CALL 
profile__deep_update_pd_own_4_p_0(
#line 473 "profile.m"
  MR_Word profile__PDPtr_5,
#line 473 "profile.m"
  MR_Word profile__PDOwn_6,
#line 473 "profile.m"
  MR_Word profile__STATE_VARIABLE_Deep_0_10,
#line 473 "profile.m"
  MR_Word * profile__STATE_VARIABLE_Deep_11)
#line 473 "profile.m"
{
#line 965 "profile.m"
  {
#line 965 "profile.m"
    MR_bool profile__succeeded;
#line 965 "profile.m"
    MR_Integer profile__PDI_8 = (MR_Integer) profile__PDPtr_5;
#line 965 "profile.m"
    MR_ArrayPtr profile__PDOwns_9;
#line 965 "profile.m"
    MR_ArrayPtr profile__V_12_12;
#line 965 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
#line 967 "profile.m"
    MR_Word profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
#line 967 "profile.m"
    MR_String profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
#line 967 "profile.m"
    MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
#line 967 "profile.m"
    MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
#line 967 "profile.m"
    MR_Word profile__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
#line 967 "profile.m"
    MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
#line 967 "profile.m"
    MR_Word profile__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
#line 967 "profile.m"
    MR_Word profile__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
#line 967 "profile.m"
    MR_Word profile__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
#line 967 "profile.m"
    MR_Word profile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
#line 967 "profile.m"
    MR_Box profile__conv0_V_12_12;
#line 967 "profile.m"
    MR_ArrayPtr profile__conv1_PDOwns_9;
#line 968 "profile.m"
    MR_Word profile__V_43_43;
#line 968 "profile.m"
    MR_String profile__V_44_44;
#line 968 "profile.m"
    MR_String profile__V_45_45;
#line 968 "profile.m"
    MR_String profile__V_46_46;
#line 968 "profile.m"
    MR_Word profile__V_47_47;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_48_48;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_49_49;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_50_50;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_51_51;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_52_52;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_53_53;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_54_54;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_55_55;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_56_56;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_57_57;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_58_58;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_60_60;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_61_61;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_62_62;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_63_63;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_64_64;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_65_65;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_66_66;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_67_67;
#line 968 "profile.m"
    MR_Word profile__V_68_68;
#line 968 "profile.m"
    MR_Word profile__V_69_69;
#line 968 "profile.m"
    MR_Word profile__V_70_70;
#line 968 "profile.m"
    MR_Word profile__V_71_71;
#line 968 "profile.m"
    MR_ArrayPtr profile__V_59_59;

#line 967 "profile.m"
    {
#line 967 "profile.m"
      profile__conv0_V_12_12 = array_util__u_1_f_0((MR_Word) &profile_scalar_common_1[4], ((MR_Box) (profile__V_13_13)));
    }
#line 967 "profile.m"
    profile__V_12_12 = ((MR_ArrayPtr) profile__conv0_V_12_12);
#line 967 "profile.m"
    {
#line 967 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, profile__PDI_8, ((MR_Box) (profile__PDOwn_6)), (MR_ArrayPtr) profile__V_12_12, &profile__conv1_PDOwns_9);
    }
#line 967 "profile.m"
    profile__PDOwns_9 = (MR_ArrayPtr) profile__conv1_PDOwns_9;
#line 968 "profile.m"
    profile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
#line 968 "profile.m"
    profile__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
#line 968 "profile.m"
    profile__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
#line 968 "profile.m"
    profile__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
#line 968 "profile.m"
    profile__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
#line 968 "profile.m"
    profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
#line 968 "profile.m"
    profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
#line 968 "profile.m"
    profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
#line 968 "profile.m"
    profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
#line 968 "profile.m"
    profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
#line 968 "profile.m"
    profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
#line 968 "profile.m"
    profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
#line 968 "profile.m"
    profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
#line 968 "profile.m"
    profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
#line 968 "profile.m"
    profile__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
#line 968 "profile.m"
    profile__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
#line 968 "profile.m"
    profile__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
#line 968 "profile.m"
    profile__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
#line 968 "profile.m"
    profile__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
#line 968 "profile.m"
    profile__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
#line 968 "profile.m"
    profile__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
#line 968 "profile.m"
    profile__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
#line 968 "profile.m"
    profile__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
#line 968 "profile.m"
    profile__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
#line 968 "profile.m"
    profile__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
#line 968 "profile.m"
    profile__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
#line 968 "profile.m"
    profile__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
#line 968 "profile.m"
    profile__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
#line 968 "profile.m"
    profile__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
#line 968 "profile.m"
    {
#line 968 "profile.m"
      MR_Word base;
#line 968 "profile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 968 "profile.m"
      *profile__STATE_VARIABLE_Deep_11 = base;
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (profile__V_43_43));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (profile__V_44_44));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (profile__V_45_45));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (profile__V_46_46));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (profile__V_47_47));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (profile__V_48_48));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (profile__V_49_49));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (profile__V_50_50));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (profile__V_51_51));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (profile__V_52_52));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (profile__V_53_53));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (profile__V_54_54));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (profile__V_55_55));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (profile__V_56_56));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (profile__V_57_57));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (profile__V_58_58));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (profile__PDOwns_9));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (profile__V_60_60));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (profile__V_61_61));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (profile__V_62_62));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (profile__V_63_63));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (profile__V_64_64));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (profile__V_65_65));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (profile__V_66_66));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (profile__V_67_67));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (profile__V_68_68));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (profile__V_69_69));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (profile__V_70_70));
#line 968 "profile.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (profile__V_71_71));
#line 968 "profile.m"
    }
#line 965 "profile.m"
  }
#line 473 "profile.m"
}

#line 471 "profile.m"
void MR_CALL 
profile__deep_update_pd_desc_4_p_0(
#line 471 "profile.m"
  MR_Word profile__PDPtr_5,
#line 471 "profile.m"
  MR_Word profile__PDDesc_6,
#line 471 "profile.m"
  MR_Word profile__STATE_VARIABLE_Deep_0_10,
#line 471 "profile.m"
  MR_Word * profile__STATE_VARIABLE_Deep_11)
#line 471 "profile.m"
{
#line 960 "profile.m"
  {
#line 960 "profile.m"
    MR_bool profile__succeeded;
#line 960 "profile.m"
    MR_Integer profile__PDI_8 = (MR_Integer) profile__PDPtr_5;
#line 960 "profile.m"
    MR_ArrayPtr profile__PDDescs_9;
#line 960 "profile.m"
    MR_ArrayPtr profile__V_12_12;
#line 960 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
#line 962 "profile.m"
    MR_Word profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
#line 962 "profile.m"
    MR_String profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
#line 962 "profile.m"
    MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
#line 962 "profile.m"
    MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
#line 962 "profile.m"
    MR_Word profile__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
#line 962 "profile.m"
    MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
#line 962 "profile.m"
    MR_Word profile__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
#line 962 "profile.m"
    MR_Word profile__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
#line 962 "profile.m"
    MR_Word profile__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
#line 962 "profile.m"
    MR_Word profile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
#line 962 "profile.m"
    MR_Box profile__conv0_V_12_12;
#line 962 "profile.m"
    MR_ArrayPtr profile__conv1_PDDescs_9;
#line 963 "profile.m"
    MR_Word profile__V_43_43;
#line 963 "profile.m"
    MR_String profile__V_44_44;
#line 963 "profile.m"
    MR_String profile__V_45_45;
#line 963 "profile.m"
    MR_String profile__V_46_46;
#line 963 "profile.m"
    MR_Word profile__V_47_47;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_48_48;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_49_49;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_50_50;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_51_51;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_52_52;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_53_53;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_54_54;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_55_55;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_56_56;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_57_57;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_58_58;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_59_59;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_61_61;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_62_62;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_63_63;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_64_64;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_65_65;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_66_66;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_67_67;
#line 963 "profile.m"
    MR_Word profile__V_68_68;
#line 963 "profile.m"
    MR_Word profile__V_69_69;
#line 963 "profile.m"
    MR_Word profile__V_70_70;
#line 963 "profile.m"
    MR_Word profile__V_71_71;
#line 963 "profile.m"
    MR_ArrayPtr profile__V_60_60;

#line 962 "profile.m"
    {
#line 962 "profile.m"
      profile__conv0_V_12_12 = array_util__u_1_f_0((MR_Word) &profile_scalar_common_1[3], ((MR_Box) (profile__V_13_13)));
    }
#line 962 "profile.m"
    profile__V_12_12 = ((MR_ArrayPtr) profile__conv0_V_12_12);
#line 962 "profile.m"
    {
#line 962 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, profile__PDI_8, ((MR_Box) (profile__PDDesc_6)), (MR_ArrayPtr) profile__V_12_12, &profile__conv1_PDDescs_9);
    }
#line 962 "profile.m"
    profile__PDDescs_9 = (MR_ArrayPtr) profile__conv1_PDDescs_9;
#line 963 "profile.m"
    profile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
#line 963 "profile.m"
    profile__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
#line 963 "profile.m"
    profile__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
#line 963 "profile.m"
    profile__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
#line 963 "profile.m"
    profile__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
#line 963 "profile.m"
    profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
#line 963 "profile.m"
    profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
#line 963 "profile.m"
    profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
#line 963 "profile.m"
    profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
#line 963 "profile.m"
    profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
#line 963 "profile.m"
    profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
#line 963 "profile.m"
    profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
#line 963 "profile.m"
    profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
#line 963 "profile.m"
    profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
#line 963 "profile.m"
    profile__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
#line 963 "profile.m"
    profile__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
#line 963 "profile.m"
    profile__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
#line 963 "profile.m"
    profile__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
#line 963 "profile.m"
    profile__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
#line 963 "profile.m"
    profile__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
#line 963 "profile.m"
    profile__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
#line 963 "profile.m"
    profile__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
#line 963 "profile.m"
    profile__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
#line 963 "profile.m"
    profile__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
#line 963 "profile.m"
    profile__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
#line 963 "profile.m"
    profile__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
#line 963 "profile.m"
    profile__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
#line 963 "profile.m"
    profile__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
#line 963 "profile.m"
    profile__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
#line 963 "profile.m"
    {
#line 963 "profile.m"
      MR_Word base;
#line 963 "profile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 963 "profile.m"
      *profile__STATE_VARIABLE_Deep_11 = base;
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (profile__V_43_43));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (profile__V_44_44));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (profile__V_45_45));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (profile__V_46_46));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (profile__V_47_47));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (profile__V_48_48));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (profile__V_49_49));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (profile__V_50_50));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (profile__V_51_51));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (profile__V_52_52));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (profile__V_53_53));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (profile__V_54_54));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (profile__V_55_55));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (profile__V_56_56));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (profile__V_57_57));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (profile__V_58_58));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (profile__V_59_59));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (profile__PDDescs_9));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (profile__V_61_61));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (profile__V_62_62));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (profile__V_63_63));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (profile__V_64_64));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (profile__V_65_65));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (profile__V_66_66));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (profile__V_67_67));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (profile__V_68_68));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (profile__V_69_69));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (profile__V_70_70));
#line 963 "profile.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (profile__V_71_71));
#line 963 "profile.m"
    }
#line 960 "profile.m"
  }
#line 471 "profile.m"
}

#line 469 "profile.m"
void MR_CALL 
profile__deep_update_csd_desc_4_p_0(
#line 469 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 469 "profile.m"
  MR_Word profile__CSDDesc_6,
#line 469 "profile.m"
  MR_Word profile__STATE_VARIABLE_Deep_0_10,
#line 469 "profile.m"
  MR_Word * profile__STATE_VARIABLE_Deep_11)
#line 469 "profile.m"
{
#line 955 "profile.m"
  {
#line 955 "profile.m"
    MR_bool profile__succeeded;
#line 955 "profile.m"
    MR_Integer profile__CSDI_8 = (MR_Integer) profile__CSDPtr_5;
#line 955 "profile.m"
    MR_ArrayPtr profile__CSDDescs_9;
#line 955 "profile.m"
    MR_ArrayPtr profile__V_12_12;
#line 955 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
#line 957 "profile.m"
    MR_Word profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
#line 957 "profile.m"
    MR_String profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
#line 957 "profile.m"
    MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
#line 957 "profile.m"
    MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
#line 957 "profile.m"
    MR_Word profile__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
#line 957 "profile.m"
    MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
#line 957 "profile.m"
    MR_Word profile__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
#line 957 "profile.m"
    MR_Word profile__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
#line 957 "profile.m"
    MR_Word profile__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
#line 957 "profile.m"
    MR_Word profile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
#line 957 "profile.m"
    MR_Box profile__conv0_V_12_12;
#line 957 "profile.m"
    MR_ArrayPtr profile__conv1_CSDDescs_9;
#line 958 "profile.m"
    MR_Word profile__V_43_43;
#line 958 "profile.m"
    MR_String profile__V_44_44;
#line 958 "profile.m"
    MR_String profile__V_45_45;
#line 958 "profile.m"
    MR_String profile__V_46_46;
#line 958 "profile.m"
    MR_Word profile__V_47_47;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_48_48;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_49_49;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_50_50;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_51_51;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_52_52;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_53_53;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_54_54;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_55_55;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_56_56;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_57_57;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_58_58;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_59_59;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_60_60;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_62_62;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_63_63;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_64_64;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_65_65;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_66_66;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_67_67;
#line 958 "profile.m"
    MR_Word profile__V_68_68;
#line 958 "profile.m"
    MR_Word profile__V_69_69;
#line 958 "profile.m"
    MR_Word profile__V_70_70;
#line 958 "profile.m"
    MR_Word profile__V_71_71;
#line 958 "profile.m"
    MR_ArrayPtr profile__V_61_61;

#line 957 "profile.m"
    {
#line 957 "profile.m"
      profile__conv0_V_12_12 = array_util__u_1_f_0((MR_Word) &profile_scalar_common_1[3], ((MR_Box) (profile__V_13_13)));
    }
#line 957 "profile.m"
    profile__V_12_12 = ((MR_ArrayPtr) profile__conv0_V_12_12);
#line 957 "profile.m"
    {
#line 957 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, profile__CSDI_8, ((MR_Box) (profile__CSDDesc_6)), (MR_ArrayPtr) profile__V_12_12, &profile__conv1_CSDDescs_9);
    }
#line 957 "profile.m"
    profile__CSDDescs_9 = (MR_ArrayPtr) profile__conv1_CSDDescs_9;
#line 958 "profile.m"
    profile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
#line 958 "profile.m"
    profile__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
#line 958 "profile.m"
    profile__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
#line 958 "profile.m"
    profile__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
#line 958 "profile.m"
    profile__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
#line 958 "profile.m"
    profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
#line 958 "profile.m"
    profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
#line 958 "profile.m"
    profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
#line 958 "profile.m"
    profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
#line 958 "profile.m"
    profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
#line 958 "profile.m"
    profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
#line 958 "profile.m"
    profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
#line 958 "profile.m"
    profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
#line 958 "profile.m"
    profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
#line 958 "profile.m"
    profile__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
#line 958 "profile.m"
    profile__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
#line 958 "profile.m"
    profile__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
#line 958 "profile.m"
    profile__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
#line 958 "profile.m"
    profile__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
#line 958 "profile.m"
    profile__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
#line 958 "profile.m"
    profile__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
#line 958 "profile.m"
    profile__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
#line 958 "profile.m"
    profile__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
#line 958 "profile.m"
    profile__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
#line 958 "profile.m"
    profile__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
#line 958 "profile.m"
    profile__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
#line 958 "profile.m"
    profile__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
#line 958 "profile.m"
    profile__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
#line 958 "profile.m"
    profile__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
#line 958 "profile.m"
    {
#line 958 "profile.m"
      MR_Word base;
#line 958 "profile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 958 "profile.m"
      *profile__STATE_VARIABLE_Deep_11 = base;
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (profile__V_43_43));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (profile__V_44_44));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (profile__V_45_45));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (profile__V_46_46));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (profile__V_47_47));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (profile__V_48_48));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (profile__V_49_49));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (profile__V_50_50));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (profile__V_51_51));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (profile__V_52_52));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (profile__V_53_53));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (profile__V_54_54));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (profile__V_55_55));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (profile__V_56_56));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (profile__V_57_57));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (profile__V_58_58));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (profile__V_59_59));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (profile__V_60_60));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (profile__CSDDescs_9));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (profile__V_62_62));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (profile__V_63_63));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (profile__V_64_64));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (profile__V_65_65));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (profile__V_66_66));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (profile__V_67_67));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (profile__V_68_68));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (profile__V_69_69));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (profile__V_70_70));
#line 958 "profile.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (profile__V_71_71));
#line 958 "profile.m"
    }
#line 955 "profile.m"
  }
#line 469 "profile.m"
}

#line 465 "profile.m"
void MR_CALL 
profile__update_ps_coverage_4_p_0(
#line 465 "profile.m"
  MR_Word profile__PSPtr_5,
#line 465 "profile.m"
  MR_Word profile__Coverage_6,
#line 465 "profile.m"
  MR_ArrayPtr profile__STATE_VARIABLE_Coverages_0_9,
#line 465 "profile.m"
  MR_ArrayPtr * profile__STATE_VARIABLE_Coverages_10)
#line 465 "profile.m"
{
#line 949 "profile.m"
  {
#line 949 "profile.m"
    MR_bool profile__succeeded;
#line 949 "profile.m"
    MR_Integer profile__PSI_8 = (MR_Integer) profile__PSPtr_5;
#line 951 "profile.m"
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_Coverages_10;

#line 951 "profile.m"
    {
#line 951 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_static_coverage_info_0, profile__PSI_8, ((MR_Box) (profile__Coverage_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_Coverages_0_9, &profile__conv0_STATE_VARIABLE_Coverages_10);
    }
#line 951 "profile.m"
    *profile__STATE_VARIABLE_Coverages_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_Coverages_10;
#line 949 "profile.m"
  }
#line 465 "profile.m"
}

#line 462 "profile.m"
void MR_CALL 
profile__update_css_desc_4_p_0(
#line 462 "profile.m"
  MR_Word profile__CSSPtr_5,
#line 462 "profile.m"
  MR_Word profile__Desc_6,
#line 462 "profile.m"
  MR_ArrayPtr profile__STATE_VARIABLE_CSSDescs_0_9,
#line 462 "profile.m"
  MR_ArrayPtr * profile__STATE_VARIABLE_CSSDescs_10)
#line 462 "profile.m"
{
#line 945 "profile.m"
  {
#line 945 "profile.m"
    MR_bool profile__succeeded;
#line 945 "profile.m"
    MR_Integer profile__CSSI_8 = (MR_Integer) profile__CSSPtr_5;
#line 947 "profile.m"
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_CSSDescs_10;

#line 947 "profile.m"
    {
#line 947 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, profile__CSSI_8, ((MR_Box) (profile__Desc_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_CSSDescs_0_9, &profile__conv0_STATE_VARIABLE_CSSDescs_10);
    }
#line 947 "profile.m"
    *profile__STATE_VARIABLE_CSSDescs_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_CSSDescs_10;
#line 945 "profile.m"
  }
#line 462 "profile.m"
}

#line 460 "profile.m"
void MR_CALL 
profile__update_css_own_4_p_0(
#line 460 "profile.m"
  MR_Word profile__CSSPtr_5,
#line 460 "profile.m"
  MR_Word profile__Own_6,
#line 460 "profile.m"
  MR_ArrayPtr profile__STATE_VARIABLE_CSSOwns_0_9,
#line 460 "profile.m"
  MR_ArrayPtr * profile__STATE_VARIABLE_CSSOwns_10)
#line 460 "profile.m"
{
#line 941 "profile.m"
  {
#line 941 "profile.m"
    MR_bool profile__succeeded;
#line 941 "profile.m"
    MR_Integer profile__CSSI_8 = (MR_Integer) profile__CSSPtr_5;
#line 943 "profile.m"
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_CSSOwns_10;

#line 943 "profile.m"
    {
#line 943 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, profile__CSSI_8, ((MR_Box) (profile__Own_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_CSSOwns_0_9, &profile__conv0_STATE_VARIABLE_CSSOwns_10);
    }
#line 943 "profile.m"
    *profile__STATE_VARIABLE_CSSOwns_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_CSSOwns_10;
#line 941 "profile.m"
  }
#line 460 "profile.m"
}

#line 457 "profile.m"
void MR_CALL 
profile__update_ps_desc_4_p_0(
#line 457 "profile.m"
  MR_Word profile__PSPtr_5,
#line 457 "profile.m"
  MR_Word profile__Desc_6,
#line 457 "profile.m"
  MR_ArrayPtr profile__STATE_VARIABLE_PSDescs_0_9,
#line 457 "profile.m"
  MR_ArrayPtr * profile__STATE_VARIABLE_PSDescs_10)
#line 457 "profile.m"
{
#line 937 "profile.m"
  {
#line 937 "profile.m"
    MR_bool profile__succeeded;
#line 937 "profile.m"
    MR_Integer profile__PSI_8 = (MR_Integer) profile__PSPtr_5;
#line 939 "profile.m"
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_PSDescs_10;

#line 939 "profile.m"
    {
#line 939 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, profile__PSI_8, ((MR_Box) (profile__Desc_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_PSDescs_0_9, &profile__conv0_STATE_VARIABLE_PSDescs_10);
    }
#line 939 "profile.m"
    *profile__STATE_VARIABLE_PSDescs_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_PSDescs_10;
#line 937 "profile.m"
  }
#line 457 "profile.m"
}

#line 455 "profile.m"
void MR_CALL 
profile__update_ps_own_4_p_0(
#line 455 "profile.m"
  MR_Word profile__PSPtr_5,
#line 455 "profile.m"
  MR_Word profile__Own_6,
#line 455 "profile.m"
  MR_ArrayPtr profile__STATE_VARIABLE_PSOwns_0_9,
#line 455 "profile.m"
  MR_ArrayPtr * profile__STATE_VARIABLE_PSOwns_10)
#line 455 "profile.m"
{
#line 933 "profile.m"
  {
#line 933 "profile.m"
    MR_bool profile__succeeded;
#line 933 "profile.m"
    MR_Integer profile__PSI_8 = (MR_Integer) profile__PSPtr_5;
#line 935 "profile.m"
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_PSOwns_10;

#line 935 "profile.m"
    {
#line 935 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, profile__PSI_8, ((MR_Box) (profile__Own_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_PSOwns_0_9, &profile__conv0_STATE_VARIABLE_PSOwns_10);
    }
#line 935 "profile.m"
    *profile__STATE_VARIABLE_PSOwns_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_PSOwns_10;
#line 933 "profile.m"
  }
#line 455 "profile.m"
}

#line 452 "profile.m"
void MR_CALL 
profile__update_call_site_static_map_4_p_0(
#line 452 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 452 "profile.m"
  MR_Word profile__CSSPtr_6,
#line 452 "profile.m"
  MR_ArrayPtr profile__STATE_VARIABLE_CallSiteStaticMap_0_9,
#line 452 "profile.m"
  MR_ArrayPtr * profile__STATE_VARIABLE_CallSiteStaticMap_10)
#line 452 "profile.m"
{
#line 925 "profile.m"
  {
#line 925 "profile.m"
    MR_bool profile__succeeded;
#line 925 "profile.m"
    MR_Integer profile__CSDI_8 = (MR_Integer) profile__CSDPtr_5;
#line 927 "profile.m"
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_CallSiteStaticMap_10;

#line 927 "profile.m"
    {
#line 927 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, profile__CSDI_8, ((MR_Box) (profile__CSSPtr_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_CallSiteStaticMap_0_9, &profile__conv0_STATE_VARIABLE_CallSiteStaticMap_10);
    }
#line 927 "profile.m"
    *profile__STATE_VARIABLE_CallSiteStaticMap_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_CallSiteStaticMap_10;
#line 925 "profile.m"
  }
#line 452 "profile.m"
}

#line 448 "profile.m"
void MR_CALL 
profile__update_proc_callers_4_p_0(
#line 448 "profile.m"
  MR_Word profile__PSPtr_5,
#line 448 "profile.m"
  MR_Word profile__CSDPtrs_6,
#line 448 "profile.m"
  MR_ArrayPtr profile__STATE_VARIABLE_ProcCallers_0_9,
#line 448 "profile.m"
  MR_ArrayPtr * profile__STATE_VARIABLE_ProcCallers_10)
#line 448 "profile.m"
{
#line 929 "profile.m"
  {
#line 929 "profile.m"
    MR_bool profile__succeeded;
#line 929 "profile.m"
    MR_Integer profile__PSI_8 = (MR_Integer) profile__PSPtr_5;
#line 931 "profile.m"
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_ProcCallers_10;

#line 931 "profile.m"
    {
#line 931 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &profile_scalar_common_1[2], profile__PSI_8, ((MR_Box) (profile__CSDPtrs_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_ProcCallers_0_9, &profile__conv0_STATE_VARIABLE_ProcCallers_10);
    }
#line 931 "profile.m"
    *profile__STATE_VARIABLE_ProcCallers_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_ProcCallers_10;
#line 929 "profile.m"
  }
#line 448 "profile.m"
}

#line 446 "profile.m"
void MR_CALL 
profile__update_proc_statics_4_p_0(
#line 446 "profile.m"
  MR_Word profile__PSPtr_5,
#line 446 "profile.m"
  MR_Word profile__PS_6,
#line 446 "profile.m"
  MR_ArrayPtr profile__STATE_VARIABLE_ProcStatics_0_9,
#line 446 "profile.m"
  MR_ArrayPtr * profile__STATE_VARIABLE_ProcStatics_10)
#line 446 "profile.m"
{
#line 921 "profile.m"
  {
#line 921 "profile.m"
    MR_bool profile__succeeded;
#line 921 "profile.m"
    MR_Integer profile__PSI_8 = (MR_Integer) profile__PSPtr_5;
#line 923 "profile.m"
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_ProcStatics_10;

#line 923 "profile.m"
    {
#line 923 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, profile__PSI_8, ((MR_Box) (profile__PS_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_ProcStatics_0_9, &profile__conv0_STATE_VARIABLE_ProcStatics_10);
    }
#line 923 "profile.m"
    *profile__STATE_VARIABLE_ProcStatics_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_ProcStatics_10;
#line 921 "profile.m"
  }
#line 446 "profile.m"
}

#line 444 "profile.m"
void MR_CALL 
profile__update_proc_dynamics_4_p_0(
#line 444 "profile.m"
  MR_Word profile__PDPtr_5,
#line 444 "profile.m"
  MR_Word profile__PD_6,
#line 444 "profile.m"
  MR_ArrayPtr profile__STATE_VARIABLE_ProcDynamics_0_9,
#line 444 "profile.m"
  MR_ArrayPtr * profile__STATE_VARIABLE_ProcDynamics_10)
#line 444 "profile.m"
{
#line 917 "profile.m"
  {
#line 917 "profile.m"
    MR_bool profile__succeeded;
#line 917 "profile.m"
    MR_Integer profile__PDI_8 = (MR_Integer) profile__PDPtr_5;
#line 919 "profile.m"
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_ProcDynamics_10;

#line 919 "profile.m"
    {
#line 919 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, profile__PDI_8, ((MR_Box) (profile__PD_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_ProcDynamics_0_9, &profile__conv0_STATE_VARIABLE_ProcDynamics_10);
    }
#line 919 "profile.m"
    *profile__STATE_VARIABLE_ProcDynamics_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_ProcDynamics_10;
#line 917 "profile.m"
  }
#line 444 "profile.m"
}

#line 441 "profile.m"
void MR_CALL 
profile__update_call_site_statics_4_p_0(
#line 441 "profile.m"
  MR_Word profile__CSSPtr_5,
#line 441 "profile.m"
  MR_Word profile__CSS_6,
#line 441 "profile.m"
  MR_ArrayPtr profile__STATE_VARIABLE_CallSiteStatics_0_9,
#line 441 "profile.m"
  MR_ArrayPtr * profile__STATE_VARIABLE_CallSiteStatics_10)
#line 441 "profile.m"
{
#line 913 "profile.m"
  {
#line 913 "profile.m"
    MR_bool profile__succeeded;
#line 913 "profile.m"
    MR_Integer profile__CSSI_8 = (MR_Integer) profile__CSSPtr_5;
#line 915 "profile.m"
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_CallSiteStatics_10;

#line 915 "profile.m"
    {
#line 915 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, profile__CSSI_8, ((MR_Box) (profile__CSS_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_CallSiteStatics_0_9, &profile__conv0_STATE_VARIABLE_CallSiteStatics_10);
    }
#line 915 "profile.m"
    *profile__STATE_VARIABLE_CallSiteStatics_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_CallSiteStatics_10;
#line 913 "profile.m"
  }
#line 441 "profile.m"
}

#line 438 "profile.m"
void MR_CALL 
profile__update_call_site_dynamics_4_p_0(
#line 438 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 438 "profile.m"
  MR_Word profile__CSD_6,
#line 438 "profile.m"
  MR_ArrayPtr profile__STATE_VARIABLE_CallSiteDynamics_0_9,
#line 438 "profile.m"
  MR_ArrayPtr * profile__STATE_VARIABLE_CallSiteDynamics_10)
#line 438 "profile.m"
{
#line 909 "profile.m"
  {
#line 909 "profile.m"
    MR_bool profile__succeeded;
#line 909 "profile.m"
    MR_Integer profile__CSDI_8 = (MR_Integer) profile__CSDPtr_5;
#line 911 "profile.m"
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_CallSiteDynamics_10;

#line 911 "profile.m"
    {
#line 911 "profile.m"
      mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, profile__CSDI_8, ((MR_Box) (profile__CSD_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_CallSiteDynamics_0_9, &profile__conv0_STATE_VARIABLE_CallSiteDynamics_10);
    }
#line 911 "profile.m"
    *profile__STATE_VARIABLE_CallSiteDynamics_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_CallSiteDynamics_10;
#line 909 "profile.m"
  }
#line 438 "profile.m"
}

#line 435 "profile.m"
void MR_CALL 
profile__deep_lookup_ps_coverage_3_p_0(
#line 435 "profile.m"
  MR_Word profile__Deep_4,
#line 435 "profile.m"
  MR_Word profile__PSPtr_5,
#line 435 "profile.m"
  MR_Word * profile__Coverage_6)
#line 435 "profile.m"
{
#line 897 "profile.m"
  {
#line 897 "profile.m"
    MR_bool profile__succeeded;
#line 897 "profile.m"
    MR_Word profile__MaybeCoverageTables_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 898 "profile.m"
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 898 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 898 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 898 "profile.m"
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 898 "profile.m"
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 898 "profile.m"
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 898 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 898 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 898 "profile.m"
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

#line 902 "profile.m"
    if ((profile__MaybeCoverageTables_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "profile.m"
      {
#line 904 "profile.m"
        *profile__Coverage_6 = measurements__zero_static_coverage_0_f_0();
      }
#line 902 "profile.m"
    else
#line 900 "profile.m"
      {
#line 900 "profile.m"
        MR_ArrayPtr profile__CoverageTables_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), profile__MaybeCoverageTables_7, (MR_Integer) 0)));

#line 901 "profile.m"
        {
#line 901 "profile.m"
          profile__lookup_ps_coverage_3_p_0(profile__CoverageTables_8, profile__PSPtr_5, profile__Coverage_6);
#line 901 "profile.m"
          return;
        }
#line 900 "profile.m"
      }
#line 897 "profile.m"
  }
#line 435 "profile.m"
}

#line 433 "profile.m"
void MR_CALL 
profile__deep_lookup_css_desc_3_p_0(
#line 433 "profile.m"
  MR_Word profile__Deep_4,
#line 433 "profile.m"
  MR_Word profile__CSSPtr_5,
#line 433 "profile.m"
  MR_Word * profile__Desc_6)
#line 433 "profile.m"
{
#line 893 "profile.m"
  {
#line 893 "profile.m"
    MR_bool profile__succeeded;
#line 893 "profile.m"
    MR_Integer profile__CSSI_7 = (MR_Integer) profile__CSSPtr_5;
#line 893 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 895 "profile.m"
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 895 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 895 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 895 "profile.m"
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 895 "profile.m"
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 895 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 895 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 895 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 895 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 895 "profile.m"
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
#line 895 "profile.m"
    MR_Box profile__conv0_Desc_6;

#line 895 "profile.m"
    {
#line 895 "profile.m"
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__V_8_8, profile__CSSI_7, &profile__conv0_Desc_6);
    }
#line 895 "profile.m"
    *profile__Desc_6 = ((MR_Word) profile__conv0_Desc_6);
#line 893 "profile.m"
  }
#line 433 "profile.m"
}

#line 431 "profile.m"
void MR_CALL 
profile__deep_lookup_css_own_3_p_0(
#line 431 "profile.m"
  MR_Word profile__Deep_4,
#line 431 "profile.m"
  MR_Word profile__CSSPtr_5,
#line 431 "profile.m"
  MR_Word * profile__Own_6)
#line 431 "profile.m"
{
#line 889 "profile.m"
  {
#line 889 "profile.m"
    MR_bool profile__succeeded;
#line 889 "profile.m"
    MR_Integer profile__CSSI_7 = (MR_Integer) profile__CSSPtr_5;
#line 889 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 891 "profile.m"
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 891 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 891 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 891 "profile.m"
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 891 "profile.m"
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 891 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 891 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 891 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 891 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 891 "profile.m"
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
#line 891 "profile.m"
    MR_Box profile__conv0_Own_6;

#line 891 "profile.m"
    {
#line 891 "profile.m"
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__V_8_8, profile__CSSI_7, &profile__conv0_Own_6);
    }
#line 891 "profile.m"
    *profile__Own_6 = ((MR_Word) profile__conv0_Own_6);
#line 889 "profile.m"
  }
#line 431 "profile.m"
}

#line 429 "profile.m"
void MR_CALL 
profile__deep_lookup_ps_desc_3_p_0(
#line 429 "profile.m"
  MR_Word profile__Deep_4,
#line 429 "profile.m"
  MR_Word profile__PSPtr_5,
#line 429 "profile.m"
  MR_Word * profile__Desc_6)
#line 429 "profile.m"
{
#line 885 "profile.m"
  {
#line 885 "profile.m"
    MR_bool profile__succeeded;
#line 885 "profile.m"
    MR_Integer profile__PSI_7 = (MR_Integer) profile__PSPtr_5;
#line 885 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 887 "profile.m"
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 887 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 887 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 887 "profile.m"
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 887 "profile.m"
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 887 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 887 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 887 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 887 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 887 "profile.m"
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
#line 887 "profile.m"
    MR_Box profile__conv0_Desc_6;

#line 887 "profile.m"
    {
#line 887 "profile.m"
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__V_8_8, profile__PSI_7, &profile__conv0_Desc_6);
    }
#line 887 "profile.m"
    *profile__Desc_6 = ((MR_Word) profile__conv0_Desc_6);
#line 885 "profile.m"
  }
#line 429 "profile.m"
}

#line 427 "profile.m"
void MR_CALL 
profile__deep_lookup_ps_own_3_p_0(
#line 427 "profile.m"
  MR_Word profile__Deep_4,
#line 427 "profile.m"
  MR_Word profile__PSPtr_5,
#line 427 "profile.m"
  MR_Word * profile__Own_6)
#line 427 "profile.m"
{
#line 881 "profile.m"
  {
#line 881 "profile.m"
    MR_bool profile__succeeded;
#line 881 "profile.m"
    MR_Integer profile__PSI_7 = (MR_Integer) profile__PSPtr_5;
#line 881 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 883 "profile.m"
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 883 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 883 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 883 "profile.m"
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 883 "profile.m"
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 883 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 883 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 883 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 883 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 883 "profile.m"
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
#line 883 "profile.m"
    MR_Box profile__conv0_Own_6;

#line 883 "profile.m"
    {
#line 883 "profile.m"
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__V_8_8, profile__PSI_7, &profile__conv0_Own_6);
    }
#line 883 "profile.m"
    *profile__Own_6 = ((MR_Word) profile__conv0_Own_6);
#line 881 "profile.m"
  }
#line 427 "profile.m"
}

#line 425 "profile.m"
void MR_CALL 
profile__deep_lookup_csd_desc_3_p_0(
#line 425 "profile.m"
  MR_Word profile__Deep_4,
#line 425 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 425 "profile.m"
  MR_Word * profile__Desc_6)
#line 425 "profile.m"
{
#line 877 "profile.m"
  {
#line 877 "profile.m"
    MR_bool profile__succeeded;
#line 877 "profile.m"
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
#line 877 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 879 "profile.m"
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 879 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 879 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 879 "profile.m"
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 879 "profile.m"
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 879 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 879 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 879 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 879 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 879 "profile.m"
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
#line 879 "profile.m"
    MR_Box profile__conv0_Desc_6;

#line 879 "profile.m"
    {
#line 879 "profile.m"
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__V_8_8, profile__CSDI_7, &profile__conv0_Desc_6);
    }
#line 879 "profile.m"
    *profile__Desc_6 = ((MR_Word) profile__conv0_Desc_6);
#line 877 "profile.m"
  }
#line 425 "profile.m"
}

#line 423 "profile.m"
void MR_CALL 
profile__deep_lookup_csd_own_3_p_0(
#line 423 "profile.m"
  MR_Word profile__Deep_4,
#line 423 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 423 "profile.m"
  MR_Word * profile__Own_6)
#line 423 "profile.m"
{
#line 872 "profile.m"
  {
#line 872 "profile.m"
    MR_bool profile__succeeded;
#line 872 "profile.m"
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
#line 872 "profile.m"
    MR_Word profile__CSD_8;
#line 872 "profile.m"
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 874 "profile.m"
    MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 874 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 874 "profile.m"
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 874 "profile.m"
    MR_String profile__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 874 "profile.m"
    MR_Word profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 874 "profile.m"
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 874 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 874 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 874 "profile.m"
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 874 "profile.m"
    MR_Word profile__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
#line 874 "profile.m"
    MR_Box profile__conv0_CSD_8;
#line 875 "profile.m"
    MR_Word profile__V_38_38;
#line 875 "profile.m"
    MR_Word profile__V_39_39;

#line 874 "profile.m"
    {
#line 874 "profile.m"
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) profile__V_9_9, profile__CSDI_7, &profile__conv0_CSD_8);
    }
#line 874 "profile.m"
    profile__CSD_8 = ((MR_Word) profile__conv0_CSD_8);
#line 875 "profile.m"
    profile__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_8, (MR_Integer) 0)));
#line 875 "profile.m"
    profile__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_8, (MR_Integer) 1)));
#line 875 "profile.m"
    *profile__Own_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_8, (MR_Integer) 2)));
#line 872 "profile.m"
  }
#line 423 "profile.m"
}

#line 421 "profile.m"
void MR_CALL 
profile__deep_lookup_pd_desc_3_p_0(
#line 421 "profile.m"
  MR_Word profile__Deep_4,
#line 421 "profile.m"
  MR_Word profile__PDPtr_5,
#line 421 "profile.m"
  MR_Word * profile__Desc_6)
#line 421 "profile.m"
{
#line 868 "profile.m"
  {
#line 868 "profile.m"
    MR_bool profile__succeeded;
#line 868 "profile.m"
    MR_Integer profile__PDI_7 = (MR_Integer) profile__PDPtr_5;
#line 868 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 870 "profile.m"
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 870 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 870 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 870 "profile.m"
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 870 "profile.m"
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 870 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 870 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 870 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 870 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 870 "profile.m"
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
#line 870 "profile.m"
    MR_Box profile__conv0_Desc_6;

#line 870 "profile.m"
    {
#line 870 "profile.m"
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__V_8_8, profile__PDI_7, &profile__conv0_Desc_6);
    }
#line 870 "profile.m"
    *profile__Desc_6 = ((MR_Word) profile__conv0_Desc_6);
#line 868 "profile.m"
  }
#line 421 "profile.m"
}

#line 419 "profile.m"
void MR_CALL 
profile__deep_lookup_pd_own_3_p_0(
#line 419 "profile.m"
  MR_Word profile__Deep_4,
#line 419 "profile.m"
  MR_Word profile__PDPtr_5,
#line 419 "profile.m"
  MR_Word * profile__Own_6)
#line 419 "profile.m"
{
#line 864 "profile.m"
  {
#line 864 "profile.m"
    MR_bool profile__succeeded;
#line 864 "profile.m"
    MR_Integer profile__PDI_7 = (MR_Integer) profile__PDPtr_5;
#line 864 "profile.m"
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 866 "profile.m"
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 866 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 866 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 866 "profile.m"
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 866 "profile.m"
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 866 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 866 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 866 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 866 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 866 "profile.m"
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
#line 866 "profile.m"
    MR_Box profile__conv0_Own_6;

#line 866 "profile.m"
    {
#line 866 "profile.m"
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__V_8_8, profile__PDI_7, &profile__conv0_Own_6);
    }
#line 866 "profile.m"
    *profile__Own_6 = ((MR_Word) profile__conv0_Own_6);
#line 864 "profile.m"
  }
#line 419 "profile.m"
}

#line 416 "profile.m"
void MR_CALL 
profile__deep_lookup_csd_comp_table_3_p_0(
#line 416 "profile.m"
  MR_Word profile__Deep_4,
#line 416 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 416 "profile.m"
  MR_Word * profile__CompTable_6)
#line 416 "profile.m"
{
#line 859 "profile.m"
  {
#line 859 "profile.m"
    MR_bool profile__succeeded;
#line 859 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 860 "profile.m"
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 860 "profile.m"
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 860 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 860 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 860 "profile.m"
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 860 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 860 "profile.m"
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 860 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 860 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 860 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

#line 860 "profile.m"
    {
#line 860 "profile.m"
      profile__lookup_csd_comp_table_3_p_0(profile__V_7_7, profile__CSDPtr_5, profile__CompTable_6);
#line 860 "profile.m"
      return;
    }
#line 859 "profile.m"
  }
#line 416 "profile.m"
}

#line 414 "profile.m"
void MR_CALL 
profile__deep_lookup_pd_comp_table_3_p_0(
#line 414 "profile.m"
  MR_Word profile__Deep_4,
#line 414 "profile.m"
  MR_Word profile__PDPtr_5,
#line 414 "profile.m"
  MR_Word * profile__CompTable_6)
#line 414 "profile.m"
{
#line 856 "profile.m"
  {
#line 856 "profile.m"
    MR_bool profile__succeeded;
#line 856 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 857 "profile.m"
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 857 "profile.m"
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 857 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 857 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 857 "profile.m"
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 857 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 857 "profile.m"
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 857 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 857 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 857 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

#line 857 "profile.m"
    {
#line 857 "profile.m"
      profile__lookup_pd_comp_table_3_p_0(profile__V_7_7, profile__PDPtr_5, profile__CompTable_6);
#line 857 "profile.m"
      return;
    }
#line 856 "profile.m"
  }
#line 414 "profile.m"
}

#line 412 "profile.m"
void MR_CALL 
profile__deep_lookup_proc_dynamic_sites_3_p_0(
#line 412 "profile.m"
  MR_Word profile__Deep_4,
#line 412 "profile.m"
  MR_Word profile__PDPtr_5,
#line 412 "profile.m"
  MR_ArrayPtr * profile__PDSites_6)
#line 412 "profile.m"
{
#line 852 "profile.m"
  {
#line 852 "profile.m"
    MR_bool profile__succeeded;
#line 852 "profile.m"
    MR_Word profile__PD_7;
#line 852 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 824 "profile.m"
    MR_Word profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 824 "profile.m"
    MR_String profile__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 824 "profile.m"
    MR_String profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 824 "profile.m"
    MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 824 "profile.m"
    MR_Word profile__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 824 "profile.m"
    MR_Word profile__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 824 "profile.m"
    MR_Word profile__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 824 "profile.m"
    MR_Word profile__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 824 "profile.m"
    MR_Word profile__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
#line 854 "profile.m"
    MR_Word profile__V_8_8;
#line 854 "profile.m"
    MR_Word profile__V_9_9;

#line 824 "profile.m"
    {
#line 824 "profile.m"
      profile__lookup_proc_dynamics_3_p_0(profile__V_13_13, profile__PDPtr_5, &profile__PD_7);
    }
#line 854 "profile.m"
    profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__PD_7, (MR_Integer) 0)));
#line 854 "profile.m"
    *profile__PDSites_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__PD_7, (MR_Integer) 1)));
#line 854 "profile.m"
    profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__PD_7, (MR_Integer) 2)));
#line 852 "profile.m"
  }
#line 412 "profile.m"
}

#line 410 "profile.m"
void MR_CALL 
profile__deep_lookup_call_site_calls_3_p_0(
#line 410 "profile.m"
  MR_Word profile__Deep_4,
#line 410 "profile.m"
  MR_Word profile__CSSPtr_5,
#line 410 "profile.m"
  MR_Word * profile__Calls_6)
#line 410 "profile.m"
{
#line 849 "profile.m"
  {
#line 849 "profile.m"
    MR_bool profile__succeeded;
#line 849 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 850 "profile.m"
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 850 "profile.m"
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 850 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 850 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 850 "profile.m"
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 850 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 850 "profile.m"
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 850 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 850 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 850 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

#line 850 "profile.m"
    {
#line 850 "profile.m"
      profile__lookup_call_site_calls_3_p_0(profile__V_7_7, profile__CSSPtr_5, profile__Calls_6);
#line 850 "profile.m"
      return;
    }
#line 849 "profile.m"
  }
#line 410 "profile.m"
}

#line 408 "profile.m"
void MR_CALL 
profile__deep_lookup_call_site_static_map_3_p_0(
#line 408 "profile.m"
  MR_Word profile__Deep_4,
#line 408 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 408 "profile.m"
  MR_Word * profile__CSSPtr_6)
#line 408 "profile.m"
{
#line 845 "profile.m"
  {
#line 845 "profile.m"
    MR_bool profile__succeeded;
#line 845 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 846 "profile.m"
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 846 "profile.m"
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 846 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 846 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 846 "profile.m"
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 846 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 846 "profile.m"
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 846 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 846 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 846 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

#line 846 "profile.m"
    {
#line 846 "profile.m"
      profile__lookup_call_site_static_map_3_p_0(profile__V_7_7, profile__CSDPtr_5, profile__CSSPtr_6);
#line 846 "profile.m"
      return;
    }
#line 845 "profile.m"
  }
#line 408 "profile.m"
}

#line 406 "profile.m"
void MR_CALL 
profile__deep_lookup_proc_callers_3_p_0(
#line 406 "profile.m"
  MR_Word profile__Deep_4,
#line 406 "profile.m"
  MR_Word profile__PSPtr_5,
#line 406 "profile.m"
  MR_Word * profile__CallerCSDPtrs_6)
#line 406 "profile.m"
{
#line 842 "profile.m"
  {
#line 842 "profile.m"
    MR_bool profile__succeeded;
#line 842 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 843 "profile.m"
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 843 "profile.m"
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 843 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 843 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 843 "profile.m"
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 843 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 843 "profile.m"
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 843 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 843 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 843 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

#line 843 "profile.m"
    {
#line 843 "profile.m"
      profile__lookup_proc_callers_3_p_0(profile__V_7_7, profile__PSPtr_5, profile__CallerCSDPtrs_6);
#line 843 "profile.m"
      return;
    }
#line 842 "profile.m"
  }
#line 406 "profile.m"
}

#line 404 "profile.m"
void MR_CALL 
profile__deep_lookup_clique_maybe_child_3_p_0(
#line 404 "profile.m"
  MR_Word profile__Deep_4,
#line 404 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 404 "profile.m"
  MR_Word * profile__MaybeCliquePtr_6)
#line 404 "profile.m"
{
#line 838 "profile.m"
  {
#line 838 "profile.m"
    MR_bool profile__succeeded;
#line 838 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 839 "profile.m"
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 839 "profile.m"
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 839 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 839 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 839 "profile.m"
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 839 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 839 "profile.m"
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 839 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 839 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 839 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

#line 839 "profile.m"
    {
#line 839 "profile.m"
      profile__lookup_clique_maybe_child_3_p_0(profile__V_7_7, profile__CSDPtr_5, profile__MaybeCliquePtr_6);
#line 839 "profile.m"
      return;
    }
#line 838 "profile.m"
  }
#line 404 "profile.m"
}

#line 402 "profile.m"
void MR_CALL 
profile__deep_lookup_clique_parents_3_p_0(
#line 402 "profile.m"
  MR_Word profile__Deep_4,
#line 402 "profile.m"
  MR_Word profile__CliquePtr_5,
#line 402 "profile.m"
  MR_Word * profile__CSDPtr_6)
#line 402 "profile.m"
{
#line 835 "profile.m"
  {
#line 835 "profile.m"
    MR_bool profile__succeeded;
#line 835 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 836 "profile.m"
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 836 "profile.m"
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 836 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 836 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 836 "profile.m"
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 836 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 836 "profile.m"
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 836 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 836 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 836 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

#line 836 "profile.m"
    {
#line 836 "profile.m"
      profile__lookup_clique_parents_3_p_0(profile__V_7_7, profile__CliquePtr_5, profile__CSDPtr_6);
#line 836 "profile.m"
      return;
    }
#line 835 "profile.m"
  }
#line 402 "profile.m"
}

#line 400 "profile.m"
void MR_CALL 
profile__deep_lookup_clique_members_3_p_0(
#line 400 "profile.m"
  MR_Word profile__Deep_4,
#line 400 "profile.m"
  MR_Word profile__CliquePtr_5,
#line 400 "profile.m"
  MR_Word * profile__PDPtrs_6)
#line 400 "profile.m"
{
#line 832 "profile.m"
  {
#line 832 "profile.m"
    MR_bool profile__succeeded;
#line 832 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 833 "profile.m"
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 833 "profile.m"
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 833 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 833 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 833 "profile.m"
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 833 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 833 "profile.m"
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 833 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 833 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 833 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

#line 833 "profile.m"
    {
#line 833 "profile.m"
      profile__lookup_clique_members_3_p_0(profile__V_7_7, profile__CliquePtr_5, profile__PDPtrs_6);
#line 833 "profile.m"
      return;
    }
#line 832 "profile.m"
  }
#line 400 "profile.m"
}

#line 398 "profile.m"
void MR_CALL 
profile__deep_lookup_clique_index_3_p_0(
#line 398 "profile.m"
  MR_Word profile__Deep_4,
#line 398 "profile.m"
  MR_Word profile__PDPtr_5,
#line 398 "profile.m"
  MR_Word * profile__CliquePtr_6)
#line 398 "profile.m"
{
#line 829 "profile.m"
  {
#line 829 "profile.m"
    MR_bool profile__succeeded;
#line 829 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 830 "profile.m"
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 830 "profile.m"
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 830 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 830 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 830 "profile.m"
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 830 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 830 "profile.m"
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 830 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 830 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 830 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

#line 830 "profile.m"
    {
#line 830 "profile.m"
      profile__lookup_clique_index_3_p_0(profile__V_7_7, profile__PDPtr_5, profile__CliquePtr_6);
#line 830 "profile.m"
      return;
    }
#line 829 "profile.m"
  }
#line 398 "profile.m"
}

#line 396 "profile.m"
void MR_CALL 
profile__deep_lookup_proc_statics_3_p_0(
#line 396 "profile.m"
  MR_Word profile__Deep_4,
#line 396 "profile.m"
  MR_Word profile__PSPtr_5,
#line 396 "profile.m"
  MR_Word * profile__PS_6)
#line 396 "profile.m"
{
#line 826 "profile.m"
  {
#line 826 "profile.m"
    MR_bool profile__succeeded;
#line 826 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 827 "profile.m"
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 827 "profile.m"
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 827 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 827 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 827 "profile.m"
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 827 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 827 "profile.m"
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 827 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 827 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 827 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

#line 827 "profile.m"
    {
#line 827 "profile.m"
      profile__lookup_proc_statics_3_p_0(profile__V_7_7, profile__PSPtr_5, profile__PS_6);
#line 827 "profile.m"
      return;
    }
#line 826 "profile.m"
  }
#line 396 "profile.m"
}

#line 394 "profile.m"
void MR_CALL 
profile__deep_lookup_proc_dynamics_3_p_0(
#line 394 "profile.m"
  MR_Word profile__Deep_4,
#line 394 "profile.m"
  MR_Word profile__PDPtr_5,
#line 394 "profile.m"
  MR_Word * profile__PD_6)
#line 394 "profile.m"
{
#line 823 "profile.m"
  {
#line 823 "profile.m"
    MR_bool profile__succeeded;
#line 823 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 824 "profile.m"
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 824 "profile.m"
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 824 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 824 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 824 "profile.m"
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 824 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 824 "profile.m"
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 824 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 824 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 824 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

#line 824 "profile.m"
    {
#line 824 "profile.m"
      profile__lookup_proc_dynamics_3_p_0(profile__V_7_7, profile__PDPtr_5, profile__PD_6);
#line 824 "profile.m"
      return;
    }
#line 823 "profile.m"
  }
#line 394 "profile.m"
}

#line 392 "profile.m"
void MR_CALL 
profile__deep_lookup_call_site_statics_3_p_0(
#line 392 "profile.m"
  MR_Word profile__Deep_4,
#line 392 "profile.m"
  MR_Word profile__CSSPtr_5,
#line 392 "profile.m"
  MR_Word * profile__CSS_6)
#line 392 "profile.m"
{
#line 820 "profile.m"
  {
#line 820 "profile.m"
    MR_bool profile__succeeded;
#line 820 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 821 "profile.m"
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 821 "profile.m"
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 821 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 821 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 821 "profile.m"
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 821 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 821 "profile.m"
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 821 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 821 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 821 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

#line 821 "profile.m"
    {
#line 821 "profile.m"
      profile__lookup_call_site_statics_3_p_0(profile__V_7_7, profile__CSSPtr_5, profile__CSS_6);
#line 821 "profile.m"
      return;
    }
#line 820 "profile.m"
  }
#line 392 "profile.m"
}

#line 390 "profile.m"
void MR_CALL 
profile__deep_lookup_call_site_dynamics_3_p_0(
#line 390 "profile.m"
  MR_Word profile__Deep_4,
#line 390 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 390 "profile.m"
  MR_Word * profile__CSD_6)
#line 390 "profile.m"
{
#line 817 "profile.m"
  {
#line 817 "profile.m"
    MR_bool profile__succeeded;
#line 817 "profile.m"
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
#line 818 "profile.m"
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
#line 818 "profile.m"
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
#line 818 "profile.m"
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
#line 818 "profile.m"
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
#line 818 "profile.m"
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
#line 818 "profile.m"
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
#line 818 "profile.m"
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
#line 818 "profile.m"
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
#line 818 "profile.m"
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
#line 818 "profile.m"
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

#line 818 "profile.m"
    {
#line 818 "profile.m"
      profile__lookup_call_site_dynamics_3_p_0(profile__V_7_7, profile__CSDPtr_5, profile__CSD_6);
#line 818 "profile.m"
      return;
    }
#line 817 "profile.m"
  }
#line 390 "profile.m"
}

#line 387 "profile.m"
void MR_CALL 
profile__lookup_ps_coverage_3_p_0(
#line 387 "profile.m"
  MR_ArrayPtr profile__PSCoverageArrays_4,
#line 387 "profile.m"
  MR_Word profile__PSPtr_5,
#line 387 "profile.m"
  MR_Word * profile__PSCoverageArray_6)
#line 387 "profile.m"
{
#line 807 "profile.m"
  {
#line 807 "profile.m"
    MR_bool profile__succeeded;
#line 807 "profile.m"
    MR_Integer profile__PSI_7 = (MR_Integer) profile__PSPtr_5;
#line 809 "profile.m"
    MR_Word profile__TypeCtorInfo_10_10;

#line 809 "profile.m"
    profile__succeeded = (profile__PSI_7 > (MR_Integer) 0);
#line 809 "profile.m"
    if (profile__succeeded)
#line 809 "profile.m"
      {
#line 16569 "profile.c"
        profile__TypeCtorInfo_10_10 = (MR_Word) &measurements__measurements__type_ctor_info_static_coverage_info_0;
#line 809 "profile.m"
        {
#line 809 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_10_10, (MR_ArrayPtr) profile__PSCoverageArrays_4, profile__PSI_7);
        }
#line 809 "profile.m"
      }
#line 811 "profile.m"
    if (profile__succeeded)
#line 810 "profile.m"
      {
#line 810 "profile.m"
        MR_Box profile__conv0_PSCoverageArray_6;

#line 810 "profile.m"
        {
#line 810 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_static_coverage_info_0, (MR_ArrayPtr) profile__PSCoverageArrays_4, profile__PSI_7, &profile__conv0_PSCoverageArray_6);
        }
#line 810 "profile.m"
        *profile__PSCoverageArray_6 = ((MR_Word) profile__conv0_PSCoverageArray_6);
#line 810 "profile.m"
      }
#line 811 "profile.m"
    else
#line 812 "profile.m"
      {
#line 812 "profile.m"
        {
#line 812 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_ps_coverage: bounds error");
#line 812 "profile.m"
          return;
        }
#line 812 "profile.m"
      }
#line 807 "profile.m"
  }
#line 387 "profile.m"
}

#line 385 "profile.m"
void MR_CALL 
profile__lookup_csd_comp_table_3_p_0(
#line 385 "profile.m"
  MR_ArrayPtr profile__CSDCompTables_4,
#line 385 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 385 "profile.m"
  MR_Word * profile__CompTable_6)
#line 385 "profile.m"
{
#line 799 "profile.m"
  {
#line 799 "profile.m"
    MR_bool profile__succeeded;
#line 799 "profile.m"
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
#line 801 "profile.m"
    MR_Word profile__TypeInfo_10_10;

#line 801 "profile.m"
    profile__succeeded = (profile__CSDI_7 > (MR_Integer) 0);
#line 801 "profile.m"
    if (profile__succeeded)
#line 801 "profile.m"
      {
#line 16638 "profile.c"
        profile__TypeInfo_10_10 = (MR_Word) &profile_scalar_common_2[1];
#line 801 "profile.m"
        {
#line 801 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeInfo_10_10, (MR_ArrayPtr) profile__CSDCompTables_4, profile__CSDI_7);
        }
#line 801 "profile.m"
      }
#line 803 "profile.m"
    if (profile__succeeded)
#line 802 "profile.m"
      {
#line 802 "profile.m"
        MR_Box profile__conv0_CompTable_6;

#line 802 "profile.m"
        {
#line 802 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile_scalar_common_2[1], (MR_ArrayPtr) profile__CSDCompTables_4, profile__CSDI_7, &profile__conv0_CompTable_6);
        }
#line 802 "profile.m"
        *profile__CompTable_6 = ((MR_Word) profile__conv0_CompTable_6);
#line 802 "profile.m"
      }
#line 803 "profile.m"
    else
#line 804 "profile.m"
      {
#line 804 "profile.m"
        {
#line 804 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_csd_comp_table: bounds error");
#line 804 "profile.m"
          return;
        }
#line 804 "profile.m"
      }
#line 799 "profile.m"
  }
#line 385 "profile.m"
}

#line 383 "profile.m"
void MR_CALL 
profile__lookup_pd_comp_table_3_p_0(
#line 383 "profile.m"
  MR_ArrayPtr profile__PDCompTables_4,
#line 383 "profile.m"
  MR_Word profile__PDPtr_5,
#line 383 "profile.m"
  MR_Word * profile__CompTable_6)
#line 383 "profile.m"
{
#line 791 "profile.m"
  {
#line 791 "profile.m"
    MR_bool profile__succeeded;
#line 791 "profile.m"
    MR_Integer profile__PDI_7 = (MR_Integer) profile__PDPtr_5;
#line 793 "profile.m"
    MR_Word profile__TypeInfo_10_10;

#line 793 "profile.m"
    profile__succeeded = (profile__PDI_7 > (MR_Integer) 0);
#line 793 "profile.m"
    if (profile__succeeded)
#line 793 "profile.m"
      {
#line 16707 "profile.c"
        profile__TypeInfo_10_10 = (MR_Word) &profile_scalar_common_2[1];
#line 793 "profile.m"
        {
#line 793 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeInfo_10_10, (MR_ArrayPtr) profile__PDCompTables_4, profile__PDI_7);
        }
#line 793 "profile.m"
      }
#line 795 "profile.m"
    if (profile__succeeded)
#line 794 "profile.m"
      {
#line 794 "profile.m"
        MR_Box profile__conv0_CompTable_6;

#line 794 "profile.m"
        {
#line 794 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile_scalar_common_2[1], (MR_ArrayPtr) profile__PDCompTables_4, profile__PDI_7, &profile__conv0_CompTable_6);
        }
#line 794 "profile.m"
        *profile__CompTable_6 = ((MR_Word) profile__conv0_CompTable_6);
#line 794 "profile.m"
      }
#line 795 "profile.m"
    else
#line 796 "profile.m"
      {
#line 796 "profile.m"
        {
#line 796 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_pd_comp_table: bounds error");
#line 796 "profile.m"
          return;
        }
#line 796 "profile.m"
      }
#line 791 "profile.m"
  }
#line 383 "profile.m"
}

#line 381 "profile.m"
void MR_CALL 
profile__lookup_css_desc_3_p_0(
#line 381 "profile.m"
  MR_ArrayPtr profile__CSSDescs_4,
#line 381 "profile.m"
  MR_Word profile__CSSPtr_5,
#line 381 "profile.m"
  MR_Word * profile__CSSDesc_6)
#line 381 "profile.m"
{
#line 783 "profile.m"
  {
#line 783 "profile.m"
    MR_bool profile__succeeded;
#line 783 "profile.m"
    MR_Integer profile__CSSI_7 = (MR_Integer) profile__CSSPtr_5;
#line 785 "profile.m"
    MR_Word profile__TypeCtorInfo_10_10;

#line 785 "profile.m"
    profile__succeeded = (profile__CSSI_7 > (MR_Integer) 0);
#line 785 "profile.m"
    if (profile__succeeded)
#line 785 "profile.m"
      {
#line 16776 "profile.c"
        profile__TypeCtorInfo_10_10 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 785 "profile.m"
        {
#line 785 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_10_10, (MR_ArrayPtr) profile__CSSDescs_4, profile__CSSI_7);
        }
#line 785 "profile.m"
      }
#line 787 "profile.m"
    if (profile__succeeded)
#line 786 "profile.m"
      {
#line 786 "profile.m"
        MR_Box profile__conv0_CSSDesc_6;

#line 786 "profile.m"
        {
#line 786 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__CSSDescs_4, profile__CSSI_7, &profile__conv0_CSSDesc_6);
        }
#line 786 "profile.m"
        *profile__CSSDesc_6 = ((MR_Word) profile__conv0_CSSDesc_6);
#line 786 "profile.m"
      }
#line 787 "profile.m"
    else
#line 788 "profile.m"
      {
#line 788 "profile.m"
        {
#line 788 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_css_desc: bounds error");
#line 788 "profile.m"
          return;
        }
#line 788 "profile.m"
      }
#line 783 "profile.m"
  }
#line 381 "profile.m"
}

#line 379 "profile.m"
void MR_CALL 
profile__lookup_css_own_3_p_0(
#line 379 "profile.m"
  MR_ArrayPtr profile__CSSOwns_4,
#line 379 "profile.m"
  MR_Word profile__CSSPtr_5,
#line 379 "profile.m"
  MR_Word * profile__CSSOwn_6)
#line 379 "profile.m"
{
#line 775 "profile.m"
  {
#line 775 "profile.m"
    MR_bool profile__succeeded;
#line 775 "profile.m"
    MR_Integer profile__CSSI_7 = (MR_Integer) profile__CSSPtr_5;
#line 777 "profile.m"
    MR_Word profile__TypeCtorInfo_10_10;

#line 777 "profile.m"
    profile__succeeded = (profile__CSSI_7 > (MR_Integer) 0);
#line 777 "profile.m"
    if (profile__succeeded)
#line 777 "profile.m"
      {
#line 16845 "profile.c"
        profile__TypeCtorInfo_10_10 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 777 "profile.m"
        {
#line 777 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_10_10, (MR_ArrayPtr) profile__CSSOwns_4, profile__CSSI_7);
        }
#line 777 "profile.m"
      }
#line 779 "profile.m"
    if (profile__succeeded)
#line 778 "profile.m"
      {
#line 778 "profile.m"
        MR_Box profile__conv0_CSSOwn_6;

#line 778 "profile.m"
        {
#line 778 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__CSSOwns_4, profile__CSSI_7, &profile__conv0_CSSOwn_6);
        }
#line 778 "profile.m"
        *profile__CSSOwn_6 = ((MR_Word) profile__conv0_CSSOwn_6);
#line 778 "profile.m"
      }
#line 779 "profile.m"
    else
#line 780 "profile.m"
      {
#line 780 "profile.m"
        {
#line 780 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_css_own: bounds error");
#line 780 "profile.m"
          return;
        }
#line 780 "profile.m"
      }
#line 775 "profile.m"
  }
#line 379 "profile.m"
}

#line 377 "profile.m"
void MR_CALL 
profile__lookup_ps_desc_3_p_0(
#line 377 "profile.m"
  MR_ArrayPtr profile__PSDescs_4,
#line 377 "profile.m"
  MR_Word profile__PSPtr_5,
#line 377 "profile.m"
  MR_Word * profile__PSDesc_6)
#line 377 "profile.m"
{
#line 767 "profile.m"
  {
#line 767 "profile.m"
    MR_bool profile__succeeded;
#line 767 "profile.m"
    MR_Integer profile__PSI_7 = (MR_Integer) profile__PSPtr_5;
#line 769 "profile.m"
    MR_Word profile__TypeCtorInfo_10_10;

#line 769 "profile.m"
    profile__succeeded = (profile__PSI_7 > (MR_Integer) 0);
#line 769 "profile.m"
    if (profile__succeeded)
#line 769 "profile.m"
      {
#line 16914 "profile.c"
        profile__TypeCtorInfo_10_10 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 769 "profile.m"
        {
#line 769 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_10_10, (MR_ArrayPtr) profile__PSDescs_4, profile__PSI_7);
        }
#line 769 "profile.m"
      }
#line 771 "profile.m"
    if (profile__succeeded)
#line 770 "profile.m"
      {
#line 770 "profile.m"
        MR_Box profile__conv0_PSDesc_6;

#line 770 "profile.m"
        {
#line 770 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__PSDescs_4, profile__PSI_7, &profile__conv0_PSDesc_6);
        }
#line 770 "profile.m"
        *profile__PSDesc_6 = ((MR_Word) profile__conv0_PSDesc_6);
#line 770 "profile.m"
      }
#line 771 "profile.m"
    else
#line 772 "profile.m"
      {
#line 772 "profile.m"
        {
#line 772 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_ps_desc: bounds error");
#line 772 "profile.m"
          return;
        }
#line 772 "profile.m"
      }
#line 767 "profile.m"
  }
#line 377 "profile.m"
}

#line 375 "profile.m"
void MR_CALL 
profile__lookup_ps_own_3_p_0(
#line 375 "profile.m"
  MR_ArrayPtr profile__PSOwns_4,
#line 375 "profile.m"
  MR_Word profile__PSPtr_5,
#line 375 "profile.m"
  MR_Word * profile__PSOwn_6)
#line 375 "profile.m"
{
#line 759 "profile.m"
  {
#line 759 "profile.m"
    MR_bool profile__succeeded;
#line 759 "profile.m"
    MR_Integer profile__PSI_7 = (MR_Integer) profile__PSPtr_5;
#line 761 "profile.m"
    MR_Word profile__TypeCtorInfo_10_10;

#line 761 "profile.m"
    profile__succeeded = (profile__PSI_7 > (MR_Integer) 0);
#line 761 "profile.m"
    if (profile__succeeded)
#line 761 "profile.m"
      {
#line 16983 "profile.c"
        profile__TypeCtorInfo_10_10 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 761 "profile.m"
        {
#line 761 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_10_10, (MR_ArrayPtr) profile__PSOwns_4, profile__PSI_7);
        }
#line 761 "profile.m"
      }
#line 763 "profile.m"
    if (profile__succeeded)
#line 762 "profile.m"
      {
#line 762 "profile.m"
        MR_Box profile__conv0_PSOwn_6;

#line 762 "profile.m"
        {
#line 762 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__PSOwns_4, profile__PSI_7, &profile__conv0_PSOwn_6);
        }
#line 762 "profile.m"
        *profile__PSOwn_6 = ((MR_Word) profile__conv0_PSOwn_6);
#line 762 "profile.m"
      }
#line 763 "profile.m"
    else
#line 764 "profile.m"
      {
#line 764 "profile.m"
        {
#line 764 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_ps_own: bounds error");
#line 764 "profile.m"
          return;
        }
#line 764 "profile.m"
      }
#line 759 "profile.m"
  }
#line 375 "profile.m"
}

#line 373 "profile.m"
void MR_CALL 
profile__lookup_csd_desc_3_p_0(
#line 373 "profile.m"
  MR_ArrayPtr profile__CSDDescs_4,
#line 373 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 373 "profile.m"
  MR_Word * profile__CSDDesc_6)
#line 373 "profile.m"
{
#line 751 "profile.m"
  {
#line 751 "profile.m"
    MR_bool profile__succeeded;
#line 751 "profile.m"
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
#line 753 "profile.m"
    MR_Word profile__TypeCtorInfo_10_10;

#line 753 "profile.m"
    profile__succeeded = (profile__CSDI_7 > (MR_Integer) 0);
#line 753 "profile.m"
    if (profile__succeeded)
#line 753 "profile.m"
      {
#line 17052 "profile.c"
        profile__TypeCtorInfo_10_10 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 753 "profile.m"
        {
#line 753 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_10_10, (MR_ArrayPtr) profile__CSDDescs_4, profile__CSDI_7);
        }
#line 753 "profile.m"
      }
#line 755 "profile.m"
    if (profile__succeeded)
#line 754 "profile.m"
      {
#line 754 "profile.m"
        MR_Box profile__conv0_CSDDesc_6;

#line 754 "profile.m"
        {
#line 754 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__CSDDescs_4, profile__CSDI_7, &profile__conv0_CSDDesc_6);
        }
#line 754 "profile.m"
        *profile__CSDDesc_6 = ((MR_Word) profile__conv0_CSDDesc_6);
#line 754 "profile.m"
      }
#line 755 "profile.m"
    else
#line 756 "profile.m"
      {
#line 756 "profile.m"
        {
#line 756 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_csd_desc: bounds error");
#line 756 "profile.m"
          return;
        }
#line 756 "profile.m"
      }
#line 751 "profile.m"
  }
#line 373 "profile.m"
}

#line 371 "profile.m"
void MR_CALL 
profile__lookup_csd_own_3_p_0(
#line 371 "profile.m"
  MR_ArrayPtr profile__CSDOwns_4,
#line 371 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 371 "profile.m"
  MR_Word * profile__CSDOwn_6)
#line 371 "profile.m"
{
#line 743 "profile.m"
  {
#line 743 "profile.m"
    MR_bool profile__succeeded;
#line 743 "profile.m"
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
#line 745 "profile.m"
    MR_Word profile__TypeCtorInfo_10_10;

#line 745 "profile.m"
    profile__succeeded = (profile__CSDI_7 > (MR_Integer) 0);
#line 745 "profile.m"
    if (profile__succeeded)
#line 745 "profile.m"
      {
#line 17121 "profile.c"
        profile__TypeCtorInfo_10_10 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 745 "profile.m"
        {
#line 745 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_10_10, (MR_ArrayPtr) profile__CSDOwns_4, profile__CSDI_7);
        }
#line 745 "profile.m"
      }
#line 747 "profile.m"
    if (profile__succeeded)
#line 746 "profile.m"
      {
#line 746 "profile.m"
        MR_Box profile__conv0_CSDOwn_6;

#line 746 "profile.m"
        {
#line 746 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__CSDOwns_4, profile__CSDI_7, &profile__conv0_CSDOwn_6);
        }
#line 746 "profile.m"
        *profile__CSDOwn_6 = ((MR_Word) profile__conv0_CSDOwn_6);
#line 746 "profile.m"
      }
#line 747 "profile.m"
    else
#line 748 "profile.m"
      {
#line 748 "profile.m"
        {
#line 748 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_csd_own: bounds error");
#line 748 "profile.m"
          return;
        }
#line 748 "profile.m"
      }
#line 743 "profile.m"
  }
#line 371 "profile.m"
}

#line 369 "profile.m"
void MR_CALL 
profile__lookup_pd_desc_3_p_0(
#line 369 "profile.m"
  MR_ArrayPtr profile__PDDescs_4,
#line 369 "profile.m"
  MR_Word profile__PDPtr_5,
#line 369 "profile.m"
  MR_Word * profile__PDDesc_6)
#line 369 "profile.m"
{
#line 735 "profile.m"
  {
#line 735 "profile.m"
    MR_bool profile__succeeded;
#line 735 "profile.m"
    MR_Integer profile__PDI_7 = (MR_Integer) profile__PDPtr_5;
#line 737 "profile.m"
    MR_Word profile__TypeCtorInfo_10_10;

#line 737 "profile.m"
    profile__succeeded = (profile__PDI_7 > (MR_Integer) 0);
#line 737 "profile.m"
    if (profile__succeeded)
#line 737 "profile.m"
      {
#line 17190 "profile.c"
        profile__TypeCtorInfo_10_10 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 737 "profile.m"
        {
#line 737 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_10_10, (MR_ArrayPtr) profile__PDDescs_4, profile__PDI_7);
        }
#line 737 "profile.m"
      }
#line 739 "profile.m"
    if (profile__succeeded)
#line 738 "profile.m"
      {
#line 738 "profile.m"
        MR_Box profile__conv0_PDDesc_6;

#line 738 "profile.m"
        {
#line 738 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__PDDescs_4, profile__PDI_7, &profile__conv0_PDDesc_6);
        }
#line 738 "profile.m"
        *profile__PDDesc_6 = ((MR_Word) profile__conv0_PDDesc_6);
#line 738 "profile.m"
      }
#line 739 "profile.m"
    else
#line 740 "profile.m"
      {
#line 740 "profile.m"
        {
#line 740 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_pd_desc: bounds error");
#line 740 "profile.m"
          return;
        }
#line 740 "profile.m"
      }
#line 735 "profile.m"
  }
#line 369 "profile.m"
}

#line 367 "profile.m"
void MR_CALL 
profile__lookup_pd_own_3_p_0(
#line 367 "profile.m"
  MR_ArrayPtr profile__PDOwns_4,
#line 367 "profile.m"
  MR_Word profile__PDPtr_5,
#line 367 "profile.m"
  MR_Word * profile__PDOwn_6)
#line 367 "profile.m"
{
#line 727 "profile.m"
  {
#line 727 "profile.m"
    MR_bool profile__succeeded;
#line 727 "profile.m"
    MR_Integer profile__PDI_7 = (MR_Integer) profile__PDPtr_5;
#line 729 "profile.m"
    MR_Word profile__TypeCtorInfo_10_10;

#line 729 "profile.m"
    profile__succeeded = (profile__PDI_7 > (MR_Integer) 0);
#line 729 "profile.m"
    if (profile__succeeded)
#line 729 "profile.m"
      {
#line 17259 "profile.c"
        profile__TypeCtorInfo_10_10 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 729 "profile.m"
        {
#line 729 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_10_10, (MR_ArrayPtr) profile__PDOwns_4, profile__PDI_7);
        }
#line 729 "profile.m"
      }
#line 731 "profile.m"
    if (profile__succeeded)
#line 730 "profile.m"
      {
#line 730 "profile.m"
        MR_Box profile__conv0_PDOwn_6;

#line 730 "profile.m"
        {
#line 730 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__PDOwns_4, profile__PDI_7, &profile__conv0_PDOwn_6);
        }
#line 730 "profile.m"
        *profile__PDOwn_6 = ((MR_Word) profile__conv0_PDOwn_6);
#line 730 "profile.m"
      }
#line 731 "profile.m"
    else
#line 732 "profile.m"
      {
#line 732 "profile.m"
        {
#line 732 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_pd_own: bounds error");
#line 732 "profile.m"
          return;
        }
#line 732 "profile.m"
      }
#line 727 "profile.m"
  }
#line 367 "profile.m"
}

#line 364 "profile.m"
void MR_CALL 
profile__lookup_call_site_calls_3_p_0(
#line 364 "profile.m"
  MR_ArrayPtr profile__CallSiteCalls_4,
#line 364 "profile.m"
  MR_Word profile__CSSPtr_5,
#line 364 "profile.m"
  MR_Word * profile__Calls_6)
#line 364 "profile.m"
{
#line 719 "profile.m"
  {
#line 719 "profile.m"
    MR_bool profile__succeeded;
#line 719 "profile.m"
    MR_Integer profile__CSSI_7 = (MR_Integer) profile__CSSPtr_5;
#line 721 "profile.m"
    MR_Word profile__TypeInfo_10_10;

#line 721 "profile.m"
    profile__succeeded = (profile__CSSI_7 > (MR_Integer) 0);
#line 721 "profile.m"
    if (profile__succeeded)
#line 721 "profile.m"
      {
#line 17328 "profile.c"
        profile__TypeInfo_10_10 = (MR_Word) &profile_scalar_common_2[0];
#line 721 "profile.m"
        {
#line 721 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeInfo_10_10, (MR_ArrayPtr) profile__CallSiteCalls_4, profile__CSSI_7);
        }
#line 721 "profile.m"
      }
#line 723 "profile.m"
    if (profile__succeeded)
#line 722 "profile.m"
      {
#line 722 "profile.m"
        MR_Box profile__conv0_Calls_6;

#line 722 "profile.m"
        {
#line 722 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile_scalar_common_2[0], (MR_ArrayPtr) profile__CallSiteCalls_4, profile__CSSI_7, &profile__conv0_Calls_6);
        }
#line 722 "profile.m"
        *profile__Calls_6 = ((MR_Word) profile__conv0_Calls_6);
#line 722 "profile.m"
      }
#line 723 "profile.m"
    else
#line 724 "profile.m"
      {
#line 724 "profile.m"
        {
#line 724 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_call_site_static_map: bounds error");
#line 724 "profile.m"
          return;
        }
#line 724 "profile.m"
      }
#line 719 "profile.m"
  }
#line 364 "profile.m"
}

#line 362 "profile.m"
void MR_CALL 
profile__lookup_call_site_static_map_3_p_0(
#line 362 "profile.m"
  MR_ArrayPtr profile__CallSiteStaticMap_4,
#line 362 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 362 "profile.m"
  MR_Word * profile__CSSPtr_6)
#line 362 "profile.m"
{
#line 711 "profile.m"
  {
#line 711 "profile.m"
    MR_bool profile__succeeded;
#line 711 "profile.m"
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
#line 713 "profile.m"
    MR_Word profile__TypeCtorInfo_10_10;

#line 713 "profile.m"
    profile__succeeded = (profile__CSDI_7 > (MR_Integer) 0);
#line 713 "profile.m"
    if (profile__succeeded)
#line 713 "profile.m"
      {
#line 17397 "profile.c"
        profile__TypeCtorInfo_10_10 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
#line 713 "profile.m"
        {
#line 713 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_10_10, (MR_ArrayPtr) profile__CallSiteStaticMap_4, profile__CSDI_7);
        }
#line 713 "profile.m"
      }
#line 715 "profile.m"
    if (profile__succeeded)
#line 714 "profile.m"
      {
#line 714 "profile.m"
        MR_Box profile__conv0_CSSPtr_6;

#line 714 "profile.m"
        {
#line 714 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) profile__CallSiteStaticMap_4, profile__CSDI_7, &profile__conv0_CSSPtr_6);
        }
#line 714 "profile.m"
        *profile__CSSPtr_6 = ((MR_Word) profile__conv0_CSSPtr_6);
#line 714 "profile.m"
      }
#line 715 "profile.m"
    else
#line 716 "profile.m"
      {
#line 716 "profile.m"
        {
#line 716 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_call_site_static_map: bounds error");
#line 716 "profile.m"
          return;
        }
#line 716 "profile.m"
      }
#line 711 "profile.m"
  }
#line 362 "profile.m"
}

#line 360 "profile.m"
void MR_CALL 
profile__lookup_proc_callers_3_p_0(
#line 360 "profile.m"
  MR_ArrayPtr profile__ProcCallers_4,
#line 360 "profile.m"
  MR_Word profile__PSPtr_5,
#line 360 "profile.m"
  MR_Word * profile__Callers_6)
#line 360 "profile.m"
{
#line 703 "profile.m"
  {
#line 703 "profile.m"
    MR_bool profile__succeeded;
#line 703 "profile.m"
    MR_Integer profile__PSI_7 = (MR_Integer) profile__PSPtr_5;
#line 705 "profile.m"
    MR_Word profile__TypeInfo_10_10;

#line 705 "profile.m"
    profile__succeeded = (profile__PSI_7 > (MR_Integer) 0);
#line 705 "profile.m"
    if (profile__succeeded)
#line 705 "profile.m"
      {
#line 17466 "profile.c"
        profile__TypeInfo_10_10 = (MR_Word) &profile_scalar_common_1[2];
#line 705 "profile.m"
        {
#line 705 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeInfo_10_10, (MR_ArrayPtr) profile__ProcCallers_4, profile__PSI_7);
        }
#line 705 "profile.m"
      }
#line 707 "profile.m"
    if (profile__succeeded)
#line 706 "profile.m"
      {
#line 706 "profile.m"
        MR_Box profile__conv0_Callers_6;

#line 706 "profile.m"
        {
#line 706 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile_scalar_common_1[2], (MR_ArrayPtr) profile__ProcCallers_4, profile__PSI_7, &profile__conv0_Callers_6);
        }
#line 706 "profile.m"
        *profile__Callers_6 = ((MR_Word) profile__conv0_Callers_6);
#line 706 "profile.m"
      }
#line 707 "profile.m"
    else
#line 708 "profile.m"
      {
#line 708 "profile.m"
        {
#line 708 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_proc_callers: bounds error");
#line 708 "profile.m"
          return;
        }
#line 708 "profile.m"
      }
#line 703 "profile.m"
  }
#line 360 "profile.m"
}

#line 358 "profile.m"
void MR_CALL 
profile__lookup_clique_maybe_child_3_p_0(
#line 358 "profile.m"
  MR_ArrayPtr profile__CliqueMaybeChild_4,
#line 358 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 358 "profile.m"
  MR_Word * profile__MaybeCliquePtr_6)
#line 358 "profile.m"
{
#line 695 "profile.m"
  {
#line 695 "profile.m"
    MR_bool profile__succeeded;
#line 695 "profile.m"
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
#line 697 "profile.m"
    MR_Word profile__TypeInfo_10_10;

#line 697 "profile.m"
    profile__succeeded = (profile__CSDI_7 > (MR_Integer) 0);
#line 697 "profile.m"
    if (profile__succeeded)
#line 697 "profile.m"
      {
#line 17535 "profile.c"
        profile__TypeInfo_10_10 = (MR_Word) &profile_scalar_common_1[1];
#line 697 "profile.m"
        {
#line 697 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeInfo_10_10, (MR_ArrayPtr) profile__CliqueMaybeChild_4, profile__CSDI_7);
        }
#line 697 "profile.m"
      }
#line 699 "profile.m"
    if (profile__succeeded)
#line 698 "profile.m"
      {
#line 698 "profile.m"
        MR_Box profile__conv0_MaybeCliquePtr_6;

#line 698 "profile.m"
        {
#line 698 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile_scalar_common_1[1], (MR_ArrayPtr) profile__CliqueMaybeChild_4, profile__CSDI_7, &profile__conv0_MaybeCliquePtr_6);
        }
#line 698 "profile.m"
        *profile__MaybeCliquePtr_6 = ((MR_Word) profile__conv0_MaybeCliquePtr_6);
#line 698 "profile.m"
      }
#line 699 "profile.m"
    else
#line 700 "profile.m"
      {
#line 700 "profile.m"
        {
#line 700 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_clique_maybe_child: bounds error");
#line 700 "profile.m"
          return;
        }
#line 700 "profile.m"
      }
#line 695 "profile.m"
  }
#line 358 "profile.m"
}

#line 356 "profile.m"
void MR_CALL 
profile__lookup_clique_parents_3_p_0(
#line 356 "profile.m"
  MR_ArrayPtr profile__CliqueParents_4,
#line 356 "profile.m"
  MR_Word profile__CliquePtr_5,
#line 356 "profile.m"
  MR_Word * profile__CSDPtr_6)
#line 356 "profile.m"
{
#line 687 "profile.m"
  {
#line 687 "profile.m"
    MR_bool profile__succeeded;
#line 687 "profile.m"
    MR_Integer profile__CI_7 = (MR_Integer) profile__CliquePtr_5;

#line 689 "profile.m"
    {
#line 689 "profile.m"
      profile__succeeded = mercury__array__in_bounds_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) profile__CliqueParents_4, profile__CI_7);
    }
#line 691 "profile.m"
    if (profile__succeeded)
#line 690 "profile.m"
      {
#line 690 "profile.m"
        MR_Box profile__conv0_CSDPtr_6;

#line 690 "profile.m"
        {
#line 690 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) profile__CliqueParents_4, profile__CI_7, &profile__conv0_CSDPtr_6);
        }
#line 690 "profile.m"
        *profile__CSDPtr_6 = ((MR_Word) profile__conv0_CSDPtr_6);
#line 690 "profile.m"
      }
#line 691 "profile.m"
    else
#line 692 "profile.m"
      {
#line 692 "profile.m"
        {
#line 692 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_clique_parents: bounds error");
#line 692 "profile.m"
          return;
        }
#line 692 "profile.m"
      }
#line 687 "profile.m"
  }
#line 356 "profile.m"
}

#line 354 "profile.m"
void MR_CALL 
profile__lookup_clique_members_3_p_0(
#line 354 "profile.m"
  MR_ArrayPtr profile__CliqueMembers_4,
#line 354 "profile.m"
  MR_Word profile__CliquePtr_5,
#line 354 "profile.m"
  MR_Word * profile__PDPtrs_6)
#line 354 "profile.m"
{
#line 679 "profile.m"
  {
#line 679 "profile.m"
    MR_bool profile__succeeded;
#line 679 "profile.m"
    MR_Integer profile__CI_7 = (MR_Integer) profile__CliquePtr_5;

#line 681 "profile.m"
    {
#line 681 "profile.m"
      profile__succeeded = mercury__array__in_bounds_2_p_0((MR_Word) &profile_scalar_common_1[0], (MR_ArrayPtr) profile__CliqueMembers_4, profile__CI_7);
    }
#line 683 "profile.m"
    if (profile__succeeded)
#line 682 "profile.m"
      {
#line 682 "profile.m"
        MR_Box profile__conv0_PDPtrs_6;

#line 682 "profile.m"
        {
#line 682 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile_scalar_common_1[0], (MR_ArrayPtr) profile__CliqueMembers_4, profile__CI_7, &profile__conv0_PDPtrs_6);
        }
#line 682 "profile.m"
        *profile__PDPtrs_6 = ((MR_Word) profile__conv0_PDPtrs_6);
#line 682 "profile.m"
      }
#line 683 "profile.m"
    else
#line 684 "profile.m"
      {
#line 684 "profile.m"
        {
#line 684 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_clique_members: bounds error");
#line 684 "profile.m"
          return;
        }
#line 684 "profile.m"
      }
#line 679 "profile.m"
  }
#line 354 "profile.m"
}

#line 352 "profile.m"
void MR_CALL 
profile__lookup_clique_index_3_p_0(
#line 352 "profile.m"
  MR_ArrayPtr profile__CliqueIndex_4,
#line 352 "profile.m"
  MR_Word profile__PDPtr_5,
#line 352 "profile.m"
  MR_Word * profile__CliquePtr_6)
#line 352 "profile.m"
{
#line 671 "profile.m"
  {
#line 671 "profile.m"
    MR_bool profile__succeeded;
#line 671 "profile.m"
    MR_Integer profile__PDI_7 = (MR_Integer) profile__PDPtr_5;
#line 673 "profile.m"
    MR_Word profile__TypeCtorInfo_10_10;

#line 673 "profile.m"
    profile__succeeded = (profile__PDI_7 > (MR_Integer) 0);
#line 673 "profile.m"
    if (profile__succeeded)
#line 673 "profile.m"
      {
#line 17718 "profile.c"
        profile__TypeCtorInfo_10_10 = (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0;
#line 673 "profile.m"
        {
#line 673 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_10_10, (MR_ArrayPtr) profile__CliqueIndex_4, profile__PDI_7);
        }
#line 673 "profile.m"
      }
#line 675 "profile.m"
    if (profile__succeeded)
#line 674 "profile.m"
      {
#line 674 "profile.m"
        MR_Box profile__conv0_CliquePtr_6;

#line 674 "profile.m"
        {
#line 674 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, (MR_ArrayPtr) profile__CliqueIndex_4, profile__PDI_7, &profile__conv0_CliquePtr_6);
        }
#line 674 "profile.m"
        *profile__CliquePtr_6 = ((MR_Word) profile__conv0_CliquePtr_6);
#line 674 "profile.m"
      }
#line 675 "profile.m"
    else
#line 676 "profile.m"
      {
#line 676 "profile.m"
        {
#line 676 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_clique_index: bounds error");
#line 676 "profile.m"
          return;
        }
#line 676 "profile.m"
      }
#line 671 "profile.m"
  }
#line 352 "profile.m"
}

#line 350 "profile.m"
void MR_CALL 
profile__lookup_proc_statics_3_p_0(
#line 350 "profile.m"
  MR_ArrayPtr profile__ProcStatics_4,
#line 350 "profile.m"
  MR_Word profile__PSPtr_5,
#line 350 "profile.m"
  MR_Word * profile__PS_6)
#line 350 "profile.m"
{
#line 663 "profile.m"
  {
#line 663 "profile.m"
    MR_bool profile__succeeded;
#line 663 "profile.m"
    MR_Integer profile__PSI_7 = (MR_Integer) profile__PSPtr_5;
#line 665 "profile.m"
    MR_Word profile__TypeCtorInfo_10_10;

#line 665 "profile.m"
    profile__succeeded = (profile__PSI_7 > (MR_Integer) 0);
#line 665 "profile.m"
    if (profile__succeeded)
#line 665 "profile.m"
      {
#line 17787 "profile.c"
        profile__TypeCtorInfo_10_10 = (MR_Word) &profile__profile__type_ctor_info_proc_static_0;
#line 665 "profile.m"
        {
#line 665 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_10_10, (MR_ArrayPtr) profile__ProcStatics_4, profile__PSI_7);
        }
#line 665 "profile.m"
      }
#line 667 "profile.m"
    if (profile__succeeded)
#line 666 "profile.m"
      {
#line 666 "profile.m"
        MR_Box profile__conv0_PS_6;

#line 666 "profile.m"
        {
#line 666 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_ArrayPtr) profile__ProcStatics_4, profile__PSI_7, &profile__conv0_PS_6);
        }
#line 666 "profile.m"
        *profile__PS_6 = ((MR_Word) profile__conv0_PS_6);
#line 666 "profile.m"
      }
#line 667 "profile.m"
    else
#line 668 "profile.m"
      {
#line 668 "profile.m"
        {
#line 668 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_proc_statics: bounds error");
#line 668 "profile.m"
          return;
        }
#line 668 "profile.m"
      }
#line 663 "profile.m"
  }
#line 350 "profile.m"
}

#line 348 "profile.m"
void MR_CALL 
profile__lookup_proc_dynamics_3_p_0(
#line 348 "profile.m"
  MR_ArrayPtr profile__ProcDynamics_4,
#line 348 "profile.m"
  MR_Word profile__PDPtr_5,
#line 348 "profile.m"
  MR_Word * profile__PD_6)
#line 348 "profile.m"
{
#line 655 "profile.m"
  {
#line 655 "profile.m"
    MR_bool profile__succeeded;
#line 655 "profile.m"
    MR_Integer profile__PDI_7 = (MR_Integer) profile__PDPtr_5;
#line 657 "profile.m"
    MR_Word profile__TypeCtorInfo_10_10;

#line 657 "profile.m"
    profile__succeeded = (profile__PDI_7 > (MR_Integer) 0);
#line 657 "profile.m"
    if (profile__succeeded)
#line 657 "profile.m"
      {
#line 17856 "profile.c"
        profile__TypeCtorInfo_10_10 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
#line 657 "profile.m"
        {
#line 657 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_10_10, (MR_ArrayPtr) profile__ProcDynamics_4, profile__PDI_7);
        }
#line 657 "profile.m"
      }
#line 659 "profile.m"
    if (profile__succeeded)
#line 658 "profile.m"
      {
#line 658 "profile.m"
        MR_Box profile__conv0_PD_6;

#line 658 "profile.m"
        {
#line 658 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) profile__ProcDynamics_4, profile__PDI_7, &profile__conv0_PD_6);
        }
#line 658 "profile.m"
        *profile__PD_6 = ((MR_Word) profile__conv0_PD_6);
#line 658 "profile.m"
      }
#line 659 "profile.m"
    else
#line 660 "profile.m"
      {
#line 660 "profile.m"
        {
#line 660 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_proc_dynamics: bounds error");
#line 660 "profile.m"
          return;
        }
#line 660 "profile.m"
      }
#line 655 "profile.m"
  }
#line 348 "profile.m"
}

#line 346 "profile.m"
void MR_CALL 
profile__lookup_call_site_statics_3_p_0(
#line 346 "profile.m"
  MR_ArrayPtr profile__CallSiteStatics_4,
#line 346 "profile.m"
  MR_Word profile__CSSPtr_5,
#line 346 "profile.m"
  MR_Word * profile__CSS_6)
#line 346 "profile.m"
{
#line 647 "profile.m"
  {
#line 647 "profile.m"
    MR_bool profile__succeeded;
#line 647 "profile.m"
    MR_Integer profile__CSSI_7 = (MR_Integer) profile__CSSPtr_5;
#line 649 "profile.m"
    MR_Word profile__TypeCtorInfo_10_10;

#line 649 "profile.m"
    profile__succeeded = (profile__CSSI_7 > (MR_Integer) 0);
#line 649 "profile.m"
    if (profile__succeeded)
#line 649 "profile.m"
      {
#line 17925 "profile.c"
        profile__TypeCtorInfo_10_10 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_0;
#line 649 "profile.m"
        {
#line 649 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_10_10, (MR_ArrayPtr) profile__CallSiteStatics_4, profile__CSSI_7);
        }
#line 649 "profile.m"
      }
#line 651 "profile.m"
    if (profile__succeeded)
#line 650 "profile.m"
      {
#line 650 "profile.m"
        MR_Box profile__conv0_CSS_6;

#line 650 "profile.m"
        {
#line 650 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_ArrayPtr) profile__CallSiteStatics_4, profile__CSSI_7, &profile__conv0_CSS_6);
        }
#line 650 "profile.m"
        *profile__CSS_6 = ((MR_Word) profile__conv0_CSS_6);
#line 650 "profile.m"
      }
#line 651 "profile.m"
    else
#line 652 "profile.m"
      {
#line 652 "profile.m"
        {
#line 652 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_call_site_statics: bounds error");
#line 652 "profile.m"
          return;
        }
#line 652 "profile.m"
      }
#line 647 "profile.m"
  }
#line 346 "profile.m"
}

#line 344 "profile.m"
void MR_CALL 
profile__lookup_call_site_dynamics_3_p_0(
#line 344 "profile.m"
  MR_ArrayPtr profile__CallSiteDynamics_4,
#line 344 "profile.m"
  MR_Word profile__CSDPtr_5,
#line 344 "profile.m"
  MR_Word * profile__CSD_6)
#line 344 "profile.m"
{
#line 639 "profile.m"
  {
#line 639 "profile.m"
    MR_bool profile__succeeded;
#line 639 "profile.m"
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
#line 641 "profile.m"
    MR_Word profile__TypeCtorInfo_10_10;

#line 641 "profile.m"
    profile__succeeded = (profile__CSDI_7 > (MR_Integer) 0);
#line 641 "profile.m"
    if (profile__succeeded)
#line 641 "profile.m"
      {
#line 17994 "profile.c"
        profile__TypeCtorInfo_10_10 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
#line 641 "profile.m"
        {
#line 641 "profile.m"
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_10_10, (MR_ArrayPtr) profile__CallSiteDynamics_4, profile__CSDI_7);
        }
#line 641 "profile.m"
      }
#line 643 "profile.m"
    if (profile__succeeded)
#line 642 "profile.m"
      {
#line 642 "profile.m"
        MR_Box profile__conv0_CSD_6;

#line 642 "profile.m"
        {
#line 642 "profile.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) profile__CallSiteDynamics_4, profile__CSDI_7, &profile__conv0_CSD_6);
        }
#line 642 "profile.m"
        *profile__CSD_6 = ((MR_Word) profile__conv0_CSD_6);
#line 642 "profile.m"
      }
#line 643 "profile.m"
    else
#line 644 "profile.m"
      {
#line 644 "profile.m"
        {
#line 644 "profile.m"
          mercury__require__error_1_p_0((MR_String) "lookup_call_site_dynamics: bounds error");
#line 644 "profile.m"
          return;
        }
#line 644 "profile.m"
      }
#line 639 "profile.m"
  }
#line 344 "profile.m"
}

#line 341 "profile.m"
MR_bool MR_CALL 
profile__valid_call_site_static_ptr_raw_2_p_0(
#line 341 "profile.m"
  MR_ArrayPtr profile__CallSiteStatics_3,
#line 341 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 341 "profile.m"
{
#line 633 "profile.m"
  {
#line 633 "profile.m"
    MR_bool profile__succeeded;
#line 633 "profile.m"
    MR_Word profile__TypeCtorInfo_6_6;
#line 633 "profile.m"
    MR_Integer profile__CSSI_4 = (MR_Integer) profile__HeadVar__2_2;

#line 634 "profile.m"
    profile__succeeded = (profile__CSSI_4 > (MR_Integer) 0);
#line 633 "profile.m"
    if (profile__succeeded)
#line 633 "profile.m"
      {
#line 18061 "profile.c"
        profile__TypeCtorInfo_6_6 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_0;
#line 635 "profile.m"
        {
#line 635 "profile.m"
          return profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_6_6, (MR_ArrayPtr) profile__CallSiteStatics_3, profile__CSSI_4);
        }
#line 633 "profile.m"
      }
#line 633 "profile.m"
    return profile__succeeded;
#line 633 "profile.m"
  }
#line 341 "profile.m"
}

#line 339 "profile.m"
MR_bool MR_CALL 
profile__valid_call_site_dynamic_ptr_raw_2_p_0(
#line 339 "profile.m"
  MR_ArrayPtr profile__CallSiteDynamics_3,
#line 339 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 339 "profile.m"
{
#line 629 "profile.m"
  {
#line 629 "profile.m"
    MR_bool profile__succeeded;
#line 629 "profile.m"
    MR_Word profile__TypeCtorInfo_6_6;
#line 629 "profile.m"
    MR_Integer profile__CSDI_4 = (MR_Integer) profile__HeadVar__2_2;

#line 630 "profile.m"
    profile__succeeded = (profile__CSDI_4 > (MR_Integer) 0);
#line 629 "profile.m"
    if (profile__succeeded)
#line 629 "profile.m"
      {
#line 18101 "profile.c"
        profile__TypeCtorInfo_6_6 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
#line 631 "profile.m"
        {
#line 631 "profile.m"
          return profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_6_6, (MR_ArrayPtr) profile__CallSiteDynamics_3, profile__CSDI_4);
        }
#line 629 "profile.m"
      }
#line 629 "profile.m"
    return profile__succeeded;
#line 629 "profile.m"
  }
#line 339 "profile.m"
}

#line 337 "profile.m"
MR_bool MR_CALL 
profile__valid_proc_static_ptr_raw_2_p_0(
#line 337 "profile.m"
  MR_ArrayPtr profile__ProcStatics_3,
#line 337 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 337 "profile.m"
{
#line 624 "profile.m"
  {
#line 624 "profile.m"
    MR_bool profile__succeeded;
#line 624 "profile.m"
    MR_Word profile__TypeCtorInfo_6_6;
#line 624 "profile.m"
    MR_Integer profile__PSI_4 = (MR_Integer) profile__HeadVar__2_2;

#line 625 "profile.m"
    profile__succeeded = (profile__PSI_4 > (MR_Integer) 0);
#line 624 "profile.m"
    if (profile__succeeded)
#line 624 "profile.m"
      {
#line 18141 "profile.c"
        profile__TypeCtorInfo_6_6 = (MR_Word) &profile__profile__type_ctor_info_proc_static_0;
#line 626 "profile.m"
        {
#line 626 "profile.m"
          return profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_6_6, (MR_ArrayPtr) profile__ProcStatics_3, profile__PSI_4);
        }
#line 624 "profile.m"
      }
#line 624 "profile.m"
    return profile__succeeded;
#line 624 "profile.m"
  }
#line 337 "profile.m"
}

#line 335 "profile.m"
MR_bool MR_CALL 
profile__valid_proc_dynamic_ptr_raw_2_p_0(
#line 335 "profile.m"
  MR_ArrayPtr profile__ProcDynamics_3,
#line 335 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 335 "profile.m"
{
#line 620 "profile.m"
  {
#line 620 "profile.m"
    MR_bool profile__succeeded;
#line 620 "profile.m"
    MR_Word profile__TypeCtorInfo_6_6;
#line 620 "profile.m"
    MR_Integer profile__PDI_4 = (MR_Integer) profile__HeadVar__2_2;

#line 621 "profile.m"
    profile__succeeded = (profile__PDI_4 > (MR_Integer) 0);
#line 620 "profile.m"
    if (profile__succeeded)
#line 620 "profile.m"
      {
#line 18181 "profile.c"
        profile__TypeCtorInfo_6_6 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
#line 622 "profile.m"
        {
#line 622 "profile.m"
          return profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_6_6, (MR_ArrayPtr) profile__ProcDynamics_3, profile__PDI_4);
        }
#line 620 "profile.m"
      }
#line 620 "profile.m"
    return profile__succeeded;
#line 620 "profile.m"
  }
#line 335 "profile.m"
}

#line 332 "profile.m"
MR_bool MR_CALL 
profile__valid_call_site_static_ptr_2_p_0(
#line 332 "profile.m"
  MR_Word profile__Deep_3,
#line 332 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 332 "profile.m"
{
#line 614 "profile.m"
  {
#line 614 "profile.m"
    MR_bool profile__succeeded;
#line 614 "profile.m"
    MR_Word profile__TypeCtorInfo_35_35;
#line 614 "profile.m"
    MR_Integer profile__CSSI_4 = (MR_Integer) profile__HeadVar__2_2;
#line 614 "profile.m"
    MR_ArrayPtr profile__V_6_6;
#line 616 "profile.m"
    MR_Word profile__V_7_7;
#line 616 "profile.m"
    MR_String profile__V_8_8;
#line 616 "profile.m"
    MR_String profile__V_9_9;
#line 616 "profile.m"
    MR_String profile__V_10_10;
#line 616 "profile.m"
    MR_Word profile__V_11_11;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_12_12;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_13_13;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_14_14;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_15_15;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_16_16;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_17_17;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_18_18;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_19_19;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_20_20;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_21_21;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_22_22;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_23_23;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_24_24;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_25_25;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_26_26;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_27_27;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_28_28;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_29_29;
#line 616 "profile.m"
    MR_ArrayPtr profile__V_30_30;
#line 616 "profile.m"
    MR_Word profile__V_31_31;
#line 616 "profile.m"
    MR_Word profile__V_32_32;
#line 616 "profile.m"
    MR_Word profile__V_33_33;
#line 616 "profile.m"
    MR_Word profile__V_34_34;

#line 615 "profile.m"
    profile__succeeded = (profile__CSSI_4 > (MR_Integer) 0);
#line 614 "profile.m"
    if (profile__succeeded)
#line 614 "profile.m"
      {
#line 616 "profile.m"
        profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
#line 616 "profile.m"
        profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
#line 616 "profile.m"
        profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
#line 616 "profile.m"
        profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
#line 616 "profile.m"
        profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
#line 616 "profile.m"
        profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
#line 616 "profile.m"
        profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
#line 616 "profile.m"
        profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
#line 616 "profile.m"
        profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
#line 616 "profile.m"
        profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
#line 616 "profile.m"
        profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
#line 616 "profile.m"
        profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
#line 616 "profile.m"
        profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
#line 616 "profile.m"
        profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
#line 616 "profile.m"
        profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
#line 616 "profile.m"
        profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
#line 616 "profile.m"
        profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
#line 616 "profile.m"
        profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
#line 616 "profile.m"
        profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
#line 616 "profile.m"
        profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
#line 616 "profile.m"
        profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
#line 616 "profile.m"
        profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
#line 616 "profile.m"
        profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
#line 616 "profile.m"
        profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
#line 616 "profile.m"
        profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
#line 616 "profile.m"
        profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
#line 616 "profile.m"
        profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
#line 616 "profile.m"
        profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
#line 616 "profile.m"
        profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
#line 18337 "profile.c"
        profile__TypeCtorInfo_35_35 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_0;
#line 616 "profile.m"
        {
#line 616 "profile.m"
          return profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_35_35, (MR_ArrayPtr) profile__V_6_6, profile__CSSI_4);
        }
#line 614 "profile.m"
      }
#line 614 "profile.m"
    return profile__succeeded;
#line 614 "profile.m"
  }
#line 332 "profile.m"
}

#line 330 "profile.m"
MR_bool MR_CALL 
profile__valid_call_site_dynamic_ptr_2_p_0(
#line 330 "profile.m"
  MR_Word profile__Deep_3,
#line 330 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 330 "profile.m"
{
#line 610 "profile.m"
  {
#line 610 "profile.m"
    MR_bool profile__succeeded;
#line 610 "profile.m"
    MR_Word profile__TypeCtorInfo_35_35;
#line 610 "profile.m"
    MR_Integer profile__CSDI_4 = (MR_Integer) profile__HeadVar__2_2;
#line 610 "profile.m"
    MR_ArrayPtr profile__V_6_6;
#line 612 "profile.m"
    MR_Word profile__V_7_7;
#line 612 "profile.m"
    MR_String profile__V_8_8;
#line 612 "profile.m"
    MR_String profile__V_9_9;
#line 612 "profile.m"
    MR_String profile__V_10_10;
#line 612 "profile.m"
    MR_Word profile__V_11_11;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_12_12;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_13_13;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_14_14;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_15_15;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_16_16;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_17_17;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_18_18;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_19_19;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_20_20;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_21_21;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_22_22;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_23_23;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_24_24;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_25_25;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_26_26;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_27_27;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_28_28;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_29_29;
#line 612 "profile.m"
    MR_ArrayPtr profile__V_30_30;
#line 612 "profile.m"
    MR_Word profile__V_31_31;
#line 612 "profile.m"
    MR_Word profile__V_32_32;
#line 612 "profile.m"
    MR_Word profile__V_33_33;
#line 612 "profile.m"
    MR_Word profile__V_34_34;

#line 611 "profile.m"
    profile__succeeded = (profile__CSDI_4 > (MR_Integer) 0);
#line 610 "profile.m"
    if (profile__succeeded)
#line 610 "profile.m"
      {
#line 612 "profile.m"
        profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
#line 612 "profile.m"
        profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
#line 612 "profile.m"
        profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
#line 612 "profile.m"
        profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
#line 612 "profile.m"
        profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
#line 612 "profile.m"
        profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
#line 612 "profile.m"
        profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
#line 612 "profile.m"
        profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
#line 612 "profile.m"
        profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
#line 612 "profile.m"
        profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
#line 612 "profile.m"
        profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
#line 612 "profile.m"
        profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
#line 612 "profile.m"
        profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
#line 612 "profile.m"
        profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
#line 612 "profile.m"
        profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
#line 612 "profile.m"
        profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
#line 612 "profile.m"
        profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
#line 612 "profile.m"
        profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
#line 612 "profile.m"
        profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
#line 612 "profile.m"
        profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
#line 612 "profile.m"
        profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
#line 612 "profile.m"
        profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
#line 612 "profile.m"
        profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
#line 612 "profile.m"
        profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
#line 612 "profile.m"
        profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
#line 612 "profile.m"
        profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
#line 612 "profile.m"
        profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
#line 612 "profile.m"
        profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
#line 612 "profile.m"
        profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
#line 18493 "profile.c"
        profile__TypeCtorInfo_35_35 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
#line 612 "profile.m"
        {
#line 612 "profile.m"
          return profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_35_35, (MR_ArrayPtr) profile__V_6_6, profile__CSDI_4);
        }
#line 610 "profile.m"
      }
#line 610 "profile.m"
    return profile__succeeded;
#line 610 "profile.m"
  }
#line 330 "profile.m"
}

#line 329 "profile.m"
MR_bool MR_CALL 
profile__valid_proc_static_ptr_2_p_0(
#line 329 "profile.m"
  MR_Word profile__Deep_3,
#line 329 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 329 "profile.m"
{
#line 606 "profile.m"
  {
#line 606 "profile.m"
    MR_bool profile__succeeded;
#line 606 "profile.m"
    MR_Word profile__TypeCtorInfo_35_35;
#line 606 "profile.m"
    MR_Integer profile__PSI_4 = (MR_Integer) profile__HeadVar__2_2;
#line 606 "profile.m"
    MR_ArrayPtr profile__V_6_6;
#line 608 "profile.m"
    MR_Word profile__V_7_7;
#line 608 "profile.m"
    MR_String profile__V_8_8;
#line 608 "profile.m"
    MR_String profile__V_9_9;
#line 608 "profile.m"
    MR_String profile__V_10_10;
#line 608 "profile.m"
    MR_Word profile__V_11_11;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_12_12;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_13_13;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_14_14;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_15_15;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_16_16;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_17_17;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_18_18;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_19_19;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_20_20;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_21_21;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_22_22;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_23_23;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_24_24;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_25_25;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_26_26;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_27_27;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_28_28;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_29_29;
#line 608 "profile.m"
    MR_ArrayPtr profile__V_30_30;
#line 608 "profile.m"
    MR_Word profile__V_31_31;
#line 608 "profile.m"
    MR_Word profile__V_32_32;
#line 608 "profile.m"
    MR_Word profile__V_33_33;
#line 608 "profile.m"
    MR_Word profile__V_34_34;

#line 607 "profile.m"
    profile__succeeded = (profile__PSI_4 > (MR_Integer) 0);
#line 606 "profile.m"
    if (profile__succeeded)
#line 606 "profile.m"
      {
#line 608 "profile.m"
        profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
#line 608 "profile.m"
        profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
#line 608 "profile.m"
        profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
#line 608 "profile.m"
        profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
#line 608 "profile.m"
        profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
#line 608 "profile.m"
        profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
#line 608 "profile.m"
        profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
#line 608 "profile.m"
        profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
#line 608 "profile.m"
        profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
#line 608 "profile.m"
        profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
#line 608 "profile.m"
        profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
#line 608 "profile.m"
        profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
#line 608 "profile.m"
        profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
#line 608 "profile.m"
        profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
#line 608 "profile.m"
        profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
#line 608 "profile.m"
        profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
#line 608 "profile.m"
        profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
#line 608 "profile.m"
        profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
#line 608 "profile.m"
        profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
#line 608 "profile.m"
        profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
#line 608 "profile.m"
        profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
#line 608 "profile.m"
        profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
#line 608 "profile.m"
        profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
#line 608 "profile.m"
        profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
#line 608 "profile.m"
        profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
#line 608 "profile.m"
        profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
#line 608 "profile.m"
        profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
#line 608 "profile.m"
        profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
#line 608 "profile.m"
        profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
#line 18649 "profile.c"
        profile__TypeCtorInfo_35_35 = (MR_Word) &profile__profile__type_ctor_info_proc_static_0;
#line 608 "profile.m"
        {
#line 608 "profile.m"
          return profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_35_35, (MR_ArrayPtr) profile__V_6_6, profile__PSI_4);
        }
#line 606 "profile.m"
      }
#line 606 "profile.m"
    return profile__succeeded;
#line 606 "profile.m"
  }
#line 329 "profile.m"
}

#line 328 "profile.m"
MR_bool MR_CALL 
profile__valid_proc_dynamic_ptr_2_p_0(
#line 328 "profile.m"
  MR_Word profile__Deep_3,
#line 328 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 328 "profile.m"
{
#line 602 "profile.m"
  {
#line 602 "profile.m"
    MR_bool profile__succeeded;
#line 602 "profile.m"
    MR_Word profile__TypeCtorInfo_35_35;
#line 602 "profile.m"
    MR_Integer profile__PDI_4 = (MR_Integer) profile__HeadVar__2_2;
#line 602 "profile.m"
    MR_ArrayPtr profile__V_6_6;
#line 604 "profile.m"
    MR_Word profile__V_7_7;
#line 604 "profile.m"
    MR_String profile__V_8_8;
#line 604 "profile.m"
    MR_String profile__V_9_9;
#line 604 "profile.m"
    MR_String profile__V_10_10;
#line 604 "profile.m"
    MR_Word profile__V_11_11;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_12_12;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_13_13;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_14_14;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_15_15;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_16_16;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_17_17;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_18_18;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_19_19;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_20_20;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_21_21;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_22_22;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_23_23;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_24_24;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_25_25;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_26_26;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_27_27;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_28_28;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_29_29;
#line 604 "profile.m"
    MR_ArrayPtr profile__V_30_30;
#line 604 "profile.m"
    MR_Word profile__V_31_31;
#line 604 "profile.m"
    MR_Word profile__V_32_32;
#line 604 "profile.m"
    MR_Word profile__V_33_33;
#line 604 "profile.m"
    MR_Word profile__V_34_34;

#line 603 "profile.m"
    profile__succeeded = (profile__PDI_4 > (MR_Integer) 0);
#line 602 "profile.m"
    if (profile__succeeded)
#line 602 "profile.m"
      {
#line 604 "profile.m"
        profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
#line 604 "profile.m"
        profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
#line 604 "profile.m"
        profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
#line 604 "profile.m"
        profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
#line 604 "profile.m"
        profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
#line 604 "profile.m"
        profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
#line 604 "profile.m"
        profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
#line 604 "profile.m"
        profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
#line 604 "profile.m"
        profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
#line 604 "profile.m"
        profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
#line 604 "profile.m"
        profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
#line 604 "profile.m"
        profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
#line 604 "profile.m"
        profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
#line 604 "profile.m"
        profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
#line 604 "profile.m"
        profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
#line 604 "profile.m"
        profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
#line 604 "profile.m"
        profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
#line 604 "profile.m"
        profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
#line 604 "profile.m"
        profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
#line 604 "profile.m"
        profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
#line 604 "profile.m"
        profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
#line 604 "profile.m"
        profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
#line 604 "profile.m"
        profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
#line 604 "profile.m"
        profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
#line 604 "profile.m"
        profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
#line 604 "profile.m"
        profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
#line 604 "profile.m"
        profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
#line 604 "profile.m"
        profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
#line 604 "profile.m"
        profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
#line 18805 "profile.c"
        profile__TypeCtorInfo_35_35 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
#line 604 "profile.m"
        {
#line 604 "profile.m"
          return profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_35_35, (MR_ArrayPtr) profile__V_6_6, profile__PDI_4);
        }
#line 602 "profile.m"
      }
#line 602 "profile.m"
    return profile__succeeded;
#line 602 "profile.m"
  }
#line 328 "profile.m"
}

#line 327 "profile.m"
MR_bool MR_CALL 
profile__valid_clique_ptr_2_p_0(
#line 327 "profile.m"
  MR_Word profile__Deep_3,
#line 327 "profile.m"
  MR_Word profile__HeadVar__2_2)
#line 327 "profile.m"
{
#line 598 "profile.m"
  {
#line 598 "profile.m"
    MR_bool profile__succeeded;
#line 598 "profile.m"
    MR_Word profile__TypeInfo_35_35;
#line 598 "profile.m"
    MR_Integer profile__CliqueNum_4 = (MR_Integer) profile__HeadVar__2_2;
#line 598 "profile.m"
    MR_ArrayPtr profile__V_6_6;
#line 600 "profile.m"
    MR_Word profile__V_7_7;
#line 600 "profile.m"
    MR_String profile__V_8_8;
#line 600 "profile.m"
    MR_String profile__V_9_9;
#line 600 "profile.m"
    MR_String profile__V_10_10;
#line 600 "profile.m"
    MR_Word profile__V_11_11;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_12_12;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_13_13;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_14_14;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_15_15;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_16_16;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_17_17;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_18_18;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_19_19;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_20_20;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_21_21;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_22_22;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_23_23;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_24_24;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_25_25;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_26_26;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_27_27;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_28_28;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_29_29;
#line 600 "profile.m"
    MR_ArrayPtr profile__V_30_30;
#line 600 "profile.m"
    MR_Word profile__V_31_31;
#line 600 "profile.m"
    MR_Word profile__V_32_32;
#line 600 "profile.m"
    MR_Word profile__V_33_33;
#line 600 "profile.m"
    MR_Word profile__V_34_34;

#line 599 "profile.m"
    profile__succeeded = (profile__CliqueNum_4 > (MR_Integer) 0);
#line 598 "profile.m"
    if (profile__succeeded)
#line 598 "profile.m"
      {
#line 600 "profile.m"
        profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
#line 600 "profile.m"
        profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
#line 600 "profile.m"
        profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
#line 600 "profile.m"
        profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
#line 600 "profile.m"
        profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
#line 600 "profile.m"
        profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
#line 600 "profile.m"
        profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
#line 600 "profile.m"
        profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
#line 600 "profile.m"
        profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
#line 600 "profile.m"
        profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
#line 600 "profile.m"
        profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
#line 600 "profile.m"
        profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
#line 600 "profile.m"
        profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
#line 600 "profile.m"
        profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
#line 600 "profile.m"
        profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
#line 600 "profile.m"
        profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
#line 600 "profile.m"
        profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
#line 600 "profile.m"
        profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
#line 600 "profile.m"
        profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
#line 600 "profile.m"
        profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
#line 600 "profile.m"
        profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
#line 600 "profile.m"
        profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
#line 600 "profile.m"
        profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
#line 600 "profile.m"
        profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
#line 600 "profile.m"
        profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
#line 600 "profile.m"
        profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
#line 600 "profile.m"
        profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
#line 600 "profile.m"
        profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
#line 600 "profile.m"
        profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
#line 18961 "profile.c"
        profile__TypeInfo_35_35 = (MR_Word) &profile_scalar_common_1[0];
#line 600 "profile.m"
        {
#line 600 "profile.m"
          return profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeInfo_35_35, (MR_ArrayPtr) profile__V_6_6, profile__CliqueNum_4);
        }
#line 598 "profile.m"
      }
#line 598 "profile.m"
    return profile__succeeded;
#line 598 "profile.m"
  }
#line 327 "profile.m"
}

#line 325 "profile.m"
MR_Word MR_CALL 
profile__dummy_clique_ptr_0_f_0(void)
#line 325 "profile.m"
{
#line 594 "profile.m"
  {
#line 594 "profile.m"
    MR_bool profile__succeeded;

#line 594 "profile.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) -1));
#line 594 "profile.m"
  }
#line 325 "profile.m"
}

#line 324 "profile.m"
MR_Word MR_CALL 
profile__dummy_call_site_static_ptr_0_f_0(void)
#line 324 "profile.m"
{
#line 592 "profile.m"
  {
#line 592 "profile.m"
    MR_bool profile__succeeded;

#line 592 "profile.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) -1));
#line 592 "profile.m"
  }
#line 324 "profile.m"
}

#line 323 "profile.m"
MR_Word MR_CALL 
profile__dummy_call_site_dynamic_ptr_0_f_0(void)
#line 323 "profile.m"
{
#line 593 "profile.m"
  {
#line 593 "profile.m"
    MR_bool profile__succeeded;

#line 593 "profile.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) -1));
#line 593 "profile.m"
  }
#line 323 "profile.m"
}

#line 322 "profile.m"
MR_Word MR_CALL 
profile__dummy_proc_static_ptr_0_f_0(void)
#line 322 "profile.m"
{
#line 590 "profile.m"
  {
#line 590 "profile.m"
    MR_bool profile__succeeded;

#line 590 "profile.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) -1));
#line 590 "profile.m"
  }
#line 322 "profile.m"
}

#line 321 "profile.m"
MR_Word MR_CALL 
profile__dummy_proc_dynamic_ptr_0_f_0(void)
#line 321 "profile.m"
{
#line 591 "profile.m"
  {
#line 591 "profile.m"
    MR_bool profile__succeeded;

#line 591 "profile.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) -1));
#line 591 "profile.m"
  }
#line 321 "profile.m"
}

#line 319 "profile.m"
MR_Word MR_CALL 
profile__main_parent_proc_id_0_f_0(void)
#line 319 "profile.m"
{
#line 585 "profile.m"
  {
#line 585 "profile.m"
    MR_bool profile__succeeded;

#line 585 "profile.m"
    return (MR_Word) &profile_scalar_common_3[1];
#line 585 "profile.m"
  }
#line 319 "profile.m"
}

#line 318 "profile.m"
MR_Word MR_CALL 
profile__dummy_proc_id_0_f_0(void)
#line 318 "profile.m"
{
#line 582 "profile.m"
  {
#line 582 "profile.m"
    MR_bool profile__succeeded;

#line 582 "profile.m"
    return (MR_Word) &profile_scalar_common_3[0];
#line 582 "profile.m"
  }
#line 318 "profile.m"
}

#line 316 "profile.m"
MR_String MR_CALL 
profile__decl_module_1_f_0(
#line 316 "profile.m"
  MR_Word profile__ProcId_3)
#line 316 "profile.m"
{
#line 577 "profile.m"
  {
#line 577 "profile.m"
    MR_bool profile__succeeded;
#line 577 "profile.m"
    MR_String profile__DeclModule_4;

#line 577 "profile.m"
    if (((MR_tag((MR_Word) profile__ProcId_3)) == (MR_mktag((MR_Integer) 0))))
#line 577 "profile.m"
      {
#line 577 "profile.m"
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__ProcId_3, (MR_Integer) 0)));
#line 577 "profile.m"
        MR_String profile__V_6_6;
#line 577 "profile.m"
        MR_String profile__V_7_7;
#line 577 "profile.m"
        MR_Integer profile__V_8_8;
#line 577 "profile.m"
        MR_Integer profile__V_9_9;

#line 577 "profile.m"
        profile__DeclModule_4 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__ProcId_3, (MR_Integer) 1)));
#line 577 "profile.m"
        profile__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__ProcId_3, (MR_Integer) 2)));
#line 577 "profile.m"
        profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__ProcId_3, (MR_Integer) 3)));
#line 577 "profile.m"
        profile__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__ProcId_3, (MR_Integer) 4)));
#line 577 "profile.m"
        profile__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__ProcId_3, (MR_Integer) 5)));
#line 577 "profile.m"
      }
#line 577 "profile.m"
    else
#line 579 "profile.m"
      {
#line 579 "profile.m"
        MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__ProcId_3, (MR_Integer) 0)));
#line 579 "profile.m"
        MR_String profile__V_11_11;
#line 579 "profile.m"
        MR_String profile__V_12_12;
#line 579 "profile.m"
        MR_Integer profile__V_13_13;
#line 579 "profile.m"
        MR_Integer profile__V_14_14;

#line 579 "profile.m"
        profile__DeclModule_4 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__ProcId_3, (MR_Integer) 1)));
#line 579 "profile.m"
        profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__ProcId_3, (MR_Integer) 2)));
#line 579 "profile.m"
        profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__ProcId_3, (MR_Integer) 3)));
#line 579 "profile.m"
        profile__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), profile__ProcId_3, (MR_Integer) 4)));
#line 579 "profile.m"
        profile__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), profile__ProcId_3, (MR_Integer) 5)));
#line 579 "profile.m"
      }
#line 577 "profile.m"
    return profile__DeclModule_4;
#line 577 "profile.m"
  }
#line 316 "profile.m"
}

#line 312 "profile.m"
MR_bool MR_CALL 
profile__is_call_site_kind_2_p_0(
#line 312 "profile.m"
  MR_Integer profile__Int_1,
#line 312 "profile.m"
  MR_Word * profile__CallSite_2)
#line 312 "profile.m"
{
#line 552 "profile.m"
  {
#line 552 "profile.m"
    MR_bool profile__succeeded;

#line 555 "profile.m"
{
#define MR_PROC_LABEL profile__is_call_site_kind_2_p_0

	MR_Integer Int;
	MR_Word CallSite;
	MR_bool SUCCESS_INDICATOR;

	Int =  profile__Int_1 ;
		{
#line 555 "profile.m"

    CallSite = (MR_CallSiteKind) Int;

    switch (CallSite) {
        case MR_callsite_normal_call:
        case MR_callsite_special_call:
        case MR_callsite_higher_order_call:
        case MR_callsite_method_call:
        case MR_callsite_callback:
            SUCCESS_INDICATOR = MR_TRUE;
            break;

        default:
            SUCCESS_INDICATOR = MR_FALSE;
            break;
    }

#line 19213 "profile.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *profile__CallSite_2  = CallSite;
#line 555 "profile.m"
	}
profile__succeeded  = SUCCESS_INDICATOR;
}
#line 552 "profile.m"
    return profile__succeeded;
#line 552 "profile.m"
  }
#line 312 "profile.m"
}

void mercury__profile__init(void)
{
}

void mercury__profile__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&profile__profile__type_ctor_info_call_site_array_slot_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_call_site_callees_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_call_site_caller_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_call_site_dynamic_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_call_site_dynamic_ptr_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_call_site_dynamics_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_call_site_kind_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_call_site_kind_and_callee_1);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_call_site_kind_and_callee_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_call_site_kind_and_info_1);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_call_site_static_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_call_site_static_map_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_call_site_static_ptr_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_call_site_statics_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_canonical_flag_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_clique_ptr_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_compensation_table_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_coverage_data_type_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_deep_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_deep_compression_flag_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_deep_flags_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_initial_deep_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_is_zeroed_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_module_data_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_proc_dynamic_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_proc_dynamic_ptr_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_proc_dynamics_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_proc_static_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_proc_static_ptr_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_proc_statics_0);
	MR_register_type_ctor_info(&profile__profile__type_ctor_info_profile_stats_0);
}

void mercury__profile__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module profile. */
