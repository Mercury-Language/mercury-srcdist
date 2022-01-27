/*
** Automatically generated from `profile.m'
** by the Mercury compiler,
** version 2016-10-30
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


#include "array_util.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
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
#include "deconstruct.mih"
#include "enum.mih"
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




static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_0[1];

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_array_slot_0_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_1[2];

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_array_slot_0_1;

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_array_slot_0_0[1];

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_array_slot_0_1[1];

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_array_slot_0[2];

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_array_slot_0[2];

static const MR_Integer profile__profile__functor_number_map_call_site_array_slot_0[2];

static const MR_Integer profile__profile__functor_number_map_call_site_callees_0[1];

static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_callees_0;

static const MR_Integer profile__profile__functor_number_map_call_site_caller_0[1];

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_caller_0;

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_dynamic_0_0[3];

static const MR_ConstString profile__profile__field_names_call_site_dynamic_0_0[3];

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_dynamic_0_0;

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_dynamic_0_0[1];

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_dynamic_0[1];

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_dynamic_0[1];

static const MR_Integer profile__profile__functor_number_map_call_site_dynamic_0[1];

static const MR_Integer profile__profile__functor_number_map_call_site_dynamic_ptr_0[1];

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0;

static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_0;

static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_1;

static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_2;

static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_3;

static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_4;

static const MR_ForeignEnumFunctorDescPtr profile__profile__foreign_enum_ordinal_ordered_call_site_kind_0[5];

static const MR_ForeignEnumFunctorDescPtr profile__profile__foreign_enum_name_ordered_call_site_kind_0[5];

static const MR_Integer profile__profile__functor_number_map_call_site_kind_0[5];

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_kind_and_callee_1_0[2];

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_0;

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_1;

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_2;

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_3;

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_4;

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_callee_1_0[4];

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_callee_1_1[1];

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_kind_and_callee_1[2];

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_kind_and_callee_1[5];

static const MR_Integer profile__profile__functor_number_map_call_site_kind_and_callee_1[5];

static const MR_FA_TypeInfo_Struct1 profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0;

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_kind_and_info_1_0[1];

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_0;

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_1;

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_2;

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_3;

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_4;

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_info_1_0[4];

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_info_1_1[1];

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_kind_and_info_1[2];

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_kind_and_info_1[5];

static const MR_Integer profile__profile__functor_number_map_call_site_kind_and_info_1[5];

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_static_0_0[5];

static const MR_ConstString profile__profile__field_names_call_site_static_0_0[5];

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_static_0_0;

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_static_0_0[1];

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_static_0[1];

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_static_0[1];

static const MR_Integer profile__profile__functor_number_map_call_site_static_0[1];

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0;

static const MR_Integer profile__profile__functor_number_map_call_site_static_ptr_0[1];

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_static_ptr_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_static_0;

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_canonical_flag_0_0;

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_canonical_flag_0_1;

static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_canonical_flag_0[2];

static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_canonical_flag_0[2];

static const MR_Integer profile__profile__functor_number_map_canonical_flag_0[2];

static const MR_Integer profile__profile__functor_number_map_clique_ptr_0[1];

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_clique_ptr_0;

static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0;

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_0;

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_1;

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_2;

static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_coverage_data_type_0[3];

static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_coverage_data_type_0[3];

static const MR_Integer profile__profile__functor_number_map_coverage_data_type_0[3];

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_proc_static_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_clique_ptr_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0;

static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1measurements__type_ctor_info_own_prof_info_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0;

static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2builtin__type_ctor_info_string_0profile__type_ctor_info_module_data_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 profile__mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0;

static const MR_FA_TypeInfo_Struct2 profile__maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo profile__profile__field_types_deep_0_0[29];

static const MR_ConstString profile__profile__field_names_deep_0_0[29];

static const MR_DuFunctorDesc profile__profile__du_functor_desc_deep_0_0;

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_deep_0_0[1];

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_deep_0[1];

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_deep_0[1];

static const MR_Integer profile__profile__functor_number_map_deep_0[1];

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_deep_compression_flag_0_0;

static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_deep_compression_flag_0[1];

static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_deep_compression_flag_0[1];

static const MR_Integer profile__profile__functor_number_map_deep_compression_flag_0[1];

static const MR_PseudoTypeInfo profile__profile__field_types_deep_flags_0_0[4];

static const MR_ConstString profile__profile__field_names_deep_flags_0_0[4];

static const MR_DuFunctorDesc profile__profile__du_functor_desc_deep_flags_0_0;

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_deep_flags_0_0[1];

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_deep_flags_0[1];

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_deep_flags_0[1];

static const MR_Integer profile__profile__functor_number_map_deep_flags_0[1];

static const MR_PseudoTypeInfo profile__profile__field_types_initial_deep_0_0[6];

static const MR_ConstString profile__profile__field_names_initial_deep_0_0[6];

static const MR_DuFunctorDesc profile__profile__du_functor_desc_initial_deep_0_0;

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_initial_deep_0_0[1];

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_initial_deep_0[1];

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_initial_deep_0[1];

static const MR_Integer profile__profile__functor_number_map_initial_deep_0[1];

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_is_zeroed_0_0;

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_is_zeroed_0_1;

static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_is_zeroed_0[2];

static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_is_zeroed_0[2];

static const MR_Integer profile__profile__functor_number_map_is_zeroed_0[2];

static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0;

static const MR_PseudoTypeInfo profile__profile__field_types_module_data_0_0[3];

static const MR_ConstString profile__profile__field_names_module_data_0_0[3];

static const MR_DuFunctorDesc profile__profile__du_functor_desc_module_data_0_0;

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_module_data_0_0[1];

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_module_data_0[1];

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_module_data_0[1];

static const MR_Integer profile__profile__functor_number_map_module_data_0[1];

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_array_slot_0;

static const MR_PseudoTypeInfo profile__profile__field_types_proc_dynamic_0_0[3];

static const MR_ConstString profile__profile__field_names_proc_dynamic_0_0[3];

static const MR_DuFunctorDesc profile__profile__du_functor_desc_proc_dynamic_0_0;

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_proc_dynamic_0_0[1];

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_proc_dynamic_0[1];

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_proc_dynamic_0[1];

static const MR_Integer profile__profile__functor_number_map_proc_dynamic_0[1];

static const MR_Integer profile__profile__functor_number_map_proc_dynamic_ptr_0[1];

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_proc_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;

static const MR_PseudoTypeInfo profile__profile__field_types_proc_static_0_0[12];

static const MR_ConstString profile__profile__field_names_proc_static_0_0[12];

static const MR_DuFunctorDesc profile__profile__du_functor_desc_proc_static_0_0;

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_proc_static_0_0[1];

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_proc_static_0[1];

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_proc_static_0[1];

static const MR_Integer profile__profile__functor_number_map_proc_static_0[1];

static const MR_Integer profile__profile__functor_number_map_proc_static_ptr_0[1];

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_proc_static_ptr_0;

static const MR_PseudoTypeInfo profile__profile__field_types_profile_stats_0_0[10];

static const MR_ConstString profile__profile__field_names_profile_stats_0_0[10];

static const MR_DuFunctorDesc profile__profile__du_functor_desc_profile_stats_0_0;

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_profile_stats_0_0[1];

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_profile_stats_0[1];

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_profile_stats_0[1];

static const MR_Integer profile__profile__functor_number_map_profile_stats_0[1];

static MR_bool MR_CALL 
profile____Unify____call_site_array_slot_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_array_slot_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_callees_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_callees_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_caller_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_caller_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_dynamic_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_ptr_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_dynamic_ptr_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_dynamics_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_dynamics_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_kind_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_kind_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_1_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static void MR_CALL 
profile____Compare____call_site_kind_and_callee_1_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box * profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3,
  MR_Box profile__wrapper_arg_4);

static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_kind_and_callee_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_info_1_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static void MR_CALL 
profile____Compare____call_site_kind_and_info_1_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box * profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3,
  MR_Box profile__wrapper_arg_4);

static MR_bool MR_CALL 
profile____Unify____call_site_static_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_static_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_static_map_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_static_map_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_static_ptr_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_static_ptr_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_statics_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_statics_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____canonical_flag_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____canonical_flag_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____clique_ptr_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____clique_ptr_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____compensation_table_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____compensation_table_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____coverage_data_type_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____coverage_data_type_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____deep_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____deep_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____deep_compression_flag_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____deep_compression_flag_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____deep_flags_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____deep_flags_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____initial_deep_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____initial_deep_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____is_zeroed_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____is_zeroed_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____module_data_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____module_data_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____proc_dynamic_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____proc_dynamic_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____proc_dynamic_ptr_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____proc_dynamic_ptr_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____proc_dynamics_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____proc_dynamics_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____proc_static_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____proc_static_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____proc_static_ptr_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____proc_static_ptr_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____proc_statics_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____proc_statics_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____profile_stats_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2);

static void MR_CALL 
profile____Compare____profile_stats_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&profile_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile_scalar_common_2[1]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_kind_and_callee_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile_scalar_common_1[0]))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile_scalar_common_1[1]))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile_scalar_common_1[2]))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile_scalar_common_2[0]))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile_scalar_common_1[4]))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&profile_scalar_common_1[20]))
  },
  /* row 22 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_prog_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&profile_scalar_common_2[3]))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 25 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
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
    ((MR_Box) (&profile_scalar_common_1[22])),
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



#include "array.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_0[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_1[2] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_is_zeroed_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_array_slot_0_0[1] = {
  &profile__profile__du_functor_desc_call_site_array_slot_0_0
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_array_slot_0_1[1] = {
  &profile__profile__du_functor_desc_call_site_array_slot_0_1
};

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

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_array_slot_0[2] = {
  &profile__profile__du_functor_desc_call_site_array_slot_0_1,
  &profile__profile__du_functor_desc_call_site_array_slot_0_0
};

static const MR_Integer profile__profile__functor_number_map_call_site_array_slot_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_array_slot_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_Integer profile__profile__functor_number_map_call_site_callees_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_callees_0 = {
  (MR_String) "call_site_callees",
  (MR_PseudoTypeInfo) &profile__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_callees_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_Integer profile__profile__functor_number_map_call_site_caller_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_caller_0 = {
  (MR_String) "call_site_caller",
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_caller_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_dynamic_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0
};

static const MR_ConstString profile__profile__field_names_call_site_dynamic_0_0[3] = {
  (MR_String) "csd_caller",
  (MR_String) "csd_callee",
  (MR_String) "csd_own_prof"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_dynamic_0_0[1] = {
  &profile__profile__du_functor_desc_call_site_dynamic_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_dynamic_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_dynamic_0_0
  }
};

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_dynamic_0[1] = {
  &profile__profile__du_functor_desc_call_site_dynamic_0_0
};

static const MR_Integer profile__profile__functor_number_map_call_site_dynamic_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_dynamic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_Integer profile__profile__functor_number_map_call_site_dynamic_ptr_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_dynamic_ptr_0 = {
  (MR_String) "call_site_dynamic_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_0
  }
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_dynamics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_0 = {
  (MR_String) "normal_call",
  (MR_Integer) 0,
  ((int) MR_callsite_normal_call)
};

static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_1 = {
  (MR_String) "special_call",
  (MR_Integer) 1,
  ((int) MR_callsite_special_call)
};

static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_2 = {
  (MR_String) "higher_order_call",
  (MR_Integer) 2,
  ((int) MR_callsite_higher_order_call)
};

static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_3 = {
  (MR_String) "method_call",
  (MR_Integer) 3,
  ((int) MR_callsite_method_call)
};

static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_4 = {
  (MR_String) "callback",
  (MR_Integer) 4,
  ((int) MR_callsite_callback)
};

static const MR_ForeignEnumFunctorDescPtr profile__profile__foreign_enum_ordinal_ordered_call_site_kind_0[5] = {
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_0,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_1,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_2,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_3,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_4
};

static const MR_ForeignEnumFunctorDescPtr profile__profile__foreign_enum_name_ordered_call_site_kind_0[5] = {
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_4,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_2,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_3,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_0,
  &profile__profile__foreign_enum_functor_desc_call_site_kind_0_1
};

static const MR_Integer profile__profile__functor_number_map_call_site_kind_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_kind_and_callee_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_callee_1_0[4] = {
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_1,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_2,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_3,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_4
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_callee_1_1[1] = {
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_0
};

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

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_kind_and_callee_1[5] = {
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_4,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_2,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_3,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_0,
  &profile__profile__du_functor_desc_call_site_kind_and_callee_1_1
};

static const MR_Integer profile__profile__functor_number_map_call_site_kind_and_callee_1[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_kind_and_callee_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_kind_and_callee_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_kind_and_info_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_info_1_0[4] = {
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_1,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_2,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_3,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_4
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_kind_and_info_1_1[1] = {
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_0
};

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

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_kind_and_info_1[5] = {
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_4,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_2,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_3,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_0,
  &profile__profile__du_functor_desc_call_site_kind_and_info_1_1
};

static const MR_Integer profile__profile__functor_number_map_call_site_kind_and_info_1[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_kind_and_info_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
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

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_static_0_0[5] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

static const MR_ConstString profile__profile__field_names_call_site_static_0_0[5] = {
  (MR_String) "css_container",
  (MR_String) "css_slot_num",
  (MR_String) "css_kind",
  (MR_String) "css_line_num",
  (MR_String) "css_goal_path"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_static_0_0[1] = {
  &profile__profile__du_functor_desc_call_site_static_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_static_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_static_0_0
  }
};

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_call_site_static_0[1] = {
  &profile__profile__du_functor_desc_call_site_static_0_0
};

static const MR_Integer profile__profile__functor_number_map_call_site_static_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_static_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
  }
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_static_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_Integer profile__profile__functor_number_map_call_site_static_ptr_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_static_ptr_0 = {
  (MR_String) "call_site_static_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_static_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_static_0
  }
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_statics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_canonical_flag_0_0 = {
  (MR_String) "is_canonical",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_canonical_flag_0_1 = {
  (MR_String) "maybe_not_canonical",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_canonical_flag_0[2] = {
  &profile__profile__enum_functor_desc_canonical_flag_0_0,
  &profile__profile__enum_functor_desc_canonical_flag_0_1
};

static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_canonical_flag_0[2] = {
  &profile__profile__enum_functor_desc_canonical_flag_0_0,
  &profile__profile__enum_functor_desc_canonical_flag_0_1
};

static const MR_Integer profile__profile__functor_number_map_canonical_flag_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_canonical_flag_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_Integer profile__profile__functor_number_map_clique_ptr_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_clique_ptr_0 = {
  (MR_String) "clique_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_clique_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
  }
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_compensation_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_0 = {
  (MR_String) "no_coverage_data",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_1 = {
  (MR_String) "static_coverage_data",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_2 = {
  (MR_String) "dynamic_coverage_data",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_coverage_data_type_0[3] = {
  &profile__profile__enum_functor_desc_coverage_data_type_0_0,
  &profile__profile__enum_functor_desc_coverage_data_type_0_1,
  &profile__profile__enum_functor_desc_coverage_data_type_0_2
};

static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_coverage_data_type_0[3] = {
  &profile__profile__enum_functor_desc_coverage_data_type_0_2,
  &profile__profile__enum_functor_desc_coverage_data_type_0_0,
  &profile__profile__enum_functor_desc_coverage_data_type_0_1
};

static const MR_Integer profile__profile__functor_number_map_coverage_data_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_coverage_data_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_proc_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &profile__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1measurements__type_ctor_info_own_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2builtin__type_ctor_info_string_0profile__type_ctor_info_module_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &profile__profile__type_ctor_info_module_data_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &profile__array__ti_array_1builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &profile__array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_prog_rep_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

static const MR_FA_TypeInfo_Struct2 profile__maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &profile__mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &profile__maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0
  }
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_deep_0_0[1] = {
  &profile__profile__du_functor_desc_deep_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_deep_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_deep_0_0
  }
};

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_deep_0[1] = {
  &profile__profile__du_functor_desc_deep_0_0
};

static const MR_Integer profile__profile__functor_number_map_deep_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_deep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_deep_compression_flag_0_0 = {
  (MR_String) "no_compression",
  (MR_Integer) 0
};

static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_deep_compression_flag_0[1] = {
  &profile__profile__enum_functor_desc_deep_compression_flag_0_0
};

static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_deep_compression_flag_0[1] = {
  &profile__profile__enum_functor_desc_deep_compression_flag_0_0
};

static const MR_Integer profile__profile__functor_number_map_deep_compression_flag_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_deep_compression_flag_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_PseudoTypeInfo profile__profile__field_types_deep_flags_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_canonical_flag_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_deep_compression_flag_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_coverage_data_type_0
};

static const MR_ConstString profile__profile__field_names_deep_flags_0_0[4] = {
  (MR_String) "df_bytes_per_int",
  (MR_String) "df_canonical_flag",
  (MR_String) "df_compression_flag",
  (MR_String) "df_coverage_data_type"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_deep_flags_0_0[1] = {
  &profile__profile__du_functor_desc_deep_flags_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_deep_flags_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_deep_flags_0_0
  }
};

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_deep_flags_0[1] = {
  &profile__profile__du_functor_desc_deep_flags_0_0
};

static const MR_Integer profile__profile__functor_number_map_deep_flags_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_deep_flags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_PseudoTypeInfo profile__profile__field_types_initial_deep_0_0[6] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_profile_stats_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_static_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_proc_static_0
};

static const MR_ConstString profile__profile__field_names_initial_deep_0_0[6] = {
  (MR_String) "init_profile_stats",
  (MR_String) "init_root",
  (MR_String) "init_call_site_dynamics",
  (MR_String) "init_proc_dynamics",
  (MR_String) "init_call_site_statics",
  (MR_String) "init_proc_statics"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_initial_deep_0_0[1] = {
  &profile__profile__du_functor_desc_initial_deep_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_initial_deep_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_initial_deep_0_0
  }
};

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_initial_deep_0[1] = {
  &profile__profile__du_functor_desc_initial_deep_0_0
};

static const MR_Integer profile__profile__functor_number_map_initial_deep_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_initial_deep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_is_zeroed_0_0 = {
  (MR_String) "zeroed",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_is_zeroed_0_1 = {
  (MR_String) "not_zeroed",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr profile__profile__enum_value_ordered_is_zeroed_0[2] = {
  &profile__profile__enum_functor_desc_is_zeroed_0_0,
  &profile__profile__enum_functor_desc_is_zeroed_0_1
};

static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_is_zeroed_0[2] = {
  &profile__profile__enum_functor_desc_is_zeroed_0_1,
  &profile__profile__enum_functor_desc_is_zeroed_0_0
};

static const MR_Integer profile__profile__functor_number_map_is_zeroed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_is_zeroed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

static const MR_PseudoTypeInfo profile__profile__field_types_module_data_0_0[3] = {
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0,
  (MR_PseudoTypeInfo) &profile__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0
};

static const MR_ConstString profile__profile__field_names_module_data_0_0[3] = {
  (MR_String) "module_own",
  (MR_String) "module_desc",
  (MR_String) "module_procs"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_module_data_0_0[1] = {
  &profile__profile__du_functor_desc_module_data_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_module_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_module_data_0_0
  }
};

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_module_data_0[1] = {
  &profile__profile__du_functor_desc_module_data_0_0
};

static const MR_Integer profile__profile__functor_number_map_module_data_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_module_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

static const MR_PseudoTypeInfo profile__profile__field_types_proc_dynamic_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &profile__array__ti_array_1profile__type_ctor_info_call_site_array_slot_0,
  (MR_PseudoTypeInfo) &profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0
};

static const MR_ConstString profile__profile__field_names_proc_dynamic_0_0[3] = {
  (MR_String) "pd_proc_static",
  (MR_String) "pd_sites",
  (MR_String) "pd_maybe_coverage_points"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_proc_dynamic_0_0[1] = {
  &profile__profile__du_functor_desc_proc_dynamic_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_proc_dynamic_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_proc_dynamic_0_0
  }
};

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_proc_dynamic_0[1] = {
  &profile__profile__du_functor_desc_proc_dynamic_0_0
};

static const MR_Integer profile__profile__functor_number_map_proc_dynamic_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_dynamic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_Integer profile__profile__functor_number_map_proc_dynamic_ptr_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_proc_dynamic_ptr_0 = {
  (MR_String) "proc_dynamic_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_dynamic_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_dynamics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1mdbcomp__program_representation__type_ctor_info_coverage_point_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0
  }
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_proc_static_0_0[1] = {
  &profile__profile__du_functor_desc_proc_static_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_proc_static_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_proc_static_0_0
  }
};

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_proc_static_0[1] = {
  &profile__profile__du_functor_desc_proc_static_0_0
};

static const MR_Integer profile__profile__functor_number_map_proc_static_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_static_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_Integer profile__profile__functor_number_map_proc_static_ptr_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_proc_static_ptr_0 = {
  (MR_String) "proc_static_ptr",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_static_ptr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_statics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_profile_stats_0_0[1] = {
  &profile__profile__du_functor_desc_profile_stats_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_profile_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_profile_stats_0_0
  }
};

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_profile_stats_0[1] = {
  &profile__profile__du_functor_desc_profile_stats_0_0
};

static const MR_Integer profile__profile__functor_number_map_profile_stats_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_profile_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
profile____Unify____call_site_array_slot_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____call_site_array_slot_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_array_slot_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____call_site_array_slot_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_callees_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____call_site_callees_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_callees_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____call_site_callees_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_caller_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____call_site_caller_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_caller_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____call_site_caller_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____call_site_dynamic_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_dynamic_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____call_site_dynamic_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_ptr_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____call_site_dynamic_ptr_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_dynamic_ptr_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____call_site_dynamic_ptr_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_dynamics_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____call_site_dynamics_0_0(((MR_ArrayPtr) profile__wrapper_arg_1), ((MR_ArrayPtr) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_dynamics_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____call_site_dynamics_0_0(&profile__conv0_HeadVar__1_1, ((MR_ArrayPtr) profile__wrapper_arg_2), ((MR_ArrayPtr) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_kind_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____call_site_kind_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_kind_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____call_site_kind_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_1_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____call_site_kind_and_callee_1_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_kind_and_callee_1_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box * profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3,
  MR_Box profile__wrapper_arg_4)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____call_site_kind_and_callee_1_0(((MR_Word) profile__wrapper_arg_1), &profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_3), ((MR_Word) profile__wrapper_arg_4));
    }
    *profile__wrapper_arg_2 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____call_site_kind_and_callee_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_kind_and_callee_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____call_site_kind_and_callee_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_info_1_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____call_site_kind_and_info_1_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_kind_and_info_1_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box * profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3,
  MR_Box profile__wrapper_arg_4)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____call_site_kind_and_info_1_0(((MR_Word) profile__wrapper_arg_1), &profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_3), ((MR_Word) profile__wrapper_arg_4));
    }
    *profile__wrapper_arg_2 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_static_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____call_site_static_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_static_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____call_site_static_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_static_map_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____call_site_static_map_0_0(((MR_ArrayPtr) profile__wrapper_arg_1), ((MR_ArrayPtr) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_static_map_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____call_site_static_map_0_0(&profile__conv0_HeadVar__1_1, ((MR_ArrayPtr) profile__wrapper_arg_2), ((MR_ArrayPtr) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_static_ptr_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____call_site_static_ptr_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_static_ptr_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____call_site_static_ptr_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_statics_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____call_site_statics_0_0(((MR_ArrayPtr) profile__wrapper_arg_1), ((MR_ArrayPtr) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_statics_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____call_site_statics_0_0(&profile__conv0_HeadVar__1_1, ((MR_ArrayPtr) profile__wrapper_arg_2), ((MR_ArrayPtr) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____canonical_flag_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____canonical_flag_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____canonical_flag_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____canonical_flag_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____clique_ptr_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____clique_ptr_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____clique_ptr_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____clique_ptr_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____compensation_table_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____compensation_table_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____compensation_table_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____compensation_table_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____coverage_data_type_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____coverage_data_type_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____coverage_data_type_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____coverage_data_type_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____deep_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____deep_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____deep_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____deep_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____deep_compression_flag_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____deep_compression_flag_0_0();
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____deep_compression_flag_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____deep_compression_flag_0_0(&profile__conv0_HeadVar__1_1);
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____deep_flags_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____deep_flags_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____deep_flags_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____deep_flags_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____initial_deep_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____initial_deep_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____initial_deep_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____initial_deep_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____is_zeroed_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____is_zeroed_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____is_zeroed_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____is_zeroed_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____module_data_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____module_data_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____module_data_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____module_data_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____proc_dynamic_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____proc_dynamic_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____proc_dynamic_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____proc_dynamic_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____proc_dynamic_ptr_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____proc_dynamic_ptr_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____proc_dynamic_ptr_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____proc_dynamic_ptr_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____proc_dynamics_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____proc_dynamics_0_0(((MR_ArrayPtr) profile__wrapper_arg_1), ((MR_ArrayPtr) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____proc_dynamics_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____proc_dynamics_0_0(&profile__conv0_HeadVar__1_1, ((MR_ArrayPtr) profile__wrapper_arg_2), ((MR_ArrayPtr) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____proc_static_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____proc_static_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____proc_static_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____proc_static_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____proc_static_ptr_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____proc_static_ptr_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____proc_static_ptr_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____proc_static_ptr_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____proc_statics_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____proc_statics_0_0(((MR_ArrayPtr) profile__wrapper_arg_1), ((MR_ArrayPtr) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____proc_statics_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____proc_statics_0_0(&profile__conv0_HeadVar__1_1, ((MR_ArrayPtr) profile__wrapper_arg_2), ((MR_ArrayPtr) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____profile_stats_0_0_10001(
  MR_Box profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile____Unify____profile_stats_0_0(((MR_Word) profile__wrapper_arg_1), ((MR_Word) profile__wrapper_arg_2));
    }
    return profile__succeeded;
  }
}

static void MR_CALL 
profile____Compare____profile_stats_0_0_10001(
  MR_Box * profile__wrapper_arg_1,
  MR_Box profile__wrapper_arg_2,
  MR_Box profile__wrapper_arg_3)
{
  {
    MR_Word profile__conv0_HeadVar__1_1;

    {
      profile____Compare____profile_stats_0_0(&profile__conv0_HeadVar__1_1, ((MR_Word) profile__wrapper_arg_2), ((MR_Word) profile__wrapper_arg_3));
    }
    *profile__wrapper_arg_1 = ((MR_Box) (profile__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_114_111_102_105_108_101_95_95_100_101_101_112_95_99_111_109_112_114_101_115_115_105_111_110_95_102_108_97_103_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * profile__HeadVar__1_1)
{
  {
    MR_bool profile__succeeded;

    *profile__HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_114_111_102_105_108_101_95_95_100_101_101_112_95_99_111_109_112_114_101_115_115_105_111_110_95_102_108_97_103_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

void MR_CALL 
profile____Compare____profile_stats_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_33 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_34 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_33 == profile__CastY_34);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String profile__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer profile__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer profile__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer profile__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer profile__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer profile__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer profile__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer profile__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer profile__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 9)));
        MR_String profile__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer profile__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer profile__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer profile__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer profile__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer profile__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer profile__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 6)));
        MR_Integer profile__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 7)));
        MR_Integer profile__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word profile__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word profile__V_24_24;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_24_24, profile__V_4_4, profile__V_14_14);
        }
        profile__succeeded = (profile__V_24_24 == (MR_Integer) 0);
        profile__succeeded = !(profile__succeeded);
        if (profile__succeeded)
          *profile__HeadVar__1_1 = profile__V_24_24;
        else
          {
            MR_Word profile__V_25_25;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_25_25, profile__V_5_5, profile__V_15_15);
            }
            profile__succeeded = (profile__V_25_25 == (MR_Integer) 0);
            profile__succeeded = !(profile__succeeded);
            if (profile__succeeded)
              *profile__HeadVar__1_1 = profile__V_25_25;
            else
              {
                MR_Word profile__V_26_26;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_26_26, profile__V_6_6, profile__V_16_16);
                }
                profile__succeeded = (profile__V_26_26 == (MR_Integer) 0);
                profile__succeeded = !(profile__succeeded);
                if (profile__succeeded)
                  *profile__HeadVar__1_1 = profile__V_26_26;
                else
                  {
                    MR_Word profile__V_27_27;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_27_27, profile__V_7_7, profile__V_17_17);
                    }
                    profile__succeeded = (profile__V_27_27 == (MR_Integer) 0);
                    profile__succeeded = !(profile__succeeded);
                    if (profile__succeeded)
                      *profile__HeadVar__1_1 = profile__V_27_27;
                    else
                      {
                        MR_Word profile__V_28_28;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_28_28, profile__V_8_8, profile__V_18_18);
                        }
                        profile__succeeded = (profile__V_28_28 == (MR_Integer) 0);
                        profile__succeeded = !(profile__succeeded);
                        if (profile__succeeded)
                          *profile__HeadVar__1_1 = profile__V_28_28;
                        else
                          {
                            MR_Word profile__V_29_29;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_29_29, profile__V_9_9, profile__V_19_19);
                            }
                            profile__succeeded = (profile__V_29_29 == (MR_Integer) 0);
                            profile__succeeded = !(profile__succeeded);
                            if (profile__succeeded)
                              *profile__HeadVar__1_1 = profile__V_29_29;
                            else
                              {
                                MR_Word profile__V_30_30;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_30_30, profile__V_10_10, profile__V_20_20);
                                }
                                profile__succeeded = (profile__V_30_30 == (MR_Integer) 0);
                                profile__succeeded = !(profile__succeeded);
                                if (profile__succeeded)
                                  *profile__HeadVar__1_1 = profile__V_30_30;
                                else
                                  {
                                    MR_Word profile__V_31_31;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_31_31, profile__V_11_11, profile__V_21_21);
                                    }
                                    profile__succeeded = (profile__V_31_31 == (MR_Integer) 0);
                                    profile__succeeded = !(profile__succeeded);
                                    if (profile__succeeded)
                                      *profile__HeadVar__1_1 = profile__V_31_31;
                                    else
                                      {
                                        MR_Word profile__V_32_32;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_32_32, profile__V_12_12, profile__V_22_22);
                                        }
                                        profile__succeeded = (profile__V_32_32 == (MR_Integer) 0);
                                        profile__succeeded = !(profile__succeeded);
                                        if (profile__succeeded)
                                          *profile__HeadVar__1_1 = profile__V_32_32;
                                        else
                                          {
                                            profile____Compare____deep_flags_0_0(profile__HeadVar__1_1, profile__V_13_13, profile__V_23_23);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____profile_stats_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_23 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_24 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_23 == profile__CastY_24);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_String profile__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer profile__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer profile__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer profile__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer profile__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer profile__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer profile__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 6)));
        MR_Integer profile__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 7)));
        MR_Integer profile__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 9)));
        MR_String profile__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer profile__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer profile__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer profile__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer profile__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer profile__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer profile__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer profile__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer profile__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word profile__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 9)));

        profile__succeeded = (strcmp(profile__V_3_3, profile__V_13_13) == 0);
        if (profile__succeeded)
          {
            profile__succeeded = (profile__V_4_4 == profile__V_14_14);
            if (profile__succeeded)
              {
                profile__succeeded = (profile__V_5_5 == profile__V_15_15);
                if (profile__succeeded)
                  {
                    profile__succeeded = (profile__V_6_6 == profile__V_16_16);
                    if (profile__succeeded)
                      {
                        profile__succeeded = (profile__V_7_7 == profile__V_17_17);
                        if (profile__succeeded)
                          {
                            profile__succeeded = (profile__V_8_8 == profile__V_18_18);
                            if (profile__succeeded)
                              {
                                profile__succeeded = (profile__V_9_9 == profile__V_19_19);
                                if (profile__succeeded)
                                  {
                                    profile__succeeded = (profile__V_10_10 == profile__V_20_20);
                                    if (profile__succeeded)
                                      {
                                        profile__succeeded = (profile__V_11_11 == profile__V_21_21);
                                        if (profile__succeeded)
                                          {
                                            profile__succeeded = profile____Unify____deep_flags_0_0(profile__V_12_12, profile__V_22_22);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____proc_statics_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_ArrayPtr profile__HeadVar__2_2,
  MR_ArrayPtr profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__Cast_HeadVar1_4 = profile__HeadVar__2_2;
    MR_ArrayPtr profile__Cast_HeadVar2_5 = profile__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[14], profile__HeadVar__1_1, ((MR_Box) (profile__Cast_HeadVar1_4)), ((MR_Box) (profile__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
profile____Unify____proc_statics_0_0(
  MR_ArrayPtr profile__HeadVar__1_1,
  MR_ArrayPtr profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__Cast_HeadVar1_3 = profile__HeadVar__1_1;
    MR_ArrayPtr profile__Cast_HeadVar2_4 = profile__HeadVar__2_2;

    {
      profile__succeeded = mercury__array____Unify____array_1_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_ArrayPtr) profile__Cast_HeadVar1_3, (MR_ArrayPtr) profile__Cast_HeadVar2_4);
    }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____proc_static_ptr_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_6 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_7 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_6 == profile__CastY_7);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;
        MR_Integer profile__V_5_5 = (MR_Integer) profile__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_4_4, profile__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____proc_static_ptr_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_5 == profile__CastY_6);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_Integer profile__V_3_3 = (MR_Integer) profile__HeadVar__1_1;
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;

        profile__succeeded = (profile__V_3_3 == profile__V_4_4);
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____proc_static_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_39 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_40 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_39 == profile__CastY_40);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_String profile__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_String profile__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
        MR_String profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
        MR_String profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
        MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer profile__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 7)));
        MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 8)));
        MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word profile__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
        MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
        MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
        MR_String profile__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 3)));
        MR_String profile__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 4)));
        MR_String profile__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer profile__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word profile__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 7)));
        MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 8)));
        MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word profile__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 10)));
        MR_Word profile__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 11)));
        MR_Word profile__V_28_28;

        {
          mdbcomp__program_representation____Compare____string_proc_label_0_0(&profile__V_28_28, profile__V_4_4, profile__V_16_16);
        }
        profile__succeeded = (profile__V_28_28 == (MR_Integer) 0);
        profile__succeeded = !(profile__succeeded);
        if (profile__succeeded)
          *profile__HeadVar__1_1 = profile__V_28_28;
        else
          {
            MR_Word profile__V_29_29;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_29_29, profile__V_5_5, profile__V_17_17);
            }
            profile__succeeded = (profile__V_29_29 == (MR_Integer) 0);
            profile__succeeded = !(profile__succeeded);
            if (profile__succeeded)
              *profile__HeadVar__1_1 = profile__V_29_29;
            else
              {
                MR_Word profile__V_30_30;

                {
                  mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_30_30, profile__V_6_6, profile__V_18_18);
                }
                profile__succeeded = (profile__V_30_30 == (MR_Integer) 0);
                profile__succeeded = !(profile__succeeded);
                if (profile__succeeded)
                  *profile__HeadVar__1_1 = profile__V_30_30;
                else
                  {
                    MR_Word profile__V_31_31;

                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_31_31, profile__V_7_7, profile__V_19_19);
                    }
                    profile__succeeded = (profile__V_31_31 == (MR_Integer) 0);
                    profile__succeeded = !(profile__succeeded);
                    if (profile__succeeded)
                      *profile__HeadVar__1_1 = profile__V_31_31;
                    else
                      {
                        MR_Word profile__V_32_32;

                        {
                          mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_32_32, profile__V_8_8, profile__V_20_20);
                        }
                        profile__succeeded = (profile__V_32_32 == (MR_Integer) 0);
                        profile__succeeded = !(profile__succeeded);
                        if (profile__succeeded)
                          *profile__HeadVar__1_1 = profile__V_32_32;
                        else
                          {
                            MR_Word profile__V_33_33;

                            {
                              mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_33_33, profile__V_9_9, profile__V_21_21);
                            }
                            profile__succeeded = (profile__V_33_33 == (MR_Integer) 0);
                            profile__succeeded = !(profile__succeeded);
                            if (profile__succeeded)
                              *profile__HeadVar__1_1 = profile__V_33_33;
                            else
                              {
                                MR_Word profile__V_34_34;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_34_34, profile__V_10_10, profile__V_22_22);
                                }
                                profile__succeeded = (profile__V_34_34 == (MR_Integer) 0);
                                profile__succeeded = !(profile__succeeded);
                                if (profile__succeeded)
                                  *profile__HeadVar__1_1 = profile__V_34_34;
                                else
                                  {
                                    MR_Word profile__V_35_35;
                                    MR_Integer profile__V_53_53 = (MR_Integer) profile__V_11_11;
                                    MR_Integer profile__V_54_54 = (MR_Integer) profile__V_23_23;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_35_35, profile__V_53_53, profile__V_54_54);
                                    }
                                    profile__succeeded = (profile__V_35_35 == (MR_Integer) 0);
                                    profile__succeeded = !(profile__succeeded);
                                    if (profile__succeeded)
                                      *profile__HeadVar__1_1 = profile__V_35_35;
                                    else
                                      {
                                        MR_Word profile__V_36_36;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[11], &profile__V_36_36, ((MR_Box) (profile__V_12_12)), ((MR_Box) (profile__V_24_24)));
                                        }
                                        profile__succeeded = (profile__V_36_36 == (MR_Integer) 0);
                                        profile__succeeded = !(profile__succeeded);
                                        if (profile__succeeded)
                                          *profile__HeadVar__1_1 = profile__V_36_36;
                                        else
                                          {
                                            MR_Word profile__V_37_37;

                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[26], &profile__V_37_37, ((MR_Box) (profile__V_13_13)), ((MR_Box) (profile__V_25_25)));
                                            }
                                            profile__succeeded = (profile__V_37_37 == (MR_Integer) 0);
                                            profile__succeeded = !(profile__succeeded);
                                            if (profile__succeeded)
                                              *profile__HeadVar__1_1 = profile__V_37_37;
                                            else
                                              {
                                                MR_Word profile__V_38_38;

                                                {
                                                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[4], &profile__V_38_38, ((MR_Box) (profile__V_14_14)), ((MR_Box) (profile__V_26_26)));
                                                }
                                                profile__succeeded = (profile__V_38_38 == (MR_Integer) 0);
                                                profile__succeeded = !(profile__succeeded);
                                                if (profile__succeeded)
                                                  *profile__HeadVar__1_1 = profile__V_38_38;
                                                else
                                                  {
                                                    MR_Integer profile__V_55_55 = (MR_Integer) profile__V_15_15;
                                                    MR_Integer profile__V_56_56 = (MR_Integer) profile__V_27_27;

                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_55_55, profile__V_56_56);
                                                    }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____proc_static_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_27 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_28 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_27 == profile__CastY_28);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_Word profile__TypeCtorInfo_30_30;
        MR_Word profile__TypeCtorInfo_31_31;
        MR_Word profile__TypeInfo_32_32;
        MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
        MR_String profile__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
        MR_String profile__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
        MR_String profile__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 3)));
        MR_String profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 4)));
        MR_String profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer profile__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 7)));
        MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 8)));
        MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 10)));
        MR_Word profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 11)));
        MR_Word profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_String profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
        MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
        MR_String profile__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
        MR_String profile__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer profile__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word profile__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 7)));
        MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 8)));
        MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word profile__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word profile__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 11)));

        {
          profile__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(profile__V_3_3, profile__V_15_15);
        }
        if (profile__succeeded)
          {
            profile__succeeded = (strcmp(profile__V_4_4, profile__V_16_16) == 0);
            if (profile__succeeded)
              {
                profile__succeeded = (strcmp(profile__V_5_5, profile__V_17_17) == 0);
                if (profile__succeeded)
                  {
                    profile__succeeded = (strcmp(profile__V_6_6, profile__V_18_18) == 0);
                    if (profile__succeeded)
                      {
                        profile__succeeded = (strcmp(profile__V_7_7, profile__V_19_19) == 0);
                        if (profile__succeeded)
                          {
                            profile__succeeded = (strcmp(profile__V_8_8, profile__V_20_20) == 0);
                            if (profile__succeeded)
                              {
                                profile__succeeded = (profile__V_9_9 == profile__V_21_21);
                                if (profile__succeeded)
                                  {
                                    profile__succeeded = (profile__V_10_10 == profile__V_22_22);
                                    if (profile__succeeded)
                                      {
                                        profile__TypeCtorInfo_30_30 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
                                        {
                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_30_30, (MR_ArrayPtr) profile__V_11_11, (MR_ArrayPtr) profile__V_23_23);
                                        }
                                        if (profile__succeeded)
                                          {
                                            profile__TypeCtorInfo_31_31 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;
                                            {
                                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_31_31, (MR_ArrayPtr) profile__V_12_12, (MR_ArrayPtr) profile__V_24_24);
                                            }
                                            if (profile__succeeded)
                                              {
                                                profile__TypeInfo_32_32 = (MR_Word) &profile_scalar_common_1[4];
                                                {
                                                  profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_32_32, ((MR_Box) (profile__V_13_13)), ((MR_Box) (profile__V_25_25)));
                                                }
                                                if (profile__succeeded)
                                                  profile__succeeded = (profile__V_14_14 == profile__V_26_26);
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____proc_dynamics_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_ArrayPtr profile__HeadVar__2_2,
  MR_ArrayPtr profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__Cast_HeadVar1_4 = profile__HeadVar__2_2;
    MR_ArrayPtr profile__Cast_HeadVar2_5 = profile__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[13], profile__HeadVar__1_1, ((MR_Box) (profile__Cast_HeadVar1_4)), ((MR_Box) (profile__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
profile____Unify____proc_dynamics_0_0(
  MR_ArrayPtr profile__HeadVar__1_1,
  MR_ArrayPtr profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__Cast_HeadVar1_3 = profile__HeadVar__1_1;
    MR_ArrayPtr profile__Cast_HeadVar2_4 = profile__HeadVar__2_2;

    {
      profile__succeeded = mercury__array____Unify____array_1_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) profile__Cast_HeadVar1_3, (MR_ArrayPtr) profile__Cast_HeadVar2_4);
    }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____proc_dynamic_ptr_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_6 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_7 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_6 == profile__CastY_7);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;
        MR_Integer profile__V_5_5 = (MR_Integer) profile__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_4_4, profile__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____proc_dynamic_ptr_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_5 == profile__CastY_6);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_Integer profile__V_3_3 = (MR_Integer) profile__HeadVar__1_1;
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;

        profile__succeeded = (profile__V_3_3 == profile__V_4_4);
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____proc_dynamic_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_12 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_13 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_12 == profile__CastY_13);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_ArrayPtr profile__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
        MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word profile__V_10_10;
        MR_Integer profile__V_17_17 = (MR_Integer) profile__V_4_4;
        MR_Integer profile__V_18_18 = (MR_Integer) profile__V_7_7;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_10_10, profile__V_17_17, profile__V_18_18);
        }
        profile__succeeded = (profile__V_10_10 == (MR_Integer) 0);
        profile__succeeded = !(profile__succeeded);
        if (profile__succeeded)
          *profile__HeadVar__1_1 = profile__V_10_10;
        else
          {
            MR_Word profile__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[25], &profile__V_11_11, ((MR_Box) (profile__V_5_5)), ((MR_Box) (profile__V_8_8)));
            }
            profile__succeeded = (profile__V_11_11 == (MR_Integer) 0);
            profile__succeeded = !(profile__succeeded);
            if (profile__succeeded)
              *profile__HeadVar__1_1 = profile__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[4], profile__HeadVar__1_1, ((MR_Box) (profile__V_6_6)), ((MR_Box) (profile__V_9_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____proc_dynamic_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_9 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_10 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_9 == profile__CastY_10);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_Word profile__TypeCtorInfo_11_11;
        MR_Word profile__TypeInfo_12_12;
        MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
        MR_ArrayPtr profile__V_4_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer profile__CastX_15 = (MR_Integer) profile__V_3_3;
        MR_Integer profile__CastY_16 = (MR_Integer) profile__V_6_6;

        profile__succeeded = (profile__CastX_15 == profile__CastY_16);
        if (profile__succeeded)
          profile__succeeded = MR_TRUE;
        else
          {
            MR_Integer profile__V_13_13 = (MR_Integer) profile__V_3_3;
            MR_Integer profile__V_14_14 = (MR_Integer) profile__V_6_6;

            profile__succeeded = (profile__V_13_13 == profile__V_14_14);
          }
        if (profile__succeeded)
          {
            profile__TypeCtorInfo_11_11 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
            {
              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_11_11, (MR_ArrayPtr) profile__V_4_4, (MR_ArrayPtr) profile__V_7_7);
            }
            if (profile__succeeded)
              {
                profile__TypeInfo_12_12 = (MR_Word) &profile_scalar_common_1[4];
                {
                  profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_12_12, ((MR_Box) (profile__V_5_5)), ((MR_Box) (profile__V_8_8)));
                }
              }
          }
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____module_data_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_12 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_13 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_12 == profile__CastY_13);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word profile__V_10_10;

        {
          measurements____Compare____own_prof_info_0_0(&profile__V_10_10, profile__V_4_4, profile__V_7_7);
        }
        profile__succeeded = (profile__V_10_10 == (MR_Integer) 0);
        profile__succeeded = !(profile__succeeded);
        if (profile__succeeded)
          *profile__HeadVar__1_1 = profile__V_10_10;
        else
          {
            MR_Word profile__V_11_11;

            {
              measurements____Compare____inherit_prof_info_0_0(&profile__V_11_11, profile__V_5_5, profile__V_8_8);
            }
            profile__succeeded = (profile__V_11_11 == (MR_Integer) 0);
            profile__succeeded = !(profile__succeeded);
            if (profile__succeeded)
              *profile__HeadVar__1_1 = profile__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[24], profile__HeadVar__1_1, ((MR_Box) (profile__V_6_6)), ((MR_Box) (profile__V_9_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____module_data_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_9 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_10 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_9 == profile__CastY_10);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_Word profile__TypeInfo_13_13;
        MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));

        {
          profile__succeeded = measurements____Unify____own_prof_info_0_0(profile__V_3_3, profile__V_6_6);
        }
        if (profile__succeeded)
          {
            {
              profile__succeeded = measurements____Unify____inherit_prof_info_0_0(profile__V_4_4, profile__V_7_7);
            }
            if (profile__succeeded)
              {
                profile__TypeInfo_13_13 = (MR_Word) &profile_scalar_common_1[24];
                {
                  profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_13_13, ((MR_Box) (profile__V_5_5)), ((MR_Box) (profile__V_8_8)));
                }
              }
          }
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____is_zeroed_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__Cast_HeadVar1_4 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__Cast_HeadVar2_5 = (MR_Integer) profile__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__Cast_HeadVar1_4, profile__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
profile____Unify____is_zeroed_0_0(
  MR_Word profile__HeadVar__2_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded = (profile__HeadVar__2_1 == profile__HeadVar__2_2);

    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____initial_deep_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_21 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_22 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_21 == profile__CastY_22);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
        MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
        MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
        MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
        MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
        MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 3)));
        MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 4)));
        MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word profile__V_16_16;

        {
          profile____Compare____profile_stats_0_0(&profile__V_16_16, profile__V_4_4, profile__V_10_10);
        }
        profile__succeeded = (profile__V_16_16 == (MR_Integer) 0);
        profile__succeeded = !(profile__succeeded);
        if (profile__succeeded)
          *profile__HeadVar__1_1 = profile__V_16_16;
        else
          {
            MR_Word profile__V_17_17;
            MR_Integer profile__V_29_29 = (MR_Integer) profile__V_5_5;
            MR_Integer profile__V_30_30 = (MR_Integer) profile__V_11_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_17_17, profile__V_29_29, profile__V_30_30);
            }
            profile__succeeded = (profile__V_17_17 == (MR_Integer) 0);
            profile__succeeded = !(profile__succeeded);
            if (profile__succeeded)
              *profile__HeadVar__1_1 = profile__V_17_17;
            else
              {
                MR_Word profile__V_18_18;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[9], &profile__V_18_18, ((MR_Box) (profile__V_6_6)), ((MR_Box) (profile__V_12_12)));
                }
                profile__succeeded = (profile__V_18_18 == (MR_Integer) 0);
                profile__succeeded = !(profile__succeeded);
                if (profile__succeeded)
                  *profile__HeadVar__1_1 = profile__V_18_18;
                else
                  {
                    MR_Word profile__V_19_19;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[13], &profile__V_19_19, ((MR_Box) (profile__V_7_7)), ((MR_Box) (profile__V_13_13)));
                    }
                    profile__succeeded = (profile__V_19_19 == (MR_Integer) 0);
                    profile__succeeded = !(profile__succeeded);
                    if (profile__succeeded)
                      *profile__HeadVar__1_1 = profile__V_19_19;
                    else
                      {
                        MR_Word profile__V_20_20;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[12], &profile__V_20_20, ((MR_Box) (profile__V_8_8)), ((MR_Box) (profile__V_14_14)));
                        }
                        profile__succeeded = (profile__V_20_20 == (MR_Integer) 0);
                        profile__succeeded = !(profile__succeeded);
                        if (profile__succeeded)
                          *profile__HeadVar__1_1 = profile__V_20_20;
                        else
                          {
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[14], profile__HeadVar__1_1, ((MR_Box) (profile__V_9_9)), ((MR_Box) (profile__V_15_15)));
                            }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____initial_deep_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_15 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_16 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_15 == profile__CastY_16);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_Word profile__TypeCtorInfo_17_17;
        MR_Word profile__TypeCtorInfo_18_18;
        MR_Word profile__TypeCtorInfo_19_19;
        MR_Word profile__TypeCtorInfo_20_20;
        MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
        MR_ArrayPtr profile__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
        MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 3)));
        MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 4)));
        MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
        MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
        MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
        MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer profile__CastX_23;
        MR_Integer profile__CastY_24;

        {
          profile__succeeded = profile____Unify____profile_stats_0_0(profile__V_3_3, profile__V_9_9);
        }
        if (profile__succeeded)
          {
            profile__CastX_23 = (MR_Integer) profile__V_4_4;
            profile__CastY_24 = (MR_Integer) profile__V_10_10;
            profile__succeeded = (profile__CastX_23 == profile__CastY_24);
            if (profile__succeeded)
              profile__succeeded = MR_TRUE;
            else
              {
                MR_Integer profile__V_21_21 = (MR_Integer) profile__V_4_4;
                MR_Integer profile__V_22_22 = (MR_Integer) profile__V_10_10;

                profile__succeeded = (profile__V_21_21 == profile__V_22_22);
              }
            if (profile__succeeded)
              {
                profile__TypeCtorInfo_17_17 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
                {
                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_17_17, (MR_ArrayPtr) profile__V_5_5, (MR_ArrayPtr) profile__V_11_11);
                }
                if (profile__succeeded)
                  {
                    profile__TypeCtorInfo_18_18 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
                    {
                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_18_18, (MR_ArrayPtr) profile__V_6_6, (MR_ArrayPtr) profile__V_12_12);
                    }
                    if (profile__succeeded)
                      {
                        profile__TypeCtorInfo_19_19 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_0;
                        {
                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_19_19, (MR_ArrayPtr) profile__V_7_7, (MR_ArrayPtr) profile__V_13_13);
                        }
                        if (profile__succeeded)
                          {
                            profile__TypeCtorInfo_20_20 = (MR_Word) &profile__profile__type_ctor_info_proc_static_0;
                            {
                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_20_20, (MR_ArrayPtr) profile__V_8_8, (MR_ArrayPtr) profile__V_14_14);
                            }
                          }
                      }
                  }
              }
          }
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____deep_flags_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_14 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_15 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_14 == profile__CastY_15);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer profile__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer profile__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word profile__V_12_12;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_12_12, profile__V_4_4, profile__V_8_8);
        }
        profile__succeeded = (profile__V_12_12 == (MR_Integer) 0);
        profile__succeeded = !(profile__succeeded);
        if (profile__succeeded)
          *profile__HeadVar__1_1 = profile__V_12_12;
        else
          {
            MR_Word profile__V_13_13;
            MR_Integer profile__V_19_19 = (MR_Integer) profile__V_5_5;
            MR_Integer profile__V_20_20 = (MR_Integer) profile__V_9_9;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_13_13, profile__V_19_19, profile__V_20_20);
            }
            profile__succeeded = (profile__V_13_13 == (MR_Integer) 0);
            profile__succeeded = !(profile__succeeded);
            if (profile__succeeded)
              *profile__HeadVar__1_1 = profile__V_13_13;
            else
              {
                MR_Integer profile__V_21_21 = (MR_Integer) profile__V_7_7;
                MR_Integer profile__V_22_22 = (MR_Integer) profile__V_11_11;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_21_21, profile__V_22_22);
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____deep_flags_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_11 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_12 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_11 == profile__CastY_12);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_Integer profile__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer profile__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));

        profile__succeeded = (profile__V_3_3 == profile__V_7_7);
        if (profile__succeeded)
          {
            profile__succeeded = (profile__V_4_4 == profile__V_8_8);
            if (profile__succeeded)
              profile__succeeded = (profile__V_6_6 == profile__V_10_10);
          }
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____deep_compression_flag_0_0(
  MR_Word * profile__HeadVar__1_1)
{
  {
    MR_bool profile__succeeded;

    {
      profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_114_111_102_105_108_101_95_95_100_101_101_112_95_99_111_109_112_114_101_115_115_105_111_110_95_102_108_97_103_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(profile__HeadVar__1_1);
    }
  }
}

MR_bool MR_CALL 
profile____Unify____deep_compression_flag_0_0(void)
{
  {
    MR_bool profile__succeeded;

    {
      profile__succeeded = profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_114_111_102_105_108_101_95_95_100_101_101_112_95_99_111_109_112_114_101_115_115_105_111_110_95_102_108_97_103_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____deep_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_90 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_91 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_90 == profile__CastY_91);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_String profile__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_String profile__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
        MR_String profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
        MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
        MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 6)));
        MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 7)));
        MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 8)));
        MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 9)));
        MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 10)));
        MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 11)));
        MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 12)));
        MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 13)));
        MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 14)));
        MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 15)));
        MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 16)));
        MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 17)));
        MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 18)));
        MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 19)));
        MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 20)));
        MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 21)));
        MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 22)));
        MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 23)));
        MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 24)));
        MR_Word profile__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 25)));
        MR_Word profile__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 26)));
        MR_Word profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 27)));
        MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 28)));
        MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
        MR_String profile__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
        MR_String profile__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
        MR_String profile__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word profile__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 4)));
        MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 5)));
        MR_ArrayPtr profile__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 6)));
        MR_ArrayPtr profile__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 7)));
        MR_ArrayPtr profile__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 8)));
        MR_ArrayPtr profile__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 9)));
        MR_ArrayPtr profile__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 10)));
        MR_ArrayPtr profile__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 11)));
        MR_ArrayPtr profile__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 12)));
        MR_ArrayPtr profile__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 13)));
        MR_ArrayPtr profile__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 14)));
        MR_ArrayPtr profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 15)));
        MR_ArrayPtr profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 16)));
        MR_ArrayPtr profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 17)));
        MR_ArrayPtr profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 18)));
        MR_ArrayPtr profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 19)));
        MR_ArrayPtr profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 20)));
        MR_ArrayPtr profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 21)));
        MR_ArrayPtr profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 22)));
        MR_ArrayPtr profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 23)));
        MR_ArrayPtr profile__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 24)));
        MR_Word profile__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 25)));
        MR_Word profile__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 26)));
        MR_Word profile__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 27)));
        MR_Word profile__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 28)));
        MR_Word profile__V_62_62;

        {
          profile____Compare____profile_stats_0_0(&profile__V_62_62, profile__V_4_4, profile__V_33_33);
        }
        profile__succeeded = (profile__V_62_62 == (MR_Integer) 0);
        profile__succeeded = !(profile__succeeded);
        if (profile__succeeded)
          *profile__HeadVar__1_1 = profile__V_62_62;
        else
          {
            MR_Word profile__V_63_63;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_63_63, profile__V_5_5, profile__V_34_34);
            }
            profile__succeeded = (profile__V_63_63 == (MR_Integer) 0);
            profile__succeeded = !(profile__succeeded);
            if (profile__succeeded)
              *profile__HeadVar__1_1 = profile__V_63_63;
            else
              {
                MR_Word profile__V_64_64;

                {
                  mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_64_64, profile__V_6_6, profile__V_35_35);
                }
                profile__succeeded = (profile__V_64_64 == (MR_Integer) 0);
                profile__succeeded = !(profile__succeeded);
                if (profile__succeeded)
                  *profile__HeadVar__1_1 = profile__V_64_64;
                else
                  {
                    MR_Word profile__V_65_65;

                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(&profile__V_65_65, profile__V_7_7, profile__V_36_36);
                    }
                    profile__succeeded = (profile__V_65_65 == (MR_Integer) 0);
                    profile__succeeded = !(profile__succeeded);
                    if (profile__succeeded)
                      *profile__HeadVar__1_1 = profile__V_65_65;
                    else
                      {
                        MR_Word profile__V_66_66;
                        MR_Integer profile__V_121_121 = (MR_Integer) profile__V_8_8;
                        MR_Integer profile__V_122_122 = (MR_Integer) profile__V_37_37;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_66_66, profile__V_121_121, profile__V_122_122);
                        }
                        profile__succeeded = (profile__V_66_66 == (MR_Integer) 0);
                        profile__succeeded = !(profile__succeeded);
                        if (profile__succeeded)
                          *profile__HeadVar__1_1 = profile__V_66_66;
                        else
                          {
                            MR_Word profile__V_67_67;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[9], &profile__V_67_67, ((MR_Box) (profile__V_9_9)), ((MR_Box) (profile__V_38_38)));
                            }
                            profile__succeeded = (profile__V_67_67 == (MR_Integer) 0);
                            profile__succeeded = !(profile__succeeded);
                            if (profile__succeeded)
                              *profile__HeadVar__1_1 = profile__V_67_67;
                            else
                              {
                                MR_Word profile__V_68_68;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[13], &profile__V_68_68, ((MR_Box) (profile__V_10_10)), ((MR_Box) (profile__V_39_39)));
                                }
                                profile__succeeded = (profile__V_68_68 == (MR_Integer) 0);
                                profile__succeeded = !(profile__succeeded);
                                if (profile__succeeded)
                                  *profile__HeadVar__1_1 = profile__V_68_68;
                                else
                                  {
                                    MR_Word profile__V_69_69;

                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[12], &profile__V_69_69, ((MR_Box) (profile__V_11_11)), ((MR_Box) (profile__V_40_40)));
                                    }
                                    profile__succeeded = (profile__V_69_69 == (MR_Integer) 0);
                                    profile__succeeded = !(profile__succeeded);
                                    if (profile__succeeded)
                                      *profile__HeadVar__1_1 = profile__V_69_69;
                                    else
                                      {
                                        MR_Word profile__V_70_70;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[14], &profile__V_70_70, ((MR_Box) (profile__V_12_12)), ((MR_Box) (profile__V_41_41)));
                                        }
                                        profile__succeeded = (profile__V_70_70 == (MR_Integer) 0);
                                        profile__succeeded = !(profile__succeeded);
                                        if (profile__succeeded)
                                          *profile__HeadVar__1_1 = profile__V_70_70;
                                        else
                                          {
                                            MR_Word profile__V_71_71;

                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[15], &profile__V_71_71, ((MR_Box) (profile__V_13_13)), ((MR_Box) (profile__V_42_42)));
                                            }
                                            profile__succeeded = (profile__V_71_71 == (MR_Integer) 0);
                                            profile__succeeded = !(profile__succeeded);
                                            if (profile__succeeded)
                                              *profile__HeadVar__1_1 = profile__V_71_71;
                                            else
                                              {
                                                MR_Word profile__V_72_72;

                                                {
                                                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[16], &profile__V_72_72, ((MR_Box) (profile__V_14_14)), ((MR_Box) (profile__V_43_43)));
                                                }
                                                profile__succeeded = (profile__V_72_72 == (MR_Integer) 0);
                                                profile__succeeded = !(profile__succeeded);
                                                if (profile__succeeded)
                                                  *profile__HeadVar__1_1 = profile__V_72_72;
                                                else
                                                  {
                                                    MR_Word profile__V_73_73;

                                                    {
                                                      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[8], &profile__V_73_73, ((MR_Box) (profile__V_15_15)), ((MR_Box) (profile__V_44_44)));
                                                    }
                                                    profile__succeeded = (profile__V_73_73 == (MR_Integer) 0);
                                                    profile__succeeded = !(profile__succeeded);
                                                    if (profile__succeeded)
                                                      *profile__HeadVar__1_1 = profile__V_73_73;
                                                    else
                                                      {
                                                        MR_Word profile__V_74_74;

                                                        {
                                                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[17], &profile__V_74_74, ((MR_Box) (profile__V_16_16)), ((MR_Box) (profile__V_45_45)));
                                                        }
                                                        profile__succeeded = (profile__V_74_74 == (MR_Integer) 0);
                                                        profile__succeeded = !(profile__succeeded);
                                                        if (profile__succeeded)
                                                          *profile__HeadVar__1_1 = profile__V_74_74;
                                                        else
                                                          {
                                                            MR_Word profile__V_75_75;

                                                            {
                                                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[18], &profile__V_75_75, ((MR_Box) (profile__V_17_17)), ((MR_Box) (profile__V_46_46)));
                                                            }
                                                            profile__succeeded = (profile__V_75_75 == (MR_Integer) 0);
                                                            profile__succeeded = !(profile__succeeded);
                                                            if (profile__succeeded)
                                                              *profile__HeadVar__1_1 = profile__V_75_75;
                                                            else
                                                              {
                                                                MR_Word profile__V_76_76;

                                                                {
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[11], &profile__V_76_76, ((MR_Box) (profile__V_18_18)), ((MR_Box) (profile__V_47_47)));
                                                                }
                                                                profile__succeeded = (profile__V_76_76 == (MR_Integer) 0);
                                                                profile__succeeded = !(profile__succeeded);
                                                                if (profile__succeeded)
                                                                  *profile__HeadVar__1_1 = profile__V_76_76;
                                                                else
                                                                  {
                                                                    MR_Word profile__V_77_77;

                                                                    {
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[19], &profile__V_77_77, ((MR_Box) (profile__V_19_19)), ((MR_Box) (profile__V_48_48)));
                                                                    }
                                                                    profile__succeeded = (profile__V_77_77 == (MR_Integer) 0);
                                                                    profile__succeeded = !(profile__succeeded);
                                                                    if (profile__succeeded)
                                                                      *profile__HeadVar__1_1 = profile__V_77_77;
                                                                    else
                                                                      {
                                                                        MR_Word profile__V_78_78;

                                                                        {
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[6], &profile__V_78_78, ((MR_Box) (profile__V_20_20)), ((MR_Box) (profile__V_49_49)));
                                                                        }
                                                                        profile__succeeded = (profile__V_78_78 == (MR_Integer) 0);
                                                                        profile__succeeded = !(profile__succeeded);
                                                                        if (profile__succeeded)
                                                                          *profile__HeadVar__1_1 = profile__V_78_78;
                                                                        else
                                                                          {
                                                                            MR_Word profile__V_79_79;

                                                                            {
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[5], &profile__V_79_79, ((MR_Box) (profile__V_21_21)), ((MR_Box) (profile__V_50_50)));
                                                                            }
                                                                            profile__succeeded = (profile__V_79_79 == (MR_Integer) 0);
                                                                            profile__succeeded = !(profile__succeeded);
                                                                            if (profile__succeeded)
                                                                              *profile__HeadVar__1_1 = profile__V_79_79;
                                                                            else
                                                                              {
                                                                                MR_Word profile__V_80_80;

                                                                                {
                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[5], &profile__V_80_80, ((MR_Box) (profile__V_22_22)), ((MR_Box) (profile__V_51_51)));
                                                                                }
                                                                                profile__succeeded = (profile__V_80_80 == (MR_Integer) 0);
                                                                                profile__succeeded = !(profile__succeeded);
                                                                                if (profile__succeeded)
                                                                                  *profile__HeadVar__1_1 = profile__V_80_80;
                                                                                else
                                                                                  {
                                                                                    MR_Word profile__V_81_81;

                                                                                    {
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[6], &profile__V_81_81, ((MR_Box) (profile__V_23_23)), ((MR_Box) (profile__V_52_52)));
                                                                                    }
                                                                                    profile__succeeded = (profile__V_81_81 == (MR_Integer) 0);
                                                                                    profile__succeeded = !(profile__succeeded);
                                                                                    if (profile__succeeded)
                                                                                      *profile__HeadVar__1_1 = profile__V_81_81;
                                                                                    else
                                                                                      {
                                                                                        MR_Word profile__V_82_82;

                                                                                        {
                                                                                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[5], &profile__V_82_82, ((MR_Box) (profile__V_24_24)), ((MR_Box) (profile__V_53_53)));
                                                                                        }
                                                                                        profile__succeeded = (profile__V_82_82 == (MR_Integer) 0);
                                                                                        profile__succeeded = !(profile__succeeded);
                                                                                        if (profile__succeeded)
                                                                                          *profile__HeadVar__1_1 = profile__V_82_82;
                                                                                        else
                                                                                          {
                                                                                            MR_Word profile__V_83_83;

                                                                                            {
                                                                                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[6], &profile__V_83_83, ((MR_Box) (profile__V_25_25)), ((MR_Box) (profile__V_54_54)));
                                                                                            }
                                                                                            profile__succeeded = (profile__V_83_83 == (MR_Integer) 0);
                                                                                            profile__succeeded = !(profile__succeeded);
                                                                                            if (profile__succeeded)
                                                                                              *profile__HeadVar__1_1 = profile__V_83_83;
                                                                                            else
                                                                                              {
                                                                                                MR_Word profile__V_84_84;

                                                                                                {
                                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[5], &profile__V_84_84, ((MR_Box) (profile__V_26_26)), ((MR_Box) (profile__V_55_55)));
                                                                                                }
                                                                                                profile__succeeded = (profile__V_84_84 == (MR_Integer) 0);
                                                                                                profile__succeeded = !(profile__succeeded);
                                                                                                if (profile__succeeded)
                                                                                                  *profile__HeadVar__1_1 = profile__V_84_84;
                                                                                                else
                                                                                                  {
                                                                                                    MR_Word profile__V_85_85;

                                                                                                    {
                                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[7], &profile__V_85_85, ((MR_Box) (profile__V_27_27)), ((MR_Box) (profile__V_56_56)));
                                                                                                    }
                                                                                                    profile__succeeded = (profile__V_85_85 == (MR_Integer) 0);
                                                                                                    profile__succeeded = !(profile__succeeded);
                                                                                                    if (profile__succeeded)
                                                                                                      *profile__HeadVar__1_1 = profile__V_85_85;
                                                                                                    else
                                                                                                      {
                                                                                                        MR_Word profile__V_86_86;

                                                                                                        {
                                                                                                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[7], &profile__V_86_86, ((MR_Box) (profile__V_28_28)), ((MR_Box) (profile__V_57_57)));
                                                                                                        }
                                                                                                        profile__succeeded = (profile__V_86_86 == (MR_Integer) 0);
                                                                                                        profile__succeeded = !(profile__succeeded);
                                                                                                        if (profile__succeeded)
                                                                                                          *profile__HeadVar__1_1 = profile__V_86_86;
                                                                                                        else
                                                                                                          {
                                                                                                            MR_Word profile__V_87_87;

                                                                                                            {
                                                                                                              mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_2[2], &profile__V_87_87, ((MR_Box) (profile__V_29_29)), ((MR_Box) (profile__V_58_58)));
                                                                                                            }
                                                                                                            profile__succeeded = (profile__V_87_87 == (MR_Integer) 0);
                                                                                                            profile__succeeded = !(profile__succeeded);
                                                                                                            if (profile__succeeded)
                                                                                                              *profile__HeadVar__1_1 = profile__V_87_87;
                                                                                                            else
                                                                                                              {
                                                                                                                MR_Word profile__V_88_88;

                                                                                                                {
                                                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[21], &profile__V_88_88, ((MR_Box) (profile__V_30_30)), ((MR_Box) (profile__V_59_59)));
                                                                                                                }
                                                                                                                profile__succeeded = (profile__V_88_88 == (MR_Integer) 0);
                                                                                                                profile__succeeded = !(profile__succeeded);
                                                                                                                if (profile__succeeded)
                                                                                                                  *profile__HeadVar__1_1 = profile__V_88_88;
                                                                                                                else
                                                                                                                  {
                                                                                                                    MR_Word profile__V_89_89;

                                                                                                                    {
                                                                                                                      exclude____Compare____exclude_file_0_0(&profile__V_89_89, profile__V_31_31, profile__V_60_60);
                                                                                                                    }
                                                                                                                    profile__succeeded = (profile__V_89_89 == (MR_Integer) 0);
                                                                                                                    profile__succeeded = !(profile__succeeded);
                                                                                                                    if (profile__succeeded)
                                                                                                                      *profile__HeadVar__1_1 = profile__V_89_89;
                                                                                                                    else
                                                                                                                      {
                                                                                                                        {
                                                                                                                          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[23], profile__HeadVar__1_1, ((MR_Box) (profile__V_32_32)), ((MR_Box) (profile__V_61_61)));
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____deep_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_61 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_62 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_61 == profile__CastY_62);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_Word profile__TypeCtorInfo_63_63;
        MR_Word profile__TypeCtorInfo_64_64;
        MR_Word profile__TypeCtorInfo_65_65;
        MR_Word profile__TypeCtorInfo_66_66;
        MR_Word profile__TypeCtorInfo_67_67;
        MR_Word profile__TypeInfo_68_68;
        MR_Word profile__TypeCtorInfo_69_69;
        MR_Word profile__TypeInfo_70_70;
        MR_Word profile__TypeInfo_71_71;
        MR_Word profile__TypeCtorInfo_72_72;
        MR_Word profile__TypeInfo_73_73;
        MR_Word profile__TypeCtorInfo_74_74;
        MR_Word profile__TypeCtorInfo_75_75;
        MR_Word profile__TypeCtorInfo_76_76;
        MR_Word profile__TypeCtorInfo_77_77;
        MR_Word profile__TypeCtorInfo_78_78;
        MR_Word profile__TypeCtorInfo_79_79;
        MR_Word profile__TypeCtorInfo_80_80;
        MR_Word profile__TypeInfo_81_81;
        MR_Word profile__TypeInfo_82_82;
        MR_Word profile__TypeInfo_83_83;
        MR_Word profile__TypeInfo_84_84;
        MR_Word profile__TypeInfo_86_86;
        MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
        MR_String profile__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
        MR_String profile__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
        MR_String profile__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 4)));
        MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 5)));
        MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 6)));
        MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 7)));
        MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 8)));
        MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 9)));
        MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 10)));
        MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 11)));
        MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 12)));
        MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 13)));
        MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 14)));
        MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 15)));
        MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 16)));
        MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 17)));
        MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 18)));
        MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 19)));
        MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 20)));
        MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 21)));
        MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 22)));
        MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 23)));
        MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 24)));
        MR_Word profile__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 25)));
        MR_Word profile__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 26)));
        MR_Word profile__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 27)));
        MR_Word profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 28)));
        MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_String profile__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_String profile__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
        MR_String profile__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
        MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 5)));
        MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 6)));
        MR_ArrayPtr profile__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 7)));
        MR_ArrayPtr profile__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 8)));
        MR_ArrayPtr profile__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 9)));
        MR_ArrayPtr profile__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 10)));
        MR_ArrayPtr profile__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 11)));
        MR_ArrayPtr profile__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 12)));
        MR_ArrayPtr profile__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 13)));
        MR_ArrayPtr profile__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 14)));
        MR_ArrayPtr profile__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 15)));
        MR_ArrayPtr profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 16)));
        MR_ArrayPtr profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 17)));
        MR_ArrayPtr profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 18)));
        MR_ArrayPtr profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 19)));
        MR_ArrayPtr profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 20)));
        MR_ArrayPtr profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 21)));
        MR_ArrayPtr profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 22)));
        MR_ArrayPtr profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 23)));
        MR_ArrayPtr profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 24)));
        MR_Word profile__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 25)));
        MR_Word profile__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 26)));
        MR_Word profile__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 27)));
        MR_Word profile__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 28)));
        MR_Integer profile__CastX_89;
        MR_Integer profile__CastY_90;

        {
          profile__succeeded = profile____Unify____profile_stats_0_0(profile__V_3_3, profile__V_32_32);
        }
        if (profile__succeeded)
          {
            profile__succeeded = (strcmp(profile__V_4_4, profile__V_33_33) == 0);
            if (profile__succeeded)
              {
                profile__succeeded = (strcmp(profile__V_5_5, profile__V_34_34) == 0);
                if (profile__succeeded)
                  {
                    profile__succeeded = (strcmp(profile__V_6_6, profile__V_35_35) == 0);
                    if (profile__succeeded)
                      {
                        profile__CastX_89 = (MR_Integer) profile__V_7_7;
                        profile__CastY_90 = (MR_Integer) profile__V_36_36;
                        profile__succeeded = (profile__CastX_89 == profile__CastY_90);
                        if (profile__succeeded)
                          profile__succeeded = MR_TRUE;
                        else
                          {
                            MR_Integer profile__V_87_87 = (MR_Integer) profile__V_7_7;
                            MR_Integer profile__V_88_88 = (MR_Integer) profile__V_36_36;

                            profile__succeeded = (profile__V_87_87 == profile__V_88_88);
                          }
                        if (profile__succeeded)
                          {
                            profile__TypeCtorInfo_63_63 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
                            {
                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_63_63, (MR_ArrayPtr) profile__V_8_8, (MR_ArrayPtr) profile__V_37_37);
                            }
                            if (profile__succeeded)
                              {
                                profile__TypeCtorInfo_64_64 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
                                {
                                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_64_64, (MR_ArrayPtr) profile__V_9_9, (MR_ArrayPtr) profile__V_38_38);
                                }
                                if (profile__succeeded)
                                  {
                                    profile__TypeCtorInfo_65_65 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_0;
                                    {
                                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_65_65, (MR_ArrayPtr) profile__V_10_10, (MR_ArrayPtr) profile__V_39_39);
                                    }
                                    if (profile__succeeded)
                                      {
                                        profile__TypeCtorInfo_66_66 = (MR_Word) &profile__profile__type_ctor_info_proc_static_0;
                                        {
                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_66_66, (MR_ArrayPtr) profile__V_11_11, (MR_ArrayPtr) profile__V_40_40);
                                        }
                                        if (profile__succeeded)
                                          {
                                            profile__TypeCtorInfo_67_67 = (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0;
                                            {
                                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_67_67, (MR_ArrayPtr) profile__V_12_12, (MR_ArrayPtr) profile__V_41_41);
                                            }
                                            if (profile__succeeded)
                                              {
                                                profile__TypeInfo_68_68 = (MR_Word) &profile_scalar_common_1[0];
                                                {
                                                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_68_68, (MR_ArrayPtr) profile__V_13_13, (MR_ArrayPtr) profile__V_42_42);
                                                }
                                                if (profile__succeeded)
                                                  {
                                                    profile__TypeCtorInfo_69_69 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
                                                    {
                                                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_69_69, (MR_ArrayPtr) profile__V_14_14, (MR_ArrayPtr) profile__V_43_43);
                                                    }
                                                    if (profile__succeeded)
                                                      {
                                                        profile__TypeInfo_70_70 = (MR_Word) &profile_scalar_common_1[1];
                                                        {
                                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_70_70, (MR_ArrayPtr) profile__V_15_15, (MR_ArrayPtr) profile__V_44_44);
                                                        }
                                                        if (profile__succeeded)
                                                          {
                                                            profile__TypeInfo_71_71 = (MR_Word) &profile_scalar_common_1[2];
                                                            {
                                                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_71_71, (MR_ArrayPtr) profile__V_16_16, (MR_ArrayPtr) profile__V_45_45);
                                                            }
                                                            if (profile__succeeded)
                                                              {
                                                                profile__TypeCtorInfo_72_72 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
                                                                {
                                                                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_72_72, (MR_ArrayPtr) profile__V_17_17, (MR_ArrayPtr) profile__V_46_46);
                                                                }
                                                                if (profile__succeeded)
                                                                  {
                                                                    profile__TypeInfo_73_73 = (MR_Word) &profile_scalar_common_2[0];
                                                                    {
                                                                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_73_73, (MR_ArrayPtr) profile__V_18_18, (MR_ArrayPtr) profile__V_47_47);
                                                                    }
                                                                    if (profile__succeeded)
                                                                      {
                                                                        profile__TypeCtorInfo_74_74 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
                                                                        {
                                                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_74_74, (MR_ArrayPtr) profile__V_19_19, (MR_ArrayPtr) profile__V_48_48);
                                                                        }
                                                                        if (profile__succeeded)
                                                                          {
                                                                            profile__TypeCtorInfo_75_75 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
                                                                            {
                                                                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_75_75, (MR_ArrayPtr) profile__V_20_20, (MR_ArrayPtr) profile__V_49_49);
                                                                            }
                                                                            if (profile__succeeded)
                                                                              {
                                                                                profile__TypeCtorInfo_76_76 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
                                                                                {
                                                                                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_76_76, (MR_ArrayPtr) profile__V_21_21, (MR_ArrayPtr) profile__V_50_50);
                                                                                }
                                                                                if (profile__succeeded)
                                                                                  {
                                                                                    profile__TypeCtorInfo_77_77 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
                                                                                    {
                                                                                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_77_77, (MR_ArrayPtr) profile__V_22_22, (MR_ArrayPtr) profile__V_51_51);
                                                                                    }
                                                                                    if (profile__succeeded)
                                                                                      {
                                                                                        profile__TypeCtorInfo_78_78 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
                                                                                        {
                                                                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_78_78, (MR_ArrayPtr) profile__V_23_23, (MR_ArrayPtr) profile__V_52_52);
                                                                                        }
                                                                                        if (profile__succeeded)
                                                                                          {
                                                                                            profile__TypeCtorInfo_79_79 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
                                                                                            {
                                                                                              profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_79_79, (MR_ArrayPtr) profile__V_24_24, (MR_ArrayPtr) profile__V_53_53);
                                                                                            }
                                                                                            if (profile__succeeded)
                                                                                              {
                                                                                                profile__TypeCtorInfo_80_80 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
                                                                                                {
                                                                                                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_80_80, (MR_ArrayPtr) profile__V_25_25, (MR_ArrayPtr) profile__V_54_54);
                                                                                                }
                                                                                                if (profile__succeeded)
                                                                                                  {
                                                                                                    profile__TypeInfo_81_81 = (MR_Word) &profile_scalar_common_2[1];
                                                                                                    {
                                                                                                      profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_81_81, (MR_ArrayPtr) profile__V_26_26, (MR_ArrayPtr) profile__V_55_55);
                                                                                                    }
                                                                                                    if (profile__succeeded)
                                                                                                      {
                                                                                                        profile__TypeInfo_82_82 = (MR_Word) &profile_scalar_common_2[1];
                                                                                                        {
                                                                                                          profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeInfo_82_82, (MR_ArrayPtr) profile__V_27_27, (MR_ArrayPtr) profile__V_56_56);
                                                                                                        }
                                                                                                        if (profile__succeeded)
                                                                                                          {
                                                                                                            profile__TypeInfo_83_83 = (MR_Word) &profile_scalar_common_2[2];
                                                                                                            {
                                                                                                              profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_83_83, ((MR_Box) (profile__V_28_28)), ((MR_Box) (profile__V_57_57)));
                                                                                                            }
                                                                                                            if (profile__succeeded)
                                                                                                              {
                                                                                                                profile__TypeInfo_84_84 = (MR_Word) &profile_scalar_common_1[21];
                                                                                                                {
                                                                                                                  profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_84_84, ((MR_Box) (profile__V_29_29)), ((MR_Box) (profile__V_58_58)));
                                                                                                                }
                                                                                                                if (profile__succeeded)
                                                                                                                  {
                                                                                                                    {
                                                                                                                      profile__succeeded = exclude____Unify____exclude_file_0_0(profile__V_30_30, profile__V_59_59);
                                                                                                                    }
                                                                                                                    if (profile__succeeded)
                                                                                                                      {
                                                                                                                        profile__TypeInfo_86_86 = (MR_Word) &profile_scalar_common_1[23];
                                                                                                                        {
                                                                                                                          profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_86_86, ((MR_Box) (profile__V_31_31)), ((MR_Box) (profile__V_60_60)));
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____coverage_data_type_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__Cast_HeadVar1_4 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__Cast_HeadVar2_5 = (MR_Integer) profile__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__Cast_HeadVar1_4, profile__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
profile____Unify____coverage_data_type_0_0(
  MR_Word profile__HeadVar__2_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded = (profile__HeadVar__2_1 == profile__HeadVar__2_2);

    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____compensation_table_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__Cast_HeadVar1_4 = profile__HeadVar__2_2;
    MR_Word profile__Cast_HeadVar2_5 = profile__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_2[1], profile__HeadVar__1_1, ((MR_Box) (profile__Cast_HeadVar1_4)), ((MR_Box) (profile__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
profile____Unify____compensation_table_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__Cast_HeadVar1_3 = profile__HeadVar__1_1;
    MR_Word profile__Cast_HeadVar2_4 = profile__HeadVar__2_2;

    {
      profile__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &profile_scalar_common_2[1], ((MR_Box) (profile__Cast_HeadVar1_3)), ((MR_Box) (profile__Cast_HeadVar2_4)));
    }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____clique_ptr_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_6 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_7 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_6 == profile__CastY_7);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;
        MR_Integer profile__V_5_5 = (MR_Integer) profile__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_4_4, profile__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____clique_ptr_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_5 == profile__CastY_6);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_Integer profile__V_3_3 = (MR_Integer) profile__HeadVar__1_1;
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;

        profile__succeeded = (profile__V_3_3 == profile__V_4_4);
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____canonical_flag_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__Cast_HeadVar1_4 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__Cast_HeadVar2_5 = (MR_Integer) profile__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__Cast_HeadVar1_4, profile__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
profile____Unify____canonical_flag_0_0(
  MR_Word profile__HeadVar__2_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded = (profile__HeadVar__2_1 == profile__HeadVar__2_2);

    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_statics_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_ArrayPtr profile__HeadVar__2_2,
  MR_ArrayPtr profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__Cast_HeadVar1_4 = profile__HeadVar__2_2;
    MR_ArrayPtr profile__Cast_HeadVar2_5 = profile__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[12], profile__HeadVar__1_1, ((MR_Box) (profile__Cast_HeadVar1_4)), ((MR_Box) (profile__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_statics_0_0(
  MR_ArrayPtr profile__HeadVar__1_1,
  MR_ArrayPtr profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__Cast_HeadVar1_3 = profile__HeadVar__1_1;
    MR_ArrayPtr profile__Cast_HeadVar2_4 = profile__HeadVar__2_2;

    {
      profile__succeeded = mercury__array____Unify____array_1_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_ArrayPtr) profile__Cast_HeadVar1_3, (MR_ArrayPtr) profile__Cast_HeadVar2_4);
    }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_static_ptr_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_6 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_7 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_6 == profile__CastY_7);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;
        MR_Integer profile__V_5_5 = (MR_Integer) profile__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_4_4, profile__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_static_ptr_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_5 == profile__CastY_6);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_Integer profile__V_3_3 = (MR_Integer) profile__HeadVar__1_1;
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;

        profile__succeeded = (profile__V_3_3 == profile__V_4_4);
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_static_map_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_ArrayPtr profile__HeadVar__2_2,
  MR_ArrayPtr profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__Cast_HeadVar1_4 = profile__HeadVar__2_2;
    MR_ArrayPtr profile__Cast_HeadVar2_5 = profile__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[11], profile__HeadVar__1_1, ((MR_Box) (profile__Cast_HeadVar1_4)), ((MR_Box) (profile__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_static_map_0_0(
  MR_ArrayPtr profile__HeadVar__1_1,
  MR_ArrayPtr profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__Cast_HeadVar1_3 = profile__HeadVar__1_1;
    MR_ArrayPtr profile__Cast_HeadVar2_4 = profile__HeadVar__2_2;

    {
      profile__succeeded = mercury__array____Unify____array_1_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) profile__Cast_HeadVar1_3, (MR_ArrayPtr) profile__Cast_HeadVar2_4);
    }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_static_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_18 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_19 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_18 == profile__CastY_19);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer profile__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer profile__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer profile__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer profile__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word profile__V_14_14;
        MR_Integer profile__V_25_25 = (MR_Integer) profile__V_4_4;
        MR_Integer profile__V_26_26 = (MR_Integer) profile__V_9_9;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_14_14, profile__V_25_25, profile__V_26_26);
        }
        profile__succeeded = (profile__V_14_14 == (MR_Integer) 0);
        profile__succeeded = !(profile__succeeded);
        if (profile__succeeded)
          *profile__HeadVar__1_1 = profile__V_14_14;
        else
          {
            MR_Word profile__V_15_15;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_15_15, profile__V_5_5, profile__V_10_10);
            }
            profile__succeeded = (profile__V_15_15 == (MR_Integer) 0);
            profile__succeeded = !(profile__succeeded);
            if (profile__succeeded)
              *profile__HeadVar__1_1 = profile__V_15_15;
            else
              {
                MR_Word profile__V_16_16;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[10], &profile__V_16_16, ((MR_Box) (profile__V_6_6)), ((MR_Box) (profile__V_11_11)));
                }
                profile__succeeded = (profile__V_16_16 == (MR_Integer) 0);
                profile__succeeded = !(profile__succeeded);
                if (profile__succeeded)
                  *profile__HeadVar__1_1 = profile__V_16_16;
                else
                  {
                    MR_Word profile__V_17_17;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_17_17, profile__V_7_7, profile__V_12_12);
                    }
                    profile__succeeded = (profile__V_17_17 == (MR_Integer) 0);
                    profile__succeeded = !(profile__succeeded);
                    if (profile__succeeded)
                      *profile__HeadVar__1_1 = profile__V_17_17;
                    else
                      {
                        mdbcomp__goal_path____Compare____reverse_goal_path_0_0(profile__HeadVar__1_1, profile__V_8_8, profile__V_13_13);
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_static_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_13 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_14 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_13 == profile__CastY_14);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_Word profile__TypeCtorInfo_15_15;
        MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer profile__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer profile__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer profile__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer profile__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer profile__CastX_19 = (MR_Integer) profile__V_3_3;
        MR_Integer profile__CastY_20 = (MR_Integer) profile__V_8_8;

        profile__succeeded = (profile__CastX_19 == profile__CastY_20);
        if (profile__succeeded)
          profile__succeeded = MR_TRUE;
        else
          {
            MR_Integer profile__V_17_17 = (MR_Integer) profile__V_3_3;
            MR_Integer profile__V_18_18 = (MR_Integer) profile__V_8_8;

            profile__succeeded = (profile__V_17_17 == profile__V_18_18);
          }
        if (profile__succeeded)
          {
            profile__succeeded = (profile__V_4_4 == profile__V_9_9);
            if (profile__succeeded)
              {
                profile__TypeCtorInfo_15_15 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
                {
                  profile__succeeded = profile____Unify____call_site_kind_and_callee_1_0(profile__TypeCtorInfo_15_15, profile__V_5_5, profile__V_10_10);
                }
                if (profile__succeeded)
                  {
                    profile__succeeded = (profile__V_6_6 == profile__V_11_11);
                    if (profile__succeeded)
                      {
                        profile__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(profile__V_7_7, profile__V_12_12);
                      }
                  }
              }
          }
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_kind_and_info_1_0(
  MR_Word profile__TypeInfo_for_T_16,
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_14 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_15 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_14 == profile__CastY_15);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) profile__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(profile__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) profile__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(profile__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *profile__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *profile__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *profile__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *profile__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *profile__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) profile__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(profile__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *profile__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *profile__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *profile__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *profile__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *profile__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) profile__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(profile__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *profile__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *profile__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *profile__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *profile__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *profile__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) profile__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(profile__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *profile__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *profile__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *profile__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *profile__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *profile__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box profile__V_17_17 = (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) profile__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(profile__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *profile__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *profile__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *profile__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *profile__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box profile__V_5_5 = (MR_hl_field(MR_mktag(1), profile__HeadVar__3_3, (MR_Integer) 0));

                  {
                    mercury__builtin__compare_3_p_0(profile__TypeInfo_for_T_16, profile__HeadVar__1_1, profile__V_17_17, profile__V_5_5);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_kind_and_info_1_0(
  MR_Word profile__TypeInfo_for_T_15,
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_13 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_14 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_13 == profile__CastY_14);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) profile__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(profile__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
                MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

                profile__succeeded = (profile__CastY_6 == profile__CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer profile__CastX_7 = (MR_Integer) profile__HeadVar__1_1;
                MR_Integer profile__CastY_8 = (MR_Integer) profile__HeadVar__2_2;

                profile__succeeded = (profile__CastY_8 == profile__CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer profile__CastX_9 = (MR_Integer) profile__HeadVar__1_1;
                MR_Integer profile__CastY_10 = (MR_Integer) profile__HeadVar__2_2;

                profile__succeeded = (profile__CastY_10 == profile__CastX_9);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer profile__CastX_11 = (MR_Integer) profile__HeadVar__1_1;
                MR_Integer profile__CastY_12 = (MR_Integer) profile__HeadVar__2_2;

                profile__succeeded = (profile__CastY_12 == profile__CastX_11);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box profile__V_3_3 = (MR_hl_field(MR_mktag(1), profile__HeadVar__1_1, (MR_Integer) 0));
            MR_Box profile__V_4_4;

            profile__succeeded = ((MR_tag((MR_Word) profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (profile__succeeded)
              {
                profile__V_4_4 = (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 0));
                {
                  profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_for_T_15, profile__V_3_3, profile__V_4_4);
                }
              }
          }
          break;
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_kind_and_callee_1_0(
  MR_Word profile__TypeInfo_for_T_27,
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_25 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_26 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_25 == profile__CastY_26);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) profile__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(profile__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) profile__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(profile__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *profile__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *profile__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *profile__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *profile__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *profile__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) profile__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(profile__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *profile__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *profile__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *profile__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *profile__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *profile__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) profile__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(profile__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *profile__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *profile__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *profile__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *profile__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *profile__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) profile__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(profile__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *profile__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *profile__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *profile__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *profile__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *profile__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String profile__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box profile__V_30_30 = (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) profile__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(profile__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *profile__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *profile__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *profile__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *profile__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box profile__V_6_6 = (MR_hl_field(MR_mktag(1), profile__HeadVar__3_3, (MR_Integer) 0));
                  MR_String profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word profile__V_8_8;

                  {
                    mercury__builtin__compare_3_p_0(profile__TypeInfo_for_T_27, &profile__V_8_8, profile__V_30_30, profile__V_6_6);
                  }
                  profile__succeeded = (profile__V_8_8 == (MR_Integer) 0);
                  profile__succeeded = !(profile__succeeded);
                  if (profile__succeeded)
                    *profile__HeadVar__1_1 = profile__V_8_8;
                  else
                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(profile__HeadVar__1_1, profile__V_29_29, profile__V_7_7);
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_1_0(
  MR_Word profile__TypeInfo_for_T_17,
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_15 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_16 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_15 == profile__CastY_16);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) profile__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(profile__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer profile__CastX_7 = (MR_Integer) profile__HeadVar__1_1;
                MR_Integer profile__CastY_8 = (MR_Integer) profile__HeadVar__2_2;

                profile__succeeded = (profile__CastY_8 == profile__CastX_7);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer profile__CastX_9 = (MR_Integer) profile__HeadVar__1_1;
                MR_Integer profile__CastY_10 = (MR_Integer) profile__HeadVar__2_2;

                profile__succeeded = (profile__CastY_10 == profile__CastX_9);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer profile__CastX_11 = (MR_Integer) profile__HeadVar__1_1;
                MR_Integer profile__CastY_12 = (MR_Integer) profile__HeadVar__2_2;

                profile__succeeded = (profile__CastY_12 == profile__CastX_11);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer profile__CastX_13 = (MR_Integer) profile__HeadVar__1_1;
                MR_Integer profile__CastY_14 = (MR_Integer) profile__HeadVar__2_2;

                profile__succeeded = (profile__CastY_14 == profile__CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box profile__V_3_3 = (MR_hl_field(MR_mktag(1), profile__HeadVar__1_1, (MR_Integer) 0));
            MR_String profile__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box profile__V_5_5;
            MR_String profile__V_6_6;

            profile__succeeded = ((MR_tag((MR_Word) profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (profile__succeeded)
              {
                profile__V_5_5 = (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 0));
                profile__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 1)));
                {
                  profile__succeeded = mercury__builtin__unify_2_p_0(profile__TypeInfo_for_T_17, profile__V_3_3, profile__V_5_5);
                }
                if (profile__succeeded)
                  profile__succeeded = (strcmp(profile__V_4_4, profile__V_6_6) == 0);
              }
          }
          break;
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_kind_and_callee_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__Cast_HeadVar1_4 = profile__HeadVar__2_2;
    MR_Word profile__Cast_HeadVar2_5 = profile__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[10], profile__HeadVar__1_1, ((MR_Box) (profile__Cast_HeadVar1_4)), ((MR_Box) (profile__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__Cast_HeadVar1_3 = profile__HeadVar__1_1;
    MR_Word profile__Cast_HeadVar2_4 = profile__HeadVar__2_2;

    {
      profile__succeeded = profile____Unify____call_site_kind_and_callee_1_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, profile__Cast_HeadVar1_3, profile__Cast_HeadVar2_4);
    }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_kind_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__Cast_HeadVar1_4 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__Cast_HeadVar2_5 = (MR_Integer) profile__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__Cast_HeadVar1_4, profile__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_kind_0_0(
  MR_Word profile__HeadVar__2_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded = (profile__HeadVar__2_1 == profile__HeadVar__2_2);

    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_dynamics_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_ArrayPtr profile__HeadVar__2_2,
  MR_ArrayPtr profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__Cast_HeadVar1_4 = profile__HeadVar__2_2;
    MR_ArrayPtr profile__Cast_HeadVar2_5 = profile__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[9], profile__HeadVar__1_1, ((MR_Box) (profile__Cast_HeadVar1_4)), ((MR_Box) (profile__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_dynamics_0_0(
  MR_ArrayPtr profile__HeadVar__1_1,
  MR_ArrayPtr profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__Cast_HeadVar1_3 = profile__HeadVar__1_1;
    MR_ArrayPtr profile__Cast_HeadVar2_4 = profile__HeadVar__2_2;

    {
      profile__succeeded = mercury__array____Unify____array_1_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) profile__Cast_HeadVar1_3, (MR_ArrayPtr) profile__Cast_HeadVar2_4);
    }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_dynamic_ptr_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_6 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_7 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_6 == profile__CastY_7);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;
        MR_Integer profile__V_5_5 = (MR_Integer) profile__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_4_4, profile__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_dynamic_ptr_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_5 == profile__CastY_6);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_Integer profile__V_3_3 = (MR_Integer) profile__HeadVar__1_1;
        MR_Integer profile__V_4_4 = (MR_Integer) profile__HeadVar__2_2;

        profile__succeeded = (profile__V_3_3 == profile__V_4_4);
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_dynamic_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_12 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_13 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_12 == profile__CastY_13);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word profile__V_10_10;
        MR_Integer profile__V_17_17 = (MR_Integer) profile__V_4_4;
        MR_Integer profile__V_18_18 = (MR_Integer) profile__V_7_7;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_10_10, profile__V_17_17, profile__V_18_18);
        }
        profile__succeeded = (profile__V_10_10 == (MR_Integer) 0);
        profile__succeeded = !(profile__succeeded);
        if (profile__succeeded)
          *profile__HeadVar__1_1 = profile__V_10_10;
        else
          {
            MR_Word profile__V_11_11;
            MR_Integer profile__V_19_19 = (MR_Integer) profile__V_5_5;
            MR_Integer profile__V_20_20 = (MR_Integer) profile__V_8_8;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_11_11, profile__V_19_19, profile__V_20_20);
            }
            profile__succeeded = (profile__V_11_11 == (MR_Integer) 0);
            profile__succeeded = !(profile__succeeded);
            if (profile__succeeded)
              *profile__HeadVar__1_1 = profile__V_11_11;
            else
              {
                measurements____Compare____own_prof_info_0_0(profile__HeadVar__1_1, profile__V_6_6, profile__V_9_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_dynamic_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_9 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_10 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_9 == profile__CastY_10);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer profile__CastX_14 = (MR_Integer) profile__V_3_3;
        MR_Integer profile__CastY_15 = (MR_Integer) profile__V_6_6;
        MR_Integer profile__CastX_18;
        MR_Integer profile__CastY_19;

        profile__succeeded = (profile__CastX_14 == profile__CastY_15);
        if (profile__succeeded)
          profile__succeeded = MR_TRUE;
        else
          {
            MR_Integer profile__V_12_12 = (MR_Integer) profile__V_3_3;
            MR_Integer profile__V_13_13 = (MR_Integer) profile__V_6_6;

            profile__succeeded = (profile__V_12_12 == profile__V_13_13);
          }
        if (profile__succeeded)
          {
            profile__CastX_18 = (MR_Integer) profile__V_4_4;
            profile__CastY_19 = (MR_Integer) profile__V_7_7;
            profile__succeeded = (profile__CastX_18 == profile__CastY_19);
            if (profile__succeeded)
              profile__succeeded = MR_TRUE;
            else
              {
                MR_Integer profile__V_16_16 = (MR_Integer) profile__V_4_4;
                MR_Integer profile__V_17_17 = (MR_Integer) profile__V_7_7;

                profile__succeeded = (profile__V_16_16 == profile__V_17_17);
              }
            if (profile__succeeded)
              {
                profile__succeeded = measurements____Unify____own_prof_info_0_0(profile__V_5_5, profile__V_8_8);
              }
          }
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_caller_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_6 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_7 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_6 == profile__CastY_7);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word profile__V_4_4 = (MR_Word) profile__HeadVar__2_2;
        MR_Word profile__V_5_5 = (MR_Word) profile__HeadVar__3_3;
        MR_Integer profile__V_9_9 = (MR_Integer) profile__V_4_4;
        MR_Integer profile__V_10_10 = (MR_Integer) profile__V_5_5;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_9_9, profile__V_10_10);
        }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_caller_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_5 == profile__CastY_6);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_Word profile__V_3_3 = (MR_Word) profile__HeadVar__1_1;
        MR_Word profile__V_4_4 = (MR_Word) profile__HeadVar__2_2;
        MR_Integer profile__CastX_9 = (MR_Integer) profile__V_3_3;
        MR_Integer profile__CastY_10 = (MR_Integer) profile__V_4_4;

        profile__succeeded = (profile__CastX_9 == profile__CastY_10);
        if (profile__succeeded)
          profile__succeeded = MR_TRUE;
        else
          {
            MR_Integer profile__V_7_7 = (MR_Integer) profile__V_3_3;
            MR_Integer profile__V_8_8 = (MR_Integer) profile__V_4_4;

            profile__succeeded = (profile__V_7_7 == profile__V_8_8);
          }
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_callees_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_6 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_7 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_6 == profile__CastY_7);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word profile__V_4_4 = (MR_Word) profile__HeadVar__2_2;
        MR_Word profile__V_5_5 = (MR_Word) profile__HeadVar__3_3;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[0], profile__HeadVar__1_1, ((MR_Box) (profile__V_4_4)), ((MR_Box) (profile__V_5_5)));
        }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_callees_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_5 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_6 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_5 == profile__CastY_6);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
      {
        MR_Word profile__V_3_3 = (MR_Word) profile__HeadVar__1_1;
        MR_Word profile__V_4_4 = (MR_Word) profile__HeadVar__2_2;

        {
          profile__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &profile_scalar_common_1[0], ((MR_Box) (profile__V_3_3)), ((MR_Box) (profile__V_4_4)));
        }
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_array_slot_0_0(
  MR_Word * profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2,
  MR_Word profile__HeadVar__3_3)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_17 = (MR_Integer) profile__HeadVar__2_2;
    MR_Integer profile__CastY_18 = (MR_Integer) profile__HeadVar__3_3;

    profile__succeeded = (profile__CastX_17 == profile__CastY_18);
    if (profile__succeeded)
      *profile__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word profile__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) profile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), profile__HeadVar__3_3, (MR_Integer) 0)));
            MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), profile__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word profile__V_16_16;
            MR_Integer profile__V_25_25 = (MR_Integer) profile__V_23_23;
            MR_Integer profile__V_26_26 = (MR_Integer) profile__V_14_14;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&profile__V_16_16, profile__V_25_25, profile__V_26_26);
            }
            profile__succeeded = (profile__V_16_16 == (MR_Integer) 0);
            profile__succeeded = !(profile__succeeded);
            if (profile__succeeded)
              *profile__HeadVar__1_1 = profile__V_16_16;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &profile_scalar_common_1[8], profile__HeadVar__1_1, ((MR_Box) (profile__V_22_22)), ((MR_Box) (profile__V_15_15)));
                }
              }
          }
        else
          *profile__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word profile__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) profile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *profile__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer profile__V_27_27 = (MR_Integer) profile__V_24_24;
            MR_Integer profile__V_28_28 = (MR_Integer) profile__V_5_5;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(profile__HeadVar__1_1, profile__V_27_27, profile__V_28_28);
            }
          }
      }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_array_slot_0_0(
  MR_Word profile__HeadVar__1_1,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CastX_9 = (MR_Integer) profile__HeadVar__1_1;
    MR_Integer profile__CastY_10 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CastX_9 == profile__CastY_10);
    if (profile__succeeded)
      profile__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) profile__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word profile__TypeCtorInfo_11_11;
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), profile__HeadVar__1_1, (MR_Integer) 0)));
        MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), profile__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word profile__V_7_7;
        MR_ArrayPtr profile__V_8_8;

        profile__succeeded = ((MR_tag((MR_Word) profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (profile__succeeded)
          {
            profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 0)));
            profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), profile__HeadVar__2_2, (MR_Integer) 1)));
            profile__succeeded = (profile__V_5_5 == profile__V_7_7);
            if (profile__succeeded)
              {
                profile__TypeCtorInfo_11_11 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
                {
                  profile__succeeded = mercury__array____Unify____array_1_0(profile__TypeCtorInfo_11_11, (MR_ArrayPtr) profile__V_6_6, (MR_ArrayPtr) profile__V_8_8);
                }
              }
          }
      }
    else
      {
        MR_Word profile__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word profile__V_4_4;
        MR_Integer profile__CastX_14;
        MR_Integer profile__CastY_15;

        profile__succeeded = ((MR_tag((MR_Word) profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (profile__succeeded)
          {
            profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__HeadVar__2_2, (MR_Integer) 0)));
            profile__CastX_14 = (MR_Integer) profile__V_3_3;
            profile__CastY_15 = (MR_Integer) profile__V_4_4;
            profile__succeeded = (profile__CastX_14 == profile__CastY_15);
            if (profile__succeeded)
              profile__succeeded = MR_TRUE;
            else
              {
                MR_Integer profile__V_12_12 = (MR_Integer) profile__V_3_3;
                MR_Integer profile__V_13_13 = (MR_Integer) profile__V_4_4;

                profile__succeeded = (profile__V_12_12 == profile__V_13_13);
              }
          }
      }
    return profile__succeeded;
  }
}

void MR_CALL 
profile__deep_get_maybe_progrep_2_p_0(
  MR_Word profile__Deep_3,
  MR_Word * profile__MaybeProgRep_4)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__MaybeProgRep0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
    MR_Word profile__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
    MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
    MR_String profile__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
    MR_String profile__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
    MR_Word profile__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
    MR_Word profile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
    MR_Word profile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
    MR_Word profile__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));

    if ((profile__MaybeProgRep0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *profile__MaybeProgRep_4 = (MR_Word) MR_mkword(MR_mktag(1), &profile_scalar_common_4[0]);
      }
    else
      {
        MR_Word profile__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), profile__MaybeProgRep0_5, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) profile__V_45_45)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String profile__Error_6 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__V_45_45, (MR_Integer) 0)));
            MR_String profile__V_10_10;
            MR_String profile__V_12_12;

            {
              profile__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "information file: ", profile__Error_6);
            }
            {
              profile__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading procedure representation ", profile__V_12_12);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *profile__MaybeProgRep_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (profile__V_10_10));
            }
          }
        else
          *profile__MaybeProgRep_4 = profile__V_45_45;
      }
  }
}

void MR_CALL 
profile__deep_get_progrep_det_2_p_0(
  MR_Word profile__Deep_3,
  MR_Word * profile__ProgRep_4)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__MaybeProgRep_5;

    {
      profile__deep_get_maybe_progrep_2_p_0(profile__Deep_3, &profile__MaybeProgRep_5);
    }
    if (((MR_tag((MR_Word) profile__MaybeProgRep_5)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String profile__Error_6 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__MaybeProgRep_5, (MR_Integer) 0)));

        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.deep_get_progrep_det\'/2", profile__Error_6);
          return;
        }
      }
    else
      *profile__ProgRep_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__MaybeProgRep_5, (MR_Integer) 0)));
  }
}

MR_Word MR_CALL 
profile__root_own_info_1_f_0(
  MR_Word profile__Deep_3)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__RootOwn_4;
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
    MR_Integer profile__PDI_37 = (MR_Integer) profile__V_5_5;
    MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
    MR_String profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
    MR_String profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
    MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
    MR_Word profile__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
    MR_Word profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
    MR_Box profile__conv0_RootOwn_4;

    {
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__V_21_21, profile__PDI_37, &profile__conv0_RootOwn_4);
    }
    profile__RootOwn_4 = ((MR_Word) profile__conv0_RootOwn_4);
    return profile__RootOwn_4;
  }
}

MR_Word MR_CALL 
profile__root_desc_info_1_f_0(
  MR_Word profile__Deep_3)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__RootDesc_4;
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
    MR_Integer profile__PDI_37 = (MR_Integer) profile__V_5_5;
    MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
    MR_String profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
    MR_String profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
    MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
    MR_Word profile__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
    MR_Word profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
    MR_Box profile__conv0_RootDesc_4;

    {
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__V_22_22, profile__PDI_37, &profile__conv0_RootDesc_4);
    }
    profile__RootDesc_4 = ((MR_Word) profile__conv0_RootDesc_4);
    return profile__RootDesc_4;
  }
}

MR_Word MR_CALL 
profile__root_total_info_1_f_0(
  MR_Word profile__Deep_3)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__RootTotal_4;
    MR_Word profile__RootOwn_5;
    MR_Word profile__RootDesc_6;
    MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
    MR_Word profile__V_8_8;
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
    MR_Word profile__V_37_37;
    MR_String profile__V_38_38;
    MR_String profile__V_39_39;
    MR_String profile__V_40_40;
    MR_ArrayPtr profile__V_41_41;
    MR_ArrayPtr profile__V_42_42;
    MR_ArrayPtr profile__V_43_43;
    MR_ArrayPtr profile__V_44_44;
    MR_ArrayPtr profile__V_45_45;
    MR_ArrayPtr profile__V_46_46;
    MR_ArrayPtr profile__V_47_47;
    MR_ArrayPtr profile__V_48_48;
    MR_ArrayPtr profile__V_49_49;
    MR_ArrayPtr profile__V_50_50;
    MR_ArrayPtr profile__V_51_51;
    MR_ArrayPtr profile__V_52_52;
    MR_ArrayPtr profile__V_53_53;
    MR_ArrayPtr profile__V_54_54;
    MR_ArrayPtr profile__V_55_55;
    MR_ArrayPtr profile__V_56_56;
    MR_ArrayPtr profile__V_57_57;
    MR_ArrayPtr profile__V_58_58;
    MR_ArrayPtr profile__V_59_59;
    MR_ArrayPtr profile__V_60_60;
    MR_Word profile__V_61_61;
    MR_Word profile__V_62_62;
    MR_Word profile__V_63_63;
    MR_Word profile__V_64_64;

    {
      profile__deep_lookup_pd_own_3_p_0(profile__Deep_3, profile__V_7_7, &profile__RootOwn_5);
    }
    profile__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
    profile__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
    profile__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
    profile__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
    profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
    profile__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
    profile__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
    profile__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
    profile__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
    profile__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
    profile__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
    profile__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
    profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
    profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
    profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
    profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
    profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
    profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
    profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
    profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
    profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
    profile__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
    profile__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
    profile__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
    profile__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
    profile__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
    profile__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
    profile__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
    profile__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
    {
      profile__deep_lookup_pd_desc_3_p_0(profile__Deep_3, profile__V_8_8, &profile__RootDesc_6);
    }
    {
      profile__RootTotal_4 = measurements__add_own_to_inherit_2_f_0(profile__RootOwn_5, profile__RootDesc_6);
    }
    return profile__RootTotal_4;
  }
}

MR_Word MR_CALL 
profile__wrap_proc_static_ptr_1_f_0(
  MR_Integer profile__PSI_3)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__HeadVar__2_2 = (MR_Word) profile__PSI_3;

    return profile__HeadVar__2_2;
  }
}

void MR_CALL 
profile__deep_extract_csdptr_callee_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__CalleePDPtr_6)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__CSD_7;
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
    MR_Word profile__V_37_37;
    MR_Word profile__V_38_38;

    {
      profile__lookup_call_site_dynamics_3_p_0(profile__V_8_8, profile__CSDPtr_5, &profile__CSD_7);
    }
    profile__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 0)));
    *profile__CalleePDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 1)));
    profile__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 2)));
  }
}

void MR_CALL 
profile__deep_extract_csdptr_caller_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__CallerPDPtr_6)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__CSD_7;
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
    MR_Word profile__V_37_37;
    MR_Word profile__V_38_38;

    {
      profile__lookup_call_site_dynamics_3_p_0(profile__V_8_8, profile__CSDPtr_5, &profile__CSD_7);
    }
    *profile__CallerPDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 0)));
    profile__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 1)));
    profile__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 2)));
  }
}

void MR_CALL 
profile__extract_init_root_2_p_0(
  MR_Word profile__InitDeep_3,
  MR_Word * profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
    MR_ArrayPtr profile__V_5_5;
    MR_ArrayPtr profile__V_6_6;
    MR_ArrayPtr profile__V_7_7;
    MR_ArrayPtr profile__V_8_8;

    *profile__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
    profile__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
    profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
    profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
    profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
profile__extract_init_proc_statics_2_p_0(
  MR_Word profile__InitDeep_3,
  MR_ArrayPtr * profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
    MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));

    *profile__HeadVar__2_2 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
profile__extract_init_proc_dynamics_2_p_0(
  MR_Word profile__InitDeep_3,
  MR_ArrayPtr * profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
    MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
    MR_ArrayPtr profile__V_7_7;
    MR_ArrayPtr profile__V_8_8;

    *profile__HeadVar__2_2 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
    profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
    profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
profile__extract_init_call_site_statics_2_p_0(
  MR_Word profile__InitDeep_3,
  MR_ArrayPtr * profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
    MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
    MR_ArrayPtr profile__V_8_8;

    *profile__HeadVar__2_2 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
    profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
profile__extract_init_call_site_dynamics_2_p_0(
  MR_Word profile__InitDeep_3,
  MR_ArrayPtr * profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
    MR_ArrayPtr profile__V_6_6;
    MR_ArrayPtr profile__V_7_7;
    MR_ArrayPtr profile__V_8_8;

    *profile__HeadVar__2_2 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
    profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
    profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
    profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
profile__extract_max_pd_2_p_0(
  MR_Word profile__InitDeep_3,
  MR_Integer * profile__MaxPD_4)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
    MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
    MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));

    {
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) profile__V_5_5, profile__MaxPD_4);
    }
  }
}

void MR_CALL 
profile__extract_max_csd_2_p_0(
  MR_Word profile__InitDeep_3,
  MR_Integer * profile__MaxCSD_4)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
    MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
    MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));

    {
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) profile__V_5_5, profile__MaxCSD_4);
    }
  }
}

void MR_CALL 
profile__extract_max_ps_2_p_0(
  MR_Word profile__InitDeep_3,
  MR_Integer * profile__MaxPS_4)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
    MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
    MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
    MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));

    {
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_ArrayPtr) profile__V_5_5, profile__MaxPS_4);
    }
  }
}

void MR_CALL 
profile__extract_max_css_2_p_0(
  MR_Word profile__InitDeep_3,
  MR_Integer * profile__MaxCSS_4)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
    MR_Word profile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
    MR_Word profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
    MR_ArrayPtr profile__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));

    {
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_ArrayPtr) profile__V_5_5, profile__MaxCSS_4);
    }
  }
}

void MR_CALL 
profile__extract_num_callseqs_2_p_0(
  MR_Word profile__InitDeep_3,
  MR_Integer * profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
    MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 0)));
    MR_Integer profile__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 1)));
    MR_Integer profile__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 2)));
    MR_Integer profile__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 3)));
    MR_Integer profile__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 4)));
    MR_Integer profile__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 5)));
    MR_Integer profile__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 6)));
    MR_Integer profile__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 7)));
    MR_Word profile__V_18_18;

    *profile__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 8)));
    profile__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 9)));
  }
}

void MR_CALL 
profile__extract_user_quanta_2_p_0(
  MR_Word profile__InitDeep_3,
  MR_Integer * profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
    MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 0)));
    MR_Integer profile__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 1)));
    MR_Integer profile__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 2)));
    MR_Integer profile__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 3)));
    MR_Integer profile__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 4)));
    MR_Integer profile__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 5)));
    MR_Integer profile__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 6)));
    MR_Integer profile__V_17_17;
    MR_Word profile__V_18_18;

    *profile__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 7)));
    profile__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 8)));
    profile__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 9)));
  }
}

void MR_CALL 
profile__extract_instrument_quanta_2_p_0(
  MR_Word profile__InitDeep_3,
  MR_Integer * profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
    MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 0)));
    MR_Integer profile__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 1)));
    MR_Integer profile__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 2)));
    MR_Integer profile__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 3)));
    MR_Integer profile__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 4)));
    MR_Integer profile__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 5)));
    MR_Integer profile__V_16_16;
    MR_Integer profile__V_17_17;
    MR_Word profile__V_18_18;

    *profile__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 6)));
    profile__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 7)));
    profile__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 8)));
    profile__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 9)));
  }
}

void MR_CALL 
profile__extract_ticks_per_sec_2_p_0(
  MR_Word profile__InitDeep_3,
  MR_Integer * profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 0)));
    MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 1)));
    MR_ArrayPtr profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 2)));
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 3)));
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_3, (MR_Integer) 5)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 0)));
    MR_Integer profile__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 1)));
    MR_Integer profile__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 2)));
    MR_Integer profile__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 3)));
    MR_Integer profile__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 4)));
    MR_Integer profile__V_15_15;
    MR_Integer profile__V_16_16;
    MR_Integer profile__V_17_17;
    MR_Word profile__V_18_18;

    *profile__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 5)));
    profile__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 6)));
    profile__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 7)));
    profile__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 8)));
    profile__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__V_4_4, (MR_Integer) 9)));
  }
}

void MR_CALL 
profile__extract_csdptr_callee_3_p_0(
  MR_Word profile__InitDeep_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__CalleePDPtr_6)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__CSD_7;
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 2)));
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 0)));
    MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 1)));
    MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 3)));
    MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 5)));
    MR_Word profile__V_14_14;
    MR_Word profile__V_15_15;

    {
      profile__lookup_call_site_dynamics_3_p_0(profile__V_8_8, profile__CSDPtr_5, &profile__CSD_7);
    }
    profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 0)));
    *profile__CalleePDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 1)));
    profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 2)));
  }
}

void MR_CALL 
profile__extract_csdptr_caller_3_p_0(
  MR_Word profile__InitDeep_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__CallerPDPtr_6)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__CSD_7;
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 2)));
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 0)));
    MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 1)));
    MR_ArrayPtr profile__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 3)));
    MR_ArrayPtr profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__InitDeep_4, (MR_Integer) 5)));
    MR_Word profile__V_14_14;
    MR_Word profile__V_15_15;

    {
      profile__lookup_call_site_dynamics_3_p_0(profile__V_8_8, profile__CSDPtr_5, &profile__CSD_7);
    }
    *profile__CallerPDPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 0)));
    profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 1)));
    profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_7, (MR_Integer) 2)));
  }
}

void MR_CALL 
profile__extract_csd_callee_2_p_0(
  MR_Word profile__CSD_3,
  MR_Word * profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_3, (MR_Integer) 0)));
    MR_Word profile__V_5_5;

    *profile__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_3, (MR_Integer) 1)));
    profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_3, (MR_Integer) 2)));
  }
}

void MR_CALL 
profile__extract_csd_caller_2_p_0(
  MR_Word profile__CSD_3,
  MR_Word * profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__V_4_4;
    MR_Word profile__V_5_5;

    *profile__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_3, (MR_Integer) 0)));
    profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_3, (MR_Integer) 1)));
    profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_3, (MR_Integer) 2)));
  }
}

void MR_CALL 
profile__extract_pd_sites_2_p_0(
  MR_Word profile__PD_3,
  MR_ArrayPtr * profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__PD_3, (MR_Integer) 0)));
    MR_Word profile__V_5_5;

    *profile__HeadVar__2_2 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__PD_3, (MR_Integer) 1)));
    profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__PD_3, (MR_Integer) 2)));
  }
}

void MR_CALL 
profile__deep_update_csd_comp_table_4_p_0(
  MR_Word profile__CSDPtr_5,
  MR_Word profile__CompTable_6,
  MR_Word profile__STATE_VARIABLE_Deep_0_10,
  MR_Word * profile__STATE_VARIABLE_Deep_11)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSDI_8 = (MR_Integer) profile__CSDPtr_5;
    MR_ArrayPtr profile__CSDCompTables_9;
    MR_ArrayPtr profile__V_12_12;
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
    MR_Word profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
    MR_String profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
    MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
    MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
    MR_Word profile__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
    MR_Word profile__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
    MR_Word profile__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
    MR_Word profile__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
    MR_Word profile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
    MR_Box profile__conv0_V_12_12;
    MR_ArrayPtr profile__conv1_CSDCompTables_9;
    MR_Word profile__V_43_43;
    MR_String profile__V_44_44;
    MR_String profile__V_45_45;
    MR_String profile__V_46_46;
    MR_Word profile__V_47_47;
    MR_ArrayPtr profile__V_48_48;
    MR_ArrayPtr profile__V_49_49;
    MR_ArrayPtr profile__V_50_50;
    MR_ArrayPtr profile__V_51_51;
    MR_ArrayPtr profile__V_52_52;
    MR_ArrayPtr profile__V_53_53;
    MR_ArrayPtr profile__V_54_54;
    MR_ArrayPtr profile__V_55_55;
    MR_ArrayPtr profile__V_56_56;
    MR_ArrayPtr profile__V_57_57;
    MR_ArrayPtr profile__V_58_58;
    MR_ArrayPtr profile__V_59_59;
    MR_ArrayPtr profile__V_60_60;
    MR_ArrayPtr profile__V_61_61;
    MR_ArrayPtr profile__V_62_62;
    MR_ArrayPtr profile__V_63_63;
    MR_ArrayPtr profile__V_64_64;
    MR_ArrayPtr profile__V_65_65;
    MR_ArrayPtr profile__V_66_66;
    MR_Word profile__V_68_68;
    MR_Word profile__V_69_69;
    MR_Word profile__V_70_70;
    MR_Word profile__V_71_71;
    MR_ArrayPtr profile__V_67_67;

    {
      profile__conv0_V_12_12 = array_util__u_1_f_0((MR_Word) &profile_scalar_common_1[7], ((MR_Box) (profile__V_13_13)));
    }
    profile__V_12_12 = ((MR_ArrayPtr) profile__conv0_V_12_12);
    {
      mercury__array__set_4_p_0((MR_Word) &profile_scalar_common_2[1], profile__CSDI_8, ((MR_Box) (profile__CompTable_6)), (MR_ArrayPtr) profile__V_12_12, &profile__conv1_CSDCompTables_9);
    }
    profile__CSDCompTables_9 = (MR_ArrayPtr) profile__conv1_CSDCompTables_9;
    profile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
    profile__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
    profile__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
    profile__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
    profile__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
    profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
    profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
    profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
    profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
    profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
    profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
    profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
    profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
    profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
    profile__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
    profile__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
    profile__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
    profile__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
    profile__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
    profile__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
    profile__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
    profile__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
    profile__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
    profile__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
    profile__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
    profile__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
    profile__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
    profile__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
    profile__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
      *profile__STATE_VARIABLE_Deep_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (profile__V_43_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (profile__V_44_44));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (profile__V_45_45));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (profile__V_46_46));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (profile__V_47_47));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (profile__V_48_48));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (profile__V_49_49));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (profile__V_50_50));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (profile__V_51_51));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (profile__V_52_52));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (profile__V_53_53));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (profile__V_54_54));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (profile__V_55_55));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (profile__V_56_56));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (profile__V_57_57));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (profile__V_58_58));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (profile__V_59_59));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (profile__V_60_60));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (profile__V_61_61));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (profile__V_62_62));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (profile__V_63_63));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (profile__V_64_64));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (profile__V_65_65));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (profile__V_66_66));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (profile__CSDCompTables_9));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (profile__V_68_68));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (profile__V_69_69));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (profile__V_70_70));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (profile__V_71_71));
    }
  }
}

void MR_CALL 
profile__deep_update_pd_comp_table_4_p_0(
  MR_Word profile__PDPtr_5,
  MR_Word profile__CompTable_6,
  MR_Word profile__STATE_VARIABLE_Deep_0_10,
  MR_Word * profile__STATE_VARIABLE_Deep_11)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PDI_8 = (MR_Integer) profile__PDPtr_5;
    MR_ArrayPtr profile__PDCompTables_9;
    MR_ArrayPtr profile__V_12_12;
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
    MR_Word profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
    MR_String profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
    MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
    MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
    MR_Word profile__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
    MR_Word profile__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
    MR_Word profile__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
    MR_Word profile__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
    MR_Word profile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
    MR_Box profile__conv0_V_12_12;
    MR_ArrayPtr profile__conv1_PDCompTables_9;
    MR_Word profile__V_43_43;
    MR_String profile__V_44_44;
    MR_String profile__V_45_45;
    MR_String profile__V_46_46;
    MR_Word profile__V_47_47;
    MR_ArrayPtr profile__V_48_48;
    MR_ArrayPtr profile__V_49_49;
    MR_ArrayPtr profile__V_50_50;
    MR_ArrayPtr profile__V_51_51;
    MR_ArrayPtr profile__V_52_52;
    MR_ArrayPtr profile__V_53_53;
    MR_ArrayPtr profile__V_54_54;
    MR_ArrayPtr profile__V_55_55;
    MR_ArrayPtr profile__V_56_56;
    MR_ArrayPtr profile__V_57_57;
    MR_ArrayPtr profile__V_58_58;
    MR_ArrayPtr profile__V_59_59;
    MR_ArrayPtr profile__V_60_60;
    MR_ArrayPtr profile__V_61_61;
    MR_ArrayPtr profile__V_62_62;
    MR_ArrayPtr profile__V_63_63;
    MR_ArrayPtr profile__V_64_64;
    MR_ArrayPtr profile__V_65_65;
    MR_ArrayPtr profile__V_67_67;
    MR_Word profile__V_68_68;
    MR_Word profile__V_69_69;
    MR_Word profile__V_70_70;
    MR_Word profile__V_71_71;
    MR_ArrayPtr profile__V_66_66;

    {
      profile__conv0_V_12_12 = array_util__u_1_f_0((MR_Word) &profile_scalar_common_1[7], ((MR_Box) (profile__V_13_13)));
    }
    profile__V_12_12 = ((MR_ArrayPtr) profile__conv0_V_12_12);
    {
      mercury__array__set_4_p_0((MR_Word) &profile_scalar_common_2[1], profile__PDI_8, ((MR_Box) (profile__CompTable_6)), (MR_ArrayPtr) profile__V_12_12, &profile__conv1_PDCompTables_9);
    }
    profile__PDCompTables_9 = (MR_ArrayPtr) profile__conv1_PDCompTables_9;
    profile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
    profile__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
    profile__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
    profile__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
    profile__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
    profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
    profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
    profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
    profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
    profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
    profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
    profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
    profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
    profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
    profile__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
    profile__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
    profile__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
    profile__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
    profile__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
    profile__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
    profile__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
    profile__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
    profile__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
    profile__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
    profile__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
    profile__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
    profile__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
    profile__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
    profile__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
      *profile__STATE_VARIABLE_Deep_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (profile__V_43_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (profile__V_44_44));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (profile__V_45_45));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (profile__V_46_46));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (profile__V_47_47));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (profile__V_48_48));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (profile__V_49_49));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (profile__V_50_50));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (profile__V_51_51));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (profile__V_52_52));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (profile__V_53_53));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (profile__V_54_54));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (profile__V_55_55));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (profile__V_56_56));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (profile__V_57_57));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (profile__V_58_58));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (profile__V_59_59));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (profile__V_60_60));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (profile__V_61_61));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (profile__V_62_62));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (profile__V_63_63));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (profile__V_64_64));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (profile__V_65_65));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (profile__PDCompTables_9));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (profile__V_67_67));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (profile__V_68_68));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (profile__V_69_69));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (profile__V_70_70));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (profile__V_71_71));
    }
  }
}

void MR_CALL 
profile__deep_update_pd_own_4_p_0(
  MR_Word profile__PDPtr_5,
  MR_Word profile__PDOwn_6,
  MR_Word profile__STATE_VARIABLE_Deep_0_10,
  MR_Word * profile__STATE_VARIABLE_Deep_11)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PDI_8 = (MR_Integer) profile__PDPtr_5;
    MR_ArrayPtr profile__PDOwns_9;
    MR_ArrayPtr profile__V_12_12;
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
    MR_Word profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
    MR_String profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
    MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
    MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
    MR_Word profile__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
    MR_Word profile__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
    MR_Word profile__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
    MR_Word profile__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
    MR_Word profile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
    MR_Box profile__conv0_V_12_12;
    MR_ArrayPtr profile__conv1_PDOwns_9;
    MR_Word profile__V_43_43;
    MR_String profile__V_44_44;
    MR_String profile__V_45_45;
    MR_String profile__V_46_46;
    MR_Word profile__V_47_47;
    MR_ArrayPtr profile__V_48_48;
    MR_ArrayPtr profile__V_49_49;
    MR_ArrayPtr profile__V_50_50;
    MR_ArrayPtr profile__V_51_51;
    MR_ArrayPtr profile__V_52_52;
    MR_ArrayPtr profile__V_53_53;
    MR_ArrayPtr profile__V_54_54;
    MR_ArrayPtr profile__V_55_55;
    MR_ArrayPtr profile__V_56_56;
    MR_ArrayPtr profile__V_57_57;
    MR_ArrayPtr profile__V_58_58;
    MR_ArrayPtr profile__V_60_60;
    MR_ArrayPtr profile__V_61_61;
    MR_ArrayPtr profile__V_62_62;
    MR_ArrayPtr profile__V_63_63;
    MR_ArrayPtr profile__V_64_64;
    MR_ArrayPtr profile__V_65_65;
    MR_ArrayPtr profile__V_66_66;
    MR_ArrayPtr profile__V_67_67;
    MR_Word profile__V_68_68;
    MR_Word profile__V_69_69;
    MR_Word profile__V_70_70;
    MR_Word profile__V_71_71;
    MR_ArrayPtr profile__V_59_59;

    {
      profile__conv0_V_12_12 = array_util__u_1_f_0((MR_Word) &profile_scalar_common_1[6], ((MR_Box) (profile__V_13_13)));
    }
    profile__V_12_12 = ((MR_ArrayPtr) profile__conv0_V_12_12);
    {
      mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, profile__PDI_8, ((MR_Box) (profile__PDOwn_6)), (MR_ArrayPtr) profile__V_12_12, &profile__conv1_PDOwns_9);
    }
    profile__PDOwns_9 = (MR_ArrayPtr) profile__conv1_PDOwns_9;
    profile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
    profile__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
    profile__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
    profile__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
    profile__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
    profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
    profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
    profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
    profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
    profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
    profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
    profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
    profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
    profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
    profile__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
    profile__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
    profile__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
    profile__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
    profile__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
    profile__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
    profile__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
    profile__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
    profile__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
    profile__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
    profile__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
    profile__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
    profile__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
    profile__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
    profile__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
      *profile__STATE_VARIABLE_Deep_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (profile__V_43_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (profile__V_44_44));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (profile__V_45_45));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (profile__V_46_46));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (profile__V_47_47));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (profile__V_48_48));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (profile__V_49_49));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (profile__V_50_50));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (profile__V_51_51));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (profile__V_52_52));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (profile__V_53_53));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (profile__V_54_54));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (profile__V_55_55));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (profile__V_56_56));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (profile__V_57_57));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (profile__V_58_58));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (profile__PDOwns_9));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (profile__V_60_60));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (profile__V_61_61));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (profile__V_62_62));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (profile__V_63_63));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (profile__V_64_64));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (profile__V_65_65));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (profile__V_66_66));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (profile__V_67_67));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (profile__V_68_68));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (profile__V_69_69));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (profile__V_70_70));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (profile__V_71_71));
    }
  }
}

void MR_CALL 
profile__deep_update_pd_desc_4_p_0(
  MR_Word profile__PDPtr_5,
  MR_Word profile__PDDesc_6,
  MR_Word profile__STATE_VARIABLE_Deep_0_10,
  MR_Word * profile__STATE_VARIABLE_Deep_11)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PDI_8 = (MR_Integer) profile__PDPtr_5;
    MR_ArrayPtr profile__PDDescs_9;
    MR_ArrayPtr profile__V_12_12;
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
    MR_Word profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
    MR_String profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
    MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
    MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
    MR_Word profile__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
    MR_Word profile__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
    MR_Word profile__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
    MR_Word profile__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
    MR_Word profile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
    MR_Box profile__conv0_V_12_12;
    MR_ArrayPtr profile__conv1_PDDescs_9;
    MR_Word profile__V_43_43;
    MR_String profile__V_44_44;
    MR_String profile__V_45_45;
    MR_String profile__V_46_46;
    MR_Word profile__V_47_47;
    MR_ArrayPtr profile__V_48_48;
    MR_ArrayPtr profile__V_49_49;
    MR_ArrayPtr profile__V_50_50;
    MR_ArrayPtr profile__V_51_51;
    MR_ArrayPtr profile__V_52_52;
    MR_ArrayPtr profile__V_53_53;
    MR_ArrayPtr profile__V_54_54;
    MR_ArrayPtr profile__V_55_55;
    MR_ArrayPtr profile__V_56_56;
    MR_ArrayPtr profile__V_57_57;
    MR_ArrayPtr profile__V_58_58;
    MR_ArrayPtr profile__V_59_59;
    MR_ArrayPtr profile__V_61_61;
    MR_ArrayPtr profile__V_62_62;
    MR_ArrayPtr profile__V_63_63;
    MR_ArrayPtr profile__V_64_64;
    MR_ArrayPtr profile__V_65_65;
    MR_ArrayPtr profile__V_66_66;
    MR_ArrayPtr profile__V_67_67;
    MR_Word profile__V_68_68;
    MR_Word profile__V_69_69;
    MR_Word profile__V_70_70;
    MR_Word profile__V_71_71;
    MR_ArrayPtr profile__V_60_60;

    {
      profile__conv0_V_12_12 = array_util__u_1_f_0((MR_Word) &profile_scalar_common_1[5], ((MR_Box) (profile__V_13_13)));
    }
    profile__V_12_12 = ((MR_ArrayPtr) profile__conv0_V_12_12);
    {
      mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, profile__PDI_8, ((MR_Box) (profile__PDDesc_6)), (MR_ArrayPtr) profile__V_12_12, &profile__conv1_PDDescs_9);
    }
    profile__PDDescs_9 = (MR_ArrayPtr) profile__conv1_PDDescs_9;
    profile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
    profile__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
    profile__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
    profile__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
    profile__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
    profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
    profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
    profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
    profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
    profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
    profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
    profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
    profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
    profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
    profile__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
    profile__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
    profile__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
    profile__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
    profile__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
    profile__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
    profile__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
    profile__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
    profile__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
    profile__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
    profile__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
    profile__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
    profile__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
    profile__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
    profile__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
      *profile__STATE_VARIABLE_Deep_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (profile__V_43_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (profile__V_44_44));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (profile__V_45_45));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (profile__V_46_46));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (profile__V_47_47));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (profile__V_48_48));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (profile__V_49_49));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (profile__V_50_50));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (profile__V_51_51));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (profile__V_52_52));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (profile__V_53_53));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (profile__V_54_54));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (profile__V_55_55));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (profile__V_56_56));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (profile__V_57_57));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (profile__V_58_58));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (profile__V_59_59));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (profile__PDDescs_9));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (profile__V_61_61));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (profile__V_62_62));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (profile__V_63_63));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (profile__V_64_64));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (profile__V_65_65));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (profile__V_66_66));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (profile__V_67_67));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (profile__V_68_68));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (profile__V_69_69));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (profile__V_70_70));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (profile__V_71_71));
    }
  }
}

void MR_CALL 
profile__deep_update_csd_desc_4_p_0(
  MR_Word profile__CSDPtr_5,
  MR_Word profile__CSDDesc_6,
  MR_Word profile__STATE_VARIABLE_Deep_0_10,
  MR_Word * profile__STATE_VARIABLE_Deep_11)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSDI_8 = (MR_Integer) profile__CSDPtr_5;
    MR_ArrayPtr profile__CSDDescs_9;
    MR_ArrayPtr profile__V_12_12;
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
    MR_Word profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
    MR_String profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
    MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
    MR_String profile__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
    MR_Word profile__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
    MR_Word profile__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
    MR_Word profile__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
    MR_Word profile__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
    MR_Word profile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
    MR_Box profile__conv0_V_12_12;
    MR_ArrayPtr profile__conv1_CSDDescs_9;
    MR_Word profile__V_43_43;
    MR_String profile__V_44_44;
    MR_String profile__V_45_45;
    MR_String profile__V_46_46;
    MR_Word profile__V_47_47;
    MR_ArrayPtr profile__V_48_48;
    MR_ArrayPtr profile__V_49_49;
    MR_ArrayPtr profile__V_50_50;
    MR_ArrayPtr profile__V_51_51;
    MR_ArrayPtr profile__V_52_52;
    MR_ArrayPtr profile__V_53_53;
    MR_ArrayPtr profile__V_54_54;
    MR_ArrayPtr profile__V_55_55;
    MR_ArrayPtr profile__V_56_56;
    MR_ArrayPtr profile__V_57_57;
    MR_ArrayPtr profile__V_58_58;
    MR_ArrayPtr profile__V_59_59;
    MR_ArrayPtr profile__V_60_60;
    MR_ArrayPtr profile__V_62_62;
    MR_ArrayPtr profile__V_63_63;
    MR_ArrayPtr profile__V_64_64;
    MR_ArrayPtr profile__V_65_65;
    MR_ArrayPtr profile__V_66_66;
    MR_ArrayPtr profile__V_67_67;
    MR_Word profile__V_68_68;
    MR_Word profile__V_69_69;
    MR_Word profile__V_70_70;
    MR_Word profile__V_71_71;
    MR_ArrayPtr profile__V_61_61;

    {
      profile__conv0_V_12_12 = array_util__u_1_f_0((MR_Word) &profile_scalar_common_1[5], ((MR_Box) (profile__V_13_13)));
    }
    profile__V_12_12 = ((MR_ArrayPtr) profile__conv0_V_12_12);
    {
      mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, profile__CSDI_8, ((MR_Box) (profile__CSDDesc_6)), (MR_ArrayPtr) profile__V_12_12, &profile__conv1_CSDDescs_9);
    }
    profile__CSDDescs_9 = (MR_ArrayPtr) profile__conv1_CSDDescs_9;
    profile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 0)));
    profile__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 1)));
    profile__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 2)));
    profile__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 3)));
    profile__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 4)));
    profile__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 5)));
    profile__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 6)));
    profile__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 7)));
    profile__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 8)));
    profile__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 9)));
    profile__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 10)));
    profile__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 11)));
    profile__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 12)));
    profile__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 13)));
    profile__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 14)));
    profile__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 15)));
    profile__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 16)));
    profile__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 17)));
    profile__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 18)));
    profile__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 19)));
    profile__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 20)));
    profile__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 21)));
    profile__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 22)));
    profile__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 23)));
    profile__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 24)));
    profile__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 25)));
    profile__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 26)));
    profile__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 27)));
    profile__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__STATE_VARIABLE_Deep_0_10, (MR_Integer) 28)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
      *profile__STATE_VARIABLE_Deep_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (profile__V_43_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (profile__V_44_44));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (profile__V_45_45));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (profile__V_46_46));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (profile__V_47_47));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (profile__V_48_48));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (profile__V_49_49));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (profile__V_50_50));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (profile__V_51_51));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (profile__V_52_52));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (profile__V_53_53));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (profile__V_54_54));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (profile__V_55_55));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (profile__V_56_56));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (profile__V_57_57));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (profile__V_58_58));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (profile__V_59_59));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (profile__V_60_60));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (profile__CSDDescs_9));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (profile__V_62_62));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (profile__V_63_63));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (profile__V_64_64));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (profile__V_65_65));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (profile__V_66_66));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (profile__V_67_67));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (profile__V_68_68));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (profile__V_69_69));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (profile__V_70_70));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (profile__V_71_71));
    }
  }
}

void MR_CALL 
profile__update_ps_coverage_4_p_0(
  MR_Word profile__PSPtr_5,
  MR_Word profile__Coverage_6,
  MR_ArrayPtr profile__STATE_VARIABLE_Coverages_0_9,
  MR_ArrayPtr * profile__STATE_VARIABLE_Coverages_10)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PSI_8 = (MR_Integer) profile__PSPtr_5;
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_Coverages_10;

    {
      mercury__array__set_4_p_0((MR_Word) &profile_scalar_common_1[4], profile__PSI_8, ((MR_Box) (profile__Coverage_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_Coverages_0_9, &profile__conv0_STATE_VARIABLE_Coverages_10);
    }
    *profile__STATE_VARIABLE_Coverages_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_Coverages_10;
  }
}

void MR_CALL 
profile__update_css_desc_4_p_0(
  MR_Word profile__CSSPtr_5,
  MR_Word profile__Desc_6,
  MR_ArrayPtr profile__STATE_VARIABLE_CSSDescs_0_9,
  MR_ArrayPtr * profile__STATE_VARIABLE_CSSDescs_10)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSSI_8 = (MR_Integer) profile__CSSPtr_5;
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_CSSDescs_10;

    {
      mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, profile__CSSI_8, ((MR_Box) (profile__Desc_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_CSSDescs_0_9, &profile__conv0_STATE_VARIABLE_CSSDescs_10);
    }
    *profile__STATE_VARIABLE_CSSDescs_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_CSSDescs_10;
  }
}

void MR_CALL 
profile__update_css_own_4_p_0(
  MR_Word profile__CSSPtr_5,
  MR_Word profile__Own_6,
  MR_ArrayPtr profile__STATE_VARIABLE_CSSOwns_0_9,
  MR_ArrayPtr * profile__STATE_VARIABLE_CSSOwns_10)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSSI_8 = (MR_Integer) profile__CSSPtr_5;
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_CSSOwns_10;

    {
      mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, profile__CSSI_8, ((MR_Box) (profile__Own_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_CSSOwns_0_9, &profile__conv0_STATE_VARIABLE_CSSOwns_10);
    }
    *profile__STATE_VARIABLE_CSSOwns_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_CSSOwns_10;
  }
}

void MR_CALL 
profile__update_ps_desc_4_p_0(
  MR_Word profile__PSPtr_5,
  MR_Word profile__Desc_6,
  MR_ArrayPtr profile__STATE_VARIABLE_PSDescs_0_9,
  MR_ArrayPtr * profile__STATE_VARIABLE_PSDescs_10)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PSI_8 = (MR_Integer) profile__PSPtr_5;
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_PSDescs_10;

    {
      mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, profile__PSI_8, ((MR_Box) (profile__Desc_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_PSDescs_0_9, &profile__conv0_STATE_VARIABLE_PSDescs_10);
    }
    *profile__STATE_VARIABLE_PSDescs_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_PSDescs_10;
  }
}

void MR_CALL 
profile__update_ps_own_4_p_0(
  MR_Word profile__PSPtr_5,
  MR_Word profile__Own_6,
  MR_ArrayPtr profile__STATE_VARIABLE_PSOwns_0_9,
  MR_ArrayPtr * profile__STATE_VARIABLE_PSOwns_10)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PSI_8 = (MR_Integer) profile__PSPtr_5;
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_PSOwns_10;

    {
      mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, profile__PSI_8, ((MR_Box) (profile__Own_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_PSOwns_0_9, &profile__conv0_STATE_VARIABLE_PSOwns_10);
    }
    *profile__STATE_VARIABLE_PSOwns_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_PSOwns_10;
  }
}

void MR_CALL 
profile__update_call_site_static_map_4_p_0(
  MR_Word profile__CSDPtr_5,
  MR_Word profile__CSSPtr_6,
  MR_ArrayPtr profile__STATE_VARIABLE_CallSiteStaticMap_0_9,
  MR_ArrayPtr * profile__STATE_VARIABLE_CallSiteStaticMap_10)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSDI_8 = (MR_Integer) profile__CSDPtr_5;
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_CallSiteStaticMap_10;

    {
      mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, profile__CSDI_8, ((MR_Box) (profile__CSSPtr_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_CallSiteStaticMap_0_9, &profile__conv0_STATE_VARIABLE_CallSiteStaticMap_10);
    }
    *profile__STATE_VARIABLE_CallSiteStaticMap_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_CallSiteStaticMap_10;
  }
}

void MR_CALL 
profile__update_proc_callers_4_p_0(
  MR_Word profile__PSPtr_5,
  MR_Word profile__CSDPtrs_6,
  MR_ArrayPtr profile__STATE_VARIABLE_ProcCallers_0_9,
  MR_ArrayPtr * profile__STATE_VARIABLE_ProcCallers_10)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PSI_8 = (MR_Integer) profile__PSPtr_5;
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_ProcCallers_10;

    {
      mercury__array__set_4_p_0((MR_Word) &profile_scalar_common_1[2], profile__PSI_8, ((MR_Box) (profile__CSDPtrs_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_ProcCallers_0_9, &profile__conv0_STATE_VARIABLE_ProcCallers_10);
    }
    *profile__STATE_VARIABLE_ProcCallers_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_ProcCallers_10;
  }
}

void MR_CALL 
profile__update_proc_statics_4_p_0(
  MR_Word profile__PSPtr_5,
  MR_Word profile__PS_6,
  MR_ArrayPtr profile__STATE_VARIABLE_ProcStatics_0_9,
  MR_ArrayPtr * profile__STATE_VARIABLE_ProcStatics_10)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PSI_8 = (MR_Integer) profile__PSPtr_5;
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_ProcStatics_10;

    {
      mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, profile__PSI_8, ((MR_Box) (profile__PS_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_ProcStatics_0_9, &profile__conv0_STATE_VARIABLE_ProcStatics_10);
    }
    *profile__STATE_VARIABLE_ProcStatics_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_ProcStatics_10;
  }
}

void MR_CALL 
profile__update_proc_dynamics_4_p_0(
  MR_Word profile__PDPtr_5,
  MR_Word profile__PD_6,
  MR_ArrayPtr profile__STATE_VARIABLE_ProcDynamics_0_9,
  MR_ArrayPtr * profile__STATE_VARIABLE_ProcDynamics_10)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PDI_8 = (MR_Integer) profile__PDPtr_5;
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_ProcDynamics_10;

    {
      mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, profile__PDI_8, ((MR_Box) (profile__PD_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_ProcDynamics_0_9, &profile__conv0_STATE_VARIABLE_ProcDynamics_10);
    }
    *profile__STATE_VARIABLE_ProcDynamics_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_ProcDynamics_10;
  }
}

void MR_CALL 
profile__update_call_site_statics_4_p_0(
  MR_Word profile__CSSPtr_5,
  MR_Word profile__CSS_6,
  MR_ArrayPtr profile__STATE_VARIABLE_CallSiteStatics_0_9,
  MR_ArrayPtr * profile__STATE_VARIABLE_CallSiteStatics_10)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSSI_8 = (MR_Integer) profile__CSSPtr_5;
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_CallSiteStatics_10;

    {
      mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, profile__CSSI_8, ((MR_Box) (profile__CSS_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_CallSiteStatics_0_9, &profile__conv0_STATE_VARIABLE_CallSiteStatics_10);
    }
    *profile__STATE_VARIABLE_CallSiteStatics_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_CallSiteStatics_10;
  }
}

void MR_CALL 
profile__update_call_site_dynamics_4_p_0(
  MR_Word profile__CSDPtr_5,
  MR_Word profile__CSD_6,
  MR_ArrayPtr profile__STATE_VARIABLE_CallSiteDynamics_0_9,
  MR_ArrayPtr * profile__STATE_VARIABLE_CallSiteDynamics_10)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSDI_8 = (MR_Integer) profile__CSDPtr_5;
    MR_ArrayPtr profile__conv0_STATE_VARIABLE_CallSiteDynamics_10;

    {
      mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, profile__CSDI_8, ((MR_Box) (profile__CSD_6)), (MR_ArrayPtr) profile__STATE_VARIABLE_CallSiteDynamics_0_9, &profile__conv0_STATE_VARIABLE_CallSiteDynamics_10);
    }
    *profile__STATE_VARIABLE_CallSiteDynamics_10 = (MR_ArrayPtr) profile__conv0_STATE_VARIABLE_CallSiteDynamics_10;
  }
}

void MR_CALL 
profile__deep_lookup_ps_coverage_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__PSPtr_5,
  MR_Word * profile__Coverage_6)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__MaybeCoverageTables_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

    if ((profile__MaybeCoverageTables_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *profile__Coverage_6 = measurements__zero_static_coverage_0_f_0();
      }
    else
      {
        MR_ArrayPtr profile__CoverageTables_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), profile__MaybeCoverageTables_7, (MR_Integer) 0)));

        {
          profile__lookup_ps_coverage_3_p_0(profile__CoverageTables_8, profile__PSPtr_5, profile__Coverage_6);
        }
      }
  }
}

void MR_CALL 
profile__deep_lookup_css_desc_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__CSSPtr_5,
  MR_Word * profile__Desc_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSSI_7 = (MR_Integer) profile__CSSPtr_5;
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
    MR_Box profile__conv0_Desc_6;

    {
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__V_8_8, profile__CSSI_7, &profile__conv0_Desc_6);
    }
    *profile__Desc_6 = ((MR_Word) profile__conv0_Desc_6);
  }
}

void MR_CALL 
profile__deep_lookup_css_own_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__CSSPtr_5,
  MR_Word * profile__Own_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSSI_7 = (MR_Integer) profile__CSSPtr_5;
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
    MR_Box profile__conv0_Own_6;

    {
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__V_8_8, profile__CSSI_7, &profile__conv0_Own_6);
    }
    *profile__Own_6 = ((MR_Word) profile__conv0_Own_6);
  }
}

void MR_CALL 
profile__deep_lookup_ps_desc_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__PSPtr_5,
  MR_Word * profile__Desc_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PSI_7 = (MR_Integer) profile__PSPtr_5;
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
    MR_Box profile__conv0_Desc_6;

    {
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__V_8_8, profile__PSI_7, &profile__conv0_Desc_6);
    }
    *profile__Desc_6 = ((MR_Word) profile__conv0_Desc_6);
  }
}

void MR_CALL 
profile__deep_lookup_ps_own_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__PSPtr_5,
  MR_Word * profile__Own_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PSI_7 = (MR_Integer) profile__PSPtr_5;
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
    MR_Box profile__conv0_Own_6;

    {
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__V_8_8, profile__PSI_7, &profile__conv0_Own_6);
    }
    *profile__Own_6 = ((MR_Word) profile__conv0_Own_6);
  }
}

void MR_CALL 
profile__deep_lookup_csd_desc_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__Desc_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
    MR_Box profile__conv0_Desc_6;

    {
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__V_8_8, profile__CSDI_7, &profile__conv0_Desc_6);
    }
    *profile__Desc_6 = ((MR_Word) profile__conv0_Desc_6);
  }
}

void MR_CALL 
profile__deep_lookup_csd_own_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__Own_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
    MR_Word profile__CSD_8;
    MR_ArrayPtr profile__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_Word profile__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
    MR_Box profile__conv0_CSD_8;
    MR_Word profile__V_38_38;
    MR_Word profile__V_39_39;

    {
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) profile__V_9_9, profile__CSDI_7, &profile__conv0_CSD_8);
    }
    profile__CSD_8 = ((MR_Word) profile__conv0_CSD_8);
    profile__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_8, (MR_Integer) 0)));
    profile__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_8, (MR_Integer) 1)));
    *profile__Own_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__CSD_8, (MR_Integer) 2)));
  }
}

void MR_CALL 
profile__deep_lookup_pd_desc_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__PDPtr_5,
  MR_Word * profile__Desc_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PDI_7 = (MR_Integer) profile__PDPtr_5;
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
    MR_Box profile__conv0_Desc_6;

    {
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__V_8_8, profile__PDI_7, &profile__conv0_Desc_6);
    }
    *profile__Desc_6 = ((MR_Word) profile__conv0_Desc_6);
  }
}

void MR_CALL 
profile__deep_lookup_pd_own_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__PDPtr_5,
  MR_Word * profile__Own_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PDI_7 = (MR_Integer) profile__PDPtr_5;
    MR_ArrayPtr profile__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_Word profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
    MR_Box profile__conv0_Own_6;

    {
      mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__V_8_8, profile__PDI_7, &profile__conv0_Own_6);
    }
    *profile__Own_6 = ((MR_Word) profile__conv0_Own_6);
  }
}

void MR_CALL 
profile__deep_lookup_csd_comp_table_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__CompTable_6)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

    {
      profile__lookup_csd_comp_table_3_p_0(profile__V_7_7, profile__CSDPtr_5, profile__CompTable_6);
    }
  }
}

void MR_CALL 
profile__deep_lookup_pd_comp_table_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__PDPtr_5,
  MR_Word * profile__CompTable_6)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

    {
      profile__lookup_pd_comp_table_3_p_0(profile__V_7_7, profile__PDPtr_5, profile__CompTable_6);
    }
  }
}

void MR_CALL 
profile__deep_lookup_proc_dynamic_sites_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__PDPtr_5,
  MR_ArrayPtr * profile__PDSites_6)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__PD_7;
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_Word profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));
    MR_Word profile__V_8_8;
    MR_Word profile__V_9_9;

    {
      profile__lookup_proc_dynamics_3_p_0(profile__V_13_13, profile__PDPtr_5, &profile__PD_7);
    }
    profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__PD_7, (MR_Integer) 0)));
    *profile__PDSites_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__PD_7, (MR_Integer) 1)));
    profile__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__PD_7, (MR_Integer) 2)));
  }
}

void MR_CALL 
profile__deep_lookup_call_site_calls_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__CSSPtr_5,
  MR_Word * profile__Calls_6)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

    {
      profile__lookup_call_site_calls_3_p_0(profile__V_7_7, profile__CSSPtr_5, profile__Calls_6);
    }
  }
}

void MR_CALL 
profile__deep_lookup_call_site_static_map_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__CSSPtr_6)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

    {
      profile__lookup_call_site_static_map_3_p_0(profile__V_7_7, profile__CSDPtr_5, profile__CSSPtr_6);
    }
  }
}

void MR_CALL 
profile__deep_lookup_proc_callers_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__PSPtr_5,
  MR_Word * profile__CallerCSDPtrs_6)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

    {
      profile__lookup_proc_callers_3_p_0(profile__V_7_7, profile__PSPtr_5, profile__CallerCSDPtrs_6);
    }
  }
}

void MR_CALL 
profile__deep_lookup_clique_maybe_child_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__MaybeCliquePtr_6)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

    {
      profile__lookup_clique_maybe_child_3_p_0(profile__V_7_7, profile__CSDPtr_5, profile__MaybeCliquePtr_6);
    }
  }
}

void MR_CALL 
profile__deep_lookup_clique_parents_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__CliquePtr_5,
  MR_Word * profile__CSDPtr_6)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

    {
      profile__lookup_clique_parents_3_p_0(profile__V_7_7, profile__CliquePtr_5, profile__CSDPtr_6);
    }
  }
}

void MR_CALL 
profile__deep_lookup_clique_members_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__CliquePtr_5,
  MR_Word * profile__PDPtrs_6)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

    {
      profile__lookup_clique_members_3_p_0(profile__V_7_7, profile__CliquePtr_5, profile__PDPtrs_6);
    }
  }
}

void MR_CALL 
profile__deep_lookup_clique_index_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__PDPtr_5,
  MR_Word * profile__CliquePtr_6)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

    {
      profile__lookup_clique_index_3_p_0(profile__V_7_7, profile__PDPtr_5, profile__CliquePtr_6);
    }
  }
}

void MR_CALL 
profile__deep_lookup_proc_statics_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__PSPtr_5,
  MR_Word * profile__PS_6)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

    {
      profile__lookup_proc_statics_3_p_0(profile__V_7_7, profile__PSPtr_5, profile__PS_6);
    }
  }
}

void MR_CALL 
profile__deep_lookup_proc_dynamics_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__PDPtr_5,
  MR_Word * profile__PD_6)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

    {
      profile__lookup_proc_dynamics_3_p_0(profile__V_7_7, profile__PDPtr_5, profile__PD_6);
    }
  }
}

void MR_CALL 
profile__deep_lookup_call_site_statics_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__CSSPtr_5,
  MR_Word * profile__CSS_6)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

    {
      profile__lookup_call_site_statics_3_p_0(profile__V_7_7, profile__CSSPtr_5, profile__CSS_6);
    }
  }
}

void MR_CALL 
profile__deep_lookup_call_site_dynamics_3_p_0(
  MR_Word profile__Deep_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__CSD_6)
{
  {
    MR_bool profile__succeeded;
    MR_ArrayPtr profile__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 5)));
    MR_Word profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 0)));
    MR_String profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 1)));
    MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 2)));
    MR_String profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 3)));
    MR_Word profile__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr profile__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 24)));
    MR_Word profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 25)));
    MR_Word profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 26)));
    MR_Word profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 27)));
    MR_Word profile__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_4, (MR_Integer) 28)));

    {
      profile__lookup_call_site_dynamics_3_p_0(profile__V_7_7, profile__CSDPtr_5, profile__CSD_6);
    }
  }
}

void MR_CALL 
profile__lookup_ps_coverage_3_p_0(
  MR_ArrayPtr profile__PSCoverageArrays_4,
  MR_Word profile__PSPtr_5,
  MR_Word * profile__PSCoverageArray_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PSI_7 = (MR_Integer) profile__PSPtr_5;
    MR_Word profile__TypeInfo_12_12;

    profile__succeeded = (profile__PSI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeInfo_12_12 = (MR_Word) &profile_scalar_common_1[4];
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeInfo_12_12, (MR_ArrayPtr) profile__PSCoverageArrays_4, profile__PSI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_PSCoverageArray_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile_scalar_common_1[4], (MR_ArrayPtr) profile__PSCoverageArrays_4, profile__PSI_7, &profile__conv0_PSCoverageArray_6);
        }
        *profile__PSCoverageArray_6 = ((MR_Word) profile__conv0_PSCoverageArray_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_ps_coverage\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_csd_comp_table_3_p_0(
  MR_ArrayPtr profile__CSDCompTables_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__CompTable_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
    MR_Word profile__TypeInfo_12_12;

    profile__succeeded = (profile__CSDI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeInfo_12_12 = (MR_Word) &profile_scalar_common_2[1];
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeInfo_12_12, (MR_ArrayPtr) profile__CSDCompTables_4, profile__CSDI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_CompTable_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile_scalar_common_2[1], (MR_ArrayPtr) profile__CSDCompTables_4, profile__CSDI_7, &profile__conv0_CompTable_6);
        }
        *profile__CompTable_6 = ((MR_Word) profile__conv0_CompTable_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_csd_comp_table\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_pd_comp_table_3_p_0(
  MR_ArrayPtr profile__PDCompTables_4,
  MR_Word profile__PDPtr_5,
  MR_Word * profile__CompTable_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PDI_7 = (MR_Integer) profile__PDPtr_5;
    MR_Word profile__TypeInfo_12_12;

    profile__succeeded = (profile__PDI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeInfo_12_12 = (MR_Word) &profile_scalar_common_2[1];
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeInfo_12_12, (MR_ArrayPtr) profile__PDCompTables_4, profile__PDI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_CompTable_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile_scalar_common_2[1], (MR_ArrayPtr) profile__PDCompTables_4, profile__PDI_7, &profile__conv0_CompTable_6);
        }
        *profile__CompTable_6 = ((MR_Word) profile__conv0_CompTable_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_pd_comp_table\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_css_desc_3_p_0(
  MR_ArrayPtr profile__CSSDescs_4,
  MR_Word profile__CSSPtr_5,
  MR_Word * profile__CSSDesc_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSSI_7 = (MR_Integer) profile__CSSPtr_5;
    MR_Word profile__TypeCtorInfo_12_12;

    profile__succeeded = (profile__CSSI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_12_12 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_12_12, (MR_ArrayPtr) profile__CSSDescs_4, profile__CSSI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_CSSDesc_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__CSSDescs_4, profile__CSSI_7, &profile__conv0_CSSDesc_6);
        }
        *profile__CSSDesc_6 = ((MR_Word) profile__conv0_CSSDesc_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_css_desc\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_css_own_3_p_0(
  MR_ArrayPtr profile__CSSOwns_4,
  MR_Word profile__CSSPtr_5,
  MR_Word * profile__CSSOwn_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSSI_7 = (MR_Integer) profile__CSSPtr_5;
    MR_Word profile__TypeCtorInfo_12_12;

    profile__succeeded = (profile__CSSI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_12_12 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_12_12, (MR_ArrayPtr) profile__CSSOwns_4, profile__CSSI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_CSSOwn_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__CSSOwns_4, profile__CSSI_7, &profile__conv0_CSSOwn_6);
        }
        *profile__CSSOwn_6 = ((MR_Word) profile__conv0_CSSOwn_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_css_own\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_ps_desc_3_p_0(
  MR_ArrayPtr profile__PSDescs_4,
  MR_Word profile__PSPtr_5,
  MR_Word * profile__PSDesc_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PSI_7 = (MR_Integer) profile__PSPtr_5;
    MR_Word profile__TypeCtorInfo_12_12;

    profile__succeeded = (profile__PSI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_12_12 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_12_12, (MR_ArrayPtr) profile__PSDescs_4, profile__PSI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_PSDesc_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__PSDescs_4, profile__PSI_7, &profile__conv0_PSDesc_6);
        }
        *profile__PSDesc_6 = ((MR_Word) profile__conv0_PSDesc_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_ps_desc\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_ps_own_3_p_0(
  MR_ArrayPtr profile__PSOwns_4,
  MR_Word profile__PSPtr_5,
  MR_Word * profile__PSOwn_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PSI_7 = (MR_Integer) profile__PSPtr_5;
    MR_Word profile__TypeCtorInfo_12_12;

    profile__succeeded = (profile__PSI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_12_12 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_12_12, (MR_ArrayPtr) profile__PSOwns_4, profile__PSI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_PSOwn_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__PSOwns_4, profile__PSI_7, &profile__conv0_PSOwn_6);
        }
        *profile__PSOwn_6 = ((MR_Word) profile__conv0_PSOwn_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_ps_own\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_csd_desc_3_p_0(
  MR_ArrayPtr profile__CSDDescs_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__CSDDesc_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
    MR_Word profile__TypeCtorInfo_12_12;

    profile__succeeded = (profile__CSDI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_12_12 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_12_12, (MR_ArrayPtr) profile__CSDDescs_4, profile__CSDI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_CSDDesc_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__CSDDescs_4, profile__CSDI_7, &profile__conv0_CSDDesc_6);
        }
        *profile__CSDDesc_6 = ((MR_Word) profile__conv0_CSDDesc_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_csd_desc\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_csd_own_3_p_0(
  MR_ArrayPtr profile__CSDOwns_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__CSDOwn_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
    MR_Word profile__TypeCtorInfo_12_12;

    profile__succeeded = (profile__CSDI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_12_12 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_12_12, (MR_ArrayPtr) profile__CSDOwns_4, profile__CSDI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_CSDOwn_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__CSDOwns_4, profile__CSDI_7, &profile__conv0_CSDOwn_6);
        }
        *profile__CSDOwn_6 = ((MR_Word) profile__conv0_CSDOwn_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_csd_own\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_pd_desc_3_p_0(
  MR_ArrayPtr profile__PDDescs_4,
  MR_Word profile__PDPtr_5,
  MR_Word * profile__PDDesc_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PDI_7 = (MR_Integer) profile__PDPtr_5;
    MR_Word profile__TypeCtorInfo_12_12;

    profile__succeeded = (profile__PDI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_12_12 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_12_12, (MR_ArrayPtr) profile__PDDescs_4, profile__PDI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_PDDesc_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) profile__PDDescs_4, profile__PDI_7, &profile__conv0_PDDesc_6);
        }
        *profile__PDDesc_6 = ((MR_Word) profile__conv0_PDDesc_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_pd_desc\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_pd_own_3_p_0(
  MR_ArrayPtr profile__PDOwns_4,
  MR_Word profile__PDPtr_5,
  MR_Word * profile__PDOwn_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PDI_7 = (MR_Integer) profile__PDPtr_5;
    MR_Word profile__TypeCtorInfo_12_12;

    profile__succeeded = (profile__PDI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_12_12 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_12_12, (MR_ArrayPtr) profile__PDOwns_4, profile__PDI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_PDOwn_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) profile__PDOwns_4, profile__PDI_7, &profile__conv0_PDOwn_6);
        }
        *profile__PDOwn_6 = ((MR_Word) profile__conv0_PDOwn_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_pd_own\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_call_site_calls_3_p_0(
  MR_ArrayPtr profile__CallSiteCalls_4,
  MR_Word profile__CSSPtr_5,
  MR_Word * profile__Calls_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSSI_7 = (MR_Integer) profile__CSSPtr_5;
    MR_Word profile__TypeInfo_12_12;

    profile__succeeded = (profile__CSSI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeInfo_12_12 = (MR_Word) &profile_scalar_common_2[0];
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeInfo_12_12, (MR_ArrayPtr) profile__CallSiteCalls_4, profile__CSSI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_Calls_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile_scalar_common_2[0], (MR_ArrayPtr) profile__CallSiteCalls_4, profile__CSSI_7, &profile__conv0_Calls_6);
        }
        *profile__Calls_6 = ((MR_Word) profile__conv0_Calls_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_call_site_calls\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_call_site_static_map_3_p_0(
  MR_ArrayPtr profile__CallSiteStaticMap_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__CSSPtr_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
    MR_Word profile__TypeCtorInfo_12_12;

    profile__succeeded = (profile__CSDI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_12_12 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_12_12, (MR_ArrayPtr) profile__CallSiteStaticMap_4, profile__CSDI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_CSSPtr_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) profile__CallSiteStaticMap_4, profile__CSDI_7, &profile__conv0_CSSPtr_6);
        }
        *profile__CSSPtr_6 = ((MR_Word) profile__conv0_CSSPtr_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_call_site_static_map\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_proc_callers_3_p_0(
  MR_ArrayPtr profile__ProcCallers_4,
  MR_Word profile__PSPtr_5,
  MR_Word * profile__Callers_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PSI_7 = (MR_Integer) profile__PSPtr_5;
    MR_Word profile__TypeInfo_12_12;

    profile__succeeded = (profile__PSI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeInfo_12_12 = (MR_Word) &profile_scalar_common_1[2];
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeInfo_12_12, (MR_ArrayPtr) profile__ProcCallers_4, profile__PSI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_Callers_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile_scalar_common_1[2], (MR_ArrayPtr) profile__ProcCallers_4, profile__PSI_7, &profile__conv0_Callers_6);
        }
        *profile__Callers_6 = ((MR_Word) profile__conv0_Callers_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_proc_callers\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_clique_maybe_child_3_p_0(
  MR_ArrayPtr profile__CliqueMaybeChild_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__MaybeCliquePtr_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
    MR_Word profile__TypeInfo_12_12;

    profile__succeeded = (profile__CSDI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeInfo_12_12 = (MR_Word) &profile_scalar_common_1[1];
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeInfo_12_12, (MR_ArrayPtr) profile__CliqueMaybeChild_4, profile__CSDI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_MaybeCliquePtr_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile_scalar_common_1[1], (MR_ArrayPtr) profile__CliqueMaybeChild_4, profile__CSDI_7, &profile__conv0_MaybeCliquePtr_6);
        }
        *profile__MaybeCliquePtr_6 = ((MR_Word) profile__conv0_MaybeCliquePtr_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_clique_maybe_child\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_clique_parents_3_p_0(
  MR_ArrayPtr profile__CliqueParents_4,
  MR_Word profile__CliquePtr_5,
  MR_Word * profile__CSDPtr_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CI_7 = (MR_Integer) profile__CliquePtr_5;

    {
      profile__succeeded = mercury__array__in_bounds_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) profile__CliqueParents_4, profile__CI_7);
    }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_CSDPtr_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) profile__CliqueParents_4, profile__CI_7, &profile__conv0_CSDPtr_6);
        }
        *profile__CSDPtr_6 = ((MR_Word) profile__conv0_CSDPtr_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_clique_parents\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_clique_members_3_p_0(
  MR_ArrayPtr profile__CliqueMembers_4,
  MR_Word profile__CliquePtr_5,
  MR_Word * profile__PDPtrs_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CI_7 = (MR_Integer) profile__CliquePtr_5;

    {
      profile__succeeded = mercury__array__in_bounds_2_p_0((MR_Word) &profile_scalar_common_1[0], (MR_ArrayPtr) profile__CliqueMembers_4, profile__CI_7);
    }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_PDPtrs_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile_scalar_common_1[0], (MR_ArrayPtr) profile__CliqueMembers_4, profile__CI_7, &profile__conv0_PDPtrs_6);
        }
        *profile__PDPtrs_6 = ((MR_Word) profile__conv0_PDPtrs_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_clique_members\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_clique_index_3_p_0(
  MR_ArrayPtr profile__CliqueIndex_4,
  MR_Word profile__PDPtr_5,
  MR_Word * profile__CliquePtr_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PDI_7 = (MR_Integer) profile__PDPtr_5;
    MR_Word profile__TypeCtorInfo_12_12;

    profile__succeeded = (profile__PDI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_12_12 = (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_12_12, (MR_ArrayPtr) profile__CliqueIndex_4, profile__PDI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_CliquePtr_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, (MR_ArrayPtr) profile__CliqueIndex_4, profile__PDI_7, &profile__conv0_CliquePtr_6);
        }
        *profile__CliquePtr_6 = ((MR_Word) profile__conv0_CliquePtr_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_clique_index\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_proc_statics_3_p_0(
  MR_ArrayPtr profile__ProcStatics_4,
  MR_Word profile__PSPtr_5,
  MR_Word * profile__PS_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PSI_7 = (MR_Integer) profile__PSPtr_5;
    MR_Word profile__TypeCtorInfo_12_12;

    profile__succeeded = (profile__PSI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_12_12 = (MR_Word) &profile__profile__type_ctor_info_proc_static_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_12_12, (MR_ArrayPtr) profile__ProcStatics_4, profile__PSI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_PS_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_ArrayPtr) profile__ProcStatics_4, profile__PSI_7, &profile__conv0_PS_6);
        }
        *profile__PS_6 = ((MR_Word) profile__conv0_PS_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_proc_statics\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_proc_dynamics_3_p_0(
  MR_ArrayPtr profile__ProcDynamics_4,
  MR_Word profile__PDPtr_5,
  MR_Word * profile__PD_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__PDI_7 = (MR_Integer) profile__PDPtr_5;
    MR_Word profile__TypeCtorInfo_12_12;

    profile__succeeded = (profile__PDI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_12_12 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_12_12, (MR_ArrayPtr) profile__ProcDynamics_4, profile__PDI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_PD_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) profile__ProcDynamics_4, profile__PDI_7, &profile__conv0_PD_6);
        }
        *profile__PD_6 = ((MR_Word) profile__conv0_PD_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_proc_dynamics\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_call_site_statics_3_p_0(
  MR_ArrayPtr profile__CallSiteStatics_4,
  MR_Word profile__CSSPtr_5,
  MR_Word * profile__CSS_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSSI_7 = (MR_Integer) profile__CSSPtr_5;
    MR_Word profile__TypeCtorInfo_12_12;

    profile__succeeded = (profile__CSSI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_12_12 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_12_12, (MR_ArrayPtr) profile__CallSiteStatics_4, profile__CSSI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_CSS_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_ArrayPtr) profile__CallSiteStatics_4, profile__CSSI_7, &profile__conv0_CSS_6);
        }
        *profile__CSS_6 = ((MR_Word) profile__conv0_CSS_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_call_site_statics\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

void MR_CALL 
profile__lookup_call_site_dynamics_3_p_0(
  MR_ArrayPtr profile__CallSiteDynamics_4,
  MR_Word profile__CSDPtr_5,
  MR_Word * profile__CSD_6)
{
  {
    MR_bool profile__succeeded;
    MR_Integer profile__CSDI_7 = (MR_Integer) profile__CSDPtr_5;
    MR_Word profile__TypeCtorInfo_12_12;

    profile__succeeded = (profile__CSDI_7 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_12_12 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_12_12, (MR_ArrayPtr) profile__CallSiteDynamics_4, profile__CSDI_7);
        }
      }
    if (profile__succeeded)
      {
        MR_Box profile__conv0_CSD_6;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) profile__CallSiteDynamics_4, profile__CSDI_7, &profile__conv0_CSD_6);
        }
        *profile__CSD_6 = ((MR_Word) profile__conv0_CSD_6);
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "profile", (MR_String) "predicate \140profile.lookup_call_site_dynamics\'/3", (MR_String) "bounds error");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
profile__valid_call_site_static_ptr_raw_2_p_0(
  MR_ArrayPtr profile__CallSiteStatics_3,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__TypeCtorInfo_6_6;
    MR_Integer profile__CSSI_4 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CSSI_4 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_6_6 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_6_6, (MR_ArrayPtr) profile__CallSiteStatics_3, profile__CSSI_4);
        }
      }
    return profile__succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_call_site_dynamic_ptr_raw_2_p_0(
  MR_ArrayPtr profile__CallSiteDynamics_3,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__TypeCtorInfo_6_6;
    MR_Integer profile__CSDI_4 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__CSDI_4 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_6_6 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_6_6, (MR_ArrayPtr) profile__CallSiteDynamics_3, profile__CSDI_4);
        }
      }
    return profile__succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_proc_static_ptr_raw_2_p_0(
  MR_ArrayPtr profile__ProcStatics_3,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__TypeCtorInfo_6_6;
    MR_Integer profile__PSI_4 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__PSI_4 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_6_6 = (MR_Word) &profile__profile__type_ctor_info_proc_static_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_6_6, (MR_ArrayPtr) profile__ProcStatics_3, profile__PSI_4);
        }
      }
    return profile__succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_proc_dynamic_ptr_raw_2_p_0(
  MR_ArrayPtr profile__ProcDynamics_3,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__TypeCtorInfo_6_6;
    MR_Integer profile__PDI_4 = (MR_Integer) profile__HeadVar__2_2;

    profile__succeeded = (profile__PDI_4 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__TypeCtorInfo_6_6 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_6_6, (MR_ArrayPtr) profile__ProcDynamics_3, profile__PDI_4);
        }
      }
    return profile__succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_call_site_static_ptr_2_p_0(
  MR_Word profile__Deep_3,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__TypeCtorInfo_35_35;
    MR_Integer profile__CSSI_4 = (MR_Integer) profile__HeadVar__2_2;
    MR_ArrayPtr profile__V_6_6;
    MR_Word profile__V_7_7;
    MR_String profile__V_8_8;
    MR_String profile__V_9_9;
    MR_String profile__V_10_10;
    MR_Word profile__V_11_11;
    MR_ArrayPtr profile__V_12_12;
    MR_ArrayPtr profile__V_13_13;
    MR_ArrayPtr profile__V_14_14;
    MR_ArrayPtr profile__V_15_15;
    MR_ArrayPtr profile__V_16_16;
    MR_ArrayPtr profile__V_17_17;
    MR_ArrayPtr profile__V_18_18;
    MR_ArrayPtr profile__V_19_19;
    MR_ArrayPtr profile__V_20_20;
    MR_ArrayPtr profile__V_21_21;
    MR_ArrayPtr profile__V_22_22;
    MR_ArrayPtr profile__V_23_23;
    MR_ArrayPtr profile__V_24_24;
    MR_ArrayPtr profile__V_25_25;
    MR_ArrayPtr profile__V_26_26;
    MR_ArrayPtr profile__V_27_27;
    MR_ArrayPtr profile__V_28_28;
    MR_ArrayPtr profile__V_29_29;
    MR_ArrayPtr profile__V_30_30;
    MR_Word profile__V_31_31;
    MR_Word profile__V_32_32;
    MR_Word profile__V_33_33;
    MR_Word profile__V_34_34;

    profile__succeeded = (profile__CSSI_4 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
        profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
        profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
        profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
        profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
        profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
        profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
        profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
        profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
        profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
        profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
        profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
        profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
        profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
        profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
        profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
        profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
        profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
        profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
        profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
        profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
        profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
        profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
        profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
        profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
        profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
        profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
        profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
        profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
        profile__TypeCtorInfo_35_35 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_35_35, (MR_ArrayPtr) profile__V_6_6, profile__CSSI_4);
        }
      }
    return profile__succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_call_site_dynamic_ptr_2_p_0(
  MR_Word profile__Deep_3,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__TypeCtorInfo_35_35;
    MR_Integer profile__CSDI_4 = (MR_Integer) profile__HeadVar__2_2;
    MR_ArrayPtr profile__V_6_6;
    MR_Word profile__V_7_7;
    MR_String profile__V_8_8;
    MR_String profile__V_9_9;
    MR_String profile__V_10_10;
    MR_Word profile__V_11_11;
    MR_ArrayPtr profile__V_12_12;
    MR_ArrayPtr profile__V_13_13;
    MR_ArrayPtr profile__V_14_14;
    MR_ArrayPtr profile__V_15_15;
    MR_ArrayPtr profile__V_16_16;
    MR_ArrayPtr profile__V_17_17;
    MR_ArrayPtr profile__V_18_18;
    MR_ArrayPtr profile__V_19_19;
    MR_ArrayPtr profile__V_20_20;
    MR_ArrayPtr profile__V_21_21;
    MR_ArrayPtr profile__V_22_22;
    MR_ArrayPtr profile__V_23_23;
    MR_ArrayPtr profile__V_24_24;
    MR_ArrayPtr profile__V_25_25;
    MR_ArrayPtr profile__V_26_26;
    MR_ArrayPtr profile__V_27_27;
    MR_ArrayPtr profile__V_28_28;
    MR_ArrayPtr profile__V_29_29;
    MR_ArrayPtr profile__V_30_30;
    MR_Word profile__V_31_31;
    MR_Word profile__V_32_32;
    MR_Word profile__V_33_33;
    MR_Word profile__V_34_34;

    profile__succeeded = (profile__CSDI_4 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
        profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
        profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
        profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
        profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
        profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
        profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
        profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
        profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
        profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
        profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
        profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
        profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
        profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
        profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
        profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
        profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
        profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
        profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
        profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
        profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
        profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
        profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
        profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
        profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
        profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
        profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
        profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
        profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
        profile__TypeCtorInfo_35_35 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_35_35, (MR_ArrayPtr) profile__V_6_6, profile__CSDI_4);
        }
      }
    return profile__succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_proc_static_ptr_2_p_0(
  MR_Word profile__Deep_3,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__TypeCtorInfo_35_35;
    MR_Integer profile__PSI_4 = (MR_Integer) profile__HeadVar__2_2;
    MR_ArrayPtr profile__V_6_6;
    MR_Word profile__V_7_7;
    MR_String profile__V_8_8;
    MR_String profile__V_9_9;
    MR_String profile__V_10_10;
    MR_Word profile__V_11_11;
    MR_ArrayPtr profile__V_12_12;
    MR_ArrayPtr profile__V_13_13;
    MR_ArrayPtr profile__V_14_14;
    MR_ArrayPtr profile__V_15_15;
    MR_ArrayPtr profile__V_16_16;
    MR_ArrayPtr profile__V_17_17;
    MR_ArrayPtr profile__V_18_18;
    MR_ArrayPtr profile__V_19_19;
    MR_ArrayPtr profile__V_20_20;
    MR_ArrayPtr profile__V_21_21;
    MR_ArrayPtr profile__V_22_22;
    MR_ArrayPtr profile__V_23_23;
    MR_ArrayPtr profile__V_24_24;
    MR_ArrayPtr profile__V_25_25;
    MR_ArrayPtr profile__V_26_26;
    MR_ArrayPtr profile__V_27_27;
    MR_ArrayPtr profile__V_28_28;
    MR_ArrayPtr profile__V_29_29;
    MR_ArrayPtr profile__V_30_30;
    MR_Word profile__V_31_31;
    MR_Word profile__V_32_32;
    MR_Word profile__V_33_33;
    MR_Word profile__V_34_34;

    profile__succeeded = (profile__PSI_4 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
        profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
        profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
        profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
        profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
        profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
        profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
        profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
        profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
        profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
        profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
        profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
        profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
        profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
        profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
        profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
        profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
        profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
        profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
        profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
        profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
        profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
        profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
        profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
        profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
        profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
        profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
        profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
        profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
        profile__TypeCtorInfo_35_35 = (MR_Word) &profile__profile__type_ctor_info_proc_static_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_35_35, (MR_ArrayPtr) profile__V_6_6, profile__PSI_4);
        }
      }
    return profile__succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_proc_dynamic_ptr_2_p_0(
  MR_Word profile__Deep_3,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__TypeCtorInfo_35_35;
    MR_Integer profile__PDI_4 = (MR_Integer) profile__HeadVar__2_2;
    MR_ArrayPtr profile__V_6_6;
    MR_Word profile__V_7_7;
    MR_String profile__V_8_8;
    MR_String profile__V_9_9;
    MR_String profile__V_10_10;
    MR_Word profile__V_11_11;
    MR_ArrayPtr profile__V_12_12;
    MR_ArrayPtr profile__V_13_13;
    MR_ArrayPtr profile__V_14_14;
    MR_ArrayPtr profile__V_15_15;
    MR_ArrayPtr profile__V_16_16;
    MR_ArrayPtr profile__V_17_17;
    MR_ArrayPtr profile__V_18_18;
    MR_ArrayPtr profile__V_19_19;
    MR_ArrayPtr profile__V_20_20;
    MR_ArrayPtr profile__V_21_21;
    MR_ArrayPtr profile__V_22_22;
    MR_ArrayPtr profile__V_23_23;
    MR_ArrayPtr profile__V_24_24;
    MR_ArrayPtr profile__V_25_25;
    MR_ArrayPtr profile__V_26_26;
    MR_ArrayPtr profile__V_27_27;
    MR_ArrayPtr profile__V_28_28;
    MR_ArrayPtr profile__V_29_29;
    MR_ArrayPtr profile__V_30_30;
    MR_Word profile__V_31_31;
    MR_Word profile__V_32_32;
    MR_Word profile__V_33_33;
    MR_Word profile__V_34_34;

    profile__succeeded = (profile__PDI_4 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
        profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
        profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
        profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
        profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
        profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
        profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
        profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
        profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
        profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
        profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
        profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
        profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
        profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
        profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
        profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
        profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
        profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
        profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
        profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
        profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
        profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
        profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
        profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
        profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
        profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
        profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
        profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
        profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
        profile__TypeCtorInfo_35_35 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeCtorInfo_35_35, (MR_ArrayPtr) profile__V_6_6, profile__PDI_4);
        }
      }
    return profile__succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_clique_ptr_2_p_0(
  MR_Word profile__Deep_3,
  MR_Word profile__HeadVar__2_2)
{
  {
    MR_bool profile__succeeded;
    MR_Word profile__TypeInfo_35_35;
    MR_Integer profile__CliqueNum_4 = (MR_Integer) profile__HeadVar__2_2;
    MR_ArrayPtr profile__V_6_6;
    MR_Word profile__V_7_7;
    MR_String profile__V_8_8;
    MR_String profile__V_9_9;
    MR_String profile__V_10_10;
    MR_Word profile__V_11_11;
    MR_ArrayPtr profile__V_12_12;
    MR_ArrayPtr profile__V_13_13;
    MR_ArrayPtr profile__V_14_14;
    MR_ArrayPtr profile__V_15_15;
    MR_ArrayPtr profile__V_16_16;
    MR_ArrayPtr profile__V_17_17;
    MR_ArrayPtr profile__V_18_18;
    MR_ArrayPtr profile__V_19_19;
    MR_ArrayPtr profile__V_20_20;
    MR_ArrayPtr profile__V_21_21;
    MR_ArrayPtr profile__V_22_22;
    MR_ArrayPtr profile__V_23_23;
    MR_ArrayPtr profile__V_24_24;
    MR_ArrayPtr profile__V_25_25;
    MR_ArrayPtr profile__V_26_26;
    MR_ArrayPtr profile__V_27_27;
    MR_ArrayPtr profile__V_28_28;
    MR_ArrayPtr profile__V_29_29;
    MR_ArrayPtr profile__V_30_30;
    MR_Word profile__V_31_31;
    MR_Word profile__V_32_32;
    MR_Word profile__V_33_33;
    MR_Word profile__V_34_34;

    profile__succeeded = (profile__CliqueNum_4 > (MR_Integer) 0);
    if (profile__succeeded)
      {
        profile__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 0)));
        profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 1)));
        profile__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 2)));
        profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 3)));
        profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 4)));
        profile__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 5)));
        profile__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 6)));
        profile__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 7)));
        profile__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 8)));
        profile__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 9)));
        profile__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 10)));
        profile__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 11)));
        profile__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 12)));
        profile__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 13)));
        profile__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 14)));
        profile__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 15)));
        profile__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 16)));
        profile__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 17)));
        profile__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 18)));
        profile__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 19)));
        profile__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 20)));
        profile__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 21)));
        profile__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 22)));
        profile__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 23)));
        profile__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 24)));
        profile__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 25)));
        profile__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 26)));
        profile__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 27)));
        profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__Deep_3, (MR_Integer) 28)));
        profile__TypeInfo_35_35 = (MR_Word) &profile_scalar_common_1[0];
        {
          profile__succeeded = mercury__array__in_bounds_2_p_0(profile__TypeInfo_35_35, (MR_ArrayPtr) profile__V_6_6, profile__CliqueNum_4);
        }
      }
    return profile__succeeded;
  }
}

MR_Word MR_CALL 
profile__dummy_clique_ptr_0_f_0(void)
{
  {
    MR_bool profile__succeeded;

    return (MR_Word) ((MR_Box) ((MR_Integer) -1));
  }
}

MR_Word MR_CALL 
profile__dummy_call_site_static_ptr_0_f_0(void)
{
  {
    MR_bool profile__succeeded;

    return (MR_Word) ((MR_Box) ((MR_Integer) -1));
  }
}

MR_Word MR_CALL 
profile__dummy_call_site_dynamic_ptr_0_f_0(void)
{
  {
    MR_bool profile__succeeded;

    return (MR_Word) ((MR_Box) ((MR_Integer) -1));
  }
}

MR_Word MR_CALL 
profile__dummy_proc_static_ptr_0_f_0(void)
{
  {
    MR_bool profile__succeeded;

    return (MR_Word) ((MR_Box) ((MR_Integer) -1));
  }
}

MR_Word MR_CALL 
profile__dummy_proc_dynamic_ptr_0_f_0(void)
{
  {
    MR_bool profile__succeeded;

    return (MR_Word) ((MR_Box) ((MR_Integer) -1));
  }
}

MR_Word MR_CALL 
profile__main_parent_proc_id_0_f_0(void)
{
  {
    MR_bool profile__succeeded;

    return (MR_Word) &profile_scalar_common_3[1];
  }
}

MR_Word MR_CALL 
profile__dummy_proc_id_0_f_0(void)
{
  {
    MR_bool profile__succeeded;

    return (MR_Word) &profile_scalar_common_3[0];
  }
}

MR_String MR_CALL 
profile__decl_module_1_f_0(
  MR_Word profile__ProcId_3)
{
  {
    MR_bool profile__succeeded;
    MR_String profile__DeclModule_4;

    if (((MR_tag((MR_Word) profile__ProcId_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word profile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), profile__ProcId_3, (MR_Integer) 0)));
        MR_String profile__V_6_6;
        MR_String profile__V_7_7;
        MR_Integer profile__V_8_8;
        MR_Integer profile__V_9_9;

        profile__DeclModule_4 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__ProcId_3, (MR_Integer) 1)));
        profile__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__ProcId_3, (MR_Integer) 2)));
        profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), profile__ProcId_3, (MR_Integer) 3)));
        profile__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__ProcId_3, (MR_Integer) 4)));
        profile__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), profile__ProcId_3, (MR_Integer) 5)));
      }
    else
      {
        MR_String profile__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__ProcId_3, (MR_Integer) 0)));
        MR_String profile__V_11_11;
        MR_String profile__V_12_12;
        MR_Integer profile__V_13_13;
        MR_Integer profile__V_14_14;

        profile__DeclModule_4 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__ProcId_3, (MR_Integer) 1)));
        profile__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__ProcId_3, (MR_Integer) 2)));
        profile__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), profile__ProcId_3, (MR_Integer) 3)));
        profile__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), profile__ProcId_3, (MR_Integer) 4)));
        profile__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), profile__ProcId_3, (MR_Integer) 5)));
      }
    return profile__DeclModule_4;
  }
}

MR_bool MR_CALL 
profile__is_call_site_kind_2_p_0(
  MR_Integer profile__Int_1,
  MR_Word * profile__CallSite_2)
{
  {
    MR_bool profile__succeeded;

{
#define MR_PROC_LABEL profile__is_call_site_kind_2_p_0

	MR_Integer Int;
	MR_Word CallSite;
	MR_bool SUCCESS_INDICATOR;

	Int =  profile__Int_1 ;
		{

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


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *profile__CallSite_2  = CallSite;
	}
profile__succeeded  = SUCCESS_INDICATOR;
}
    return profile__succeeded;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__profile__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module profile. */
