/*
** Automatically generated from `profile.m'
** by the Mercury compiler,
** version 22.01.9-beta-2026-06-13
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


// :- module profile.
// :- implementation.

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
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_0[1];

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_array_slot_0_0;

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_1[2];

static const MR_DuArgLocn profile__profile__field_locns_call_site_array_slot_0_1[2];

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

static const MR_EnumFunctorDescPtr profile__profile__enum_ordinal_ordered_canonical_flag_0[2];

static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_canonical_flag_0[2];

static const MR_Integer profile__profile__functor_number_map_canonical_flag_0[2];

static const MR_Integer profile__profile__functor_number_map_clique_ptr_0[1];

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_clique_ptr_0;

static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0;

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_0;

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_1;

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_2;

static const MR_EnumFunctorDescPtr profile__profile__enum_ordinal_ordered_coverage_data_type_0[3];

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

static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1io__type_ctor_info_output_stream_0;

static const MR_PseudoTypeInfo profile__profile__field_types_deep_0_0[30];

static const MR_ConstString profile__profile__field_names_deep_0_0[30];

static const MR_DuFunctorDesc profile__profile__du_functor_desc_deep_0_0;

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_deep_0_0[1];

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_deep_0[1];

static const MR_DuFunctorDescPtr profile__profile__du_name_ordered_deep_0[1];

static const MR_Integer profile__profile__functor_number_map_deep_0[1];

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_deep_compression_flag_0_0;

static const MR_EnumFunctorDescPtr profile__profile__enum_ordinal_ordered_deep_compression_flag_0[1];

static const MR_EnumFunctorDescPtr profile__profile__enum_name_ordered_deep_compression_flag_0[1];

static const MR_Integer profile__profile__functor_number_map_deep_compression_flag_0[1];

static const MR_PseudoTypeInfo profile__profile__field_types_deep_flags_0_0[4];

static const MR_ConstString profile__profile__field_names_deep_flags_0_0[4];

static const MR_DuArgLocn profile__profile__field_locns_deep_flags_0_0[4];

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

static const MR_EnumFunctorDescPtr profile__profile__enum_ordinal_ordered_is_zeroed_0[2];

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

static const MR_DuArgLocn profile__profile__field_locns_proc_static_0_0[12];

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
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_array_slot_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_callees_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_callees_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_caller_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_caller_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_dynamic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_dynamic_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_dynamics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_dynamics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
profile____Compare____call_site_kind_and_callee_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_kind_and_callee_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
profile____Compare____call_site_kind_and_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
profile____Unify____call_site_static_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_static_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_static_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_static_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_static_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_static_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____call_site_statics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____call_site_statics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____canonical_flag_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____canonical_flag_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____clique_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____clique_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____compensation_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____compensation_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____coverage_data_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____coverage_data_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____deep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____deep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____deep_compression_flag_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____deep_compression_flag_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____deep_flags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____deep_flags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____initial_deep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____initial_deep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____is_zeroed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____is_zeroed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____module_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____module_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____proc_dynamic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____proc_dynamic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____proc_dynamic_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____proc_dynamic_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____proc_dynamics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____proc_dynamics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____proc_static_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____proc_static_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____proc_static_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____proc_static_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____proc_statics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____proc_statics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
profile____Unify____profile_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
profile____Compare____profile_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box profile_scalar_common_1[28][2];

static /* final */ const MR_Box profile_scalar_common_2[4][3];

static /* final */ const MR_Box profile_scalar_common_3[2][6];




static /* final */ const MR_Box profile_scalar_common_1[28][2] = {
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
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 25 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 26 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&profile_scalar_common_1[25]))
  },
  /* row 27 */
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
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_String) "mercury_runtime")),
    ((MR_Box) ((MR_String) "mercury_runtime")),
    ((MR_Box) ((MR_String) "main_parent")),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_0[1] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)
};

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_array_slot_0_0 = {
  (MR_String) "slot_normal",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  profile__profile__field_types_call_site_array_slot_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_array_slot_0_1[2] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_is_zeroed_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0)
};

static const MR_DuArgLocn profile__profile__field_locns_call_site_array_slot_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_array_slot_0_1 = {
  (MR_String) "slot_multi",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  profile__profile__field_types_call_site_array_slot_0_1,
  NULL,
  profile__profile__field_locns_call_site_array_slot_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_array_slot_0_0[1] = {
  &profile__profile__du_functor_desc_call_site_array_slot_0_0
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_array_slot_0_1[1] = {
  &profile__profile__du_functor_desc_call_site_array_slot_0_1
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_array_slot_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_array_slot_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_array_slot_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____call_site_array_slot_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_array_slot_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_array_slot",
  {     profile__profile__du_name_ordered_call_site_array_slot_0 },
  {     profile__profile__du_ptag_ordered_call_site_array_slot_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  profile__profile__functor_number_map_call_site_array_slot_0,

};

static const MR_Integer profile__profile__functor_number_map_call_site_callees_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)
  }
};

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_callees_0 = {
  (MR_String) "call_site_callees",
  (MR_PseudoTypeInfo) (&profile__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_callees_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____call_site_callees_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_callees_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_callees",
  {     &profile__profile__notag_functor_desc_call_site_callees_0 },
  {     &profile__profile__notag_functor_desc_call_site_callees_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  profile__profile__functor_number_map_call_site_callees_0,

};

static const MR_Integer profile__profile__functor_number_map_call_site_caller_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_caller_0 = {
  (MR_String) "call_site_caller",
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_static_ptr_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_caller_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____call_site_caller_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_caller_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_caller",
  {     &profile__profile__notag_functor_desc_call_site_caller_0 },
  {     &profile__profile__notag_functor_desc_call_site_caller_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  profile__profile__functor_number_map_call_site_caller_0,

};

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_dynamic_0_0[3] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0),
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0),
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_own_prof_info_0)
};

static const MR_ConstString profile__profile__field_names_call_site_dynamic_0_0[3] = {
  (MR_String) "csd_caller",
  (MR_String) "csd_callee",
  (MR_String) "csd_own_prof"
};

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_dynamic_0_0 = {
  (MR_String) "call_site_dynamic",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  profile__profile__field_types_call_site_dynamic_0_0,
  profile__profile__field_names_call_site_dynamic_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_dynamic_0_0[1] = {
  &profile__profile__du_functor_desc_call_site_dynamic_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_dynamic_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_dynamic_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____call_site_dynamic_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_dynamic_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_dynamic",
  {     profile__profile__du_name_ordered_call_site_dynamic_0 },
  {     profile__profile__du_ptag_ordered_call_site_dynamic_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  profile__profile__functor_number_map_call_site_dynamic_0,

};

static const MR_Integer profile__profile__functor_number_map_call_site_dynamic_ptr_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_dynamic_ptr_0 = {
  (MR_String) "call_site_dynamic_ptr",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____call_site_dynamic_ptr_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_dynamic_ptr_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_dynamic_ptr",
  {     &profile__profile__notag_functor_desc_call_site_dynamic_ptr_0 },
  {     &profile__profile__notag_functor_desc_call_site_dynamic_ptr_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  profile__profile__functor_number_map_call_site_dynamic_ptr_0,

};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_0)
  }
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_dynamics_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____call_site_dynamics_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_dynamics_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_dynamics",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_0 = {
  (MR_String) "normal_call",
  INT32_C(0),
  ((int) MR_callsite_normal_call)
};

static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_1 = {
  (MR_String) "special_call",
  INT32_C(1),
  ((int) MR_callsite_special_call)
};

static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_2 = {
  (MR_String) "higher_order_call",
  INT32_C(2),
  ((int) MR_callsite_higher_order_call)
};

static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_3 = {
  (MR_String) "method_call",
  INT32_C(3),
  ((int) MR_callsite_method_call)
};

static const MR_ForeignEnumFunctorDesc profile__profile__foreign_enum_functor_desc_call_site_kind_0_4 = {
  (MR_String) "callback",
  INT32_C(4),
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN_ENUM,
  ((MR_Box) (profile____Unify____call_site_kind_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_kind_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_kind",
  {     profile__profile__foreign_enum_name_ordered_call_site_kind_0 },
  {     profile__profile__foreign_enum_ordinal_ordered_call_site_kind_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  profile__profile__functor_number_map_call_site_kind_0,

};

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_kind_and_callee_1_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_0 = {
  (MR_String) "normal_call_and_callee",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  profile__profile__field_types_call_site_kind_and_callee_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_1 = {
  (MR_String) "special_call_and_no_callee",
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

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_2 = {
  (MR_String) "higher_order_call_and_no_callee",
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

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_3 = {
  (MR_String) "method_call_and_no_callee",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_callee_1_4 = {
  (MR_String) "callback_and_no_callee",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(4),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    profile__profile__du_stag_ordered_call_site_kind_and_callee_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_kind_and_callee_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____call_site_kind_and_callee_1_0_10001)),
  ((MR_Box) (profile____Compare____call_site_kind_and_callee_1_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_kind_and_callee",
  {     profile__profile__du_name_ordered_call_site_kind_and_callee_1 },
  {     profile__profile__du_ptag_ordered_call_site_kind_and_callee_1 },
  (MR_Integer) 5,
  UINT16_C(12),
  profile__profile__functor_number_map_call_site_kind_and_callee_1,

};

static const MR_FA_TypeInfo_Struct1 profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0)
  }
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_kind_and_callee_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____call_site_kind_and_callee_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_kind_and_callee_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_kind_and_callee",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_kind_and_info_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_0 = {
  (MR_String) "normal_call_and_info",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  profile__profile__field_types_call_site_kind_and_info_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_1 = {
  (MR_String) "special_call_and_no_info",
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

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_2 = {
  (MR_String) "higher_order_call_and_no_info",
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

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_3 = {
  (MR_String) "method_call_and_no_info",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc profile__profile__du_functor_desc_call_site_kind_and_info_1_4 = {
  (MR_String) "callback_and_no_info",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(4),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    profile__profile__du_stag_ordered_call_site_kind_and_info_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_kind_and_info_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____call_site_kind_and_info_1_0_10001)),
  ((MR_Box) (profile____Compare____call_site_kind_and_info_1_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_kind_and_info",
  {     profile__profile__du_name_ordered_call_site_kind_and_info_1 },
  {     profile__profile__du_ptag_ordered_call_site_kind_and_info_1 },
  (MR_Integer) 5,
  UINT16_C(12),
  profile__profile__functor_number_map_call_site_kind_and_info_1,

};

static const MR_PseudoTypeInfo profile__profile__field_types_call_site_static_0_0[5] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)
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
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  profile__profile__field_types_call_site_static_0_0,
  profile__profile__field_names_call_site_static_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_call_site_static_0_0[1] = {
  &profile__profile__du_functor_desc_call_site_static_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_call_site_static_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_call_site_static_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____call_site_static_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_static_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_static",
  {     profile__profile__du_name_ordered_call_site_static_0 },
  {     profile__profile__du_ptag_ordered_call_site_static_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  profile__profile__functor_number_map_call_site_static_0,

};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_static_ptr_0)
  }
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_static_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____call_site_static_map_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_static_map_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_static_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer profile__profile__functor_number_map_call_site_static_ptr_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_call_site_static_ptr_0 = {
  (MR_String) "call_site_static_ptr",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_static_ptr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____call_site_static_ptr_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_static_ptr_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_static_ptr",
  {     &profile__profile__notag_functor_desc_call_site_static_ptr_0 },
  {     &profile__profile__notag_functor_desc_call_site_static_ptr_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  profile__profile__functor_number_map_call_site_static_ptr_0,

};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_static_0)
  }
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_call_site_statics_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____call_site_statics_0_0_10001)),
  ((MR_Box) (profile____Compare____call_site_statics_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "call_site_statics",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_call_site_static_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_canonical_flag_0_0 = {
  (MR_String) "is_canonical",
  INT32_C(0)
};

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_canonical_flag_0_1 = {
  (MR_String) "maybe_not_canonical",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr profile__profile__enum_ordinal_ordered_canonical_flag_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (profile____Unify____canonical_flag_0_0_10001)),
  ((MR_Box) (profile____Compare____canonical_flag_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "canonical_flag",
  {     profile__profile__enum_name_ordered_canonical_flag_0 },
  {     profile__profile__enum_ordinal_ordered_canonical_flag_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  profile__profile__functor_number_map_canonical_flag_0,

};

static const MR_Integer profile__profile__functor_number_map_clique_ptr_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_clique_ptr_0 = {
  (MR_String) "clique_ptr",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_clique_ptr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____clique_ptr_0_0_10001)),
  ((MR_Box) (profile____Compare____clique_ptr_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "clique_ptr",
  {     &profile__profile__notag_functor_desc_clique_ptr_0 },
  {     &profile__profile__notag_functor_desc_clique_ptr_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  profile__profile__functor_number_map_clique_ptr_0,

};

static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
    (MR_TypeInfo) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)
  }
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_compensation_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____compensation_table_0_0_10001)),
  ((MR_Box) (profile____Compare____compensation_table_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "compensation_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_0 = {
  (MR_String) "no_coverage_data",
  INT32_C(0)
};

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_1 = {
  (MR_String) "static_coverage_data",
  INT32_C(1)
};

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_coverage_data_type_0_2 = {
  (MR_String) "dynamic_coverage_data",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr profile__profile__enum_ordinal_ordered_coverage_data_type_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (profile____Unify____coverage_data_type_0_0_10001)),
  ((MR_Box) (profile____Compare____coverage_data_type_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "coverage_data_type",
  {     profile__profile__enum_name_ordered_coverage_data_type_0 },
  {     profile__profile__enum_ordinal_ordered_coverage_data_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  profile__profile__functor_number_map_coverage_data_type_0,

};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_proc_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_static_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&profile__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&profile__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&profile__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
    (MR_TypeInfo) (&profile__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1measurements__type_ctor_info_own_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&measurements__measurements__type_ctor_info_own_prof_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&profile__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 profile__tree234__ti_tree234_2builtin__type_ctor_info_string_0profile__type_ctor_info_module_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&profile__profile__type_ctor_info_module_data_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&profile__array__ti_array_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&profile__array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_prog_rep_1,
  {
    (MR_TypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_TypeInfo_Struct2 profile__maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) (&profile__mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&profile__maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 profile__maybe__ti_maybe_1io__type_ctor_info_output_stream_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0)
  }
};

static const MR_PseudoTypeInfo profile__profile__field_types_deep_0_0[30] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_profile_stats_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_call_site_static_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_proc_static_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_clique_ptr_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_ptr_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1measurements__type_ctor_info_own_prof_info_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1measurements__type_ctor_info_own_prof_info_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1measurements__type_ctor_info_own_prof_info_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1measurements__type_ctor_info_inherit_prof_info_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0),
  (MR_PseudoTypeInfo) (&profile__tree234__ti_tree234_2builtin__type_ctor_info_string_0profile__type_ctor_info_module_data_0),
  (MR_PseudoTypeInfo) (&profile__maybe__ti_maybe_1array__ti_array_1maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&exclude__exclude__type_ctor_info_exclude_file_0),
  (MR_PseudoTypeInfo) (&profile__maybe__ti_maybe_1maybe__ti_maybe_error_2mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&profile__maybe__ti_maybe_1io__type_ctor_info_output_stream_0)
};

static const MR_ConstString profile__profile__field_names_deep_0_0[30] = {
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
  (MR_String) "procrep_file",
  (MR_String) "progress_stream"
};

static const MR_DuFunctorDesc profile__profile__du_functor_desc_deep_0_0 = {
  (MR_String) "deep",
  INT16_C(30),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  profile__profile__field_types_deep_0_0,
  profile__profile__field_names_deep_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_deep_0_0[1] = {
  &profile__profile__du_functor_desc_deep_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_deep_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_deep_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____deep_0_0_10001)),
  ((MR_Box) (profile____Compare____deep_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "deep",
  {     profile__profile__du_name_ordered_deep_0 },
  {     profile__profile__du_ptag_ordered_deep_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  profile__profile__functor_number_map_deep_0,

};

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_deep_compression_flag_0_0 = {
  (MR_String) "no_compression",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr profile__profile__enum_ordinal_ordered_deep_compression_flag_0[1] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (profile____Unify____deep_compression_flag_0_0_10001)),
  ((MR_Box) (profile____Compare____deep_compression_flag_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "deep_compression_flag",
  {     profile__profile__enum_name_ordered_deep_compression_flag_0 },
  {     profile__profile__enum_ordinal_ordered_deep_compression_flag_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  profile__profile__functor_number_map_deep_compression_flag_0,

};

static const MR_PseudoTypeInfo profile__profile__field_types_deep_flags_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_canonical_flag_0),
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_deep_compression_flag_0),
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_coverage_data_type_0)
};

static const MR_ConstString profile__profile__field_names_deep_flags_0_0[4] = {
  (MR_String) "df_bytes_per_int",
  (MR_String) "df_canonical_flag",
  (MR_String) "df_compression_flag",
  (MR_String) "df_coverage_data_type"
};

static const MR_DuArgLocn profile__profile__field_locns_deep_flags_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc profile__profile__du_functor_desc_deep_flags_0_0 = {
  (MR_String) "deep_flags",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  profile__profile__field_types_deep_flags_0_0,
  profile__profile__field_names_deep_flags_0_0,
  profile__profile__field_locns_deep_flags_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_deep_flags_0_0[1] = {
  &profile__profile__du_functor_desc_deep_flags_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_deep_flags_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_deep_flags_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____deep_flags_0_0_10001)),
  ((MR_Box) (profile____Compare____deep_flags_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "deep_flags",
  {     profile__profile__du_name_ordered_deep_flags_0 },
  {     profile__profile__du_ptag_ordered_deep_flags_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  profile__profile__functor_number_map_deep_flags_0,

};

static const MR_PseudoTypeInfo profile__profile__field_types_initial_deep_0_0[6] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_profile_stats_0),
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_call_site_dynamic_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_call_site_static_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_proc_static_0)
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
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  profile__profile__field_types_initial_deep_0_0,
  profile__profile__field_names_initial_deep_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_initial_deep_0_0[1] = {
  &profile__profile__du_functor_desc_initial_deep_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_initial_deep_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_initial_deep_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____initial_deep_0_0_10001)),
  ((MR_Box) (profile____Compare____initial_deep_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "initial_deep",
  {     profile__profile__du_name_ordered_initial_deep_0 },
  {     profile__profile__du_ptag_ordered_initial_deep_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  profile__profile__functor_number_map_initial_deep_0,

};

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_is_zeroed_0_0 = {
  (MR_String) "zeroed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc profile__profile__enum_functor_desc_is_zeroed_0_1 = {
  (MR_String) "not_zeroed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr profile__profile__enum_ordinal_ordered_is_zeroed_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (profile____Unify____is_zeroed_0_0_10001)),
  ((MR_Box) (profile____Compare____is_zeroed_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "is_zeroed",
  {     profile__profile__enum_name_ordered_is_zeroed_0 },
  {     profile__profile__enum_ordinal_ordered_is_zeroed_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  profile__profile__functor_number_map_is_zeroed_0,

};

static const MR_FA_TypeInfo_Struct1 profile__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0)
  }
};

static const MR_PseudoTypeInfo profile__profile__field_types_module_data_0_0[3] = {
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_own_prof_info_0),
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_inherit_prof_info_0),
  (MR_PseudoTypeInfo) (&profile__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0)
};

static const MR_ConstString profile__profile__field_names_module_data_0_0[3] = {
  (MR_String) "module_own",
  (MR_String) "module_desc",
  (MR_String) "module_procs"
};

static const MR_DuFunctorDesc profile__profile__du_functor_desc_module_data_0_0 = {
  (MR_String) "module_data",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  profile__profile__field_types_module_data_0_0,
  profile__profile__field_names_module_data_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_module_data_0_0[1] = {
  &profile__profile__du_functor_desc_module_data_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_module_data_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_module_data_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____module_data_0_0_10001)),
  ((MR_Box) (profile____Compare____module_data_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "module_data",
  {     profile__profile__du_name_ordered_module_data_0 },
  {     profile__profile__du_ptag_ordered_module_data_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  profile__profile__functor_number_map_module_data_0,

};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_array_slot_0)
  }
};

static const MR_PseudoTypeInfo profile__profile__field_types_proc_dynamic_0_0[3] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_call_site_array_slot_0),
  (MR_PseudoTypeInfo) (&profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString profile__profile__field_names_proc_dynamic_0_0[3] = {
  (MR_String) "pd_proc_static",
  (MR_String) "pd_sites",
  (MR_String) "pd_maybe_coverage_points"
};

static const MR_DuFunctorDesc profile__profile__du_functor_desc_proc_dynamic_0_0 = {
  (MR_String) "proc_dynamic",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  profile__profile__field_types_proc_dynamic_0_0,
  profile__profile__field_names_proc_dynamic_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_proc_dynamic_0_0[1] = {
  &profile__profile__du_functor_desc_proc_dynamic_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_proc_dynamic_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_proc_dynamic_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____proc_dynamic_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_dynamic_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_dynamic",
  {     profile__profile__du_name_ordered_proc_dynamic_0 },
  {     profile__profile__du_ptag_ordered_proc_dynamic_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  profile__profile__functor_number_map_proc_dynamic_0,

};

static const MR_Integer profile__profile__functor_number_map_proc_dynamic_ptr_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_proc_dynamic_ptr_0 = {
  (MR_String) "proc_dynamic_ptr",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_dynamic_ptr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____proc_dynamic_ptr_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_dynamic_ptr_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_dynamic_ptr",
  {     &profile__profile__notag_functor_desc_proc_dynamic_ptr_0 },
  {     &profile__profile__notag_functor_desc_proc_dynamic_ptr_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  profile__profile__functor_number_map_proc_dynamic_ptr_0,

};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_dynamics_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____proc_dynamics_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_dynamics_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_dynamics",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_proc_dynamic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 profile__array__ti_array_1mdbcomp__program_representation__type_ctor_info_coverage_point_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)
  }
};

static const MR_PseudoTypeInfo profile__profile__field_types_proc_static_0_0[12] = {
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_call_site_static_ptr_0),
  (MR_PseudoTypeInfo) (&profile__array__ti_array_1mdbcomp__program_representation__type_ctor_info_coverage_point_info_0),
  (MR_PseudoTypeInfo) (&profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_is_zeroed_0)
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

static const MR_DuArgLocn profile__profile__field_locns_proc_static_0_0[12] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc profile__profile__du_functor_desc_proc_static_0_0 = {
  (MR_String) "proc_static",
  INT16_C(12),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  profile__profile__field_types_proc_static_0_0,
  profile__profile__field_names_proc_static_0_0,
  profile__profile__field_locns_proc_static_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_proc_static_0_0[1] = {
  &profile__profile__du_functor_desc_proc_static_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_proc_static_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_proc_static_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____proc_static_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_static_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_static",
  {     profile__profile__du_name_ordered_proc_static_0 },
  {     profile__profile__du_ptag_ordered_proc_static_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  profile__profile__functor_number_map_proc_static_0,

};

static const MR_Integer profile__profile__functor_number_map_proc_static_ptr_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc profile__profile__notag_functor_desc_proc_static_ptr_0 = {
  (MR_String) "proc_static_ptr",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_static_ptr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (profile____Unify____proc_static_ptr_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_static_ptr_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_static_ptr",
  {     &profile__profile__notag_functor_desc_proc_static_ptr_0 },
  {     &profile__profile__notag_functor_desc_proc_static_ptr_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  profile__profile__functor_number_map_proc_static_ptr_0,

};

const MR_TypeCtorInfo_Struct profile__profile__type_ctor_info_proc_statics_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (profile____Unify____proc_statics_0_0_10001)),
  ((MR_Box) (profile____Compare____proc_statics_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "proc_statics",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&profile__array__ti_array_1profile__type_ctor_info_proc_static_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo profile__profile__field_types_profile_stats_0_0[10] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_deep_flags_0)
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
  INT16_C(10),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  profile__profile__field_types_profile_stats_0_0,
  profile__profile__field_names_profile_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr profile__profile__du_stag_ordered_profile_stats_0_0[1] = {
  &profile__profile__du_functor_desc_profile_stats_0_0
};

static const MR_DuPtagLayout profile__profile__du_ptag_ordered_profile_stats_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    profile__profile__du_stag_ordered_profile_stats_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (profile____Unify____profile_stats_0_0_10001)),
  ((MR_Box) (profile____Compare____profile_stats_0_0_10001)),
  (MR_String) "profile",
  (MR_String) "profile_stats",
  {     profile__profile__du_name_ordered_profile_stats_0 },
  {     profile__profile__du_ptag_ordered_profile_stats_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  profile__profile__functor_number_map_profile_stats_0,

};

void MR_CALL 
profile____Compare____proc_statics_0_0(
  MR_Word * HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3)
{
  {
    MR_ArrayPtr Cast_HeadVar1_4 = HeadVar__2_2;
    MR_ArrayPtr Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[12]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
profile____Unify____proc_statics_0_0(
  MR_ArrayPtr HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr Cast_HeadVar1_3 = HeadVar__1_1;
    MR_ArrayPtr Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__array____Unify____array_1_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), (MR_ArrayPtr) (Cast_HeadVar1_3), (MR_ArrayPtr) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____proc_static_ptr_0_0(
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
profile____Unify____proc_static_ptr_0_0(
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
profile____Compare____proc_static_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_39 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_40 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_39 == CastY_40);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_String ArgX4_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_String ArgY4_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_String ArgX5_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_String ArgY5_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_String ArgX6_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_String ArgY6_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_ArrayPtr ArgX9_28 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_ArrayPtr ArgY9_29 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_ArrayPtr ArgX10_31 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_ArrayPtr ArgY10_32 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
      MR_Word ArgX12_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))) & (MR_Integer) 1);
      MR_Word ArgY12_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      mdbcomp__program_representation____Compare____string_proc_label_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  succeeded = (ArgX7_22 < ArgY7_23);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX7_22 > ArgY7_23);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult7_24 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;
                    MR_Integer Var_53 = (MR_Integer) (ArgX8_25);
                    MR_Integer Var_54 = (MR_Integer) (ArgY8_26);

                    succeeded = (Var_53 < Var_54);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_53 > Var_54);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult8_27 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[9]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                      succeeded = (SubResult9_30 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;

                        mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[27]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                        succeeded = (SubResult10_33 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Word SubResult11_36;

                          mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[26]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                          succeeded = (SubResult11_36 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult11_36;
                          else
                          {
                            MR_Integer Var_55 = (MR_Integer) (ArgX12_37);
                            MR_Integer Var_56 = (MR_Integer) (ArgY12_38);

                            succeeded = (Var_55 < Var_56);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_55 > Var_56);
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_30_30;
      MR_Word TypeCtorInfo_31_31;
      MR_Word TypeInfo_32_32;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgX4_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_String ArgY4_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_String ArgX5_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_String ArgY5_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_String ArgX6_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_String ArgY6_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_ArrayPtr ArgX9_19 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_ArrayPtr ArgY9_20 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_ArrayPtr ArgX10_21 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_ArrayPtr ArgY10_22 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgX12_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))) & (MR_Integer) 1);
      MR_Word ArgY12_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))) & (MR_Integer) 1);

      succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
          if (succeeded)
          {
            succeeded = (strcmp(ArgX4_9, ArgY4_10) == 0);
            if (succeeded)
            {
              succeeded = (strcmp(ArgX5_11, ArgY5_12) == 0);
              if (succeeded)
              {
                succeeded = (strcmp(ArgX6_13, ArgY6_14) == 0);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      TypeCtorInfo_30_30 = (MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0);
                      succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_30_30, (MR_ArrayPtr) (ArgX9_19), (MR_ArrayPtr) (ArgY9_20));
                      if (succeeded)
                      {
                        TypeCtorInfo_31_31 = (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0);
                        succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_31_31, (MR_ArrayPtr) (ArgX10_21), (MR_ArrayPtr) (ArgY10_22));
                        if (succeeded)
                        {
                          TypeInfo_32_32 = (MR_Word) (&profile_scalar_common_1[26]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                          if (succeeded)
                            succeeded = (ArgX12_25 == ArgY12_26);
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
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____proc_dynamics_0_0(
  MR_Word * HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3)
{
  {
    MR_ArrayPtr Cast_HeadVar1_4 = HeadVar__2_2;
    MR_ArrayPtr Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
profile____Unify____proc_dynamics_0_0(
  MR_ArrayPtr HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr Cast_HeadVar1_3 = HeadVar__1_1;
    MR_ArrayPtr Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__array____Unify____array_1_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_ArrayPtr) (Cast_HeadVar1_3), (MR_ArrayPtr) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____proc_dynamic_ptr_0_0(
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
profile____Unify____proc_dynamic_ptr_0_0(
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
profile____Compare____proc_dynamic_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_ArrayPtr ArgX2_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_ArrayPtr ArgY2_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;
      MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[24]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[26]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

MR_bool MR_CALL 
profile____Unify____proc_dynamic_0_0(
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
    {
      MR_Word TypeCtorInfo_11_11;
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_ArrayPtr ArgX2_5 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_ArrayPtr ArgY2_6 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer CastX_15 = (MR_Integer) (ArgX1_3);
      MR_Integer CastY_16 = (MR_Integer) (ArgY1_4);

      succeeded = (CastX_15 == CastY_16);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer ArgX1_13 = (MR_Integer) (ArgX1_3);
        MR_Integer ArgY1_14 = (MR_Integer) (ArgY1_4);

        succeeded = (ArgX1_13 == ArgY1_14);
      }
      if (succeeded)
      {
        TypeCtorInfo_11_11 = (MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0);
        succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (ArgX2_5), (MR_ArrayPtr) (ArgY2_6));
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&profile_scalar_common_1[26]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____module_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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

      measurements____Compare____own_prof_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        measurements____Compare____inherit_prof_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[23]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

MR_bool MR_CALL 
profile____Unify____module_data_0_0(
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
    {
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = measurements____Unify____own_prof_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = measurements____Unify____inherit_prof_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&profile_scalar_common_1[23]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____is_zeroed_0_0(
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
profile____Unify____is_zeroed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
profile____Compare____initial_deep_0_0(
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
      MR_ArrayPtr ArgX3_10 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_ArrayPtr ArgY3_11 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_ArrayPtr ArgX4_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_ArrayPtr ArgY4_14 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_ArrayPtr ArgX5_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_ArrayPtr ArgY5_17 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_ArrayPtr ArgX6_19 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_ArrayPtr ArgY6_20 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word SubResult1_6;

      profile____Compare____profile_stats_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_29 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_30 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_29 < Var_30);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_29 > Var_30);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[7]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[11]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[10]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[12]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
profile____Unify____initial_deep_0_0(
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
      MR_Word TypeCtorInfo_17_17;
      MR_Word TypeCtorInfo_18_18;
      MR_Word TypeCtorInfo_19_19;
      MR_Word TypeCtorInfo_20_20;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_ArrayPtr ArgX3_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_ArrayPtr ArgY3_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_ArrayPtr ArgX4_9 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_ArrayPtr ArgY4_10 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_ArrayPtr ArgX5_11 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_ArrayPtr ArgY5_12 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_ArrayPtr ArgX6_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_ArrayPtr ArgY6_14 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Integer CastX_23;
      MR_Integer CastY_24;

      succeeded = profile____Unify____profile_stats_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        CastX_23 = (MR_Integer) (ArgX2_5);
        CastY_24 = (MR_Integer) (ArgY2_6);
        succeeded = (CastX_23 == CastY_24);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Integer ArgX1_21 = (MR_Integer) (ArgX2_5);
          MR_Integer ArgY1_22 = (MR_Integer) (ArgY2_6);

          succeeded = (ArgX1_21 == ArgY1_22);
        }
        if (succeeded)
        {
          TypeCtorInfo_17_17 = (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0);
          succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_17_17, (MR_ArrayPtr) (ArgX3_7), (MR_ArrayPtr) (ArgY3_8));
          if (succeeded)
          {
            TypeCtorInfo_18_18 = (MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0);
            succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_18_18, (MR_ArrayPtr) (ArgX4_9), (MR_ArrayPtr) (ArgY4_10));
            if (succeeded)
            {
              TypeCtorInfo_19_19 = (MR_Word) (&profile__profile__type_ctor_info_call_site_static_0);
              succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_19_19, (MR_ArrayPtr) (ArgX5_11), (MR_ArrayPtr) (ArgY5_12));
              if (succeeded)
              {
                TypeCtorInfo_20_20 = (MR_Word) (&profile__profile__type_ctor_info_proc_static_0);
                succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_20_20, (MR_ArrayPtr) (ArgX6_13), (MR_ArrayPtr) (ArgY6_14));
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____deep_compression_flag_0_0(
  MR_Word * HeadVar__1_1)
{
  profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_114_111_102_105_108_101_95_95_100_101_101_112_95_99_111_109_112_114_101_115_115_105_111_110_95_102_108_97_103_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_114_111_102_105_108_101_95_95_100_101_101_112_95_99_111_109_112_114_101_115_115_105_111_110_95_102_108_97_103_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
profile____Unify____deep_compression_flag_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
profile____Compare____deep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_93 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_94 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_93 == CastY_94);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_String ArgX4_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_String ArgY4_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_ArrayPtr ArgX6_19 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_ArrayPtr ArgY6_20 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_ArrayPtr ArgX7_22 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_ArrayPtr ArgY7_23 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_ArrayPtr ArgX8_25 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_ArrayPtr ArgY8_26 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_ArrayPtr ArgX9_28 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_ArrayPtr ArgY9_29 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_ArrayPtr ArgX10_31 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_ArrayPtr ArgY10_32 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_ArrayPtr ArgX11_34 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_ArrayPtr ArgY11_35 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
      MR_ArrayPtr ArgX12_37 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_ArrayPtr ArgY12_38 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
      MR_ArrayPtr ArgX13_40 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_ArrayPtr ArgY13_41 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12))));
      MR_ArrayPtr ArgX14_43 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_ArrayPtr ArgY14_44 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13))));
      MR_ArrayPtr ArgX15_46 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_ArrayPtr ArgY15_47 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))));
      MR_ArrayPtr ArgX16_49 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_ArrayPtr ArgY16_50 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 15))));
      MR_ArrayPtr ArgX17_52 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))));
      MR_ArrayPtr ArgY17_53 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 16))));
      MR_ArrayPtr ArgX18_55 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
      MR_ArrayPtr ArgY18_56 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 17))));
      MR_ArrayPtr ArgX19_58 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));
      MR_ArrayPtr ArgY19_59 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 18))));
      MR_ArrayPtr ArgX20_61 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19))));
      MR_ArrayPtr ArgY20_62 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 19))));
      MR_ArrayPtr ArgX21_64 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20))));
      MR_ArrayPtr ArgY21_65 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 20))));
      MR_ArrayPtr ArgX22_67 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21))));
      MR_ArrayPtr ArgY22_68 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 21))));
      MR_ArrayPtr ArgX23_70 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 22))));
      MR_ArrayPtr ArgY23_71 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 22))));
      MR_ArrayPtr ArgX24_73 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 23))));
      MR_ArrayPtr ArgY24_74 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 23))));
      MR_ArrayPtr ArgX25_76 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 24))));
      MR_ArrayPtr ArgY25_77 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 24))));
      MR_Word ArgX26_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 25))));
      MR_Word ArgY26_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 25))));
      MR_Word ArgX27_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 26))));
      MR_Word ArgY27_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 26))));
      MR_Word ArgX28_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 27))));
      MR_Word ArgY28_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 27))));
      MR_Word ArgX29_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 28))));
      MR_Word ArgY29_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 28))));
      MR_Word ArgX30_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 29))));
      MR_Word ArgY30_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 29))));
      MR_Word SubResult1_6;

      profile____Compare____profile_stats_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;
              MR_Integer Var_125 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_126 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_125 < Var_126);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_125 > Var_126);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[7]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[11]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[10]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[12]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                      succeeded = (SubResult9_30 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;

                        mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[13]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                        succeeded = (SubResult10_33 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Word SubResult11_36;

                          mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[14]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                          succeeded = (SubResult11_36 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult11_36;
                          else
                          {
                            MR_Word SubResult12_39;

                            mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[6]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                            succeeded = (SubResult12_39 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult12_39;
                            else
                            {
                              MR_Word SubResult13_42;

                              mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[15]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                              succeeded = (SubResult13_42 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult13_42;
                              else
                              {
                                MR_Word SubResult14_45;

                                mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[16]), &SubResult14_45, ((MR_Box) (ArgX14_43)), ((MR_Box) (ArgY14_44)));
                                succeeded = (SubResult14_45 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult14_45;
                                else
                                {
                                  MR_Word SubResult15_48;

                                  mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[9]), &SubResult15_48, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
                                  succeeded = (SubResult15_48 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult15_48;
                                  else
                                  {
                                    MR_Word SubResult16_51;

                                    mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[17]), &SubResult16_51, ((MR_Box) (ArgX16_49)), ((MR_Box) (ArgY16_50)));
                                    succeeded = (SubResult16_51 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult16_51;
                                    else
                                    {
                                      MR_Word SubResult17_54;

                                      mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[4]), &SubResult17_54, ((MR_Box) (ArgX17_52)), ((MR_Box) (ArgY17_53)));
                                      succeeded = (SubResult17_54 != (MR_Integer) 0);
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult17_54;
                                      else
                                      {
                                        MR_Word SubResult18_57;

                                        mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[3]), &SubResult18_57, ((MR_Box) (ArgX18_55)), ((MR_Box) (ArgY18_56)));
                                        succeeded = (SubResult18_57 != (MR_Integer) 0);
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult18_57;
                                        else
                                        {
                                          MR_Word SubResult19_60;

                                          mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[3]), &SubResult19_60, ((MR_Box) (ArgX19_58)), ((MR_Box) (ArgY19_59)));
                                          succeeded = (SubResult19_60 != (MR_Integer) 0);
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult19_60;
                                          else
                                          {
                                            MR_Word SubResult20_63;

                                            mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[4]), &SubResult20_63, ((MR_Box) (ArgX20_61)), ((MR_Box) (ArgY20_62)));
                                            succeeded = (SubResult20_63 != (MR_Integer) 0);
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult20_63;
                                            else
                                            {
                                              MR_Word SubResult21_66;

                                              mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[3]), &SubResult21_66, ((MR_Box) (ArgX21_64)), ((MR_Box) (ArgY21_65)));
                                              succeeded = (SubResult21_66 != (MR_Integer) 0);
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult21_66;
                                              else
                                              {
                                                MR_Word SubResult22_69;

                                                mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[4]), &SubResult22_69, ((MR_Box) (ArgX22_67)), ((MR_Box) (ArgY22_68)));
                                                succeeded = (SubResult22_69 != (MR_Integer) 0);
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult22_69;
                                                else
                                                {
                                                  MR_Word SubResult23_72;

                                                  mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[3]), &SubResult23_72, ((MR_Box) (ArgX23_70)), ((MR_Box) (ArgY23_71)));
                                                  succeeded = (SubResult23_72 != (MR_Integer) 0);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult23_72;
                                                  else
                                                  {
                                                    MR_Word SubResult24_75;

                                                    mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[5]), &SubResult24_75, ((MR_Box) (ArgX24_73)), ((MR_Box) (ArgY24_74)));
                                                    succeeded = (SubResult24_75 != (MR_Integer) 0);
                                                    if (succeeded)
                                                      *HeadVar__1_1 = SubResult24_75;
                                                    else
                                                    {
                                                      MR_Word SubResult25_78;

                                                      mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[5]), &SubResult25_78, ((MR_Box) (ArgX25_76)), ((MR_Box) (ArgY25_77)));
                                                      succeeded = (SubResult25_78 != (MR_Integer) 0);
                                                      if (succeeded)
                                                        *HeadVar__1_1 = SubResult25_78;
                                                      else
                                                      {
                                                        MR_Word SubResult26_81;

                                                        mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_2[2]), &SubResult26_81, ((MR_Box) (ArgX26_79)), ((MR_Box) (ArgY26_80)));
                                                        succeeded = (SubResult26_81 != (MR_Integer) 0);
                                                        if (succeeded)
                                                          *HeadVar__1_1 = SubResult26_81;
                                                        else
                                                        {
                                                          MR_Word SubResult27_84;

                                                          mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[19]), &SubResult27_84, ((MR_Box) (ArgX27_82)), ((MR_Box) (ArgY27_83)));
                                                          succeeded = (SubResult27_84 != (MR_Integer) 0);
                                                          if (succeeded)
                                                            *HeadVar__1_1 = SubResult27_84;
                                                          else
                                                          {
                                                            MR_Word SubResult28_87;

                                                            exclude____Compare____exclude_file_0_0(&SubResult28_87, ArgX28_85, ArgY28_86);
                                                            succeeded = (SubResult28_87 != (MR_Integer) 0);
                                                            if (succeeded)
                                                              *HeadVar__1_1 = SubResult28_87;
                                                            else
                                                            {
                                                              MR_Word SubResult29_90;

                                                              mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[21]), &SubResult29_90, ((MR_Box) (ArgX29_88)), ((MR_Box) (ArgY29_89)));
                                                              succeeded = (SubResult29_90 != (MR_Integer) 0);
                                                              if (succeeded)
                                                                *HeadVar__1_1 = SubResult29_90;
                                                              else
                                                                mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[22]), HeadVar__1_1, ((MR_Box) (ArgX30_91)), ((MR_Box) (ArgY30_92)));
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

void MR_CALL 
profile____Compare____profile_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Integer ArgX9_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Integer ArgY9_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            succeeded = (ArgX4_13 < ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX4_13 > ArgY4_14);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              succeeded = (ArgX5_16 < ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX5_16 > ArgY5_17);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                succeeded = (ArgX6_19 < ArgY6_20);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX6_19 > ArgY6_20);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult6_21 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  succeeded = (ArgX7_22 < ArgY7_23);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX7_22 > ArgY7_23);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult7_24 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    succeeded = (ArgX8_25 < ArgY8_26);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX8_25 > ArgY8_26);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult8_27 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      succeeded = (ArgX9_28 < ArgY9_29);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX9_28 > ArgY9_29);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult9_30 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                        profile____Compare____deep_flags_0_0(HeadVar__1_1, ArgX10_31, ArgY10_32);
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

void MR_CALL 
profile____Compare____deep_flags_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_14 == CastY_15);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX4_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 3);
      MR_Word ArgY4_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 3);
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_19 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_20 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_19 > Var_20);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Integer Var_21 = (MR_Integer) (ArgX4_12);
          MR_Integer Var_22 = (MR_Integer) (ArgY4_13);

          succeeded = (Var_21 < Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_21 > Var_22);
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
profile____Unify____deep_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_63 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_64 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_63 == CastY_64);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_65_65;
      MR_Word TypeCtorInfo_66_66;
      MR_Word TypeCtorInfo_67_67;
      MR_Word TypeCtorInfo_68_68;
      MR_Word TypeCtorInfo_69_69;
      MR_Word TypeInfo_70_70;
      MR_Word TypeCtorInfo_71_71;
      MR_Word TypeInfo_72_72;
      MR_Word TypeInfo_73_73;
      MR_Word TypeCtorInfo_74_74;
      MR_Word TypeInfo_75_75;
      MR_Word TypeCtorInfo_76_76;
      MR_Word TypeCtorInfo_77_77;
      MR_Word TypeCtorInfo_78_78;
      MR_Word TypeCtorInfo_79_79;
      MR_Word TypeCtorInfo_80_80;
      MR_Word TypeCtorInfo_81_81;
      MR_Word TypeCtorInfo_82_82;
      MR_Word TypeInfo_83_83;
      MR_Word TypeInfo_84_84;
      MR_Word TypeInfo_85_85;
      MR_Word TypeInfo_86_86;
      MR_Word TypeInfo_88_88;
      MR_Word TypeInfo_89_89;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgX4_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_String ArgY4_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_ArrayPtr ArgX6_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_ArrayPtr ArgY6_14 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_ArrayPtr ArgX7_15 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_ArrayPtr ArgY7_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_ArrayPtr ArgX8_17 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_ArrayPtr ArgY8_18 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_ArrayPtr ArgX9_19 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_ArrayPtr ArgY9_20 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_ArrayPtr ArgX10_21 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_ArrayPtr ArgY10_22 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_ArrayPtr ArgX11_23 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_ArrayPtr ArgY11_24 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_ArrayPtr ArgX12_25 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
      MR_ArrayPtr ArgY12_26 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_ArrayPtr ArgX13_27 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12))));
      MR_ArrayPtr ArgY13_28 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_ArrayPtr ArgX14_29 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13))));
      MR_ArrayPtr ArgY14_30 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_ArrayPtr ArgX15_31 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))));
      MR_ArrayPtr ArgY15_32 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_ArrayPtr ArgX16_33 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 15))));
      MR_ArrayPtr ArgY16_34 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_ArrayPtr ArgX17_35 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 16))));
      MR_ArrayPtr ArgY17_36 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))));
      MR_ArrayPtr ArgX18_37 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 17))));
      MR_ArrayPtr ArgY18_38 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
      MR_ArrayPtr ArgX19_39 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 18))));
      MR_ArrayPtr ArgY19_40 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));
      MR_ArrayPtr ArgX20_41 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 19))));
      MR_ArrayPtr ArgY20_42 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19))));
      MR_ArrayPtr ArgX21_43 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 20))));
      MR_ArrayPtr ArgY21_44 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20))));
      MR_ArrayPtr ArgX22_45 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 21))));
      MR_ArrayPtr ArgY22_46 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21))));
      MR_ArrayPtr ArgX23_47 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 22))));
      MR_ArrayPtr ArgY23_48 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 22))));
      MR_ArrayPtr ArgX24_49 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 23))));
      MR_ArrayPtr ArgY24_50 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 23))));
      MR_ArrayPtr ArgX25_51 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 24))));
      MR_ArrayPtr ArgY25_52 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 24))));
      MR_Word ArgX26_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 25))));
      MR_Word ArgY26_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 25))));
      MR_Word ArgX27_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 26))));
      MR_Word ArgY27_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 26))));
      MR_Word ArgX28_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 27))));
      MR_Word ArgY28_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 27))));
      MR_Word ArgX29_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 28))));
      MR_Word ArgY29_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 28))));
      MR_Word ArgX30_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 29))));
      MR_Word ArgY30_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 29))));
      MR_Integer CastX_92;
      MR_Integer CastY_93;

      succeeded = profile____Unify____profile_stats_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
          if (succeeded)
          {
            succeeded = (strcmp(ArgX4_9, ArgY4_10) == 0);
            if (succeeded)
            {
              CastX_92 = (MR_Integer) (ArgX5_11);
              CastY_93 = (MR_Integer) (ArgY5_12);
              succeeded = (CastX_92 == CastY_93);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_Integer ArgX1_90 = (MR_Integer) (ArgX5_11);
                MR_Integer ArgY1_91 = (MR_Integer) (ArgY5_12);

                succeeded = (ArgX1_90 == ArgY1_91);
              }
              if (succeeded)
              {
                TypeCtorInfo_65_65 = (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0);
                succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_65_65, (MR_ArrayPtr) (ArgX6_13), (MR_ArrayPtr) (ArgY6_14));
                if (succeeded)
                {
                  TypeCtorInfo_66_66 = (MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0);
                  succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_66_66, (MR_ArrayPtr) (ArgX7_15), (MR_ArrayPtr) (ArgY7_16));
                  if (succeeded)
                  {
                    TypeCtorInfo_67_67 = (MR_Word) (&profile__profile__type_ctor_info_call_site_static_0);
                    succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_67_67, (MR_ArrayPtr) (ArgX8_17), (MR_ArrayPtr) (ArgY8_18));
                    if (succeeded)
                    {
                      TypeCtorInfo_68_68 = (MR_Word) (&profile__profile__type_ctor_info_proc_static_0);
                      succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_68_68, (MR_ArrayPtr) (ArgX9_19), (MR_ArrayPtr) (ArgY9_20));
                      if (succeeded)
                      {
                        TypeCtorInfo_69_69 = (MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0);
                        succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_69_69, (MR_ArrayPtr) (ArgX10_21), (MR_ArrayPtr) (ArgY10_22));
                        if (succeeded)
                        {
                          TypeInfo_70_70 = (MR_Word) (&profile_scalar_common_1[0]);
                          succeeded = mercury__array____Unify____array_1_0(TypeInfo_70_70, (MR_ArrayPtr) (ArgX11_23), (MR_ArrayPtr) (ArgY11_24));
                          if (succeeded)
                          {
                            TypeCtorInfo_71_71 = (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0);
                            succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_71_71, (MR_ArrayPtr) (ArgX12_25), (MR_ArrayPtr) (ArgY12_26));
                            if (succeeded)
                            {
                              TypeInfo_72_72 = (MR_Word) (&profile_scalar_common_1[1]);
                              succeeded = mercury__array____Unify____array_1_0(TypeInfo_72_72, (MR_ArrayPtr) (ArgX13_27), (MR_ArrayPtr) (ArgY13_28));
                              if (succeeded)
                              {
                                TypeInfo_73_73 = (MR_Word) (&profile_scalar_common_1[2]);
                                succeeded = mercury__array____Unify____array_1_0(TypeInfo_73_73, (MR_ArrayPtr) (ArgX14_29), (MR_ArrayPtr) (ArgY14_30));
                                if (succeeded)
                                {
                                  TypeCtorInfo_74_74 = (MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0);
                                  succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_74_74, (MR_ArrayPtr) (ArgX15_31), (MR_ArrayPtr) (ArgY15_32));
                                  if (succeeded)
                                  {
                                    TypeInfo_75_75 = (MR_Word) (&profile_scalar_common_2[0]);
                                    succeeded = mercury__array____Unify____array_1_0(TypeInfo_75_75, (MR_ArrayPtr) (ArgX16_33), (MR_ArrayPtr) (ArgY16_34));
                                    if (succeeded)
                                    {
                                      TypeCtorInfo_76_76 = (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0);
                                      succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_76_76, (MR_ArrayPtr) (ArgX17_35), (MR_ArrayPtr) (ArgY17_36));
                                      if (succeeded)
                                      {
                                        TypeCtorInfo_77_77 = (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0);
                                        succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_77_77, (MR_ArrayPtr) (ArgX18_37), (MR_ArrayPtr) (ArgY18_38));
                                        if (succeeded)
                                        {
                                          TypeCtorInfo_78_78 = (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0);
                                          succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_78_78, (MR_ArrayPtr) (ArgX19_39), (MR_ArrayPtr) (ArgY19_40));
                                          if (succeeded)
                                          {
                                            TypeCtorInfo_79_79 = (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0);
                                            succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_79_79, (MR_ArrayPtr) (ArgX20_41), (MR_ArrayPtr) (ArgY20_42));
                                            if (succeeded)
                                            {
                                              TypeCtorInfo_80_80 = (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0);
                                              succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_80_80, (MR_ArrayPtr) (ArgX21_43), (MR_ArrayPtr) (ArgY21_44));
                                              if (succeeded)
                                              {
                                                TypeCtorInfo_81_81 = (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0);
                                                succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_81_81, (MR_ArrayPtr) (ArgX22_45), (MR_ArrayPtr) (ArgY22_46));
                                                if (succeeded)
                                                {
                                                  TypeCtorInfo_82_82 = (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0);
                                                  succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_82_82, (MR_ArrayPtr) (ArgX23_47), (MR_ArrayPtr) (ArgY23_48));
                                                  if (succeeded)
                                                  {
                                                    TypeInfo_83_83 = (MR_Word) (&profile_scalar_common_2[1]);
                                                    succeeded = mercury__array____Unify____array_1_0(TypeInfo_83_83, (MR_ArrayPtr) (ArgX24_49), (MR_ArrayPtr) (ArgY24_50));
                                                    if (succeeded)
                                                    {
                                                      TypeInfo_84_84 = (MR_Word) (&profile_scalar_common_2[1]);
                                                      succeeded = mercury__array____Unify____array_1_0(TypeInfo_84_84, (MR_ArrayPtr) (ArgX25_51), (MR_ArrayPtr) (ArgY25_52));
                                                      if (succeeded)
                                                      {
                                                        TypeInfo_85_85 = (MR_Word) (&profile_scalar_common_2[2]);
                                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_85_85, ((MR_Box) (ArgX26_53)), ((MR_Box) (ArgY26_54)));
                                                        if (succeeded)
                                                        {
                                                          TypeInfo_86_86 = (MR_Word) (&profile_scalar_common_1[19]);
                                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_86_86, ((MR_Box) (ArgX27_55)), ((MR_Box) (ArgY27_56)));
                                                          if (succeeded)
                                                          {
                                                            succeeded = exclude____Unify____exclude_file_0_0(ArgX28_57, ArgY28_58);
                                                            if (succeeded)
                                                            {
                                                              TypeInfo_88_88 = (MR_Word) (&profile_scalar_common_1[21]);
                                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_88_88, ((MR_Box) (ArgX29_59)), ((MR_Box) (ArgY29_60)));
                                                              if (succeeded)
                                                              {
                                                                TypeInfo_89_89 = (MR_Word) (&profile_scalar_common_1[22]);
                                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_89_89, ((MR_Box) (ArgX30_61)), ((MR_Box) (ArgY30_62)));
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
    return succeeded;
  }
}

MR_bool MR_CALL 
profile____Unify____profile_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Integer ArgY9_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                        succeeded = profile____Unify____deep_flags_0_0(ArgX10_21, ArgY10_22);
                    }
                  }
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
profile____Unify____deep_flags_0_0(
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
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 3);
      MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 3);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____coverage_data_type_0_0(
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
profile____Unify____coverage_data_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
profile____Compare____compensation_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
profile____Unify____compensation_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&profile_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____clique_ptr_0_0(
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
profile____Unify____clique_ptr_0_0(
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
profile____Compare____canonical_flag_0_0(
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
profile____Unify____canonical_flag_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_statics_0_0(
  MR_Word * HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3)
{
  {
    MR_ArrayPtr Cast_HeadVar1_4 = HeadVar__2_2;
    MR_ArrayPtr Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_statics_0_0(
  MR_ArrayPtr HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr Cast_HeadVar1_3 = HeadVar__1_1;
    MR_ArrayPtr Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__array____Unify____array_1_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_0), (MR_ArrayPtr) (Cast_HeadVar1_3), (MR_ArrayPtr) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_static_ptr_0_0(
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
profile____Unify____call_site_static_ptr_0_0(
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
profile____Compare____call_site_static_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3)
{
  {
    MR_ArrayPtr Cast_HeadVar1_4 = HeadVar__2_2;
    MR_ArrayPtr Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_static_map_0_0(
  MR_ArrayPtr HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr Cast_HeadVar1_3 = HeadVar__1_1;
    MR_ArrayPtr Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__array____Unify____array_1_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_ArrayPtr) (Cast_HeadVar1_3), (MR_ArrayPtr) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_static_0_0(
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
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;
      MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_25 < Var_26);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_25 > Var_26);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[8]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            succeeded = (ArgX4_13 < ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX4_13 > ArgY4_14);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
              mdbcomp__goal_path____Compare____reverse_goal_path_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_static_0_0(
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
      MR_Word TypeCtorInfo_15_15;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer CastX_19 = (MR_Integer) (ArgX1_3);
      MR_Integer CastY_20 = (MR_Integer) (ArgY1_4);

      succeeded = (CastX_19 == CastY_20);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer ArgX1_17 = (MR_Integer) (ArgX1_3);
        MR_Integer ArgY1_18 = (MR_Integer) (ArgY1_4);

        succeeded = (ArgX1_17 == ArgY1_18);
      }
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeCtorInfo_15_15 = (MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0);
          succeeded = profile____Unify____call_site_kind_and_callee_1_0(TypeCtorInfo_15_15, ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
              succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_kind_and_info_1_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_14 == CastY_15);
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box Var_17 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

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
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_16, HeadVar__1_1, Var_17, ArgY1_5);
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
  MR_Word TypeInfo_for_T_15,
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
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
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
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
            case (MR_Integer) 3:
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
            MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, ArgX1_3, ArgY1_4);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_kind_and_callee_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = profile____Unify____call_site_kind_and_callee_1_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_kind_and_callee_1_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_25 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_26 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_25 == CastY_26);
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Box Var_30 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

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
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
                  MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_27, &SubResult1_6, Var_30, ArgY1_5);
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_29, ArgY2_8);
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
  MR_Word TypeInfo_for_T_17,
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_12 == CastX_11);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_14 == CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_4;
            MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_String ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_17, ArgX1_3, ArgY1_4);
              if (succeeded)
                succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_kind_0_0(
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
profile____Unify____call_site_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_dynamics_0_0(
  MR_Word * HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3)
{
  {
    MR_ArrayPtr Cast_HeadVar1_4 = HeadVar__2_2;
    MR_ArrayPtr Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_dynamics_0_0(
  MR_ArrayPtr HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr Cast_HeadVar1_3 = HeadVar__1_1;
    MR_ArrayPtr Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__array____Unify____array_1_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_ArrayPtr) (Cast_HeadVar1_3), (MR_ArrayPtr) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_dynamic_ptr_0_0(
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
profile____Unify____call_site_dynamic_ptr_0_0(
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
profile____Compare____call_site_dynamic_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_19 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_20 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_19 > Var_20);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          measurements____Compare____own_prof_info_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_dynamic_0_0(
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
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer CastX_14 = (MR_Integer) (ArgX1_3);
      MR_Integer CastY_15 = (MR_Integer) (ArgY1_4);
      MR_Integer CastX_18;
      MR_Integer CastY_19;

      succeeded = (CastX_14 == CastY_15);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer ArgX1_12 = (MR_Integer) (ArgX1_3);
        MR_Integer ArgY1_13 = (MR_Integer) (ArgY1_4);

        succeeded = (ArgX1_12 == ArgY1_13);
      }
      if (succeeded)
      {
        CastX_18 = (MR_Integer) (ArgX2_5);
        CastY_19 = (MR_Integer) (ArgY2_6);
        succeeded = (CastX_18 == CastY_19);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Integer ArgX1_16 = (MR_Integer) (ArgX2_5);
          MR_Integer ArgY1_17 = (MR_Integer) (ArgY2_6);

          succeeded = (ArgX1_16 == ArgY1_17);
        }
        if (succeeded)
          succeeded = measurements____Unify____own_prof_info_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_caller_0_0(
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
      MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_9 < Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_9 > Var_10);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_caller_0_0(
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
      MR_Integer CastX_9 = (MR_Integer) (ArgX1_3);
      MR_Integer CastY_10 = (MR_Integer) (ArgY1_4);

      succeeded = (CastX_9 == CastY_10);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer ArgX1_7 = (MR_Integer) (ArgX1_3);
        MR_Integer ArgY1_8 = (MR_Integer) (ArgY1_4);

        succeeded = (ArgX1_7 == ArgY1_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_callees_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

MR_bool MR_CALL 
profile____Unify____call_site_callees_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&profile_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

void MR_CALL 
profile____Compare____call_site_array_slot_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_ArrayPtr Var_22 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_ArrayPtr ArgY2_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_14;
        MR_Integer Var_25 = (MR_Integer) (Var_23);
        MR_Integer Var_26 = (MR_Integer) (ArgY1_13);

        succeeded = (Var_25 < Var_26);
        if (succeeded)
        {
          SubResult1_14 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_25 > Var_26);
          if (succeeded)
          {
            SubResult1_14 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult1_14 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult1_14;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&profile_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_22)), ((MR_Box) (ArgY2_16)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Integer Var_27 = (MR_Integer) (Var_24);
        MR_Integer Var_28 = (MR_Integer) (ArgY1_5);

        succeeded = (Var_27 < Var_28);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_27 > Var_28);
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
profile____Unify____call_site_array_slot_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word TypeCtorInfo_11_11;
      MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_6;
      MR_ArrayPtr ArgX2_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_ArrayPtr ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        ArgY2_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (ArgX1_5 == ArgY1_6);
        if (succeeded)
        {
          TypeCtorInfo_11_11 = (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0);
          succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (ArgX2_7), (MR_ArrayPtr) (ArgY2_8));
        }
      }
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Integer CastX_14;
      MR_Integer CastY_15;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        CastX_14 = (MR_Integer) (ArgX1_3);
        CastY_15 = (MR_Integer) (ArgY1_4);
        succeeded = (CastX_14 == CastY_15);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Integer ArgX1_12 = (MR_Integer) (ArgX1_3);
          MR_Integer ArgY1_13 = (MR_Integer) (ArgY1_4);

          succeeded = (ArgX1_12 == ArgY1_13);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
profile__deep_get_progrep_det_2_p_0(
  MR_Word Deep_3,
  MR_Word * ProgRep_4)
{
  {
    MR_Word MaybeProgRep_5;

    profile__deep_get_maybe_progrep_2_p_0(Deep_3, &MaybeProgRep_5);
    if (((MR_tag((MR_Word) MaybeProgRep_5)) == (MR_Integer) 1))
    {
      MR_String Error_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeProgRep_5, (MR_Integer) 0))));

      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.deep_get_progrep_det\'/2", Error_6);
        return;
      }
    }
    else
      *ProgRep_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeProgRep_5, (MR_Integer) 0))));
  }
}

void MR_CALL 
profile__deep_get_maybe_progrep_2_p_0(
  MR_Word Deep_3,
  MR_Word * MaybeProgRep_4)
{
  {
    MR_Word MaybeProgRep0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Deep_3, (MR_Integer) 28))));

    if ((MaybeProgRep0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_14;

      Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "There is no readable ", (MR_String) "procedure representation information file.");
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeProgRep_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
      }
    }
    else
    {
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProgRep0_5, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) Var_46)) == (MR_Integer) 1))
      {
        MR_String Error_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0))));
        MR_String Var_10;
        MR_String Var_12;

        Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "information file: ", Error_6);
        Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading procedure representation ", Var_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeProgRep_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
        }
      }
      else
        *MaybeProgRep_4 = Var_46;
    }
  }
}

MR_Word MR_CALL 
profile__root_own_info_1_f_0(
  MR_Word Deep_3)
{
  {
    MR_Word RootOwn_4;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Deep_3, (MR_Integer) 4))));
    MR_ArrayPtr Var_21 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_3, (MR_Integer) 16))));
    MR_Integer PDI_38 = (MR_Integer) (Var_5);
    MR_Box conv0_RootOwn_4;

    mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (Var_21), PDI_38, &conv0_RootOwn_4);
    RootOwn_4 = ((MR_Word) (conv0_RootOwn_4));
    return RootOwn_4;
  }
}

MR_Word MR_CALL 
profile__root_desc_info_1_f_0(
  MR_Word Deep_3)
{
  {
    MR_Word RootDesc_4;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Deep_3, (MR_Integer) 4))));
    MR_ArrayPtr Var_22 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_3, (MR_Integer) 17))));
    MR_Integer PDI_38 = (MR_Integer) (Var_5);
    MR_Box conv0_RootDesc_4;

    mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (Var_22), PDI_38, &conv0_RootDesc_4);
    RootDesc_4 = ((MR_Word) (conv0_RootDesc_4));
    return RootDesc_4;
  }
}

MR_Word MR_CALL 
profile__root_total_info_1_f_0(
  MR_Word Deep_3)
{
  {
    MR_Word RootTotal_4;
    MR_Word RootOwn_5;
    MR_Word RootDesc_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Deep_3, (MR_Integer) 4))));
    MR_Word Var_8;

    profile__deep_lookup_pd_own_3_p_0(Deep_3, Var_7, &RootOwn_5);
    Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Deep_3, (MR_Integer) 4))));
    profile__deep_lookup_pd_desc_3_p_0(Deep_3, Var_8, &RootDesc_6);
    RootTotal_4 = measurements__add_own_to_inherit_2_f_0(RootOwn_5, RootDesc_6);
    return RootTotal_4;
  }
}

MR_Word MR_CALL 
profile__wrap_proc_static_ptr_1_f_0(
  MR_Integer PSI_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) (PSI_3);

    return HeadVar__2_2;
  }
}

void MR_CALL 
profile__deep_extract_csdptr_callee_3_p_0(
  MR_Word Deep_4,
  MR_Word CSDPtr_5,
  MR_Word * CalleePDPtr_6)
{
  {
    MR_Word CSD_7;
    MR_ArrayPtr Var_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 5))));

    profile__lookup_call_site_dynamics_3_p_0(Var_8, CSDPtr_5, &CSD_7);
    *CalleePDPtr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSD_7, (MR_Integer) 1))));
  }
}

void MR_CALL 
profile__deep_extract_csdptr_caller_3_p_0(
  MR_Word Deep_4,
  MR_Word CSDPtr_5,
  MR_Word * CallerPDPtr_6)
{
  {
    MR_Word CSD_7;
    MR_ArrayPtr Var_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 5))));

    profile__lookup_call_site_dynamics_3_p_0(Var_8, CSDPtr_5, &CSD_7);
    *CallerPDPtr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSD_7, (MR_Integer) 0))));
  }
}

void MR_CALL 
profile__extract_init_root_2_p_0(
  MR_Word InitDeep_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InitDeep_3, (MR_Integer) 1))));
}

void MR_CALL 
profile__extract_init_proc_statics_2_p_0(
  MR_Word InitDeep_3,
  MR_ArrayPtr * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), InitDeep_3, (MR_Integer) 5))));
}

void MR_CALL 
profile__extract_init_proc_dynamics_2_p_0(
  MR_Word InitDeep_3,
  MR_ArrayPtr * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), InitDeep_3, (MR_Integer) 3))));
}

void MR_CALL 
profile__extract_init_call_site_statics_2_p_0(
  MR_Word InitDeep_3,
  MR_ArrayPtr * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), InitDeep_3, (MR_Integer) 4))));
}

void MR_CALL 
profile__extract_init_call_site_dynamics_2_p_0(
  MR_Word InitDeep_3,
  MR_ArrayPtr * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), InitDeep_3, (MR_Integer) 2))));
}

void MR_CALL 
profile__extract_max_pd_2_p_0(
  MR_Word InitDeep_3,
  MR_Integer * MaxPD_4)
{
  {
    MR_ArrayPtr Var_5 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), InitDeep_3, (MR_Integer) 3))));

    mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_ArrayPtr) (Var_5), MaxPD_4);
  }
}

void MR_CALL 
profile__extract_max_csd_2_p_0(
  MR_Word InitDeep_3,
  MR_Integer * MaxCSD_4)
{
  {
    MR_ArrayPtr Var_5 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), InitDeep_3, (MR_Integer) 2))));

    mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_ArrayPtr) (Var_5), MaxCSD_4);
  }
}

void MR_CALL 
profile__extract_max_ps_2_p_0(
  MR_Word InitDeep_3,
  MR_Integer * MaxPS_4)
{
  {
    MR_ArrayPtr Var_5 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), InitDeep_3, (MR_Integer) 5))));

    mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), (MR_ArrayPtr) (Var_5), MaxPS_4);
  }
}

void MR_CALL 
profile__extract_max_css_2_p_0(
  MR_Word InitDeep_3,
  MR_Integer * MaxCSS_4)
{
  {
    MR_ArrayPtr Var_5 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), InitDeep_3, (MR_Integer) 4))));

    mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_0), (MR_ArrayPtr) (Var_5), MaxCSS_4);
  }
}

void MR_CALL 
profile__extract_num_callseqs_2_p_0(
  MR_Word InitDeep_3,
  MR_Integer * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InitDeep_3, (MR_Integer) 0))));

    *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_4, (MR_Integer) 8))));
  }
}

void MR_CALL 
profile__extract_user_quanta_2_p_0(
  MR_Word InitDeep_3,
  MR_Integer * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InitDeep_3, (MR_Integer) 0))));

    *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_4, (MR_Integer) 7))));
  }
}

void MR_CALL 
profile__extract_instrument_quanta_2_p_0(
  MR_Word InitDeep_3,
  MR_Integer * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InitDeep_3, (MR_Integer) 0))));

    *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_4, (MR_Integer) 6))));
  }
}

void MR_CALL 
profile__extract_ticks_per_sec_2_p_0(
  MR_Word InitDeep_3,
  MR_Integer * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InitDeep_3, (MR_Integer) 0))));

    *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_4, (MR_Integer) 5))));
  }
}

void MR_CALL 
profile__extract_csdptr_callee_3_p_0(
  MR_Word InitDeep_4,
  MR_Word CSDPtr_5,
  MR_Word * CalleePDPtr_6)
{
  {
    MR_Word CSD_7;
    MR_ArrayPtr Var_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), InitDeep_4, (MR_Integer) 2))));

    profile__lookup_call_site_dynamics_3_p_0(Var_8, CSDPtr_5, &CSD_7);
    *CalleePDPtr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSD_7, (MR_Integer) 1))));
  }
}

void MR_CALL 
profile__extract_csdptr_caller_3_p_0(
  MR_Word InitDeep_4,
  MR_Word CSDPtr_5,
  MR_Word * CallerPDPtr_6)
{
  {
    MR_Word CSD_7;
    MR_ArrayPtr Var_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), InitDeep_4, (MR_Integer) 2))));

    profile__lookup_call_site_dynamics_3_p_0(Var_8, CSDPtr_5, &CSD_7);
    *CallerPDPtr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSD_7, (MR_Integer) 0))));
  }
}

void MR_CALL 
profile__extract_csd_callee_2_p_0(
  MR_Word CSD_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSD_3, (MR_Integer) 1))));
}

void MR_CALL 
profile__extract_csd_caller_2_p_0(
  MR_Word CSD_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSD_3, (MR_Integer) 0))));
}

void MR_CALL 
profile__extract_pd_sites_2_p_0(
  MR_Word PD_3,
  MR_ArrayPtr * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), PD_3, (MR_Integer) 1))));
}

void MR_CALL 
profile__deep_update_csd_comp_table_4_p_0(
  MR_Word CSDPtr_5,
  MR_Word CompTable_6,
  MR_Word STATE_VARIABLE_Deep_0_10,
  MR_Word * STATE_VARIABLE_Deep_11)
{
  {
    MR_Integer CSDI_8 = (MR_Integer) (CSDPtr_5);
    MR_ArrayPtr CSDCompTables_9;
    MR_ArrayPtr Var_12;
    MR_ArrayPtr Var_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 24))));
    MR_Box conv0_Var_12;
    MR_ArrayPtr conv1_CSDCompTables_9;
    MR_Word Var_44;
    MR_String Var_45;
    MR_String Var_46;
    MR_String Var_47;
    MR_Word Var_48;
    MR_ArrayPtr Var_49;
    MR_ArrayPtr Var_50;
    MR_ArrayPtr Var_51;
    MR_ArrayPtr Var_52;
    MR_ArrayPtr Var_53;
    MR_ArrayPtr Var_54;
    MR_ArrayPtr Var_55;
    MR_ArrayPtr Var_56;
    MR_ArrayPtr Var_57;
    MR_ArrayPtr Var_58;
    MR_ArrayPtr Var_59;
    MR_ArrayPtr Var_60;
    MR_ArrayPtr Var_61;
    MR_ArrayPtr Var_62;
    MR_ArrayPtr Var_63;
    MR_ArrayPtr Var_64;
    MR_ArrayPtr Var_65;
    MR_ArrayPtr Var_66;
    MR_ArrayPtr Var_67;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;

    conv0_Var_12 = array_util__u_1_f_0((MR_Word) (&profile_scalar_common_1[5]), ((MR_Box) (Var_13)));
    Var_12 = ((MR_ArrayPtr) (conv0_Var_12));
    mercury__array__set_4_p_0((MR_Word) (&profile_scalar_common_2[1]), CSDI_8, ((MR_Box) (CompTable_6)), (MR_ArrayPtr) (Var_12), &conv1_CSDCompTables_9);
    CSDCompTables_9 = (MR_ArrayPtr) (conv1_CSDCompTables_9);
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 0))));
    Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 1))));
    Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 2))));
    Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 3))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 4))));
    Var_49 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 5))));
    Var_50 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 6))));
    Var_51 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 7))));
    Var_52 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 8))));
    Var_53 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 9))));
    Var_54 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 10))));
    Var_55 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 11))));
    Var_56 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 12))));
    Var_57 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 13))));
    Var_58 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 14))));
    Var_59 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 15))));
    Var_60 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 16))));
    Var_61 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 17))));
    Var_62 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 18))));
    Var_63 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 19))));
    Var_64 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 20))));
    Var_65 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 21))));
    Var_66 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 22))));
    Var_67 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 23))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 25))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 26))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 27))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 28))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 29))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Deep_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (CSDCompTables_9));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (Var_73));
    }
  }
}

void MR_CALL 
profile__deep_update_pd_comp_table_4_p_0(
  MR_Word PDPtr_5,
  MR_Word CompTable_6,
  MR_Word STATE_VARIABLE_Deep_0_10,
  MR_Word * STATE_VARIABLE_Deep_11)
{
  {
    MR_Integer PDI_8 = (MR_Integer) (PDPtr_5);
    MR_ArrayPtr PDCompTables_9;
    MR_ArrayPtr Var_12;
    MR_ArrayPtr Var_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 23))));
    MR_Box conv0_Var_12;
    MR_ArrayPtr conv1_PDCompTables_9;
    MR_Word Var_44;
    MR_String Var_45;
    MR_String Var_46;
    MR_String Var_47;
    MR_Word Var_48;
    MR_ArrayPtr Var_49;
    MR_ArrayPtr Var_50;
    MR_ArrayPtr Var_51;
    MR_ArrayPtr Var_52;
    MR_ArrayPtr Var_53;
    MR_ArrayPtr Var_54;
    MR_ArrayPtr Var_55;
    MR_ArrayPtr Var_56;
    MR_ArrayPtr Var_57;
    MR_ArrayPtr Var_58;
    MR_ArrayPtr Var_59;
    MR_ArrayPtr Var_60;
    MR_ArrayPtr Var_61;
    MR_ArrayPtr Var_62;
    MR_ArrayPtr Var_63;
    MR_ArrayPtr Var_64;
    MR_ArrayPtr Var_65;
    MR_ArrayPtr Var_66;
    MR_ArrayPtr Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;

    conv0_Var_12 = array_util__u_1_f_0((MR_Word) (&profile_scalar_common_1[5]), ((MR_Box) (Var_13)));
    Var_12 = ((MR_ArrayPtr) (conv0_Var_12));
    mercury__array__set_4_p_0((MR_Word) (&profile_scalar_common_2[1]), PDI_8, ((MR_Box) (CompTable_6)), (MR_ArrayPtr) (Var_12), &conv1_PDCompTables_9);
    PDCompTables_9 = (MR_ArrayPtr) (conv1_PDCompTables_9);
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 0))));
    Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 1))));
    Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 2))));
    Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 3))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 4))));
    Var_49 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 5))));
    Var_50 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 6))));
    Var_51 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 7))));
    Var_52 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 8))));
    Var_53 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 9))));
    Var_54 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 10))));
    Var_55 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 11))));
    Var_56 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 12))));
    Var_57 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 13))));
    Var_58 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 14))));
    Var_59 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 15))));
    Var_60 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 16))));
    Var_61 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 17))));
    Var_62 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 18))));
    Var_63 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 19))));
    Var_64 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 20))));
    Var_65 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 21))));
    Var_66 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 22))));
    Var_68 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 24))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 25))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 26))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 27))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 28))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 29))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Deep_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (PDCompTables_9));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (Var_73));
    }
  }
}

void MR_CALL 
profile__deep_update_pd_own_4_p_0(
  MR_Word PDPtr_5,
  MR_Word PDOwn_6,
  MR_Word STATE_VARIABLE_Deep_0_10,
  MR_Word * STATE_VARIABLE_Deep_11)
{
  {
    MR_Integer PDI_8 = (MR_Integer) (PDPtr_5);
    MR_ArrayPtr PDOwns_9;
    MR_ArrayPtr Var_12;
    MR_ArrayPtr Var_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 16))));
    MR_Box conv0_Var_12;
    MR_ArrayPtr conv1_PDOwns_9;
    MR_Word Var_44;
    MR_String Var_45;
    MR_String Var_46;
    MR_String Var_47;
    MR_Word Var_48;
    MR_ArrayPtr Var_49;
    MR_ArrayPtr Var_50;
    MR_ArrayPtr Var_51;
    MR_ArrayPtr Var_52;
    MR_ArrayPtr Var_53;
    MR_ArrayPtr Var_54;
    MR_ArrayPtr Var_55;
    MR_ArrayPtr Var_56;
    MR_ArrayPtr Var_57;
    MR_ArrayPtr Var_58;
    MR_ArrayPtr Var_59;
    MR_ArrayPtr Var_61;
    MR_ArrayPtr Var_62;
    MR_ArrayPtr Var_63;
    MR_ArrayPtr Var_64;
    MR_ArrayPtr Var_65;
    MR_ArrayPtr Var_66;
    MR_ArrayPtr Var_67;
    MR_ArrayPtr Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;

    conv0_Var_12 = array_util__u_1_f_0((MR_Word) (&profile_scalar_common_1[4]), ((MR_Box) (Var_13)));
    Var_12 = ((MR_ArrayPtr) (conv0_Var_12));
    mercury__array__set_4_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), PDI_8, ((MR_Box) (PDOwn_6)), (MR_ArrayPtr) (Var_12), &conv1_PDOwns_9);
    PDOwns_9 = (MR_ArrayPtr) (conv1_PDOwns_9);
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 0))));
    Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 1))));
    Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 2))));
    Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 3))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 4))));
    Var_49 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 5))));
    Var_50 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 6))));
    Var_51 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 7))));
    Var_52 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 8))));
    Var_53 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 9))));
    Var_54 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 10))));
    Var_55 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 11))));
    Var_56 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 12))));
    Var_57 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 13))));
    Var_58 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 14))));
    Var_59 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 15))));
    Var_61 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 17))));
    Var_62 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 18))));
    Var_63 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 19))));
    Var_64 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 20))));
    Var_65 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 21))));
    Var_66 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 22))));
    Var_67 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 23))));
    Var_68 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 24))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 25))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 26))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 27))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 28))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 29))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Deep_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (PDOwns_9));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (Var_73));
    }
  }
}

void MR_CALL 
profile__deep_update_pd_desc_4_p_0(
  MR_Word PDPtr_5,
  MR_Word PDDesc_6,
  MR_Word STATE_VARIABLE_Deep_0_10,
  MR_Word * STATE_VARIABLE_Deep_11)
{
  {
    MR_Integer PDI_8 = (MR_Integer) (PDPtr_5);
    MR_ArrayPtr PDDescs_9;
    MR_ArrayPtr Var_12;
    MR_ArrayPtr Var_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 17))));
    MR_Box conv0_Var_12;
    MR_ArrayPtr conv1_PDDescs_9;
    MR_Word Var_44;
    MR_String Var_45;
    MR_String Var_46;
    MR_String Var_47;
    MR_Word Var_48;
    MR_ArrayPtr Var_49;
    MR_ArrayPtr Var_50;
    MR_ArrayPtr Var_51;
    MR_ArrayPtr Var_52;
    MR_ArrayPtr Var_53;
    MR_ArrayPtr Var_54;
    MR_ArrayPtr Var_55;
    MR_ArrayPtr Var_56;
    MR_ArrayPtr Var_57;
    MR_ArrayPtr Var_58;
    MR_ArrayPtr Var_59;
    MR_ArrayPtr Var_60;
    MR_ArrayPtr Var_62;
    MR_ArrayPtr Var_63;
    MR_ArrayPtr Var_64;
    MR_ArrayPtr Var_65;
    MR_ArrayPtr Var_66;
    MR_ArrayPtr Var_67;
    MR_ArrayPtr Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;

    conv0_Var_12 = array_util__u_1_f_0((MR_Word) (&profile_scalar_common_1[3]), ((MR_Box) (Var_13)));
    Var_12 = ((MR_ArrayPtr) (conv0_Var_12));
    mercury__array__set_4_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), PDI_8, ((MR_Box) (PDDesc_6)), (MR_ArrayPtr) (Var_12), &conv1_PDDescs_9);
    PDDescs_9 = (MR_ArrayPtr) (conv1_PDDescs_9);
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 0))));
    Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 1))));
    Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 2))));
    Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 3))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 4))));
    Var_49 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 5))));
    Var_50 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 6))));
    Var_51 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 7))));
    Var_52 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 8))));
    Var_53 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 9))));
    Var_54 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 10))));
    Var_55 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 11))));
    Var_56 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 12))));
    Var_57 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 13))));
    Var_58 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 14))));
    Var_59 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 15))));
    Var_60 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 16))));
    Var_62 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 18))));
    Var_63 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 19))));
    Var_64 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 20))));
    Var_65 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 21))));
    Var_66 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 22))));
    Var_67 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 23))));
    Var_68 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 24))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 25))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 26))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 27))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 28))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 29))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Deep_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (PDDescs_9));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (Var_73));
    }
  }
}

void MR_CALL 
profile__deep_update_csd_desc_4_p_0(
  MR_Word CSDPtr_5,
  MR_Word CSDDesc_6,
  MR_Word STATE_VARIABLE_Deep_0_10,
  MR_Word * STATE_VARIABLE_Deep_11)
{
  {
    MR_Integer CSDI_8 = (MR_Integer) (CSDPtr_5);
    MR_ArrayPtr CSDDescs_9;
    MR_ArrayPtr Var_12;
    MR_ArrayPtr Var_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 18))));
    MR_Box conv0_Var_12;
    MR_ArrayPtr conv1_CSDDescs_9;
    MR_Word Var_44;
    MR_String Var_45;
    MR_String Var_46;
    MR_String Var_47;
    MR_Word Var_48;
    MR_ArrayPtr Var_49;
    MR_ArrayPtr Var_50;
    MR_ArrayPtr Var_51;
    MR_ArrayPtr Var_52;
    MR_ArrayPtr Var_53;
    MR_ArrayPtr Var_54;
    MR_ArrayPtr Var_55;
    MR_ArrayPtr Var_56;
    MR_ArrayPtr Var_57;
    MR_ArrayPtr Var_58;
    MR_ArrayPtr Var_59;
    MR_ArrayPtr Var_60;
    MR_ArrayPtr Var_61;
    MR_ArrayPtr Var_63;
    MR_ArrayPtr Var_64;
    MR_ArrayPtr Var_65;
    MR_ArrayPtr Var_66;
    MR_ArrayPtr Var_67;
    MR_ArrayPtr Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;

    conv0_Var_12 = array_util__u_1_f_0((MR_Word) (&profile_scalar_common_1[3]), ((MR_Box) (Var_13)));
    Var_12 = ((MR_ArrayPtr) (conv0_Var_12));
    mercury__array__set_4_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), CSDI_8, ((MR_Box) (CSDDesc_6)), (MR_ArrayPtr) (Var_12), &conv1_CSDDescs_9);
    CSDDescs_9 = (MR_ArrayPtr) (conv1_CSDDescs_9);
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 0))));
    Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 1))));
    Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 2))));
    Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 3))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 4))));
    Var_49 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 5))));
    Var_50 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 6))));
    Var_51 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 7))));
    Var_52 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 8))));
    Var_53 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 9))));
    Var_54 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 10))));
    Var_55 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 11))));
    Var_56 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 12))));
    Var_57 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 13))));
    Var_58 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 14))));
    Var_59 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 15))));
    Var_60 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 16))));
    Var_61 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 17))));
    Var_63 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 19))));
    Var_64 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 20))));
    Var_65 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 21))));
    Var_66 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 22))));
    Var_67 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 23))));
    Var_68 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 24))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 25))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 26))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 27))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 28))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Deep_0_10, (MR_Integer) 29))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Deep_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (CSDDescs_9));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (Var_73));
    }
  }
}

void MR_CALL 
profile__update_ps_coverage_4_p_0(
  MR_Word PSPtr_5,
  MR_Word Coverage_6,
  MR_ArrayPtr STATE_VARIABLE_Coverages_0_9,
  MR_ArrayPtr * STATE_VARIABLE_Coverages_10)
{
  {
    MR_Integer PSI_8 = (MR_Integer) (PSPtr_5);
    MR_ArrayPtr conv0_STATE_VARIABLE_Coverages_10;

    mercury__array__set_4_p_0((MR_Word) (&measurements__measurements__type_ctor_info_static_coverage_info_0), PSI_8, ((MR_Box) (Coverage_6)), (MR_ArrayPtr) (STATE_VARIABLE_Coverages_0_9), &conv0_STATE_VARIABLE_Coverages_10);
    *STATE_VARIABLE_Coverages_10 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_Coverages_10);
  }
}

void MR_CALL 
profile__update_css_desc_4_p_0(
  MR_Word CSSPtr_5,
  MR_Word Desc_6,
  MR_ArrayPtr STATE_VARIABLE_CSSDescs_0_9,
  MR_ArrayPtr * STATE_VARIABLE_CSSDescs_10)
{
  {
    MR_Integer CSSI_8 = (MR_Integer) (CSSPtr_5);
    MR_ArrayPtr conv0_STATE_VARIABLE_CSSDescs_10;

    mercury__array__set_4_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), CSSI_8, ((MR_Box) (Desc_6)), (MR_ArrayPtr) (STATE_VARIABLE_CSSDescs_0_9), &conv0_STATE_VARIABLE_CSSDescs_10);
    *STATE_VARIABLE_CSSDescs_10 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_CSSDescs_10);
  }
}

void MR_CALL 
profile__update_css_own_4_p_0(
  MR_Word CSSPtr_5,
  MR_Word Own_6,
  MR_ArrayPtr STATE_VARIABLE_CSSOwns_0_9,
  MR_ArrayPtr * STATE_VARIABLE_CSSOwns_10)
{
  {
    MR_Integer CSSI_8 = (MR_Integer) (CSSPtr_5);
    MR_ArrayPtr conv0_STATE_VARIABLE_CSSOwns_10;

    mercury__array__set_4_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), CSSI_8, ((MR_Box) (Own_6)), (MR_ArrayPtr) (STATE_VARIABLE_CSSOwns_0_9), &conv0_STATE_VARIABLE_CSSOwns_10);
    *STATE_VARIABLE_CSSOwns_10 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_CSSOwns_10);
  }
}

void MR_CALL 
profile__update_ps_desc_4_p_0(
  MR_Word PSPtr_5,
  MR_Word Desc_6,
  MR_ArrayPtr STATE_VARIABLE_PSDescs_0_9,
  MR_ArrayPtr * STATE_VARIABLE_PSDescs_10)
{
  {
    MR_Integer PSI_8 = (MR_Integer) (PSPtr_5);
    MR_ArrayPtr conv0_STATE_VARIABLE_PSDescs_10;

    mercury__array__set_4_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), PSI_8, ((MR_Box) (Desc_6)), (MR_ArrayPtr) (STATE_VARIABLE_PSDescs_0_9), &conv0_STATE_VARIABLE_PSDescs_10);
    *STATE_VARIABLE_PSDescs_10 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_PSDescs_10);
  }
}

void MR_CALL 
profile__update_ps_own_4_p_0(
  MR_Word PSPtr_5,
  MR_Word Own_6,
  MR_ArrayPtr STATE_VARIABLE_PSOwns_0_9,
  MR_ArrayPtr * STATE_VARIABLE_PSOwns_10)
{
  {
    MR_Integer PSI_8 = (MR_Integer) (PSPtr_5);
    MR_ArrayPtr conv0_STATE_VARIABLE_PSOwns_10;

    mercury__array__set_4_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), PSI_8, ((MR_Box) (Own_6)), (MR_ArrayPtr) (STATE_VARIABLE_PSOwns_0_9), &conv0_STATE_VARIABLE_PSOwns_10);
    *STATE_VARIABLE_PSOwns_10 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_PSOwns_10);
  }
}

void MR_CALL 
profile__update_proc_callers_4_p_0(
  MR_Word PSPtr_5,
  MR_Word CSDPtrs_6,
  MR_ArrayPtr STATE_VARIABLE_ProcCallers_0_9,
  MR_ArrayPtr * STATE_VARIABLE_ProcCallers_10)
{
  {
    MR_Integer PSI_8 = (MR_Integer) (PSPtr_5);
    MR_ArrayPtr conv0_STATE_VARIABLE_ProcCallers_10;

    mercury__array__set_4_p_0((MR_Word) (&profile_scalar_common_1[2]), PSI_8, ((MR_Box) (CSDPtrs_6)), (MR_ArrayPtr) (STATE_VARIABLE_ProcCallers_0_9), &conv0_STATE_VARIABLE_ProcCallers_10);
    *STATE_VARIABLE_ProcCallers_10 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_ProcCallers_10);
  }
}

void MR_CALL 
profile__update_call_site_static_map_4_p_0(
  MR_Word CSDPtr_5,
  MR_Word CSSPtr_6,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStaticMap_0_9,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStaticMap_10)
{
  {
    MR_Integer CSDI_8 = (MR_Integer) (CSDPtr_5);
    MR_ArrayPtr conv0_STATE_VARIABLE_CallSiteStaticMap_10;

    mercury__array__set_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), CSDI_8, ((MR_Box) (CSSPtr_6)), (MR_ArrayPtr) (STATE_VARIABLE_CallSiteStaticMap_0_9), &conv0_STATE_VARIABLE_CallSiteStaticMap_10);
    *STATE_VARIABLE_CallSiteStaticMap_10 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_CallSiteStaticMap_10);
  }
}

void MR_CALL 
profile__update_proc_statics_4_p_0(
  MR_Word PSPtr_5,
  MR_Word PS_6,
  MR_ArrayPtr STATE_VARIABLE_ProcStatics_0_9,
  MR_ArrayPtr * STATE_VARIABLE_ProcStatics_10)
{
  {
    MR_Integer PSI_8 = (MR_Integer) (PSPtr_5);
    MR_ArrayPtr conv0_STATE_VARIABLE_ProcStatics_10;

    mercury__array__set_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), PSI_8, ((MR_Box) (PS_6)), (MR_ArrayPtr) (STATE_VARIABLE_ProcStatics_0_9), &conv0_STATE_VARIABLE_ProcStatics_10);
    *STATE_VARIABLE_ProcStatics_10 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_ProcStatics_10);
  }
}

void MR_CALL 
profile__update_proc_dynamics_4_p_0(
  MR_Word PDPtr_5,
  MR_Word PD_6,
  MR_ArrayPtr STATE_VARIABLE_ProcDynamics_0_9,
  MR_ArrayPtr * STATE_VARIABLE_ProcDynamics_10)
{
  {
    MR_Integer PDI_8 = (MR_Integer) (PDPtr_5);
    MR_ArrayPtr conv0_STATE_VARIABLE_ProcDynamics_10;

    mercury__array__set_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), PDI_8, ((MR_Box) (PD_6)), (MR_ArrayPtr) (STATE_VARIABLE_ProcDynamics_0_9), &conv0_STATE_VARIABLE_ProcDynamics_10);
    *STATE_VARIABLE_ProcDynamics_10 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_ProcDynamics_10);
  }
}

void MR_CALL 
profile__update_call_site_statics_4_p_0(
  MR_Word CSSPtr_5,
  MR_Word CSS_6,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStatics_0_9,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStatics_10)
{
  {
    MR_Integer CSSI_8 = (MR_Integer) (CSSPtr_5);
    MR_ArrayPtr conv0_STATE_VARIABLE_CallSiteStatics_10;

    mercury__array__set_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_0), CSSI_8, ((MR_Box) (CSS_6)), (MR_ArrayPtr) (STATE_VARIABLE_CallSiteStatics_0_9), &conv0_STATE_VARIABLE_CallSiteStatics_10);
    *STATE_VARIABLE_CallSiteStatics_10 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_CallSiteStatics_10);
  }
}

void MR_CALL 
profile__update_call_site_dynamics_4_p_0(
  MR_Word CSDPtr_5,
  MR_Word CSD_6,
  MR_ArrayPtr STATE_VARIABLE_CallSiteDynamics_0_9,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteDynamics_10)
{
  {
    MR_Integer CSDI_8 = (MR_Integer) (CSDPtr_5);
    MR_ArrayPtr conv0_STATE_VARIABLE_CallSiteDynamics_10;

    mercury__array__set_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), CSDI_8, ((MR_Box) (CSD_6)), (MR_ArrayPtr) (STATE_VARIABLE_CallSiteDynamics_0_9), &conv0_STATE_VARIABLE_CallSiteDynamics_10);
    *STATE_VARIABLE_CallSiteDynamics_10 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_CallSiteDynamics_10);
  }
}

void MR_CALL 
profile__deep_lookup_ps_coverage_3_p_0(
  MR_Word Deep_4,
  MR_Word PSPtr_5,
  MR_Word * Coverage_6)
{
  {
    MR_Word MaybeCoverageTables_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 26))));

    if ((MaybeCoverageTables_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *Coverage_6 = measurements__zero_static_coverage_0_f_0();
    else
    {
      MR_ArrayPtr CoverageTables_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(1), MaybeCoverageTables_7, (MR_Integer) 0))));

      profile__lookup_ps_coverage_3_p_0(CoverageTables_8, PSPtr_5, Coverage_6);
    }
  }
}

void MR_CALL 
profile__deep_lookup_css_desc_3_p_0(
  MR_Word Deep_4,
  MR_Word CSSPtr_5,
  MR_Word * Desc_6)
{
  {
    MR_Integer CSSI_7 = (MR_Integer) (CSSPtr_5);
    MR_ArrayPtr Var_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 22))));
    MR_Box conv0_Desc_6;

    mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (Var_8), CSSI_7, &conv0_Desc_6);
    *Desc_6 = ((MR_Word) (conv0_Desc_6));
  }
}

void MR_CALL 
profile__deep_lookup_css_own_3_p_0(
  MR_Word Deep_4,
  MR_Word CSSPtr_5,
  MR_Word * Own_6)
{
  {
    MR_Integer CSSI_7 = (MR_Integer) (CSSPtr_5);
    MR_ArrayPtr Var_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 21))));
    MR_Box conv0_Own_6;

    mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (Var_8), CSSI_7, &conv0_Own_6);
    *Own_6 = ((MR_Word) (conv0_Own_6));
  }
}

void MR_CALL 
profile__deep_lookup_ps_desc_3_p_0(
  MR_Word Deep_4,
  MR_Word PSPtr_5,
  MR_Word * Desc_6)
{
  {
    MR_Integer PSI_7 = (MR_Integer) (PSPtr_5);
    MR_ArrayPtr Var_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 20))));
    MR_Box conv0_Desc_6;

    mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (Var_8), PSI_7, &conv0_Desc_6);
    *Desc_6 = ((MR_Word) (conv0_Desc_6));
  }
}

void MR_CALL 
profile__deep_lookup_ps_own_3_p_0(
  MR_Word Deep_4,
  MR_Word PSPtr_5,
  MR_Word * Own_6)
{
  {
    MR_Integer PSI_7 = (MR_Integer) (PSPtr_5);
    MR_ArrayPtr Var_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 19))));
    MR_Box conv0_Own_6;

    mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (Var_8), PSI_7, &conv0_Own_6);
    *Own_6 = ((MR_Word) (conv0_Own_6));
  }
}

void MR_CALL 
profile__deep_lookup_csd_desc_3_p_0(
  MR_Word Deep_4,
  MR_Word CSDPtr_5,
  MR_Word * Desc_6)
{
  {
    MR_Integer CSDI_7 = (MR_Integer) (CSDPtr_5);
    MR_ArrayPtr Var_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 18))));
    MR_Box conv0_Desc_6;

    mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (Var_8), CSDI_7, &conv0_Desc_6);
    *Desc_6 = ((MR_Word) (conv0_Desc_6));
  }
}

void MR_CALL 
profile__deep_lookup_csd_own_3_p_0(
  MR_Word Deep_4,
  MR_Word CSDPtr_5,
  MR_Word * Own_6)
{
  {
    MR_Integer CSDI_7 = (MR_Integer) (CSDPtr_5);
    MR_Word CSD_8;
    MR_ArrayPtr Var_9 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 5))));
    MR_Box conv0_CSD_8;

    mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_ArrayPtr) (Var_9), CSDI_7, &conv0_CSD_8);
    CSD_8 = ((MR_Word) (conv0_CSD_8));
    *Own_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSD_8, (MR_Integer) 2))));
  }
}

void MR_CALL 
profile__deep_lookup_pd_desc_3_p_0(
  MR_Word Deep_4,
  MR_Word PDPtr_5,
  MR_Word * Desc_6)
{
  {
    MR_Integer PDI_7 = (MR_Integer) (PDPtr_5);
    MR_ArrayPtr Var_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 17))));
    MR_Box conv0_Desc_6;

    mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (Var_8), PDI_7, &conv0_Desc_6);
    *Desc_6 = ((MR_Word) (conv0_Desc_6));
  }
}

void MR_CALL 
profile__deep_lookup_pd_own_3_p_0(
  MR_Word Deep_4,
  MR_Word PDPtr_5,
  MR_Word * Own_6)
{
  {
    MR_Integer PDI_7 = (MR_Integer) (PDPtr_5);
    MR_ArrayPtr Var_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 16))));
    MR_Box conv0_Own_6;

    mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (Var_8), PDI_7, &conv0_Own_6);
    *Own_6 = ((MR_Word) (conv0_Own_6));
  }
}

void MR_CALL 
profile__deep_lookup_csd_comp_table_3_p_0(
  MR_Word Deep_4,
  MR_Word CSDPtr_5,
  MR_Word * CompTable_6)
{
  {
    MR_ArrayPtr Var_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 24))));

    profile__lookup_csd_comp_table_3_p_0(Var_7, CSDPtr_5, CompTable_6);
  }
}

void MR_CALL 
profile__deep_lookup_pd_comp_table_3_p_0(
  MR_Word Deep_4,
  MR_Word PDPtr_5,
  MR_Word * CompTable_6)
{
  {
    MR_ArrayPtr Var_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 23))));

    profile__lookup_pd_comp_table_3_p_0(Var_7, PDPtr_5, CompTable_6);
  }
}

void MR_CALL 
profile__deep_lookup_proc_dynamic_sites_3_p_0(
  MR_Word Deep_4,
  MR_Word PDPtr_5,
  MR_ArrayPtr * PDSites_6)
{
  {
    MR_Word PD_7;
    MR_ArrayPtr Var_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 6))));

    profile__lookup_proc_dynamics_3_p_0(Var_13, PDPtr_5, &PD_7);
    *PDSites_6 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), PD_7, (MR_Integer) 1))));
  }
}

void MR_CALL 
profile__deep_lookup_call_site_calls_3_p_0(
  MR_Word Deep_4,
  MR_Word CSSPtr_5,
  MR_Word * Calls_6)
{
  {
    MR_ArrayPtr Var_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 15))));

    profile__lookup_call_site_calls_3_p_0(Var_7, CSSPtr_5, Calls_6);
  }
}

void MR_CALL 
profile__deep_lookup_call_site_static_map_3_p_0(
  MR_Word Deep_4,
  MR_Word CSDPtr_5,
  MR_Word * CSSPtr_6)
{
  {
    MR_ArrayPtr Var_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 14))));

    profile__lookup_call_site_static_map_3_p_0(Var_7, CSDPtr_5, CSSPtr_6);
  }
}

void MR_CALL 
profile__deep_lookup_proc_callers_3_p_0(
  MR_Word Deep_4,
  MR_Word PSPtr_5,
  MR_Word * CallerCSDPtrs_6)
{
  {
    MR_ArrayPtr Var_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 13))));

    profile__lookup_proc_callers_3_p_0(Var_7, PSPtr_5, CallerCSDPtrs_6);
  }
}

void MR_CALL 
profile__deep_lookup_clique_maybe_child_3_p_0(
  MR_Word Deep_4,
  MR_Word CSDPtr_5,
  MR_Word * MaybeCliquePtr_6)
{
  {
    MR_ArrayPtr Var_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 12))));

    profile__lookup_clique_maybe_child_3_p_0(Var_7, CSDPtr_5, MaybeCliquePtr_6);
  }
}

void MR_CALL 
profile__deep_lookup_clique_parents_3_p_0(
  MR_Word Deep_4,
  MR_Word CliquePtr_5,
  MR_Word * CSDPtr_6)
{
  {
    MR_ArrayPtr Var_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 11))));

    profile__lookup_clique_parents_3_p_0(Var_7, CliquePtr_5, CSDPtr_6);
  }
}

void MR_CALL 
profile__deep_lookup_clique_members_3_p_0(
  MR_Word Deep_4,
  MR_Word CliquePtr_5,
  MR_Word * PDPtrs_6)
{
  {
    MR_ArrayPtr Var_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 10))));

    profile__lookup_clique_members_3_p_0(Var_7, CliquePtr_5, PDPtrs_6);
  }
}

void MR_CALL 
profile__deep_lookup_clique_index_3_p_0(
  MR_Word Deep_4,
  MR_Word PDPtr_5,
  MR_Word * CliquePtr_6)
{
  {
    MR_ArrayPtr Var_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 9))));

    profile__lookup_clique_index_3_p_0(Var_7, PDPtr_5, CliquePtr_6);
  }
}

void MR_CALL 
profile__deep_lookup_proc_statics_3_p_0(
  MR_Word Deep_4,
  MR_Word PSPtr_5,
  MR_Word * PS_6)
{
  {
    MR_ArrayPtr Var_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 8))));

    profile__lookup_proc_statics_3_p_0(Var_7, PSPtr_5, PS_6);
  }
}

void MR_CALL 
profile__deep_lookup_proc_dynamics_3_p_0(
  MR_Word Deep_4,
  MR_Word PDPtr_5,
  MR_Word * PD_6)
{
  {
    MR_ArrayPtr Var_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 6))));

    profile__lookup_proc_dynamics_3_p_0(Var_7, PDPtr_5, PD_6);
  }
}

void MR_CALL 
profile__deep_lookup_call_site_statics_3_p_0(
  MR_Word Deep_4,
  MR_Word CSSPtr_5,
  MR_Word * CSS_6)
{
  {
    MR_ArrayPtr Var_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 7))));

    profile__lookup_call_site_statics_3_p_0(Var_7, CSSPtr_5, CSS_6);
  }
}

void MR_CALL 
profile__deep_lookup_call_site_dynamics_3_p_0(
  MR_Word Deep_4,
  MR_Word CSDPtr_5,
  MR_Word * CSD_6)
{
  {
    MR_ArrayPtr Var_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_4, (MR_Integer) 5))));

    profile__lookup_call_site_dynamics_3_p_0(Var_7, CSDPtr_5, CSD_6);
  }
}

void MR_CALL 
profile__lookup_ps_coverage_3_p_0(
  MR_ArrayPtr PSCoverageArrays_4,
  MR_Word PSPtr_5,
  MR_Word * PSCoverageArray_6)
{
  {
    MR_bool succeeded;
    MR_Integer PSI_7 = (MR_Integer) (PSPtr_5);
    MR_Word TypeCtorInfo_11_11;

    succeeded = (PSI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&measurements__measurements__type_ctor_info_static_coverage_info_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (PSCoverageArrays_4), PSI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_PSCoverageArray_6;

      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_static_coverage_info_0), (MR_ArrayPtr) (PSCoverageArrays_4), PSI_7, &conv0_PSCoverageArray_6);
      *PSCoverageArray_6 = ((MR_Word) (conv0_PSCoverageArray_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_ps_coverage\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_csd_comp_table_3_p_0(
  MR_ArrayPtr CSDCompTables_4,
  MR_Word CSDPtr_5,
  MR_Word * CompTable_6)
{
  {
    MR_bool succeeded;
    MR_Integer CSDI_7 = (MR_Integer) (CSDPtr_5);
    MR_Word TypeInfo_11_11;

    succeeded = (CSDI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&profile_scalar_common_2[1]);
      succeeded = mercury__array__in_bounds_2_p_0(TypeInfo_11_11, (MR_ArrayPtr) (CSDCompTables_4), CSDI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_CompTable_6;

      mercury__array__lookup_3_p_0((MR_Word) (&profile_scalar_common_2[1]), (MR_ArrayPtr) (CSDCompTables_4), CSDI_7, &conv0_CompTable_6);
      *CompTable_6 = ((MR_Word) (conv0_CompTable_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_csd_comp_table\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_pd_comp_table_3_p_0(
  MR_ArrayPtr PDCompTables_4,
  MR_Word PDPtr_5,
  MR_Word * CompTable_6)
{
  {
    MR_bool succeeded;
    MR_Integer PDI_7 = (MR_Integer) (PDPtr_5);
    MR_Word TypeInfo_11_11;

    succeeded = (PDI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&profile_scalar_common_2[1]);
      succeeded = mercury__array__in_bounds_2_p_0(TypeInfo_11_11, (MR_ArrayPtr) (PDCompTables_4), PDI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_CompTable_6;

      mercury__array__lookup_3_p_0((MR_Word) (&profile_scalar_common_2[1]), (MR_ArrayPtr) (PDCompTables_4), PDI_7, &conv0_CompTable_6);
      *CompTable_6 = ((MR_Word) (conv0_CompTable_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_pd_comp_table\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_css_desc_3_p_0(
  MR_ArrayPtr CSSDescs_4,
  MR_Word CSSPtr_5,
  MR_Word * CSSDesc_6)
{
  {
    MR_bool succeeded;
    MR_Integer CSSI_7 = (MR_Integer) (CSSPtr_5);
    MR_Word TypeCtorInfo_11_11;

    succeeded = (CSSI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (CSSDescs_4), CSSI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_CSSDesc_6;

      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (CSSDescs_4), CSSI_7, &conv0_CSSDesc_6);
      *CSSDesc_6 = ((MR_Word) (conv0_CSSDesc_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_css_desc\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_css_own_3_p_0(
  MR_ArrayPtr CSSOwns_4,
  MR_Word CSSPtr_5,
  MR_Word * CSSOwn_6)
{
  {
    MR_bool succeeded;
    MR_Integer CSSI_7 = (MR_Integer) (CSSPtr_5);
    MR_Word TypeCtorInfo_11_11;

    succeeded = (CSSI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (CSSOwns_4), CSSI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_CSSOwn_6;

      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (CSSOwns_4), CSSI_7, &conv0_CSSOwn_6);
      *CSSOwn_6 = ((MR_Word) (conv0_CSSOwn_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_css_own\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_ps_desc_3_p_0(
  MR_ArrayPtr PSDescs_4,
  MR_Word PSPtr_5,
  MR_Word * PSDesc_6)
{
  {
    MR_bool succeeded;
    MR_Integer PSI_7 = (MR_Integer) (PSPtr_5);
    MR_Word TypeCtorInfo_11_11;

    succeeded = (PSI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (PSDescs_4), PSI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_PSDesc_6;

      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (PSDescs_4), PSI_7, &conv0_PSDesc_6);
      *PSDesc_6 = ((MR_Word) (conv0_PSDesc_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_ps_desc\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_ps_own_3_p_0(
  MR_ArrayPtr PSOwns_4,
  MR_Word PSPtr_5,
  MR_Word * PSOwn_6)
{
  {
    MR_bool succeeded;
    MR_Integer PSI_7 = (MR_Integer) (PSPtr_5);
    MR_Word TypeCtorInfo_11_11;

    succeeded = (PSI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (PSOwns_4), PSI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_PSOwn_6;

      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (PSOwns_4), PSI_7, &conv0_PSOwn_6);
      *PSOwn_6 = ((MR_Word) (conv0_PSOwn_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_ps_own\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_csd_desc_3_p_0(
  MR_ArrayPtr CSDDescs_4,
  MR_Word CSDPtr_5,
  MR_Word * CSDDesc_6)
{
  {
    MR_bool succeeded;
    MR_Integer CSDI_7 = (MR_Integer) (CSDPtr_5);
    MR_Word TypeCtorInfo_11_11;

    succeeded = (CSDI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (CSDDescs_4), CSDI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_CSDDesc_6;

      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (CSDDescs_4), CSDI_7, &conv0_CSDDesc_6);
      *CSDDesc_6 = ((MR_Word) (conv0_CSDDesc_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_csd_desc\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_csd_own_3_p_0(
  MR_ArrayPtr CSDOwns_4,
  MR_Word CSDPtr_5,
  MR_Word * CSDOwn_6)
{
  {
    MR_bool succeeded;
    MR_Integer CSDI_7 = (MR_Integer) (CSDPtr_5);
    MR_Word TypeCtorInfo_11_11;

    succeeded = (CSDI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (CSDOwns_4), CSDI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_CSDOwn_6;

      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (CSDOwns_4), CSDI_7, &conv0_CSDOwn_6);
      *CSDOwn_6 = ((MR_Word) (conv0_CSDOwn_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_csd_own\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_pd_desc_3_p_0(
  MR_ArrayPtr PDDescs_4,
  MR_Word PDPtr_5,
  MR_Word * PDDesc_6)
{
  {
    MR_bool succeeded;
    MR_Integer PDI_7 = (MR_Integer) (PDPtr_5);
    MR_Word TypeCtorInfo_11_11;

    succeeded = (PDI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (PDDescs_4), PDI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_PDDesc_6;

      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (PDDescs_4), PDI_7, &conv0_PDDesc_6);
      *PDDesc_6 = ((MR_Word) (conv0_PDDesc_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_pd_desc\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_pd_own_3_p_0(
  MR_ArrayPtr PDOwns_4,
  MR_Word PDPtr_5,
  MR_Word * PDOwn_6)
{
  {
    MR_bool succeeded;
    MR_Integer PDI_7 = (MR_Integer) (PDPtr_5);
    MR_Word TypeCtorInfo_11_11;

    succeeded = (PDI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (PDOwns_4), PDI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_PDOwn_6;

      mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (PDOwns_4), PDI_7, &conv0_PDOwn_6);
      *PDOwn_6 = ((MR_Word) (conv0_PDOwn_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_pd_own\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_call_site_calls_3_p_0(
  MR_ArrayPtr CallSiteCalls_4,
  MR_Word CSSPtr_5,
  MR_Word * Calls_6)
{
  {
    MR_bool succeeded;
    MR_Integer CSSI_7 = (MR_Integer) (CSSPtr_5);
    MR_Word TypeInfo_11_11;

    succeeded = (CSSI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&profile_scalar_common_2[0]);
      succeeded = mercury__array__in_bounds_2_p_0(TypeInfo_11_11, (MR_ArrayPtr) (CallSiteCalls_4), CSSI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_Calls_6;

      mercury__array__lookup_3_p_0((MR_Word) (&profile_scalar_common_2[0]), (MR_ArrayPtr) (CallSiteCalls_4), CSSI_7, &conv0_Calls_6);
      *Calls_6 = ((MR_Word) (conv0_Calls_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_call_site_calls\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_call_site_static_map_3_p_0(
  MR_ArrayPtr CallSiteStaticMap_4,
  MR_Word CSDPtr_5,
  MR_Word * CSSPtr_6)
{
  {
    MR_bool succeeded;
    MR_Integer CSDI_7 = (MR_Integer) (CSDPtr_5);
    MR_Word TypeCtorInfo_11_11;

    succeeded = (CSDI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (CallSiteStaticMap_4), CSDI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_CSSPtr_6;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_ArrayPtr) (CallSiteStaticMap_4), CSDI_7, &conv0_CSSPtr_6);
      *CSSPtr_6 = ((MR_Word) (conv0_CSSPtr_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_call_site_static_map\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_proc_callers_3_p_0(
  MR_ArrayPtr ProcCallers_4,
  MR_Word PSPtr_5,
  MR_Word * Callers_6)
{
  {
    MR_bool succeeded;
    MR_Integer PSI_7 = (MR_Integer) (PSPtr_5);
    MR_Word TypeInfo_11_11;

    succeeded = (PSI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&profile_scalar_common_1[2]);
      succeeded = mercury__array__in_bounds_2_p_0(TypeInfo_11_11, (MR_ArrayPtr) (ProcCallers_4), PSI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_Callers_6;

      mercury__array__lookup_3_p_0((MR_Word) (&profile_scalar_common_1[2]), (MR_ArrayPtr) (ProcCallers_4), PSI_7, &conv0_Callers_6);
      *Callers_6 = ((MR_Word) (conv0_Callers_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_proc_callers\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_clique_maybe_child_3_p_0(
  MR_ArrayPtr CliqueMaybeChild_4,
  MR_Word CSDPtr_5,
  MR_Word * MaybeCliquePtr_6)
{
  {
    MR_bool succeeded;
    MR_Integer CSDI_7 = (MR_Integer) (CSDPtr_5);
    MR_Word TypeInfo_11_11;

    succeeded = (CSDI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&profile_scalar_common_1[1]);
      succeeded = mercury__array__in_bounds_2_p_0(TypeInfo_11_11, (MR_ArrayPtr) (CliqueMaybeChild_4), CSDI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_MaybeCliquePtr_6;

      mercury__array__lookup_3_p_0((MR_Word) (&profile_scalar_common_1[1]), (MR_ArrayPtr) (CliqueMaybeChild_4), CSDI_7, &conv0_MaybeCliquePtr_6);
      *MaybeCliquePtr_6 = ((MR_Word) (conv0_MaybeCliquePtr_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_clique_maybe_child\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_clique_parents_3_p_0(
  MR_ArrayPtr CliqueParents_4,
  MR_Word CliquePtr_5,
  MR_Word * CSDPtr_6)
{
  {
    MR_bool succeeded;
    MR_Integer CI_7 = (MR_Integer) (CliquePtr_5);

    succeeded = mercury__array__in_bounds_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (CliqueParents_4), CI_7);
    if (succeeded)
    {
      MR_Box conv0_CSDPtr_6;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (CliqueParents_4), CI_7, &conv0_CSDPtr_6);
      *CSDPtr_6 = ((MR_Word) (conv0_CSDPtr_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_clique_parents\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_clique_members_3_p_0(
  MR_ArrayPtr CliqueMembers_4,
  MR_Word CliquePtr_5,
  MR_Word * PDPtrs_6)
{
  {
    MR_bool succeeded;
    MR_Integer CI_7 = (MR_Integer) (CliquePtr_5);

    succeeded = mercury__array__in_bounds_2_p_0((MR_Word) (&profile_scalar_common_1[0]), (MR_ArrayPtr) (CliqueMembers_4), CI_7);
    if (succeeded)
    {
      MR_Box conv0_PDPtrs_6;

      mercury__array__lookup_3_p_0((MR_Word) (&profile_scalar_common_1[0]), (MR_ArrayPtr) (CliqueMembers_4), CI_7, &conv0_PDPtrs_6);
      *PDPtrs_6 = ((MR_Word) (conv0_PDPtrs_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_clique_members\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_clique_index_3_p_0(
  MR_ArrayPtr CliqueIndex_4,
  MR_Word PDPtr_5,
  MR_Word * CliquePtr_6)
{
  {
    MR_bool succeeded;
    MR_Integer PDI_7 = (MR_Integer) (PDPtr_5);
    MR_Word TypeCtorInfo_11_11;

    succeeded = (PDI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (CliqueIndex_4), PDI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_CliquePtr_6;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), (MR_ArrayPtr) (CliqueIndex_4), PDI_7, &conv0_CliquePtr_6);
      *CliquePtr_6 = ((MR_Word) (conv0_CliquePtr_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_clique_index\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_proc_statics_3_p_0(
  MR_ArrayPtr ProcStatics_4,
  MR_Word PSPtr_5,
  MR_Word * PS_6)
{
  {
    MR_bool succeeded;
    MR_Integer PSI_7 = (MR_Integer) (PSPtr_5);
    MR_Word TypeCtorInfo_11_11;

    succeeded = (PSI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&profile__profile__type_ctor_info_proc_static_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (ProcStatics_4), PSI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_PS_6;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), (MR_ArrayPtr) (ProcStatics_4), PSI_7, &conv0_PS_6);
      *PS_6 = ((MR_Word) (conv0_PS_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_proc_statics\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_proc_dynamics_3_p_0(
  MR_ArrayPtr ProcDynamics_4,
  MR_Word PDPtr_5,
  MR_Word * PD_6)
{
  {
    MR_bool succeeded;
    MR_Integer PDI_7 = (MR_Integer) (PDPtr_5);
    MR_Word TypeCtorInfo_11_11;

    succeeded = (PDI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (ProcDynamics_4), PDI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_PD_6;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_ArrayPtr) (ProcDynamics_4), PDI_7, &conv0_PD_6);
      *PD_6 = ((MR_Word) (conv0_PD_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_proc_dynamics\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_call_site_statics_3_p_0(
  MR_ArrayPtr CallSiteStatics_4,
  MR_Word CSSPtr_5,
  MR_Word * CSS_6)
{
  {
    MR_bool succeeded;
    MR_Integer CSSI_7 = (MR_Integer) (CSSPtr_5);
    MR_Word TypeCtorInfo_11_11;

    succeeded = (CSSI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&profile__profile__type_ctor_info_call_site_static_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (CallSiteStatics_4), CSSI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_CSS_6;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_0), (MR_ArrayPtr) (CallSiteStatics_4), CSSI_7, &conv0_CSS_6);
      *CSS_6 = ((MR_Word) (conv0_CSS_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_call_site_statics\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

void MR_CALL 
profile__lookup_call_site_dynamics_3_p_0(
  MR_ArrayPtr CallSiteDynamics_4,
  MR_Word CSDPtr_5,
  MR_Word * CSD_6)
{
  {
    MR_bool succeeded;
    MR_Integer CSDI_7 = (MR_Integer) (CSDPtr_5);
    MR_Word TypeCtorInfo_11_11;

    succeeded = (CSDI_7 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_11_11 = (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_11_11, (MR_ArrayPtr) (CallSiteDynamics_4), CSDI_7);
    }
    if (succeeded)
    {
      MR_Box conv0_CSD_6;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_ArrayPtr) (CallSiteDynamics_4), CSDI_7, &conv0_CSD_6);
      *CSD_6 = ((MR_Word) (conv0_CSD_6));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140profile.lookup_call_site_dynamics\'/3", (MR_String) "bounds error");
        return;
      }
  }
}

MR_bool MR_CALL 
profile__valid_call_site_static_ptr_raw_2_p_0(
  MR_ArrayPtr CallSiteStatics_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_6_6;
    MR_Integer CSSI_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CSSI_4 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_6_6 = (MR_Word) (&profile__profile__type_ctor_info_call_site_static_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_6_6, (MR_ArrayPtr) (CallSiteStatics_3), CSSI_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_call_site_dynamic_ptr_raw_2_p_0(
  MR_ArrayPtr CallSiteDynamics_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_6_6;
    MR_Integer CSDI_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CSDI_4 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_6_6 = (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_6_6, (MR_ArrayPtr) (CallSiteDynamics_3), CSDI_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_proc_static_ptr_raw_2_p_0(
  MR_ArrayPtr ProcStatics_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_6_6;
    MR_Integer PSI_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (PSI_4 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_6_6 = (MR_Word) (&profile__profile__type_ctor_info_proc_static_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_6_6, (MR_ArrayPtr) (ProcStatics_3), PSI_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_proc_dynamic_ptr_raw_2_p_0(
  MR_ArrayPtr ProcDynamics_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_6_6;
    MR_Integer PDI_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (PDI_4 > (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_6_6 = (MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_6_6, (MR_ArrayPtr) (ProcDynamics_3), PDI_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_call_site_static_ptr_2_p_0(
  MR_Word Deep_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_36_36;
    MR_Integer CSSI_4 = (MR_Integer) (HeadVar__2_2);
    MR_ArrayPtr Var_6;

    succeeded = (CSSI_4 > (MR_Integer) 0);
    if (succeeded)
    {
      Var_6 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_3, (MR_Integer) 7))));
      TypeCtorInfo_36_36 = (MR_Word) (&profile__profile__type_ctor_info_call_site_static_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_36_36, (MR_ArrayPtr) (Var_6), CSSI_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_call_site_dynamic_ptr_2_p_0(
  MR_Word Deep_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_36_36;
    MR_Integer CSDI_4 = (MR_Integer) (HeadVar__2_2);
    MR_ArrayPtr Var_6;

    succeeded = (CSDI_4 > (MR_Integer) 0);
    if (succeeded)
    {
      Var_6 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_3, (MR_Integer) 5))));
      TypeCtorInfo_36_36 = (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_36_36, (MR_ArrayPtr) (Var_6), CSDI_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_proc_static_ptr_2_p_0(
  MR_Word Deep_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_36_36;
    MR_Integer PSI_4 = (MR_Integer) (HeadVar__2_2);
    MR_ArrayPtr Var_6;

    succeeded = (PSI_4 > (MR_Integer) 0);
    if (succeeded)
    {
      Var_6 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_3, (MR_Integer) 8))));
      TypeCtorInfo_36_36 = (MR_Word) (&profile__profile__type_ctor_info_proc_static_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_36_36, (MR_ArrayPtr) (Var_6), PSI_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_proc_dynamic_ptr_2_p_0(
  MR_Word Deep_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_36_36;
    MR_Integer PDI_4 = (MR_Integer) (HeadVar__2_2);
    MR_ArrayPtr Var_6;

    succeeded = (PDI_4 > (MR_Integer) 0);
    if (succeeded)
    {
      Var_6 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_3, (MR_Integer) 6))));
      TypeCtorInfo_36_36 = (MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0);
      succeeded = mercury__array__in_bounds_2_p_0(TypeCtorInfo_36_36, (MR_ArrayPtr) (Var_6), PDI_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
profile__valid_clique_ptr_2_p_0(
  MR_Word Deep_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_36_36;
    MR_Integer CliqueNum_4 = (MR_Integer) (HeadVar__2_2);
    MR_ArrayPtr Var_6;

    succeeded = (CliqueNum_4 > (MR_Integer) 0);
    if (succeeded)
    {
      Var_6 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_3, (MR_Integer) 10))));
      TypeInfo_36_36 = (MR_Word) (&profile_scalar_common_1[0]);
      succeeded = mercury__array__in_bounds_2_p_0(TypeInfo_36_36, (MR_ArrayPtr) (Var_6), CliqueNum_4);
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
profile__dummy_call_site_dynamic_ptr_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) -1)));
}

MR_Word MR_CALL 
profile__dummy_call_site_static_ptr_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) -1)));
}

MR_Word MR_CALL 
profile__dummy_proc_dynamic_ptr_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) -1)));
}

MR_Word MR_CALL 
profile__dummy_proc_static_ptr_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) -1)));
}

MR_Word MR_CALL 
profile__dummy_clique_ptr_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) -1)));
}

MR_Word MR_CALL 
profile__main_parent_proc_id_0_f_0(void)
{
  return (MR_Word) (&profile_scalar_common_3[1]);
}

MR_Word MR_CALL 
profile__dummy_proc_id_0_f_0(void)
{
  return (MR_Word) (&profile_scalar_common_3[0]);
}

MR_String MR_CALL 
profile__decl_module_1_f_0(
  MR_Word ProcId_3)
{
  {
    MR_String DeclModule_4;

    if (((MR_tag((MR_Word) ProcId_3)) == (MR_Integer) 0))
      DeclModule_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcId_3, (MR_Integer) 1))));
    else
      DeclModule_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), ProcId_3, (MR_Integer) 1))));
    return DeclModule_4;
  }
}

MR_bool MR_CALL 
profile__is_call_site_kind_2_p_0(
  MR_Integer Int_1,
  MR_Word * CallSite_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL profile__is_call_site_kind_2_p_0

	MR_Integer Int;
	MR_Word CallSite;
	MR_bool SUCCESS_INDICATOR;

	Int = Int_1 ;
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
	 *CallSite_2  = CallSite;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_array_slot_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____call_site_array_slot_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_array_slot_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____call_site_array_slot_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_callees_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____call_site_callees_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_callees_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____call_site_callees_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_caller_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____call_site_caller_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_caller_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____call_site_caller_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____call_site_dynamic_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_dynamic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____call_site_dynamic_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_dynamic_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____call_site_dynamic_ptr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_dynamic_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____call_site_dynamic_ptr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_dynamics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____call_site_dynamics_0_0(((MR_ArrayPtr) (wrapper_arg_1)), ((MR_ArrayPtr) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_dynamics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____call_site_dynamics_0_0(&conv0_HeadVar__1_1, ((MR_ArrayPtr) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____call_site_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____call_site_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____call_site_kind_and_callee_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_kind_and_callee_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____call_site_kind_and_callee_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_callee_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____call_site_kind_and_callee_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_kind_and_callee_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____call_site_kind_and_callee_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_kind_and_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____call_site_kind_and_info_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_kind_and_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____call_site_kind_and_info_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_static_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____call_site_static_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_static_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____call_site_static_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_static_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____call_site_static_map_0_0(((MR_ArrayPtr) (wrapper_arg_1)), ((MR_ArrayPtr) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_static_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____call_site_static_map_0_0(&conv0_HeadVar__1_1, ((MR_ArrayPtr) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_static_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____call_site_static_ptr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_static_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____call_site_static_ptr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____call_site_statics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____call_site_statics_0_0(((MR_ArrayPtr) (wrapper_arg_1)), ((MR_ArrayPtr) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____call_site_statics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____call_site_statics_0_0(&conv0_HeadVar__1_1, ((MR_ArrayPtr) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____canonical_flag_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____canonical_flag_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____canonical_flag_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____canonical_flag_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____clique_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____clique_ptr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____clique_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____clique_ptr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____compensation_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____compensation_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____compensation_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____compensation_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____coverage_data_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____coverage_data_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____coverage_data_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____coverage_data_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____deep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____deep_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____deep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____deep_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____deep_compression_flag_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____deep_compression_flag_0_0();
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____deep_compression_flag_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____deep_compression_flag_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____deep_flags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____deep_flags_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____deep_flags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____deep_flags_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____initial_deep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____initial_deep_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____initial_deep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____initial_deep_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____is_zeroed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____is_zeroed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____is_zeroed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____is_zeroed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____module_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____module_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____module_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____module_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____proc_dynamic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____proc_dynamic_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____proc_dynamic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____proc_dynamic_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____proc_dynamic_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____proc_dynamic_ptr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____proc_dynamic_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____proc_dynamic_ptr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____proc_dynamics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____proc_dynamics_0_0(((MR_ArrayPtr) (wrapper_arg_1)), ((MR_ArrayPtr) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____proc_dynamics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____proc_dynamics_0_0(&conv0_HeadVar__1_1, ((MR_ArrayPtr) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____proc_static_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____proc_static_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____proc_static_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____proc_static_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____proc_static_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____proc_static_ptr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____proc_static_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____proc_static_ptr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____proc_statics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____proc_statics_0_0(((MR_ArrayPtr) (wrapper_arg_1)), ((MR_ArrayPtr) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____proc_statics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____proc_statics_0_0(&conv0_HeadVar__1_1, ((MR_ArrayPtr) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
profile____Unify____profile_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = profile____Unify____profile_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
profile____Compare____profile_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    profile____Compare____profile_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module profile.
