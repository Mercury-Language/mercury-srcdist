/*
** Automatically generated from `read_profile.m'
** by the Mercury compiler,
** version rotd-2017-11-10
** configured for x86_64-pc-linux-gnu.
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


// :- module read_profile.
// :- implementation.

/*
INIT mercury__read_profile__init
ENDINIT
*/

#include "read_profile.mih"


#include "array_util.mih"
#include "exclude.mih"
#include "io_combinator.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 read_profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__profile__pti_call_site_kind_and_callee_1__plain_profile__type_ctor_info_proc_static_ptr_0;

static const MR_VA_TypeInfo_Struct2 read_profile____vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_cp_type_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 read_profile__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

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

static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_value_ordered_ptr_kind_0[4];

static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_name_ordered_ptr_kind_0[4];

static const MR_Integer read_profile__read_profile__functor_number_map_ptr_kind_0[4];

static MR_bool MR_CALL 
read_profile__IntroducedFrom__pred__read_n_byte_string__1315__1_2_p_0(
  MR_Integer LambdaHeadVar__1_20,
  MR_Char * LambdaHeadVar__2_21);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__895__1_3_p_0(
  MR_Word LambdaHeadVar__1_49,
  MR_Word LambdaHeadVar__2_50,
  MR_Word * LambdaHeadVar__3_51);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_5_p_0(
  MR_Integer N_16,
  MR_Word HeadVar__2_48,
  MR_Word * HeadVar__3_86);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__885__1_4_p_0(
  MR_Integer LambdaHeadVar__1_38,
  MR_Integer LambdaHeadVar__2_39,
  MR_Integer LambdaHeadVar__3_40,
  MR_Word * LambdaHeadVar__4_41);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_p_0(
  MR_String LambdaHeadVar__1_17,
  MR_Word LambdaHeadVar__2_18,
  MR_Word * LambdaHeadVar__3_19);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__688__1_3_p_0(
  MR_Word LambdaHeadVar__1_15,
  MR_Integer LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_user_defined__663__1_7_p_0(
  MR_Word PredOrFunc_5,
  MR_String LambdaHeadVar__1_23,
  MR_String LambdaHeadVar__2_24,
  MR_String LambdaHeadVar__3_25,
  MR_Integer LambdaHeadVar__4_26,
  MR_Integer LambdaHeadVar__5_27,
  MR_Word * LambdaHeadVar__6_28);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__644__1_7_p_0(
  MR_String LambdaHeadVar__1_23,
  MR_String LambdaHeadVar__2_24,
  MR_String LambdaHeadVar__3_25,
  MR_String LambdaHeadVar__4_26,
  MR_Integer LambdaHeadVar__5_27,
  MR_Integer LambdaHeadVar__6_28,
  MR_Word * LambdaHeadVar__7_29);

static MR_ArrayPtr MR_CALL 
read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_f_0(
  MR_Word HeadVar__1_73);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_static__471__1_7_p_0(
  MR_Integer LambdaHeadVar__1_50,
  MR_Word LambdaHeadVar__2_51,
  MR_String LambdaHeadVar__3_52,
  MR_Integer LambdaHeadVar__4_53,
  MR_Integer LambdaHeadVar__5_54,
  MR_Integer LambdaHeadVar__6_55,
  MR_Word * LambdaHeadVar__7_56);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_p_0(
  MR_Integer LambdaHeadVar__1_32,
  MR_Word LambdaHeadVar__2_33,
  MR_Integer LambdaHeadVar__3_34,
  MR_String LambdaHeadVar__4_35,
  MR_Word * LambdaHeadVar__5_36);

static void MR_CALL 
read_profile____Compare____ptr_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
read_profile____Unify____ptr_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
read_profile____Compare____next_deep_item_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
read_profile____Unify____next_deep_item_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
read_profile____Unify____maybe_error2_2_0(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
read_profile__make_cssptr_1_f_0(
  MR_Integer CSSI_3);

static void MR_CALL 
read_profile__read_fixed_size_int_3_p_0(
  MR_Word * MaybeInt_4);

static void MR_CALL 
read_profile__read_fixed_size_int_acc_6_p_0(
  MR_Integer BytesLeft_7,
  MR_Integer Num0_8,
  MR_Integer ShiftBy_9,
  MR_Word * MaybeInt_10);

static void MR_CALL 
read_profile__read_num_3_p_0(
  MR_Word * MaybeNum_4);

static void MR_CALL 
read_profile__num_to_cp_type_2_p_0(
  MR_Integer Int_1,
  MR_Word * CPType_2);

static void MR_CALL 
read_profile__read_cp_type_3_p_0(
  MR_Word * MaybeCPType_4);

static void MR_CALL 
read_profile__read_ptr_4_p_0(
  MR_Word _Kind_5,
  MR_Word * MaybePtr_6);

static void MR_CALL 
read_profile__read_n_things_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Integer N_6,
  MR_Word ItemReader_7,
  MR_Word * MaybeItems_8);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_p_0(
  MR_Integer N_7,
  MR_Word ItemReader_8,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10);

static void MR_CALL 
read_profile__read_call_site_kind_and_callee_3_p_0(
  MR_Word * MaybeKindAndCallee_4);

static MR_bool MR_CALL 
read_profile__read_string_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
read_profile__read_string_3_p_0(
  MR_Word * MaybeStr_4);

static void MR_CALL 
read_profile__read_n_bytes_acc_5_p_0(
  MR_Integer N_6,
  MR_Word RevBytes0_7,
  MR_Word * MaybeNBytes_8);

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
read_profile__read_call_site_slot_3_p_0(
  MR_Word * MaybeSlot_4);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_p_0(
  MR_Word * MaybePtr_6);

static MR_Word MR_CALL 
read_profile__make_csdptr_1_f_0(
  MR_Integer CSDI_3);

static void MR_CALL 
read_profile__read_call_site_kind_3_p_0(
  MR_Word * MaybeKind_4);

static void MR_CALL 
read_profile__read_multi_call_site_csdis_3_p_0(
  MR_Word * MaybeCSDIs_4);

static void MR_CALL 
read_profile__read_multi_call_site_csdis_2_4_p_0(
  MR_Word CSDIs0_5,
  MR_Word * MaybeCSDIs_6);

static MR_bool MR_CALL 
read_profile__non_right_bracket_1_p_0(
  MR_Char C_2);

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0(
  MR_Word * MaybeCP_4);

static void MR_CALL 
read_profile__read_proc_id_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
read_profile__read_proc_id_3_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_3_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_3_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_3_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_3_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_3_p_0(
  MR_Word * MaybeProcId_4);

static void MR_CALL 
read_profile__read_deep_byte_3_p_0(
  MR_Word * MaybeByte_4);

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0(
  MR_Word PredOrFunc_5,
  MR_Word * MaybeProcLabel_6);

static void MR_CALL 
read_profile__maybe_read_pd_coverage_points_4_p_0(
  MR_Word ProfileStats_5,
  MR_Word * MaybeCoveragePoints_6);

static void MR_CALL 
read_profile__read_n_things__ho8_6_p_0(
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
read_profile__read_call_graph_4_p_0_12(
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
read_profile__read_call_graph_4_p_0_11(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_10(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_9(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
read_profile__read_nodes_4_p_0(
  MR_Word InitDeep0_5,
  MR_Word * MaybeInitDeep_6);

static void MR_CALL 
read_profile__read_nodes_2_5_p_0(
  MR_Integer tscc_proc_1_input_1_Depth_6,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10,
  MR_Word * tscc_output_ptr_1_MaybeInitDeep_8);

static void MR_CALL 
read_profile__read_nodes_3_5_p_0(
  MR_Integer tscc_proc_2_input_1_Depth_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_InitDeep_0_36,
  MR_Word * tscc_output_ptr_1_MaybeInitDeep_8);

static MR_bool MR_CALL 
read_profile__is_next_item_token_2_p_0(
  MR_Integer Int_1,
  MR_Word * NextItem_2);

static void MR_CALL 
read_profile__deep_insert_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_ArrayPtr A0_5,
  MR_Integer Ind_6,
  MR_Box Item_7,
  MR_ArrayPtr * A_8);

static void MR_CALL 
read_profile__read_call_site_dynamic_3_p_0(
  MR_Word * MaybeCSD_4);

static void MR_CALL 
read_profile__read_profile_3_p_0(
  MR_Word * MaybeProfile_4);

static void MR_CALL 
read_profile__maybe_read_num_handle_error_7_p_0(
  MR_Integer MaskWord_8,
  MR_Integer MaskValue_9,
  MR_Integer * Num_10,
  MR_Word STATE_VARIABLE_MaybeError_0_15,
  MR_Word * STATE_VARIABLE_MaybeError_16);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0(
  MR_Word ProfileStats_5,
  MR_Word * MaybePD_6);

static MR_Box MR_CALL 
read_profile__read_proc_static_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
read_profile__read_proc_static_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
read_profile__read_proc_static_4_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_4_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_4_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_4_p_0(
  MR_Word ProfileStats_5,
  MR_Word * MaybePS_6);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_p_0(
  MR_Integer N_6,
  MR_Word * MaybeItems_8);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_p_0(
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
read_profile__add_plus_one_for_function_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
read_profile__raw_proc_id_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0(
  MR_Word ProfileStats_5,
  MR_Word * MaybeCoveragePoints_6);

static void MR_CALL 
read_profile__read_n_things__ho3_5_p_0(
  MR_Integer N_6,
  MR_Word * MaybeItems_8);

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0(
  MR_Integer N_7,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10);

static void MR_CALL 
read_profile__read_n_things__ho2_5_p_0(
  MR_Integer N_6,
  MR_Word * MaybeItems_8);

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0(
  MR_Integer N_7,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10);

static void MR_CALL 
read_profile__read_num_acc_4_p_0(
  MR_Integer Num0_5,
  MR_Word * MaybeNum_6);

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_3_p_0(
  MR_Word * MaybeCSS_4);

static void MR_CALL 
read_profile__read_deep_id_string_3_p_0(
  MR_Word * MaybeVersionNumber_4);

static void MR_CALL 
read_profile__read_line_acc_5_p_0(
  MR_Integer Limit_6,
  MR_Word STATE_VARIABLE_RevChars_0_17,
  MR_Word * MaybeLine_8);

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


static /* final */ const MR_Box read_profile_scalar_common_1[6][2];

static /* final */ const MR_Box read_profile_scalar_common_2[8][4];

static /* final */ const MR_Box read_profile_scalar_common_3[3][8];

static /* final */ const MR_Box read_profile_scalar_common_4[56][3];

static /* final */ const MR_Box read_profile_scalar_common_5[6][5];

static /* final */ const MR_Box read_profile_scalar_common_6[11][1];

static /* final */ const MR_Box read_profile_scalar_common_7[3][7];

static /* final */ const MR_Box read_profile_scalar_common_8[10][6];

static /* final */ const MR_Box read_profile_scalar_common_9[3][10];

static /* final */ const MR_Box read_profile_scalar_common_10[1][15];




static /* final */ const MR_Box read_profile_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_kind_and_callee_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&read_profile_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 5 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) -1)))),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_2[8][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&read_profile_scalar_common_1[3])),
    ((MR_Box) (&read_profile_scalar_common_1[4]))
  },
  /* row 2 */
  {
    ((MR_Box) (&read_profile_scalar_common_7[0])),
    ((MR_Box) (read_profile__read_call_site_static_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&read_profile_scalar_common_7[0])),
    ((MR_Box) (read_profile__read_proc_static_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&read_profile_scalar_common_7[0])),
    ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 6 */
  {
    ((MR_Box) (&read_profile_scalar_common_7[0])),
    ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&read_profile_scalar_common_7[0])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_3[3][8] = {
  /* row 0 */
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__profile__pti_call_site_kind_and_callee_1__plain_profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile____vpti_pred_3__plain_maybe__ti_maybe_error_2profile__type_ctor_info_call_site_array_slot_0builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_list__ti_list_1profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_4[56][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[0])),
    ((MR_Box) (read_profile__read_call_site_static_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_call_site_static_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[2])),
    ((MR_Box) (read_profile__read_call_site_static_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&read_profile_scalar_common_3[1])),
    ((MR_Box) (read_profile__read_call_site_static_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[2])),
    ((MR_Box) (read_profile__read_n_things__ho7_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[3])),
    ((MR_Box) (read_profile__read_n_things__ho7_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[4])),
    ((MR_Box) (read_profile__read_n_things__ho7_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[5])),
    ((MR_Box) (read_profile__read_n_things__ho6_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_n_things__ho6_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[6])),
    ((MR_Box) (read_profile__read_n_things__ho6_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[1])),
    ((MR_Box) (read_profile__maybe_read_ps_coverage_points_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[1])),
    ((MR_Box) (read_profile__maybe_read_ps_coverage_points_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&read_profile_scalar_common_2[3])),
    ((MR_Box) (read_profile__fix_type_spec_suffix_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[7])),
    ((MR_Box) (read_profile__read_proc_static_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[2])),
    ((MR_Box) (read_profile__read_proc_static_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_proc_static_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_proc_static_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_proc_static_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&read_profile_scalar_common_9[0])),
    ((MR_Box) (read_profile__read_proc_static_4_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[2])),
    ((MR_Box) (read_profile__read_proc_static_4_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&read_profile_scalar_common_7[1])),
    ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[8])),
    ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[9])),
    ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[2])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&read_profile_scalar_common_10[0])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 36 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[2])),
    ((MR_Box) (read_profile__read_proc_id_user_defined_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 37 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[2])),
    ((MR_Box) (read_profile__read_proc_id_user_defined_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 38 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[2])),
    ((MR_Box) (read_profile__read_proc_id_user_defined_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 39 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_proc_id_user_defined_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 40 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_proc_id_user_defined_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 41 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[2])),
    ((MR_Box) (read_profile__read_proc_id_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 42 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[2])),
    ((MR_Box) (read_profile__read_proc_id_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 43 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[2])),
    ((MR_Box) (read_profile__read_proc_id_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 44 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[2])),
    ((MR_Box) (read_profile__read_proc_id_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 45 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_proc_id_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 46 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__read_proc_id_3_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 47 */
  {
    ((MR_Box) (&read_profile_scalar_common_9[2])),
    ((MR_Box) (read_profile__read_proc_id_3_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 48 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[2])),
    ((MR_Box) (read_profile__read_coverage_point_static_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 49 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[3])),
    ((MR_Box) (read_profile__read_coverage_point_static_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 50 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[4])),
    ((MR_Box) (read_profile__read_coverage_point_static_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 51 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[4])),
    ((MR_Box) (read_profile__read_call_site_slot_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 52 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[4])),
    ((MR_Box) (read_profile__read_call_site_slot_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 53 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[4])),
    ((MR_Box) (read_profile__read_call_site_slot_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 54 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[4])),
    ((MR_Box) (read_profile__read_call_site_slot_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 55 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[5])),
    ((MR_Box) (read_profile__read_string_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_5[6][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&read_profile__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__array__pti_array_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0))
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) -1)))),
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &read_profile_scalar_common_1[5]))),
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_6[11][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "unexpected end of file"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "version number mismatch"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "not a deep profiling data file"))
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "string contained bad char"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_7[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&read_profile__read_profile__type_ctor_info_ptr_kind_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_profile_stats_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_8[10][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_cp_type_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_1__plain_array__ti_array_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__list__pti_list_1__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_9[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_10[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
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
#include "io.mh"
#include "profile.mh"
#include "read_profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 read_profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__profile__pti_call_site_kind_and_callee_1__plain_profile__type_ctor_info_proc_static_ptr_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

static const MR_VA_TypeInfo_Struct2 read_profile____vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_static_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile____vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_cp_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 read_profile__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__array__pti_array_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_TypeInfo_Struct6 read_profile____vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 6,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile____vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_TypeInfo_Struct3 read_profile____vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile____vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 read_profile__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 read_profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &read_profile__array__ti_array_1builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 read_profile__maybe__ti_maybe_error_2profile__type_ctor_info_call_site_array_slot_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 read_profile____vpti_pred_3__plain_maybe__ti_maybe_error_2profile__type_ctor_info_call_site_array_slot_0builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &read_profile__maybe__ti_maybe_error_2profile__type_ctor_info_call_site_array_slot_0builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_TypeInfo_Struct1 read_profile__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_list__ti_list_1profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__maybe__pti_maybe_1__plain_array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &read_profile__array__ti_array_1builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__list__pti_list_1__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

static const MR_VA_TypeInfo_Struct2 read_profile____vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &read_profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &read_profile__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile____vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__type_ctor_info_initial_deep_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_initial_deep_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_error2_2_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_error2_2_0 = {
  (MR_String) "ok2",
  (MR_Integer) 2,
  (MR_Integer) 3,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  read_profile__read_profile__field_types_maybe_error2_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_error2_2_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_error2_2_1 = {
  (MR_String) "error2",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  read_profile__read_profile__field_types_maybe_error2_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_error2_2_0[1] = {
  &read_profile__read_profile__du_functor_desc_maybe_error2_2_0
};

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_error2_2_1[1] = {
  &read_profile__read_profile__du_functor_desc_maybe_error2_2_1
};

static const MR_DuPtagLayout read_profile__read_profile__du_ptag_ordered_maybe_error2_2[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    read_profile__read_profile__du_stag_ordered_maybe_error2_2_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    read_profile__read_profile__du_stag_ordered_maybe_error2_2_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (read_profile____Unify____maybe_error2_2_0_10001)),
  ((MR_Box) (read_profile____Compare____maybe_error2_2_0_10001)),
  (MR_String) "read_profile",
  (MR_String) "maybe_error2",
  {     read_profile__read_profile__du_name_ordered_maybe_error2_2 },
  {     read_profile__read_profile__du_ptag_ordered_maybe_error2_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  read_profile__read_profile__functor_number_map_maybe_error2_2
};

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_0[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_initial_deep_0
};

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_0 = {
  (MR_String) "init_deep_complete",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  read_profile__read_profile__field_types_maybe_init_deep_complete_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_1[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_initial_deep_0
};

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_1 = {
  (MR_String) "init_deep_incomplete",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  read_profile__read_profile__field_types_maybe_init_deep_complete_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_2 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  read_profile__read_profile__field_types_maybe_init_deep_complete_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_0[1] = {
  &read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_0
};

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_1[1] = {
  &read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_1
};

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_2[1] = {
  &read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_2
};

static const MR_DuPtagLayout read_profile__read_profile__du_ptag_ordered_maybe_init_deep_complete_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (read_profile____Unify____maybe_init_deep_complete_0_0_10001)),
  ((MR_Box) (read_profile____Compare____maybe_init_deep_complete_0_0_10001)),
  (MR_String) "read_profile",
  (MR_String) "maybe_init_deep_complete",
  {     read_profile__read_profile__du_name_ordered_maybe_init_deep_complete_0 },
  {     read_profile__read_profile__du_ptag_ordered_maybe_init_deep_complete_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  read_profile__read_profile__functor_number_map_maybe_init_deep_complete_0
};

static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_0 = {
  (MR_String) "deep_item_end",
  (MR_Integer) 0,
  ((int) MR_deep_item_end)
};

static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_1 = {
  (MR_String) "deep_item_call_site_static",
  (MR_Integer) 1,
  ((int) MR_deep_item_call_site_static)
};

static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_2 = {
  (MR_String) "deep_item_call_site_dynamic",
  (MR_Integer) 2,
  ((int) MR_deep_item_call_site_dynamic)
};

static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_3 = {
  (MR_String) "deep_item_proc_static",
  (MR_Integer) 3,
  ((int) MR_deep_item_proc_static)
};

static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_4 = {
  (MR_String) "deep_item_proc_dynamic",
  (MR_Integer) 4,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN_ENUM,
  ((MR_Box) (read_profile____Unify____next_deep_item_0_0_10001)),
  ((MR_Box) (read_profile____Compare____next_deep_item_0_0_10001)),
  (MR_String) "read_profile",
  (MR_String) "next_deep_item",
  {     read_profile__read_profile__foreign_enum_name_ordered_next_deep_item_0 },
  {     read_profile__read_profile__foreign_enum_ordinal_ordered_next_deep_item_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  read_profile__read_profile__functor_number_map_next_deep_item_0
};

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_0 = {
  (MR_String) "ps",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_1 = {
  (MR_String) "pd",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_2 = {
  (MR_String) "css",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_3 = {
  (MR_String) "csd",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_value_ordered_ptr_kind_0[4] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (read_profile____Unify____ptr_kind_0_0_10001)),
  ((MR_Box) (read_profile____Compare____ptr_kind_0_0_10001)),
  (MR_String) "read_profile",
  (MR_String) "ptr_kind",
  {     read_profile__read_profile__enum_name_ordered_ptr_kind_0 },
  {     read_profile__read_profile__enum_value_ordered_ptr_kind_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  read_profile__read_profile__functor_number_map_ptr_kind_0
};

static MR_bool MR_CALL 
read_profile__IntroducedFrom__pred__read_n_byte_string__1315__1_2_p_0(
  MR_Integer LambdaHeadVar__1_20,
  MR_Char * LambdaHeadVar__2_21)
{
  {
    MR_bool succeeded;

    succeeded = mercury__char__to_int_2_p_2(LambdaHeadVar__2_21, LambdaHeadVar__1_20);
    return succeeded;
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__895__1_3_p_0(
  MR_Word LambdaHeadVar__1_49,
  MR_Word LambdaHeadVar__2_50,
  MR_Word * LambdaHeadVar__3_51)
{
  {
    MR_Tuple Var_52;

    {
      Var_52 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (LambdaHeadVar__1_49));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (LambdaHeadVar__2_50));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__3_51 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_52));
    }
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_5_p_0(
  MR_Integer N_16,
  MR_Word HeadVar__2_48,
  MR_Word * HeadVar__3_86)
{
  {
    read_profile__read_n_things_5_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, N_16, HeadVar__2_48, HeadVar__3_86);
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__885__1_4_p_0(
  MR_Integer LambdaHeadVar__1_38,
  MR_Integer LambdaHeadVar__2_39,
  MR_Integer LambdaHeadVar__3_40,
  MR_Word * LambdaHeadVar__4_41)
{
  {
    MR_Tuple Var_42;

    {
      Var_42 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (LambdaHeadVar__1_38));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (LambdaHeadVar__2_39));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (LambdaHeadVar__3_40));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__4_41 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
    }
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_p_0(
  MR_String LambdaHeadVar__1_17,
  MR_Word LambdaHeadVar__2_18,
  MR_Word * LambdaHeadVar__3_19)
{
  {
    MR_Word RevGoalPath0_9;
    MR_Word RevGoalPath_10;
    MR_Word Var_20;

    mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(LambdaHeadVar__1_17, &RevGoalPath0_9);
    mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(RevGoalPath0_9, &RevGoalPath_10);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (RevGoalPath_10));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (LambdaHeadVar__2_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__3_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
    }
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__688__1_3_p_0(
  MR_Word LambdaHeadVar__1_15,
  MR_Integer LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17)
{
  {
    MR_Word CPI_20;

    {
      CPI_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CPI_20, 0) = ((MR_Box) (LambdaHeadVar__1_15));
      MR_hl_field(MR_mktag(0), CPI_20, 1) = ((MR_Box) (LambdaHeadVar__2_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__3_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CPI_20));
    }
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_user_defined__663__1_7_p_0(
  MR_Word PredOrFunc_5,
  MR_String LambdaHeadVar__1_23,
  MR_String LambdaHeadVar__2_24,
  MR_String LambdaHeadVar__3_25,
  MR_Integer LambdaHeadVar__4_26,
  MR_Integer LambdaHeadVar__5_27,
  MR_Word * LambdaHeadVar__6_28)
{
  {
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (PredOrFunc_5));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (LambdaHeadVar__1_23));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (LambdaHeadVar__2_24));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (LambdaHeadVar__3_25));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (LambdaHeadVar__4_26));
      MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (LambdaHeadVar__5_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__6_28 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
    }
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__644__1_7_p_0(
  MR_String LambdaHeadVar__1_23,
  MR_String LambdaHeadVar__2_24,
  MR_String LambdaHeadVar__3_25,
  MR_String LambdaHeadVar__4_26,
  MR_Integer LambdaHeadVar__5_27,
  MR_Integer LambdaHeadVar__6_28,
  MR_Word * LambdaHeadVar__7_29)
{
  {
    MR_Word Var_30;

    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (LambdaHeadVar__1_23));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (LambdaHeadVar__2_24));
      MR_hl_field(MR_mktag(1), Var_30, 2) = ((MR_Box) (LambdaHeadVar__3_25));
      MR_hl_field(MR_mktag(1), Var_30, 3) = ((MR_Box) (LambdaHeadVar__4_26));
      MR_hl_field(MR_mktag(1), Var_30, 4) = ((MR_Box) (LambdaHeadVar__5_27));
      MR_hl_field(MR_mktag(1), Var_30, 5) = ((MR_Box) (LambdaHeadVar__6_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__7_29 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
    }
  }
}

static MR_ArrayPtr MR_CALL 
read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_f_0(
  MR_Word HeadVar__1_73)
{
  {
    MR_ArrayPtr HeadVar__2_74;
    MR_ArrayPtr conv0_HeadVar__2_74;

    conv0_HeadVar__2_74 = mercury__array__array_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, HeadVar__1_73);
    HeadVar__2_74 = (MR_ArrayPtr) conv0_HeadVar__2_74;
    return HeadVar__2_74;
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_static__471__1_7_p_0(
  MR_Integer LambdaHeadVar__1_50,
  MR_Word LambdaHeadVar__2_51,
  MR_String LambdaHeadVar__3_52,
  MR_Integer LambdaHeadVar__4_53,
  MR_Integer LambdaHeadVar__5_54,
  MR_Integer LambdaHeadVar__6_55,
  MR_Word * LambdaHeadVar__7_56)
{
  {
    MR_Tuple Var_57;

    {
      Var_57 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (LambdaHeadVar__1_50));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (LambdaHeadVar__2_51));
      MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) (LambdaHeadVar__3_52));
      MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (LambdaHeadVar__4_53));
      MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (LambdaHeadVar__5_54));
      MR_hl_field(MR_mktag(0), Var_57, 5) = ((MR_Box) (LambdaHeadVar__6_55));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__7_56 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_57));
    }
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_p_0(
  MR_Integer LambdaHeadVar__1_32,
  MR_Word LambdaHeadVar__2_33,
  MR_Integer LambdaHeadVar__3_34,
  MR_String LambdaHeadVar__4_35,
  MR_Word * LambdaHeadVar__5_36)
{
  {
    MR_Word RevGoalPath0_14;
    MR_Word RevGoalPath_15;
    MR_Word CallSiteStatic0_16;
    MR_Tuple Var_37;

    mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(LambdaHeadVar__4_35, &RevGoalPath0_14);
    mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(RevGoalPath0_14, &RevGoalPath_15);
    {
      CallSiteStatic0_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CallSiteStatic0_16, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
      MR_hl_field(MR_mktag(0), CallSiteStatic0_16, 1) = ((MR_Box) ((MR_Integer) -1));
      MR_hl_field(MR_mktag(0), CallSiteStatic0_16, 2) = ((MR_Box) (LambdaHeadVar__2_33));
      MR_hl_field(MR_mktag(0), CallSiteStatic0_16, 3) = ((MR_Box) (LambdaHeadVar__3_34));
      MR_hl_field(MR_mktag(0), CallSiteStatic0_16, 4) = ((MR_Box) (RevGoalPath_15));
    }
    {
      Var_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (CallSiteStatic0_16));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (LambdaHeadVar__1_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__5_36 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
    }
  }
}

static void MR_CALL 
read_profile____Compare____ptr_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
read_profile____Unify____ptr_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
read_profile____Compare____next_deep_item_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
read_profile____Unify____next_deep_item_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
read_profile____Compare____maybe_init_deep_complete_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_23 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_28 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 0);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = (MR_Word) MR_body(((MR_Word) HeadVar__3_3), (MR_Integer) 0);

                  profile____Compare____initial_deep_0_0(HeadVar__1_1, Var_28, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_29 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_13 = (MR_Word) MR_body(((MR_Word) HeadVar__3_3), (MR_Integer) 1);

                  profile____Compare____initial_deep_0_0(HeadVar__1_1, Var_29, ArgY1_13);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_27 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String ArgY1_21 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_27, ArgY1_21);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
read_profile____Unify____maybe_init_deep_complete_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = (MR_Word) MR_body(((MR_Word) HeadVar__1_1), (MR_Integer) 0);
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              ArgY1_4 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 0);
              succeeded = profile____Unify____initial_deep_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = (MR_Word) MR_body(((MR_Word) HeadVar__1_1), (MR_Integer) 1);
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 1);
              succeeded = profile____Unify____initial_deep_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_String ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
read_profile____Compare____maybe_error2_2_0(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Var_22 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String ArgY1_16 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_22, ArgY1_16);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Box Var_23 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Box Var_24 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
        MR_Box ArgY2_7 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
        MR_Word Var_8;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T1_19, &Var_8, Var_24, ArgY1_5);
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_8;
        else
          mercury__builtin__compare_3_p_0(TypeInfo_for_T2_20, HeadVar__1_1, Var_23, ArgY2_7);
      }
    }
  }
}

static MR_bool MR_CALL 
read_profile____Unify____maybe_error2_2_0(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
      }
    }
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;
      MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T1_11, ArgX1_3, ArgY1_4);
        if (succeeded)
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T2_12, ArgX2_5, ArgY2_6);
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
read_profile__make_cssptr_1_f_0(
  MR_Integer CSSI_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) CSSI_3;

    return HeadVar__2_2;
  }
}

static void MR_CALL 
read_profile__read_fixed_size_int_3_p_0(
  MR_Word * MaybeInt_4)
{
  {
    read_profile__read_fixed_size_int_acc_6_p_0((MR_Integer) 8, (MR_Integer) 0, (MR_Integer) 0, MaybeInt_4);
  }
}

static void MR_CALL 
read_profile__read_fixed_size_int_acc_6_p_0(
  MR_Integer BytesLeft_7,
  MR_Integer Num0_8,
  MR_Integer ShiftBy_9,
  MR_Word * MaybeInt_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (BytesLeft_7 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeInt_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Num0_8));
      }
    else
    {
      MR_Word MaybeByte_12;

      read_profile__read_deep_byte_3_p_0(&MaybeByte_12);
      if (((MR_tag((MR_Word) MaybeByte_12)) == (MR_mktag((MR_Integer) 1))))
        *MaybeInt_10 = MaybeByte_12;
      else
      {
        MR_Integer Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeByte_12, (MR_Integer) 0)));
        MR_Integer Num1_14;
        MR_Integer Var_20;
        MR_Integer Var_21;
        MR_Integer Var_22;
        MR_Integer next_value_of_BytesLeft_7;
        MR_Integer next_value_of_Num0_8;
        MR_Integer next_value_of_ShiftBy_9;

        Var_20 = mercury__int__f_60_60_2_f_0(Byte_13, ShiftBy_9);
        Num1_14 = (Num0_8 | Var_20);
        Var_21 = (BytesLeft_7 - (MR_Integer) 1);
        Var_22 = (ShiftBy_9 + (MR_Integer) 8);
        // direct tailcall eliminated
        next_value_of_BytesLeft_7 = Var_21;
        next_value_of_Num0_8 = Num1_14;
        next_value_of_ShiftBy_9 = Var_22;
        BytesLeft_7 = next_value_of_BytesLeft_7;
        Num0_8 = next_value_of_Num0_8;
        ShiftBy_9 = next_value_of_ShiftBy_9;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
read_profile__read_num_3_p_0(
  MR_Word * MaybeNum_4)
{
  {
    read_profile__read_num_acc_4_p_0((MR_Integer) 0, MaybeNum_4);
  }
}

static void MR_CALL 
read_profile__num_to_cp_type_2_p_0(
  MR_Integer Int_1,
  MR_Word * CPType_2)
{
  {
{
#define MR_PROC_LABEL read_profile__num_to_cp_type_2_p_0

	MR_Integer Int;
	MR_Word CPType;

	Int =  Int_1 ;
		{

    CPType = Int;


		;}
#undef MR_PROC_LABEL
	 *CPType_2  = CPType;
}
  }
}

static void MR_CALL 
read_profile__read_cp_type_3_p_0(
  MR_Word * MaybeCPType_4)
{
  {
    MR_Word MaybeNum_6;

    read_profile__read_num_acc_4_p_0((MR_Integer) 0, &MaybeNum_6);
    if (((MR_tag((MR_Word) MaybeNum_6)) == (MR_mktag((MR_Integer) 1))))
      *MaybeCPType_4 = (MR_Word) MaybeNum_6;
    else
    {
      MR_Integer Num_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeNum_6, (MR_Integer) 0)));
      MR_Word CPType_8;

{
#define MR_PROC_LABEL read_profile__read_cp_type_3_p_0

	MR_Integer Int;
	MR_Word CPType;

	Int =  Num_7 ;
		{

    CPType = Int;


		;}
#undef MR_PROC_LABEL
	 CPType_8  = CPType;
}
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCPType_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CPType_8));
      }
    }
  }
}

static void MR_CALL 
read_profile__read_ptr_4_p_0(
  MR_Word _Kind_5,
  MR_Word * MaybePtr_6)
{
  read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_p_0(MaybePtr_6);
}

static void MR_CALL 
read_profile__read_n_things_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Integer N_6,
  MR_Word ItemReader_7,
  MR_Word * MaybeItems_8)
{
  {
    MR_Word MaybeRevItems_10;

    read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_p_0(N_6, ItemReader_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeRevItems_10);
    if (((MR_tag((MR_Word) MaybeRevItems_10)) == (MR_mktag((MR_Integer) 1))))
      *MaybeItems_8 = MaybeRevItems_10;
    else
    {
      MR_Word RevItems_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeRevItems_10, (MR_Integer) 0)));
      MR_Word Items_12;

      mercury__list__reverse_2_p_0(TypeInfo_for_T_18, RevItems_11, &Items_12);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItems_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Items_12));
      }
    }
  }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_p_0(
  MR_Integer N_7,
  MR_Word ItemReader_8,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_7 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItems_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RevItems0_9));
      }
    else
    {
      MR_Word MaybeItem_12;
      void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ItemReader_8, (MR_Integer) 1)));
      MR_Box conv2_MaybeItem_12;
      MR_Box conv1_STATE_VARIABLE_IO_18_18;

      func_0(((MR_Box) ItemReader_8), &conv2_MaybeItem_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18_18);
      MaybeItem_12 = ((MR_Word) conv2_MaybeItem_12);
      if (((MR_tag((MR_Word) MaybeItem_12)) == (MR_mktag((MR_Integer) 1))))
        *MaybeItems_10 = (MR_Word) MaybeItem_12;
      else
      {
        MR_Box Item_13 = (MR_hl_field(MR_mktag(0), MaybeItem_12, (MR_Integer) 0));
        MR_Integer Var_19 = (N_7 - (MR_Integer) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_7;
        MR_Word next_value_of_RevItems0_9;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = Item_13;
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (RevItems0_9));
        }
        // direct tailcall eliminated
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
read_profile__read_call_site_kind_and_callee_3_p_0(
  MR_Word * MaybeKindAndCallee_4)
{
  {
    MR_bool succeeded;
    MR_Word MaybeByte_6;

    read_profile__read_deep_byte_3_p_0(&MaybeByte_6);
    if (((MR_tag((MR_Word) MaybeByte_6)) == (MR_mktag((MR_Integer) 1))))
      *MaybeKindAndCallee_4 = (MR_Word) MaybeByte_6;
    else
    {
      MR_Integer Byte_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeByte_6, (MR_Integer) 0)));
      MR_Word CallSiteKind_8;

      succeeded = profile__is_call_site_kind_2_p_0(Byte_7, &CallSiteKind_8);
      if (succeeded)
        switch (CallSiteKind_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case ((int) MR_callsite_callback):
            {
              *MaybeKindAndCallee_4 = (MR_Word) &read_profile_scalar_common_6[7];
            }
            break;
          case ((int) MR_callsite_higher_order_call):
            {
              *MaybeKindAndCallee_4 = (MR_Word) &read_profile_scalar_common_6[8];
            }
            break;
          case ((int) MR_callsite_method_call):
            {
              *MaybeKindAndCallee_4 = (MR_Word) &read_profile_scalar_common_6[9];
            }
            break;
          case ((int) MR_callsite_normal_call):
            {
              MR_Word MaybeCSS_9;

              read_profile__read_num_acc_4_p_0((MR_Integer) 0, &MaybeCSS_9);
              if (((MR_tag((MR_Word) MaybeCSS_9)) == (MR_mktag((MR_Integer) 1))))
                *MaybeKindAndCallee_4 = (MR_Word) MaybeCSS_9;
              else
              {
                MR_Integer CalleeProcStatic_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeCSS_9, (MR_Integer) 0)));
                MR_Word MaybeTypeSubst_11;

                read_profile__read_string_3_p_0(&MaybeTypeSubst_11);
                if (((MR_tag((MR_Word) MaybeTypeSubst_11)) == (MR_mktag((MR_Integer) 1))))
                  *MaybeKindAndCallee_4 = (MR_Word) MaybeTypeSubst_11;
                else
                {
                  MR_String TypeSubst_12 = ((MR_String) (MR_hl_field(MR_mktag(0), MaybeTypeSubst_11, (MR_Integer) 0)));
                  MR_Word Var_25;
                  MR_Word Var_26 = (MR_Word) CalleeProcStatic_10;

                  {
                    Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
                    MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (TypeSubst_12));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeKindAndCallee_4 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
                  }
                }
              }
            }
            break;
          case ((int) MR_callsite_special_call):
            {
              *MaybeKindAndCallee_4 = (MR_Word) &read_profile_scalar_common_6[10];
            }
            break;
        }
      else
      {
        MR_String Msg_14;
        MR_String Var_40;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &read_profile_scalar_common_6[3], Byte_7, &Var_40);
        Msg_14 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected call_site_kind ", Var_40);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeKindAndCallee_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_14));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
read_profile__read_string_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Char conv0_LambdaHeadVar__2_21;

    succeeded = read_profile__IntroducedFrom__pred__read_n_byte_string__1315__1_2_p_0(((MR_Integer) wrapper_arg_1), &conv0_LambdaHeadVar__2_21);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_LambdaHeadVar__2_21));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
read_profile__read_string_3_p_0(
  MR_Word * MaybeStr_4)
{
  {
    MR_bool succeeded;
    MR_Word MaybeNum_6;

    read_profile__read_num_acc_4_p_0((MR_Integer) 0, &MaybeNum_6);
    if (((MR_tag((MR_Word) MaybeNum_6)) == (MR_mktag((MR_Integer) 1))))
      *MaybeStr_4 = (MR_Word) MaybeNum_6;
    else
    {
      MR_Integer Length_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeNum_6, (MR_Integer) 0)));

      succeeded = (Length_7 == (MR_Integer) 0);
      if (succeeded)
      {
        *MaybeStr_4 = (MR_Word) &read_profile_scalar_common_6[5];
      }
      else
      {
        MR_Word MaybeRevNBytes_62;

        read_profile__read_n_bytes_acc_5_p_0(Length_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeRevNBytes_62);
        if (((MR_tag((MR_Word) MaybeRevNBytes_62)) == (MR_mktag((MR_Integer) 1))))
          *MaybeStr_4 = (MR_Word) MaybeRevNBytes_62;
        else
        {
          MR_Word Bytes_34;
          MR_Word RevBytes_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeRevNBytes_62, (MR_Integer) 0)));
          MR_Word Chars_37;

          mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, RevBytes_63, &Bytes_34);
          succeeded = mercury__list__map_3_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &read_profile_scalar_common_4[55], Bytes_34, &Chars_37);
          if (succeeded)
          {
            MR_String Str_38;

            mercury__string__from_char_list_2_p_0(Chars_37, &Str_38);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeStr_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Str_38));
            }
          }
          else
          {
            *MaybeStr_4 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_6[6]);
          }
        }
      }
    }
  }
}

static void MR_CALL 
read_profile__read_n_bytes_acc_5_p_0(
  MR_Integer N_6,
  MR_Word RevBytes0_7,
  MR_Word * MaybeNBytes_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_6 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeNBytes_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RevBytes0_7));
      }
    else
    {
      MR_Word MaybeByte_10;

      read_profile__read_deep_byte_3_p_0(&MaybeByte_10);
      if (((MR_tag((MR_Word) MaybeByte_10)) == (MR_mktag((MR_Integer) 1))))
        *MaybeNBytes_8 = (MR_Word) MaybeByte_10;
      else
      {
        MR_Integer Byte_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeByte_10, (MR_Integer) 0)));
        MR_Integer Var_17 = (N_6 - (MR_Integer) 1);
        MR_Word Var_18;
        MR_Integer next_value_of_N_6;
        MR_Word next_value_of_RevBytes0_7;

        {
          Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Byte_11));
          MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (RevBytes0_7));
        }
        // direct tailcall eliminated
        next_value_of_N_6 = Var_17;
        next_value_of_RevBytes0_7 = Var_18;
        N_6 = next_value_of_N_6;
        RevBytes0_7 = next_value_of_RevBytes0_7;
        continue;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    conv6_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
read_profile__read_call_site_slot_3_p_0(
  MR_Word * MaybeSlot_4)
{
  {
    MR_Word MaybeKind_7;

    read_profile__read_call_site_kind_3_p_0(&MaybeKind_7);
    if (((MR_tag((MR_Word) MaybeKind_7)) == (MR_mktag((MR_Integer) 1))))
      *MaybeSlot_4 = (MR_Word) MaybeKind_7;
    else
    {
      MR_Word Kind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeKind_7, (MR_Integer) 0)));

      switch (Kind_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case ((int) MR_callsite_callback):
          {
            MR_Word MaybeCSDIs_14;

            read_profile__read_multi_call_site_csdis_3_p_0(&MaybeCSDIs_14);
            if (((MR_tag((MR_Word) MaybeCSDIs_14)) == (MR_mktag((MR_Integer) 1))))
              *MaybeSlot_4 = (MR_Word) MaybeCSDIs_14;
            else
            {
              MR_Word TypeCtorInfo_47_47 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
              MR_Word CSDIs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeCSDIs_14, (MR_Integer) 0)));
              MR_Word CSDPtrs_16;
              MR_Word Var_25;
              MR_ArrayPtr Var_26;
              MR_ArrayPtr conv1_Var_26;

              CSDPtrs_16 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_47_47, (MR_Word) &read_profile_scalar_common_4[51], CSDIs_15);
              conv1_Var_26 = mercury__array__array_1_f_0(TypeCtorInfo_47_47, CSDPtrs_16);
              Var_26 = (MR_ArrayPtr) conv1_Var_26;
              {
                Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_26));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeSlot_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
              }
            }
          }
          break;
        case ((int) MR_callsite_higher_order_call):
          {
            MR_Word MaybeCSDIs_98;

            read_profile__read_multi_call_site_csdis_3_p_0(&MaybeCSDIs_98);
            if (((MR_tag((MR_Word) MaybeCSDIs_98)) == (MR_mktag((MR_Integer) 1))))
              *MaybeSlot_4 = (MR_Word) MaybeCSDIs_98;
            else
            {
              MR_Word TypeCtorInfo_47_80 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
              MR_Word CSDIs_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeCSDIs_98, (MR_Integer) 0)));
              MR_Word CSDPtrs_69;
              MR_Word Var_71;
              MR_ArrayPtr Var_72;
              MR_ArrayPtr conv3_Var_72;

              CSDPtrs_69 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_47_80, (MR_Word) &read_profile_scalar_common_4[52], CSDIs_68);
              conv3_Var_72 = mercury__array__array_1_f_0(TypeCtorInfo_47_80, CSDPtrs_69);
              Var_72 = (MR_ArrayPtr) conv3_Var_72;
              {
                Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_72));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeSlot_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
              }
            }
          }
          break;
        case ((int) MR_callsite_method_call):
          {
            MR_Word MaybeCSDIs_161;

            read_profile__read_multi_call_site_csdis_3_p_0(&MaybeCSDIs_161);
            if (((MR_tag((MR_Word) MaybeCSDIs_161)) == (MR_mktag((MR_Integer) 1))))
              *MaybeSlot_4 = (MR_Word) MaybeCSDIs_161;
            else
            {
              MR_Word TypeCtorInfo_47_143 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
              MR_Word CSDIs_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeCSDIs_161, (MR_Integer) 0)));
              MR_Word CSDPtrs_132;
              MR_Word Var_134;
              MR_ArrayPtr Var_135;
              MR_ArrayPtr conv5_Var_135;

              CSDPtrs_132 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_47_143, (MR_Word) &read_profile_scalar_common_4[53], CSDIs_131);
              conv5_Var_135 = mercury__array__array_1_f_0(TypeCtorInfo_47_143, CSDPtrs_132);
              Var_135 = (MR_ArrayPtr) conv5_Var_135;
              {
                Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_135));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeSlot_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_134));
              }
            }
          }
          break;
        case ((int) MR_callsite_normal_call):
          {
            MR_Word MaybeCSDI_9;

            read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_p_0(&MaybeCSDI_9);
            if (((MR_tag((MR_Word) MaybeCSDI_9)) == (MR_mktag((MR_Integer) 1))))
              *MaybeSlot_4 = (MR_Word) MaybeCSDI_9;
            else
            {
              MR_Integer CSDI_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeCSDI_9, (MR_Integer) 0)));
              MR_Word CSDPtr_11;
              MR_Word Var_35;

              CSDPtr_11 = read_profile__make_csdptr_1_f_0(CSDI_10);
              {
                Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (CSDPtr_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeSlot_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
              }
            }
          }
          break;
        case ((int) MR_callsite_special_call):
          {
            MR_Word MaybeCSDIs_224;

            read_profile__read_multi_call_site_csdis_3_p_0(&MaybeCSDIs_224);
            if (((MR_tag((MR_Word) MaybeCSDIs_224)) == (MR_mktag((MR_Integer) 1))))
              *MaybeSlot_4 = (MR_Word) MaybeCSDIs_224;
            else
            {
              MR_Word TypeCtorInfo_47_206 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
              MR_Word CSDIs_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeCSDIs_224, (MR_Integer) 0)));
              MR_Word CSDPtrs_195;
              MR_Word Var_197;
              MR_ArrayPtr Var_198;
              MR_ArrayPtr conv7_Var_198;

              CSDPtrs_195 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_47_206, (MR_Word) &read_profile_scalar_common_4[54], CSDIs_194);
              conv7_Var_198 = mercury__array__array_1_f_0(TypeCtorInfo_47_206, CSDPtrs_195);
              Var_198 = (MR_ArrayPtr) conv7_Var_198;
              {
                Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (Var_198));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeSlot_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_197));
              }
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_p_0(
  MR_Word * MaybePtr_6)
{
  {
    read_profile__read_num_acc_4_p_0((MR_Integer) 0, MaybePtr_6);
  }
}

static MR_Word MR_CALL 
read_profile__make_csdptr_1_f_0(
  MR_Integer CSDI_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) CSDI_3;

    return HeadVar__2_2;
  }
}

static void MR_CALL 
read_profile__read_call_site_kind_3_p_0(
  MR_Word * MaybeKind_4)
{
  {
    MR_bool succeeded;
    MR_Word MaybeByte_6;

    read_profile__read_deep_byte_3_p_0(&MaybeByte_6);
    if (((MR_tag((MR_Word) MaybeByte_6)) == (MR_mktag((MR_Integer) 1))))
      *MaybeKind_4 = (MR_Word) MaybeByte_6;
    else
    {
      MR_Integer Byte_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeByte_6, (MR_Integer) 0)));
      MR_Word CallSiteKind_8;

      succeeded = profile__is_call_site_kind_2_p_0(Byte_7, &CallSiteKind_8);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeKind_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CallSiteKind_8));
        }
      else
      {
        MR_String Msg_9;
        MR_String Var_26;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &read_profile_scalar_common_6[3], Byte_7, &Var_26);
        Msg_9 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected call_site_kind ", Var_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeKind_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_9));
        }
      }
    }
  }
}

static void MR_CALL 
read_profile__read_multi_call_site_csdis_3_p_0(
  MR_Word * MaybeCSDIs_4)
{
  {
    read_profile__read_multi_call_site_csdis_2_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), MaybeCSDIs_4);
  }
}

static void MR_CALL 
read_profile__read_multi_call_site_csdis_2_4_p_0(
  MR_Word CSDIs0_5,
  MR_Word * MaybeCSDIs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeByte_9;

    // setup for model_det tailcalls optimized into a loop
    read_profile__read_deep_byte_3_p_0(&MaybeByte_9);
    if (((MR_tag((MR_Word) MaybeByte_9)) == (MR_mktag((MR_Integer) 1))))
      *MaybeCSDIs_6 = (MR_Word) MaybeByte_9;
    else
    {
      MR_Integer Byte_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeByte_9, (MR_Integer) 0)));

      succeeded = (Byte_10 == (MR_Integer) 0);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCSDIs_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CSDIs0_5));
        }
      else
      {
        MR_Word MaybeCSDI_11;

        mercury__io__putback_byte_3_p_0(Byte_10);
        read_profile__read_num_acc_4_p_0((MR_Integer) 0, &MaybeCSDI_11);
        if (((MR_tag((MR_Word) MaybeCSDI_11)) == (MR_mktag((MR_Integer) 1))))
          *MaybeCSDIs_6 = (MR_Word) MaybeCSDI_11;
        else
        {
          MR_Integer CSDI_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeCSDI_11, (MR_Integer) 0)));
          MR_Word Var_24;
          MR_Word next_value_of_CSDIs0_5;

          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (CSDI_12));
            MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (CSDIs0_5));
          }
          // direct tailcall eliminated
          next_value_of_CSDIs0_5 = Var_24;
          CSDIs0_5 = next_value_of_CSDIs0_5;
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
  {
    MR_bool succeeded = (C_2 == (MR_Char) 93);

    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__3_19;

    read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_p_0(((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_LambdaHeadVar__3_19);
    *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_19));
  }
}

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MaybeCPType_4;

    read_profile__read_cp_type_3_p_0(&conv1_MaybeCPType_4);
    *wrapper_arg_1 = ((MR_Box) (conv1_MaybeCPType_4));
  }
}

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeStr_4;

    read_profile__read_string_3_p_0(&conv0_MaybeStr_4);
    *wrapper_arg_1 = ((MR_Box) (conv0_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0(
  MR_Word * MaybeCP_4)
{
  {
    io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) &read_profile_scalar_common_4[48], (MR_Word) &read_profile_scalar_common_4[49], (MR_Word) &read_profile_scalar_common_4[50], MaybeCP_4);
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_LambdaHeadVar__7_29;

    read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__644__1_7_p_0(((MR_String) wrapper_arg_1), ((MR_String) wrapper_arg_2), ((MR_String) wrapper_arg_3), ((MR_String) wrapper_arg_4), ((MR_Integer) wrapper_arg_5), ((MR_Integer) wrapper_arg_6), &conv6_LambdaHeadVar__7_29);
    *wrapper_arg_7 = ((MR_Box) (conv6_LambdaHeadVar__7_29));
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_MaybeNum_4;

    read_profile__read_num_3_p_0(&conv5_MaybeNum_4);
    *wrapper_arg_1 = ((MR_Box) (conv5_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_MaybeNum_4;

    read_profile__read_num_3_p_0(&conv4_MaybeNum_4);
    *wrapper_arg_1 = ((MR_Box) (conv4_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_MaybeStr_4;

    read_profile__read_string_3_p_0(&conv3_MaybeStr_4);
    *wrapper_arg_1 = ((MR_Box) (conv3_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_MaybeStr_4;

    read_profile__read_string_3_p_0(&conv2_MaybeStr_4);
    *wrapper_arg_1 = ((MR_Box) (conv2_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MaybeStr_4;

    read_profile__read_string_3_p_0(&conv1_MaybeStr_4);
    *wrapper_arg_1 = ((MR_Box) (conv1_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeStr_4;

    read_profile__read_string_3_p_0(&conv0_MaybeStr_4);
    *wrapper_arg_1 = ((MR_Box) (conv0_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0(
  MR_Word * MaybeProcId_4)
{
  {
    MR_bool succeeded;
    MR_Word MaybeByte_6;

    read_profile__read_deep_byte_3_p_0(&MaybeByte_6);
    if (((MR_tag((MR_Word) MaybeByte_6)) == (MR_mktag((MR_Integer) 1))))
      *MaybeProcId_4 = (MR_Word) MaybeByte_6;
    else
    {
      MR_Integer Byte_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeByte_6, (MR_Integer) 0)));
      MR_Word ProcLabelKind_8;

      succeeded = mdbcomp__program_representation__is_proclabel_kind_2_p_0(Byte_7, &ProcLabelKind_8);
      if (succeeded)
        switch (ProcLabelKind_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case ((int) MR_proclabel_special):
            {
              MR_Word TypeCtorInfo_56_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word TypeCtorInfo_57_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

              io_combinator__maybe_error_sequence_6_10_p_0(TypeCtorInfo_56_83, TypeCtorInfo_56_83, TypeCtorInfo_56_83, TypeCtorInfo_56_83, TypeCtorInfo_57_84, TypeCtorInfo_57_84, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0, (MR_Word) &read_profile_scalar_common_4[41], (MR_Word) &read_profile_scalar_common_4[42], (MR_Word) &read_profile_scalar_common_4[43], (MR_Word) &read_profile_scalar_common_4[44], (MR_Word) &read_profile_scalar_common_4[45], (MR_Word) &read_profile_scalar_common_4[46], (MR_Word) &read_profile_scalar_common_4[47], MaybeProcId_4);
            }
            break;
          case ((int) MR_proclabel_user_function):
            {
              read_profile__read_proc_id_user_defined_4_p_0((MR_Integer) 1, MaybeProcId_4);
            }
            break;
          case ((int) MR_proclabel_user_predicate):
            {
              read_profile__read_proc_id_user_defined_4_p_0((MR_Integer) 0, MaybeProcId_4);
            }
            break;
        }
      else
      {
        MR_String Msg_9;
        MR_String Var_23;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &read_profile_scalar_common_6[3], Byte_7, &Var_23);
        Msg_9 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected proclabel_kind ", Var_23);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeProcId_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_9));
        }
      }
    }
  }
}

static void MR_CALL 
read_profile__read_deep_byte_3_p_0(
  MR_Word * MaybeByte_4)
{
  {
    MR_Word MaybeRawByte_6;

    mercury__io__read_byte_3_p_0(&MaybeRawByte_6);
    switch (MR_tag((MR_Word) MaybeRawByte_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeByte_4 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_6[0]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeRawByte_6, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeByte_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Byte_7));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), MaybeRawByte_6, (MR_Integer) 0)));
          MR_String Msg_9;

          mercury__io__error_message_2_p_0(Error_8, &Msg_9);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeByte_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_9));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_LambdaHeadVar__6_28;

    read_profile__IntroducedFrom__pred__read_proc_id_user_defined__663__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1), ((MR_String) wrapper_arg_2), ((MR_String) wrapper_arg_3), ((MR_Integer) wrapper_arg_4), ((MR_Integer) wrapper_arg_5), &conv5_LambdaHeadVar__6_28);
    *wrapper_arg_6 = ((MR_Box) (conv5_LambdaHeadVar__6_28));
  }
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_MaybeNum_4;

    read_profile__read_num_3_p_0(&conv4_MaybeNum_4);
    *wrapper_arg_1 = ((MR_Box) (conv4_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_MaybeNum_4;

    read_profile__read_num_3_p_0(&conv3_MaybeNum_4);
    *wrapper_arg_1 = ((MR_Box) (conv3_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_MaybeStr_4;

    read_profile__read_string_3_p_0(&conv2_MaybeStr_4);
    *wrapper_arg_1 = ((MR_Box) (conv2_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MaybeStr_4;

    read_profile__read_string_3_p_0(&conv1_MaybeStr_4);
    *wrapper_arg_1 = ((MR_Box) (conv1_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeStr_4;

    read_profile__read_string_3_p_0(&conv0_MaybeStr_4);
    *wrapper_arg_1 = ((MR_Box) (conv0_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0(
  MR_Word PredOrFunc_5,
  MR_Word * MaybeProcLabel_6)
{
  {
    MR_Word TypeCtorInfo_51_51;
    MR_Word TypeCtorInfo_52_52;
    MR_Word Var_21;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&read_profile_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (read_profile__read_proc_id_user_defined_4_p_0_6));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (PredOrFunc_5));
    }
    TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    TypeCtorInfo_52_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    io_combinator__maybe_error_sequence_5_9_p_0(TypeCtorInfo_51_51, TypeCtorInfo_51_51, TypeCtorInfo_51_51, TypeCtorInfo_52_52, TypeCtorInfo_52_52, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0, (MR_Word) &read_profile_scalar_common_4[36], (MR_Word) &read_profile_scalar_common_4[37], (MR_Word) &read_profile_scalar_common_4[38], (MR_Word) &read_profile_scalar_common_4[39], (MR_Word) &read_profile_scalar_common_4[40], Var_21, MaybeProcLabel_6);
  }
}

static void MR_CALL 
read_profile__maybe_read_pd_coverage_points_4_p_0(
  MR_Word ProfileStats_5,
  MR_Word * MaybeCoveragePoints_6)
{
  {
    MR_Word CoverageDataType_8;
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 9)));
    MR_String Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 0)));
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 1)));
    MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 2)));
    MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 3)));
    MR_Integer Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 4)));
    MR_Integer Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 5)));
    MR_Integer Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 6)));
    MR_Integer Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 7)));
    MR_Integer Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 8)));
    MR_Integer Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1)));

    CoverageDataType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 3)));
    switch (CoverageDataType_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word ResN_9;

          read_profile__read_num_acc_4_p_0((MR_Integer) 0, &ResN_9);
          if (((MR_tag((MR_Word) ResN_9)) == (MR_mktag((MR_Integer) 1))))
            *MaybeCoveragePoints_6 = (MR_Word) ResN_9;
          else
          {
            MR_Integer N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ResN_9, (MR_Integer) 0)));
            MR_Word MaybeRevItems_61;

            read_profile__read_n_things__ho8_6_p_0(N_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeRevItems_61);
            if (((MR_tag((MR_Word) MaybeRevItems_61)) == (MR_mktag((MR_Integer) 1))))
              *MaybeCoveragePoints_6 = (MR_Word) MaybeRevItems_61;
            else
            {
              MR_Word CPsList_12;
              MR_Word Var_20;
              MR_ArrayPtr Var_21;
              MR_Word RevItems_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeRevItems_61, (MR_Integer) 0)));
              MR_ArrayPtr conv0_Var_21;

              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, RevItems_62, &CPsList_12);
              conv0_Var_21 = mercury__array__array_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, CPsList_12);
              Var_21 = (MR_ArrayPtr) conv0_Var_21;
              {
                Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeCoveragePoints_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
              }
            }
          }
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          *MaybeCoveragePoints_6 = (MR_Word) &read_profile_scalar_common_6[4];
        }
        break;
    }
  }
}

static void MR_CALL 
read_profile__read_n_things__ho8_6_p_0(
  MR_Integer N_7,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_7 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItems_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RevItems0_9));
      }
    else
    {
      MR_Word MaybeItem_12;

      read_profile__read_num_acc_4_p_0((MR_Integer) 0, &MaybeItem_12);
      if (((MR_tag((MR_Word) MaybeItem_12)) == (MR_mktag((MR_Integer) 1))))
        *MaybeItems_10 = (MR_Word) MaybeItem_12;
      else
      {
        MR_Integer Item_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeItem_12, (MR_Integer) 0)));
        MR_Integer Var_19 = (N_7 - (MR_Integer) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_7;
        MR_Word next_value_of_RevItems0_9;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Item_13));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (RevItems0_9));
        }
        // direct tailcall eliminated
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
  {
    MR_Word MaybeFlags_25;

    read_profile__maybe_deep_flags_2_p_0(FlagsInt_14, &MaybeFlags_25);
    if (((MR_tag((MR_Word) MaybeFlags_25)) == (MR_mktag((MR_Integer) 1))))
      *MaybeInitDeep_24 = (MR_Word) MaybeFlags_25;
    else
    {
      MR_Word Flags_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeFlags_25, (MR_Integer) 0)));
      MR_Word InitStats_27;
      MR_Word InitDeep_28;
      MR_Word Var_30;
      MR_ArrayPtr Var_31;
      MR_Integer Var_32;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_37;
      MR_ArrayPtr Var_38;
      MR_Integer Var_39;
      MR_Word Var_41;
      MR_ArrayPtr Var_43;
      MR_ArrayPtr Var_46;
      MR_Integer Var_47;
      MR_ArrayPtr Var_57;
      MR_Integer Var_58;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_ArrayPtr Var_69;
      MR_ArrayPtr Var_71;
      MR_ArrayPtr conv0_Var_31;
      MR_ArrayPtr conv1_Var_43;
      MR_ArrayPtr conv2_Var_38;
      MR_ArrayPtr conv3_Var_46;
      MR_ArrayPtr conv4_Var_69;
      MR_ArrayPtr conv5_Var_71;
      MR_ArrayPtr conv6_Var_57;

      {
        InitStats_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InitStats_27, 0) = ((MR_Box) (ProgName_13));
        MR_hl_field(MR_mktag(0), InitStats_27, 1) = ((MR_Box) (MaxCSD_15));
        MR_hl_field(MR_mktag(0), InitStats_27, 2) = ((MR_Box) (MaxCSS_16));
        MR_hl_field(MR_mktag(0), InitStats_27, 3) = ((MR_Box) (MaxPD_17));
        MR_hl_field(MR_mktag(0), InitStats_27, 4) = ((MR_Box) (MaxPS_18));
        MR_hl_field(MR_mktag(0), InitStats_27, 5) = ((MR_Box) (TicksPerSec_19));
        MR_hl_field(MR_mktag(0), InitStats_27, 6) = ((MR_Box) (InstrumentQuanta_20));
        MR_hl_field(MR_mktag(0), InitStats_27, 7) = ((MR_Box) (UserQuanta_21));
        MR_hl_field(MR_mktag(0), InitStats_27, 8) = ((MR_Box) (NumCallSeqs_22));
        MR_hl_field(MR_mktag(0), InitStats_27, 9) = ((MR_Box) (Flags_26));
      }
      Var_30 = (MR_Word) RootPDI_23;
      Var_32 = (MaxCSD_15 + (MR_Integer) 1);
      Var_35 = (MR_Word) ((MR_Box) ((MR_Integer) -1));
      Var_37 = measurements__zero_own_prof_info_0_f_0();
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (Var_37));
      }
      conv0_Var_31 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, Var_32, ((MR_Box) (Var_34)));
      Var_31 = (MR_ArrayPtr) conv0_Var_31;
      Var_39 = (MaxPD_17 + (MR_Integer) 1);
      conv1_Var_43 = mercury__array__array_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      Var_43 = (MR_ArrayPtr) conv1_Var_43;
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      conv2_Var_38 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, Var_39, ((MR_Box) (Var_41)));
      Var_38 = (MR_ArrayPtr) conv2_Var_38;
      Var_47 = (MaxCSS_16 + (MR_Integer) 1);
      conv3_Var_46 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, Var_47, ((MR_Box) (&read_profile_scalar_common_5[3])));
      Var_46 = (MR_ArrayPtr) conv3_Var_46;
      Var_58 = (MaxPS_18 + (MR_Integer) 1);
      Var_61 = profile__dummy_proc_id_0_f_0();
      conv4_Var_69 = mercury__array__array_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      Var_69 = (MR_ArrayPtr) conv4_Var_69;
      conv5_Var_71 = mercury__array__array_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      Var_71 = (MR_ArrayPtr) conv5_Var_71;
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(0), Var_60, 5) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(0), Var_60, 6) = ((MR_Box) ((MR_Integer) -1));
        MR_hl_field(MR_mktag(0), Var_60, 7) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Var_60, 8) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), Var_60, 9) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), Var_60, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Var_60, 11) = ((MR_Box) ((MR_Integer) 1));
      }
      conv6_Var_57 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, Var_58, ((MR_Box) (Var_60)));
      Var_57 = (MR_ArrayPtr) conv6_Var_57;
      {
        InitDeep_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InitDeep_28, 0) = ((MR_Box) (InitStats_27));
        MR_hl_field(MR_mktag(0), InitDeep_28, 1) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), InitDeep_28, 2) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), InitDeep_28, 3) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), InitDeep_28, 4) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), InitDeep_28, 5) = ((MR_Box) (Var_57));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeInitDeep_24 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InitDeep_28));
      }
    }
  }
}

static void MR_CALL 
read_profile__maybe_deep_flags_2_p_0(
  MR_Integer FlagsInt_3,
  MR_Word * MaybeFlags_4)
{
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
          Var_25 = (MR_Integer) -16384;
          Var_34 = (Var_25 & FlagsInt_3);
          succeeded = (Var_24 == Var_34);
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_27;

      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (BytesPerInt_5));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (CanonicalFlag_9));
        MR_hl_field(MR_mktag(0), Var_27, 2) = NULL;
        MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (CoverageFlag_11));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeFlags_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
      }
    }
    else
    {
      MR_String Var_28;
      MR_String Var_35;

      mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) &read_profile_scalar_common_6[3], (MR_Integer) 2, FlagsInt_3, &Var_35);
      Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "Error parsing flags in file header, flags are 0x", Var_35);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFlags_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
      }
    }
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_12(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_MaybeInitDeep_24;

    read_profile__maybe_init_deep_12_p_0(((MR_String) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3), ((MR_Integer) wrapper_arg_4), ((MR_Integer) wrapper_arg_5), ((MR_Integer) wrapper_arg_6), ((MR_Integer) wrapper_arg_7), ((MR_Integer) wrapper_arg_8), ((MR_Integer) wrapper_arg_9), ((MR_Integer) wrapper_arg_10), ((MR_Integer) wrapper_arg_11), &conv11_MaybeInitDeep_24);
    *wrapper_arg_12 = ((MR_Box) (conv11_MaybeInitDeep_24));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_11(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_MaybePtr_6;

    read_profile__read_ptr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv10_MaybePtr_6);
    *wrapper_arg_1 = ((MR_Box) (conv10_MaybePtr_6));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_10(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_MaybeNum_4;

    read_profile__read_num_3_p_0(&conv9_MaybeNum_4);
    *wrapper_arg_1 = ((MR_Box) (conv9_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_9(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_MaybeNum_4;

    read_profile__read_num_3_p_0(&conv8_MaybeNum_4);
    *wrapper_arg_1 = ((MR_Box) (conv8_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_MaybeNum_4;

    read_profile__read_num_3_p_0(&conv7_MaybeNum_4);
    *wrapper_arg_1 = ((MR_Box) (conv7_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_MaybeNum_4;

    read_profile__read_num_3_p_0(&conv6_MaybeNum_4);
    *wrapper_arg_1 = ((MR_Box) (conv6_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_MaybeInt_4;

    read_profile__read_fixed_size_int_3_p_0(&conv5_MaybeInt_4);
    *wrapper_arg_1 = ((MR_Box) (conv5_MaybeInt_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_MaybeInt_4;

    read_profile__read_fixed_size_int_3_p_0(&conv4_MaybeInt_4);
    *wrapper_arg_1 = ((MR_Box) (conv4_MaybeInt_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_MaybeInt_4;

    read_profile__read_fixed_size_int_3_p_0(&conv3_MaybeInt_4);
    *wrapper_arg_1 = ((MR_Box) (conv3_MaybeInt_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_MaybeInt_4;

    read_profile__read_fixed_size_int_3_p_0(&conv2_MaybeInt_4);
    *wrapper_arg_1 = ((MR_Box) (conv2_MaybeInt_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MaybeInt_4;

    read_profile__read_fixed_size_int_3_p_0(&conv1_MaybeInt_4);
    *wrapper_arg_1 = ((MR_Box) (conv1_MaybeInt_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeStr_4;

    read_profile__read_string_3_p_0(&conv0_MaybeStr_4);
    *wrapper_arg_1 = ((MR_Box) (conv0_MaybeStr_4));
  }
}

void MR_CALL 
read_profile__read_call_graph_4_p_0(
  MR_String FileName_5,
  MR_Word * MaybeInitDeep_6)
{
  {
    MR_Word OpenResult_8;

    mercury__io__open_binary_input_4_p_0(FileName_5, &OpenResult_8);
    if (((MR_tag((MR_Word) OpenResult_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpenResult_8, (MR_Integer) 0)));
      MR_String Msg_40;

      mercury__io__error_message_2_p_0(Error_39, &Msg_40);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeInitDeep_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_40));
      }
    }
    else
    {
      MR_Word FileStream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpenResult_8, (MR_Integer) 0)));
      MR_Word OldStream_10;
      MR_Word MaybeVersionNumber_11;
      MR_Word Var_17;

      mercury__io__set_binary_input_stream_4_p_0(FileStream_9, &OldStream_10);
      read_profile__read_deep_id_string_3_p_0(&MaybeVersionNumber_11);
      if (((MR_tag((MR_Word) MaybeVersionNumber_11)) == (MR_mktag((MR_Integer) 1))))
        *MaybeInitDeep_6 = (MR_Word) MaybeVersionNumber_11;
      else
      {
        MR_Word TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word MaybeInitDeepHeader_13;

        io_combinator__maybe_error_sequence_11_15_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeCtorInfo_87_87, TypeCtorInfo_87_87, TypeCtorInfo_87_87, TypeCtorInfo_87_87, TypeCtorInfo_87_87, TypeCtorInfo_87_87, TypeCtorInfo_87_87, TypeCtorInfo_87_87, TypeCtorInfo_87_87, TypeCtorInfo_87_87, (MR_Word) &profile__profile__type_ctor_info_initial_deep_0, (MR_Word) &read_profile_scalar_common_4[25], (MR_Word) &read_profile_scalar_common_4[26], (MR_Word) &read_profile_scalar_common_4[27], (MR_Word) &read_profile_scalar_common_4[28], (MR_Word) &read_profile_scalar_common_4[29], (MR_Word) &read_profile_scalar_common_4[30], (MR_Word) &read_profile_scalar_common_4[31], (MR_Word) &read_profile_scalar_common_4[32], (MR_Word) &read_profile_scalar_common_4[33], (MR_Word) &read_profile_scalar_common_4[34], (MR_Word) &read_profile_scalar_common_2[7], (MR_Word) &read_profile_scalar_common_4[35], &MaybeInitDeepHeader_13);
        if (((MR_tag((MR_Word) MaybeInitDeepHeader_13)) == (MR_mktag((MR_Integer) 1))))
          *MaybeInitDeep_6 = MaybeInitDeepHeader_13;
        else
        {
          MR_Word InitDeep_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeInitDeepHeader_13, (MR_Integer) 0)));

          read_profile__read_nodes_4_p_0(InitDeep_14, MaybeInitDeep_6);
        }
      }
      mercury__io__set_binary_input_stream_4_p_0(OldStream_10, &Var_17);
    }
  }
}

static void MR_CALL 
read_profile__read_nodes_4_p_0(
  MR_Word InitDeep0_5,
  MR_Word * MaybeInitDeep_6)
{
  while (MR_TRUE)
  {
    MR_Word MaybeInitDeep0_8;

    // setup for model_det tailcalls optimized into a loop
    read_profile__read_nodes_3_5_p_0(((MR_Integer) 50000 - (MR_Integer) 1), InitDeep0_5, &MaybeInitDeep0_8);
    switch (MR_tag((MR_Word) MaybeInitDeep0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word InitDeep_9 = (MR_Word) MR_body(((MR_Word) MaybeInitDeep0_8), (MR_Integer) 0);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeInitDeep_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InitDeep_9));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InitDeep1_11 = (MR_Word) MR_body(((MR_Word) MaybeInitDeep0_8), (MR_Integer) 1);
          MR_Word next_value_of_InitDeep0_5 = InitDeep1_11;

          // direct tailcall eliminated
          InitDeep0_5 = next_value_of_InitDeep0_5;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Error_10 = ((MR_String) (MR_hl_field(MR_mktag(2), MaybeInitDeep0_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeInitDeep_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_10));
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
read_profile__read_nodes_2_5_p_0(
  MR_Integer tscc_proc_1_input_1_Depth_6,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10,
  MR_Word * tscc_output_ptr_1_MaybeInitDeep_8)
{
  {
    MR_Integer tscc_proc_2_input_1_Depth_6;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_InitDeep_0_36;
    MR_Word tscc_output_1_MaybeInitDeep_8;

    // The code for TSCC PROC 1: pred read_profile.read_nodes_2/5-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred read_profile.read_nodes_2/5-0
    // proc 2 in TSCC: pred read_profile.read_nodes_3/5-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Integer Depth_6 = tscc_proc_1_input_1_Depth_6;
      MR_Word STATE_VARIABLE_InitDeep_0_10 = tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;
      MR_Word MaybeInitDeep_8;
      MR_bool succeeded = (Depth_6 < (MR_Integer) 1);

      if (succeeded)
        MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) STATE_VARIABLE_InitDeep_0_10);
      else
      {
        MR_Integer Var_14 = (Depth_6 - (MR_Integer) 1);
        MR_Integer next_value_of_tscc_proc_2_input_1_Depth_6 = Var_14;
        MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InitDeep_0_36 = STATE_VARIABLE_InitDeep_0_10;

        // direct tailcall eliminated
        tscc_proc_2_input_1_Depth_6 = next_value_of_tscc_proc_2_input_1_Depth_6;
        tscc_proc_2_input_2_STATE_VARIABLE_InitDeep_0_36 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InitDeep_0_36;
        goto top_of_proc_2;
      }
      tscc_output_1_MaybeInitDeep_8 = MaybeInitDeep_8;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Integer Depth_6 = tscc_proc_2_input_1_Depth_6;
      MR_Word STATE_VARIABLE_InitDeep_0_36 = tscc_proc_2_input_2_STATE_VARIABLE_InitDeep_0_36;
      MR_Word MaybeInitDeep_8;
      MR_bool succeeded;
      MR_Word ProfileStats_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
      MR_Word MaybeByte_11;
      MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
      MR_ArrayPtr Var_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
      MR_ArrayPtr Var_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
      MR_ArrayPtr Var_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
      MR_ArrayPtr Var_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));

      mercury__io__read_byte_3_p_0(&MaybeByte_11);
      switch (MR_tag((MR_Word) MaybeByte_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) STATE_VARIABLE_InitDeep_0_36);
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeByte_11, (MR_Integer) 0)));
            MR_Word NextItem_13;

            succeeded = read_profile__is_next_item_token_2_p_0(Byte_12, &NextItem_13);
            if (succeeded)
              switch (NextItem_13) {
                default: /*NOTREACHED*/ MR_assert(0);
                case ((int) MR_deep_item_call_site_dynamic):
                  {
                    MR_Word MaybeCSD_14;

                    read_profile__read_call_site_dynamic_3_p_0(&MaybeCSD_14);
                    if (((MR_tag((MR_Word) MaybeCSD_14)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_String Error_19 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeCSD_14, (MR_Integer) 0)));

                      {
                        MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), MaybeInitDeep_8, 0) = ((MR_Box) (Error_19));
                      }
                    }
                    else
                    {
                      MR_Word CallSiteDynamic_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeCSD_14, (MR_Integer) 0)));
                      MR_Integer CSDI_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeCSD_14, (MR_Integer) 1)));
                      MR_ArrayPtr CSDs0_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      MR_ArrayPtr CSDs_18;
                      MR_Word STATE_VARIABLE_InitDeep_51_51;
                      MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      MR_ArrayPtr Var_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      MR_ArrayPtr Var_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      MR_ArrayPtr Var_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      MR_ArrayPtr conv0_CSDs_18;
                      MR_Word Var_103;
                      MR_Word Var_104;
                      MR_ArrayPtr Var_106;
                      MR_ArrayPtr Var_107;
                      MR_ArrayPtr Var_108;
                      MR_ArrayPtr Var_105;
                      MR_Integer next_value_of_tscc_proc_1_input_1_Depth_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;

                      read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) CSDs0_17, CSDI_16, ((MR_Box) (CallSiteDynamic_15)), &conv0_CSDs_18);
                      CSDs_18 = (MR_ArrayPtr) conv0_CSDs_18;
                      Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      Var_105 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      Var_106 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      Var_107 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      Var_108 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      {
                        STATE_VARIABLE_InitDeep_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_51, 0) = ((MR_Box) (Var_103));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_51, 1) = ((MR_Box) (Var_104));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_51, 2) = ((MR_Box) (CSDs_18));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_51, 3) = ((MR_Box) (Var_106));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_51, 4) = ((MR_Box) (Var_107));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_51, 5) = ((MR_Box) (Var_108));
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Depth_6 = Depth_6;
                      next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = STATE_VARIABLE_InitDeep_51_51;
                      tscc_proc_1_input_1_Depth_6 = next_value_of_tscc_proc_1_input_1_Depth_6;
                      tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case ((int) MR_deep_item_call_site_static):
                  {
                    MR_Word MaybeCSS_25;

                    read_profile__read_call_site_static_3_p_0(&MaybeCSS_25);
                    if (((MR_tag((MR_Word) MaybeCSS_25)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_String Error_69 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeCSS_25, (MR_Integer) 0)));

                      {
                        MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), MaybeInitDeep_8, 0) = ((MR_Box) (Error_69));
                      }
                    }
                    else
                    {
                      MR_Word CallSiteStatic_26;
                      MR_Integer CSSI_27;
                      MR_ArrayPtr CSSs0_28;
                      MR_ArrayPtr CSSs_29;
                      MR_Tuple Var_44 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), MaybeCSS_25, (MR_Integer) 0)));
                      MR_Word STATE_VARIABLE_InitDeep_51_67;
                      MR_Word Var_120;
                      MR_Word Var_121;
                      MR_ArrayPtr Var_122;
                      MR_ArrayPtr Var_123;
                      MR_ArrayPtr Var_124;
                      MR_ArrayPtr conv1_CSSs_29;
                      MR_Word Var_125;
                      MR_Word Var_126;
                      MR_ArrayPtr Var_127;
                      MR_ArrayPtr Var_128;
                      MR_ArrayPtr Var_130;
                      MR_ArrayPtr Var_129;
                      MR_Integer next_value_of_tscc_proc_1_input_1_Depth_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;

                      CallSiteStatic_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0)));
                      CSSI_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 1)));
                      Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      Var_122 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      Var_123 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      CSSs0_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      Var_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_ArrayPtr) CSSs0_28, CSSI_27, ((MR_Box) (CallSiteStatic_26)), &conv1_CSSs_29);
                      CSSs_29 = (MR_ArrayPtr) conv1_CSSs_29;
                      Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      Var_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      Var_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      Var_129 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      Var_130 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      {
                        STATE_VARIABLE_InitDeep_51_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_67, 0) = ((MR_Box) (Var_125));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_67, 1) = ((MR_Box) (Var_126));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_67, 2) = ((MR_Box) (Var_127));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_67, 3) = ((MR_Box) (Var_128));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_67, 4) = ((MR_Box) (CSSs_29));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_67, 5) = ((MR_Box) (Var_130));
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Depth_6 = Depth_6;
                      next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = STATE_VARIABLE_InitDeep_51_67;
                      tscc_proc_1_input_1_Depth_6 = next_value_of_tscc_proc_1_input_1_Depth_6;
                      tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case ((int) MR_deep_item_end):
                  MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) STATE_VARIABLE_InitDeep_0_36);
                  break;
                case ((int) MR_deep_item_proc_dynamic):
                  {
                    MR_Word MaybePD_20;

                    read_profile__read_proc_dynamic_4_p_0(ProfileStats_10, &MaybePD_20);
                    if (((MR_tag((MR_Word) MaybePD_20)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_String Error_61 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybePD_20, (MR_Integer) 0)));

                      {
                        MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), MaybeInitDeep_8, 0) = ((MR_Box) (Error_61));
                      }
                    }
                    else
                    {
                      MR_Word ProcDynamic_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybePD_20, (MR_Integer) 0)));
                      MR_Integer PDI_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybePD_20, (MR_Integer) 1)));
                      MR_ArrayPtr PDs0_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      MR_ArrayPtr PDs_24;
                      MR_Word STATE_VARIABLE_InitDeep_51_59;
                      MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      MR_ArrayPtr Var_111 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      MR_ArrayPtr Var_112 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      MR_ArrayPtr Var_113 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      MR_ArrayPtr conv2_PDs_24;
                      MR_Word Var_114;
                      MR_Word Var_115;
                      MR_ArrayPtr Var_116;
                      MR_ArrayPtr Var_118;
                      MR_ArrayPtr Var_119;
                      MR_ArrayPtr Var_117;
                      MR_Integer next_value_of_tscc_proc_1_input_1_Depth_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;

                      read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) PDs0_23, PDI_22, ((MR_Box) (ProcDynamic_21)), &conv2_PDs_24);
                      PDs_24 = (MR_ArrayPtr) conv2_PDs_24;
                      Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      Var_116 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      Var_117 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      Var_118 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      Var_119 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      {
                        STATE_VARIABLE_InitDeep_51_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_59, 0) = ((MR_Box) (Var_114));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_59, 1) = ((MR_Box) (Var_115));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_59, 2) = ((MR_Box) (Var_116));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_59, 3) = ((MR_Box) (PDs_24));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_59, 4) = ((MR_Box) (Var_118));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_59, 5) = ((MR_Box) (Var_119));
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Depth_6 = Depth_6;
                      next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = STATE_VARIABLE_InitDeep_51_59;
                      tscc_proc_1_input_1_Depth_6 = next_value_of_tscc_proc_1_input_1_Depth_6;
                      tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case ((int) MR_deep_item_proc_static):
                  {
                    MR_Word MaybePS_30;

                    read_profile__read_proc_static_4_p_0(ProfileStats_10, &MaybePS_30);
                    if (((MR_tag((MR_Word) MaybePS_30)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_String Error_77 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybePS_30, (MR_Integer) 0)));

                      {
                        MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), MaybeInitDeep_8, 0) = ((MR_Box) (Error_77));
                      }
                    }
                    else
                    {
                      MR_Word ProcStatic_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybePS_30, (MR_Integer) 0)));
                      MR_Integer PSI_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybePS_30, (MR_Integer) 1)));
                      MR_ArrayPtr PSs0_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      MR_ArrayPtr PSs_34;
                      MR_Word STATE_VARIABLE_InitDeep_51_75;
                      MR_Word Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      MR_ArrayPtr Var_133 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      MR_ArrayPtr Var_134 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      MR_ArrayPtr Var_135 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      MR_ArrayPtr conv3_PSs_34;
                      MR_Word Var_136;
                      MR_Word Var_137;
                      MR_ArrayPtr Var_138;
                      MR_ArrayPtr Var_139;
                      MR_ArrayPtr Var_140;
                      MR_ArrayPtr Var_141;
                      MR_Integer next_value_of_tscc_proc_1_input_1_Depth_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;

                      read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_ArrayPtr) PSs0_33, PSI_32, ((MR_Box) (ProcStatic_31)), &conv3_PSs_34);
                      PSs_34 = (MR_ArrayPtr) conv3_PSs_34;
                      Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      Var_138 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      Var_139 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      Var_140 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      Var_141 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      {
                        STATE_VARIABLE_InitDeep_51_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_75, 0) = ((MR_Box) (Var_136));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_75, 1) = ((MR_Box) (Var_137));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_75, 2) = ((MR_Box) (Var_138));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_75, 3) = ((MR_Box) (Var_139));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_75, 4) = ((MR_Box) (Var_140));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_75, 5) = ((MR_Box) (PSs_34));
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Depth_6 = Depth_6;
                      next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = STATE_VARIABLE_InitDeep_51_75;
                      tscc_proc_1_input_1_Depth_6 = next_value_of_tscc_proc_1_input_1_Depth_6;
                      tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;
                      goto top_of_proc_1;
                    }
                  }
                  break;
              }
            else
            {
              MR_String Msg_35;
              MR_String Var_146;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &read_profile_scalar_common_6[3], Byte_12, &Var_146);
              Msg_35 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected token ", Var_146);
              {
                MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), MaybeInitDeep_8, 0) = ((MR_Box) (Msg_35));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), MaybeByte_11, (MR_Integer) 0)));
            MR_String Msg_91;

            mercury__io__error_message_2_p_0(Error_90, &Msg_91);
            {
              MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), MaybeInitDeep_8, 0) = ((MR_Box) (Msg_91));
            }
          }
          break;
      }
      tscc_output_1_MaybeInitDeep_8 = MaybeInitDeep_8;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_MaybeInitDeep_8 = tscc_output_1_MaybeInitDeep_8;
    return;
  }
}

static void MR_CALL 
read_profile__read_nodes_3_5_p_0(
  MR_Integer tscc_proc_2_input_1_Depth_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_InitDeep_0_36,
  MR_Word * tscc_output_ptr_1_MaybeInitDeep_8)
{
  {
    MR_Integer tscc_proc_1_input_1_Depth_6;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;
    MR_Word tscc_output_1_MaybeInitDeep_8;

    // The code for TSCC PROC 2: pred read_profile.read_nodes_3/5-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred read_profile.read_nodes_2/5-0
    // proc 2 in TSCC: pred read_profile.read_nodes_3/5-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Integer Depth_6 = tscc_proc_1_input_1_Depth_6;
      MR_Word STATE_VARIABLE_InitDeep_0_10 = tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;
      MR_Word MaybeInitDeep_8;
      MR_bool succeeded = (Depth_6 < (MR_Integer) 1);

      if (succeeded)
        MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) STATE_VARIABLE_InitDeep_0_10);
      else
      {
        MR_Integer Var_14 = (Depth_6 - (MR_Integer) 1);
        MR_Integer next_value_of_tscc_proc_2_input_1_Depth_6 = Var_14;
        MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InitDeep_0_36 = STATE_VARIABLE_InitDeep_0_10;

        // direct tailcall eliminated
        tscc_proc_2_input_1_Depth_6 = next_value_of_tscc_proc_2_input_1_Depth_6;
        tscc_proc_2_input_2_STATE_VARIABLE_InitDeep_0_36 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InitDeep_0_36;
        goto top_of_proc_2;
      }
      tscc_output_1_MaybeInitDeep_8 = MaybeInitDeep_8;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Integer Depth_6 = tscc_proc_2_input_1_Depth_6;
      MR_Word STATE_VARIABLE_InitDeep_0_36 = tscc_proc_2_input_2_STATE_VARIABLE_InitDeep_0_36;
      MR_Word MaybeInitDeep_8;
      MR_bool succeeded;
      MR_Word ProfileStats_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
      MR_Word MaybeByte_11;
      MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
      MR_ArrayPtr Var_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
      MR_ArrayPtr Var_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
      MR_ArrayPtr Var_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
      MR_ArrayPtr Var_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));

      mercury__io__read_byte_3_p_0(&MaybeByte_11);
      switch (MR_tag((MR_Word) MaybeByte_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) STATE_VARIABLE_InitDeep_0_36);
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeByte_11, (MR_Integer) 0)));
            MR_Word NextItem_13;

            succeeded = read_profile__is_next_item_token_2_p_0(Byte_12, &NextItem_13);
            if (succeeded)
              switch (NextItem_13) {
                default: /*NOTREACHED*/ MR_assert(0);
                case ((int) MR_deep_item_call_site_dynamic):
                  {
                    MR_Word MaybeCSD_14;

                    read_profile__read_call_site_dynamic_3_p_0(&MaybeCSD_14);
                    if (((MR_tag((MR_Word) MaybeCSD_14)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_String Error_19 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeCSD_14, (MR_Integer) 0)));

                      {
                        MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), MaybeInitDeep_8, 0) = ((MR_Box) (Error_19));
                      }
                    }
                    else
                    {
                      MR_Word CallSiteDynamic_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeCSD_14, (MR_Integer) 0)));
                      MR_Integer CSDI_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeCSD_14, (MR_Integer) 1)));
                      MR_ArrayPtr CSDs0_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      MR_ArrayPtr CSDs_18;
                      MR_Word STATE_VARIABLE_InitDeep_51_51;
                      MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      MR_ArrayPtr Var_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      MR_ArrayPtr Var_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      MR_ArrayPtr Var_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      MR_ArrayPtr conv0_CSDs_18;
                      MR_Word Var_103;
                      MR_Word Var_104;
                      MR_ArrayPtr Var_106;
                      MR_ArrayPtr Var_107;
                      MR_ArrayPtr Var_108;
                      MR_ArrayPtr Var_105;
                      MR_Integer next_value_of_tscc_proc_1_input_1_Depth_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;

                      read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) CSDs0_17, CSDI_16, ((MR_Box) (CallSiteDynamic_15)), &conv0_CSDs_18);
                      CSDs_18 = (MR_ArrayPtr) conv0_CSDs_18;
                      Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      Var_105 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      Var_106 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      Var_107 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      Var_108 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      {
                        STATE_VARIABLE_InitDeep_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_51, 0) = ((MR_Box) (Var_103));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_51, 1) = ((MR_Box) (Var_104));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_51, 2) = ((MR_Box) (CSDs_18));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_51, 3) = ((MR_Box) (Var_106));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_51, 4) = ((MR_Box) (Var_107));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_51, 5) = ((MR_Box) (Var_108));
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Depth_6 = Depth_6;
                      next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = STATE_VARIABLE_InitDeep_51_51;
                      tscc_proc_1_input_1_Depth_6 = next_value_of_tscc_proc_1_input_1_Depth_6;
                      tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case ((int) MR_deep_item_call_site_static):
                  {
                    MR_Word MaybeCSS_25;

                    read_profile__read_call_site_static_3_p_0(&MaybeCSS_25);
                    if (((MR_tag((MR_Word) MaybeCSS_25)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_String Error_69 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeCSS_25, (MR_Integer) 0)));

                      {
                        MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), MaybeInitDeep_8, 0) = ((MR_Box) (Error_69));
                      }
                    }
                    else
                    {
                      MR_Word CallSiteStatic_26;
                      MR_Integer CSSI_27;
                      MR_ArrayPtr CSSs0_28;
                      MR_ArrayPtr CSSs_29;
                      MR_Tuple Var_44 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), MaybeCSS_25, (MR_Integer) 0)));
                      MR_Word STATE_VARIABLE_InitDeep_51_67;
                      MR_Word Var_120;
                      MR_Word Var_121;
                      MR_ArrayPtr Var_122;
                      MR_ArrayPtr Var_123;
                      MR_ArrayPtr Var_124;
                      MR_ArrayPtr conv1_CSSs_29;
                      MR_Word Var_125;
                      MR_Word Var_126;
                      MR_ArrayPtr Var_127;
                      MR_ArrayPtr Var_128;
                      MR_ArrayPtr Var_130;
                      MR_ArrayPtr Var_129;
                      MR_Integer next_value_of_tscc_proc_1_input_1_Depth_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;

                      CallSiteStatic_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0)));
                      CSSI_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 1)));
                      Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      Var_122 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      Var_123 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      CSSs0_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      Var_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_ArrayPtr) CSSs0_28, CSSI_27, ((MR_Box) (CallSiteStatic_26)), &conv1_CSSs_29);
                      CSSs_29 = (MR_ArrayPtr) conv1_CSSs_29;
                      Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      Var_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      Var_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      Var_129 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      Var_130 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      {
                        STATE_VARIABLE_InitDeep_51_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_67, 0) = ((MR_Box) (Var_125));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_67, 1) = ((MR_Box) (Var_126));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_67, 2) = ((MR_Box) (Var_127));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_67, 3) = ((MR_Box) (Var_128));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_67, 4) = ((MR_Box) (CSSs_29));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_67, 5) = ((MR_Box) (Var_130));
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Depth_6 = Depth_6;
                      next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = STATE_VARIABLE_InitDeep_51_67;
                      tscc_proc_1_input_1_Depth_6 = next_value_of_tscc_proc_1_input_1_Depth_6;
                      tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case ((int) MR_deep_item_end):
                  MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) STATE_VARIABLE_InitDeep_0_36);
                  break;
                case ((int) MR_deep_item_proc_dynamic):
                  {
                    MR_Word MaybePD_20;

                    read_profile__read_proc_dynamic_4_p_0(ProfileStats_10, &MaybePD_20);
                    if (((MR_tag((MR_Word) MaybePD_20)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_String Error_61 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybePD_20, (MR_Integer) 0)));

                      {
                        MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), MaybeInitDeep_8, 0) = ((MR_Box) (Error_61));
                      }
                    }
                    else
                    {
                      MR_Word ProcDynamic_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybePD_20, (MR_Integer) 0)));
                      MR_Integer PDI_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybePD_20, (MR_Integer) 1)));
                      MR_ArrayPtr PDs0_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      MR_ArrayPtr PDs_24;
                      MR_Word STATE_VARIABLE_InitDeep_51_59;
                      MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      MR_ArrayPtr Var_111 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      MR_ArrayPtr Var_112 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      MR_ArrayPtr Var_113 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      MR_ArrayPtr conv2_PDs_24;
                      MR_Word Var_114;
                      MR_Word Var_115;
                      MR_ArrayPtr Var_116;
                      MR_ArrayPtr Var_118;
                      MR_ArrayPtr Var_119;
                      MR_ArrayPtr Var_117;
                      MR_Integer next_value_of_tscc_proc_1_input_1_Depth_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;

                      read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) PDs0_23, PDI_22, ((MR_Box) (ProcDynamic_21)), &conv2_PDs_24);
                      PDs_24 = (MR_ArrayPtr) conv2_PDs_24;
                      Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      Var_116 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      Var_117 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      Var_118 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      Var_119 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      {
                        STATE_VARIABLE_InitDeep_51_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_59, 0) = ((MR_Box) (Var_114));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_59, 1) = ((MR_Box) (Var_115));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_59, 2) = ((MR_Box) (Var_116));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_59, 3) = ((MR_Box) (PDs_24));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_59, 4) = ((MR_Box) (Var_118));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_59, 5) = ((MR_Box) (Var_119));
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Depth_6 = Depth_6;
                      next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = STATE_VARIABLE_InitDeep_51_59;
                      tscc_proc_1_input_1_Depth_6 = next_value_of_tscc_proc_1_input_1_Depth_6;
                      tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case ((int) MR_deep_item_proc_static):
                  {
                    MR_Word MaybePS_30;

                    read_profile__read_proc_static_4_p_0(ProfileStats_10, &MaybePS_30);
                    if (((MR_tag((MR_Word) MaybePS_30)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_String Error_77 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybePS_30, (MR_Integer) 0)));

                      {
                        MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), MaybeInitDeep_8, 0) = ((MR_Box) (Error_77));
                      }
                    }
                    else
                    {
                      MR_Word ProcStatic_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybePS_30, (MR_Integer) 0)));
                      MR_Integer PSI_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybePS_30, (MR_Integer) 1)));
                      MR_ArrayPtr PSs0_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      MR_ArrayPtr PSs_34;
                      MR_Word STATE_VARIABLE_InitDeep_51_75;
                      MR_Word Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      MR_ArrayPtr Var_133 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      MR_ArrayPtr Var_134 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      MR_ArrayPtr Var_135 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      MR_ArrayPtr conv3_PSs_34;
                      MR_Word Var_136;
                      MR_Word Var_137;
                      MR_ArrayPtr Var_138;
                      MR_ArrayPtr Var_139;
                      MR_ArrayPtr Var_140;
                      MR_ArrayPtr Var_141;
                      MR_Integer next_value_of_tscc_proc_1_input_1_Depth_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;

                      read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_ArrayPtr) PSs0_33, PSI_32, ((MR_Box) (ProcStatic_31)), &conv3_PSs_34);
                      PSs_34 = (MR_ArrayPtr) conv3_PSs_34;
                      Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      Var_138 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      Var_139 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      Var_140 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      Var_141 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      {
                        STATE_VARIABLE_InitDeep_51_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_75, 0) = ((MR_Box) (Var_136));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_75, 1) = ((MR_Box) (Var_137));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_75, 2) = ((MR_Box) (Var_138));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_75, 3) = ((MR_Box) (Var_139));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_75, 4) = ((MR_Box) (Var_140));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_51_75, 5) = ((MR_Box) (PSs_34));
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Depth_6 = Depth_6;
                      next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = STATE_VARIABLE_InitDeep_51_75;
                      tscc_proc_1_input_1_Depth_6 = next_value_of_tscc_proc_1_input_1_Depth_6;
                      tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InitDeep_0_10;
                      goto top_of_proc_1;
                    }
                  }
                  break;
              }
            else
            {
              MR_String Msg_35;
              MR_String Var_146;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &read_profile_scalar_common_6[3], Byte_12, &Var_146);
              Msg_35 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected token ", Var_146);
              {
                MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), MaybeInitDeep_8, 0) = ((MR_Box) (Msg_35));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), MaybeByte_11, (MR_Integer) 0)));
            MR_String Msg_91;

            mercury__io__error_message_2_p_0(Error_90, &Msg_91);
            {
              MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), MaybeInitDeep_8, 0) = ((MR_Box) (Msg_91));
            }
          }
          break;
      }
      tscc_output_1_MaybeInitDeep_8 = MaybeInitDeep_8;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_MaybeInitDeep_8 = tscc_output_1_MaybeInitDeep_8;
    return;
  }
}

static MR_bool MR_CALL 
read_profile__is_next_item_token_2_p_0(
  MR_Integer Int_1,
  MR_Word * NextItem_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL read_profile__is_next_item_token_2_p_0

	MR_Integer Int;
	MR_Word NextItem;
	MR_bool SUCCESS_INDICATOR;

	Int =  Int_1 ;
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
}

static void MR_CALL 
read_profile__deep_insert_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_ArrayPtr A0_5,
  MR_Integer Ind_6,
  MR_Box Item_7,
  MR_ArrayPtr * A_8)
{
  {
    MR_bool succeeded;
    MR_Integer Max_9;

    mercury__array__max_2_p_0(TypeInfo_for_T_12, A0_5, &Max_9);
    succeeded = (Ind_6 > Max_9);
    if (succeeded)
    {
      {
        mercury__require__error_1_p_0((MR_String) "deep_insert: array bounds violation");
        return;
      }
    }
    else
    {
      MR_Word TypeInfo_14_14;
      MR_ArrayPtr Var_11;
      MR_Box conv0_Var_11;

      {
        TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
        MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_12));
      }
      conv0_Var_11 = array_util__u_1_f_0(TypeInfo_14_14, ((MR_Box) (A0_5)));
      Var_11 = ((MR_ArrayPtr) conv0_Var_11);
      mercury__array__set_4_p_0(TypeInfo_for_T_12, Ind_6, Item_7, Var_11, A_8);
    }
  }
}

static void MR_CALL 
read_profile__read_call_site_dynamic_3_p_0(
  MR_Word * MaybeCSD_4)
{
  {
    MR_Word MaybeCSDI_7;

    read_profile__read_num_acc_4_p_0((MR_Integer) 0, &MaybeCSDI_7);
    if (((MR_tag((MR_Word) MaybeCSDI_7)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Error_37 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeCSDI_7, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCSD_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_37));
      }
    }
    else
    {
      MR_Integer CSDI_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeCSDI_7, (MR_Integer) 0)));
      MR_Word MaybePDI_9;

      read_profile__read_num_acc_4_p_0((MR_Integer) 0, &MaybePDI_9);
      if (((MR_tag((MR_Word) MaybePDI_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String Error_36 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybePDI_9, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeCSD_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_36));
        }
      }
      else
      {
        MR_Integer PDI_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybePDI_9, (MR_Integer) 0)));
        MR_Word MaybeProfile_11;

        read_profile__read_profile_3_p_0(&MaybeProfile_11);
        if (((MR_tag((MR_Word) MaybeProfile_11)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_String Error_16 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeProfile_11, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeCSD_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_16));
          }
        }
        else
        {
          MR_Word Profile_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeProfile_11, (MR_Integer) 0)));
          MR_Word PDPtr_13 = (MR_Word) PDI_10;
          MR_Word CallSiteDynamic_15;

          {
            CallSiteDynamic_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CallSiteDynamic_15, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
            MR_hl_field(MR_mktag(0), CallSiteDynamic_15, 1) = ((MR_Box) (PDPtr_13));
            MR_hl_field(MR_mktag(0), CallSiteDynamic_15, 2) = ((MR_Box) (Profile_12));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *MaybeCSD_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CallSiteDynamic_15));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CSDI_8));
          }
        }
      }
    }
  }
}

static void MR_CALL 
read_profile__read_profile_3_p_0(
  MR_Word * MaybeProfile_4)
{
  {
    MR_Word MaybeMask_6;

    read_profile__read_num_acc_4_p_0((MR_Integer) 0, &MaybeMask_6);
    if (((MR_tag((MR_Word) MaybeMask_6)) == (MR_mktag((MR_Integer) 1))))
      *MaybeProfile_4 = (MR_Word) MaybeMask_6;
    else
    {
      MR_Integer Mask_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeMask_6, (MR_Integer) 0)));
      MR_Integer Exits_9;
      MR_Integer Fails_10;
      MR_Integer Redos_11;
      MR_Integer Excps_12;
      MR_Integer Quanta_13;
      MR_Integer CallSeqs_14;
      MR_Integer Allocs_15;
      MR_Integer Words_16;
      MR_Word LastMaybeError_17;
      MR_Word STATE_VARIABLE_MaybeError_24_24;
      MR_Word STATE_VARIABLE_MaybeError_27_27;
      MR_Word STATE_VARIABLE_MaybeError_30_30;
      MR_Word STATE_VARIABLE_MaybeError_33_33;
      MR_Word STATE_VARIABLE_MaybeError_36_36;
      MR_Word STATE_VARIABLE_MaybeError_39_39;
      MR_Word STATE_VARIABLE_MaybeError_42_42;

      read_profile__maybe_read_num_handle_error_7_p_0(Mask_7, (MR_Integer) 2, &Exits_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_MaybeError_24_24);
      read_profile__maybe_read_num_handle_error_7_p_0(Mask_7, (MR_Integer) 4, &Fails_10, STATE_VARIABLE_MaybeError_24_24, &STATE_VARIABLE_MaybeError_27_27);
      read_profile__maybe_read_num_handle_error_7_p_0(Mask_7, (MR_Integer) 64, &Redos_11, STATE_VARIABLE_MaybeError_27_27, &STATE_VARIABLE_MaybeError_30_30);
      read_profile__maybe_read_num_handle_error_7_p_0(Mask_7, (MR_Integer) 128, &Excps_12, STATE_VARIABLE_MaybeError_30_30, &STATE_VARIABLE_MaybeError_33_33);
      read_profile__maybe_read_num_handle_error_7_p_0(Mask_7, (MR_Integer) 256, &Quanta_13, STATE_VARIABLE_MaybeError_33_33, &STATE_VARIABLE_MaybeError_36_36);
      read_profile__maybe_read_num_handle_error_7_p_0(Mask_7, (MR_Integer) 8, &CallSeqs_14, STATE_VARIABLE_MaybeError_36_36, &STATE_VARIABLE_MaybeError_39_39);
      read_profile__maybe_read_num_handle_error_7_p_0(Mask_7, (MR_Integer) 16, &Allocs_15, STATE_VARIABLE_MaybeError_39_39, &STATE_VARIABLE_MaybeError_42_42);
      read_profile__maybe_read_num_handle_error_7_p_0(Mask_7, (MR_Integer) 32, &Words_16, STATE_VARIABLE_MaybeError_42_42, &LastMaybeError_17);
      if ((LastMaybeError_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_47;

        Var_47 = measurements__compress_profile_8_f_0(Exits_9, Fails_10, Redos_11, Excps_12, Quanta_13, CallSeqs_14, Allocs_15, Words_16);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeProfile_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
        }
      }
      else
      {
        MR_String Error_18 = ((MR_String) (MR_hl_field(MR_mktag(1), LastMaybeError_17, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeProfile_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_18));
        }
      }
    }
  }
}

static void MR_CALL 
read_profile__maybe_read_num_handle_error_7_p_0(
  MR_Integer MaskWord_8,
  MR_Integer MaskValue_9,
  MR_Integer * Num_10,
  MR_Word STATE_VARIABLE_MaybeError_0_15,
  MR_Word * STATE_VARIABLE_MaybeError_16)
{
  {
    MR_bool succeeded;
    MR_Integer Var_19 = (MaskWord_8 & MaskValue_9);

    succeeded = (Var_19 == (MR_Integer) 0);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Word MaybeNum_13;

      read_profile__read_num_acc_4_p_0((MR_Integer) 0, &MaybeNum_13);
      if (((MR_tag((MR_Word) MaybeNum_13)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String Error_14 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeNum_13, (MR_Integer) 0)));

        *Num_10 = (MR_Integer) 0;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_MaybeError_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_14));
        }
      }
      else
      {
        *Num_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeNum_13, (MR_Integer) 0)));
        *STATE_VARIABLE_MaybeError_16 = STATE_VARIABLE_MaybeError_0_15;
      }
    }
    else
    {
      *Num_10 = (MR_Integer) 0;
      *STATE_VARIABLE_MaybeError_16 = STATE_VARIABLE_MaybeError_0_15;
    }
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_LambdaHeadVar__3_51;

    read_profile__IntroducedFrom__pred__read_proc_dynamic__895__1_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv7_LambdaHeadVar__3_51);
    *wrapper_arg_3 = ((MR_Box) (conv7_LambdaHeadVar__3_51));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__3_86;

    read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_5_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &conv6_HeadVar__3_86);
    *wrapper_arg_1 = ((MR_Box) (conv6_HeadVar__3_86));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_MaybeSlot_4;

    read_profile__read_call_site_slot_3_p_0(&conv5_MaybeSlot_4);
    *wrapper_arg_1 = ((MR_Box) (conv5_MaybeSlot_4));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_MaybeCoveragePoints_6;

    read_profile__maybe_read_pd_coverage_points_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv4_MaybeCoveragePoints_6);
    *wrapper_arg_1 = ((MR_Box) (conv4_MaybeCoveragePoints_6));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__4_41;

    read_profile__IntroducedFrom__pred__read_proc_dynamic__885__1_4_p_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3), &conv3_LambdaHeadVar__4_41);
    *wrapper_arg_4 = ((MR_Box) (conv3_LambdaHeadVar__4_41));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_MaybeNum_4;

    read_profile__read_num_3_p_0(&conv2_MaybeNum_4);
    *wrapper_arg_1 = ((MR_Box) (conv2_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MaybePtr_6;

    read_profile__read_ptr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv1_MaybePtr_6);
    *wrapper_arg_1 = ((MR_Box) (conv1_MaybePtr_6));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybePtr_6;

    read_profile__read_ptr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv0_MaybePtr_6);
    *wrapper_arg_1 = ((MR_Box) (conv0_MaybePtr_6));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0(
  MR_Word ProfileStats_5,
  MR_Word * MaybePD_6)
{
  {
    MR_Word TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word MaybePDHeader_13;

    io_combinator__maybe_error_sequence_3_7_p_0(TypeCtorInfo_81_81, TypeCtorInfo_81_81, TypeCtorInfo_81_81, (MR_Word) &read_profile_scalar_common_5[0], (MR_Word) &read_profile_scalar_common_2[5], (MR_Word) &read_profile_scalar_common_2[6], (MR_Word) &read_profile_scalar_common_4[21], (MR_Word) &read_profile_scalar_common_4[22], &MaybePDHeader_13);
    if (((MR_tag((MR_Word) MaybePDHeader_13)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Error_71 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybePDHeader_13, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePD_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_71));
      }
    }
    else
    {
      MR_Integer PDI_14;
      MR_Integer PSI_15;
      MR_Integer N_16;
      MR_Word MaybeCPsAndSlots_20;
      MR_Tuple Var_43 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), MaybePDHeader_13, (MR_Integer) 0)));
      MR_Word Var_44;
      MR_Word Var_45;

      PDI_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 0)));
      PSI_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 1)));
      N_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 2)));
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_5));
        MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (ProfileStats_5));
      }
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&read_profile_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_7));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (N_16));
        MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (&read_profile_scalar_common_4[23]));
      }
      io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) &read_profile_scalar_common_1[3], (MR_Word) &read_profile_scalar_common_1[4], (MR_Word) &read_profile_scalar_common_2[1], Var_44, Var_45, (MR_Word) &read_profile_scalar_common_4[24], &MaybeCPsAndSlots_20);
      if (((MR_tag((MR_Word) MaybeCPsAndSlots_20)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String Error_25 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeCPsAndSlots_20, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePD_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_25));
        }
      }
      else
      {
        MR_Word MaybeCPs_21;
        MR_Word Refs_22;
        MR_Word PSPtr_23;
        MR_Word ProcDynamic_24;
        MR_Tuple Var_53 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), MaybeCPsAndSlots_20, (MR_Integer) 0)));
        MR_ArrayPtr Var_54;
        MR_ArrayPtr conv8_Var_54;

        MaybeCPs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 0)));
        Refs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 1)));
        PSPtr_23 = (MR_Word) PSI_15;
        conv8_Var_54 = mercury__array__array_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, Refs_22);
        Var_54 = (MR_ArrayPtr) conv8_Var_54;
        {
          ProcDynamic_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ProcDynamic_24, 0) = ((MR_Box) (PSPtr_23));
          MR_hl_field(MR_mktag(0), ProcDynamic_24, 1) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(0), ProcDynamic_24, 2) = ((MR_Box) (MaybeCPs_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *MaybePD_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ProcDynamic_24));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PDI_14));
        }
      }
    }
  }
}

static MR_Box MR_CALL 
read_profile__read_proc_static_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_2;

    conv7_HeadVar__2_2 = read_profile__make_cssptr_1_f_0(((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_LambdaHeadVar__7_56;

    read_profile__IntroducedFrom__pred__read_proc_static__471__1_7_p_0(((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_String) wrapper_arg_3), ((MR_Integer) wrapper_arg_4), ((MR_Integer) wrapper_arg_5), ((MR_Integer) wrapper_arg_6), &conv6_LambdaHeadVar__7_56);
    *wrapper_arg_7 = ((MR_Box) (conv6_LambdaHeadVar__7_56));
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_MaybeNum_4;

    read_profile__read_num_3_p_0(&conv5_MaybeNum_4);
    *wrapper_arg_1 = ((MR_Box) (conv5_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_MaybeByte_4;

    read_profile__read_deep_byte_3_p_0(&conv4_MaybeByte_4);
    *wrapper_arg_1 = ((MR_Box) (conv4_MaybeByte_4));
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_MaybeNum_4;

    read_profile__read_num_3_p_0(&conv3_MaybeNum_4);
    *wrapper_arg_1 = ((MR_Box) (conv3_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_MaybeStr_4;

    read_profile__read_string_3_p_0(&conv2_MaybeStr_4);
    *wrapper_arg_1 = ((MR_Box) (conv2_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MaybeProcId_4;

    read_profile__read_proc_id_3_p_0(&conv1_MaybeProcId_4);
    *wrapper_arg_1 = ((MR_Box) (conv1_MaybeProcId_4));
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybePtr_6;

    read_profile__read_ptr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv0_MaybePtr_6);
    *wrapper_arg_1 = ((MR_Box) (conv0_MaybePtr_6));
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0(
  MR_Word ProfileStats_5,
  MR_Word * MaybePS_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_103_103 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word MaybeProcId_16;

    io_combinator__maybe_error_sequence_6_10_p_0(TypeCtorInfo_103_103, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeCtorInfo_103_103, TypeCtorInfo_103_103, TypeCtorInfo_103_103, (MR_Word) &read_profile_scalar_common_3[0], (MR_Word) &read_profile_scalar_common_2[4], (MR_Word) &read_profile_scalar_common_4[14], (MR_Word) &read_profile_scalar_common_4[15], (MR_Word) &read_profile_scalar_common_4[16], (MR_Word) &read_profile_scalar_common_4[17], (MR_Word) &read_profile_scalar_common_4[18], (MR_Word) &read_profile_scalar_common_4[19], &MaybeProcId_16);
    if (((MR_tag((MR_Word) MaybeProcId_16)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Error_84 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeProcId_16, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePS_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_84));
      }
    }
    else
    {
      MR_Integer PSI_17;
      MR_Word Id_18;
      MR_String FileName_19;
      MR_Integer LineNumber_20;
      MR_Integer Interface_21;
      MR_Integer NCS_22;
      MR_Word MaybeCSSIs_23;
      MR_Tuple Var_58 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), MaybeProcId_16, (MR_Integer) 0)));

      PSI_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 0)));
      Id_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 1)));
      FileName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 2)));
      LineNumber_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 3)));
      Interface_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 4)));
      NCS_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 5)));
      read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_p_0(NCS_22, &MaybeCSSIs_23);
      if (((MR_tag((MR_Word) MaybeCSSIs_23)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String Error_83 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeCSSIs_23, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePS_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_83));
        }
      }
      else
      {
        MR_Word CSSIs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeCSSIs_23, (MR_Integer) 0)));
        MR_Word MaybeCoveragePoints_25;

        read_profile__maybe_read_ps_coverage_points_4_p_0(ProfileStats_5, &MaybeCoveragePoints_25);
        if (((MR_tag((MR_Word) MaybeCoveragePoints_25)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_String Error_35 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeCoveragePoints_25, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybePS_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_35));
          }
        }
        else
        {
          MR_Word TypeCtorInfo_110_110;
          MR_ArrayPtr CPInfos_26;
          MR_Word MaybeCPs_27;
          MR_Word CSSPtrs_28;
          MR_String DeclModule_29;
          MR_String UnQualRefinedStr_30;
          MR_String QualRefinedStr_31;
          MR_String RawStr_32;
          MR_Word IsInInterface_33;
          MR_Word ProcStatic_34;
          MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeCoveragePoints_25, (MR_Integer) 0)));
          MR_ArrayPtr Var_65;
          MR_ArrayPtr conv8_Var_65;

          CPInfos_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 0)));
          MaybeCPs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 1)));
          TypeCtorInfo_110_110 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
          CSSPtrs_28 = mercury__list__map_2_f_0(TypeCtorInfo_103_103, TypeCtorInfo_110_110, (MR_Word) &read_profile_scalar_common_4[20], CSSIs_24);
          DeclModule_29 = profile__decl_module_1_f_0(Id_18);
          read_profile__create_refined_proc_ids_3_p_0(Id_18, &UnQualRefinedStr_30, &QualRefinedStr_31);
          RawStr_32 = read_profile__raw_proc_id_to_string_1_f_0(Id_18);
          succeeded = (Interface_21 == (MR_Integer) 0);
          if (succeeded)
            IsInInterface_33 = (MR_Integer) 0;
          else
            IsInInterface_33 = (MR_Integer) 1;
          conv8_Var_65 = mercury__array__array_1_f_0(TypeCtorInfo_110_110, CSSPtrs_28);
          Var_65 = (MR_ArrayPtr) conv8_Var_65;
          {
            ProcStatic_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ProcStatic_34, 0) = ((MR_Box) (Id_18));
            MR_hl_field(MR_mktag(0), ProcStatic_34, 1) = ((MR_Box) (DeclModule_29));
            MR_hl_field(MR_mktag(0), ProcStatic_34, 2) = ((MR_Box) (UnQualRefinedStr_30));
            MR_hl_field(MR_mktag(0), ProcStatic_34, 3) = ((MR_Box) (QualRefinedStr_31));
            MR_hl_field(MR_mktag(0), ProcStatic_34, 4) = ((MR_Box) (RawStr_32));
            MR_hl_field(MR_mktag(0), ProcStatic_34, 5) = ((MR_Box) (FileName_19));
            MR_hl_field(MR_mktag(0), ProcStatic_34, 6) = ((MR_Box) (LineNumber_20));
            MR_hl_field(MR_mktag(0), ProcStatic_34, 7) = ((MR_Box) (IsInInterface_33));
            MR_hl_field(MR_mktag(0), ProcStatic_34, 8) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(0), ProcStatic_34, 9) = ((MR_Box) (CPInfos_26));
            MR_hl_field(MR_mktag(0), ProcStatic_34, 10) = ((MR_Box) (MaybeCPs_27));
            MR_hl_field(MR_mktag(0), ProcStatic_34, 11) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *MaybePS_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ProcStatic_34));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PSI_17));
          }
        }
      }
    }
  }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_p_0(
  MR_Integer N_6,
  MR_Word * MaybeItems_8)
{
  {
    MR_Word MaybeRevItems_10;

    read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_p_0(N_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeRevItems_10);
    if (((MR_tag((MR_Word) MaybeRevItems_10)) == (MR_mktag((MR_Integer) 1))))
      *MaybeItems_8 = MaybeRevItems_10;
    else
    {
      MR_Word RevItems_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeRevItems_10, (MR_Integer) 0)));
      MR_Word Items_12;

      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, RevItems_11, &Items_12);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItems_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Items_12));
      }
    }
  }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_p_0(
  MR_Integer N_7,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_7 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItems_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RevItems0_9));
      }
    else
    {
      MR_Word MaybeItem_12;

      read_profile__read_num_acc_4_p_0((MR_Integer) 0, &MaybeItem_12);
      if (((MR_tag((MR_Word) MaybeItem_12)) == (MR_mktag((MR_Integer) 1))))
        *MaybeItems_10 = (MR_Word) MaybeItem_12;
      else
      {
        MR_Integer Item_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeItem_12, (MR_Integer) 0)));
        MR_Integer Var_19 = (N_7 - (MR_Integer) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_7;
        MR_Word next_value_of_RevItems0_9;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Item_13));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (RevItems0_9));
        }
        // direct tailcall eliminated
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
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) ProcLabel_4)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word PredOrFunc_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 0)));
      MR_String DeclModule_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 1)));
      MR_String ProcName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 3)));
      MR_Integer Arity_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 4)));
      MR_Integer Mode_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 5)));
      MR_String _DefModule_95 = ((MR_String) (MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 2)));
      MR_Word ProcNameChars_29;
      MR_String SpecInfo_30;
      MR_String ProcName1_23;
      MR_String ProcName2_25;
      MR_Word ProcName2Chars_28;
      MR_String ProcName2A_24;
      MR_String Var_39;

      succeeded = mercury__string__append_3_p_1((MR_String) "TypeSpecOf__", &ProcName1_23, ProcName_22);
      if (succeeded)
      {
        Var_39 = (MR_String) "pred__";
        succeeded = mercury__string__append_3_p_1(Var_39, &ProcName2A_24, ProcName1_23);
        if (succeeded)
          ProcName2_25 = ProcName2A_24;
        else
        {
          MR_String ProcName2B_26;

          succeeded = mercury__string__append_3_p_1((MR_String) "func__", &ProcName2B_26, ProcName1_23);
          if (succeeded)
            ProcName2_25 = ProcName2B_26;
          else
          {
            MR_String ProcName2C_27;

            succeeded = mercury__string__append_3_p_1((MR_String) "pred_or_func__", &ProcName2C_27, ProcName1_23);
            if (succeeded)
              ProcName2_25 = ProcName2C_27;
            else
            {
              {
                mercury__require__error_1_p_0((MR_String) "typespec: neither pred nor func");
                return;
              }
            }
          }
        }
        mercury__string__to_char_list_2_p_0(ProcName2_25, &ProcName2Chars_28);
        succeeded = read_profile__fix_type_spec_suffix_3_p_0(ProcName2Chars_28, &ProcNameChars_29, &SpecInfo_30);
      }
      if (succeeded)
      {
        MR_String RefinedProcName_31;
        MR_String Suffix_32;
        MR_String Var_44;
        MR_String Var_45;
        MR_String Var_46;
        MR_String Var_47;
        MR_String Var_48;
        MR_String Var_50;
        MR_String Var_51;
        MR_String Var_52;
        MR_String Var_54;
        MR_String Var_56;
        MR_String Var_58;

        RefinedProcName_31 = mercury__string__from_char_list_1_f_0(ProcNameChars_29);
        Var_45 = mercury__string__int_to_string_1_f_0(Arity_113);
        Var_47 = read_profile__add_plus_one_for_function_1_f_0(PredOrFunc_20);
        Var_51 = mercury__string__int_to_string_1_f_0(Mode_114);
        Var_54 = mercury__string__f_43_43_2_f_0(SpecInfo_30, (MR_String) "]");
        Var_52 = mercury__string__f_43_43_2_f_0((MR_String) " [", Var_54);
        Var_50 = mercury__string__f_43_43_2_f_0(Var_51, Var_52);
        Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_50);
        Var_46 = mercury__string__f_43_43_2_f_0(Var_47, Var_48);
        Var_44 = mercury__string__f_43_43_2_f_0(Var_45, Var_46);
        Suffix_32 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_44);
        *UnQualName_5 = mercury__string__f_43_43_2_f_0(RefinedProcName_31, Suffix_32);
        Var_58 = mercury__string__f_43_43_2_f_0(RefinedProcName_31, Suffix_32);
        Var_56 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_58);
        *QualName_6 = mercury__string__f_43_43_2_f_0(DeclModule_21, Var_56);
      }
      else
      {
        MR_Word ContainingNameChars_34;
        MR_Word LineNumberChars_35;
        MR_Word Segments_33;
        MR_String ProcName1_99;
        MR_String ProcName2_101;
        MR_Word ProcName2Chars_103;
        MR_String ProcName2A_97;
        MR_String Var_60;

        succeeded = mercury__string__append_3_p_1((MR_String) "IntroducedFrom__", &ProcName1_99, ProcName_22);
        if (succeeded)
        {
          Var_60 = (MR_String) "pred__";
          succeeded = mercury__string__append_3_p_1(Var_60, &ProcName2A_97, ProcName1_99);
          if (succeeded)
            ProcName2_101 = ProcName2A_97;
          else
          {
            MR_String ProcName2B_96;

            succeeded = mercury__string__append_3_p_1((MR_String) "func__", &ProcName2B_96, ProcName1_99);
            if (succeeded)
              ProcName2_101 = ProcName2B_96;
            else
            {
              {
                mercury__require__error_1_p_0((MR_String) "lambda: neither pred nor func");
                return;
              }
            }
          }
          mercury__string__to_char_list_2_p_0(ProcName2_101, &ProcName2Chars_103);
          read_profile__split_lambda_name_2_p_0(ProcName2Chars_103, &Segments_33);
          succeeded = read_profile__glue_lambda_name_3_p_0(Segments_33, &ContainingNameChars_34, &LineNumberChars_35);
        }
        if (succeeded)
        {
          MR_String ContainingName_36;
          MR_String LineNumber_37;
          MR_String Var_64;
          MR_String Var_65;
          MR_String Var_67;
          MR_String Var_68;
          MR_String Var_69;
          MR_String Var_70;
          MR_String Var_72;
          MR_String Suffix_104;

          mercury__string__from_char_list_2_p_0(ContainingNameChars_34, &ContainingName_36);
          mercury__string__from_char_list_2_p_0(LineNumberChars_35, &LineNumber_37);
          Var_68 = mercury__string__int_to_string_1_f_0(Arity_113);
          Var_69 = read_profile__add_plus_one_for_function_1_f_0(PredOrFunc_20);
          Var_67 = mercury__string__f_43_43_2_f_0(Var_68, Var_69);
          Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_67);
          Var_64 = mercury__string__f_43_43_2_f_0(LineNumber_37, Var_65);
          Suffix_104 = mercury__string__f_43_43_2_f_0((MR_String) " lambda line ", Var_64);
          *UnQualName_5 = mercury__string__f_43_43_2_f_0(ContainingName_36, Suffix_104);
          Var_72 = mercury__string__f_43_43_2_f_0(ContainingName_36, Suffix_104);
          Var_70 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_72);
          *QualName_6 = mercury__string__f_43_43_2_f_0(DeclModule_21, Var_70);
        }
        else
        {
          MR_String Var_74;
          MR_String Var_75;
          MR_String Var_76;
          MR_String Var_77;
          MR_String Var_78;
          MR_String Var_80;
          MR_String Var_81;
          MR_String Var_83;
          MR_String Suffix_105;

          Var_75 = mercury__string__int_to_string_1_f_0(Arity_113);
          Var_77 = read_profile__add_plus_one_for_function_1_f_0(PredOrFunc_20);
          Var_80 = mercury__string__int_to_string_1_f_0(Mode_114);
          Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_80);
          Var_76 = mercury__string__f_43_43_2_f_0(Var_77, Var_78);
          Var_74 = mercury__string__f_43_43_2_f_0(Var_75, Var_76);
          Suffix_105 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_74);
          *UnQualName_5 = mercury__string__f_43_43_2_f_0(ProcName_22, Suffix_105);
          Var_83 = mercury__string__f_43_43_2_f_0(ProcName_22, Suffix_105);
          Var_81 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_83);
          *QualName_6 = mercury__string__f_43_43_2_f_0(DeclModule_21, Var_81);
        }
      }
    }
    else
    {
      MR_String TypeName_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 0)));
      MR_String TypeModule_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 1)));
      MR_String RawPredName_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 3)));
      MR_Integer Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 4)));
      MR_Integer Mode_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 5)));
      MR_String PredName_13;
      MR_String Prefix_15;
      MR_String AritySuffix_16;
      MR_String UnQualName0_17;
      MR_String QualName0_18;
      MR_String Var_87;
      MR_String Var_88;
      MR_String Var_89;
      MR_String Var_90;
      MR_String Var_92;
      MR_String _DefModule_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 2)));

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
      Var_87 = mercury__string__int_to_string_1_f_0(Arity_11);
      AritySuffix_16 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_87);
      Var_88 = mercury__string__f_43_43_2_f_0(TypeName_7, AritySuffix_16);
      UnQualName0_17 = mercury__string__f_43_43_2_f_0(Prefix_15, Var_88);
      Var_92 = mercury__string__f_43_43_2_f_0(TypeName_7, AritySuffix_16);
      Var_90 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_92);
      Var_89 = mercury__string__f_43_43_2_f_0(TypeModule_8, Var_90);
      QualName0_18 = mercury__string__f_43_43_2_f_0(Prefix_15, Var_89);
      succeeded = (Mode_12 == (MR_Integer) 0);
      if (succeeded)
      {
        *UnQualName_5 = UnQualName0_17;
        *QualName_6 = QualName0_18;
      }
      else
      {
        MR_String ModeSuffix_19;
        MR_String Var_94;

        Var_94 = mercury__string__int_to_string_1_f_0(Mode_12);
        ModeSuffix_19 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_94);
        *UnQualName_5 = mercury__string__f_43_43_2_f_0(UnQualName0_17, ModeSuffix_19);
        *QualName_6 = mercury__string__f_43_43_2_f_0(QualName0_18, ModeSuffix_19);
      }
    }
  }
}

static MR_bool MR_CALL 
read_profile__glue_lambda_name_3_p_0(
  MR_Word Segments_4,
  MR_Word * PredName_5,
  MR_Word * LineNumber_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Segments_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word LineNumberPrime_7;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_8;

    if (succeeded)
    {
      LineNumberPrime_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Segments_4, (MR_Integer) 0)));
      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Segments_4, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0)));
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1)));
        succeeded = (Var_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      *PredName_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *LineNumber_6 = LineNumberPrime_7;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Segment_9;
      MR_Word TailSegments_10;
      MR_Word PredName1_11;

      succeeded = ((MR_tag((MR_Word) Segments_4)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Segment_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Segments_4, (MR_Integer) 0)));
        TailSegments_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Segments_4, (MR_Integer) 1)));
        succeeded = read_profile__glue_lambda_name_3_p_0(TailSegments_10, &PredName1_11, LineNumber_6);
        if (succeeded)
        {
          if ((PredName1_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *PredName_5 = Segment_9;
          else
          {
            MR_Word Var_16;
            MR_Word Var_18;

            {
              Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Char) 95));
              MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (PredName1_11));
            }
            {
              Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Char) 95));
              MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
            }
            mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, Segment_9, Var_16, PredName_5);
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
read_profile__split_lambda_name_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Char Char0_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Chars0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Chars1_6;
      MR_Char Var_10;
      MR_Word Var_11;
      MR_Char Var_12;

      succeeded = ((MR_tag((MR_Word) Chars0_4)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars0_4, (MR_Integer) 0)));
        Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Chars0_4, (MR_Integer) 1)));
        succeeded = (Var_10 == (MR_Char) 95);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0)));
            Chars1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 1)));
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
          Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_Word) (Char0_3));
          MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (StringList0_7));
        }
      }
      else
      {
        MR_Word StringList0_19;

        read_profile__split_lambda_name_2_p_0(Chars0_4, &StringList0_19);
        if ((StringList0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word Var_16;

          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_Word) (Char0_3));
            MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        else
        {
          MR_Word String0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), StringList0_19, (MR_Integer) 0)));
          MR_Word StringList1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), StringList0_19, (MR_Integer) 1)));
          MR_Word Var_15;

          {
            Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_Word) (Char0_3));
            MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (String0_8));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (StringList1_9));
          }
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
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = read_profile__non_right_bracket_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
read_profile__fix_type_spec_suffix_3_p_0(
  MR_Word Chars0_4,
  MR_Word * Chars_5,
  MR_String * SpecInfoStr_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Chars0_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word SpecInfo0_7;
    MR_Char Var_12;
    MR_Word Var_13;
    MR_Char Var_14;
    MR_Word Var_15;
    MR_Char Var_16;

    if (succeeded)
    {
      Var_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars0_4, (MR_Integer) 0)));
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Chars0_4, (MR_Integer) 1)));
      succeeded = (Var_12 == (MR_Char) 95);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0)));
          Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 1)));
          succeeded = (Var_14 == (MR_Char) 95);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_16 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0)));
              SpecInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1)));
              succeeded = (Var_16 == (MR_Char) 91);
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word SpecInfo_8;

      *Chars_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      mercury__list__take_while_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &read_profile_scalar_common_4[13], SpecInfo0_7, &SpecInfo_8);
      mercury__string__from_char_list_2_p_0(SpecInfo_8, SpecInfoStr_6);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Char Char_9;
      MR_Word TailChars0_10;
      MR_Word TailChars_11;

      succeeded = ((MR_tag((MR_Word) Chars0_4)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Char_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars0_4, (MR_Integer) 0)));
        TailChars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Chars0_4, (MR_Integer) 1)));
        succeeded = read_profile__fix_type_spec_suffix_3_p_0(TailChars0_10, &TailChars_11, SpecInfoStr_6);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Chars_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Char_9));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailChars_11));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_String MR_CALL 
read_profile__add_plus_one_for_function_1_f_0(
  MR_Word HeadVar__1_1)
{
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
}

static MR_String MR_CALL 
read_profile__raw_proc_id_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word PredOrFunc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String DeclModule_26 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_String Name_28 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Integer Mode_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_37;
      MR_String Var_38;
      MR_Word Var_39;
      MR_String Var_40;
      MR_Word Var_41;
      MR_Word Var_43;
      MR_String Var_44;
      MR_String _DefModule_27 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));

      Var_38 = mercury__string__int_to_string_1_f_0(Arity_29);
      switch (PredOrFunc_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Var_40 = (MR_String) "+1";
          break;
        case (MR_Integer) 0:
          Var_40 = (MR_String) "";
          break;
      }
      Var_44 = mercury__string__int_to_string_1_f_0(Mode_30);
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) "-"));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) ((MR_String) "/"));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Name_28));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_String) "."));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (DeclModule_26));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_32));
      }
      HeadVar__2_2 = mercury__string__append_list_1_f_0(Var_31);
    }
    else
    {
      MR_String TypeName_3 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_String TypeModule_4 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_String PredName_6 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4)));
      MR_Integer Mode_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word Var_9;
      MR_Word Var_10;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word Var_18;
      MR_String Var_19;
      MR_Word Var_20;
      MR_Word Var_22;
      MR_String Var_23;
      MR_String _DefModule_5 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));

      Var_19 = mercury__string__int_to_string_1_f_0(Arity_7);
      Var_23 = mercury__string__int_to_string_1_f_0(Mode_8);
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) " mode "));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
      }
      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) ((MR_String) "/"));
        MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
      }
      {
        Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (TypeName_3));
        MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_16));
      }
      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) ((MR_String) "."));
        MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_15));
      }
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (TypeModule_4));
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_13));
      }
      {
        Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) ((MR_String) " for "));
        MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Var_12));
      }
      {
        Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (PredName_6));
        MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_10));
      }
      HeadVar__2_2 = mercury__string__append_list_1_f_0(Var_9);
    }
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_ArrayPtr conv3_HeadVar__2_74;

    conv3_HeadVar__2_74 = read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_74));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_ArrayPtr conv1_HeadVar__2_74;

    conv1_HeadVar__2_74 = read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_74));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0(
  MR_Word ProfileStats_5,
  MR_Word * MaybeCoveragePoints_6)
{
  {
    MR_Word CoverageDataType_8;
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 9)));
    MR_String Var_48 = ((MR_String) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 0)));
    MR_Integer Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 1)));
    MR_Integer Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 2)));
    MR_Integer Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 3)));
    MR_Integer Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 4)));
    MR_Integer Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 5)));
    MR_Integer Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 6)));
    MR_Integer Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 7)));
    MR_Integer Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProfileStats_5, (MR_Integer) 8)));
    MR_Integer Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
    MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1)));

    CoverageDataType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 3)));
    switch (CoverageDataType_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word MaybeCoveragePoints0_9;
          MR_Word MaybeNCP_10;

          read_profile__read_num_acc_4_p_0((MR_Integer) 0, &MaybeNCP_10);
          if (((MR_tag((MR_Word) MaybeNCP_10)) == (MR_mktag((MR_Integer) 1))))
            MaybeCoveragePoints0_9 = (MR_Word) MaybeNCP_10;
          else
          {
            MR_Integer NCP_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MaybeNCP_10, (MR_Integer) 0)));

            switch (CoverageDataType_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  MR_Word MaybeCPInfos_17;

                  read_profile__read_n_things__ho2_5_p_0(NCP_11, &MaybeCPInfos_17);
                  if (((MR_tag((MR_Word) MaybeCPInfos_17)) == (MR_mktag((MR_Integer) 1))))
                    MaybeCoveragePoints0_9 = (MR_Word) MaybeCPInfos_17;
                  else
                  {
                    MR_Word Var_29;
                    MR_Word CPInfos_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeCPInfos_17, (MR_Integer) 0)));

                    {
                      Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (CPInfos_41));
                      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MaybeCoveragePoints0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), MaybeCoveragePoints0_9, 0) = ((MR_Box) (Var_29));
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MaybeCPPairs_12;

                  read_profile__read_n_things__ho3_5_p_0(NCP_11, &MaybeCPPairs_12);
                  if (((MR_tag((MR_Word) MaybeCPPairs_12)) == (MR_mktag((MR_Integer) 1))))
                    MaybeCoveragePoints0_9 = (MR_Word) MaybeCPPairs_12;
                  else
                  {
                    MR_Word CPPairs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeCPPairs_12, (MR_Integer) 0)));
                    MR_Word CPInfos_14;
                    MR_Word CPs_15;
                    MR_Word Var_33;
                    MR_Word Var_34;

                    mercury__assoc_list__keys_and_values_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, CPPairs_13, &CPInfos_14, &CPs_15);
                    {
                      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (CPs_15));
                    }
                    {
                      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (CPInfos_14));
                      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Var_34));
                    }
                    {
                      MaybeCoveragePoints0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), MaybeCoveragePoints0_9, 0) = ((MR_Box) (Var_33));
                    }
                  }
                }
                break;
            }
          }
          if (((MR_tag((MR_Word) MaybeCoveragePoints0_9)) == (MR_mktag((MR_Integer) 1))))
            *MaybeCoveragePoints_6 = (MR_Word) MaybeCoveragePoints0_9;
          else
          {
            MR_Word CPInfosList_18;
            MR_Word MaybeCPsList_19;
            MR_ArrayPtr CPInfosArray_20;
            MR_Word MaybeCPsArray_21;
            MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeCoveragePoints0_9, (MR_Integer) 0)));
            MR_Word Var_40;
            MR_ArrayPtr conv0_CPInfosArray_20;

            CPInfosList_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 0)));
            MaybeCPsList_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 1)));
            conv0_CPInfosArray_20 = mercury__array__array_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, CPInfosList_18);
            CPInfosArray_20 = (MR_ArrayPtr) conv0_CPInfosArray_20;
            MaybeCPsArray_21 = mercury__maybe__map_maybe_2_f_0((MR_Word) &read_profile_scalar_common_1[1], (MR_Word) &read_profile_scalar_common_1[2], (MR_Word) &read_profile_scalar_common_4[11], MaybeCPsList_19);
            {
              Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (CPInfosArray_20));
              MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (MaybeCPsArray_21));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCoveragePoints_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_ArrayPtr CPInfosArray_95;
          MR_Word MaybeCPsArray_96;
          MR_Word Var_99;
          MR_ArrayPtr conv2_CPInfosArray_95;

          conv2_CPInfosArray_95 = mercury__array__array_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          CPInfosArray_95 = (MR_ArrayPtr) conv2_CPInfosArray_95;
          MaybeCPsArray_96 = mercury__maybe__map_maybe_2_f_0((MR_Word) &read_profile_scalar_common_1[1], (MR_Word) &read_profile_scalar_common_1[2], (MR_Word) &read_profile_scalar_common_4[12], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          {
            Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (CPInfosArray_95));
            MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (MaybeCPsArray_96));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeCoveragePoints_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_99));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
read_profile__read_n_things__ho3_5_p_0(
  MR_Integer N_6,
  MR_Word * MaybeItems_8)
{
  {
    MR_Word MaybeRevItems_10;

    read_profile__read_n_things__ho6_6_p_0(N_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeRevItems_10);
    if (((MR_tag((MR_Word) MaybeRevItems_10)) == (MR_mktag((MR_Integer) 1))))
      *MaybeItems_8 = MaybeRevItems_10;
    else
    {
      MR_Word RevItems_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeRevItems_10, (MR_Integer) 0)));
      MR_Word Items_12;

      mercury__list__reverse_2_p_0((MR_Word) &read_profile_scalar_common_4[0], RevItems_11, &Items_12);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItems_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Items_12));
      }
    }
  }
}

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__3_17;

    read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__688__1_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv2_LambdaHeadVar__3_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_17));
  }
}

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MaybeNum_4;

    read_profile__read_num_3_p_0(&conv1_MaybeNum_4);
    *wrapper_arg_1 = ((MR_Box) (conv1_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeCP_4;

    read_profile__read_coverage_point_static_3_p_0(&conv0_MaybeCP_4);
    *wrapper_arg_1 = ((MR_Box) (conv0_MaybeCP_4));
  }
}

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0(
  MR_Integer N_7,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_7 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItems_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RevItems0_9));
      }
    else
    {
      MR_Word MaybeItem_12;

      io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &read_profile_scalar_common_4[0], (MR_Word) &read_profile_scalar_common_4[8], (MR_Word) &read_profile_scalar_common_4[9], (MR_Word) &read_profile_scalar_common_4[10], &MaybeItem_12);
      if (((MR_tag((MR_Word) MaybeItem_12)) == (MR_mktag((MR_Integer) 1))))
        *MaybeItems_10 = (MR_Word) MaybeItem_12;
      else
      {
        MR_Word Item_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeItem_12, (MR_Integer) 0)));
        MR_Integer Var_19 = (N_7 - (MR_Integer) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_7;
        MR_Word next_value_of_RevItems0_9;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Item_13));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (RevItems0_9));
        }
        // direct tailcall eliminated
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
read_profile__read_n_things__ho2_5_p_0(
  MR_Integer N_6,
  MR_Word * MaybeItems_8)
{
  {
    MR_Word MaybeRevItems_10;

    read_profile__read_n_things__ho7_6_p_0(N_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeRevItems_10);
    if (((MR_tag((MR_Word) MaybeRevItems_10)) == (MR_mktag((MR_Integer) 1))))
      *MaybeItems_8 = MaybeRevItems_10;
    else
    {
      MR_Word RevItems_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeRevItems_10, (MR_Integer) 0)));
      MR_Word Items_12;

      mercury__list__reverse_2_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, RevItems_11, &Items_12);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItems_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Items_12));
      }
    }
  }
}

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__3_19;

    read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_p_0(((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_LambdaHeadVar__3_19);
    *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_19));
  }
}

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MaybeCPType_4;

    read_profile__read_cp_type_3_p_0(&conv1_MaybeCPType_4);
    *wrapper_arg_1 = ((MR_Box) (conv1_MaybeCPType_4));
  }
}

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeStr_4;

    read_profile__read_string_3_p_0(&conv0_MaybeStr_4);
    *wrapper_arg_1 = ((MR_Box) (conv0_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0(
  MR_Integer N_7,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_7 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItems_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RevItems0_9));
      }
    else
    {
      MR_Word MaybeItem_12;

      io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) &read_profile_scalar_common_4[5], (MR_Word) &read_profile_scalar_common_4[6], (MR_Word) &read_profile_scalar_common_4[7], &MaybeItem_12);
      if (((MR_tag((MR_Word) MaybeItem_12)) == (MR_mktag((MR_Integer) 1))))
        *MaybeItems_10 = (MR_Word) MaybeItem_12;
      else
      {
        MR_Word Item_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeItem_12, (MR_Integer) 0)));
        MR_Integer Var_19 = (N_7 - (MR_Integer) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_7;
        MR_Word next_value_of_RevItems0_9;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Item_13));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (RevItems0_9));
        }
        // direct tailcall eliminated
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
read_profile__read_num_acc_4_p_0(
  MR_Integer Num0_5,
  MR_Word * MaybeNum_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeByte_8;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_byte_3_p_0(&MaybeByte_8);
    switch (MR_tag((MR_Word) MaybeByte_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeNum_6 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_6[0]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeByte_8, (MR_Integer) 0)));
          MR_Integer Num1_10;
          MR_Integer Var_17;
          MR_Integer Var_19;
          MR_Integer Var_21;

          Var_17 = mercury__int__f_60_60_2_f_0(Num0_5, (MR_Integer) 7);
          Var_19 = (Byte_9 & (MR_Integer) 127);
          Num1_10 = (Var_17 | Var_19);
          Var_21 = (Byte_9 & (MR_Integer) 128);
          succeeded = (Var_21 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
          {
            MR_Integer next_value_of_Num0_5 = Num1_10;

            // direct tailcall eliminated
            Num0_5 = next_value_of_Num0_5;
            continue;
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeNum_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Num1_10));
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), MaybeByte_8, (MR_Integer) 0)));
          MR_String Msg_12;

          mercury__io__error_message_2_p_0(Error_11, &Msg_12);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeNum_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_12));
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__5_36;

    read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_p_0(((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Integer) wrapper_arg_3), ((MR_String) wrapper_arg_4), &conv4_LambdaHeadVar__5_36);
    *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_36));
  }
}

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_MaybeStr_4;

    read_profile__read_string_3_p_0(&conv3_MaybeStr_4);
    *wrapper_arg_1 = ((MR_Box) (conv3_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_MaybeNum_4;

    read_profile__read_num_3_p_0(&conv2_MaybeNum_4);
    *wrapper_arg_1 = ((MR_Box) (conv2_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MaybeKindAndCallee_4;

    read_profile__read_call_site_kind_and_callee_3_p_0(&conv1_MaybeKindAndCallee_4);
    *wrapper_arg_1 = ((MR_Box) (conv1_MaybeKindAndCallee_4));
  }
}

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybePtr_6;

    read_profile__read_ptr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv0_MaybePtr_6);
    *wrapper_arg_1 = ((MR_Box) (conv0_MaybePtr_6));
  }
}

static void MR_CALL 
read_profile__read_call_site_static_3_p_0(
  MR_Word * MaybeCSS_4)
{
  {
    MR_Word TypeCtorInfo_65_65 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

    io_combinator__maybe_error_sequence_4_8_p_0(TypeCtorInfo_65_65, (MR_Word) &read_profile_scalar_common_1[0], TypeCtorInfo_65_65, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &read_profile_scalar_common_2[0], (MR_Word) &read_profile_scalar_common_2[2], (MR_Word) &read_profile_scalar_common_4[1], (MR_Word) &read_profile_scalar_common_4[2], (MR_Word) &read_profile_scalar_common_4[3], (MR_Word) &read_profile_scalar_common_4[4], MaybeCSS_4);
  }
}

static void MR_CALL 
read_profile__read_deep_id_string_3_p_0(
  MR_Word * MaybeVersionNumber_4)
{
  {
    MR_bool succeeded;
    MR_Integer FirstLineLenLimit_6;
    MR_Word MaybeLine_7;
    MR_Integer Var_15;

    Var_15 = mercury__string__length_1_f_0((MR_String) "Mercury deep profiler data version ");
    FirstLineLenLimit_6 = (Var_15 + (MR_Integer) 10);
    read_profile__read_line_acc_5_p_0(FirstLineLenLimit_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeLine_7);
    if (((MR_tag((MR_Word) MaybeLine_7)) == (MR_mktag((MR_Integer) 1))))
      *MaybeVersionNumber_4 = (MR_Word) MaybeLine_7;
    else
    {
      MR_String Line0_8 = ((MR_String) (MR_hl_field(MR_mktag(0), MaybeLine_7, (MR_Integer) 0)));
      MR_String Line_9;
      MR_Integer VersionNumber_11;
      MR_String Suffix_10;

      Line_9 = mercury__string__chomp_1_f_0(Line0_8);
      succeeded = mercury__string__append_3_p_1((MR_String) "Mercury deep profiler data version ", &Suffix_10, Line_9);
      if (succeeded)
        succeeded = mercury__string__to_int_2_p_0(Suffix_10, &VersionNumber_11);
      if (succeeded)
      {
        succeeded = (VersionNumber_11 == (MR_Integer) 8);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeVersionNumber_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VersionNumber_11));
          }
        else
        {
          *MaybeVersionNumber_4 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_6[1]);
        }
      }
      else
      {
        *MaybeVersionNumber_4 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_6[2]);
      }
    }
  }
}

static void MR_CALL 
read_profile__read_line_acc_5_p_0(
  MR_Integer Limit_6,
  MR_Word STATE_VARIABLE_RevChars_0_17,
  MR_Word * MaybeLine_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Limit_6 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      MR_Word MaybeByte_10;

      mercury__io__read_byte_3_p_0(&MaybeByte_10);
      switch (MR_tag((MR_Word) MaybeByte_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *MaybeLine_8 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_6[0]);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeByte_10, (MR_Integer) 0)));
            MR_Char Char_12;

            succeeded = mercury__char__to_int_2_p_2(&Char_12, Byte_11);
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_RevChars_23_23;

              {
                STATE_VARIABLE_RevChars_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_23_23, 0) = ((MR_Box) (MR_Word) (Char_12));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_23_23, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_17));
              }
              succeeded = (Char_12 == (MR_Char) 10);
              if (succeeded)
              {
                MR_Word Chars_13;
                MR_String Str_14;

                mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, STATE_VARIABLE_RevChars_23_23, &Chars_13);
                mercury__string__from_char_list_2_p_0(Chars_13, &Str_14);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeLine_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Str_14));
                }
              }
              else
              {
                MR_Integer Var_24 = (Limit_6 - (MR_Integer) 1);
                MR_Integer next_value_of_Limit_6 = Var_24;
                MR_Word next_value_of_STATE_VARIABLE_RevChars_0_17 = STATE_VARIABLE_RevChars_23_23;

                // direct tailcall eliminated
                Limit_6 = next_value_of_Limit_6;
                STATE_VARIABLE_RevChars_0_17 = next_value_of_STATE_VARIABLE_RevChars_0_17;
                continue;
              }
            }
            else
            {
              *MaybeLine_8 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_6[0]);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), MaybeByte_10, (MR_Integer) 0)));
            MR_String Msg_16;

            mercury__io__error_message_2_p_0(Error_15, &Msg_16);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLine_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_16));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Chars_35;
      MR_String Str_36;

      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, STATE_VARIABLE_RevChars_0_17, &Chars_35);
      mercury__string__from_char_list_2_p_0(Chars_35, &Str_36);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeLine_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Str_36));
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
read_profile____Unify____maybe_error2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = read_profile____Unify____maybe_error2_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    return succeeded;
  }
}

static void MR_CALL 
read_profile____Compare____maybe_error2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    read_profile____Compare____maybe_error2_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_4), ((MR_Word) wrapper_arg_5));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
read_profile____Unify____maybe_init_deep_complete_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = read_profile____Unify____maybe_init_deep_complete_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
read_profile____Compare____maybe_init_deep_complete_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    read_profile____Compare____maybe_init_deep_complete_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
read_profile____Unify____next_deep_item_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = read_profile____Unify____next_deep_item_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
read_profile____Compare____next_deep_item_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    read_profile____Compare____next_deep_item_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
read_profile____Unify____ptr_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = read_profile____Unify____ptr_kind_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
read_profile____Compare____ptr_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    read_profile____Compare____ptr_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__read_profile__init(void)
{
}

void mercury__read_profile__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

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
