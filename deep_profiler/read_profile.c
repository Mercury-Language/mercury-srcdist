/*
** Automatically generated from `read_profile.m'
** by the Mercury compiler,
** version rotd-2026-08-27
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


// :- module read_profile.
// :- implementation.

/*
INIT mercury__read_profile__init
ENDINIT
*/

#include "read_profile.mih"


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
#include "io_combinator.mih"
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
#include "profile.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 read_profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__profile__pti_call_site_kind_and_callee_1__plain_profile__type_ctor_info_proc_static_ptr_0;

static const MR_VA_TypeInfo_Struct2 read_profile____vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 read_profile__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_cp_type_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__array__pti_array_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_builtin__type_ctor_info_string_0;

static const MR_VA_TypeInfo_Struct6 read_profile____vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_VA_TypeInfo_Struct3 read_profile____vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 read_profile__array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 read_profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 read_profile__maybe__ti_maybe_error_2profile__type_ctor_info_call_site_array_slot_0builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct3 read_profile____vpti_pred_3__plain_maybe__ti_maybe_error_2profile__type_ctor_info_call_site_array_slot_0builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_TypeInfo_Struct1 read_profile__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_list__ti_list_1profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__maybe__pti_maybe_1__plain_array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__list__pti_list_1__plain_profile__type_ctor_info_call_site_array_slot_0;

static const MR_VA_TypeInfo_Struct2 read_profile____vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__type_ctor_info_initial_deep_0__plain_builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_acceptable_version_0_0;

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_acceptable_version_0_1;

static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_ordinal_ordered_acceptable_version_0[2];

static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_name_ordered_acceptable_version_0[2];

static const MR_Integer read_profile__read_profile__functor_number_map_acceptable_version_0[2];

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_error2_2_0[2];

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_error2_2_0;

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_error2_2_1[1];

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_error2_2_1;

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_error2_2_0[1];

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_error2_2_1[1];

static const MR_DuPtagLayout read_profile__read_profile__du_ptag_ordered_maybe_error2_2[2];

static const MR_DuFunctorDescPtr read_profile__read_profile__du_name_ordered_maybe_error2_2[2];

static const MR_Integer read_profile__read_profile__functor_number_map_maybe_error2_2[2];

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_0[1];

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_0;

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_1[1];

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_1;

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_2[1];

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_2;

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_0[1];

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_1[1];

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_2[1];

static const MR_DuPtagLayout read_profile__read_profile__du_ptag_ordered_maybe_init_deep_complete_0[3];

static const MR_DuFunctorDescPtr read_profile__read_profile__du_name_ordered_maybe_init_deep_complete_0[3];

static const MR_Integer read_profile__read_profile__functor_number_map_maybe_init_deep_complete_0[3];

static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_0;

static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_1;

static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_2;

static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_3;

static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_4;

static const MR_ForeignEnumFunctorDescPtr read_profile__read_profile__foreign_enum_ordinal_ordered_next_deep_item_0[5];

static const MR_ForeignEnumFunctorDescPtr read_profile__read_profile__foreign_enum_name_ordered_next_deep_item_0[5];

static const MR_Integer read_profile__read_profile__functor_number_map_next_deep_item_0[5];

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_0;

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_1;

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_2;

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_3;

static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_ordinal_ordered_ptr_kind_0[4];

static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_name_ordered_ptr_kind_0[4];

static const MR_Integer read_profile__read_profile__functor_number_map_ptr_kind_0[4];

static MR_bool MR_CALL 
read_profile__IntroducedFrom__pred__read_n_byte_string__1332__1_2_p_0(
  MR_Integer LambdaHeadVar__1_23,
  MR_Char * LambdaHeadVar__2_24);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_3_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Word LambdaHeadVar__2_54,
  MR_Word * LambdaHeadVar__3_55);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__899__1_5_p_0(
  MR_Integer N_19,
  MR_Word HeadVar__2_52,
  MR_Word * HeadVar__3_93);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_91_49_93_95_48_6_p_0(
  MR_Integer N_7,
  MR_Word ItemReader_8,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__887__1_4_p_0(
  MR_Integer LambdaHeadVar__1_42,
  MR_Integer LambdaHeadVar__2_43,
  MR_Integer LambdaHeadVar__3_44,
  MR_Word * LambdaHeadVar__4_45);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static__711__1_3_p_0(
  MR_String LambdaHeadVar__1_19,
  MR_Word LambdaHeadVar__2_20,
  MR_Word * LambdaHeadVar__3_21);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__695__1_3_p_0(
  MR_Word LambdaHeadVar__1_17,
  MR_Integer LambdaHeadVar__2_18,
  MR_Word * LambdaHeadVar__3_19);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_user_defined__670__1_7_p_0(
  MR_Word PredOrFunc_7,
  MR_String LambdaHeadVar__1_25,
  MR_String LambdaHeadVar__2_26,
  MR_String LambdaHeadVar__3_27,
  MR_Integer LambdaHeadVar__4_28,
  MR_Integer LambdaHeadVar__5_29,
  MR_Word * LambdaHeadVar__6_30);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__652__1_7_p_0(
  MR_String LambdaHeadVar__1_25,
  MR_String LambdaHeadVar__2_26,
  MR_String LambdaHeadVar__3_27,
  MR_String LambdaHeadVar__4_28,
  MR_Integer LambdaHeadVar__5_29,
  MR_Integer LambdaHeadVar__6_30,
  MR_Word * LambdaHeadVar__7_31);

static MR_ArrayPtr MR_CALL 
read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__581__1_1_f_0(
  MR_Word HeadVar__1_75);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_static__473__1_7_p_0(
  MR_Integer LambdaHeadVar__1_54,
  MR_Word LambdaHeadVar__2_55,
  MR_String LambdaHeadVar__3_56,
  MR_Integer LambdaHeadVar__4_57,
  MR_Integer LambdaHeadVar__5_58,
  MR_Integer LambdaHeadVar__6_59,
  MR_Word * LambdaHeadVar__7_60);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_call_site_static__434__1_6_p_0(
  MR_Integer LambdaHeadVar__1_54,
  MR_Word LambdaHeadVar__2_55,
  MR_String LambdaHeadVar__3_56,
  MR_Integer LambdaHeadVar__4_57,
  MR_String LambdaHeadVar__5_58,
  MR_Word * LambdaHeadVar__6_59);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_call_site_static__414__1_5_p_0(
  MR_Integer LambdaHeadVar__1_39,
  MR_Word LambdaHeadVar__2_40,
  MR_Integer LambdaHeadVar__3_41,
  MR_String LambdaHeadVar__4_42,
  MR_Word * LambdaHeadVar__5_43);

static void MR_CALL 
read_profile____Compare____ptr_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
read_profile____Unify____ptr_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
read_profile____Compare____next_deep_item_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
read_profile____Unify____next_deep_item_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
read_profile____Compare____maybe_init_deep_complete_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
read_profile____Unify____maybe_init_deep_complete_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
read_profile____Compare____maybe_error2_2_0(
  MR_Word TypeInfo_for_T1_13,
  MR_Word TypeInfo_for_T2_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
read_profile____Unify____maybe_error2_2_0(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
read_profile____Compare____acceptable_version_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
read_profile____Unify____acceptable_version_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
read_profile__make_cssptr_1_f_0(
  MR_Integer CSSI_3);

static MR_Word MR_CALL 
read_profile__make_csdptr_1_f_0(
  MR_Integer CSDI_3);

static void MR_CALL 
read_profile__read_fixed_size_int_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeInt_6);

static void MR_CALL 
read_profile__read_fixed_size_int_acc_7_p_0(
  MR_Word InputStream_8,
  MR_Integer BytesLeft_9,
  MR_Integer Num0_10,
  MR_Integer ShiftBy_11,
  MR_Word * MaybeInt_12);

static void MR_CALL 
read_profile__read_num_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeNum_6);

static void MR_CALL 
read_profile__num_to_cp_type_2_p_0(
  MR_Integer Int_1,
  MR_Word * CPType_2);

static void MR_CALL 
read_profile__read_cp_type_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeCPType_6);

static void MR_CALL 
read_profile__read_ptr_5_p_0(
  MR_Word InputStream_6,
  MR_Word _Kind_7,
  MR_Word * MaybePtr_8);

static void MR_CALL 
read_profile__read_call_site_kind_and_callee_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeKindAndCallee_6);

static MR_bool MR_CALL 
read_profile__read_string_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
read_profile__read_string_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeStr_6);

static void MR_CALL 
read_profile__read_n_bytes_acc_6_p_0(
  MR_Word InputStream_7,
  MR_Integer N_8,
  MR_Word RevBytes0_9,
  MR_Word * MaybeNBytes_10);

static MR_Box MR_CALL 
read_profile__read_call_site_slot_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
read_profile__read_call_site_slot_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
read_profile__read_call_site_slot_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
read_profile__read_call_site_slot_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
read_profile__read_call_site_slot_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeSlot_6);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_50_93_95_48_5_p_0(
  MR_Word InputStream_6,
  MR_Word * MaybePtr_8);

static void MR_CALL 
read_profile__read_multi_call_site_csdis_2_5_p_0(
  MR_Word InputStream_6,
  MR_Word CSDIs0_7,
  MR_Word * MaybeCSDIs_8);

static MR_bool MR_CALL 
read_profile__non_right_bracket_1_p_0(
  MR_Char C_2);

static void MR_CALL 
read_profile__read_coverage_point_static_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_coverage_point_static_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_coverage_point_static_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_coverage_point_static_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeCP_6);

static void MR_CALL 
read_profile__read_proc_id_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
read_profile__read_proc_id_4_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_4_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
read_profile__read_proc_id_4_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
read_profile__read_proc_id_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeProcId_6);

static void MR_CALL 
read_profile__read_deep_byte_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeByte_6);

static void MR_CALL 
read_profile__maybe_read_pd_coverage_points_5_p_0(
  MR_Word InputStream_6,
  MR_Word ProfileStats_7,
  MR_Word * MaybeCoveragePoints_8);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_56_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_24,
  MR_Integer N_7,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10);

static void MR_CALL 
read_profile__maybe_init_deep_12_p_0(
  MR_String ProgName_13,
  MR_Integer FlagsInt_14,
  MR_Integer MaxCSD_15,
  MR_Integer MaxCSS_16,
  MR_Integer MaxPD_17,
  MR_Integer MaxPS_18,
  MR_Integer TicksPerSec_19,
  MR_Integer InstrumentQuanta_20,
  MR_Integer UserQuanta_21,
  MR_Integer NumCallSeqs_22,
  MR_Integer RootPDI_23,
  MR_Word * MaybeInitDeep_24);

static void MR_CALL 
read_profile__maybe_deep_flags_2_p_0(
  MR_Integer FlagsInt_3,
  MR_Word * MaybeFlags_4);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box wrapper_arg_11,
  MR_Box * wrapper_arg_12);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_line_acc_6_p_0(
  MR_Word InputStream_7,
  MR_Integer Limit_8,
  MR_Word STATE_VARIABLE_RevChars_0_19,
  MR_Word * MaybeLine_10);

static void MR_CALL 
read_profile__read_nodes_outer_loop_6_p_0(
  MR_Word InputStream_7,
  MR_Word Version_8,
  MR_Word InitDeep0_9,
  MR_Word * MaybeInitDeep_10);

static void MR_CALL 
read_profile__read_nodes_inner_loop_7_p_0(
  MR_Word InputStream_8,
  MR_Word Version_9,
  MR_Integer STATE_VARIABLE_NumLeft_0_40,
  MR_Word STATE_VARIABLE_InitDeep_0_41,
  MR_Word * MaybeInitDeep_12);

static MR_bool MR_CALL 
read_profile__is_next_item_token_2_p_0(
  MR_Integer Int_1,
  MR_Word * NextItem_2);

static void MR_CALL 
read_profile__deep_insert_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Integer Ind_5,
  MR_Box Item_6,
  MR_ArrayPtr A0_7,
  MR_ArrayPtr * A_8);

static void MR_CALL 
read_profile__read_call_site_dynamic_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeCSD_6);

static void MR_CALL 
read_profile__read_profile_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeProfile_6);

static void MR_CALL 
read_profile__maybe_read_num_handle_error_8_p_0(
  MR_Word InputStream_9,
  MR_Integer MaskWord_10,
  MR_Integer MaskValue_11,
  MR_Integer * Num_12,
  MR_Word STATE_VARIABLE_MaybeError_0_17,
  MR_Word * STATE_VARIABLE_MaybeError_18);

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0(
  MR_Word InputStream_6,
  MR_Word ProfileStats_7,
  MR_Word * MaybePD_8);

static MR_Box MR_CALL 
read_profile__read_proc_static_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
read_profile__read_proc_static_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
read_profile__read_proc_static_5_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_5_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_5_p_0(
  MR_Word InputStream_6,
  MR_Word ProfileStats_7,
  MR_Word * MaybePS_8);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_53_95_95_91_50_44_32_52_93_95_48_6_p_0(
  MR_Word Var_24,
  MR_Integer N_7,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10);

static void MR_CALL 
read_profile__create_refined_proc_ids_3_p_0(
  MR_Word ProcLabel_4,
  MR_String * UnQualName_5,
  MR_String * QualName_6);

static MR_bool MR_CALL 
read_profile__glue_lambda_name_3_p_0(
  MR_Word Segments_4,
  MR_Word * PredName_5,
  MR_Word * LineNumber_6);

static void MR_CALL 
read_profile__split_lambda_name_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
read_profile__fix_type_spec_suffix_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
read_profile__fix_type_spec_suffix_3_p_0(
  MR_Word Chars0_4,
  MR_Word * Chars_5,
  MR_String * SpecInfoStr_6);

static MR_String MR_CALL 
read_profile__plus_one_for_function_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
read_profile__raw_proc_id_to_string_1_f_0(
  MR_Word ProcLabel_3);

static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
read_profile__maybe_read_ps_coverage_points_5_p_0(
  MR_Word InputStream_6,
  MR_Word ProfileStats_7,
  MR_Word * MaybeCoveragePoints_8);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_24,
  MR_Integer N_7,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_24,
  MR_Integer N_7,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10);

static void MR_CALL 
read_profile__read_num_acc_5_p_0(
  MR_Word InputStream_6,
  MR_Integer Num0_7,
  MR_Word * MaybeNum_8);

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_9(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_5_p_0(
  MR_Word InputStream_6,
  MR_Word Version_7,
  MR_Word * MaybeCSS_8);

static MR_bool MR_CALL 
read_profile____Unify____acceptable_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
read_profile____Compare____acceptable_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
read_profile____Unify____maybe_error2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
read_profile____Compare____maybe_error2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
read_profile____Unify____maybe_init_deep_complete_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
read_profile____Compare____maybe_init_deep_complete_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
read_profile____Unify____next_deep_item_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
read_profile____Compare____next_deep_item_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
read_profile____Unify____ptr_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
read_profile____Compare____ptr_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box read_profile_scalar_common_1[7][2];

static /* final */ const MR_Box read_profile_scalar_common_2[5][4];

static /* final */ const MR_Box read_profile_scalar_common_3[5][8];

static /* final */ const MR_Box read_profile_scalar_common_4[21][3];

static /* final */ const MR_Box read_profile_scalar_common_5[5][5];

static /* final */ const MR_Box read_profile_scalar_common_6[12][1];

static /* final */ const MR_Box read_profile_scalar_common_7[8][7];

static /* final */ const MR_Box read_profile_scalar_common_8[1][9];

static /* final */ const MR_Box read_profile_scalar_common_9[4][6];

static /* final */ const MR_Box read_profile_scalar_common_10[3][10];

static /* final */ const MR_Box read_profile_scalar_common_11[1][15];




static /* final */ const MR_Box read_profile_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_kind_and_callee_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&read_profile_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) -1)))),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_2[5][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&read_profile_scalar_common_1[3])),
    ((MR_Box) (&read_profile_scalar_common_1[4]))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&read_profile_scalar_common_10[2])),
    ((MR_Box) (read_profile__read_proc_id_4_p_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   4 */
  {
    ((MR_Box) (&read_profile_scalar_common_10[2])),
    ((MR_Box) (read_profile__read_proc_id_4_p_0_9)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_3[5][8] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&read_profile__read_profile__type_ctor_info_ptr_kind_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__profile__pti_call_site_kind_and_callee_1__plain_profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_profile_stats_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile____vpti_pred_3__plain_maybe__ti_maybe_error_2profile__type_ctor_info_call_site_array_slot_0builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_list__ti_list_1profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_4[21][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&read_profile_scalar_common_3[2])),
    ((MR_Box) (read_profile__read_call_site_static_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[0])),
    ((MR_Box) (read_profile__read_call_site_static_5_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&read_profile_scalar_common_9[0])),
    ((MR_Box) (read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&read_profile_scalar_common_9[1])),
    ((MR_Box) (read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[1])),
    ((MR_Box) (read_profile__maybe_read_ps_coverage_points_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[1])),
    ((MR_Box) (read_profile__maybe_read_ps_coverage_points_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[1])),
    ((MR_Box) (read_profile__maybe_read_ps_coverage_points_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&read_profile_scalar_common_2[2])),
    ((MR_Box) (read_profile__fix_type_spec_suffix_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&read_profile_scalar_common_10[0])),
    ((MR_Box) (read_profile__read_proc_static_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[2])),
    ((MR_Box) (read_profile__read_proc_static_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&read_profile_scalar_common_7[6])),
    ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&read_profile_scalar_common_9[2])),
    ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&read_profile_scalar_common_11[0])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&read_profile_scalar_common_10[1])),
    ((MR_Box) (read_profile__read_proc_id_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&read_profile_scalar_common_9[1])),
    ((MR_Box) (read_profile__read_coverage_point_static_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[3])),
    ((MR_Box) (read_profile__read_call_site_slot_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[3])),
    ((MR_Box) (read_profile__read_call_site_slot_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[3])),
    ((MR_Box) (read_profile__read_call_site_slot_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[3])),
    ((MR_Box) (read_profile__read_call_site_slot_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[4])),
    ((MR_Box) (read_profile__read_string_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_5[5][5] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&read_profile__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__array__pti_array_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_6[12][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "version number mismatch")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "not a deep profiling data file")) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   3 */
  { ((MR_Box) (&read_profile_scalar_common_1[5])) },
  /* row   4 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   5 */
  { ((MR_Box) ((MR_Unsigned) 12U)) },
  /* row   6 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   7 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row   8 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "unexpected end of file")) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "")) },
  /* row  11 */
  { ((MR_Box) ((MR_String) "string contained bad char")) },
};

static /* final */ const MR_Box read_profile_scalar_common_7[8][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_cp_type_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_8[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__profile__pti_call_site_kind_and_callee_1__plain_profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_9[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_1__plain_array__ti_array_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__list__pti_list_1__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) -1)))),
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) (MR_mkword(1, &read_profile_scalar_common_1[6]))),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_10[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_11[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_profile__type_ctor_info_initial_deep_0__plain_builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "read_profile.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 read_profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&read_profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__profile__pti_call_site_kind_and_callee_1__plain_profile__type_ctor_info_proc_static_ptr_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0) }
};

static const MR_VA_TypeInfo_Struct2 read_profile____vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_static_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&read_profile____vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 read_profile__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&read_profile__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_cp_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__array__pti_array_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_TypeInfo_Struct6 read_profile____vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 6,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&read_profile____vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_TypeInfo_Struct3 read_profile____vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&read_profile____vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 read_profile__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct1 read_profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&read_profile__array__ti_array_1builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&read_profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_array_slot_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 read_profile__maybe__ti_maybe_error_2profile__type_ctor_info_call_site_array_slot_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_array_slot_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 read_profile____vpti_pred_3__plain_maybe__ti_maybe_error_2profile__type_ctor_info_call_site_array_slot_0builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&read_profile__maybe__ti_maybe_error_2profile__type_ctor_info_call_site_array_slot_0builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_TypeInfo_Struct1 read_profile__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_array_slot_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_list__ti_list_1profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&read_profile__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__maybe__pti_maybe_1__plain_array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&read_profile__array__ti_array_1builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__list__pti_list_1__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_array_slot_0) }
};

static const MR_VA_TypeInfo_Struct2 read_profile____vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&read_profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&read_profile__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&read_profile____vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__type_ctor_info_initial_deep_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_initial_deep_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_acceptable_version_0_0 = {
  (MR_String) "av_8",
  INT32_C(0)
};

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_acceptable_version_0_1 = {
  (MR_String) "av_9",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_ordinal_ordered_acceptable_version_0[2] = {
  &read_profile__read_profile__enum_functor_desc_acceptable_version_0_0,
  &read_profile__read_profile__enum_functor_desc_acceptable_version_0_1
};

static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_name_ordered_acceptable_version_0[2] = {
  &read_profile__read_profile__enum_functor_desc_acceptable_version_0_0,
  &read_profile__read_profile__enum_functor_desc_acceptable_version_0_1
};

static const MR_Integer read_profile__read_profile__functor_number_map_acceptable_version_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct read_profile__read_profile__type_ctor_info_acceptable_version_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (read_profile____Unify____acceptable_version_0_0_10001)),
  ((MR_Box) (read_profile____Compare____acceptable_version_0_0_10001)),
  (MR_String) "read_profile",
  (MR_String) "acceptable_version",
  { read_profile__read_profile__enum_name_ordered_acceptable_version_0 },
  { read_profile__read_profile__enum_ordinal_ordered_acceptable_version_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  read_profile__read_profile__functor_number_map_acceptable_version_0,

};

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_error2_2_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_error2_2_0 = {
  (MR_String) "ok2",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  read_profile__read_profile__field_types_maybe_error2_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_error2_2_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_error2_2_1 = {
  (MR_String) "error2",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  read_profile__read_profile__field_types_maybe_error2_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_error2_2_0[1] = { &read_profile__read_profile__du_functor_desc_maybe_error2_2_0 };

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_error2_2_1[1] = { &read_profile__read_profile__du_functor_desc_maybe_error2_2_1 };

static const MR_DuPtagLayout read_profile__read_profile__du_ptag_ordered_maybe_error2_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    read_profile__read_profile__du_stag_ordered_maybe_error2_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    read_profile__read_profile__du_stag_ordered_maybe_error2_2_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr read_profile__read_profile__du_name_ordered_maybe_error2_2[2] = {
  &read_profile__read_profile__du_functor_desc_maybe_error2_2_1,
  &read_profile__read_profile__du_functor_desc_maybe_error2_2_0
};

static const MR_Integer read_profile__read_profile__functor_number_map_maybe_error2_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct read_profile__read_profile__type_ctor_info_maybe_error2_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (read_profile____Unify____maybe_error2_2_0_10001)),
  ((MR_Box) (read_profile____Compare____maybe_error2_2_0_10001)),
  (MR_String) "read_profile",
  (MR_String) "maybe_error2",
  { read_profile__read_profile__du_name_ordered_maybe_error2_2 },
  { read_profile__read_profile__du_ptag_ordered_maybe_error2_2 },
  (MR_Integer) 2,
  UINT16_C(12),
  read_profile__read_profile__functor_number_map_maybe_error2_2,

};

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_0[1] = { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_initial_deep_0) };

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_0 = {
  (MR_String) "init_deep_complete",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  read_profile__read_profile__field_types_maybe_init_deep_complete_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_1[1] = { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_initial_deep_0) };

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_1 = {
  (MR_String) "init_deep_incomplete",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  read_profile__read_profile__field_types_maybe_init_deep_complete_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_2 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  read_profile__read_profile__field_types_maybe_init_deep_complete_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_0[1] = { &read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_0 };

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_1[1] = { &read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_1 };

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_2[1] = { &read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_2 };

static const MR_DuPtagLayout read_profile__read_profile__du_ptag_ordered_maybe_init_deep_complete_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr read_profile__read_profile__du_name_ordered_maybe_init_deep_complete_0[3] = {
  &read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_2,
  &read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_0,
  &read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_1
};

static const MR_Integer read_profile__read_profile__functor_number_map_maybe_init_deep_complete_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct read_profile__read_profile__type_ctor_info_maybe_init_deep_complete_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (read_profile____Unify____maybe_init_deep_complete_0_0_10001)),
  ((MR_Box) (read_profile____Compare____maybe_init_deep_complete_0_0_10001)),
  (MR_String) "read_profile",
  (MR_String) "maybe_init_deep_complete",
  { read_profile__read_profile__du_name_ordered_maybe_init_deep_complete_0 },
  { read_profile__read_profile__du_ptag_ordered_maybe_init_deep_complete_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  read_profile__read_profile__functor_number_map_maybe_init_deep_complete_0,

};

static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_0 = {
  (MR_String) "deep_item_end",
  INT32_C(0),
  ((int) MR_deep_item_end)
};

static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_1 = {
  (MR_String) "deep_item_call_site_static",
  INT32_C(1),
  ((int) MR_deep_item_call_site_static)
};

static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_2 = {
  (MR_String) "deep_item_call_site_dynamic",
  INT32_C(2),
  ((int) MR_deep_item_call_site_dynamic)
};

static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_3 = {
  (MR_String) "deep_item_proc_static",
  INT32_C(3),
  ((int) MR_deep_item_proc_static)
};

static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_4 = {
  (MR_String) "deep_item_proc_dynamic",
  INT32_C(4),
  ((int) MR_deep_item_proc_dynamic)
};

static const MR_ForeignEnumFunctorDescPtr read_profile__read_profile__foreign_enum_ordinal_ordered_next_deep_item_0[5] = {
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_0,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_1,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_2,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_3,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_4
};

static const MR_ForeignEnumFunctorDescPtr read_profile__read_profile__foreign_enum_name_ordered_next_deep_item_0[5] = {
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_2,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_1,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_0,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_4,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_3
};

static const MR_Integer read_profile__read_profile__functor_number_map_next_deep_item_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct read_profile__read_profile__type_ctor_info_next_deep_item_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN_ENUM,
  ((MR_Box) (read_profile____Unify____next_deep_item_0_0_10001)),
  ((MR_Box) (read_profile____Compare____next_deep_item_0_0_10001)),
  (MR_String) "read_profile",
  (MR_String) "next_deep_item",
  { read_profile__read_profile__foreign_enum_name_ordered_next_deep_item_0 },
  { read_profile__read_profile__foreign_enum_ordinal_ordered_next_deep_item_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  read_profile__read_profile__functor_number_map_next_deep_item_0,

};

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_0 = {
  (MR_String) "ps",
  INT32_C(0)
};

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_1 = {
  (MR_String) "pd",
  INT32_C(1)
};

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_2 = {
  (MR_String) "css",
  INT32_C(2)
};

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_3 = {
  (MR_String) "csd",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_ordinal_ordered_ptr_kind_0[4] = {
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_0,
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_1,
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_2,
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_3
};

static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_name_ordered_ptr_kind_0[4] = {
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_3,
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_2,
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_1,
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_0
};

static const MR_Integer read_profile__read_profile__functor_number_map_ptr_kind_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct read_profile__read_profile__type_ctor_info_ptr_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (read_profile____Unify____ptr_kind_0_0_10001)),
  ((MR_Box) (read_profile____Compare____ptr_kind_0_0_10001)),
  (MR_String) "read_profile",
  (MR_String) "ptr_kind",
  { read_profile__read_profile__enum_name_ordered_ptr_kind_0 },
  { read_profile__read_profile__enum_ordinal_ordered_ptr_kind_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  read_profile__read_profile__functor_number_map_ptr_kind_0,

};

static MR_bool MR_CALL 
read_profile__IntroducedFrom__pred__read_n_byte_string__1332__1_2_p_0(
  MR_Integer LambdaHeadVar__1_23,
  MR_Char * LambdaHeadVar__2_24)
{
  MR_bool succeeded;

  succeeded = mercury__char__to_int_2_p_2(LambdaHeadVar__2_24, LambdaHeadVar__1_23);
  return succeeded;
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_3_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Word LambdaHeadVar__2_54,
  MR_Word * LambdaHeadVar__3_55)
{
  MR_Tuple Var_56;

  {
    Var_56 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (LambdaHeadVar__1_53));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (LambdaHeadVar__2_54));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__3_55 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_56));
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__899__1_5_p_0(
  MR_Integer N_19,
  MR_Word HeadVar__2_52,
  MR_Word * HeadVar__3_93)
{
  MR_Word MaybeRevItems_97;

  read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_91_49_93_95_48_6_p_0(N_19, HeadVar__2_52, (MR_Word) ((MR_Unsigned) 0U), &MaybeRevItems_97);
  if (((MR_tag((MR_Word) MaybeRevItems_97)) == (MR_Integer) 1))
    *HeadVar__3_93 = MaybeRevItems_97;
  else
  {
    MR_Word RevItems_98 = ((MR_Word) ((MR_hl_field(0, MaybeRevItems_97, 0))));
    MR_Word Items_99;

    mercury__list__reverse_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), RevItems_98, &Items_99);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_93 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Items_99));
    }
  }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_91_49_93_95_48_6_p_0(
  MR_Integer N_7,
  MR_Word ItemReader_8,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_7 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItems_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (RevItems0_9));
      }
    else
    {
      MR_Word MaybeItem_12;
      void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, ItemReader_8, 1))));
      MR_Box conv2_MaybeItem_12;
      MR_Box conv1_STATE_VARIABLE_IO_1_18;

      func_0(((MR_Box) (ItemReader_8)), &conv2_MaybeItem_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_1_18);
      MaybeItem_12 = ((MR_Word) (conv2_MaybeItem_12));
      if (((MR_tag((MR_Word) MaybeItem_12)) == (MR_Integer) 1))
        *MaybeItems_10 = (MR_Word) (MaybeItem_12);
      else
      {
        MR_Box Item_13 = (MR_hl_field(0, MaybeItem_12, 0));
        MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) N_7 - (MR_Unsigned) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_7;
        MR_Word next_value_of_RevItems0_9;

        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = Item_13;
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (RevItems0_9));
        }
        // direct tailcall eliminated
        ;
        next_value_of_N_7 = Var_19;
        next_value_of_RevItems0_9 = Var_20;
        N_7 = next_value_of_N_7;
        RevItems0_9 = next_value_of_RevItems0_9;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__887__1_4_p_0(
  MR_Integer LambdaHeadVar__1_42,
  MR_Integer LambdaHeadVar__2_43,
  MR_Integer LambdaHeadVar__3_44,
  MR_Word * LambdaHeadVar__4_45)
{
  MR_Tuple Var_46;

  {
    Var_46 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (LambdaHeadVar__1_42));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (LambdaHeadVar__2_43));
    MR_hl_field(0, Var_46, 2) = ((MR_Box) (LambdaHeadVar__3_44));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__4_45 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static__711__1_3_p_0(
  MR_String LambdaHeadVar__1_19,
  MR_Word LambdaHeadVar__2_20,
  MR_Word * LambdaHeadVar__3_21)
{
  MR_Word RevGoalPath0_11;
  MR_Word RevGoalPath_12;
  MR_Word Var_22;

  mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(LambdaHeadVar__1_19, &RevGoalPath0_11);
  mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(RevGoalPath0_11, &RevGoalPath_12);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (RevGoalPath_12));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (LambdaHeadVar__2_20));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__3_21 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_22));
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__695__1_3_p_0(
  MR_Word LambdaHeadVar__1_17,
  MR_Integer LambdaHeadVar__2_18,
  MR_Word * LambdaHeadVar__3_19)
{
  MR_Word CPI_22;

  {
    CPI_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CPI_22, 0) = ((MR_Box) (LambdaHeadVar__1_17));
    MR_hl_field(0, CPI_22, 1) = ((MR_Box) (LambdaHeadVar__2_18));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__3_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (CPI_22));
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_user_defined__670__1_7_p_0(
  MR_Word PredOrFunc_7,
  MR_String LambdaHeadVar__1_25,
  MR_String LambdaHeadVar__2_26,
  MR_String LambdaHeadVar__3_27,
  MR_Integer LambdaHeadVar__4_28,
  MR_Integer LambdaHeadVar__5_29,
  MR_Word * LambdaHeadVar__6_30)
{
  MR_Word Var_31;

  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_7));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (LambdaHeadVar__1_25));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) (LambdaHeadVar__2_26));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (LambdaHeadVar__3_27));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (LambdaHeadVar__4_28));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (LambdaHeadVar__5_29));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__6_30 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__652__1_7_p_0(
  MR_String LambdaHeadVar__1_25,
  MR_String LambdaHeadVar__2_26,
  MR_String LambdaHeadVar__3_27,
  MR_String LambdaHeadVar__4_28,
  MR_Integer LambdaHeadVar__5_29,
  MR_Integer LambdaHeadVar__6_30,
  MR_Word * LambdaHeadVar__7_31)
{
  MR_Word Var_32;

  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (LambdaHeadVar__1_25));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (LambdaHeadVar__2_26));
    MR_hl_field(1, Var_32, 2) = ((MR_Box) (LambdaHeadVar__3_27));
    MR_hl_field(1, Var_32, 3) = ((MR_Box) (LambdaHeadVar__4_28));
    MR_hl_field(1, Var_32, 4) = ((MR_Box) (LambdaHeadVar__5_29));
    MR_hl_field(1, Var_32, 5) = ((MR_Box) (LambdaHeadVar__6_30));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__7_31 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
  }
}

static MR_ArrayPtr MR_CALL 
read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__581__1_1_f_0(
  MR_Word HeadVar__1_75)
{
  MR_ArrayPtr HeadVar__2_76;
  MR_ArrayPtr conv0_HeadVar__2_76;

  conv0_HeadVar__2_76 = mercury__array__array_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_75);
  HeadVar__2_76 = (MR_ArrayPtr) (conv0_HeadVar__2_76);
  return HeadVar__2_76;
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_static__473__1_7_p_0(
  MR_Integer LambdaHeadVar__1_54,
  MR_Word LambdaHeadVar__2_55,
  MR_String LambdaHeadVar__3_56,
  MR_Integer LambdaHeadVar__4_57,
  MR_Integer LambdaHeadVar__5_58,
  MR_Integer LambdaHeadVar__6_59,
  MR_Word * LambdaHeadVar__7_60)
{
  MR_Tuple Var_61;

  {
    Var_61 = (MR_Tuple) MR_new_object(MR_Tuple, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (LambdaHeadVar__1_54));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (LambdaHeadVar__2_55));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) (LambdaHeadVar__3_56));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (LambdaHeadVar__4_57));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) (LambdaHeadVar__5_58));
    MR_hl_field(0, Var_61, 5) = ((MR_Box) (LambdaHeadVar__6_59));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__7_60 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_call_site_static__434__1_6_p_0(
  MR_Integer LambdaHeadVar__1_54,
  MR_Word LambdaHeadVar__2_55,
  MR_String LambdaHeadVar__3_56,
  MR_Integer LambdaHeadVar__4_57,
  MR_String LambdaHeadVar__5_58,
  MR_Word * LambdaHeadVar__6_59)
{
  MR_Tuple Var_60;
  MR_Word RevGoalPath0_85;
  MR_Word RevGoalPath_86;
  MR_Word CallSiteStatic0_87;

  mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(LambdaHeadVar__5_58, &RevGoalPath0_85);
  mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(RevGoalPath0_85, &RevGoalPath_86);
  {
    CallSiteStatic0_87 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CallSiteStatic0_87, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
    MR_hl_field(0, CallSiteStatic0_87, 1) = ((MR_Box) ((MR_Integer) -1));
    MR_hl_field(0, CallSiteStatic0_87, 2) = ((MR_Box) (LambdaHeadVar__2_55));
    MR_hl_field(0, CallSiteStatic0_87, 3) = ((MR_Box) (LambdaHeadVar__3_56));
    MR_hl_field(0, CallSiteStatic0_87, 4) = ((MR_Box) (LambdaHeadVar__4_57));
    MR_hl_field(0, CallSiteStatic0_87, 5) = ((MR_Box) (RevGoalPath_86));
  }
  {
    Var_60 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) (CallSiteStatic0_87));
    MR_hl_field(0, Var_60, 1) = ((MR_Box) (LambdaHeadVar__1_54));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__6_59 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_60));
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_call_site_static__414__1_5_p_0(
  MR_Integer LambdaHeadVar__1_39,
  MR_Word LambdaHeadVar__2_40,
  MR_Integer LambdaHeadVar__3_41,
  MR_String LambdaHeadVar__4_42,
  MR_Word * LambdaHeadVar__5_43)
{
  MR_Word RevGoalPath0_19;
  MR_Word RevGoalPath_20;
  MR_Word CallSiteStatic0_21;
  MR_Tuple Var_45;

  mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(LambdaHeadVar__4_42, &RevGoalPath0_19);
  mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(RevGoalPath0_19, &RevGoalPath_20);
  {
    CallSiteStatic0_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CallSiteStatic0_21, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
    MR_hl_field(0, CallSiteStatic0_21, 1) = ((MR_Box) ((MR_Integer) -1));
    MR_hl_field(0, CallSiteStatic0_21, 2) = ((MR_Box) (LambdaHeadVar__2_40));
    MR_hl_field(0, CallSiteStatic0_21, 3) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, CallSiteStatic0_21, 4) = ((MR_Box) (LambdaHeadVar__3_41));
    MR_hl_field(0, CallSiteStatic0_21, 5) = ((MR_Box) (RevGoalPath_20));
  }
  {
    Var_45 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (CallSiteStatic0_21));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (LambdaHeadVar__1_39));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__5_43 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
  }
}

static void MR_CALL 
read_profile____Compare____ptr_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
read_profile____Unify____ptr_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
read_profile____Compare____next_deep_item_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
read_profile____Unify____next_deep_item_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
read_profile____Compare____maybe_init_deep_complete_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_10 == CastY_11);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
              MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

              profile____Compare____initial_deep_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              MR_Word ArgY1_7 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

              profile____Compare____initial_deep_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
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
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_8 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_String ArgY1_9 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_8, ArgY1_9);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
read_profile____Unify____maybe_init_deep_complete_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
            succeeded = profile____Unify____initial_deep_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
            succeeded = profile____Unify____initial_deep_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_String ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
read_profile____Compare____maybe_error2_2_0(
  MR_Word TypeInfo_for_T1_13,
  MR_Word TypeInfo_for_T2_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_String ArgY1_10 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_9, ArgY1_10);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 0));
    MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, 1));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T1_13, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0(TypeInfo_for_T2_14, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
read_profile____Unify____maybe_error2_2_0(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 0));
    MR_Box ArgY1_4;
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, 1));
    MR_Box ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
      ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, 1));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T1_11, ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T2_12, ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
read_profile____Compare____acceptable_version_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
read_profile____Unify____acceptable_version_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Word MR_CALL 
read_profile__make_cssptr_1_f_0(
  MR_Integer CSSI_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (CSSI_3);

  return HeadVar__2_2;
}

static MR_Word MR_CALL 
read_profile__make_csdptr_1_f_0(
  MR_Integer CSDI_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (CSDI_3);

  return HeadVar__2_2;
}

static void MR_CALL 
read_profile__read_fixed_size_int_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeInt_6)
{
  read_profile__read_fixed_size_int_acc_7_p_0(InputStream_5, (MR_Integer) 8, (MR_Integer) 0, (MR_Integer) 0, MaybeInt_6);
}

static void MR_CALL 
read_profile__read_fixed_size_int_acc_7_p_0(
  MR_Word InputStream_8,
  MR_Integer BytesLeft_9,
  MR_Integer Num0_10,
  MR_Integer ShiftBy_11,
  MR_Word * MaybeInt_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (BytesLeft_9 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeInt_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Num0_10));
      }
    else
    {
      MR_Word MaybeByte_14;

      read_profile__read_deep_byte_4_p_0(InputStream_8, &MaybeByte_14);
      if (((MR_tag((MR_Word) MaybeByte_14)) == (MR_Integer) 1))
        *MaybeInt_12 = MaybeByte_14;
      else
      {
        MR_Integer Byte_15 = ((MR_Integer) ((MR_hl_field(0, MaybeByte_14, 0))));
        MR_Integer Num1_16;
        MR_Integer Var_22;
        MR_Integer Var_23;
        MR_Integer Var_24;
        MR_Integer next_value_of_BytesLeft_9;
        MR_Integer next_value_of_Num0_10;
        MR_Integer next_value_of_ShiftBy_11;

        Var_22 = mercury__int__f_60_60_2_f_0(Byte_15, ShiftBy_11);
        Num1_16 = (Num0_10 | Var_22);
        Var_23 = (MR_Integer) ((MR_Unsigned) BytesLeft_9 - (MR_Unsigned) 1);
        Var_24 = (MR_Integer) ((MR_Unsigned) ShiftBy_11 + (MR_Unsigned) 8);
        // direct tailcall eliminated
        ;
        next_value_of_BytesLeft_9 = Var_23;
        next_value_of_Num0_10 = Num1_16;
        next_value_of_ShiftBy_11 = Var_24;
        BytesLeft_9 = next_value_of_BytesLeft_9;
        Num0_10 = next_value_of_Num0_10;
        ShiftBy_11 = next_value_of_ShiftBy_11;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
read_profile__read_num_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeNum_6)
{
  read_profile__read_num_acc_5_p_0(InputStream_5, (MR_Integer) 0, MaybeNum_6);
}

static void MR_CALL 
read_profile__num_to_cp_type_2_p_0(
  MR_Integer Int_1,
  MR_Word * CPType_2)
{
{
#define MR_PROC_LABEL read_profile__num_to_cp_type_2_p_0

	MR_Integer Int;
	MR_Word CPType;

	Int = Int_1 ;
		{

    CPType = Int;


		;}
#undef MR_PROC_LABEL
	*CPType_2  = CPType;
}
}

static void MR_CALL 
read_profile__read_cp_type_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeCPType_6)
{
  MR_Word MaybeNum_8;

  read_profile__read_num_acc_5_p_0(InputStream_5, (MR_Integer) 0, &MaybeNum_8);
  if (((MR_tag((MR_Word) MaybeNum_8)) == (MR_Integer) 1))
    *MaybeCPType_6 = (MR_Word) (MaybeNum_8);
  else
  {
    MR_Integer Num_9 = ((MR_Integer) ((MR_hl_field(0, MaybeNum_8, 0))));
    MR_Word CPType_10;

{
#define MR_PROC_LABEL read_profile__read_cp_type_4_p_0

	MR_Integer Int;
	MR_Word CPType;

	Int = Num_9 ;
		{

    CPType = Int;


		;}
#undef MR_PROC_LABEL
	CPType_10  = CPType;
}
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCPType_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (CPType_10));
    }
  }
}

static void MR_CALL 
read_profile__read_ptr_5_p_0(
  MR_Word InputStream_6,
  MR_Word _Kind_7,
  MR_Word * MaybePtr_8)
{
  read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_50_93_95_48_5_p_0(InputStream_6, MaybePtr_8);
}

static void MR_CALL 
read_profile__read_call_site_kind_and_callee_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeKindAndCallee_6)
{
  MR_bool succeeded;
  MR_Word MaybeByte_8;

  read_profile__read_deep_byte_4_p_0(InputStream_5, &MaybeByte_8);
  if (((MR_tag((MR_Word) MaybeByte_8)) == (MR_Integer) 1))
    *MaybeKindAndCallee_6 = (MR_Word) (MaybeByte_8);
  else
  {
    MR_Integer Byte_9 = ((MR_Integer) ((MR_hl_field(0, MaybeByte_8, 0))));
    MR_Word CallSiteKind_10;

    succeeded = profile__is_call_site_kind_2_p_0(Byte_9, &CallSiteKind_10);
    if (succeeded)
      switch (CallSiteKind_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case ((int) MR_callsite_callback):
          *MaybeKindAndCallee_6 = (MR_Word) (&read_profile_scalar_common_6[5]);
          break;
        case ((int) MR_callsite_higher_order_call):
          *MaybeKindAndCallee_6 = (MR_Word) (&read_profile_scalar_common_6[6]);
          break;
        case ((int) MR_callsite_method_call):
          *MaybeKindAndCallee_6 = (MR_Word) (&read_profile_scalar_common_6[7]);
          break;
        case ((int) MR_callsite_normal_call):
          {
            MR_Word MaybeCSS_11;

            read_profile__read_num_acc_5_p_0(InputStream_5, (MR_Integer) 0, &MaybeCSS_11);
            if (((MR_tag((MR_Word) MaybeCSS_11)) == (MR_Integer) 1))
              *MaybeKindAndCallee_6 = (MR_Word) (MaybeCSS_11);
            else
            {
              MR_Integer CalleeProcStatic_12 = ((MR_Integer) ((MR_hl_field(0, MaybeCSS_11, 0))));
              MR_Word MaybeTypeSubst_13;

              read_profile__read_string_4_p_0(InputStream_5, &MaybeTypeSubst_13);
              if (((MR_tag((MR_Word) MaybeTypeSubst_13)) == (MR_Integer) 1))
                *MaybeKindAndCallee_6 = (MR_Word) (MaybeTypeSubst_13);
              else
              {
                MR_String TypeSubst_14 = ((MR_String) ((MR_hl_field(0, MaybeTypeSubst_13, 0))));
                MR_Word Var_24;
                MR_Word Var_25 = (MR_Word) (CalleeProcStatic_12);

                {
                  Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
                  MR_hl_field(1, Var_24, 1) = ((MR_Box) (TypeSubst_14));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeKindAndCallee_6 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
                }
              }
            }
          }
          break;
        case ((int) MR_callsite_special_call):
          *MaybeKindAndCallee_6 = (MR_Word) (&read_profile_scalar_common_6[8]);
          break;
      }
    else
    {
      MR_String Msg_16;
      MR_String Var_44;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Byte_9, &Var_44);
      Msg_16 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected call_site_kind ", Var_44);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeKindAndCallee_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Msg_16));
      }
    }
  }
}

static MR_bool MR_CALL 
read_profile__read_string_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Char conv0_LambdaHeadVar__2_24;

  succeeded = read_profile__IntroducedFrom__pred__read_n_byte_string__1332__1_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_24);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_LambdaHeadVar__2_24));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
read_profile__read_string_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeStr_6)
{
  MR_bool succeeded;
  MR_Word MaybeNum_8;

  read_profile__read_num_acc_5_p_0(InputStream_5, (MR_Integer) 0, &MaybeNum_8);
  if (((MR_tag((MR_Word) MaybeNum_8)) == (MR_Integer) 1))
    *MaybeStr_6 = (MR_Word) (MaybeNum_8);
  else
  {
    MR_Integer Length_9 = ((MR_Integer) ((MR_hl_field(0, MaybeNum_8, 0))));

    succeeded = (Length_9 == (MR_Integer) 0);
    if (succeeded)
      *MaybeStr_6 = (MR_Word) (&read_profile_scalar_common_6[10]);
    else
    {
      MR_Word MaybeRevNBytes_32;

      read_profile__read_n_bytes_acc_6_p_0(InputStream_5, Length_9, (MR_Word) ((MR_Unsigned) 0U), &MaybeRevNBytes_32);
      if (((MR_tag((MR_Word) MaybeRevNBytes_32)) == (MR_Integer) 1))
        *MaybeStr_6 = (MR_Word) (MaybeRevNBytes_32);
      else
      {
        MR_Word Bytes_26;
        MR_Word RevBytes_33 = ((MR_Word) ((MR_hl_field(0, MaybeRevNBytes_32, 0))));
        MR_Word Chars_27;

        mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevBytes_33, &Bytes_26);
        succeeded = mercury__list__map_3_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&read_profile_scalar_common_4[20]), Bytes_26, &Chars_27);
        if (succeeded)
        {
          MR_String Str_28;

          mercury__string__from_char_list_2_p_0(Chars_27, &Str_28);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeStr_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Str_28));
          }
        }
        else
          *MaybeStr_6 = (MR_Word) (MR_mkword(1, &read_profile_scalar_common_6[11]));
      }
    }
  }
}

static void MR_CALL 
read_profile__read_n_bytes_acc_6_p_0(
  MR_Word InputStream_7,
  MR_Integer N_8,
  MR_Word RevBytes0_9,
  MR_Word * MaybeNBytes_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_8 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeNBytes_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (RevBytes0_9));
      }
    else
    {
      MR_Word MaybeByte_12;

      read_profile__read_deep_byte_4_p_0(InputStream_7, &MaybeByte_12);
      if (((MR_tag((MR_Word) MaybeByte_12)) == (MR_Integer) 1))
        *MaybeNBytes_10 = (MR_Word) (MaybeByte_12);
      else
      {
        MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(0, MaybeByte_12, 0))));
        MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) N_8 - (MR_Unsigned) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_8;
        MR_Word next_value_of_RevBytes0_9;

        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = ((MR_Box) (Byte_13));
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (RevBytes0_9));
        }
        // direct tailcall eliminated
        ;
        next_value_of_N_8 = Var_19;
        next_value_of_RevBytes0_9 = Var_20;
        N_8 = next_value_of_N_8;
        RevBytes0_9 = next_value_of_RevBytes0_9;
        continue;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
read_profile__read_call_site_slot_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
read_profile__read_call_site_slot_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
read_profile__read_call_site_slot_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
read_profile__read_call_site_slot_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
read_profile__read_call_site_slot_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeSlot_6)
{
  MR_bool succeeded;
  MR_Word MaybeByte_128;

  read_profile__read_deep_byte_4_p_0(InputStream_5, &MaybeByte_128);
  if (((MR_tag((MR_Word) MaybeByte_128)) == (MR_Integer) 1))
  {
    MR_Word MaybeKind_10 = (MR_Word) (MaybeByte_128);

    *MaybeSlot_6 = (MR_Word) (MaybeKind_10);
  }
  else
  {
    MR_Integer Byte_129 = ((MR_Integer) ((MR_hl_field(0, MaybeByte_128, 0))));
    MR_Word CallSiteKind_130;

    succeeded = profile__is_call_site_kind_2_p_0(Byte_129, &CallSiteKind_130);
    if (succeeded)
      switch (CallSiteKind_130) {
        default: /*NOTREACHED*/ MR_assert(0);
        case ((int) MR_callsite_callback):
          {
            MR_Word MaybeCSDIs_17;

            read_profile__read_multi_call_site_csdis_2_5_p_0(InputStream_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeCSDIs_17);
            if (((MR_tag((MR_Word) MaybeCSDIs_17)) == (MR_Integer) 1))
              *MaybeSlot_6 = (MR_Word) (MaybeCSDIs_17);
            else
            {
              MR_Word CSDIs_18 = ((MR_Word) ((MR_hl_field(0, MaybeCSDIs_17, 0))));
              MR_Word CSDPtrs_19;
              MR_Word Var_39;
              MR_ArrayPtr Var_40;
              MR_ArrayPtr conv1_Var_40;

              CSDPtrs_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&read_profile_scalar_common_4[16]), CSDIs_18);
              conv1_Var_40 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), CSDPtrs_19);
              Var_40 = (MR_ArrayPtr) (conv1_Var_40);
              {
                Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_39, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_40));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeSlot_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
              }
            }
          }
          break;
        case ((int) MR_callsite_higher_order_call):
          {
            MR_Word MaybeCSDIs_77;

            read_profile__read_multi_call_site_csdis_2_5_p_0(InputStream_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeCSDIs_77);
            if (((MR_tag((MR_Word) MaybeCSDIs_77)) == (MR_Integer) 1))
              *MaybeSlot_6 = (MR_Word) (MaybeCSDIs_77);
            else
            {
              MR_Word CSDIs_62 = ((MR_Word) ((MR_hl_field(0, MaybeCSDIs_77, 0))));
              MR_Word CSDPtrs_63;
              MR_Word Var_65;
              MR_ArrayPtr Var_66;
              MR_ArrayPtr conv3_Var_66;

              CSDPtrs_63 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&read_profile_scalar_common_4[17]), CSDIs_62);
              conv3_Var_66 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), CSDPtrs_63);
              Var_66 = (MR_ArrayPtr) (conv3_Var_66);
              {
                Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_65, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeSlot_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_65));
              }
            }
          }
          break;
        case ((int) MR_callsite_method_call):
          {
            MR_Word MaybeCSDIs_102;

            read_profile__read_multi_call_site_csdis_2_5_p_0(InputStream_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeCSDIs_102);
            if (((MR_tag((MR_Word) MaybeCSDIs_102)) == (MR_Integer) 1))
              *MaybeSlot_6 = (MR_Word) (MaybeCSDIs_102);
            else
            {
              MR_Word CSDIs_87 = ((MR_Word) ((MR_hl_field(0, MaybeCSDIs_102, 0))));
              MR_Word CSDPtrs_88;
              MR_Word Var_90;
              MR_ArrayPtr Var_91;
              MR_ArrayPtr conv5_Var_91;

              CSDPtrs_88 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&read_profile_scalar_common_4[18]), CSDIs_87);
              conv5_Var_91 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), CSDPtrs_88);
              Var_91 = (MR_ArrayPtr) (conv5_Var_91);
              {
                Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_90, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_91));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeSlot_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_90));
              }
            }
          }
          break;
        case ((int) MR_callsite_special_call):
          {
            MR_Word MaybeCSDIs_127;

            read_profile__read_multi_call_site_csdis_2_5_p_0(InputStream_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeCSDIs_127);
            if (((MR_tag((MR_Word) MaybeCSDIs_127)) == (MR_Integer) 1))
              *MaybeSlot_6 = (MR_Word) (MaybeCSDIs_127);
            else
            {
              MR_Word CSDIs_112 = ((MR_Word) ((MR_hl_field(0, MaybeCSDIs_127, 0))));
              MR_Word CSDPtrs_113;
              MR_Word Var_115;
              MR_ArrayPtr Var_116;
              MR_ArrayPtr conv7_Var_116;

              CSDPtrs_113 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&read_profile_scalar_common_4[19]), CSDIs_112);
              conv7_Var_116 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), CSDPtrs_113);
              Var_116 = (MR_ArrayPtr) (conv7_Var_116);
              {
                Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_115, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_116));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeSlot_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_115));
              }
            }
          }
          break;
        case ((int) MR_callsite_normal_call):
          {
            MR_Word MaybeCSDI_12;

            read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_50_93_95_48_5_p_0(InputStream_5, &MaybeCSDI_12);
            if (((MR_tag((MR_Word) MaybeCSDI_12)) == (MR_Integer) 1))
              *MaybeSlot_6 = (MR_Word) (MaybeCSDI_12);
            else
            {
              MR_Integer CSDI_13 = ((MR_Integer) ((MR_hl_field(0, MaybeCSDI_12, 0))));
              MR_Word CSDPtr_14 = (MR_Word) (CSDI_13);
              MR_Word Var_29;

              {
                Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_29, 0) = ((MR_Box) (CSDPtr_14));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeSlot_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_29));
              }
            }
          }
          break;
      }
    else
    {
      MR_String Msg_131;
      MR_String Var_146;
      MR_Word MaybeKind_159;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Byte_129, &Var_146);
      Msg_131 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected call_site_kind ", Var_146);
      {
        MaybeKind_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeKind_159, 0) = ((MR_Box) (Msg_131));
      }
      *MaybeSlot_6 = (MR_Word) (MaybeKind_159);
    }
  }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_50_93_95_48_5_p_0(
  MR_Word InputStream_6,
  MR_Word * MaybePtr_8)
{
  read_profile__read_num_acc_5_p_0(InputStream_6, (MR_Integer) 0, MaybePtr_8);
}

static void MR_CALL 
read_profile__read_multi_call_site_csdis_2_5_p_0(
  MR_Word InputStream_6,
  MR_Word CSDIs0_7,
  MR_Word * MaybeCSDIs_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeByte_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    read_profile__read_deep_byte_4_p_0(InputStream_6, &MaybeByte_12);
    if (((MR_tag((MR_Word) MaybeByte_12)) == (MR_Integer) 1))
      *MaybeCSDIs_8 = (MR_Word) (MaybeByte_12);
    else
    {
      MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(0, MaybeByte_12, 0))));

      succeeded = (Byte_13 == (MR_Integer) 0);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCSDIs_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (CSDIs0_7));
        }
      else
      {
        MR_Word MaybeCSDI_14;

        mercury__io__putback_byte_4_p_0(InputStream_6, Byte_13);
        read_profile__read_num_acc_5_p_0(InputStream_6, (MR_Integer) 0, &MaybeCSDI_14);
        if (((MR_tag((MR_Word) MaybeCSDI_14)) == (MR_Integer) 1))
          *MaybeCSDIs_8 = (MR_Word) (MaybeCSDI_14);
        else
        {
          MR_Integer CSDI_15 = ((MR_Integer) ((MR_hl_field(0, MaybeCSDI_14, 0))));
          MR_Word Var_28;
          MR_Word next_value_of_CSDIs0_7;

          {
            Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_28, 0) = ((MR_Box) (CSDI_15));
            MR_hl_field(1, Var_28, 1) = ((MR_Box) (CSDIs0_7));
          }
          // direct tailcall eliminated
          ;
          next_value_of_CSDIs0_7 = Var_28;
          CSDIs0_7 = next_value_of_CSDIs0_7;
          continue;
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
read_profile__non_right_bracket_1_p_0(
  MR_Char C_2)
{
  MR_bool succeeded = (C_2 != (MR_Char) 93);

  return succeeded;
}

static void MR_CALL 
read_profile__read_coverage_point_static_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__3_21;

  read_profile__IntroducedFrom__pred__read_coverage_point_static__711__1_3_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_21);
  *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_21));
}

static void MR_CALL 
read_profile__read_coverage_point_static_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeCPType_6;

  read_profile__read_cp_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv1_MaybeCPType_6);
  *wrapper_arg_1 = ((MR_Box) (conv1_MaybeCPType_6));
}

static void MR_CALL 
read_profile__read_coverage_point_static_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeStr_6;

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv0_MaybeStr_6);
  *wrapper_arg_1 = ((MR_Box) (conv0_MaybeStr_6));
}

static void MR_CALL 
read_profile__read_coverage_point_static_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeCP_6)
{
  MR_Word Var_15;
  MR_Word Var_16;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (read_profile__read_coverage_point_static_4_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (InputStream_5));
  }
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&read_profile_scalar_common_7[4]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (read_profile__read_coverage_point_static_4_p_0_2));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (InputStream_5));
  }
  io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), Var_15, Var_16, (MR_Word) (&read_profile_scalar_common_4[15]), MaybeCP_6);
}

static void MR_CALL 
read_profile__read_proc_id_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_LambdaHeadVar__6_30;

  read_profile__IntroducedFrom__pred__read_proc_id_user_defined__670__1_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)), ((MR_Integer) (wrapper_arg_4)), ((MR_Integer) (wrapper_arg_5)), &conv8_LambdaHeadVar__6_30);
  *wrapper_arg_6 = ((MR_Box) (conv8_LambdaHeadVar__6_30));
}

static void MR_CALL 
read_profile__read_proc_id_4_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_MaybeNum_6;

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv7_MaybeNum_6);
  *wrapper_arg_1 = ((MR_Box) (conv7_MaybeNum_6));
}

static void MR_CALL 
read_profile__read_proc_id_4_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_MaybeStr_6;

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv6_MaybeStr_6);
  *wrapper_arg_1 = ((MR_Box) (conv6_MaybeStr_6));
}

static void MR_CALL 
read_profile__read_proc_id_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__6_30;

  read_profile__IntroducedFrom__pred__read_proc_id_user_defined__670__1_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)), ((MR_Integer) (wrapper_arg_4)), ((MR_Integer) (wrapper_arg_5)), &conv5_LambdaHeadVar__6_30);
  *wrapper_arg_6 = ((MR_Box) (conv5_LambdaHeadVar__6_30));
}

static void MR_CALL 
read_profile__read_proc_id_4_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_MaybeNum_6;

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv4_MaybeNum_6);
  *wrapper_arg_1 = ((MR_Box) (conv4_MaybeNum_6));
}

static void MR_CALL 
read_profile__read_proc_id_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_MaybeStr_6;

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv3_MaybeStr_6);
  *wrapper_arg_1 = ((MR_Box) (conv3_MaybeStr_6));
}

static void MR_CALL 
read_profile__read_proc_id_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__7_31;

  read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__652__1_7_p_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)), ((MR_String) (wrapper_arg_4)), ((MR_Integer) (wrapper_arg_5)), ((MR_Integer) (wrapper_arg_6)), &conv2_LambdaHeadVar__7_31);
  *wrapper_arg_7 = ((MR_Box) (conv2_LambdaHeadVar__7_31));
}

static void MR_CALL 
read_profile__read_proc_id_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeNum_6;

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv1_MaybeNum_6);
  *wrapper_arg_1 = ((MR_Box) (conv1_MaybeNum_6));
}

static void MR_CALL 
read_profile__read_proc_id_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeStr_6;

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv0_MaybeStr_6);
  *wrapper_arg_1 = ((MR_Box) (conv0_MaybeStr_6));
}

static void MR_CALL 
read_profile__read_proc_id_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeProcId_6)
{
  MR_bool succeeded;
  MR_Word MaybeByte_8;

  read_profile__read_deep_byte_4_p_0(InputStream_5, &MaybeByte_8);
  if (((MR_tag((MR_Word) MaybeByte_8)) == (MR_Integer) 1))
    *MaybeProcId_6 = (MR_Word) (MaybeByte_8);
  else
  {
    MR_Integer Byte_9 = ((MR_Integer) ((MR_hl_field(0, MaybeByte_8, 0))));
    MR_Word ProcLabelKind_10;

    succeeded = mdbcomp__program_representation__is_proclabel_kind_2_p_0(Byte_9, &ProcLabelKind_10);
    if (succeeded)
      switch (ProcLabelKind_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case ((int) MR_proclabel_special):
          {
            MR_Word Var_33;
            MR_Word Var_37;

            {
              Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_33, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
              MR_hl_field(0, Var_33, 1) = ((MR_Box) (read_profile__read_proc_id_4_p_0_1));
              MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_33, 3) = ((MR_Box) (InputStream_5));
            }
            {
              Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_37, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
              MR_hl_field(0, Var_37, 1) = ((MR_Box) (read_profile__read_proc_id_4_p_0_2));
              MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_37, 3) = ((MR_Box) (InputStream_5));
            }
            io_combinator__maybe_error_sequence_6_10_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), Var_33, Var_33, Var_33, Var_33, Var_37, Var_37, (MR_Word) (&read_profile_scalar_common_4[14]), MaybeProcId_6);
          }
          break;
        case ((int) MR_proclabel_user_function):
          {
            MR_Word Var_43;
            MR_Word Var_46;

            {
              Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_43, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
              MR_hl_field(0, Var_43, 1) = ((MR_Box) (read_profile__read_proc_id_4_p_0_4));
              MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_43, 3) = ((MR_Box) (InputStream_5));
            }
            {
              Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_46, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
              MR_hl_field(0, Var_46, 1) = ((MR_Box) (read_profile__read_proc_id_4_p_0_5));
              MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_46, 3) = ((MR_Box) (InputStream_5));
            }
            io_combinator__maybe_error_sequence_5_9_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), Var_43, Var_43, Var_43, Var_46, Var_46, (MR_Word) (&read_profile_scalar_common_2[3]), MaybeProcId_6);
          }
          break;
        case ((int) MR_proclabel_user_predicate):
          {
            MR_Word Var_52;
            MR_Word Var_55;

            {
              Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_52, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
              MR_hl_field(0, Var_52, 1) = ((MR_Box) (read_profile__read_proc_id_4_p_0_7));
              MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_52, 3) = ((MR_Box) (InputStream_5));
            }
            {
              Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_55, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
              MR_hl_field(0, Var_55, 1) = ((MR_Box) (read_profile__read_proc_id_4_p_0_8));
              MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_55, 3) = ((MR_Box) (InputStream_5));
            }
            io_combinator__maybe_error_sequence_5_9_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), Var_52, Var_52, Var_52, Var_55, Var_55, (MR_Word) (&read_profile_scalar_common_2[4]), MaybeProcId_6);
          }
          break;
      }
    else
    {
      MR_String Msg_11;
      MR_String Var_25;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Byte_9, &Var_25);
      Msg_11 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected proclabel_kind ", Var_25);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeProcId_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Msg_11));
      }
    }
  }
}

static void MR_CALL 
read_profile__read_deep_byte_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeByte_6)
{
  MR_Word MaybeRawByte_8;

  mercury__io__read_byte_4_p_0(InputStream_5, &MaybeRawByte_8);
  switch (MR_tag((MR_Word) MaybeRawByte_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MaybeByte_6 = (MR_Word) (MR_mkword(1, &read_profile_scalar_common_6[9]));
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Byte_9 = ((MR_Integer) ((MR_hl_field(1, MaybeRawByte_8, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeByte_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Byte_9));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_10 = ((MR_Word) ((MR_hl_field(2, MaybeRawByte_8, 0))));
        MR_String Msg_11;

        mercury__io__error_message_2_p_0(Error_10, &Msg_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeByte_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Msg_11));
        }
      }
      break;
  }
}

static void MR_CALL 
read_profile__maybe_read_pd_coverage_points_5_p_0(
  MR_Word InputStream_6,
  MR_Word ProfileStats_7,
  MR_Word * MaybeCoveragePoints_8)
{
  MR_Word CoverageDataType_10;
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, ProfileStats_7, 9))));

  CoverageDataType_10 = ((MR_Unsigned) ((MR_hl_field(0, Var_18, 3))) & (MR_Integer) 3);
  switch (CoverageDataType_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word ResN_11;

        read_profile__read_num_acc_5_p_0(InputStream_6, (MR_Integer) 0, &ResN_11);
        if (((MR_tag((MR_Word) ResN_11)) == (MR_Integer) 1))
          *MaybeCoveragePoints_8 = (MR_Word) (ResN_11);
        else
        {
          MR_Integer N_12 = ((MR_Integer) ((MR_hl_field(0, ResN_11, 0))));
          MR_Word MaybeRevItems_52;

          read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_56_95_95_91_51_93_95_48_6_p_0(InputStream_6, N_12, (MR_Word) ((MR_Unsigned) 0U), &MaybeRevItems_52);
          if (((MR_tag((MR_Word) MaybeRevItems_52)) == (MR_Integer) 1))
            *MaybeCoveragePoints_8 = (MR_Word) (MaybeRevItems_52);
          else
          {
            MR_Word CPsList_14;
            MR_Word Var_23;
            MR_ArrayPtr Var_24;
            MR_Word RevItems_53 = ((MR_Word) ((MR_hl_field(0, MaybeRevItems_52, 0))));
            MR_ArrayPtr conv0_Var_24;

            mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevItems_53, &CPsList_14);
            conv0_Var_24 = mercury__array__array_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CPsList_14);
            Var_24 = (MR_ArrayPtr) (conv0_Var_24);
            {
              Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCoveragePoints_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
            }
          }
        }
      }
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *MaybeCoveragePoints_8 = (MR_Word) (&read_profile_scalar_common_6[4]);
      break;
  }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_56_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_24,
  MR_Integer N_7,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_7 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItems_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (RevItems0_9));
      }
    else
    {
      MR_Word MaybeItem_12;

      read_profile__read_num_acc_5_p_0(Var_24, (MR_Integer) 0, &MaybeItem_12);
      if (((MR_tag((MR_Word) MaybeItem_12)) == (MR_Integer) 1))
        *MaybeItems_10 = (MR_Word) (MaybeItem_12);
      else
      {
        MR_Integer Item_13 = ((MR_Integer) ((MR_hl_field(0, MaybeItem_12, 0))));
        MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) N_7 - (MR_Unsigned) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_7;
        MR_Word next_value_of_RevItems0_9;

        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = ((MR_Box) (Item_13));
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (RevItems0_9));
        }
        // direct tailcall eliminated
        ;
        next_value_of_N_7 = Var_19;
        next_value_of_RevItems0_9 = Var_20;
        N_7 = next_value_of_N_7;
        RevItems0_9 = next_value_of_RevItems0_9;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
read_profile__maybe_init_deep_12_p_0(
  MR_String ProgName_13,
  MR_Integer FlagsInt_14,
  MR_Integer MaxCSD_15,
  MR_Integer MaxCSS_16,
  MR_Integer MaxPD_17,
  MR_Integer MaxPS_18,
  MR_Integer TicksPerSec_19,
  MR_Integer InstrumentQuanta_20,
  MR_Integer UserQuanta_21,
  MR_Integer NumCallSeqs_22,
  MR_Integer RootPDI_23,
  MR_Word * MaybeInitDeep_24)
{
  MR_Word MaybeFlags_25;

  read_profile__maybe_deep_flags_2_p_0(FlagsInt_14, &MaybeFlags_25);
  if (((MR_tag((MR_Word) MaybeFlags_25)) == (MR_Integer) 1))
    *MaybeInitDeep_24 = (MR_Word) (MaybeFlags_25);
  else
  {
    MR_Word Flags_26 = ((MR_Word) ((MR_hl_field(0, MaybeFlags_25, 0))));
    MR_Word InitStats_27;
    MR_Word InitDeep_28;
    MR_Word Var_30;
    MR_ArrayPtr Var_31;
    MR_Integer Var_32;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_ArrayPtr Var_38;
    MR_Integer Var_39;
    MR_Word Var_41;
    MR_ArrayPtr Var_43;
    MR_ArrayPtr Var_46;
    MR_Integer Var_47;
    MR_ArrayPtr Var_58;
    MR_Integer Var_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_ArrayPtr Var_70;
    MR_ArrayPtr Var_72;
    MR_ArrayPtr conv0_Var_31;
    MR_ArrayPtr conv1_Var_43;
    MR_ArrayPtr conv2_Var_38;
    MR_ArrayPtr conv3_Var_46;
    MR_ArrayPtr conv4_Var_70;
    MR_ArrayPtr conv5_Var_72;
    MR_ArrayPtr conv6_Var_58;

    {
      InitStats_27 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InitStats_27, 0) = ((MR_Box) (ProgName_13));
      MR_hl_field(0, InitStats_27, 1) = ((MR_Box) (MaxCSD_15));
      MR_hl_field(0, InitStats_27, 2) = ((MR_Box) (MaxCSS_16));
      MR_hl_field(0, InitStats_27, 3) = ((MR_Box) (MaxPD_17));
      MR_hl_field(0, InitStats_27, 4) = ((MR_Box) (MaxPS_18));
      MR_hl_field(0, InitStats_27, 5) = ((MR_Box) (TicksPerSec_19));
      MR_hl_field(0, InitStats_27, 6) = ((MR_Box) (InstrumentQuanta_20));
      MR_hl_field(0, InitStats_27, 7) = ((MR_Box) (UserQuanta_21));
      MR_hl_field(0, InitStats_27, 8) = ((MR_Box) (NumCallSeqs_22));
      MR_hl_field(0, InitStats_27, 9) = ((MR_Box) (Flags_26));
    }
    Var_30 = (MR_Word) (RootPDI_23);
    Var_32 = (MR_Integer) ((MR_Unsigned) MaxCSD_15 + (MR_Unsigned) 1);
    Var_37 = measurements__zero_own_prof_info_0_f_0();
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_34, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
      MR_hl_field(0, Var_34, 2) = ((MR_Box) (Var_37));
    }
    conv0_Var_31 = mercury__array__init_2_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), Var_32, ((MR_Box) (Var_34)));
    Var_31 = (MR_ArrayPtr) (conv0_Var_31);
    Var_39 = (MR_Integer) ((MR_Unsigned) MaxPD_17 + (MR_Unsigned) 1);
    conv1_Var_43 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_Word) ((MR_Unsigned) 0U));
    Var_43 = (MR_ArrayPtr) (conv1_Var_43);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (Var_43));
      MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    conv2_Var_38 = mercury__array__init_2_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), Var_39, ((MR_Box) (Var_41)));
    Var_38 = (MR_ArrayPtr) (conv2_Var_38);
    Var_47 = (MR_Integer) ((MR_Unsigned) MaxCSS_16 + (MR_Unsigned) 1);
    conv3_Var_46 = mercury__array__init_2_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_0), Var_47, ((MR_Box) (&read_profile_scalar_common_9[3])));
    Var_46 = (MR_ArrayPtr) (conv3_Var_46);
    Var_59 = (MR_Integer) ((MR_Unsigned) MaxPS_18 + (MR_Unsigned) 1);
    Var_62 = profile__dummy_proc_id_0_f_0();
    conv4_Var_70 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) ((MR_Unsigned) 0U));
    Var_70 = (MR_ArrayPtr) (conv4_Var_70);
    conv5_Var_72 = mercury__array__array_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), (MR_Word) ((MR_Unsigned) 0U));
    Var_72 = (MR_ArrayPtr) (conv5_Var_72);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(0, Var_61, 3) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(0, Var_61, 4) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(0, Var_61, 5) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(0, Var_61, 6) = ((MR_Box) ((MR_Integer) -1));
      MR_hl_field(0, Var_61, 7) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(0, Var_61, 8) = ((MR_Box) (Var_70));
      MR_hl_field(0, Var_61, 9) = ((MR_Box) (Var_72));
      MR_hl_field(0, Var_61, 10) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_61, 11) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    conv6_Var_58 = mercury__array__init_2_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), Var_59, ((MR_Box) (Var_61)));
    Var_58 = (MR_ArrayPtr) (conv6_Var_58);
    {
      InitDeep_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InitDeep_28, 0) = ((MR_Box) (InitStats_27));
      MR_hl_field(0, InitDeep_28, 1) = ((MR_Box) (Var_30));
      MR_hl_field(0, InitDeep_28, 2) = ((MR_Box) (Var_31));
      MR_hl_field(0, InitDeep_28, 3) = ((MR_Box) (Var_38));
      MR_hl_field(0, InitDeep_28, 4) = ((MR_Box) (Var_46));
      MR_hl_field(0, InitDeep_28, 5) = ((MR_Box) (Var_58));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeInitDeep_24 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InitDeep_28));
    }
  }
}

static void MR_CALL 
read_profile__maybe_deep_flags_2_p_0(
  MR_Integer FlagsInt_3,
  MR_Word * MaybeFlags_4)
{
  MR_bool succeeded;
  MR_Integer BytesPerInt_5;
  MR_Integer Canonical_6;
  MR_Integer Compression_7;
  MR_Integer Coverage_8;
  MR_Integer Var_12 = (FlagsInt_3 & (MR_Integer) 255);
  MR_Integer Var_15;
  MR_Integer Var_18;
  MR_Integer Var_21;
  MR_Word CanonicalFlag_9;
  MR_Word CoverageFlag_11;
  MR_Integer Var_24;
  MR_Integer Var_25;
  MR_Integer Var_26;
  MR_Integer Var_34;

  BytesPerInt_5 = mercury__int__f_62_62_2_f_0(Var_12, (MR_Integer) 0);
  Var_15 = (FlagsInt_3 & (MR_Integer) 768);
  Canonical_6 = mercury__int__f_62_62_2_f_0(Var_15, (MR_Integer) 8);
  Var_18 = (FlagsInt_3 & (MR_Integer) 3072);
  Compression_7 = mercury__int__f_62_62_2_f_0(Var_18, (MR_Integer) 10);
  Var_21 = (FlagsInt_3 & (MR_Integer) 12288);
  Coverage_8 = mercury__int__f_62_62_2_f_0(Var_21, (MR_Integer) 12);
  succeeded = (Compression_7 == (MR_Integer) 0);
  if (succeeded)
  {
    switch (Canonical_6) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          CanonicalFlag_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          CanonicalFlag_9 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      switch (Coverage_8) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            CoverageFlag_11 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            CoverageFlag_11 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            CoverageFlag_11 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        Var_24 = (MR_Integer) 0;
        Var_26 = (MR_Integer) 16383;
        Var_25 = ~(Var_26);
        Var_34 = (Var_25 & FlagsInt_3);
        succeeded = (Var_24 == Var_34);
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_27;

    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (BytesPerInt_5));
      MR_hl_field(0, Var_27, 1) = (MR_Box) ((MR_Unsigned) (CanonicalFlag_9));
      MR_hl_field(0, Var_27, 2) = NULL;
      MR_hl_field(0, Var_27, 3) = (MR_Box) ((MR_Unsigned) (CoverageFlag_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFlags_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    }
  }
  else
  {
    MR_String Var_28;
    MR_Unsigned Var_36;
    MR_String Var_37;

    mercury__string__format__format_cast_int_to_uint_2_p_0(FlagsInt_3, &Var_36);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&read_profile_scalar_common_6[2]), (MR_Integer) 2, Var_36, &Var_37);
    Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "Error parsing flags in file header, flags are 0x", Var_37);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeFlags_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
    }
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box wrapper_arg_11,
  MR_Box * wrapper_arg_12)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_MaybeInitDeep_24;

  read_profile__maybe_init_deep_12_p_0(((MR_String) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Integer) (wrapper_arg_4)), ((MR_Integer) (wrapper_arg_5)), ((MR_Integer) (wrapper_arg_6)), ((MR_Integer) (wrapper_arg_7)), ((MR_Integer) (wrapper_arg_8)), ((MR_Integer) (wrapper_arg_9)), ((MR_Integer) (wrapper_arg_10)), ((MR_Integer) (wrapper_arg_11)), &conv4_MaybeInitDeep_24);
  *wrapper_arg_12 = ((MR_Box) (conv4_MaybeInitDeep_24));
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_MaybePtr_8;

  read_profile__read_ptr_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv3_MaybePtr_8);
  *wrapper_arg_1 = ((MR_Box) (conv3_MaybePtr_8));
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_MaybeNum_6;

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv2_MaybeNum_6);
  *wrapper_arg_1 = ((MR_Box) (conv2_MaybeNum_6));
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeInt_6;

  read_profile__read_fixed_size_int_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv1_MaybeInt_6);
  *wrapper_arg_1 = ((MR_Box) (conv1_MaybeInt_6));
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeStr_6;

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv0_MaybeStr_6);
  *wrapper_arg_1 = ((MR_Box) (conv0_MaybeStr_6));
}

void MR_CALL 
read_profile__read_call_graph_4_p_0(
  MR_String FileName_5,
  MR_Word * MaybeInitDeep_6)
{
  MR_bool succeeded;
  MR_Word OpenResult_8;

  mercury__io__open_binary_input_4_p_0(FileName_5, &OpenResult_8);
  if (((MR_tag((MR_Word) OpenResult_8)) == (MR_Integer) 1))
  {
    MR_Word Error_36 = ((MR_Word) ((MR_hl_field(1, OpenResult_8, 0))));
    MR_String Msg_37;

    mercury__io__error_message_2_p_0(Error_36, &Msg_37);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeInitDeep_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Msg_37));
    }
  }
  else
  {
    MR_Word FileStream_9 = ((MR_Word) ((MR_hl_field(0, OpenResult_8, 0))));
    MR_Integer FirstLineLenLimit_86;
    MR_Word MaybeLine_87;
    MR_Integer Var_94;

    Var_94 = mercury__string__length_1_f_0((MR_String) "Mercury deep profiler data version ");
    FirstLineLenLimit_86 = (MR_Integer) ((MR_Unsigned) Var_94 + (MR_Unsigned) 10);
    read_profile__read_line_acc_6_p_0(FileStream_9, FirstLineLenLimit_86, (MR_Word) ((MR_Unsigned) 0U), &MaybeLine_87);
    if (((MR_tag((MR_Word) MaybeLine_87)) == (MR_Integer) 1))
    {
      MR_Word MaybeAcceptableVersion_10 = (MR_Word) (MaybeLine_87);

      *MaybeInitDeep_6 = (MR_Word) (MaybeAcceptableVersion_10);
    }
    else
    {
      MR_String Line0_88 = ((MR_String) ((MR_hl_field(0, MaybeLine_87, 0))));
      MR_String Line_89;
      MR_Integer VersionNumber_91;
      MR_String Suffix_90;

      Line_89 = mercury__string__chomp_1_f_0(Line0_88);
      succeeded = mercury__string__append_3_p_1((MR_String) "Mercury deep profiler data version ", &Suffix_90, Line_89);
      if (succeeded)
        succeeded = mercury__string__to_int_2_p_0(Suffix_90, &VersionNumber_91);
      if (succeeded)
      {
        MR_Word AcceptableVersion_92;

        switch (VersionNumber_91) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 8:
            {
              AcceptableVersion_92 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 9:
            {
              AcceptableVersion_92 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            break;
        }
        if (succeeded)
        {
          MR_Word MaybeInitDeepHeader_12;
          MR_Word Var_20;
          MR_Word Var_21;
          MR_Word Var_26;
          MR_Word Var_30;

          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_20, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
            MR_hl_field(0, Var_20, 1) = ((MR_Box) (read_profile__read_call_graph_4_p_0_1));
            MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_20, 3) = ((MR_Box) (FileStream_9));
          }
          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_21, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
            MR_hl_field(0, Var_21, 1) = ((MR_Box) (read_profile__read_call_graph_4_p_0_2));
            MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_21, 3) = ((MR_Box) (FileStream_9));
          }
          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_26, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
            MR_hl_field(0, Var_26, 1) = ((MR_Box) (read_profile__read_call_graph_4_p_0_3));
            MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_26, 3) = ((MR_Box) (FileStream_9));
          }
          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_30, 0) = ((MR_Box) (&read_profile_scalar_common_3[1]));
            MR_hl_field(0, Var_30, 1) = ((MR_Box) (read_profile__read_call_graph_4_p_0_4));
            MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_30, 3) = ((MR_Box) (FileStream_9));
            MR_hl_field(0, Var_30, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          io_combinator__maybe_error_sequence_11_15_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&profile__profile__type_ctor_info_initial_deep_0), Var_20, Var_21, Var_21, Var_21, Var_21, Var_21, Var_26, Var_26, Var_26, Var_26, Var_30, (MR_Word) (&read_profile_scalar_common_4[13]), &MaybeInitDeepHeader_12);
          if (((MR_tag((MR_Word) MaybeInitDeepHeader_12)) == (MR_Integer) 1))
            *MaybeInitDeep_6 = MaybeInitDeepHeader_12;
          else
          {
            MR_Word InitDeep_13 = ((MR_Word) ((MR_hl_field(0, MaybeInitDeepHeader_12, 0))));

            read_profile__read_nodes_outer_loop_6_p_0(FileStream_9, AcceptableVersion_92, InitDeep_13, MaybeInitDeep_6);
          }
        }
        else
          *MaybeInitDeep_6 = (MR_Word) ((MR_Word) (MR_mkword(1, &read_profile_scalar_common_6[0])));
      }
      else
        *MaybeInitDeep_6 = (MR_Word) ((MR_Word) (MR_mkword(1, &read_profile_scalar_common_6[1])));
    }
    mercury__io__close_binary_input_3_p_0(FileStream_9);
  }
}

static void MR_CALL 
read_profile__read_line_acc_6_p_0(
  MR_Word InputStream_7,
  MR_Integer Limit_8,
  MR_Word STATE_VARIABLE_RevChars_0_19,
  MR_Word * MaybeLine_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Limit_8 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word MaybeByte_12;

      mercury__io__read_byte_4_p_0(InputStream_7, &MaybeByte_12);
      switch (MR_tag((MR_Word) MaybeByte_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *MaybeLine_10 = (MR_Word) (MR_mkword(1, &read_profile_scalar_common_6[9]));
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(1, MaybeByte_12, 0))));
            MR_Char Char_14;

            succeeded = mercury__char__to_int_2_p_2(&Char_14, Byte_13);
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_RevChars_1_24;

              {
                STATE_VARIABLE_RevChars_1_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevChars_1_24, 0) = ((MR_Box) (MR_Word) (Char_14));
                MR_hl_field(1, STATE_VARIABLE_RevChars_1_24, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_19));
              }
              succeeded = (Char_14 == (MR_Char) 10);
              if (succeeded)
              {
                MR_Word Chars_15;
                MR_String Str_16;

                mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_RevChars_1_24, &Chars_15);
                mercury__string__from_char_list_2_p_0(Chars_15, &Str_16);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeLine_10 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Str_16));
                }
              }
              else
              {
                MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) Limit_8 - (MR_Unsigned) 1);
                MR_Integer next_value_of_Limit_8 = Var_25;
                MR_Word next_value_of_STATE_VARIABLE_RevChars_0_19 = STATE_VARIABLE_RevChars_1_24;

                // direct tailcall eliminated
                ;
                Limit_8 = next_value_of_Limit_8;
                STATE_VARIABLE_RevChars_0_19 = next_value_of_STATE_VARIABLE_RevChars_0_19;
                continue;
              }
            }
            else
              *MaybeLine_10 = (MR_Word) (MR_mkword(1, &read_profile_scalar_common_6[9]));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_17 = ((MR_Word) ((MR_hl_field(2, MaybeByte_12, 0))));
            MR_String Msg_18;

            mercury__io__error_message_2_p_0(Error_17, &Msg_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLine_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Msg_18));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Chars_30;
      MR_String Str_31;

      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_RevChars_0_19, &Chars_30);
      mercury__string__from_char_list_2_p_0(Chars_30, &Str_31);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeLine_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Str_31));
      }
    }
    break;
  }
}

static void MR_CALL 
read_profile__read_nodes_outer_loop_6_p_0(
  MR_Word InputStream_7,
  MR_Word Version_8,
  MR_Word InitDeep0_9,
  MR_Word * MaybeInitDeep_10)
{
  while (MR_TRUE)
  {
    MR_Word MaybeInitDeep0_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    read_profile__read_nodes_inner_loop_7_p_0(InputStream_7, Version_8, (MR_Integer) 50000, InitDeep0_9, &MaybeInitDeep0_12);
    switch (MR_tag((MR_Word) MaybeInitDeep0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word InitDeep_13 = (MR_Word) ((MR_Word) (MaybeInitDeep0_12));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeInitDeep_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (InitDeep_13));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InitDeep1_15 = (MR_Word) (MR_body((MR_Word) (MaybeInitDeep0_12), (MR_Integer) 1));
          MR_Word next_value_of_InitDeep0_9 = InitDeep1_15;

          // direct tailcall eliminated
          ;
          InitDeep0_9 = next_value_of_InitDeep0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Error_14 = ((MR_String) ((MR_hl_field(2, MaybeInitDeep0_12, 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeInitDeep_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_14));
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
read_profile__read_nodes_inner_loop_7_p_0(
  MR_Word InputStream_8,
  MR_Word Version_9,
  MR_Integer STATE_VARIABLE_NumLeft_0_40,
  MR_Word STATE_VARIABLE_InitDeep_0_41,
  MR_Word * MaybeInitDeep_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_NumLeft_0_40 < (MR_Integer) 1);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *MaybeInitDeep_12 = (MR_Word) (MR_mkword(1, (MR_Word) (STATE_VARIABLE_InitDeep_0_41)));
    else
    {
      MR_Word ProfileStats_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 0))));
      MR_Word MaybeByte_15;
      MR_Integer STATE_VARIABLE_NumLeft_1_45 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumLeft_0_40 - (MR_Unsigned) 1);

      mercury__io__read_byte_4_p_0(InputStream_8, &MaybeByte_15);
      switch (MR_tag((MR_Word) MaybeByte_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *MaybeInitDeep_12 = (MR_Word) ((MR_Word) (STATE_VARIABLE_InitDeep_0_41));
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_16 = ((MR_Integer) ((MR_hl_field(1, MaybeByte_15, 0))));
            MR_Word NextItem_17;

            succeeded = read_profile__is_next_item_token_2_p_0(Byte_16, &NextItem_17);
            if (succeeded)
              switch (NextItem_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case ((int) MR_deep_item_call_site_dynamic):
                  {
                    MR_Word MaybeCSD_18;

                    read_profile__read_call_site_dynamic_4_p_0(InputStream_8, &MaybeCSD_18);
                    if (((MR_tag((MR_Word) MaybeCSD_18)) == (MR_Integer) 1))
                    {
                      MR_String Error_23 = ((MR_String) ((MR_hl_field(1, MaybeCSD_18, 0))));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeInitDeep_12 = base;
                        MR_hl_field(2, base, 0) = ((MR_Box) (Error_23));
                      }
                    }
                    else
                    {
                      MR_Word CallSiteDynamic_19 = ((MR_Word) ((MR_hl_field(0, MaybeCSD_18, 0))));
                      MR_Integer CSDI_20 = ((MR_Integer) ((MR_hl_field(0, MaybeCSD_18, 1))));
                      MR_ArrayPtr CSDs0_21 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 2))));
                      MR_ArrayPtr CSDs_22;
                      MR_Word STATE_VARIABLE_InitDeep_1_49;
                      MR_ArrayPtr conv0_CSDs_22;
                      MR_Word Var_95;
                      MR_Word Var_96;
                      MR_ArrayPtr Var_98;
                      MR_ArrayPtr Var_99;
                      MR_ArrayPtr Var_100;
                      MR_Integer next_value_of_STATE_VARIABLE_NumLeft_0_40;
                      MR_Word next_value_of_STATE_VARIABLE_InitDeep_0_41;

                      read_profile__deep_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), CSDI_20, ((MR_Box) (CallSiteDynamic_19)), (MR_ArrayPtr) (CSDs0_21), &conv0_CSDs_22);
                      CSDs_22 = (MR_ArrayPtr) (conv0_CSDs_22);
                      Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 0))));
                      Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 1))));
                      Var_98 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 3))));
                      Var_99 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 4))));
                      Var_100 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 5))));
                      {
                        STATE_VARIABLE_InitDeep_1_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_49, 0) = ((MR_Box) (Var_95));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_49, 1) = ((MR_Box) (Var_96));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_49, 2) = ((MR_Box) (CSDs_22));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_49, 3) = ((MR_Box) (Var_98));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_49, 4) = ((MR_Box) (Var_99));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_49, 5) = ((MR_Box) (Var_100));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumLeft_0_40 = STATE_VARIABLE_NumLeft_1_45;
                      next_value_of_STATE_VARIABLE_InitDeep_0_41 = STATE_VARIABLE_InitDeep_1_49;
                      STATE_VARIABLE_NumLeft_0_40 = next_value_of_STATE_VARIABLE_NumLeft_0_40;
                      STATE_VARIABLE_InitDeep_0_41 = next_value_of_STATE_VARIABLE_InitDeep_0_41;
                      continue;
                    }
                  }
                  break;
                case ((int) MR_deep_item_call_site_static):
                  {
                    MR_Word MaybeCSS_29;

                    read_profile__read_call_site_static_5_p_0(InputStream_8, Version_9, &MaybeCSS_29);
                    if (((MR_tag((MR_Word) MaybeCSS_29)) == (MR_Integer) 1))
                    {
                      MR_String Error_72 = ((MR_String) ((MR_hl_field(1, MaybeCSS_29, 0))));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeInitDeep_12 = base;
                        MR_hl_field(2, base, 0) = ((MR_Box) (Error_72));
                      }
                    }
                    else
                    {
                      MR_Word CallSiteStatic_30;
                      MR_Integer CSSI_31;
                      MR_ArrayPtr CSSs0_32;
                      MR_ArrayPtr CSSs_33;
                      MR_Tuple Var_55 = ((MR_Tuple) ((MR_hl_field(0, MaybeCSS_29, 0))));
                      MR_Word STATE_VARIABLE_InitDeep_1_71;
                      MR_ArrayPtr conv1_CSSs_33;
                      MR_Word Var_117;
                      MR_Word Var_118;
                      MR_ArrayPtr Var_119;
                      MR_ArrayPtr Var_120;
                      MR_ArrayPtr Var_122;
                      MR_Integer next_value_of_STATE_VARIABLE_NumLeft_0_40;
                      MR_Word next_value_of_STATE_VARIABLE_InitDeep_0_41;

                      CallSiteStatic_30 = ((MR_Word) ((MR_hl_field(0, Var_55, 0))));
                      CSSI_31 = ((MR_Integer) ((MR_hl_field(0, Var_55, 1))));
                      CSSs0_32 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 4))));
                      read_profile__deep_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_0), CSSI_31, ((MR_Box) (CallSiteStatic_30)), (MR_ArrayPtr) (CSSs0_32), &conv1_CSSs_33);
                      CSSs_33 = (MR_ArrayPtr) (conv1_CSSs_33);
                      Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 0))));
                      Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 1))));
                      Var_119 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 2))));
                      Var_120 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 3))));
                      Var_122 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 5))));
                      {
                        STATE_VARIABLE_InitDeep_1_71 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_71, 0) = ((MR_Box) (Var_117));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_71, 1) = ((MR_Box) (Var_118));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_71, 2) = ((MR_Box) (Var_119));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_71, 3) = ((MR_Box) (Var_120));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_71, 4) = ((MR_Box) (CSSs_33));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_71, 5) = ((MR_Box) (Var_122));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumLeft_0_40 = STATE_VARIABLE_NumLeft_1_45;
                      next_value_of_STATE_VARIABLE_InitDeep_0_41 = STATE_VARIABLE_InitDeep_1_71;
                      STATE_VARIABLE_NumLeft_0_40 = next_value_of_STATE_VARIABLE_NumLeft_0_40;
                      STATE_VARIABLE_InitDeep_0_41 = next_value_of_STATE_VARIABLE_InitDeep_0_41;
                      continue;
                    }
                  }
                  break;
                case ((int) MR_deep_item_end):
                  *MaybeInitDeep_12 = (MR_Word) ((MR_Word) (STATE_VARIABLE_InitDeep_0_41));
                  break;
                case ((int) MR_deep_item_proc_dynamic):
                  {
                    MR_Word MaybePD_24;

                    read_profile__read_proc_dynamic_5_p_0(InputStream_8, ProfileStats_14, &MaybePD_24);
                    if (((MR_tag((MR_Word) MaybePD_24)) == (MR_Integer) 1))
                    {
                      MR_String Error_66 = ((MR_String) ((MR_hl_field(1, MaybePD_24, 0))));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeInitDeep_12 = base;
                        MR_hl_field(2, base, 0) = ((MR_Box) (Error_66));
                      }
                    }
                    else
                    {
                      MR_Word ProcDynamic_25 = ((MR_Word) ((MR_hl_field(0, MaybePD_24, 0))));
                      MR_Integer PDI_26 = ((MR_Integer) ((MR_hl_field(0, MaybePD_24, 1))));
                      MR_ArrayPtr PDs0_27 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 3))));
                      MR_ArrayPtr PDs_28;
                      MR_Word STATE_VARIABLE_InitDeep_1_65;
                      MR_ArrayPtr conv2_PDs_28;
                      MR_Word Var_106;
                      MR_Word Var_107;
                      MR_ArrayPtr Var_108;
                      MR_ArrayPtr Var_110;
                      MR_ArrayPtr Var_111;
                      MR_Integer next_value_of_STATE_VARIABLE_NumLeft_0_40;
                      MR_Word next_value_of_STATE_VARIABLE_InitDeep_0_41;

                      read_profile__deep_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), PDI_26, ((MR_Box) (ProcDynamic_25)), (MR_ArrayPtr) (PDs0_27), &conv2_PDs_28);
                      PDs_28 = (MR_ArrayPtr) (conv2_PDs_28);
                      Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 0))));
                      Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 1))));
                      Var_108 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 2))));
                      Var_110 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 4))));
                      Var_111 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 5))));
                      {
                        STATE_VARIABLE_InitDeep_1_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_65, 0) = ((MR_Box) (Var_106));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_65, 1) = ((MR_Box) (Var_107));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_65, 2) = ((MR_Box) (Var_108));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_65, 3) = ((MR_Box) (PDs_28));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_65, 4) = ((MR_Box) (Var_110));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_65, 5) = ((MR_Box) (Var_111));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumLeft_0_40 = STATE_VARIABLE_NumLeft_1_45;
                      next_value_of_STATE_VARIABLE_InitDeep_0_41 = STATE_VARIABLE_InitDeep_1_65;
                      STATE_VARIABLE_NumLeft_0_40 = next_value_of_STATE_VARIABLE_NumLeft_0_40;
                      STATE_VARIABLE_InitDeep_0_41 = next_value_of_STATE_VARIABLE_InitDeep_0_41;
                      continue;
                    }
                  }
                  break;
                case ((int) MR_deep_item_proc_static):
                  {
                    MR_Word MaybePS_34;

                    read_profile__read_proc_static_5_p_0(InputStream_8, ProfileStats_14, &MaybePS_34);
                    if (((MR_tag((MR_Word) MaybePS_34)) == (MR_Integer) 1))
                    {
                      MR_String Error_78 = ((MR_String) ((MR_hl_field(1, MaybePS_34, 0))));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeInitDeep_12 = base;
                        MR_hl_field(2, base, 0) = ((MR_Box) (Error_78));
                      }
                    }
                    else
                    {
                      MR_Word ProcStatic_35 = ((MR_Word) ((MR_hl_field(0, MaybePS_34, 0))));
                      MR_Integer PSI_36 = ((MR_Integer) ((MR_hl_field(0, MaybePS_34, 1))));
                      MR_ArrayPtr PSs0_37 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 5))));
                      MR_ArrayPtr PSs_38;
                      MR_Word STATE_VARIABLE_InitDeep_1_77;
                      MR_ArrayPtr conv3_PSs_38;
                      MR_Word Var_128;
                      MR_Word Var_129;
                      MR_ArrayPtr Var_130;
                      MR_ArrayPtr Var_131;
                      MR_ArrayPtr Var_132;
                      MR_Integer next_value_of_STATE_VARIABLE_NumLeft_0_40;
                      MR_Word next_value_of_STATE_VARIABLE_InitDeep_0_41;

                      read_profile__deep_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), PSI_36, ((MR_Box) (ProcStatic_35)), (MR_ArrayPtr) (PSs0_37), &conv3_PSs_38);
                      PSs_38 = (MR_ArrayPtr) (conv3_PSs_38);
                      Var_128 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 0))));
                      Var_129 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 1))));
                      Var_130 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 2))));
                      Var_131 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 3))));
                      Var_132 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_InitDeep_0_41, 4))));
                      {
                        STATE_VARIABLE_InitDeep_1_77 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_77, 0) = ((MR_Box) (Var_128));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_77, 1) = ((MR_Box) (Var_129));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_77, 2) = ((MR_Box) (Var_130));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_77, 3) = ((MR_Box) (Var_131));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_77, 4) = ((MR_Box) (Var_132));
                        MR_hl_field(0, STATE_VARIABLE_InitDeep_1_77, 5) = ((MR_Box) (PSs_38));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_STATE_VARIABLE_NumLeft_0_40 = STATE_VARIABLE_NumLeft_1_45;
                      next_value_of_STATE_VARIABLE_InitDeep_0_41 = STATE_VARIABLE_InitDeep_1_77;
                      STATE_VARIABLE_NumLeft_0_40 = next_value_of_STATE_VARIABLE_NumLeft_0_40;
                      STATE_VARIABLE_InitDeep_0_41 = next_value_of_STATE_VARIABLE_InitDeep_0_41;
                      continue;
                    }
                  }
                  break;
              }
            else
            {
              MR_String Msg_39;
              MR_String Var_138;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Byte_16, &Var_138);
              Msg_39 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected token ", Var_138);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInitDeep_12 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (Msg_39));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_83 = ((MR_Word) ((MR_hl_field(2, MaybeByte_15, 0))));
            MR_String Msg_84;

            mercury__io__error_message_2_p_0(Error_83, &Msg_84);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInitDeep_12 = base;
              MR_hl_field(2, base, 0) = ((MR_Box) (Msg_84));
            }
          }
          break;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
read_profile__is_next_item_token_2_p_0(
  MR_Integer Int_1,
  MR_Word * NextItem_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL read_profile__is_next_item_token_2_p_0

	MR_Integer Int;
	MR_Word NextItem;
	MR_bool SUCCESS_INDICATOR;

	Int = Int_1 ;
		{

    NextItem = (MR_DeepProfNextItem) Int;

    switch (NextItem) {
        case MR_deep_item_end:
        case MR_deep_item_call_site_static:
        case MR_deep_item_call_site_dynamic:
        case MR_deep_item_proc_static:
        case MR_deep_item_proc_dynamic:
            SUCCESS_INDICATOR = MR_TRUE;
            break;

        default:
            SUCCESS_INDICATOR = MR_FALSE;
            break;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*NextItem_2  = NextItem;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

static void MR_CALL 
read_profile__deep_insert_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Integer Ind_5,
  MR_Box Item_6,
  MR_ArrayPtr A0_7,
  MR_ArrayPtr * A_8)
{
  MR_bool succeeded;
  MR_Integer Max_9;

  mercury__array__max_2_p_0(TypeInfo_for_T_12, A0_7, &Max_9);
  succeeded = (Ind_5 > Max_9);
  if (succeeded)
    {
      mercury__require__error_1_p_0((MR_String) "deep_insert: array bounds violation");
      return;
    }
  else
  {
    MR_Word TypeInfo_14_14;
    MR_ArrayPtr Var_11;
    MR_Box conv0_Var_11;

    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
      MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    conv0_Var_11 = array_util__u_1_f_0(TypeInfo_14_14, ((MR_Box) (A0_7)));
    Var_11 = ((MR_ArrayPtr) (conv0_Var_11));
    mercury__array__set_4_p_0(TypeInfo_for_T_12, Ind_5, Item_6, Var_11, A_8);
  }
}

static void MR_CALL 
read_profile__read_call_site_dynamic_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeCSD_6)
{
  MR_Word MaybeCSDI_10;

  read_profile__read_num_acc_5_p_0(InputStream_5, (MR_Integer) 0, &MaybeCSDI_10);
  if (((MR_tag((MR_Word) MaybeCSDI_10)) == (MR_Integer) 1))
  {
    MR_String Error_44 = ((MR_String) ((MR_hl_field(1, MaybeCSDI_10, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeCSD_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_44));
    }
  }
  else
  {
    MR_Integer CSDI_11 = ((MR_Integer) ((MR_hl_field(0, MaybeCSDI_10, 0))));
    MR_Word MaybePDI_12;

    read_profile__read_num_acc_5_p_0(InputStream_5, (MR_Integer) 0, &MaybePDI_12);
    if (((MR_tag((MR_Word) MaybePDI_12)) == (MR_Integer) 1))
    {
      MR_String Error_43 = ((MR_String) ((MR_hl_field(1, MaybePDI_12, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCSD_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Error_43));
      }
    }
    else
    {
      MR_Integer PDI_13 = ((MR_Integer) ((MR_hl_field(0, MaybePDI_12, 0))));
      MR_Word MaybeProfile_14;

      read_profile__read_profile_4_p_0(InputStream_5, &MaybeProfile_14);
      if (((MR_tag((MR_Word) MaybeProfile_14)) == (MR_Integer) 1))
      {
        MR_String Error_19 = ((MR_String) ((MR_hl_field(1, MaybeProfile_14, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeCSD_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Error_19));
        }
      }
      else
      {
        MR_Word Profile_15 = ((MR_Word) ((MR_hl_field(0, MaybeProfile_14, 0))));
        MR_Word PDPtr_16 = (MR_Word) (PDI_13);
        MR_Word CallSiteDynamic_18;

        {
          CallSiteDynamic_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CallSiteDynamic_18, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
          MR_hl_field(0, CallSiteDynamic_18, 1) = ((MR_Box) (PDPtr_16));
          MR_hl_field(0, CallSiteDynamic_18, 2) = ((MR_Box) (Profile_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCSD_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (CallSiteDynamic_18));
          MR_hl_field(0, base, 1) = ((MR_Box) (CSDI_11));
        }
      }
    }
  }
}

static void MR_CALL 
read_profile__read_profile_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeProfile_6)
{
  MR_Word MaybeMask_8;

  read_profile__read_num_acc_5_p_0(InputStream_5, (MR_Integer) 0, &MaybeMask_8);
  if (((MR_tag((MR_Word) MaybeMask_8)) == (MR_Integer) 1))
    *MaybeProfile_6 = (MR_Word) (MaybeMask_8);
  else
  {
    MR_Integer Mask_9 = ((MR_Integer) ((MR_hl_field(0, MaybeMask_8, 0))));
    MR_Integer Exits_11;
    MR_Integer Fails_12;
    MR_Integer Redos_13;
    MR_Integer Excps_14;
    MR_Integer Quanta_15;
    MR_Integer CallSeqs_16;
    MR_Integer Allocs_17;
    MR_Integer Words_18;
    MR_Word LastMaybeError_19;
    MR_Word STATE_VARIABLE_MaybeError_2_26;
    MR_Word STATE_VARIABLE_MaybeError_3_29;
    MR_Word STATE_VARIABLE_MaybeError_4_32;
    MR_Word STATE_VARIABLE_MaybeError_5_35;
    MR_Word STATE_VARIABLE_MaybeError_6_38;
    MR_Word STATE_VARIABLE_MaybeError_7_41;
    MR_Word STATE_VARIABLE_MaybeError_8_44;

    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 2, &Exits_11, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_MaybeError_2_26);
    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 4, &Fails_12, STATE_VARIABLE_MaybeError_2_26, &STATE_VARIABLE_MaybeError_3_29);
    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 64, &Redos_13, STATE_VARIABLE_MaybeError_3_29, &STATE_VARIABLE_MaybeError_4_32);
    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 128, &Excps_14, STATE_VARIABLE_MaybeError_4_32, &STATE_VARIABLE_MaybeError_5_35);
    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 256, &Quanta_15, STATE_VARIABLE_MaybeError_5_35, &STATE_VARIABLE_MaybeError_6_38);
    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 8, &CallSeqs_16, STATE_VARIABLE_MaybeError_6_38, &STATE_VARIABLE_MaybeError_7_41);
    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 16, &Allocs_17, STATE_VARIABLE_MaybeError_7_41, &STATE_VARIABLE_MaybeError_8_44);
    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 32, &Words_18, STATE_VARIABLE_MaybeError_8_44, &LastMaybeError_19);
    if ((LastMaybeError_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_49;

      Var_49 = measurements__compress_profile_8_f_0(Exits_11, Fails_12, Redos_13, Excps_14, Quanta_15, CallSeqs_16, Allocs_17, Words_18);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeProfile_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_49));
      }
    }
    else
    {
      MR_String Error_20 = ((MR_String) ((MR_hl_field(1, LastMaybeError_19, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeProfile_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Error_20));
      }
    }
  }
}

static void MR_CALL 
read_profile__maybe_read_num_handle_error_8_p_0(
  MR_Word InputStream_9,
  MR_Integer MaskWord_10,
  MR_Integer MaskValue_11,
  MR_Integer * Num_12,
  MR_Word STATE_VARIABLE_MaybeError_0_17,
  MR_Word * STATE_VARIABLE_MaybeError_18)
{
  MR_bool succeeded;
  MR_Integer Var_21 = (MaskWord_10 & MaskValue_11);

  succeeded = (Var_21 != (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word MaybeNum_15;

    read_profile__read_num_acc_5_p_0(InputStream_9, (MR_Integer) 0, &MaybeNum_15);
    if (((MR_tag((MR_Word) MaybeNum_15)) == (MR_Integer) 1))
    {
      MR_String Error_16 = ((MR_String) ((MR_hl_field(1, MaybeNum_15, 0))));

      *Num_12 = (MR_Integer) 0;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_MaybeError_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Error_16));
      }
    }
    else
    {
      *Num_12 = ((MR_Integer) ((MR_hl_field(0, MaybeNum_15, 0))));
      *STATE_VARIABLE_MaybeError_18 = STATE_VARIABLE_MaybeError_0_17;
    }
  }
  else
  {
    *Num_12 = (MR_Integer) 0;
    *STATE_VARIABLE_MaybeError_18 = STATE_VARIABLE_MaybeError_0_17;
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_LambdaHeadVar__3_55;

  read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_LambdaHeadVar__3_55);
  *wrapper_arg_3 = ((MR_Box) (conv7_LambdaHeadVar__3_55));
}

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__3_93;

  read_profile__IntroducedFrom__pred__read_proc_dynamic__899__1_5_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv6_HeadVar__3_93);
  *wrapper_arg_1 = ((MR_Box) (conv6_HeadVar__3_93));
}

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_MaybeSlot_6;

  read_profile__read_call_site_slot_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv5_MaybeSlot_6);
  *wrapper_arg_1 = ((MR_Box) (conv5_MaybeSlot_6));
}

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_MaybeCoveragePoints_8;

  read_profile__maybe_read_pd_coverage_points_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv4_MaybeCoveragePoints_8);
  *wrapper_arg_1 = ((MR_Box) (conv4_MaybeCoveragePoints_8));
}

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__4_45;

  read_profile__IntroducedFrom__pred__read_proc_dynamic__887__1_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv3_LambdaHeadVar__4_45);
  *wrapper_arg_4 = ((MR_Box) (conv3_LambdaHeadVar__4_45));
}

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_MaybeNum_6;

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv2_MaybeNum_6);
  *wrapper_arg_1 = ((MR_Box) (conv2_MaybeNum_6));
}

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybePtr_8;

  read_profile__read_ptr_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv1_MaybePtr_8);
  *wrapper_arg_1 = ((MR_Box) (conv1_MaybePtr_8));
}

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybePtr_8;

  read_profile__read_ptr_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv0_MaybePtr_8);
  *wrapper_arg_1 = ((MR_Box) (conv0_MaybePtr_8));
}

static void MR_CALL 
read_profile__read_proc_dynamic_5_p_0(
  MR_Word InputStream_6,
  MR_Word ProfileStats_7,
  MR_Word * MaybePD_8)
{
  MR_Word MaybePDHeader_16;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;

  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&read_profile_scalar_common_3[1]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (InputStream_6));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&read_profile_scalar_common_3[1]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_2));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (InputStream_6));
    MR_hl_field(0, Var_36, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_3));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_37, 3) = ((MR_Box) (InputStream_6));
  }
  io_combinator__maybe_error_sequence_3_7_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&read_profile_scalar_common_5[0]), Var_35, Var_36, Var_37, (MR_Word) (&read_profile_scalar_common_4[11]), &MaybePDHeader_16);
  if (((MR_tag((MR_Word) MaybePDHeader_16)) == (MR_Integer) 1))
  {
    MR_String Error_78 = ((MR_String) ((MR_hl_field(1, MaybePDHeader_16, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybePD_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_78));
    }
  }
  else
  {
    MR_Integer PDI_17;
    MR_Integer PSI_18;
    MR_Integer N_19;
    MR_Word MaybeCPsAndSlots_23;
    MR_Tuple Var_47 = ((MR_Tuple) ((MR_hl_field(0, MaybePDHeader_16, 0))));
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_52;

    PDI_17 = ((MR_Integer) ((MR_hl_field(0, Var_47, 0))));
    PSI_18 = ((MR_Integer) ((MR_hl_field(0, Var_47, 1))));
    N_19 = ((MR_Integer) ((MR_hl_field(0, Var_47, 2))));
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (&read_profile_scalar_common_3[3]));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_5));
      MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_48, 3) = ((MR_Box) (InputStream_6));
      MR_hl_field(0, Var_48, 4) = ((MR_Box) (ProfileStats_7));
    }
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_52, 0) = ((MR_Box) (&read_profile_scalar_common_7[7]));
      MR_hl_field(0, Var_52, 1) = ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_6));
      MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_52, 3) = ((MR_Box) (InputStream_6));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (&read_profile_scalar_common_3[4]));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_7));
      MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_49, 3) = ((MR_Box) (N_19));
      MR_hl_field(0, Var_49, 4) = ((MR_Box) (Var_52));
    }
    io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) (&read_profile_scalar_common_1[3]), (MR_Word) (&read_profile_scalar_common_1[4]), (MR_Word) (&read_profile_scalar_common_2[1]), Var_48, Var_49, (MR_Word) (&read_profile_scalar_common_4[12]), &MaybeCPsAndSlots_23);
    if (((MR_tag((MR_Word) MaybeCPsAndSlots_23)) == (MR_Integer) 1))
    {
      MR_String Error_28 = ((MR_String) ((MR_hl_field(1, MaybeCPsAndSlots_23, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePD_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Error_28));
      }
    }
    else
    {
      MR_Word MaybeCPs_24;
      MR_Word Refs_25;
      MR_Word PSPtr_26;
      MR_Word ProcDynamic_27;
      MR_Tuple Var_57 = ((MR_Tuple) ((MR_hl_field(0, MaybeCPsAndSlots_23, 0))));
      MR_ArrayPtr Var_58;
      MR_ArrayPtr conv8_Var_58;

      MaybeCPs_24 = ((MR_Word) ((MR_hl_field(0, Var_57, 0))));
      Refs_25 = ((MR_Word) ((MR_hl_field(0, Var_57, 1))));
      PSPtr_26 = (MR_Word) (PSI_18);
      conv8_Var_58 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), Refs_25);
      Var_58 = (MR_ArrayPtr) (conv8_Var_58);
      {
        ProcDynamic_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ProcDynamic_27, 0) = ((MR_Box) (PSPtr_26));
        MR_hl_field(0, ProcDynamic_27, 1) = ((MR_Box) (Var_58));
        MR_hl_field(0, ProcDynamic_27, 2) = ((MR_Box) (MaybeCPs_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *MaybePD_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (ProcDynamic_27));
        MR_hl_field(0, base, 1) = ((MR_Box) (PDI_17));
      }
    }
  }
}

static MR_Box MR_CALL 
read_profile__read_proc_static_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = read_profile__make_cssptr_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
read_profile__read_proc_static_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__7_60;

  read_profile__IntroducedFrom__pred__read_proc_static__473__1_7_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)), ((MR_Integer) (wrapper_arg_4)), ((MR_Integer) (wrapper_arg_5)), ((MR_Integer) (wrapper_arg_6)), &conv5_LambdaHeadVar__7_60);
  *wrapper_arg_7 = ((MR_Box) (conv5_LambdaHeadVar__7_60));
}

static void MR_CALL 
read_profile__read_proc_static_5_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_MaybeByte_6;

  read_profile__read_deep_byte_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv4_MaybeByte_6);
  *wrapper_arg_1 = ((MR_Box) (conv4_MaybeByte_6));
}

static void MR_CALL 
read_profile__read_proc_static_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_MaybeNum_6;

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv3_MaybeNum_6);
  *wrapper_arg_1 = ((MR_Box) (conv3_MaybeNum_6));
}

static void MR_CALL 
read_profile__read_proc_static_5_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_MaybeStr_6;

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv2_MaybeStr_6);
  *wrapper_arg_1 = ((MR_Box) (conv2_MaybeStr_6));
}

static void MR_CALL 
read_profile__read_proc_static_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeProcId_6;

  read_profile__read_proc_id_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv1_MaybeProcId_6);
  *wrapper_arg_1 = ((MR_Box) (conv1_MaybeProcId_6));
}

static void MR_CALL 
read_profile__read_proc_static_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybePtr_8;

  read_profile__read_ptr_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv0_MaybePtr_8);
  *wrapper_arg_1 = ((MR_Box) (conv0_MaybePtr_8));
}

static void MR_CALL 
read_profile__read_proc_static_5_p_0(
  MR_Word InputStream_6,
  MR_Word ProfileStats_7,
  MR_Word * MaybePS_8)
{
  MR_bool succeeded;
  MR_Word MaybeProcId_19;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;

  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&read_profile_scalar_common_3[1]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (read_profile__read_proc_static_5_p_0_1));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (InputStream_6));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (&read_profile_scalar_common_7[5]));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (read_profile__read_proc_static_5_p_0_2));
    MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_46, 3) = ((MR_Box) (InputStream_6));
  }
  {
    Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_47, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
    MR_hl_field(0, Var_47, 1) = ((MR_Box) (read_profile__read_proc_static_5_p_0_3));
    MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_47, 3) = ((MR_Box) (InputStream_6));
  }
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (read_profile__read_proc_static_5_p_0_4));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_48, 3) = ((MR_Box) (InputStream_6));
  }
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (read_profile__read_proc_static_5_p_0_5));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (InputStream_6));
  }
  io_combinator__maybe_error_sequence_6_10_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&read_profile_scalar_common_3[0]), Var_45, Var_46, Var_47, Var_48, Var_49, Var_48, (MR_Word) (&read_profile_scalar_common_4[9]), &MaybeProcId_19);
  if (((MR_tag((MR_Word) MaybeProcId_19)) == (MR_Integer) 1))
  {
    MR_String Error_91 = ((MR_String) ((MR_hl_field(1, MaybeProcId_19, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybePS_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_91));
    }
  }
  else
  {
    MR_Integer PSI_20;
    MR_Word Id_21;
    MR_String FileName_22;
    MR_Integer LineNumber_23;
    MR_Integer Interface_24;
    MR_Integer NCS_25;
    MR_Tuple Var_62 = ((MR_Tuple) ((MR_hl_field(0, MaybeProcId_19, 0))));
    MR_Word MaybeRevItems_118;

    PSI_20 = ((MR_Integer) ((MR_hl_field(0, Var_62, 0))));
    Id_21 = ((MR_Word) ((MR_hl_field(0, Var_62, 1))));
    FileName_22 = ((MR_String) ((MR_hl_field(0, Var_62, 2))));
    LineNumber_23 = ((MR_Integer) ((MR_hl_field(0, Var_62, 3))));
    Interface_24 = ((MR_Integer) ((MR_hl_field(0, Var_62, 4))));
    NCS_25 = ((MR_Integer) ((MR_hl_field(0, Var_62, 5))));
    read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_53_95_95_91_50_44_32_52_93_95_48_6_p_0(InputStream_6, NCS_25, (MR_Word) ((MR_Unsigned) 0U), &MaybeRevItems_118);
    if (((MR_tag((MR_Word) MaybeRevItems_118)) == (MR_Integer) 1))
    {
      MR_String Error_90 = ((MR_String) ((MR_hl_field(1, MaybeRevItems_118, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePS_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Error_90));
      }
    }
    else
    {
      MR_Word CSSIs_27;
      MR_Word MaybeCoveragePoints_28;
      MR_Word RevItems_119 = ((MR_Word) ((MR_hl_field(0, MaybeRevItems_118, 0))));

      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevItems_119, &CSSIs_27);
      read_profile__maybe_read_ps_coverage_points_5_p_0(InputStream_6, ProfileStats_7, &MaybeCoveragePoints_28);
      if (((MR_tag((MR_Word) MaybeCoveragePoints_28)) == (MR_Integer) 1))
      {
        MR_String Error_38 = ((MR_String) ((MR_hl_field(1, MaybeCoveragePoints_28, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePS_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Error_38));
        }
      }
      else
      {
        MR_ArrayPtr CPInfos_29;
        MR_Word MaybeCPs_30;
        MR_Word CSSPtrs_31;
        MR_String DeclModule_32;
        MR_String UnQualRefinedStr_33;
        MR_String QualRefinedStr_34;
        MR_String RawStr_35;
        MR_Word IsInInterface_36;
        MR_Word ProcStatic_37;
        MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, MaybeCoveragePoints_28, 0))));
        MR_ArrayPtr Var_69;
        MR_ArrayPtr conv7_Var_69;

        CPInfos_29 = ((MR_ArrayPtr) ((MR_hl_field(0, Var_67, 0))));
        MaybeCPs_30 = ((MR_Word) ((MR_hl_field(0, Var_67, 1))));
        CSSPtrs_31 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) (&read_profile_scalar_common_4[10]), CSSIs_27);
        DeclModule_32 = profile__decl_module_1_f_0(Id_21);
        read_profile__create_refined_proc_ids_3_p_0(Id_21, &UnQualRefinedStr_33, &QualRefinedStr_34);
        RawStr_35 = read_profile__raw_proc_id_to_string_1_f_0(Id_21);
        succeeded = (Interface_24 == (MR_Integer) 0);
        if (succeeded)
          IsInInterface_36 = (MR_Integer) 0;
        else
          IsInInterface_36 = (MR_Integer) 1;
        conv7_Var_69 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), CSSPtrs_31);
        Var_69 = (MR_ArrayPtr) (conv7_Var_69);
        {
          ProcStatic_37 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProcStatic_37, 0) = ((MR_Box) (Id_21));
          MR_hl_field(0, ProcStatic_37, 1) = ((MR_Box) (DeclModule_32));
          MR_hl_field(0, ProcStatic_37, 2) = ((MR_Box) (UnQualRefinedStr_33));
          MR_hl_field(0, ProcStatic_37, 3) = ((MR_Box) (QualRefinedStr_34));
          MR_hl_field(0, ProcStatic_37, 4) = ((MR_Box) (RawStr_35));
          MR_hl_field(0, ProcStatic_37, 5) = ((MR_Box) (FileName_22));
          MR_hl_field(0, ProcStatic_37, 6) = ((MR_Box) (LineNumber_23));
          MR_hl_field(0, ProcStatic_37, 7) = (MR_Box) ((MR_Unsigned) (IsInInterface_36));
          MR_hl_field(0, ProcStatic_37, 8) = ((MR_Box) (Var_69));
          MR_hl_field(0, ProcStatic_37, 9) = ((MR_Box) (CPInfos_29));
          MR_hl_field(0, ProcStatic_37, 10) = ((MR_Box) (MaybeCPs_30));
          MR_hl_field(0, ProcStatic_37, 11) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *MaybePS_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (ProcStatic_37));
          MR_hl_field(0, base, 1) = ((MR_Box) (PSI_20));
        }
      }
    }
  }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_53_95_95_91_50_44_32_52_93_95_48_6_p_0(
  MR_Word Var_24,
  MR_Integer N_7,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_7 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItems_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (RevItems0_9));
      }
    else
    {
      MR_Word MaybeItem_12;

      read_profile__read_num_acc_5_p_0(Var_24, (MR_Integer) 0, &MaybeItem_12);
      if (((MR_tag((MR_Word) MaybeItem_12)) == (MR_Integer) 1))
        *MaybeItems_10 = (MR_Word) (MaybeItem_12);
      else
      {
        MR_Integer Item_13 = ((MR_Integer) ((MR_hl_field(0, MaybeItem_12, 0))));
        MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) N_7 - (MR_Unsigned) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_7;
        MR_Word next_value_of_RevItems0_9;

        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = ((MR_Box) (Item_13));
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (RevItems0_9));
        }
        // direct tailcall eliminated
        ;
        next_value_of_N_7 = Var_19;
        next_value_of_RevItems0_9 = Var_20;
        N_7 = next_value_of_N_7;
        RevItems0_9 = next_value_of_RevItems0_9;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
read_profile__create_refined_proc_ids_3_p_0(
  MR_Word ProcLabel_4,
  MR_String * UnQualName_5,
  MR_String * QualName_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) ProcLabel_4)) == (MR_Integer) 0))
  {
    MR_Word PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(0, ProcLabel_4, 0))) & (MR_Integer) 1);
    MR_String DeclModule_21 = ((MR_String) ((MR_hl_field(0, ProcLabel_4, 1))));
    MR_String ProcName_22 = ((MR_String) ((MR_hl_field(0, ProcLabel_4, 3))));
    MR_String PlusOne_23;
    MR_String Var_90;
    MR_Integer Arity_107 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_4, 4))));
    MR_Integer Mode_108 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_4, 5))));
    MR_Word ProcNameChars_30;
    MR_String SpecInfo_31;
    MR_String ProcName1_24;
    MR_String ProcName2_26;
    MR_Word ProcName2Chars_29;
    MR_String ProcName2A_25;
    MR_String Var_50;

    PlusOne_23 = read_profile__plus_one_for_function_1_f_0(PredOrFunc_20);
    succeeded = mercury__string__append_3_p_1((MR_String) "TypeSpecOf__", &ProcName1_24, ProcName_22);
    if (succeeded)
    {
      Var_50 = (MR_String) "pred__";
      succeeded = mercury__string__append_3_p_1(Var_50, &ProcName2A_25, ProcName1_24);
      if (succeeded)
        ProcName2_26 = ProcName2A_25;
      else
      {
        MR_String ProcName2B_27;

        succeeded = mercury__string__append_3_p_1((MR_String) "func__", &ProcName2B_27, ProcName1_24);
        if (succeeded)
          ProcName2_26 = ProcName2B_27;
        else
        {
          MR_String ProcName2C_28;

          succeeded = mercury__string__append_3_p_1((MR_String) "pred_or_func__", &ProcName2C_28, ProcName1_24);
          if (succeeded)
            ProcName2_26 = ProcName2C_28;
          else
            {
              mercury__require__error_1_p_0((MR_String) "typespec: neither pred nor func");
              return;
            }
        }
      }
      mercury__string__to_char_list_2_p_0(ProcName2_26, &ProcName2Chars_29);
      succeeded = read_profile__fix_type_spec_suffix_3_p_0(ProcName2Chars_29, &ProcNameChars_30, &SpecInfo_31);
    }
    if (succeeded)
    {
      MR_String RefinedProcName_32;
      MR_String Var_110;
      MR_String Var_112;
      MR_String Var_113;
      MR_String Var_120;
      MR_String Var_122;
      MR_String Var_123;
      MR_String Var_124;
      MR_String Var_131;
      MR_String Var_133;

      RefinedProcName_32 = mercury__string__from_char_list_1_f_0(ProcNameChars_30);
      Var_110 = mercury__string__f_43_43_2_f_0(SpecInfo_31, (MR_String) "]");
      Var_112 = mercury__string__f_43_43_2_f_0((MR_String) " [", Var_110);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Mode_108, &Var_113);
      Var_120 = mercury__string__f_43_43_2_f_0(Var_113, Var_112);
      Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_120);
      Var_123 = mercury__string__f_43_43_2_f_0(PlusOne_23, Var_122);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Arity_107, &Var_124);
      Var_131 = mercury__string__f_43_43_2_f_0(Var_124, Var_123);
      Var_133 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_131);
      *UnQualName_5 = mercury__string__f_43_43_2_f_0(RefinedProcName_32, Var_133);
    }
    else
    {
      MR_Word ContainingNameChars_34;
      MR_Word LineNumberChars_35;
      MR_Word Segments_33;
      MR_String ProcName1_96;
      MR_String ProcName2_98;
      MR_Word ProcName2Chars_100;
      MR_String ProcName2A_94;
      MR_String Var_67;

      succeeded = mercury__string__append_3_p_1((MR_String) "IntroducedFrom__", &ProcName1_96, ProcName_22);
      if (succeeded)
      {
        Var_67 = (MR_String) "pred__";
        succeeded = mercury__string__append_3_p_1(Var_67, &ProcName2A_94, ProcName1_96);
        if (succeeded)
          ProcName2_98 = ProcName2A_94;
        else
        {
          MR_String ProcName2B_93;

          succeeded = mercury__string__append_3_p_1((MR_String) "func__", &ProcName2B_93, ProcName1_96);
          if (succeeded)
            ProcName2_98 = ProcName2B_93;
          else
            {
              mercury__require__error_1_p_0((MR_String) "lambda: neither pred nor func");
              return;
            }
        }
        mercury__string__to_char_list_2_p_0(ProcName2_98, &ProcName2Chars_100);
        read_profile__split_lambda_name_2_p_0(ProcName2Chars_100, &Segments_33);
        succeeded = read_profile__glue_lambda_name_3_p_0(Segments_33, &ContainingNameChars_34, &LineNumberChars_35);
      }
      if (succeeded)
      {
        MR_String ContainingName_36;
        MR_String LineNumber_37;
        MR_String Var_134;
        MR_String Var_141;
        MR_String Var_143;
        MR_String Var_144;
        MR_String Var_146;

        mercury__string__from_char_list_2_p_0(ContainingNameChars_34, &ContainingName_36);
        mercury__string__from_char_list_2_p_0(LineNumberChars_35, &LineNumber_37);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Arity_107, &Var_134);
        Var_141 = mercury__string__f_43_43_2_f_0(Var_134, PlusOne_23);
        Var_143 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_141);
        Var_144 = mercury__string__f_43_43_2_f_0(LineNumber_37, Var_143);
        Var_146 = mercury__string__f_43_43_2_f_0((MR_String) " lambda line ", Var_144);
        *UnQualName_5 = mercury__string__f_43_43_2_f_0(ContainingName_36, Var_146);
      }
      else
      {
        MR_String Var_147;
        MR_String Var_155;
        MR_String Var_156;
        MR_String Var_157;
        MR_String Var_164;
        MR_String Var_166;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Mode_108, &Var_147);
        Var_155 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_147);
        Var_156 = mercury__string__f_43_43_2_f_0(PlusOne_23, Var_155);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Arity_107, &Var_157);
        Var_164 = mercury__string__f_43_43_2_f_0(Var_157, Var_156);
        Var_166 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_164);
        *UnQualName_5 = mercury__string__f_43_43_2_f_0(ProcName_22, Var_166);
      }
    }
    Var_90 = mercury__string__f_43_43_2_f_0((MR_String) ".", *UnQualName_5);
    *QualName_6 = mercury__string__f_43_43_2_f_0(DeclModule_21, Var_90);
  }
  else
  {
    MR_String TypeName_7 = ((MR_String) ((MR_hl_field(1, ProcLabel_4, 0))));
    MR_String TypeModule_8 = ((MR_String) ((MR_hl_field(1, ProcLabel_4, 1))));
    MR_String RawPredName_10 = ((MR_String) ((MR_hl_field(1, ProcLabel_4, 3))));
    MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(1, ProcLabel_4, 4))));
    MR_Integer Mode_12 = ((MR_Integer) ((MR_hl_field(1, ProcLabel_4, 5))));
    MR_String PredName_13;
    MR_String Prefix_15;
    MR_String AritySuffix_16;
    MR_String UnQualName0_17;
    MR_String QualName0_18;
    MR_String Var_41;
    MR_String Var_42;
    MR_String Var_43;
    MR_String Var_44;
    MR_String Var_46;

    succeeded = (strcmp(RawPredName_10, (MR_String) "__Unify__") == 0);
    if (succeeded)
      PredName_13 = (MR_String) "Unify";
    else
    {
      succeeded = (strcmp(RawPredName_10, (MR_String) "__Compare__") == 0);
      if (succeeded)
        PredName_13 = (MR_String) "Compare";
      else
      {
        succeeded = (strcmp(RawPredName_10, (MR_String) "__CompareRep__") == 0);
        if (succeeded)
          PredName_13 = (MR_String) "CompareRep";
        else
        {
          succeeded = (strcmp(RawPredName_10, (MR_String) "__Index__") == 0);
          if (succeeded)
            PredName_13 = (MR_String) "Index";
          else
          {
            MR_String Msg_14;

            Msg_14 = mercury__string__f_43_43_2_f_0((MR_String) "unknown special predicate name ", RawPredName_10);
            {
              mercury__require__error_1_p_0(Msg_14);
              return;
            }
          }
        }
      }
    }
    Prefix_15 = mercury__string__f_43_43_2_f_0(PredName_13, (MR_String) " for ");
    Var_41 = mercury__string__int_to_string_1_f_0(Arity_11);
    AritySuffix_16 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_41);
    Var_42 = mercury__string__f_43_43_2_f_0(TypeName_7, AritySuffix_16);
    UnQualName0_17 = mercury__string__f_43_43_2_f_0(Prefix_15, Var_42);
    Var_46 = mercury__string__f_43_43_2_f_0(TypeName_7, AritySuffix_16);
    Var_44 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_46);
    Var_43 = mercury__string__f_43_43_2_f_0(TypeModule_8, Var_44);
    QualName0_18 = mercury__string__f_43_43_2_f_0(Prefix_15, Var_43);
    succeeded = (Mode_12 == (MR_Integer) 0);
    if (succeeded)
    {
      *UnQualName_5 = UnQualName0_17;
      *QualName_6 = QualName0_18;
    }
    else
    {
      MR_String ModeSuffix_19;
      MR_String Var_48;

      Var_48 = mercury__string__int_to_string_1_f_0(Mode_12);
      ModeSuffix_19 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_48);
      *UnQualName_5 = mercury__string__f_43_43_2_f_0(UnQualName0_17, ModeSuffix_19);
      *QualName_6 = mercury__string__f_43_43_2_f_0(QualName0_18, ModeSuffix_19);
    }
  }
}

static MR_bool MR_CALL 
read_profile__glue_lambda_name_3_p_0(
  MR_Word Segments_4,
  MR_Word * PredName_5,
  MR_Word * LineNumber_6)
{
  MR_bool succeeded = (Segments_4 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word LineNumberPrime_7;
  MR_Word Var_14;
  MR_Word Var_15;

  if (succeeded)
  {
    LineNumberPrime_7 = ((MR_Word) ((MR_hl_field(1, Segments_4, 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(1, Segments_4, 1))));
    succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_15 = ((MR_Word) ((MR_hl_field(1, Var_14, 1))));
      succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    *PredName_5 = (MR_Word) ((MR_Unsigned) 0U);
    *LineNumber_6 = LineNumberPrime_7;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Segment_9;
    MR_Word TailSegments_10;
    MR_Word PredName1_11;

    succeeded = (Segments_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Segment_9 = ((MR_Word) ((MR_hl_field(1, Segments_4, 0))));
      TailSegments_10 = ((MR_Word) ((MR_hl_field(1, Segments_4, 1))));
      succeeded = read_profile__glue_lambda_name_3_p_0(TailSegments_10, &PredName1_11, LineNumber_6);
      if (succeeded)
      {
        if ((PredName1_11 == (MR_Word) ((MR_Unsigned) 0U)))
          *PredName_5 = Segment_9;
        else
        {
          MR_Word Var_16;
          MR_Word Var_18;

          {
            Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Char) 95));
            MR_hl_field(1, Var_18, 1) = ((MR_Box) (PredName1_11));
          }
          {
            Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Char) 95));
            MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_18));
          }
          mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Segment_9, Var_16, PredName_5);
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
read_profile__split_lambda_name_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Char Char0_3 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 0)));
    MR_Word Chars0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Chars1_6;
    MR_Char Var_10;
    MR_Word Var_11;
    MR_Char Var_12;

    succeeded = (Chars0_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_10 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars0_4, 0)));
      Var_11 = ((MR_Word) ((MR_hl_field(1, Chars0_4, 1))));
      succeeded = (Var_10 == (MR_Char) 95);
      if (succeeded)
      {
        succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_12 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_11, 0)));
          Chars1_6 = ((MR_Word) ((MR_hl_field(1, Var_11, 1))));
          succeeded = (Var_12 == (MR_Char) 95);
        }
      }
    }
    if (succeeded)
    {
      MR_Word StringList0_7;
      MR_Word Var_13;

      read_profile__split_lambda_name_2_p_0(Chars1_6, &StringList0_7);
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (MR_Word) (Char0_3));
        MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (StringList0_7));
      }
    }
    else
    {
      MR_Word StringList0_19;

      read_profile__split_lambda_name_2_p_0(Chars0_4, &StringList0_19);
      if ((StringList0_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_15;

        {
          Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_Word) (Char0_3));
          MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_15));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word String0_8 = ((MR_Word) ((MR_hl_field(1, StringList0_19, 0))));
        MR_Word StringList1_9 = ((MR_Word) ((MR_hl_field(1, StringList0_19, 1))));
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_Word) (Char0_3));
          MR_hl_field(1, Var_18, 1) = ((MR_Box) (String0_8));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
          MR_hl_field(1, base, 1) = ((MR_Box) (StringList1_9));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
read_profile__fix_type_spec_suffix_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = read_profile__non_right_bracket_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static MR_bool MR_CALL 
read_profile__fix_type_spec_suffix_3_p_0(
  MR_Word Chars0_4,
  MR_Word * Chars_5,
  MR_String * SpecInfoStr_6)
{
  MR_bool succeeded = (Chars0_4 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word SpecInfo0_7;
  MR_Char Var_12;
  MR_Word Var_13;
  MR_Char Var_14;
  MR_Word Var_15;
  MR_Char Var_16;

  if (succeeded)
  {
    Var_12 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars0_4, 0)));
    Var_13 = ((MR_Word) ((MR_hl_field(1, Chars0_4, 1))));
    succeeded = (Var_12 == (MR_Char) 95);
    if (succeeded)
    {
      succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_14 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_13, 0)));
        Var_15 = ((MR_Word) ((MR_hl_field(1, Var_13, 1))));
        succeeded = (Var_14 == (MR_Char) 95);
        if (succeeded)
        {
          succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_16 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_15, 0)));
            SpecInfo0_7 = ((MR_Word) ((MR_hl_field(1, Var_15, 1))));
            succeeded = (Var_16 == (MR_Char) 91);
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word SpecInfo_8;

    *Chars_5 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__list__take_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&read_profile_scalar_common_4[8]), SpecInfo0_7, &SpecInfo_8);
    mercury__string__from_char_list_2_p_0(SpecInfo_8, SpecInfoStr_6);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Char Char_9;
    MR_Word TailChars0_10;
    MR_Word TailChars_11;

    succeeded = (Chars0_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Char_9 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars0_4, 0)));
      TailChars0_10 = ((MR_Word) ((MR_hl_field(1, Chars0_4, 1))));
      succeeded = read_profile__fix_type_spec_suffix_3_p_0(TailChars0_10, &TailChars_11, SpecInfoStr_6);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Chars_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (Char_9));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailChars_11));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_String MR_CALL 
read_profile__plus_one_for_function_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "+1";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "";
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
read_profile__raw_proc_id_to_string_1_f_0(
  MR_Word ProcLabel_3)
{
  MR_String Str_4;

  if (((MR_tag((MR_Word) ProcLabel_3)) == (MR_Integer) 0))
  {
    MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(0, ProcLabel_3, 0))) & (MR_Integer) 1);
    MR_String DeclModule_12 = ((MR_String) ((MR_hl_field(0, ProcLabel_3, 1))));
    MR_String Name_13 = ((MR_String) ((MR_hl_field(0, ProcLabel_3, 3))));
    MR_String Var_35;
    MR_Integer Arity_41 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_3, 4))));
    MR_Integer Mode_42 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_3, 5))));
    MR_String Var_68;
    MR_String Var_76;
    MR_String Var_77;
    MR_String Var_78;
    MR_String Var_85;
    MR_String Var_87;
    MR_String Var_88;
    MR_String Var_90;

    switch (PredOrFunc_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Var_35 = (MR_String) "+1";
        break;
      case (MR_Integer) 0:
        Var_35 = (MR_String) "";
        break;
    }
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Mode_42, &Var_68);
    Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_68);
    Var_77 = mercury__string__f_43_43_2_f_0(Var_35, Var_76);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Arity_41, &Var_78);
    Var_85 = mercury__string__f_43_43_2_f_0(Var_78, Var_77);
    Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_85);
    Var_88 = mercury__string__f_43_43_2_f_0(Name_13, Var_87);
    Var_90 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_88);
    Str_4 = mercury__string__f_43_43_2_f_0(DeclModule_12, Var_90);
  }
  else
  {
    MR_String TypeName_5 = ((MR_String) ((MR_hl_field(1, ProcLabel_3, 0))));
    MR_String TypeModule_6 = ((MR_String) ((MR_hl_field(1, ProcLabel_3, 1))));
    MR_String PredName_8 = ((MR_String) ((MR_hl_field(1, ProcLabel_3, 3))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(1, ProcLabel_3, 4))));
    MR_Integer Mode_10 = ((MR_Integer) ((MR_hl_field(1, ProcLabel_3, 5))));
    MR_String Var_43;
    MR_String Var_51;
    MR_String Var_52;
    MR_String Var_59;
    MR_String Var_61;
    MR_String Var_62;
    MR_String Var_64;
    MR_String Var_65;
    MR_String Var_67;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Mode_10, &Var_43);
    Var_51 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_43);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Arity_9, &Var_52);
    Var_59 = mercury__string__f_43_43_2_f_0(Var_52, Var_51);
    Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_59);
    Var_62 = mercury__string__f_43_43_2_f_0(TypeName_5, Var_61);
    Var_64 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_62);
    Var_65 = mercury__string__f_43_43_2_f_0(TypeModule_6, Var_64);
    Var_67 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_65);
    Str_4 = mercury__string__f_43_43_2_f_0(PredName_8, Var_67);
  }
  return Str_4;
}

static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv5_HeadVar__2_76;

  conv5_HeadVar__2_76 = read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__581__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_76));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv3_HeadVar__2_76;

  conv3_HeadVar__2_76 = read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__581__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_76));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv1_HeadVar__2_76;

  conv1_HeadVar__2_76 = read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__581__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_76));
  return wrapper_arg_2;
}

static void MR_CALL 
read_profile__maybe_read_ps_coverage_points_5_p_0(
  MR_Word InputStream_6,
  MR_Word ProfileStats_7,
  MR_Word * MaybeCoveragePoints_8)
{
  MR_Word CoverageDataType_10;
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, ProfileStats_7, 9))));

  CoverageDataType_10 = ((MR_Unsigned) ((MR_hl_field(0, Var_27, 3))) & (MR_Integer) 3);
  switch (CoverageDataType_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word MaybeNCP_12;

        read_profile__read_num_acc_5_p_0(InputStream_6, (MR_Integer) 0, &MaybeNCP_12);
        if (((MR_tag((MR_Word) MaybeNCP_12)) == (MR_Integer) 1))
        {
          MR_Word MaybeCoveragePoints0_11 = (MR_Word) (MaybeNCP_12);

          *MaybeCoveragePoints_8 = (MR_Word) (MaybeCoveragePoints0_11);
        }
        else
        {
          MR_Integer NCP_13 = ((MR_Integer) ((MR_hl_field(0, MaybeNCP_12, 0))));
          MR_Word MaybeRevItems_93;

          read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0(InputStream_6, NCP_13, (MR_Word) ((MR_Unsigned) 0U), &MaybeRevItems_93);
          if (((MR_tag((MR_Word) MaybeRevItems_93)) == (MR_Integer) 1))
          {
            MR_Word MaybeCoveragePoints0_161 = (MR_Word) (MaybeRevItems_93);

            *MaybeCoveragePoints_8 = (MR_Word) (MaybeCoveragePoints0_161);
          }
          else
          {
            MR_Word CPInfosList_20;
            MR_ArrayPtr CPInfosArray_22;
            MR_Word MaybeCPsArray_23;
            MR_Word Var_42;
            MR_Word RevItems_94 = ((MR_Word) ((MR_hl_field(0, MaybeRevItems_93, 0))));
            MR_ArrayPtr conv0_CPInfosArray_22;

            mercury__list__reverse_2_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), RevItems_94, &CPInfosList_20);
            conv0_CPInfosArray_22 = mercury__array__array_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), CPInfosList_20);
            CPInfosArray_22 = (MR_ArrayPtr) (conv0_CPInfosArray_22);
            MaybeCPsArray_23 = mercury__maybe__map_maybe_2_f_0((MR_Word) (&read_profile_scalar_common_1[1]), (MR_Word) (&read_profile_scalar_common_1[2]), (MR_Word) (&read_profile_scalar_common_4[5]), (MR_Word) ((MR_Unsigned) 0U));
            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_42, 0) = ((MR_Box) (CPInfosArray_22));
              MR_hl_field(0, Var_42, 1) = ((MR_Box) (MaybeCPsArray_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCoveragePoints_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_42));
            }
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeNCP_80;

        read_profile__read_num_acc_5_p_0(InputStream_6, (MR_Integer) 0, &MaybeNCP_80);
        if (((MR_tag((MR_Word) MaybeNCP_80)) == (MR_Integer) 1))
        {
          MR_Word MaybeCoveragePoints0_139 = (MR_Word) (MaybeNCP_80);

          *MaybeCoveragePoints_8 = (MR_Word) (MaybeCoveragePoints0_139);
        }
        else
        {
          MR_Integer NCP_78 = ((MR_Integer) ((MR_hl_field(0, MaybeNCP_80, 0))));
          MR_Word MaybeRevItems_109;

          read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0(InputStream_6, NCP_78, (MR_Word) ((MR_Unsigned) 0U), &MaybeRevItems_109);
          if (((MR_tag((MR_Word) MaybeRevItems_109)) == (MR_Integer) 1))
          {
            MR_Word MaybeCoveragePoints0_164 = (MR_Word) (MaybeRevItems_109);

            *MaybeCoveragePoints_8 = (MR_Word) (MaybeCoveragePoints0_164);
          }
          else
          {
            MR_Word CPPairs_15;
            MR_Word CPs_17;
            MR_Word RevItems_110 = ((MR_Word) ((MR_hl_field(0, MaybeRevItems_109, 0))));
            MR_Word CPInfosList_119;
            MR_Word MaybeCPsList_120;
            MR_ArrayPtr CPInfosArray_121;
            MR_Word MaybeCPsArray_122;
            MR_Word Var_125;
            MR_ArrayPtr conv2_CPInfosArray_121;

            mercury__list__reverse_2_p_0((MR_Word) (&read_profile_scalar_common_4[0]), RevItems_110, &CPPairs_15);
            mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CPPairs_15, &CPInfosList_119, &CPs_17);
            {
              MaybeCPsList_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeCPsList_120, 0) = ((MR_Box) (CPs_17));
            }
            conv2_CPInfosArray_121 = mercury__array__array_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), CPInfosList_119);
            CPInfosArray_121 = (MR_ArrayPtr) (conv2_CPInfosArray_121);
            MaybeCPsArray_122 = mercury__maybe__map_maybe_2_f_0((MR_Word) (&read_profile_scalar_common_1[1]), (MR_Word) (&read_profile_scalar_common_1[2]), (MR_Word) (&read_profile_scalar_common_4[6]), MaybeCPsList_120);
            {
              Var_125 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_125, 0) = ((MR_Box) (CPInfosArray_121));
              MR_hl_field(0, Var_125, 1) = ((MR_Box) (MaybeCPsArray_122));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCoveragePoints_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_125));
            }
          }
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word CPInfosList_151;
        MR_Word MaybeCPsList_152;
        MR_ArrayPtr CPInfosArray_153;
        MR_Word MaybeCPsArray_154;
        MR_Word Var_155 = ((MR_Word) ((MR_hl_field(0, (MR_Word) (&read_profile_scalar_common_6[3]), 0))));
        MR_Word Var_157;
        MR_ArrayPtr conv4_CPInfosArray_153;

        CPInfosList_151 = ((MR_Word) ((MR_hl_field(0, Var_155, 0))));
        MaybeCPsList_152 = ((MR_Word) ((MR_hl_field(0, Var_155, 1))));
        conv4_CPInfosArray_153 = mercury__array__array_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), CPInfosList_151);
        CPInfosArray_153 = (MR_ArrayPtr) (conv4_CPInfosArray_153);
        MaybeCPsArray_154 = mercury__maybe__map_maybe_2_f_0((MR_Word) (&read_profile_scalar_common_1[1]), (MR_Word) (&read_profile_scalar_common_1[2]), (MR_Word) (&read_profile_scalar_common_4[7]), MaybeCPsList_152);
        {
          Var_157 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_157, 0) = ((MR_Box) (CPInfosArray_153));
          MR_hl_field(0, Var_157, 1) = ((MR_Box) (MaybeCPsArray_154));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCoveragePoints_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_157));
        }
      }
      break;
  }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__3_21;

  read_profile__IntroducedFrom__pred__read_coverage_point_static__711__1_3_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_21);
  *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_21));
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeCPType_6;

  read_profile__read_cp_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv1_MaybeCPType_6);
  *wrapper_arg_1 = ((MR_Box) (conv1_MaybeCPType_6));
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeStr_6;

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv0_MaybeStr_6);
  *wrapper_arg_1 = ((MR_Box) (conv0_MaybeStr_6));
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_24,
  MR_Integer N_7,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_7 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItems_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (RevItems0_9));
      }
    else
    {
      MR_Word MaybeItem_12;
      MR_Word Var_25;
      MR_Word Var_26;

      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_25, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0_1));
        MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_25, 3) = ((MR_Box) (Var_24));
      }
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (&read_profile_scalar_common_7[4]));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0_2));
        MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_26, 3) = ((MR_Box) (Var_24));
      }
      io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), Var_25, Var_26, (MR_Word) (&read_profile_scalar_common_4[4]), &MaybeItem_12);
      if (((MR_tag((MR_Word) MaybeItem_12)) == (MR_Integer) 1))
        *MaybeItems_10 = (MR_Word) (MaybeItem_12);
      else
      {
        MR_Word Item_13 = ((MR_Word) ((MR_hl_field(0, MaybeItem_12, 0))));
        MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) N_7 - (MR_Unsigned) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_7;
        MR_Word next_value_of_RevItems0_9;

        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = ((MR_Box) (Item_13));
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (RevItems0_9));
        }
        // direct tailcall eliminated
        ;
        next_value_of_N_7 = Var_19;
        next_value_of_RevItems0_9 = Var_20;
        N_7 = next_value_of_N_7;
        RevItems0_9 = next_value_of_RevItems0_9;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__3_19;

  read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__695__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_19);
  *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_19));
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeNum_6;

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv1_MaybeNum_6);
  *wrapper_arg_1 = ((MR_Box) (conv1_MaybeNum_6));
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeCP_6;

  read_profile__read_coverage_point_static_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv0_MaybeCP_6);
  *wrapper_arg_1 = ((MR_Box) (conv0_MaybeCP_6));
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_24,
  MR_Integer N_7,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_7 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItems_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (RevItems0_9));
      }
    else
    {
      MR_Word MaybeItem_12;
      MR_Word Var_25;
      MR_Word Var_26;

      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_25, 0) = ((MR_Box) (&read_profile_scalar_common_7[3]));
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0_1));
        MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_25, 3) = ((MR_Box) (Var_24));
      }
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0_2));
        MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_26, 3) = ((MR_Box) (Var_24));
      }
      io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&read_profile_scalar_common_4[0]), Var_25, Var_26, (MR_Word) (&read_profile_scalar_common_4[3]), &MaybeItem_12);
      if (((MR_tag((MR_Word) MaybeItem_12)) == (MR_Integer) 1))
        *MaybeItems_10 = (MR_Word) (MaybeItem_12);
      else
      {
        MR_Word Item_13 = ((MR_Word) ((MR_hl_field(0, MaybeItem_12, 0))));
        MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) N_7 - (MR_Unsigned) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_7;
        MR_Word next_value_of_RevItems0_9;

        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = ((MR_Box) (Item_13));
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (RevItems0_9));
        }
        // direct tailcall eliminated
        ;
        next_value_of_N_7 = Var_19;
        next_value_of_RevItems0_9 = Var_20;
        N_7 = next_value_of_N_7;
        RevItems0_9 = next_value_of_RevItems0_9;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
read_profile__read_num_acc_5_p_0(
  MR_Word InputStream_6,
  MR_Integer Num0_7,
  MR_Word * MaybeNum_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeByte_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_byte_4_p_0(InputStream_6, &MaybeByte_10);
    switch (MR_tag((MR_Word) MaybeByte_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeNum_8 = (MR_Word) (MR_mkword(1, &read_profile_scalar_common_6[9]));
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_11 = ((MR_Integer) ((MR_hl_field(1, MaybeByte_10, 0))));
          MR_Integer Num1_12;
          MR_Integer Var_18;
          MR_Integer Var_20;
          MR_Integer Var_22;

          Var_18 = mercury__int__f_60_60_2_f_0(Num0_7, (MR_Integer) 7);
          Var_20 = (Byte_11 & (MR_Integer) 127);
          Num1_12 = (Var_18 | Var_20);
          Var_22 = (Byte_11 & (MR_Integer) 128);
          succeeded = (Var_22 != (MR_Integer) 0);
          if (succeeded)
          {
            MR_Integer next_value_of_Num0_7 = Num1_12;

            // direct tailcall eliminated
            ;
            Num0_7 = next_value_of_Num0_7;
            continue;
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeNum_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Num1_12));
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_13 = ((MR_Word) ((MR_hl_field(2, MaybeByte_10, 0))));
          MR_String Msg_14;

          mercury__io__error_message_2_p_0(Error_13, &Msg_14);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeNum_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Msg_14));
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_LambdaHeadVar__6_59;

  read_profile__IntroducedFrom__pred__read_call_site_static__434__1_6_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)), ((MR_Integer) (wrapper_arg_4)), ((MR_String) (wrapper_arg_5)), &conv9_LambdaHeadVar__6_59);
  *wrapper_arg_6 = ((MR_Box) (conv9_LambdaHeadVar__6_59));
}

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_9(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_MaybeNum_6;

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv8_MaybeNum_6);
  *wrapper_arg_1 = ((MR_Box) (conv8_MaybeNum_6));
}

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_MaybeStr_6;

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv7_MaybeStr_6);
  *wrapper_arg_1 = ((MR_Box) (conv7_MaybeStr_6));
}

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_MaybeKindAndCallee_6;

  read_profile__read_call_site_kind_and_callee_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv6_MaybeKindAndCallee_6);
  *wrapper_arg_1 = ((MR_Box) (conv6_MaybeKindAndCallee_6));
}

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_MaybePtr_8;

  read_profile__read_ptr_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv5_MaybePtr_8);
  *wrapper_arg_1 = ((MR_Box) (conv5_MaybePtr_8));
}

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__5_43;

  read_profile__IntroducedFrom__pred__read_call_site_static__414__1_5_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_String) (wrapper_arg_4)), &conv4_LambdaHeadVar__5_43);
  *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_43));
}

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_MaybeStr_6;

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv3_MaybeStr_6);
  *wrapper_arg_1 = ((MR_Box) (conv3_MaybeStr_6));
}

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_MaybeNum_6;

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv2_MaybeNum_6);
  *wrapper_arg_1 = ((MR_Box) (conv2_MaybeNum_6));
}

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeKindAndCallee_6;

  read_profile__read_call_site_kind_and_callee_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &conv1_MaybeKindAndCallee_6);
  *wrapper_arg_1 = ((MR_Box) (conv1_MaybeKindAndCallee_6));
}

static void MR_CALL 
read_profile__read_call_site_static_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybePtr_8;

  read_profile__read_ptr_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv0_MaybePtr_8);
  *wrapper_arg_1 = ((MR_Box) (conv0_MaybePtr_8));
}

static void MR_CALL 
read_profile__read_call_site_static_5_p_0(
  MR_Word InputStream_6,
  MR_Word Version_7,
  MR_Word * MaybeCSS_8)
{
  switch (Version_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_35;

        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_32, 0) = ((MR_Box) (&read_profile_scalar_common_3[1]));
          MR_hl_field(0, Var_32, 1) = ((MR_Box) (read_profile__read_call_site_static_5_p_0_1));
          MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_32, 3) = ((MR_Box) (InputStream_6));
          MR_hl_field(0, Var_32, 4) = ((MR_Box) ((MR_Integer) 2));
        }
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_33, 0) = ((MR_Box) (&read_profile_scalar_common_7[0]));
          MR_hl_field(0, Var_33, 1) = ((MR_Box) (read_profile__read_call_site_static_5_p_0_2));
          MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_33, 3) = ((MR_Box) (InputStream_6));
        }
        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_34, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
          MR_hl_field(0, Var_34, 1) = ((MR_Box) (read_profile__read_call_site_static_5_p_0_3));
          MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_34, 3) = ((MR_Box) (InputStream_6));
        }
        {
          Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_35, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
          MR_hl_field(0, Var_35, 1) = ((MR_Box) (read_profile__read_call_site_static_5_p_0_4));
          MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_35, 3) = ((MR_Box) (InputStream_6));
        }
        io_combinator__maybe_error_sequence_4_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&read_profile_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&read_profile_scalar_common_2[0]), Var_32, Var_33, Var_34, Var_35, (MR_Word) (&read_profile_scalar_common_4[1]), MaybeCSS_8);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;

        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (&read_profile_scalar_common_3[1]));
          MR_hl_field(0, Var_46, 1) = ((MR_Box) (read_profile__read_call_site_static_5_p_0_6));
          MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_46, 3) = ((MR_Box) (InputStream_6));
          MR_hl_field(0, Var_46, 4) = ((MR_Box) ((MR_Integer) 2));
        }
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_47, 0) = ((MR_Box) (&read_profile_scalar_common_7[0]));
          MR_hl_field(0, Var_47, 1) = ((MR_Box) (read_profile__read_call_site_static_5_p_0_7));
          MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_47, 3) = ((MR_Box) (InputStream_6));
        }
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_48, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
          MR_hl_field(0, Var_48, 1) = ((MR_Box) (read_profile__read_call_site_static_5_p_0_8));
          MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_48, 3) = ((MR_Box) (InputStream_6));
        }
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_49, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
          MR_hl_field(0, Var_49, 1) = ((MR_Box) (read_profile__read_call_site_static_5_p_0_9));
          MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_49, 3) = ((MR_Box) (InputStream_6));
        }
        io_combinator__maybe_error_sequence_5_9_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&read_profile_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&read_profile_scalar_common_2[0]), Var_46, Var_47, Var_48, Var_49, Var_48, (MR_Word) (&read_profile_scalar_common_4[2]), MaybeCSS_8);
      }
      break;
  }
}

static MR_bool MR_CALL 
read_profile____Unify____acceptable_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = read_profile____Unify____acceptable_version_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
read_profile____Compare____acceptable_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  read_profile____Compare____acceptable_version_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
read_profile____Unify____maybe_error2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = read_profile____Unify____maybe_error2_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
read_profile____Compare____maybe_error2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  read_profile____Compare____maybe_error2_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
read_profile____Unify____maybe_init_deep_complete_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = read_profile____Unify____maybe_init_deep_complete_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
read_profile____Compare____maybe_init_deep_complete_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  read_profile____Compare____maybe_init_deep_complete_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
read_profile____Unify____next_deep_item_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = read_profile____Unify____next_deep_item_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
read_profile____Compare____next_deep_item_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  read_profile____Compare____next_deep_item_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
read_profile____Unify____ptr_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = read_profile____Unify____ptr_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
read_profile____Compare____ptr_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  read_profile____Compare____ptr_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__read_profile__init(void)
{
}

void mercury__read_profile__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&read_profile__read_profile__type_ctor_info_acceptable_version_0);
  MR_register_type_ctor_info(&read_profile__read_profile__type_ctor_info_maybe_error2_2);
  MR_register_type_ctor_info(&read_profile__read_profile__type_ctor_info_maybe_init_deep_complete_0);
  MR_register_type_ctor_info(&read_profile__read_profile__type_ctor_info_next_deep_item_0);
  MR_register_type_ctor_info(&read_profile__read_profile__type_ctor_info_ptr_kind_0);
}

void mercury__read_profile__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__read_profile__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module read_profile.
