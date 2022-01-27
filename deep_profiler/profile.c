/*
** Automatically generated from `profile.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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
#include "integer.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 82 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_0[1];

#line 85 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_array_slot_0_0;

#line 88 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 91 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_1[2];

#line 94 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_array_slot_0_1;

#line 97 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_array_slot_0_0[1];

#line 100 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_array_slot_0_1[1];

#line 103 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_array_slot_0[2];

#line 106 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_array_slot_0[2];

#line 109 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_array_slot_0[2];

#line 112 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_callees_0[1];

#line 115 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 118 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_callees_0;

#line 121 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_caller_0[1];

#line 124 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_caller_0;

#line 127 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_dynamic_0_0[3];

#line 130 "profile.c"
static const MR_ConstString profile__profile__field_names_call_site_dynamic_0_0[3];

#line 133 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_dynamic_0_0;

#line 136 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_dynamic_0_0[1];

#line 139 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_dynamic_0[1];

#line 142 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_dynamic_0[1];

#line 145 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_dynamic_0[1];

#line 148 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_dynamic_ptr_0[1];

#line 151 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_dynamic_ptr_0;

#line 154 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0;

#line 157 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_0;

#line 160 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_1;

#line 163 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_2;

#line 166 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_3;

#line 169 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_4;

#line 172 "profile.c"
static const MR_ForeignEnumFunctorDescPtr profile__profile__foreign_enum_ordinal_ordered_call_site_kind_0[5];

#line 175 "profile.c"
static const MR_ForeignEnumFunctorDescPtr profile__profile__foreign_enum_name_ordered_call_site_kind_0[5];

#line 178 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_kind_0[5];

#line 181 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_kind_and_callee_1_0[2];

#line 184 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_0;

#line 187 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_1;

#line 190 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_2;

#line 193 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_3;

#line 196 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_4;

#line 199 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_callee_1_0[4];

#line 202 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_callee_1_1[1];

#line 205 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_kind_and_callee_1[2];

#line 208 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_kind_and_callee_1[5];

#line 211 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_kind_and_callee_1[5];

#line 214 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0;

#line 217 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_kind_and_info_1_0[1];

#line 220 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_0;

#line 223 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_1;

#line 226 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_2;

#line 229 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_3;

#line 232 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_4;

#line 235 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_info_1_0[4];

#line 238 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_info_1_1[1];

#line 241 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_kind_and_info_1[2];

#line 244 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_kind_and_info_1[5];

#line 247 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_kind_and_info_1[5];

#line 250 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_static_0_0[5];

#line 253 "profile.c"
static const MR_ConstString profile__profile__field_names_call_site_static_0_0[5];

#line 256 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_static_0_0;

#line 259 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_static_0_0[1];

#line 262 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_static_0[1];

#line 265 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_static_0[1];

#line 268 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_static_0[1];

#line 271 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0;

#line 274 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_static_ptr_0[1];

#line 277 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_static_ptr_0;

#line 280 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_static_0;

#line 283 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_canonical_flag_0_0;

#line 286 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_canonical_flag_0_1;

#line 289 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_canonical_flag_0[2];

#line 292 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_canonical_flag_0[2];

#line 295 "profile.c"
static const MR_Integer profile__profile__functor_number_map_canonical_flag_0[2];

#line 298 "profile.c"
static const MR_Integer profile__profile__functor_number_map_clique_ptr_0[1];

#line 301 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_clique_ptr_0;

#line 304 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0;

#line 307 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_0;

#line 310 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_1;

#line 313 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_2;

#line 316 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_coverage_data_type_0[3];

#line 319 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_coverage_data_type_0[3];

#line 322 "profile.c"
static const MR_Integer profile__profile__functor_number_map_coverage_data_type_0[3];

#line 325 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0;

#line 328 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_proc_static_0;

#line 331 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_clique_ptr_0;

#line 334 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 337 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0;

#line 340 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0;

#line 343 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 346 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 349 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 352 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 355 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1measurements__type_ctor_info_own_prof_info_0;

#line 358 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0;

#line 361 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0;

#line 364 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2builtin__type_ctor_info_string_0profile__type_ctor_info_module_data_0;

#line 367 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1builtin__type_ctor_info_int_0;

#line 370 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

#line 373 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

#line 376 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

#line 379 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0;

#line 382 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0;

#line 385 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0;

#line 388 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_deep_0_0[29];

#line 391 "profile.c"
static const MR_ConstString profile__profile__field_names_deep_0_0[29];

#line 394 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_deep_0_0;

#line 397 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_deep_0_0[1];

#line 400 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_deep_0[1];

#line 403 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_deep_0[1];

#line 406 "profile.c"
static const MR_Integer profile__profile__functor_number_map_deep_0[1];

#line 409 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_deep_compression_flag_0_0;

#line 412 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_deep_compression_flag_0[1];

#line 415 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_deep_compression_flag_0[1];

#line 418 "profile.c"
static const MR_Integer profile__profile__functor_number_map_deep_compression_flag_0[1];

#line 421 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_deep_flags_0_0[4];

#line 424 "profile.c"
static const MR_ConstString profile__profile__field_names_deep_flags_0_0[4];

#line 427 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_deep_flags_0_0;

#line 430 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_deep_flags_0_0[1];

#line 433 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_deep_flags_0[1];

#line 436 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_deep_flags_0[1];

#line 439 "profile.c"
static const MR_Integer profile__profile__functor_number_map_deep_flags_0[1];

#line 442 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_initial_deep_0_0[6];

#line 445 "profile.c"
static const MR_ConstString profile__profile__field_names_initial_deep_0_0[6];

#line 448 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_initial_deep_0_0;

#line 451 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_initial_deep_0_0[1];

#line 454 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_initial_deep_0[1];

#line 457 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_initial_deep_0[1];

#line 460 "profile.c"
static const MR_Integer profile__profile__functor_number_map_initial_deep_0[1];

#line 463 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_is_zeroed_0_0;

#line 466 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_is_zeroed_0_1;

#line 469 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_is_zeroed_0[2];

#line 472 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_is_zeroed_0[2];

#line 475 "profile.c"
static const MR_Integer profile__profile__functor_number_map_is_zeroed_0[2];

#line 478 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0;

#line 481 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_module_data_0_0[3];

#line 484 "profile.c"
static const MR_ConstString profile__profile__field_names_module_data_0_0[3];

#line 487 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_module_data_0_0;

#line 490 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_module_data_0_0[1];

#line 493 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_module_data_0[1];

#line 496 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_module_data_0[1];

#line 499 "profile.c"
static const MR_Integer profile__profile__functor_number_map_module_data_0[1];

#line 502 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_array_slot_0;

#line 505 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_proc_dynamic_0_0[3];

#line 508 "profile.c"
static const MR_ConstString profile__profile__field_names_proc_dynamic_0_0[3];

#line 511 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_proc_dynamic_0_0;

#line 514 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_proc_dynamic_0_0[1];

#line 517 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_proc_dynamic_0[1];

#line 520 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_proc_dynamic_0[1];

#line 523 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_dynamic_0[1];

#line 526 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_dynamic_ptr_0[1];

#line 529 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_proc_dynamic_ptr_0;

#line 532 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;

#line 535 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_proc_static_0_0[12];

#line 538 "profile.c"
static const MR_ConstString profile__profile__field_names_proc_static_0_0[12];

#line 541 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_proc_static_0_0;

#line 544 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_proc_static_0_0[1];

#line 547 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_proc_static_0[1];

#line 550 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_proc_static_0[1];

#line 553 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_static_0[1];

#line 556 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_static_ptr_0[1];

#line 559 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_proc_static_ptr_0;

#line 562 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_profile_stats_0_0[10];

#line 565 "profile.c"
static const MR_ConstString profile__profile__field_names_profile_stats_0_0[10];

#line 568 "profile.c"
static const MR_DuFunctorDesc profile__profile__du_functor_desc_profile_stats_0_0;

#line 571 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_profile_stats_0_0[1];

#line 574 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_profile_stats_0[1];

#line 577 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_profile_stats_0[1];

#line 580 "profile.c"
static const MR_Integer profile__profile__functor_number_map_profile_stats_0[1];

#line 583 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_array_slot_0_0_10001(
#line 586 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 588 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 591 "profile.c"
static void MR_CALL 
profile____Compare____call_site_array_slot_0_0_10001(
#line 594 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 596 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 598 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 601 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_callees_0_0_10001(
#line 604 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 606 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 609 "profile.c"
static void MR_CALL 
profile____Compare____call_site_callees_0_0_10001(
#line 612 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 614 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 616 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 619 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_caller_0_0_10001(
#line 622 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 624 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 627 "profile.c"
static void MR_CALL 
profile____Compare____call_site_caller_0_0_10001(
#line 630 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 632 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 634 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 637 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_0_0_10001(
#line 640 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 642 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 645 "profile.c"
static void MR_CALL 
profile____Compare____call_site_dynamic_0_0_10001(
#line 648 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 650 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 652 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 655 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_ptr_0_0_10001(
#line 658 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 660 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 663 "profile.c"
static void MR_CALL 
profile____Compare____call_site_dynamic_ptr_0_0_10001(
#line 666 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 668 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 670 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 673 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_dynamics_0_0_10001(
#line 676 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 678 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 681 "profile.c"
static void MR_CALL 
profile____Compare____call_site_dynamics_0_0_10001(
#line 684 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 686 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 688 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 691 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_0_0_10001(
#line 694 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 696 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 699 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_0_0_10001(
#line 702 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 704 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 706 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 709 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_1_0_10001(
#line 712 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 714 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 716 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 719 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_and_callee_1_0_10001(
#line 722 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 724 "profile.c"
  MR_Box * profile__wrapper_arg_2,
#line 726 "profile.c"
  MR_Box profile__wrapper_arg_3,
#line 728 "profile.c"
  MR_Box profile__wrapper_arg_4);

#line 731 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_0_0_10001(
#line 734 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 736 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 739 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_and_callee_0_0_10001(
#line 742 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 744 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 746 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 749 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_info_1_0_10001(
#line 752 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 754 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 756 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 759 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_and_info_1_0_10001(
#line 762 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 764 "profile.c"
  MR_Box * profile__wrapper_arg_2,
#line 766 "profile.c"
  MR_Box profile__wrapper_arg_3,
#line 768 "profile.c"
  MR_Box profile__wrapper_arg_4);

#line 771 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_static_0_0_10001(
#line 774 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 776 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 779 "profile.c"
static void MR_CALL 
profile____Compare____call_site_static_0_0_10001(
#line 782 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 784 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 786 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 789 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_static_map_0_0_10001(
#line 792 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 794 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 797 "profile.c"
static void MR_CALL 
profile____Compare____call_site_static_map_0_0_10001(
#line 800 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 802 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 804 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 807 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_static_ptr_0_0_10001(
#line 810 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 812 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 815 "profile.c"
static void MR_CALL 
profile____Compare____call_site_static_ptr_0_0_10001(
#line 818 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 820 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 822 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 825 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_statics_0_0_10001(
#line 828 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 830 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 833 "profile.c"
static void MR_CALL 
profile____Compare____call_site_statics_0_0_10001(
#line 836 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 838 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 840 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 843 "profile.c"
static MR_bool MR_CALL 
profile____Unify____canonical_flag_0_0_10001(
#line 846 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 848 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 851 "profile.c"
static void MR_CALL 
profile____Compare____canonical_flag_0_0_10001(
#line 854 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 856 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 858 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 861 "profile.c"
static MR_bool MR_CALL 
profile____Unify____clique_ptr_0_0_10001(
#line 864 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 866 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 869 "profile.c"
static void MR_CALL 
profile____Compare____clique_ptr_0_0_10001(
#line 872 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 874 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 876 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 879 "profile.c"
static MR_bool MR_CALL 
profile____Unify____compensation_table_0_0_10001(
#line 882 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 884 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 887 "profile.c"
static void MR_CALL 
profile____Compare____compensation_table_0_0_10001(
#line 890 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 892 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 894 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 897 "profile.c"
static MR_bool MR_CALL 
profile____Unify____coverage_data_type_0_0_10001(
#line 900 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 902 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 905 "profile.c"
static void MR_CALL 
profile____Compare____coverage_data_type_0_0_10001(
#line 908 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 910 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 912 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 915 "profile.c"
static MR_bool MR_CALL 
profile____Unify____deep_0_0_10001(
#line 918 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 920 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 923 "profile.c"
static void MR_CALL 
profile____Compare____deep_0_0_10001(
#line 926 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 928 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 930 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 933 "profile.c"
static MR_bool MR_CALL 
profile____Unify____deep_compression_flag_0_0_10001(
#line 936 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 938 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 941 "profile.c"
static void MR_CALL 
profile____Compare____deep_compression_flag_0_0_10001(
#line 944 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 946 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 948 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 951 "profile.c"
static MR_bool MR_CALL 
profile____Unify____deep_flags_0_0_10001(
#line 954 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 956 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 959 "profile.c"
static void MR_CALL 
profile____Compare____deep_flags_0_0_10001(
#line 962 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 964 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 966 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 969 "profile.c"
static MR_bool MR_CALL 
profile____Unify____initial_deep_0_0_10001(
#line 972 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 974 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 977 "profile.c"
static void MR_CALL 
profile____Compare____initial_deep_0_0_10001(
#line 980 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 982 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 984 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 987 "profile.c"
static MR_bool MR_CALL 
profile____Unify____is_zeroed_0_0_10001(
#line 990 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 992 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 995 "profile.c"
static void MR_CALL 
profile____Compare____is_zeroed_0_0_10001(
#line 998 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1000 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1002 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1005 "profile.c"
static MR_bool MR_CALL 
profile____Unify____module_data_0_0_10001(
#line 1008 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1010 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1013 "profile.c"
static void MR_CALL 
profile____Compare____module_data_0_0_10001(
#line 1016 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1018 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1020 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1023 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_dynamic_0_0_10001(
#line 1026 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1028 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1031 "profile.c"
static void MR_CALL 
profile____Compare____proc_dynamic_0_0_10001(
#line 1034 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1036 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1038 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1041 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_dynamic_ptr_0_0_10001(
#line 1044 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1046 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1049 "profile.c"
static void MR_CALL 
profile____Compare____proc_dynamic_ptr_0_0_10001(
#line 1052 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1054 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1056 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1059 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_dynamics_0_0_10001(
#line 1062 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1064 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1067 "profile.c"
static void MR_CALL 
profile____Compare____proc_dynamics_0_0_10001(
#line 1070 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1072 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1074 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1077 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_static_0_0_10001(
#line 1080 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1082 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1085 "profile.c"
static void MR_CALL 
profile____Compare____proc_static_0_0_10001(
#line 1088 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1090 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1092 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1095 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_static_ptr_0_0_10001(
#line 1098 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1100 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1103 "profile.c"
static void MR_CALL 
profile____Compare____proc_static_ptr_0_0_10001(
#line 1106 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1108 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1110 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1113 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_statics_0_0_10001(
#line 1116 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1118 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1121 "profile.c"
static void MR_CALL 
profile____Compare____proc_statics_0_0_10001(
#line 1124 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1126 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1128 "profile.c"
  MR_Box profile__wrapper_arg_3);

#line 1131 "profile.c"
static MR_bool MR_CALL 
profile____Unify____profile_stats_0_0_10001(
#line 1134 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 1136 "profile.c"
  MR_Box profile__wrapper_arg_2);

#line 1139 "profile.c"
static void MR_CALL 
profile____Compare____profile_stats_0_0_10001(
#line 1142 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 1144 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 1146 "profile.c"
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



#line 1374 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_0[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 1379 "profile.c"
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

#line 1394 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1402 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_1[2] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_is_zeroed_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 1408 "profile.c"
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

#line 1423 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_array_slot_0_0[1] = {
  &profile__profile__du_functor_desc_call_site_array_slot_0_0
};

#line 1428 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_array_slot_0_1[1] = {
  &profile__profile__du_functor_desc_call_site_array_slot_0_1
};

#line 1433 "profile.c"
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

#line 1447 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_array_slot_0[2] = {
  &profile__profile__du_functor_desc_call_site_array_slot_0_1,
  &profile__profile__du_functor_desc_call_site_array_slot_0_0
};

#line 1453 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_array_slot_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1459 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_array_slot_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____call_site_array_slot_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_array_slot_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_array_slot",
  {     profile__profile__du_name_ordered_call_site_array_slot_0 },
  {     profile__profile__du_ptag_ordered_call_site_array_slot_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_array_slot_0
};

#line 1476 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_callees_0[1] = {
  (MR_Integer) 0
};

#line 1481 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 1489 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_callees_0 = {
  (MR_String) "call_site_callees",
  (MR_PseudoTypeInfo) &profile__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0,
  NULL
};

#line 1496 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_callees_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____call_site_callees_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_callees_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_callees",
  {     &profile__profile__notag_functor_desc_call_site_callees_0 },
  {     &profile__profile__notag_functor_desc_call_site_callees_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_callees_0
};

#line 1513 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_caller_0[1] = {
  (MR_Integer) 0
};

#line 1518 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_caller_0 = {
  (MR_String) "call_site_caller",
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
  NULL
};

#line 1525 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_caller_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____call_site_caller_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_caller_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_caller",
  {     &profile__profile__notag_functor_desc_call_site_caller_0 },
  {     &profile__profile__notag_functor_desc_call_site_caller_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_caller_0
};

#line 1542 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_dynamic_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0
};

#line 1549 "profile.c"
static const MR_ConstString profile__profile__field_names_call_site_dynamic_0_0[3] = {
  (MR_String) "csd_caller",
  (MR_String) "csd_callee",
  (MR_String) "csd_own_prof"
};

#line 1556 "profile.c"
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

#line 1571 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_dynamic_0_0[1] = {
  &profile__profile__du_functor_desc_call_site_dynamic_0_0
};

#line 1576 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_dynamic_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_dynamic_0_0
  }
};

#line 1585 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_dynamic_0[1] = {
  &profile__profile__du_functor_desc_call_site_dynamic_0_0
};

#line 1590 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_dynamic_0[1] = {
  (MR_Integer) 0
};

#line 1595 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_dynamic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____call_site_dynamic_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_dynamic_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_dynamic",
  {     profile__profile__du_name_ordered_call_site_dynamic_0 },
  {     profile__profile__du_ptag_ordered_call_site_dynamic_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_dynamic_0
};

#line 1612 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_dynamic_ptr_0[1] = {
  (MR_Integer) 0
};

#line 1617 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_dynamic_ptr_0 = {
  (MR_String) "call_site_dynamic_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1624 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____call_site_dynamic_ptr_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_dynamic_ptr_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_dynamic_ptr",
  {     &profile__profile__notag_functor_desc_call_site_dynamic_ptr_0 },
  {     &profile__profile__notag_functor_desc_call_site_dynamic_ptr_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_dynamic_ptr_0
};

#line 1641 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_0
  }
};

#line 1649 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_dynamics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____call_site_dynamics_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_dynamics_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_dynamics",
  {     NULL },
  {     (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1666 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_0 = {
  (MR_String) "normal_call",
  (MR_Integer) 0,
  ((int) MR_callsite_normal_call)
};

#line 1673 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_1 = {
  (MR_String) "special_call",
  (MR_Integer) 1,
  ((int) MR_callsite_special_call)
};

#line 1680 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_2 = {
  (MR_String) "higher_order_call",
  (MR_Integer) 2,
  ((int) MR_callsite_higher_order_call)
};

#line 1687 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_3 = {
  (MR_String) "method_call",
  (MR_Integer) 3,
  ((int) MR_callsite_method_call)
};

#line 1694 "profile.c"
static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_4 = {
  (MR_String) "callback",
  (MR_Integer) 4,
  ((int) MR_callsite_callback)
};

#line 1701 "profile.c"
static const MR_ForeignEnumFunctorDescPtr profile__profile__foreign_enum_ordinal_ordered_call_site_kind_0[5] = {
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_0,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_1,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_2,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_3,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_4
};

#line 1710 "profile.c"
static const MR_ForeignEnumFunctorDescPtr profile__profile__foreign_enum_name_ordered_call_site_kind_0[5] = {
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_4,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_2,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_3,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_0,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_1
};

#line 1719 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_kind_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1728 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN_ENUM,
  ((MR_Box) (profile____Unify____call_site_kind_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_kind_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_kind",
  {     profile__profile__foreign_enum_name_ordered_call_site_kind_0 },
  {     profile__profile__foreign_enum_ordinal_ordered_call_site_kind_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_kind_0
};

#line 1745 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_kind_and_callee_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1751 "profile.c"
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

#line 1766 "profile.c"
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

#line 1781 "profile.c"
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

#line 1796 "profile.c"
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

#line 1811 "profile.c"
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

#line 1826 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_callee_1_0[4] = {
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_1,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_2,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_3,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_4
};

#line 1834 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_callee_1_1[1] = {
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_0
};

#line 1839 "profile.c"
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

#line 1853 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_kind_and_callee_1[5] = {
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_4,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_2,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_3,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_0,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_1
};

#line 1862 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_kind_and_callee_1[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1871 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_kind_and_callee_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____call_site_kind_and_callee_1_0_10001)),
  ((MR_Box) (profile____Compare____call_site_kind_and_callee_1_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_kind_and_callee",
  {     profile__profile__du_name_ordered_call_site_kind_and_callee_1 },
  {     profile__profile__du_ptag_ordered_call_site_kind_and_callee_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_kind_and_callee_1
};

#line 1888 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 1896 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_kind_and_callee_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____call_site_kind_and_callee_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_kind_and_callee_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_kind_and_callee",
  {     NULL },
  {     (MR_PseudoTypeInfo) &profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1913 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_kind_and_info_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1918 "profile.c"
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

#line 1933 "profile.c"
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

#line 1948 "profile.c"
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

#line 1963 "profile.c"
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

#line 1978 "profile.c"
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

#line 1993 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_info_1_0[4] = {
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_1,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_2,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_3,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_4
};

#line 2001 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_info_1_1[1] = {
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_0
};

#line 2006 "profile.c"
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

#line 2020 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_kind_and_info_1[5] = {
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_4,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_2,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_3,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_0,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_1
};

#line 2029 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_kind_and_info_1[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2038 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_kind_and_info_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____call_site_kind_and_info_1_0_10001)),
  ((MR_Box) (profile____Compare____call_site_kind_and_info_1_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_kind_and_info",
  {     profile__profile__du_name_ordered_call_site_kind_and_info_1 },
  {     profile__profile__du_ptag_ordered_call_site_kind_and_info_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_kind_and_info_1
};

#line 2055 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_call_site_static_0_0[5] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 2064 "profile.c"
static const MR_ConstString profile__profile__field_names_call_site_static_0_0[5] = {
  (MR_String) "css_container",
  (MR_String) "css_slot_num",
  (MR_String) "css_kind",
  (MR_String) "css_line_num",
  (MR_String) "css_goal_path"
};

#line 2073 "profile.c"
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

#line 2088 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_static_0_0[1] = {
  &profile__profile__du_functor_desc_call_site_static_0_0
};

#line 2093 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_static_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_static_0_0
  }
};

#line 2102 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_static_0[1] = {
  &profile__profile__du_functor_desc_call_site_static_0_0
};

#line 2107 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_static_0[1] = {
  (MR_Integer) 0
};

#line 2112 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_static_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____call_site_static_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_static_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_static",
  {     profile__profile__du_name_ordered_call_site_static_0 },
  {     profile__profile__du_ptag_ordered_call_site_static_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_static_0
};

#line 2129 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
  }
};

#line 2137 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_static_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____call_site_static_map_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_static_map_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_static_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2154 "profile.c"
static const MR_Integer profile__profile__functor_number_map_call_site_static_ptr_0[1] = {
  (MR_Integer) 0
};

#line 2159 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_static_ptr_0 = {
  (MR_String) "call_site_static_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2166 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_static_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____call_site_static_ptr_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_static_ptr_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_static_ptr",
  {     &profile__profile__notag_functor_desc_call_site_static_ptr_0 },
  {     &profile__profile__notag_functor_desc_call_site_static_ptr_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_call_site_static_ptr_0
};

#line 2183 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_static_0
  }
};

#line 2191 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_statics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____call_site_statics_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_statics_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_statics",
  {     NULL },
  {     (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_static_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2208 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_canonical_flag_0_0 = {
  (MR_String) "is_canonical",
  (MR_Integer) 0
};

#line 2214 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_canonical_flag_0_1 = {
  (MR_String) "maybe_not_canonical",
  (MR_Integer) 1
};

#line 2220 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_canonical_flag_0[2] = {
  &profile__profile__enum_functor_desc_canonical_flag_0_0,
  &profile__profile__enum_functor_desc_canonical_flag_0_1
};

#line 2226 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_canonical_flag_0[2] = {
  &profile__profile__enum_functor_desc_canonical_flag_0_0,
  &profile__profile__enum_functor_desc_canonical_flag_0_1
};

#line 2232 "profile.c"
static const MR_Integer profile__profile__functor_number_map_canonical_flag_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2238 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_canonical_flag_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (profile____Unify____canonical_flag_0_0_10001)),
  ((MR_Box) (profile____Compare____canonical_flag_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "canonical_flag",
  {     profile__profile__enum_name_ordered_canonical_flag_0 },
  {     profile__profile__enum_value_ordered_canonical_flag_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  profile__profile__functor_number_map_canonical_flag_0
};

#line 2255 "profile.c"
static const MR_Integer profile__profile__functor_number_map_clique_ptr_0[1] = {
  (MR_Integer) 0
};

#line 2260 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_clique_ptr_0 = {
  (MR_String) "clique_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2267 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_clique_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____clique_ptr_0_0_10001)),
  ((MR_Box) (profile____Compare____clique_ptr_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "clique_ptr",
  {     &profile__profile__notag_functor_desc_clique_ptr_0 },
  {     &profile__profile__notag_functor_desc_clique_ptr_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_clique_ptr_0
};

#line 2284 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
  }
};

#line 2293 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_compensation_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____compensation_table_0_0_10001)),
  ((MR_Box) (profile____Compare____compensation_table_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "compensation_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2310 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_0 = {
  (MR_String) "no_coverage_data",
  (MR_Integer) 0
};

#line 2316 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_1 = {
  (MR_String) "static_coverage_data",
  (MR_Integer) 1
};

#line 2322 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_2 = {
  (MR_String) "dynamic_coverage_data",
  (MR_Integer) 2
};

#line 2328 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_coverage_data_type_0[3] = {
  &profile__profile__enum_functor_desc_coverage_data_type_0_0,
  &profile__profile__enum_functor_desc_coverage_data_type_0_1,
  &profile__profile__enum_functor_desc_coverage_data_type_0_2
};

#line 2335 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_coverage_data_type_0[3] = {
  &profile__profile__enum_functor_desc_coverage_data_type_0_2,
  &profile__profile__enum_functor_desc_coverage_data_type_0_0,
  &profile__profile__enum_functor_desc_coverage_data_type_0_1
};

#line 2342 "profile.c"
static const MR_Integer profile__profile__functor_number_map_coverage_data_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2349 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_coverage_data_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (profile____Unify____coverage_data_type_0_0_10001)),
  ((MR_Box) (profile____Compare____coverage_data_type_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "coverage_data_type",
  {     profile__profile__enum_name_ordered_coverage_data_type_0 },
  {     profile__profile__enum_value_ordered_coverage_data_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  profile__profile__functor_number_map_coverage_data_type_0
};

#line 2366 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_0
  }
};

#line 2374 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_proc_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_0
  }
};

#line 2382 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

#line 2390 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 2398 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

#line 2406 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0
  }
};

#line 2414 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2422 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2430 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &profile__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2439 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2447 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1measurements__type_ctor_info_own_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0
  }
};

#line 2455 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
  }
};

#line 2463 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0
  }
};

#line 2471 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2builtin__type_ctor_info_string_0profile__type_ctor_info_module_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &profile__profile__type_ctor_info_module_data_0
  }
};

#line 2480 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2488 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &profile__array__ti_array_1builtin__type_ctor_info_int_0
  }
};

#line 2496 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0
  }
};

#line 2504 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &profile__array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0
  }
};

#line 2512 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_prog_rep_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 2520 "profile.c"
static const MR_FA_TypeInfo_Struct2 profile__maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &profile__mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2529 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &profile__maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0
  }
};

#line 2537 "profile.c"
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

#line 2570 "profile.c"
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

#line 2603 "profile.c"
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

#line 2618 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_deep_0_0[1] = {
  &profile__profile__du_functor_desc_deep_0_0
};

#line 2623 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_deep_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_deep_0_0
  }
};

#line 2632 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_deep_0[1] = {
  &profile__profile__du_functor_desc_deep_0_0
};

#line 2637 "profile.c"
static const MR_Integer profile__profile__functor_number_map_deep_0[1] = {
  (MR_Integer) 0
};

#line 2642 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_deep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____deep_0_0_10001)),
  ((MR_Box) (profile____Compare____deep_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "deep",
  {     profile__profile__du_name_ordered_deep_0 },
  {     profile__profile__du_ptag_ordered_deep_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_deep_0
};

#line 2659 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_deep_compression_flag_0_0 = {
  (MR_String) "no_compression",
  (MR_Integer) 0
};

#line 2665 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_deep_compression_flag_0[1] = {
  &profile__profile__enum_functor_desc_deep_compression_flag_0_0
};

#line 2670 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_deep_compression_flag_0[1] = {
  &profile__profile__enum_functor_desc_deep_compression_flag_0_0
};

#line 2675 "profile.c"
static const MR_Integer profile__profile__functor_number_map_deep_compression_flag_0[1] = {
  (MR_Integer) 0
};

#line 2680 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_deep_compression_flag_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (profile____Unify____deep_compression_flag_0_0_10001)),
  ((MR_Box) (profile____Compare____deep_compression_flag_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "deep_compression_flag",
  {     profile__profile__enum_name_ordered_deep_compression_flag_0 },
  {     profile__profile__enum_value_ordered_deep_compression_flag_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_deep_compression_flag_0
};

#line 2697 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_deep_flags_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_canonical_flag_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_deep_compression_flag_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_coverage_data_type_0
};

#line 2705 "profile.c"
static const MR_ConstString profile__profile__field_names_deep_flags_0_0[4] = {
  (MR_String) "df_bytes_per_int",
  (MR_String) "df_canonical_flag",
  (MR_String) "df_compression_flag",
  (MR_String) "df_coverage_data_type"
};

#line 2713 "profile.c"
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

#line 2728 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_deep_flags_0_0[1] = {
  &profile__profile__du_functor_desc_deep_flags_0_0
};

#line 2733 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_deep_flags_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_deep_flags_0_0
  }
};

#line 2742 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_deep_flags_0[1] = {
  &profile__profile__du_functor_desc_deep_flags_0_0
};

#line 2747 "profile.c"
static const MR_Integer profile__profile__functor_number_map_deep_flags_0[1] = {
  (MR_Integer) 0
};

#line 2752 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_deep_flags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____deep_flags_0_0_10001)),
  ((MR_Box) (profile____Compare____deep_flags_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "deep_flags",
  {     profile__profile__du_name_ordered_deep_flags_0 },
  {     profile__profile__du_ptag_ordered_deep_flags_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_deep_flags_0
};

#line 2769 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_initial_deep_0_0[6] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_profile_stats_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_static_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_proc_static_0
};

#line 2779 "profile.c"
static const MR_ConstString profile__profile__field_names_initial_deep_0_0[6] = {
  (MR_String) "init_profile_stats",
  (MR_String) "init_root",
  (MR_String) "init_call_site_dynamics",
  (MR_String) "init_proc_dynamics",
  (MR_String) "init_call_site_statics",
  (MR_String) "init_proc_statics"
};

#line 2789 "profile.c"
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

#line 2804 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_initial_deep_0_0[1] = {
  &profile__profile__du_functor_desc_initial_deep_0_0
};

#line 2809 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_initial_deep_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_initial_deep_0_0
  }
};

#line 2818 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_initial_deep_0[1] = {
  &profile__profile__du_functor_desc_initial_deep_0_0
};

#line 2823 "profile.c"
static const MR_Integer profile__profile__functor_number_map_initial_deep_0[1] = {
  (MR_Integer) 0
};

#line 2828 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_initial_deep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____initial_deep_0_0_10001)),
  ((MR_Box) (profile____Compare____initial_deep_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "initial_deep",
  {     profile__profile__du_name_ordered_initial_deep_0 },
  {     profile__profile__du_ptag_ordered_initial_deep_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_initial_deep_0
};

#line 2845 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_is_zeroed_0_0 = {
  (MR_String) "zeroed",
  (MR_Integer) 0
};

#line 2851 "profile.c"
static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_is_zeroed_0_1 = {
  (MR_String) "not_zeroed",
  (MR_Integer) 1
};

#line 2857 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_is_zeroed_0[2] = {
  &profile__profile__enum_functor_desc_is_zeroed_0_0,
  &profile__profile__enum_functor_desc_is_zeroed_0_1
};

#line 2863 "profile.c"
static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_is_zeroed_0[2] = {
  &profile__profile__enum_functor_desc_is_zeroed_0_1,
  &profile__profile__enum_functor_desc_is_zeroed_0_0
};

#line 2869 "profile.c"
static const MR_Integer profile__profile__functor_number_map_is_zeroed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2875 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_is_zeroed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (profile____Unify____is_zeroed_0_0_10001)),
  ((MR_Box) (profile____Compare____is_zeroed_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "is_zeroed",
  {     profile__profile__enum_name_ordered_is_zeroed_0 },
  {     profile__profile__enum_value_ordered_is_zeroed_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  profile__profile__functor_number_map_is_zeroed_0
};

#line 2892 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 2900 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_module_data_0_0[3] = {
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0,
  (MR_PseudoTypeInfo) &profile__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0
};

#line 2907 "profile.c"
static const MR_ConstString profile__profile__field_names_module_data_0_0[3] = {
  (MR_String) "module_own",
  (MR_String) "module_desc",
  (MR_String) "module_procs"
};

#line 2914 "profile.c"
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

#line 2929 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_module_data_0_0[1] = {
  &profile__profile__du_functor_desc_module_data_0_0
};

#line 2934 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_module_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_module_data_0_0
  }
};

#line 2943 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_module_data_0[1] = {
  &profile__profile__du_functor_desc_module_data_0_0
};

#line 2948 "profile.c"
static const MR_Integer profile__profile__functor_number_map_module_data_0[1] = {
  (MR_Integer) 0
};

#line 2953 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_module_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____module_data_0_0_10001)),
  ((MR_Box) (profile____Compare____module_data_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "module_data",
  {     profile__profile__du_name_ordered_module_data_0 },
  {     profile__profile__du_ptag_ordered_module_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_module_data_0
};

#line 2970 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

#line 2978 "profile.c"
static const MR_PseudoTypeInfo profile__profile__field_types_proc_dynamic_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_array_slot_0,
  (MR_PseudoTypeInfo) &profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0
};

#line 2985 "profile.c"
static const MR_ConstString profile__profile__field_names_proc_dynamic_0_0[3] = {
  (MR_String) "pd_proc_static",
  (MR_String) "pd_sites",
  (MR_String) "pd_maybe_coverage_points"
};

#line 2992 "profile.c"
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

#line 3007 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_proc_dynamic_0_0[1] = {
  &profile__profile__du_functor_desc_proc_dynamic_0_0
};

#line 3012 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_proc_dynamic_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_proc_dynamic_0_0
  }
};

#line 3021 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_proc_dynamic_0[1] = {
  &profile__profile__du_functor_desc_proc_dynamic_0_0
};

#line 3026 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_dynamic_0[1] = {
  (MR_Integer) 0
};

#line 3031 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_dynamic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____proc_dynamic_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_dynamic_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_dynamic",
  {     profile__profile__du_name_ordered_proc_dynamic_0 },
  {     profile__profile__du_ptag_ordered_proc_dynamic_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_proc_dynamic_0
};

#line 3048 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_dynamic_ptr_0[1] = {
  (MR_Integer) 0
};

#line 3053 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_proc_dynamic_ptr_0 = {
  (MR_String) "proc_dynamic_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 3060 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_dynamic_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____proc_dynamic_ptr_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_dynamic_ptr_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_dynamic_ptr",
  {     &profile__profile__notag_functor_desc_proc_dynamic_ptr_0 },
  {     &profile__profile__notag_functor_desc_proc_dynamic_ptr_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_proc_dynamic_ptr_0
};

#line 3077 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_dynamics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____proc_dynamics_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_dynamics_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_dynamics",
  {     NULL },
  {     (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3094 "profile.c"
static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1mdbcomp__program_representation__type_ctor_info_coverage_point_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0
  }
};

#line 3102 "profile.c"
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

#line 3118 "profile.c"
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

#line 3134 "profile.c"
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

#line 3149 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_proc_static_0_0[1] = {
  &profile__profile__du_functor_desc_proc_static_0_0
};

#line 3154 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_proc_static_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_proc_static_0_0
  }
};

#line 3163 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_proc_static_0[1] = {
  &profile__profile__du_functor_desc_proc_static_0_0
};

#line 3168 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_static_0[1] = {
  (MR_Integer) 0
};

#line 3173 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_static_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____proc_static_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_static_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_static",
  {     profile__profile__du_name_ordered_proc_static_0 },
  {     profile__profile__du_ptag_ordered_proc_static_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_proc_static_0
};

#line 3190 "profile.c"
static const MR_Integer profile__profile__functor_number_map_proc_static_ptr_0[1] = {
  (MR_Integer) 0
};

#line 3195 "profile.c"
static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_proc_static_ptr_0 = {
  (MR_String) "proc_static_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 3202 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_static_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____proc_static_ptr_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_static_ptr_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_static_ptr",
  {     &profile__profile__notag_functor_desc_proc_static_ptr_0 },
  {     &profile__profile__notag_functor_desc_proc_static_ptr_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_proc_static_ptr_0
};

#line 3219 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_statics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____proc_statics_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_statics_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_statics",
  {     NULL },
  {     (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_proc_static_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3236 "profile.c"
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

#line 3250 "profile.c"
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

#line 3264 "profile.c"
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

#line 3279 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_profile_stats_0_0[1] = {
  &profile__profile__du_functor_desc_profile_stats_0_0
};

#line 3284 "profile.c"
static const MR_DuPtagLayout profile__profile__du_ptag_ordered_profile_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_profile_stats_0_0
  }
};

#line 3293 "profile.c"
static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_profile_stats_0[1] = {
  &profile__profile__du_functor_desc_profile_stats_0_0
};

#line 3298 "profile.c"
static const MR_Integer profile__profile__functor_number_map_profile_stats_0[1] = {
  (MR_Integer) 0
};

#line 3303 "profile.c"
const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_profile_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____profile_stats_0_0_10001)),
  ((MR_Box) (profile____Compare____profile_stats_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "profile_stats",
  {     profile__profile__du_name_ordered_profile_stats_0 },
  {     profile__profile__du_ptag_ordered_profile_stats_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  profile__profile__functor_number_map_profile_stats_0
};

#line 3320 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_array_slot_0_0_10001(
#line 3323 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3325 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3327 "profile.c"
{
#line 3329 "profile.c"
  {
#line 3331 "profile.c"
    MR_bool profile__succeeded;

#line 3334 "profile.c"
    {
#line 3336 "profile.c"
      profile__succeeded = profile____Unify____call_site_array_slot_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3339 "profile.c"
    return profile__succeeded;
#line 3341 "profile.c"
  }
#line 3343 "profile.c"
}

#line 3346 "profile.c"
static void MR_CALL 
profile____Compare____call_site_array_slot_0_0_10001(
#line 3349 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3351 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3353 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3355 "profile.c"
{
#line 3357 "profile.c"
  {
#line 3359 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3362 "profile.c"
    {
#line 3364 "profile.c"
      profile____Compare____call_site_array_slot_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3367 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3369 "profile.c"
  }
#line 3371 "profile.c"
}

#line 3374 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_callees_0_0_10001(
#line 3377 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3379 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3381 "profile.c"
{
#line 3383 "profile.c"
  {
#line 3385 "profile.c"
    MR_bool profile__succeeded;

#line 3388 "profile.c"
    {
#line 3390 "profile.c"
      profile__succeeded = profile____Unify____call_site_callees_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3393 "profile.c"
    return profile__succeeded;
#line 3395 "profile.c"
  }
#line 3397 "profile.c"
}

#line 3400 "profile.c"
static void MR_CALL 
profile____Compare____call_site_callees_0_0_10001(
#line 3403 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3405 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3407 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3409 "profile.c"
{
#line 3411 "profile.c"
  {
#line 3413 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3416 "profile.c"
    {
#line 3418 "profile.c"
      profile____Compare____call_site_callees_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3421 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3423 "profile.c"
  }
#line 3425 "profile.c"
}

#line 3428 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_caller_0_0_10001(
#line 3431 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3433 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3435 "profile.c"
{
#line 3437 "profile.c"
  {
#line 3439 "profile.c"
    MR_bool profile__succeeded;

#line 3442 "profile.c"
    {
#line 3444 "profile.c"
      profile__succeeded = profile____Unify____call_site_caller_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3447 "profile.c"
    return profile__succeeded;
#line 3449 "profile.c"
  }
#line 3451 "profile.c"
}

#line 3454 "profile.c"
static void MR_CALL 
profile____Compare____call_site_caller_0_0_10001(
#line 3457 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3459 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3461 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3463 "profile.c"
{
#line 3465 "profile.c"
  {
#line 3467 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3470 "profile.c"
    {
#line 3472 "profile.c"
      profile____Compare____call_site_caller_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3475 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3477 "profile.c"
  }
#line 3479 "profile.c"
}

#line 3482 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_0_0_10001(
#line 3485 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3487 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3489 "profile.c"
{
#line 3491 "profile.c"
  {
#line 3493 "profile.c"
    MR_bool profile__succeeded;

#line 3496 "profile.c"
    {
#line 3498 "profile.c"
      profile__succeeded = profile____Unify____call_site_dynamic_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3501 "profile.c"
    return profile__succeeded;
#line 3503 "profile.c"
  }
#line 3505 "profile.c"
}

#line 3508 "profile.c"
static void MR_CALL 
profile____Compare____call_site_dynamic_0_0_10001(
#line 3511 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3513 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3515 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3517 "profile.c"
{
#line 3519 "profile.c"
  {
#line 3521 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3524 "profile.c"
    {
#line 3526 "profile.c"
      profile____Compare____call_site_dynamic_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3529 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3531 "profile.c"
  }
#line 3533 "profile.c"
}

#line 3536 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_ptr_0_0_10001(
#line 3539 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3541 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3543 "profile.c"
{
#line 3545 "profile.c"
  {
#line 3547 "profile.c"
    MR_bool profile__succeeded;

#line 3550 "profile.c"
    {
#line 3552 "profile.c"
      profile__succeeded = profile____Unify____call_site_dynamic_ptr_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3555 "profile.c"
    return profile__succeeded;
#line 3557 "profile.c"
  }
#line 3559 "profile.c"
}

#line 3562 "profile.c"
static void MR_CALL 
profile____Compare____call_site_dynamic_ptr_0_0_10001(
#line 3565 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3567 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3569 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3571 "profile.c"
{
#line 3573 "profile.c"
  {
#line 3575 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3578 "profile.c"
    {
#line 3580 "profile.c"
      profile____Compare____call_site_dynamic_ptr_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3583 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3585 "profile.c"
  }
#line 3587 "profile.c"
}

#line 3590 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_dynamics_0_0_10001(
#line 3593 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3595 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3597 "profile.c"
{
#line 3599 "profile.c"
  {
#line 3601 "profile.c"
    MR_bool profile__succeeded;

#line 3604 "profile.c"
    {
#line 3606 "profile.c"
      profile__succeeded = profile____Unify____call_site_dynamics_0_0(((MR_ArrayPtr) profile__wrapper_arg_1), ((MR_ArrayPtr) profile__wrapper_arg_2));
    }
#line 3609 "profile.c"
    return profile__succeeded;
#line 3611 "profile.c"
  }
#line 3613 "profile.c"
}

#line 3616 "profile.c"
static void MR_CALL 
profile____Compare____call_site_dynamics_0_0_10001(
#line 3619 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3621 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3623 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3625 "profile.c"
{
#line 3627 "profile.c"
  {
#line 3629 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3632 "profile.c"
    {
#line 3634 "profile.c"
      profile____Compare____call_site_dynamics_0_0(&profile__conv0_HeadVar__1_1, ((MR_ArrayPtr) profile__wrapper_arg_2), ((MR_ArrayPtr) profile__wrapper_arg_3));
    }
#line 3637 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3639 "profile.c"
  }
#line 3641 "profile.c"
}

#line 3644 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_0_0_10001(
#line 3647 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3649 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3651 "profile.c"
{
#line 3653 "profile.c"
  {
#line 3655 "profile.c"
    MR_bool profile__succeeded;

#line 3658 "profile.c"
    {
#line 3660 "profile.c"
      profile__succeeded = profile____Unify____call_site_kind_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3663 "profile.c"
    return profile__succeeded;
#line 3665 "profile.c"
  }
#line 3667 "profile.c"
}

#line 3670 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_0_0_10001(
#line 3673 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3675 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3677 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3679 "profile.c"
{
#line 3681 "profile.c"
  {
#line 3683 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3686 "profile.c"
    {
#line 3688 "profile.c"
      profile____Compare____call_site_kind_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3691 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3693 "profile.c"
  }
#line 3695 "profile.c"
}

#line 3698 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_1_0_10001(
#line 3701 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3703 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3705 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3707 "profile.c"
{
#line 3709 "profile.c"
  {
#line 3711 "profile.c"
    MR_bool profile__succeeded;

#line 3714 "profile.c"
    {
#line 3716 "profile.c"
      profile__succeeded = profile____Unify____call_site_kind_and_callee_1_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3719 "profile.c"
    return profile__succeeded;
#line 3721 "profile.c"
  }
#line 3723 "profile.c"
}

#line 3726 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_and_callee_1_0_10001(
#line 3729 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3731 "profile.c"
  MR_Box * profile__wrapper_arg_2,
#line 3733 "profile.c"
  MR_Box profile__wrapper_arg_3,
#line 3735 "profile.c"
  MR_Box profile__wrapper_arg_4)
#line 3737 "profile.c"
{
#line 3739 "profile.c"
  {
#line 3741 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3744 "profile.c"
    {
#line 3746 "profile.c"
      profile____Compare____call_site_kind_and_callee_1_0(((MR_Word) profile__wrapper_arg_1), &profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_3), ((MR_Word) profile__wrapper_arg_4));
    }
#line 3749 "profile.c"
    *profile__wrapper_arg_2 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3751 "profile.c"
  }
#line 3753 "profile.c"
}

#line 3756 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_0_0_10001(
#line 3759 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3761 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3763 "profile.c"
{
#line 3765 "profile.c"
  {
#line 3767 "profile.c"
    MR_bool profile__succeeded;

#line 3770 "profile.c"
    {
#line 3772 "profile.c"
      profile__succeeded = profile____Unify____call_site_kind_and_callee_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3775 "profile.c"
    return profile__succeeded;
#line 3777 "profile.c"
  }
#line 3779 "profile.c"
}

#line 3782 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_and_callee_0_0_10001(
#line 3785 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3787 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3789 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3791 "profile.c"
{
#line 3793 "profile.c"
  {
#line 3795 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3798 "profile.c"
    {
#line 3800 "profile.c"
      profile____Compare____call_site_kind_and_callee_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3803 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3805 "profile.c"
  }
#line 3807 "profile.c"
}

#line 3810 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_info_1_0_10001(
#line 3813 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3815 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3817 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3819 "profile.c"
{
#line 3821 "profile.c"
  {
#line 3823 "profile.c"
    MR_bool profile__succeeded;

#line 3826 "profile.c"
    {
#line 3828 "profile.c"
      profile__succeeded = profile____Unify____call_site_kind_and_info_1_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3831 "profile.c"
    return profile__succeeded;
#line 3833 "profile.c"
  }
#line 3835 "profile.c"
}

#line 3838 "profile.c"
static void MR_CALL 
profile____Compare____call_site_kind_and_info_1_0_10001(
#line 3841 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3843 "profile.c"
  MR_Box * profile__wrapper_arg_2,
#line 3845 "profile.c"
  MR_Box profile__wrapper_arg_3,
#line 3847 "profile.c"
  MR_Box profile__wrapper_arg_4)
#line 3849 "profile.c"
{
#line 3851 "profile.c"
  {
#line 3853 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3856 "profile.c"
    {
#line 3858 "profile.c"
      profile____Compare____call_site_kind_and_info_1_0(((MR_Word) profile__wrapper_arg_1), &profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_3), ((MR_Word) profile__wrapper_arg_4));
    }
#line 3861 "profile.c"
    *profile__wrapper_arg_2 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3863 "profile.c"
  }
#line 3865 "profile.c"
}

#line 3868 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_static_0_0_10001(
#line 3871 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3873 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3875 "profile.c"
{
#line 3877 "profile.c"
  {
#line 3879 "profile.c"
    MR_bool profile__succeeded;

#line 3882 "profile.c"
    {
#line 3884 "profile.c"
      profile__succeeded = profile____Unify____call_site_static_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3887 "profile.c"
    return profile__succeeded;
#line 3889 "profile.c"
  }
#line 3891 "profile.c"
}

#line 3894 "profile.c"
static void MR_CALL 
profile____Compare____call_site_static_0_0_10001(
#line 3897 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3899 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3901 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3903 "profile.c"
{
#line 3905 "profile.c"
  {
#line 3907 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3910 "profile.c"
    {
#line 3912 "profile.c"
      profile____Compare____call_site_static_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 3915 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3917 "profile.c"
  }
#line 3919 "profile.c"
}

#line 3922 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_static_map_0_0_10001(
#line 3925 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3927 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3929 "profile.c"
{
#line 3931 "profile.c"
  {
#line 3933 "profile.c"
    MR_bool profile__succeeded;

#line 3936 "profile.c"
    {
#line 3938 "profile.c"
      profile__succeeded = profile____Unify____call_site_static_map_0_0(((MR_ArrayPtr) profile__wrapper_arg_1), ((MR_ArrayPtr) profile__wrapper_arg_2));
    }
#line 3941 "profile.c"
    return profile__succeeded;
#line 3943 "profile.c"
  }
#line 3945 "profile.c"
}

#line 3948 "profile.c"
static void MR_CALL 
profile____Compare____call_site_static_map_0_0_10001(
#line 3951 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 3953 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 3955 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 3957 "profile.c"
{
#line 3959 "profile.c"
  {
#line 3961 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 3964 "profile.c"
    {
#line 3966 "profile.c"
      profile____Compare____call_site_static_map_0_0(&profile__conv0_HeadVar__1_1, ((MR_ArrayPtr) profile__wrapper_arg_2), ((MR_ArrayPtr) profile__wrapper_arg_3));
    }
#line 3969 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 3971 "profile.c"
  }
#line 3973 "profile.c"
}

#line 3976 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_static_ptr_0_0_10001(
#line 3979 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 3981 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 3983 "profile.c"
{
#line 3985 "profile.c"
  {
#line 3987 "profile.c"
    MR_bool profile__succeeded;

#line 3990 "profile.c"
    {
#line 3992 "profile.c"
      profile__succeeded = profile____Unify____call_site_static_ptr_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 3995 "profile.c"
    return profile__succeeded;
#line 3997 "profile.c"
  }
#line 3999 "profile.c"
}

#line 4002 "profile.c"
static void MR_CALL 
profile____Compare____call_site_static_ptr_0_0_10001(
#line 4005 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4007 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4009 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4011 "profile.c"
{
#line 4013 "profile.c"
  {
#line 4015 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4018 "profile.c"
    {
#line 4020 "profile.c"
      profile____Compare____call_site_static_ptr_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4023 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4025 "profile.c"
  }
#line 4027 "profile.c"
}

#line 4030 "profile.c"
static MR_bool MR_CALL 
profile____Unify____call_site_statics_0_0_10001(
#line 4033 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4035 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4037 "profile.c"
{
#line 4039 "profile.c"
  {
#line 4041 "profile.c"
    MR_bool profile__succeeded;

#line 4044 "profile.c"
    {
#line 4046 "profile.c"
      profile__succeeded = profile____Unify____call_site_statics_0_0(((MR_ArrayPtr) profile__wrapper_arg_1), ((MR_ArrayPtr) profile__wrapper_arg_2));
    }
#line 4049 "profile.c"
    return profile__succeeded;
#line 4051 "profile.c"
  }
#line 4053 "profile.c"
}

#line 4056 "profile.c"
static void MR_CALL 
profile____Compare____call_site_statics_0_0_10001(
#line 4059 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4061 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4063 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4065 "profile.c"
{
#line 4067 "profile.c"
  {
#line 4069 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4072 "profile.c"
    {
#line 4074 "profile.c"
      profile____Compare____call_site_statics_0_0(&profile__conv0_HeadVar__1_1, ((MR_ArrayPtr) profile__wrapper_arg_2), ((MR_ArrayPtr) profile__wrapper_arg_3));
    }
#line 4077 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4079 "profile.c"
  }
#line 4081 "profile.c"
}

#line 4084 "profile.c"
static MR_bool MR_CALL 
profile____Unify____canonical_flag_0_0_10001(
#line 4087 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4089 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4091 "profile.c"
{
#line 4093 "profile.c"
  {
#line 4095 "profile.c"
    MR_bool profile__succeeded;

#line 4098 "profile.c"
    {
#line 4100 "profile.c"
      profile__succeeded = profile____Unify____canonical_flag_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4103 "profile.c"
    return profile__succeeded;
#line 4105 "profile.c"
  }
#line 4107 "profile.c"
}

#line 4110 "profile.c"
static void MR_CALL 
profile____Compare____canonical_flag_0_0_10001(
#line 4113 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4115 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4117 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4119 "profile.c"
{
#line 4121 "profile.c"
  {
#line 4123 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4126 "profile.c"
    {
#line 4128 "profile.c"
      profile____Compare____canonical_flag_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4131 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4133 "profile.c"
  }
#line 4135 "profile.c"
}

#line 4138 "profile.c"
static MR_bool MR_CALL 
profile____Unify____clique_ptr_0_0_10001(
#line 4141 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4143 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4145 "profile.c"
{
#line 4147 "profile.c"
  {
#line 4149 "profile.c"
    MR_bool profile__succeeded;

#line 4152 "profile.c"
    {
#line 4154 "profile.c"
      profile__succeeded = profile____Unify____clique_ptr_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4157 "profile.c"
    return profile__succeeded;
#line 4159 "profile.c"
  }
#line 4161 "profile.c"
}

#line 4164 "profile.c"
static void MR_CALL 
profile____Compare____clique_ptr_0_0_10001(
#line 4167 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4169 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4171 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4173 "profile.c"
{
#line 4175 "profile.c"
  {
#line 4177 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4180 "profile.c"
    {
#line 4182 "profile.c"
      profile____Compare____clique_ptr_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4185 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4187 "profile.c"
  }
#line 4189 "profile.c"
}

#line 4192 "profile.c"
static MR_bool MR_CALL 
profile____Unify____compensation_table_0_0_10001(
#line 4195 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4197 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4199 "profile.c"
{
#line 4201 "profile.c"
  {
#line 4203 "profile.c"
    MR_bool profile__succeeded;

#line 4206 "profile.c"
    {
#line 4208 "profile.c"
      profile__succeeded = profile____Unify____compensation_table_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4211 "profile.c"
    return profile__succeeded;
#line 4213 "profile.c"
  }
#line 4215 "profile.c"
}

#line 4218 "profile.c"
static void MR_CALL 
profile____Compare____compensation_table_0_0_10001(
#line 4221 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4223 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4225 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4227 "profile.c"
{
#line 4229 "profile.c"
  {
#line 4231 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4234 "profile.c"
    {
#line 4236 "profile.c"
      profile____Compare____compensation_table_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4239 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4241 "profile.c"
  }
#line 4243 "profile.c"
}

#line 4246 "profile.c"
static MR_bool MR_CALL 
profile____Unify____coverage_data_type_0_0_10001(
#line 4249 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4251 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4253 "profile.c"
{
#line 4255 "profile.c"
  {
#line 4257 "profile.c"
    MR_bool profile__succeeded;

#line 4260 "profile.c"
    {
#line 4262 "profile.c"
      profile__succeeded = profile____Unify____coverage_data_type_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4265 "profile.c"
    return profile__succeeded;
#line 4267 "profile.c"
  }
#line 4269 "profile.c"
}

#line 4272 "profile.c"
static void MR_CALL 
profile____Compare____coverage_data_type_0_0_10001(
#line 4275 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4277 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4279 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4281 "profile.c"
{
#line 4283 "profile.c"
  {
#line 4285 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4288 "profile.c"
    {
#line 4290 "profile.c"
      profile____Compare____coverage_data_type_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4293 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4295 "profile.c"
  }
#line 4297 "profile.c"
}

#line 4300 "profile.c"
static MR_bool MR_CALL 
profile____Unify____deep_0_0_10001(
#line 4303 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4305 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4307 "profile.c"
{
#line 4309 "profile.c"
  {
#line 4311 "profile.c"
    MR_bool profile__succeeded;

#line 4314 "profile.c"
    {
#line 4316 "profile.c"
      profile__succeeded = profile____Unify____deep_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4319 "profile.c"
    return profile__succeeded;
#line 4321 "profile.c"
  }
#line 4323 "profile.c"
}

#line 4326 "profile.c"
static void MR_CALL 
profile____Compare____deep_0_0_10001(
#line 4329 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4331 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4333 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4335 "profile.c"
{
#line 4337 "profile.c"
  {
#line 4339 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4342 "profile.c"
    {
#line 4344 "profile.c"
      profile____Compare____deep_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4347 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4349 "profile.c"
  }
#line 4351 "profile.c"
}

#line 4354 "profile.c"
static MR_bool MR_CALL 
profile____Unify____deep_compression_flag_0_0_10001(
#line 4357 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4359 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4361 "profile.c"
{
#line 4363 "profile.c"
  {
#line 4365 "profile.c"
    MR_bool profile__succeeded;

#line 4368 "profile.c"
    {
#line 4370 "profile.c"
      profile__succeeded = profile____Unify____deep_compression_flag_0_0();
    }
#line 4373 "profile.c"
    return profile__succeeded;
#line 4375 "profile.c"
  }
#line 4377 "profile.c"
}

#line 4380 "profile.c"
static void MR_CALL 
profile____Compare____deep_compression_flag_0_0_10001(
#line 4383 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4385 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4387 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4389 "profile.c"
{
#line 4391 "profile.c"
  {
#line 4393 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4396 "profile.c"
    {
#line 4398 "profile.c"
      profile____Compare____deep_compression_flag_0_0(&profile__conv0_HeadVar__1_1);
    }
#line 4401 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4403 "profile.c"
  }
#line 4405 "profile.c"
}

#line 4408 "profile.c"
static MR_bool MR_CALL 
profile____Unify____deep_flags_0_0_10001(
#line 4411 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4413 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4415 "profile.c"
{
#line 4417 "profile.c"
  {
#line 4419 "profile.c"
    MR_bool profile__succeeded;

#line 4422 "profile.c"
    {
#line 4424 "profile.c"
      profile__succeeded = profile____Unify____deep_flags_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4427 "profile.c"
    return profile__succeeded;
#line 4429 "profile.c"
  }
#line 4431 "profile.c"
}

#line 4434 "profile.c"
static void MR_CALL 
profile____Compare____deep_flags_0_0_10001(
#line 4437 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4439 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4441 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4443 "profile.c"
{
#line 4445 "profile.c"
  {
#line 4447 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4450 "profile.c"
    {
#line 4452 "profile.c"
      profile____Compare____deep_flags_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4455 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4457 "profile.c"
  }
#line 4459 "profile.c"
}

#line 4462 "profile.c"
static MR_bool MR_CALL 
profile____Unify____initial_deep_0_0_10001(
#line 4465 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4467 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4469 "profile.c"
{
#line 4471 "profile.c"
  {
#line 4473 "profile.c"
    MR_bool profile__succeeded;

#line 4476 "profile.c"
    {
#line 4478 "profile.c"
      profile__succeeded = profile____Unify____initial_deep_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4481 "profile.c"
    return profile__succeeded;
#line 4483 "profile.c"
  }
#line 4485 "profile.c"
}

#line 4488 "profile.c"
static void MR_CALL 
profile____Compare____initial_deep_0_0_10001(
#line 4491 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4493 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4495 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4497 "profile.c"
{
#line 4499 "profile.c"
  {
#line 4501 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4504 "profile.c"
    {
#line 4506 "profile.c"
      profile____Compare____initial_deep_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4509 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4511 "profile.c"
  }
#line 4513 "profile.c"
}

#line 4516 "profile.c"
static MR_bool MR_CALL 
profile____Unify____is_zeroed_0_0_10001(
#line 4519 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4521 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4523 "profile.c"
{
#line 4525 "profile.c"
  {
#line 4527 "profile.c"
    MR_bool profile__succeeded;

#line 4530 "profile.c"
    {
#line 4532 "profile.c"
      profile__succeeded = profile____Unify____is_zeroed_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4535 "profile.c"
    return profile__succeeded;
#line 4537 "profile.c"
  }
#line 4539 "profile.c"
}

#line 4542 "profile.c"
static void MR_CALL 
profile____Compare____is_zeroed_0_0_10001(
#line 4545 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4547 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4549 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4551 "profile.c"
{
#line 4553 "profile.c"
  {
#line 4555 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4558 "profile.c"
    {
#line 4560 "profile.c"
      profile____Compare____is_zeroed_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4563 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4565 "profile.c"
  }
#line 4567 "profile.c"
}

#line 4570 "profile.c"
static MR_bool MR_CALL 
profile____Unify____module_data_0_0_10001(
#line 4573 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4575 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4577 "profile.c"
{
#line 4579 "profile.c"
  {
#line 4581 "profile.c"
    MR_bool profile__succeeded;

#line 4584 "profile.c"
    {
#line 4586 "profile.c"
      profile__succeeded = profile____Unify____module_data_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4589 "profile.c"
    return profile__succeeded;
#line 4591 "profile.c"
  }
#line 4593 "profile.c"
}

#line 4596 "profile.c"
static void MR_CALL 
profile____Compare____module_data_0_0_10001(
#line 4599 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4601 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4603 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4605 "profile.c"
{
#line 4607 "profile.c"
  {
#line 4609 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4612 "profile.c"
    {
#line 4614 "profile.c"
      profile____Compare____module_data_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4617 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4619 "profile.c"
  }
#line 4621 "profile.c"
}

#line 4624 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_dynamic_0_0_10001(
#line 4627 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4629 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4631 "profile.c"
{
#line 4633 "profile.c"
  {
#line 4635 "profile.c"
    MR_bool profile__succeeded;

#line 4638 "profile.c"
    {
#line 4640 "profile.c"
      profile__succeeded = profile____Unify____proc_dynamic_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4643 "profile.c"
    return profile__succeeded;
#line 4645 "profile.c"
  }
#line 4647 "profile.c"
}

#line 4650 "profile.c"
static void MR_CALL 
profile____Compare____proc_dynamic_0_0_10001(
#line 4653 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4655 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4657 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4659 "profile.c"
{
#line 4661 "profile.c"
  {
#line 4663 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4666 "profile.c"
    {
#line 4668 "profile.c"
      profile____Compare____proc_dynamic_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4671 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4673 "profile.c"
  }
#line 4675 "profile.c"
}

#line 4678 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_dynamic_ptr_0_0_10001(
#line 4681 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4683 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4685 "profile.c"
{
#line 4687 "profile.c"
  {
#line 4689 "profile.c"
    MR_bool profile__succeeded;

#line 4692 "profile.c"
    {
#line 4694 "profile.c"
      profile__succeeded = profile____Unify____proc_dynamic_ptr_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4697 "profile.c"
    return profile__succeeded;
#line 4699 "profile.c"
  }
#line 4701 "profile.c"
}

#line 4704 "profile.c"
static void MR_CALL 
profile____Compare____proc_dynamic_ptr_0_0_10001(
#line 4707 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4709 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4711 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4713 "profile.c"
{
#line 4715 "profile.c"
  {
#line 4717 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4720 "profile.c"
    {
#line 4722 "profile.c"
      profile____Compare____proc_dynamic_ptr_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4725 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4727 "profile.c"
  }
#line 4729 "profile.c"
}

#line 4732 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_dynamics_0_0_10001(
#line 4735 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4737 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4739 "profile.c"
{
#line 4741 "profile.c"
  {
#line 4743 "profile.c"
    MR_bool profile__succeeded;

#line 4746 "profile.c"
    {
#line 4748 "profile.c"
      profile__succeeded = profile____Unify____proc_dynamics_0_0(((MR_ArrayPtr) profile__wrapper_arg_1), ((MR_ArrayPtr) profile__wrapper_arg_2));
    }
#line 4751 "profile.c"
    return profile__succeeded;
#line 4753 "profile.c"
  }
#line 4755 "profile.c"
}

#line 4758 "profile.c"
static void MR_CALL 
profile____Compare____proc_dynamics_0_0_10001(
#line 4761 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4763 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4765 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4767 "profile.c"
{
#line 4769 "profile.c"
  {
#line 4771 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4774 "profile.c"
    {
#line 4776 "profile.c"
      profile____Compare____proc_dynamics_0_0(&profile__conv0_HeadVar__1_1, ((MR_ArrayPtr) profile__wrapper_arg_2), ((MR_ArrayPtr) profile__wrapper_arg_3));
    }
#line 4779 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4781 "profile.c"
  }
#line 4783 "profile.c"
}

#line 4786 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_static_0_0_10001(
#line 4789 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4791 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4793 "profile.c"
{
#line 4795 "profile.c"
  {
#line 4797 "profile.c"
    MR_bool profile__succeeded;

#line 4800 "profile.c"
    {
#line 4802 "profile.c"
      profile__succeeded = profile____Unify____proc_static_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4805 "profile.c"
    return profile__succeeded;
#line 4807 "profile.c"
  }
#line 4809 "profile.c"
}

#line 4812 "profile.c"
static void MR_CALL 
profile____Compare____proc_static_0_0_10001(
#line 4815 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4817 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4819 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4821 "profile.c"
{
#line 4823 "profile.c"
  {
#line 4825 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4828 "profile.c"
    {
#line 4830 "profile.c"
      profile____Compare____proc_static_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4833 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4835 "profile.c"
  }
#line 4837 "profile.c"
}

#line 4840 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_static_ptr_0_0_10001(
#line 4843 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4845 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4847 "profile.c"
{
#line 4849 "profile.c"
  {
#line 4851 "profile.c"
    MR_bool profile__succeeded;

#line 4854 "profile.c"
    {
#line 4856 "profile.c"
      profile__succeeded = profile____Unify____proc_static_ptr_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4859 "profile.c"
    return profile__succeeded;
#line 4861 "profile.c"
  }
#line 4863 "profile.c"
}

#line 4866 "profile.c"
static void MR_CALL 
profile____Compare____proc_static_ptr_0_0_10001(
#line 4869 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4871 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4873 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4875 "profile.c"
{
#line 4877 "profile.c"
  {
#line 4879 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4882 "profile.c"
    {
#line 4884 "profile.c"
      profile____Compare____proc_static_ptr_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4887 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4889 "profile.c"
  }
#line 4891 "profile.c"
}

#line 4894 "profile.c"
static MR_bool MR_CALL 
profile____Unify____proc_statics_0_0_10001(
#line 4897 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4899 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4901 "profile.c"
{
#line 4903 "profile.c"
  {
#line 4905 "profile.c"
    MR_bool profile__succeeded;

#line 4908 "profile.c"
    {
#line 4910 "profile.c"
      profile__succeeded = profile____Unify____proc_statics_0_0(((MR_ArrayPtr) profile__wrapper_arg_1), ((MR_ArrayPtr) profile__wrapper_arg_2));
    }
#line 4913 "profile.c"
    return profile__succeeded;
#line 4915 "profile.c"
  }
#line 4917 "profile.c"
}

#line 4920 "profile.c"
static void MR_CALL 
profile____Compare____proc_statics_0_0_10001(
#line 4923 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4925 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4927 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4929 "profile.c"
{
#line 4931 "profile.c"
  {
#line 4933 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4936 "profile.c"
    {
#line 4938 "profile.c"
      profile____Compare____proc_statics_0_0(&profile__conv0_HeadVar__1_1, ((MR_ArrayPtr) profile__wrapper_arg_2), ((MR_ArrayPtr) profile__wrapper_arg_3));
    }
#line 4941 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4943 "profile.c"
  }
#line 4945 "profile.c"
}

#line 4948 "profile.c"
static MR_bool MR_CALL 
profile____Unify____profile_stats_0_0_10001(
#line 4951 "profile.c"
  MR_Box profile__wrapper_arg_1,
#line 4953 "profile.c"
  MR_Box profile__wrapper_arg_2)
#line 4955 "profile.c"
{
#line 4957 "profile.c"
  {
#line 4959 "profile.c"
    MR_bool profile__succeeded;

#line 4962 "profile.c"
    {
#line 4964 "profile.c"
      profile__succeeded = profile____Unify____profile_stats_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
#line 4967 "profile.c"
    return profile__succeeded;
#line 4969 "profile.c"
  }
#line 4971 "profile.c"
}

#line 4974 "profile.c"
static void MR_CALL 
profile____Compare____profile_stats_0_0_10001(
#line 4977 "profile.c"
  MR_Box * profile__wrapper_arg_1,
#line 4979 "profile.c"
  MR_Box profile__wrapper_arg_2,
#line 4981 "profile.c"
  MR_Box profile__wrapper_arg_3)
#line 4983 "profile.c"
{
#line 4985 "profile.c"
  {
#line 4987 "profile.c"
    MR_Word profile__conv0_HeadVar__1_1;

#line 4990 "profile.c"
    {
#line 4992 "profile.c"
      profile____Compare____profile_stats_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
#line 4995 "profile.c"
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
#line 4997 "profile.c"
  }
#line 4999 "profile.c"
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
#line 5059 "profile.c"
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
#line 5113 "profile.c"
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
#line 5133 "profile.c"
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
#line 5153 "profile.c"
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
#line 5173 "profile.c"
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
#line 5193 "profile.c"
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
#line 5213 "profile.c"
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
#line 5233 "profile.c"
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
#line 5253 "profile.c"
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
#line 5273 "profile.c"
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

#line 5382 "profile.c"
        profile__succeeded = (strcmp(profile__V_3_3, profile__V_13_13) == 0);
#line 55 "profile.m"
        if (profile__succeeded)
#line 55 "profile.m"
          {
#line 5388 "profile.c"
            profile__succeeded = (profile__V_4_4 == profile__V_14_14);
#line 55 "profile.m"
            if (profile__succeeded)
#line 55 "profile.m"
              {
#line 5394 "profile.c"
                profile__succeeded = (profile__V_5_5 == profile__V_15_15);
#line 55 "profile.m"
                if (profile__succeeded)
#line 55 "profile.m"
                  {
#line 5400 "profile.c"
                    profile__succeeded = (profile__V_6_6 == profile__V_16_16);
#line 55 "profile.m"
                    if (profile__succeeded)
#line 55 "profile.m"
                      {
#line 5406 "profile.c"
                        profile__succeeded = (profile__V_7_7 == profile__V_17_17);
#line 55 "profile.m"
                        if (profile__succeeded)
#line 55 "profile.m"
                          {
#line 5412 "profile.c"
                            profile__succeeded = (profile__V_8_8 == profile__V_18_18);
#line 55 "profile.m"
                            if (profile__succeeded)
#line 55 "profile.m"
                              {
#line 5418 "profile.c"
                                profile__succeeded = (profile__V_9_9 == profile__V_19_19);
#line 55 "profile.m"
                                if (profile__succeeded)
#line 55 "profile.m"
                                  {
#line 5424 "profile.c"
                                    profile__succeeded = (profile__V_10_10 == profile__V_20_20);
#line 55 "profile.m"
                                    if (profile__succeeded)
#line 55 "profile.m"
                                      {
#line 5430 "profile.c"
                                        profile__succeeded = (profile__V_11_11 == profile__V_21_21);
#line 55 "profile.m"
                                        if (profile__succeeded)
#line 5434 "profile.c"
                                          {
#line 5436 "profile.c"
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
#line 5550 "profile.c"
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

#line 5608 "profile.c"
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
#line 5643 "profile.c"
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
#line 5705 "profile.c"
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
#line 5725 "profile.c"
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
#line 5745 "profile.c"
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
#line 5765 "profile.c"
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
#line 5785 "profile.c"
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
#line 5805 "profile.c"
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
#line 5825 "profile.c"
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
#line 5849 "profile.c"
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
#line 5869 "profile.c"
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
#line 5889 "profile.c"
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
#line 5909 "profile.c"
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

#line 6045 "profile.c"
        {
#line 6047 "profile.c"
          profile__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(profile__V_3_3, profile__V_15_15);
        }
#line 205 "profile.m"
        if (profile__succeeded)
#line 205 "profile.m"
          {
#line 6054 "profile.c"
            profile__succeeded = (strcmp(profile__V_4_4, profile__V_16_16) == 0);
#line 205 "profile.m"
            if (profile__succeeded)
#line 205 "profile.m"
              {
#line 6060 "profile.c"
                profile__succeeded = (strcmp(profile__V_5_5, profile__V_17_17) == 0);
#line 205 "profile.m"
                if (profile__succeeded)
#line 205 "profile.m"
                  {
#line 6066 "profile.c"
                    profile__succeeded = (strcmp(profile__V_6_6, profile__V_18_18) == 0);
#line 205 "profile.m"
                    if (profile__succeeded)
#line 205 "profile.m"
                      {
#line 6072 "profile.c"
                        profile__succeeded = (strcmp(profile__V_7_7, profile__V_19_19) == 0);
#line 205 "profile.m"
                        if (profile__succeeded)
#line 205 "profile.m"
                          {
#line 6078 "profile.c"
                            profile__succeeded = (strcmp(profile__V_8_8, profile__V_20_20) == 0);
#line 205 "profile.m"
                            if (profile__succeeded)
#line 205 "profile.m"
                              {
#line 6084 "profile.c"
                                profile__succeeded = (profile__V_9_9 == profile__V_21_21);
#line 205 "profile.m"
                                if (profile__succeeded)
#line 205 "profile.m"
                                  {
#line 6090 "profile.c"
                                    profile__succeeded = (profile__V_10_10 == profile__V_22_22);
#line 205 "profile.m"
                                    if (profile__succeeded)
#line 205 "profile.m"
                                      {
#line 6096 "profile.c"
                                        profile__TypeCtorInfo_30_30 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
#line 6098 "profile.c"
                                        {
#line 6100 "profile.c"
                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_30_30, (MR_ArrayPtr) profile__V_11_11, (MR_ArrayPtr) profile__V_23_23);
                                        }
#line 205 "profile.m"
                                        if (profile__succeeded)
#line 205 "profile.m"
                                          {
#line 6107 "profile.c"
                                            profile__TypeCtorInfo_31_31 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;
#line 6109 "profile.c"
                                            {
#line 6111 "profile.c"
                                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_31_31, (MR_ArrayPtr) profile__V_12_12, (MR_ArrayPtr) profile__V_24_24);
                                            }
#line 205 "profile.m"
                                            if (profile__succeeded)
#line 205 "profile.m"
                                              {
#line 6118 "profile.c"
                                                profile__TypeInfo_32_32 = (MR_Word) &profile_scalar_common_1[25];
#line 6120 "profile.c"
                                                {
#line 6122 "profile.c"
                                                  profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_32_32, ((MR_Box) (profile__V_13_13)), ((MR_Box) (profile__V_25_25)));
                                                }
#line 205 "profile.m"
                                                if (profile__succeeded)
#line 6127 "profile.c"
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
#line 6244 "profile.c"
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

#line 6302 "profile.c"
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
#line 6337 "profile.c"
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
#line 6367 "profile.c"
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
#line 6387 "profile.c"
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

#line 6481 "profile.c"
            profile__succeeded = (profile__V_13_13 == profile__V_14_14);
#line 179 "profile.m"
          }
#line 193 "profile.m"
        if (profile__succeeded)
#line 193 "profile.m"
          {
#line 6489 "profile.c"
            profile__TypeCtorInfo_11_11 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
#line 6491 "profile.c"
            {
#line 6493 "profile.c"
              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_11_11, (MR_ArrayPtr) profile__V_4_4, (MR_ArrayPtr) profile__V_7_7);
            }
#line 193 "profile.m"
            if (profile__succeeded)
#line 193 "profile.m"
              {
#line 6500 "profile.c"
                profile__TypeInfo_12_12 = (MR_Word) &profile_scalar_common_1[25];
#line 6502 "profile.c"
                {
#line 6504 "profile.c"
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
#line 6544 "profile.c"
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
#line 6570 "profile.c"
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
#line 6590 "profile.c"
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

#line 6663 "profile.c"
        {
#line 6665 "profile.c"
          profile__succeeded = measurements____Unify____own_prof_info_0_0(profile__V_3_3, profile__V_6_6);
        }
#line 158 "profile.m"
        if (profile__succeeded)
#line 158 "profile.m"
          {
#line 6672 "profile.c"
            {
#line 6674 "profile.c"
              profile__succeeded = measurements____Unify____inherit_prof_info_0_0(profile__V_4_4, profile__V_7_7);
            }
#line 158 "profile.m"
            if (profile__succeeded)
#line 158 "profile.m"
              {
#line 6681 "profile.c"
                profile__TypeInfo_13_13 = (MR_Word) &profile_scalar_common_1[22];
#line 6683 "profile.c"
                {
#line 6685 "profile.c"
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
#line 6742 "profile.c"
  {
#line 6744 "profile.c"
    MR_bool profile__succeeded = (profile__HeadVar__2_1 == profile__HeadVar__2_2);

#line 6747 "profile.c"
    return profile__succeeded;
#line 6749 "profile.c"
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
#line 6778 "profile.c"
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
#line 6816 "profile.c"
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
#line 6840 "profile.c"
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
#line 6860 "profile.c"
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
#line 6880 "profile.c"
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
#line 6900 "profile.c"
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

#line 7001 "profile.c"
        {
#line 7003 "profile.c"
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

#line 7029 "profile.c"
                profile__succeeded = (profile__V_21_21 == profile__V_22_22);
#line 176 "profile.m"
              }
#line 69 "profile.m"
            if (profile__succeeded)
#line 69 "profile.m"
              {
#line 7037 "profile.c"
                profile__TypeCtorInfo_17_17 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
#line 7039 "profile.c"
                {
#line 7041 "profile.c"
                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_17_17, (MR_ArrayPtr) profile__V_5_5, (MR_ArrayPtr) profile__V_11_11);
                }
#line 69 "profile.m"
                if (profile__succeeded)
#line 69 "profile.m"
                  {
#line 7048 "profile.c"
                    profile__TypeCtorInfo_18_18 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
#line 7050 "profile.c"
                    {
#line 7052 "profile.c"
                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_18_18, (MR_ArrayPtr) profile__V_6_6, (MR_ArrayPtr) profile__V_12_12);
                    }
#line 69 "profile.m"
                    if (profile__succeeded)
#line 69 "profile.m"
                      {
#line 7059 "profile.c"
                        profile__TypeCtorInfo_19_19 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_0;
#line 7061 "profile.c"
                        {
#line 7063 "profile.c"
                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_19_19, (MR_ArrayPtr) profile__V_7_7, (MR_ArrayPtr) profile__V_13_13);
                        }
#line 69 "profile.m"
                        if (profile__succeeded)
#line 69 "profile.m"
                          {
#line 7070 "profile.c"
                            profile__TypeCtorInfo_20_20 = (MR_Word) &profile__profile__type_ctor_info_proc_static_0;
#line 7072 "profile.c"
                            {
#line 7074 "profile.c"
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
#line 7120 "profile.c"
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
#line 7146 "profile.c"
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
#line 7170 "profile.c"
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

#line 7246 "profile.c"
        profile__succeeded = (profile__V_3_3 == profile__V_7_7);
#line 47 "profile.m"
        if (profile__succeeded)
#line 47 "profile.m"
          {
#line 7252 "profile.c"
            profile__succeeded = (profile__V_4_4 == profile__V_8_8);
#line 47 "profile.m"
            if (profile__succeeded)
#line 7256 "profile.c"
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
#line 7339 "profile.c"
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
#line 7469 "profile.c"
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
#line 7489 "profile.c"
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
#line 7509 "profile.c"
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
#line 7529 "profile.c"
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
#line 7553 "profile.c"
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
#line 7573 "profile.c"
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
#line 7593 "profile.c"
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
#line 7613 "profile.c"
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
#line 7633 "profile.c"
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
#line 7653 "profile.c"
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
#line 7673 "profile.c"
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
#line 7693 "profile.c"
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
#line 7713 "profile.c"
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
#line 7733 "profile.c"
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
#line 7753 "profile.c"
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
#line 7773 "profile.c"
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
#line 7793 "profile.c"
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
#line 7813 "profile.c"
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
#line 7833 "profile.c"
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
#line 7853 "profile.c"
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
#line 7873 "profile.c"
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
#line 7893 "profile.c"
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
#line 7913 "profile.c"
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
#line 7933 "profile.c"
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
#line 7953 "profile.c"
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
#line 7973 "profile.c"
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
#line 7993 "profile.c"
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
#line 8013 "profile.c"
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

#line 8290 "profile.c"
        {
#line 8292 "profile.c"
          profile__succeeded = profile____Unify____profile_stats_0_0(profile__V_3_3, profile__V_32_32);
        }
#line 82 "profile.m"
        if (profile__succeeded)
#line 82 "profile.m"
          {
#line 8299 "profile.c"
            profile__succeeded = (strcmp(profile__V_4_4, profile__V_33_33) == 0);
#line 82 "profile.m"
            if (profile__succeeded)
#line 82 "profile.m"
              {
#line 8305 "profile.c"
                profile__succeeded = (strcmp(profile__V_5_5, profile__V_34_34) == 0);
#line 82 "profile.m"
                if (profile__succeeded)
#line 82 "profile.m"
                  {
#line 8311 "profile.c"
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

#line 8336 "profile.c"
                            profile__succeeded = (profile__V_87_87 == profile__V_88_88);
#line 176 "profile.m"
                          }
#line 82 "profile.m"
                        if (profile__succeeded)
#line 82 "profile.m"
                          {
#line 8344 "profile.c"
                            profile__TypeCtorInfo_63_63 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
#line 8346 "profile.c"
                            {
#line 8348 "profile.c"
                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_63_63, (MR_ArrayPtr) profile__V_8_8, (MR_ArrayPtr) profile__V_37_37);
                            }
#line 82 "profile.m"
                            if (profile__succeeded)
#line 82 "profile.m"
                              {
#line 8355 "profile.c"
                                profile__TypeCtorInfo_64_64 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
#line 8357 "profile.c"
                                {
#line 8359 "profile.c"
                                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_64_64, (MR_ArrayPtr) profile__V_9_9, (MR_ArrayPtr) profile__V_38_38);
                                }
#line 82 "profile.m"
                                if (profile__succeeded)
#line 82 "profile.m"
                                  {
#line 8366 "profile.c"
                                    profile__TypeCtorInfo_65_65 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_0;
#line 8368 "profile.c"
                                    {
#line 8370 "profile.c"
                                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_65_65, (MR_ArrayPtr) profile__V_10_10, (MR_ArrayPtr) profile__V_39_39);
                                    }
#line 82 "profile.m"
                                    if (profile__succeeded)
#line 82 "profile.m"
                                      {
#line 8377 "profile.c"
                                        profile__TypeCtorInfo_66_66 = (MR_Word) &profile__profile__type_ctor_info_proc_static_0;
#line 8379 "profile.c"
                                        {
#line 8381 "profile.c"
                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_66_66, (MR_ArrayPtr) profile__V_11_11, (MR_ArrayPtr) profile__V_40_40);
                                        }
#line 82 "profile.m"
                                        if (profile__succeeded)
#line 82 "profile.m"
                                          {
#line 8388 "profile.c"
                                            profile__TypeCtorInfo_67_67 = (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0;
#line 8390 "profile.c"
                                            {
#line 8392 "profile.c"
                                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_67_67, (MR_ArrayPtr) profile__V_12_12, (MR_ArrayPtr) profile__V_41_41);
                                            }
#line 82 "profile.m"
                                            if (profile__succeeded)
#line 82 "profile.m"
                                              {
#line 8399 "profile.c"
                                                profile__TypeInfo_68_68 = (MR_Word) &profile_scalar_common_1[0];
#line 8401 "profile.c"
                                                {
#line 8403 "profile.c"
                                                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_68_68, (MR_ArrayPtr) profile__V_13_13, (MR_ArrayPtr) profile__V_42_42);
                                                }
#line 82 "profile.m"
                                                if (profile__succeeded)
#line 82 "profile.m"
                                                  {
#line 8410 "profile.c"
                                                    profile__TypeCtorInfo_69_69 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 8412 "profile.c"
                                                    {
#line 8414 "profile.c"
                                                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_69_69, (MR_ArrayPtr) profile__V_14_14, (MR_ArrayPtr) profile__V_43_43);
                                                    }
#line 82 "profile.m"
                                                    if (profile__succeeded)
#line 82 "profile.m"
                                                      {
#line 8421 "profile.c"
                                                        profile__TypeInfo_70_70 = (MR_Word) &profile_scalar_common_1[1];
#line 8423 "profile.c"
                                                        {
#line 8425 "profile.c"
                                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_70_70, (MR_ArrayPtr) profile__V_15_15, (MR_ArrayPtr) profile__V_44_44);
                                                        }
#line 82 "profile.m"
                                                        if (profile__succeeded)
#line 82 "profile.m"
                                                          {
#line 8432 "profile.c"
                                                            profile__TypeInfo_71_71 = (MR_Word) &profile_scalar_common_1[2];
#line 8434 "profile.c"
                                                            {
#line 8436 "profile.c"
                                                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_71_71, (MR_ArrayPtr) profile__V_16_16, (MR_ArrayPtr) profile__V_45_45);
                                                            }
#line 82 "profile.m"
                                                            if (profile__succeeded)
#line 82 "profile.m"
                                                              {
#line 8443 "profile.c"
                                                                profile__TypeCtorInfo_72_72 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
#line 8445 "profile.c"
                                                                {
#line 8447 "profile.c"
                                                                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_72_72, (MR_ArrayPtr) profile__V_17_17, (MR_ArrayPtr) profile__V_46_46);
                                                                }
#line 82 "profile.m"
                                                                if (profile__succeeded)
#line 82 "profile.m"
                                                                  {
#line 8454 "profile.c"
                                                                    profile__TypeInfo_73_73 = (MR_Word) &profile_scalar_common_2[0];
#line 8456 "profile.c"
                                                                    {
#line 8458 "profile.c"
                                                                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_73_73, (MR_ArrayPtr) profile__V_18_18, (MR_ArrayPtr) profile__V_47_47);
                                                                    }
#line 82 "profile.m"
                                                                    if (profile__succeeded)
#line 82 "profile.m"
                                                                      {
#line 8465 "profile.c"
                                                                        profile__TypeCtorInfo_74_74 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 8467 "profile.c"
                                                                        {
#line 8469 "profile.c"
                                                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_74_74, (MR_ArrayPtr) profile__V_19_19, (MR_ArrayPtr) profile__V_48_48);
                                                                        }
#line 82 "profile.m"
                                                                        if (profile__succeeded)
#line 82 "profile.m"
                                                                          {
#line 8476 "profile.c"
                                                                            profile__TypeCtorInfo_75_75 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 8478 "profile.c"
                                                                            {
#line 8480 "profile.c"
                                                                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_75_75, (MR_ArrayPtr) profile__V_20_20, (MR_ArrayPtr) profile__V_49_49);
                                                                            }
#line 82 "profile.m"
                                                                            if (profile__succeeded)
#line 82 "profile.m"
                                                                              {
#line 8487 "profile.c"
                                                                                profile__TypeCtorInfo_76_76 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 8489 "profile.c"
                                                                                {
#line 8491 "profile.c"
                                                                                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_76_76, (MR_ArrayPtr) profile__V_21_21, (MR_ArrayPtr) profile__V_50_50);
                                                                                }
#line 82 "profile.m"
                                                                                if (profile__succeeded)
#line 82 "profile.m"
                                                                                  {
#line 8498 "profile.c"
                                                                                    profile__TypeCtorInfo_77_77 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 8500 "profile.c"
                                                                                    {
#line 8502 "profile.c"
                                                                                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_77_77, (MR_ArrayPtr) profile__V_22_22, (MR_ArrayPtr) profile__V_51_51);
                                                                                    }
#line 82 "profile.m"
                                                                                    if (profile__succeeded)
#line 82 "profile.m"
                                                                                      {
#line 8509 "profile.c"
                                                                                        profile__TypeCtorInfo_78_78 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 8511 "profile.c"
                                                                                        {
#line 8513 "profile.c"
                                                                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_78_78, (MR_ArrayPtr) profile__V_23_23, (MR_ArrayPtr) profile__V_52_52);
                                                                                        }
#line 82 "profile.m"
                                                                                        if (profile__succeeded)
#line 82 "profile.m"
                                                                                          {
#line 8520 "profile.c"
                                                                                            profile__TypeCtorInfo_79_79 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 8522 "profile.c"
                                                                                            {
#line 8524 "profile.c"
                                                                                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_79_79, (MR_ArrayPtr) profile__V_24_24, (MR_ArrayPtr) profile__V_53_53);
                                                                                            }
#line 82 "profile.m"
                                                                                            if (profile__succeeded)
#line 82 "profile.m"
                                                                                              {
#line 8531 "profile.c"
                                                                                                profile__TypeCtorInfo_80_80 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 8533 "profile.c"
                                                                                                {
#line 8535 "profile.c"
                                                                                                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_80_80, (MR_ArrayPtr) profile__V_25_25, (MR_ArrayPtr) profile__V_54_54);
                                                                                                }
#line 82 "profile.m"
                                                                                                if (profile__succeeded)
#line 82 "profile.m"
                                                                                                  {
#line 8542 "profile.c"
                                                                                                    profile__TypeInfo_81_81 = (MR_Word) &profile_scalar_common_2[1];
#line 8544 "profile.c"
                                                                                                    {
#line 8546 "profile.c"
                                                                                                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_81_81, (MR_ArrayPtr) profile__V_26_26, (MR_ArrayPtr) profile__V_55_55);
                                                                                                    }
#line 82 "profile.m"
                                                                                                    if (profile__succeeded)
#line 82 "profile.m"
                                                                                                      {
#line 8553 "profile.c"
                                                                                                        profile__TypeInfo_82_82 = (MR_Word) &profile_scalar_common_2[1];
#line 8555 "profile.c"
                                                                                                        {
#line 8557 "profile.c"
                                                                                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_82_82, (MR_ArrayPtr) profile__V_27_27, (MR_ArrayPtr) profile__V_56_56);
                                                                                                        }
#line 82 "profile.m"
                                                                                                        if (profile__succeeded)
#line 82 "profile.m"
                                                                                                          {
#line 8564 "profile.c"
                                                                                                            profile__TypeInfo_83_83 = (MR_Word) &profile_scalar_common_2[2];
#line 8566 "profile.c"
                                                                                                            {
#line 8568 "profile.c"
                                                                                                              profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_83_83, ((MR_Box) (profile__V_28_28)), ((MR_Box) (profile__V_57_57)));
                                                                                                            }
#line 82 "profile.m"
                                                                                                            if (profile__succeeded)
#line 82 "profile.m"
                                                                                                              {
#line 8575 "profile.c"
                                                                                                                profile__TypeInfo_84_84 = (MR_Word) &profile_scalar_common_1[19];
#line 8577 "profile.c"
                                                                                                                {
#line 8579 "profile.c"
                                                                                                                  profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_84_84, ((MR_Box) (profile__V_29_29)), ((MR_Box) (profile__V_58_58)));
                                                                                                                }
#line 82 "profile.m"
                                                                                                                if (profile__succeeded)
#line 82 "profile.m"
                                                                                                                  {
#line 8586 "profile.c"
                                                                                                                    {
#line 8588 "profile.c"
                                                                                                                      profile__succeeded = exclude____Unify____exclude_file_0_0(profile__V_30_30, profile__V_59_59);
                                                                                                                    }
#line 82 "profile.m"
                                                                                                                    if (profile__succeeded)
#line 82 "profile.m"
                                                                                                                      {
#line 8595 "profile.c"
                                                                                                                        profile__TypeInfo_86_86 = (MR_Word) &profile_scalar_common_1[21];
#line 8597 "profile.c"
                                                                                                                        {
#line 8599 "profile.c"
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
#line 8708 "profile.c"
  {
#line 8710 "profile.c"
    MR_bool profile__succeeded = (profile__HeadVar__2_1 == profile__HeadVar__2_2);

#line 8713 "profile.c"
    return profile__succeeded;
#line 8715 "profile.c"
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
#line 8806 "profile.c"
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

#line 8864 "profile.c"
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
#line 8916 "profile.c"
  {
#line 8918 "profile.c"
    MR_bool profile__succeeded = (profile__HeadVar__2_1 == profile__HeadVar__2_2);

#line 8921 "profile.c"
    return profile__succeeded;
#line 8923 "profile.c"
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
#line 9014 "profile.c"
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

#line 9072 "profile.c"
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
#line 9169 "profile.c"
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
#line 9207 "profile.c"
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
#line 9227 "profile.c"
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
#line 9247 "profile.c"
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
#line 9267 "profile.c"
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

#line 9367 "profile.c"
            profile__succeeded = (profile__V_17_17 == profile__V_18_18);
#line 179 "profile.m"
          }
#line 244 "profile.m"
        if (profile__succeeded)
#line 244 "profile.m"
          {
#line 9375 "profile.c"
            profile__succeeded = (profile__V_4_4 == profile__V_9_9);
#line 244 "profile.m"
            if (profile__succeeded)
#line 244 "profile.m"
              {
#line 9381 "profile.c"
                profile__TypeCtorInfo_15_15 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
#line 9383 "profile.c"
                {
#line 9385 "profile.c"
                  profile__succeeded = profile____Unify____call_site_kind_and_callee_1_0(profile__TypeCtorInfo_15_15, profile__V_5_5, profile__V_10_10);
                }
#line 244 "profile.m"
                if (profile__succeeded)
#line 244 "profile.m"
                  {
#line 9392 "profile.c"
                    profile__succeeded = (profile__V_6_6 == profile__V_11_11);
#line 244 "profile.m"
                    if (profile__succeeded)
#line 9396 "profile.c"
                      {
#line 9398 "profile.c"
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
#line 9442 "profile.c"
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
#line 9472 "profile.c"
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
#line 9502 "profile.c"
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
#line 9532 "profile.c"
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
#line 9562 "profile.c"
        *profile__HeadVar__1_1 = (MR_Integer) 2;
#line 288 "profile.m"
    else
#line 288 "profile.m"
      {
#line 288 "profile.m"
        MR_Box profile__V_17_17 = (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 0));

#line 288 "profile.m"
        if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 9573 "profile.c"
          *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 288 "profile.m"
        else
#line 288 "profile.m"
        if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 9579 "profile.c"
          *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 288 "profile.m"
        else
#line 288 "profile.m"
        if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 9585 "profile.c"
          *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 288 "profile.m"
        else
#line 288 "profile.m"
        if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9591 "profile.c"
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
#line 9719 "profile.c"
            {
#line 9721 "profile.c"
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
#line 9761 "profile.c"
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
#line 9791 "profile.c"
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
#line 9821 "profile.c"
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
#line 9851 "profile.c"
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
#line 9881 "profile.c"
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
#line 9894 "profile.c"
          *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 275 "profile.m"
        else
#line 275 "profile.m"
        if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 9900 "profile.c"
          *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 275 "profile.m"
        else
#line 275 "profile.m"
        if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 9906 "profile.c"
          *profile__HeadVar__1_1 = (MR_Integer) 1;
#line 275 "profile.m"
        else
#line 275 "profile.m"
        if ((profile__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9912 "profile.c"
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
#line 9930 "profile.c"
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
#line 10065 "profile.c"
            {
#line 10067 "profile.c"
              profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_for_T_17, profile__V_3_3, profile__V_5_5);
            }
#line 275 "profile.m"
            if (profile__succeeded)
#line 10072 "profile.c"
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
#line 10188 "profile.c"
  {
#line 10190 "profile.c"
    MR_bool profile__succeeded = (profile__HeadVar__2_1 == profile__HeadVar__2_2);

#line 10193 "profile.c"
    return profile__succeeded;
#line 10195 "profile.c"
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
#line 10286 "profile.c"
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

#line 10344 "profile.c"
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
#line 10379 "profile.c"
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
#line 10409 "profile.c"
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
#line 10433 "profile.c"
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

#line 10523 "profile.c"
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

#line 10550 "profile.c"
                profile__succeeded = (profile__V_16_16 == profile__V_17_17);
#line 176 "profile.m"
              }
#line 237 "profile.m"
            if (profile__succeeded)
#line 10556 "profile.c"
              {
#line 10558 "profile.c"
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
#line 10596 "profile.c"
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

#line 10677 "profile.c"
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
#line 10714 "profile.c"
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

#line 10772 "profile.c"
        {
#line 10774 "profile.c"
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
#line 10810 "profile.c"
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
#line 10843 "profile.c"
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
#line 10868 "profile.c"
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
#line 10881 "profile.c"
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
#line 10961 "profile.c"
            profile__succeeded = (profile__V_5_5 == profile__V_7_7);
#line 257 "profile.m"
            if (profile__succeeded)
#line 257 "profile.m"
              {
#line 10967 "profile.c"
                profile__TypeCtorInfo_11_11 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 10969 "profile.c"
                {
#line 10971 "profile.c"
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

#line 11020 "profile.c"
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

#line 1079 "profile.m"
            {
#line 1079 "profile.m"
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
#line 16448 "profile.c"
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
#line 16517 "profile.c"
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
#line 16586 "profile.c"
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
#line 16655 "profile.c"
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
#line 16724 "profile.c"
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
#line 16793 "profile.c"
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
#line 16862 "profile.c"
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
#line 16931 "profile.c"
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
#line 17000 "profile.c"
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
#line 17069 "profile.c"
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
#line 17138 "profile.c"
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
#line 17207 "profile.c"
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
#line 17276 "profile.c"
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
#line 17345 "profile.c"
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
#line 17414 "profile.c"
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
#line 17597 "profile.c"
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
#line 17666 "profile.c"
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
#line 17735 "profile.c"
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
#line 17804 "profile.c"
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
#line 17873 "profile.c"
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
#line 17940 "profile.c"
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
#line 17980 "profile.c"
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
#line 18020 "profile.c"
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
#line 18060 "profile.c"
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
#line 18216 "profile.c"
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
#line 18372 "profile.c"
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
#line 18528 "profile.c"
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
#line 18684 "profile.c"
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
#line 18840 "profile.c"
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

#line 19092 "profile.c"

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
