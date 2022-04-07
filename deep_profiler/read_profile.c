/*
** Automatically generated from `read_profile.m'
** by the Mercury compiler,
** version rotd-2022-04-07
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

static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_ordinal_ordered_ptr_kind_0[4];

static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_name_ordered_ptr_kind_0[4];

static const MR_Integer read_profile__read_profile__functor_number_map_ptr_kind_0[4];

static MR_bool MR_CALL 
read_profile__IntroducedFrom__pred__read_n_byte_string__1343__1_2_p_0(
  MR_Integer LambdaHeadVar__1_23,
  MR_Char * LambdaHeadVar__2_24);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__908__1_3_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Word LambdaHeadVar__2_54,
  MR_Word * LambdaHeadVar__3_55);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__910__1_5_p_0(
  MR_Integer N_19,
  MR_Word HeadVar__2_52,
  MR_Word * HeadVar__3_93);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__898__1_4_p_0(
  MR_Integer LambdaHeadVar__1_42,
  MR_Integer LambdaHeadVar__2_43,
  MR_Integer LambdaHeadVar__3_44,
  MR_Word * LambdaHeadVar__4_45);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static__716__1_3_p_0(
  MR_String LambdaHeadVar__1_19,
  MR_Word LambdaHeadVar__2_20,
  MR_Word * LambdaHeadVar__3_21);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__700__1_3_p_0(
  MR_Word LambdaHeadVar__1_17,
  MR_Integer LambdaHeadVar__2_18,
  MR_Word * LambdaHeadVar__3_19);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_user_defined__675__1_7_p_0(
  MR_Word PredOrFunc_7,
  MR_String LambdaHeadVar__1_25,
  MR_String LambdaHeadVar__2_26,
  MR_String LambdaHeadVar__3_27,
  MR_Integer LambdaHeadVar__4_28,
  MR_Integer LambdaHeadVar__5_29,
  MR_Word * LambdaHeadVar__6_30);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__657__1_7_p_0(
  MR_String LambdaHeadVar__1_25,
  MR_String LambdaHeadVar__2_26,
  MR_String LambdaHeadVar__3_27,
  MR_String LambdaHeadVar__4_28,
  MR_Integer LambdaHeadVar__5_29,
  MR_Integer LambdaHeadVar__6_30,
  MR_Word * LambdaHeadVar__7_31);

static MR_ArrayPtr MR_CALL 
read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__586__1_1_f_0(
  MR_Word HeadVar__1_75);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_static__478__1_7_p_0(
  MR_Integer LambdaHeadVar__1_54,
  MR_Word LambdaHeadVar__2_55,
  MR_String LambdaHeadVar__3_56,
  MR_Integer LambdaHeadVar__4_57,
  MR_Integer LambdaHeadVar__5_58,
  MR_Integer LambdaHeadVar__6_59,
  MR_Word * LambdaHeadVar__7_60);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_call_site_static__441__1_5_p_0(
  MR_Integer LambdaHeadVar__1_36,
  MR_Word LambdaHeadVar__2_37,
  MR_Integer LambdaHeadVar__3_38,
  MR_String LambdaHeadVar__4_39,
  MR_Word * LambdaHeadVar__5_40);

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
read_profile__read_n_things_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Integer N_6,
  MR_Word ItemReader_7,
  MR_Word * MaybeItems_8);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_91_49_93_95_48_6_p_0(
  MR_Integer N_7,
  MR_Word ItemReader_8,
  MR_Word RevItems0_9,
  MR_Word * MaybeItems_10);

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

static MR_Word MR_CALL 
read_profile__make_csdptr_1_f_0(
  MR_Integer CSDI_3);

static void MR_CALL 
read_profile__read_call_site_kind_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeKind_6);

static void MR_CALL 
read_profile__read_multi_call_site_csdis_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeCSDIs_6);

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
read_profile__read_proc_id_user_defined_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
read_profile__read_proc_id_user_defined_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_user_defined_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_user_defined_5_p_0(
  MR_Word InputStream_6,
  MR_Word PredOrFunc_7,
  MR_Word * MaybeProcLabel_8);

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
read_profile__read_nodes_5_p_0(
  MR_Word InputStream_6,
  MR_Word InitDeep0_7,
  MR_Word * MaybeInitDeep_8);

static void MR_CALL 
read_profile__read_nodes_2_6_p_0(
  MR_Word tscc_proc_1_input_1_InputStream_7,
  MR_Integer tscc_proc_1_input_2_Depth_8,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12,
  MR_Word * tscc_output_ptr_1_MaybeInitDeep_10);

static void MR_CALL 
read_profile__read_nodes_3_6_p_0(
  MR_Word tscc_proc_2_input_1_InputStream_7,
  MR_Integer tscc_proc_2_input_2_Depth_8,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_InitDeep_0_38,
  MR_Word * tscc_output_ptr_1_MaybeInitDeep_10);

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
read_profile__read_call_site_dynamic_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeCSD_6);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_50_93_95_48_5_p_0(
  MR_Word InputStream_6,
  MR_Word * MaybePtr_8);

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

static MR_Word MR_CALL 
read_profile__make_psptr_1_f_0(
  MR_Integer PSI_3);

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
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_50_44_32_52_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Integer N_6,
  MR_Word * MaybeItems_8);

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
read_profile__add_plus_one_for_function_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
read_profile__raw_proc_id_to_string_1_f_0(
  MR_Word HeadVar__1_1);

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
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_51_95_95_91_51_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Integer N_6,
  MR_Word * MaybeItems_8);

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
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_50_95_95_91_51_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Integer N_6,
  MR_Word * MaybeItems_8);

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
read_profile__read_num_acc_5_p_0(
  MR_Word InputStream_6,
  MR_Integer Num0_7,
  MR_Word * MaybeNum_8);

static void MR_CALL 
read_profile__read_call_site_static_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
read_profile__read_call_site_static_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_4_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeCSS_6);

static void MR_CALL 
read_profile__read_deep_id_string_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeVersionNumber_6);

static void MR_CALL 
read_profile__read_line_acc_6_p_0(
  MR_Word InputStream_7,
  MR_Integer Limit_8,
  MR_Word STATE_VARIABLE_RevChars_0_19,
  MR_Word * MaybeLine_10);

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

static /* final */ const MR_Box read_profile_scalar_common_2[3][4];

static /* final */ const MR_Box read_profile_scalar_common_3[5][8];

static /* final */ const MR_Box read_profile_scalar_common_4[18][3];

static /* final */ const MR_Box read_profile_scalar_common_5[6][5];

static /* final */ const MR_Box read_profile_scalar_common_6[12][1];

static /* final */ const MR_Box read_profile_scalar_common_7[8][7];

static /* final */ const MR_Box read_profile_scalar_common_8[3][6];

static /* final */ const MR_Box read_profile_scalar_common_9[3][10];

static /* final */ const MR_Box read_profile_scalar_common_10[1][15];




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

static /* final */ const MR_Box read_profile_scalar_common_2[3][4] = {
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

static /* final */ const MR_Box read_profile_scalar_common_4[18][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&read_profile_scalar_common_3[2])),
    ((MR_Box) (read_profile__read_call_site_static_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[0])),
    ((MR_Box) (read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[1])),
    ((MR_Box) (read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[1])),
    ((MR_Box) (read_profile__maybe_read_ps_coverage_points_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&read_profile_scalar_common_2[2])),
    ((MR_Box) (read_profile__fix_type_spec_suffix_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&read_profile_scalar_common_9[0])),
    ((MR_Box) (read_profile__read_proc_static_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[2])),
    ((MR_Box) (read_profile__read_proc_static_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&read_profile_scalar_common_7[6])),
    ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[2])),
    ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&read_profile_scalar_common_10[0])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&read_profile_scalar_common_9[2])),
    ((MR_Box) (read_profile__read_proc_id_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[0])),
    ((MR_Box) (read_profile__read_coverage_point_static_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[4])),
    ((MR_Box) (read_profile__read_call_site_slot_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[4])),
    ((MR_Box) (read_profile__read_call_site_slot_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[4])),
    ((MR_Box) (read_profile__read_call_site_slot_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[4])),
    ((MR_Box) (read_profile__read_call_site_slot_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[5])),
    ((MR_Box) (read_profile__read_string_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_5[6][5] = {
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
    ((MR_Box) (((MR_Box) ((MR_Integer) -1)))),
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &read_profile_scalar_common_1[6]))),
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   5 */
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
  {
    ((MR_Box) ((MR_String) "version number mismatch"))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "not a deep profiling data file"))
  },
  /* row   2 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   3 */
  {
    ((MR_Box) (&read_profile_scalar_common_1[5]))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "unexpected end of file"))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "string contained bad char"))
  },
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
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_cp_type_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0__plain_builtin__type_ctor_info_string_0)),
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

static /* final */ const MR_Box read_profile_scalar_common_8[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
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
};

static /* final */ const MR_Box read_profile_scalar_common_9[3][10] = {
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
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
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0)
  }
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

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_cp_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0),
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

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__array__pti_array_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
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
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 read_profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&read_profile__array__ti_array_1builtin__type_ctor_info_int_0)
  }
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
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_array_slot_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&read_profile__array__ti_array_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__list__pti_list_1__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_array_slot_0)
  }
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

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_error2_2_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_error2_2_0[1] = {
  &read_profile__read_profile__du_functor_desc_maybe_error2_2_0
};

static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_error2_2_1[1] = {
  &read_profile__read_profile__du_functor_desc_maybe_error2_2_1
};

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

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_0[1] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_initial_deep_0)
};

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

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_1[1] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_initial_deep_0)
};

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

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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
read_profile__IntroducedFrom__pred__read_n_byte_string__1343__1_2_p_0(
  MR_Integer LambdaHeadVar__1_23,
  MR_Char * LambdaHeadVar__2_24)
{
  MR_bool succeeded;

  succeeded = mercury__char__to_int_2_p_2(LambdaHeadVar__2_24, LambdaHeadVar__1_23);
  return succeeded;
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__908__1_3_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Word LambdaHeadVar__2_54,
  MR_Word * LambdaHeadVar__3_55)
{
  MR_Tuple Var_56;

  {
    Var_56 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (LambdaHeadVar__1_53));
    MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (LambdaHeadVar__2_54));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__3_55 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_56));
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__910__1_5_p_0(
  MR_Integer N_19,
  MR_Word HeadVar__2_52,
  MR_Word * HeadVar__3_93)
{
  read_profile__read_n_things_5_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), N_19, HeadVar__2_52, HeadVar__3_93);
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__898__1_4_p_0(
  MR_Integer LambdaHeadVar__1_42,
  MR_Integer LambdaHeadVar__2_43,
  MR_Integer LambdaHeadVar__3_44,
  MR_Word * LambdaHeadVar__4_45)
{
  MR_Tuple Var_46;

  {
    Var_46 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (LambdaHeadVar__1_42));
    MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (LambdaHeadVar__2_43));
    MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) (LambdaHeadVar__3_44));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__4_45 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static__716__1_3_p_0(
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
    MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (RevGoalPath_12));
    MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (LambdaHeadVar__2_20));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__3_21 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__700__1_3_p_0(
  MR_Word LambdaHeadVar__1_17,
  MR_Integer LambdaHeadVar__2_18,
  MR_Word * LambdaHeadVar__3_19)
{
  MR_Word CPI_22;

  {
    CPI_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), CPI_22, 0) = ((MR_Box) (LambdaHeadVar__1_17));
    MR_hl_field(MR_mktag(0), CPI_22, 1) = ((MR_Box) (LambdaHeadVar__2_18));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__3_19 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CPI_22));
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_user_defined__675__1_7_p_0(
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
    MR_hl_field(MR_mktag(0), Var_31, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_7));
    MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (LambdaHeadVar__1_25));
    MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (LambdaHeadVar__2_26));
    MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (LambdaHeadVar__3_27));
    MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (LambdaHeadVar__4_28));
    MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (LambdaHeadVar__5_29));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__6_30 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__657__1_7_p_0(
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
    Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (LambdaHeadVar__1_25));
    MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (LambdaHeadVar__2_26));
    MR_hl_field(MR_mktag(1), Var_32, 2) = ((MR_Box) (LambdaHeadVar__3_27));
    MR_hl_field(MR_mktag(1), Var_32, 3) = ((MR_Box) (LambdaHeadVar__4_28));
    MR_hl_field(MR_mktag(1), Var_32, 4) = ((MR_Box) (LambdaHeadVar__5_29));
    MR_hl_field(MR_mktag(1), Var_32, 5) = ((MR_Box) (LambdaHeadVar__6_30));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__7_31 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
  }
}

static MR_ArrayPtr MR_CALL 
read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__586__1_1_f_0(
  MR_Word HeadVar__1_75)
{
  MR_ArrayPtr HeadVar__2_76;
  MR_ArrayPtr conv0_HeadVar__2_76;

  conv0_HeadVar__2_76 = mercury__array__array_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_75);
  HeadVar__2_76 = (MR_ArrayPtr) (conv0_HeadVar__2_76);
  return HeadVar__2_76;
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_static__478__1_7_p_0(
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
    MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (LambdaHeadVar__1_54));
    MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (LambdaHeadVar__2_55));
    MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (LambdaHeadVar__3_56));
    MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (LambdaHeadVar__4_57));
    MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (LambdaHeadVar__5_58));
    MR_hl_field(MR_mktag(0), Var_61, 5) = ((MR_Box) (LambdaHeadVar__6_59));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__7_60 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_61));
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_call_site_static__441__1_5_p_0(
  MR_Integer LambdaHeadVar__1_36,
  MR_Word LambdaHeadVar__2_37,
  MR_Integer LambdaHeadVar__3_38,
  MR_String LambdaHeadVar__4_39,
  MR_Word * LambdaHeadVar__5_40)
{
  MR_Word RevGoalPath0_17;
  MR_Word RevGoalPath_18;
  MR_Word CallSiteStatic0_19;
  MR_Tuple Var_41;

  mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(LambdaHeadVar__4_39, &RevGoalPath0_17);
  mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(RevGoalPath0_17, &RevGoalPath_18);
  {
    CallSiteStatic0_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), CallSiteStatic0_19, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
    MR_hl_field(MR_mktag(0), CallSiteStatic0_19, 1) = ((MR_Box) ((MR_Integer) -1));
    MR_hl_field(MR_mktag(0), CallSiteStatic0_19, 2) = ((MR_Box) (LambdaHeadVar__2_37));
    MR_hl_field(MR_mktag(0), CallSiteStatic0_19, 3) = ((MR_Box) (LambdaHeadVar__3_38));
    MR_hl_field(MR_mktag(0), CallSiteStatic0_19, 4) = ((MR_Box) (RevGoalPath_18));
  }
  {
    Var_41 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (CallSiteStatic0_19));
    MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (LambdaHeadVar__1_36));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__5_40 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
read_profile____Compare____maybe_init_deep_complete_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_28 = (MR_Word) ((MR_Word) (HeadVar__2_2));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

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
          MR_Word Var_29 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_13 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

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
          MR_String Var_27 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                MR_String ArgY1_21 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_27, ArgY1_21);
              }
              break;
          }
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
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
read_profile____Compare____maybe_error2_2_0(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_String ArgY1_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_22, ArgY1_16);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Box Var_23 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
    MR_Box Var_24 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
      MR_Box ArgY2_8 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T1_19, &SubResult1_6, Var_24, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0(TypeInfo_for_T2_20, HeadVar__1_1, Var_23, ArgY2_8);
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
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;
    MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
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

static MR_Word MR_CALL 
read_profile__make_cssptr_1_f_0(
  MR_Integer CSSI_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (CSSI_3);

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
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Num0_10));
      }
    else
    {
      MR_Word MaybeByte_14;

      read_profile__read_deep_byte_4_p_0(InputStream_8, &MaybeByte_14);
      if (((MR_tag((MR_Word) MaybeByte_14)) == (MR_Integer) 1))
        *MaybeInt_12 = MaybeByte_14;
      else
      {
        MR_Integer Byte_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeByte_14, (MR_Integer) 0))));
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
    MR_Integer Num_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeNum_8, (MR_Integer) 0))));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CPType_10));
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
read_profile__read_n_things_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Integer N_6,
  MR_Word ItemReader_7,
  MR_Word * MaybeItems_8)
{
  MR_Word MaybeRevItems_10;

  read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_91_49_93_95_48_6_p_0(N_6, ItemReader_7, (MR_Word) ((MR_Unsigned) 0U), &MaybeRevItems_10);
  if (((MR_tag((MR_Word) MaybeRevItems_10)) == (MR_Integer) 1))
    *MaybeItems_8 = MaybeRevItems_10;
  else
  {
    MR_Word RevItems_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeRevItems_10, (MR_Integer) 0))));
    MR_Word Items_12;

    mercury__list__reverse_2_p_0(TypeInfo_for_T_18, RevItems_11, &Items_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeItems_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Items_12));
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
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RevItems0_9));
      }
    else
    {
      MR_Word MaybeItem_12;
      void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ItemReader_8, (MR_Integer) 1))));
      MR_Box conv2_MaybeItem_12;
      MR_Box conv1_STATE_VARIABLE_IO_18_18;

      func_0(((MR_Box) (ItemReader_8)), &conv2_MaybeItem_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18_18);
      MaybeItem_12 = ((MR_Word) (conv2_MaybeItem_12));
      if (((MR_tag((MR_Word) MaybeItem_12)) == (MR_Integer) 1))
        *MaybeItems_10 = (MR_Word) (MaybeItem_12);
      else
      {
        MR_Box Item_13 = (MR_hl_field(MR_mktag(0), MaybeItem_12, (MR_Integer) 0));
        MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) N_7 - (MR_Unsigned) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_7;
        MR_Word next_value_of_RevItems0_9;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = Item_13;
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (RevItems0_9));
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
    MR_Integer Byte_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeByte_8, (MR_Integer) 0))));
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
              MR_Integer CalleeProcStatic_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeCSS_11, (MR_Integer) 0))));
              MR_Word MaybeTypeSubst_13;

              read_profile__read_string_4_p_0(InputStream_5, &MaybeTypeSubst_13);
              if (((MR_tag((MR_Word) MaybeTypeSubst_13)) == (MR_Integer) 1))
                *MaybeKindAndCallee_6 = (MR_Word) (MaybeTypeSubst_13);
              else
              {
                MR_String TypeSubst_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), MaybeTypeSubst_13, (MR_Integer) 0))));
                MR_Word Var_28;
                MR_Word Var_29 = (MR_Word) (CalleeProcStatic_12);

                {
                  Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
                  MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (TypeSubst_14));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeKindAndCallee_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeKindAndCallee_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_16));
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

  succeeded = read_profile__IntroducedFrom__pred__read_n_byte_string__1343__1_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_24);
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
    MR_Integer Length_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeNum_8, (MR_Integer) 0))));

    succeeded = (Length_9 == (MR_Integer) 0);
    if (succeeded)
      *MaybeStr_6 = (MR_Word) (&read_profile_scalar_common_6[10]);
    else
    {
      MR_Word MaybeRevNBytes_71;

      read_profile__read_n_bytes_acc_6_p_0(InputStream_5, Length_9, (MR_Word) ((MR_Unsigned) 0U), &MaybeRevNBytes_71);
      if (((MR_tag((MR_Word) MaybeRevNBytes_71)) == (MR_Integer) 1))
        *MaybeStr_6 = (MR_Word) (MaybeRevNBytes_71);
      else
      {
        MR_Word Bytes_40;
        MR_Word RevBytes_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeRevNBytes_71, (MR_Integer) 0))));
        MR_Word Chars_43;

        mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevBytes_72, &Bytes_40);
        succeeded = mercury__list__map_3_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&read_profile_scalar_common_4[17]), Bytes_40, &Chars_43);
        if (succeeded)
        {
          MR_String Str_44;

          mercury__string__from_char_list_2_p_0(Chars_43, &Str_44);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeStr_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Str_44));
          }
        }
        else
          *MaybeStr_6 = (MR_Word) (MR_mkword(MR_mktag(1), &read_profile_scalar_common_6[11]));
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
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RevBytes0_9));
      }
    else
    {
      MR_Word MaybeByte_12;

      read_profile__read_deep_byte_4_p_0(InputStream_7, &MaybeByte_12);
      if (((MR_tag((MR_Word) MaybeByte_12)) == (MR_Integer) 1))
        *MaybeNBytes_10 = (MR_Word) (MaybeByte_12);
      else
      {
        MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeByte_12, (MR_Integer) 0))));
        MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) N_8 - (MR_Unsigned) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_8;
        MR_Word next_value_of_RevBytes0_9;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Byte_13));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (RevBytes0_9));
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
  MR_Word MaybeKind_10;

  read_profile__read_call_site_kind_4_p_0(InputStream_5, &MaybeKind_10);
  if (((MR_tag((MR_Word) MaybeKind_10)) == (MR_Integer) 1))
    *MaybeSlot_6 = (MR_Word) (MaybeKind_10);
  else
  {
    MR_Word Kind_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeKind_10, (MR_Integer) 0))));

    switch (Kind_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case ((int) MR_callsite_callback):
        {
          MR_Word MaybeCSDIs_17;

          read_profile__read_multi_call_site_csdis_4_p_0(InputStream_5, &MaybeCSDIs_17);
          if (((MR_tag((MR_Word) MaybeCSDIs_17)) == (MR_Integer) 1))
            *MaybeSlot_6 = (MR_Word) (MaybeCSDIs_17);
          else
          {
            MR_Word CSDIs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCSDIs_17, (MR_Integer) 0))));
            MR_Word CSDPtrs_19;
            MR_Word Var_29;
            MR_ArrayPtr Var_30;
            MR_ArrayPtr conv1_Var_30;

            CSDPtrs_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&read_profile_scalar_common_4[13]), CSDIs_18);
            conv1_Var_30 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), CSDPtrs_19);
            Var_30 = (MR_ArrayPtr) (conv1_Var_30);
            {
              Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_29, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSlot_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
            }
          }
        }
        break;
      case ((int) MR_callsite_higher_order_call):
        {
          MR_Word MaybeCSDIs_124;

          read_profile__read_multi_call_site_csdis_4_p_0(InputStream_5, &MaybeCSDIs_124);
          if (((MR_tag((MR_Word) MaybeCSDIs_124)) == (MR_Integer) 1))
            *MaybeSlot_6 = (MR_Word) (MaybeCSDIs_124);
          else
          {
            MR_Word CSDIs_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCSDIs_124, (MR_Integer) 0))));
            MR_Word CSDPtrs_91;
            MR_Word Var_93;
            MR_ArrayPtr Var_94;
            MR_ArrayPtr conv3_Var_94;

            CSDPtrs_91 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&read_profile_scalar_common_4[14]), CSDIs_90);
            conv3_Var_94 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), CSDPtrs_91);
            Var_94 = (MR_ArrayPtr) (conv3_Var_94);
            {
              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_93, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSlot_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_93));
            }
          }
        }
        break;
      case ((int) MR_callsite_method_call):
        {
          MR_Word MaybeCSDIs_206;

          read_profile__read_multi_call_site_csdis_4_p_0(InputStream_5, &MaybeCSDIs_206);
          if (((MR_tag((MR_Word) MaybeCSDIs_206)) == (MR_Integer) 1))
            *MaybeSlot_6 = (MR_Word) (MaybeCSDIs_206);
          else
          {
            MR_Word CSDIs_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCSDIs_206, (MR_Integer) 0))));
            MR_Word CSDPtrs_173;
            MR_Word Var_175;
            MR_ArrayPtr Var_176;
            MR_ArrayPtr conv5_Var_176;

            CSDPtrs_173 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&read_profile_scalar_common_4[15]), CSDIs_172);
            conv5_Var_176 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), CSDPtrs_173);
            Var_176 = (MR_ArrayPtr) (conv5_Var_176);
            {
              Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_175, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (Var_176));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSlot_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_175));
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
            MR_Integer CSDI_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeCSDI_12, (MR_Integer) 0))));
            MR_Word CSDPtr_14;
            MR_Word Var_40;

            CSDPtr_14 = read_profile__make_csdptr_1_f_0(CSDI_13);
            {
              Var_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (CSDPtr_14));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSlot_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
            }
          }
        }
        break;
      case ((int) MR_callsite_special_call):
        {
          MR_Word MaybeCSDIs_288;

          read_profile__read_multi_call_site_csdis_4_p_0(InputStream_5, &MaybeCSDIs_288);
          if (((MR_tag((MR_Word) MaybeCSDIs_288)) == (MR_Integer) 1))
            *MaybeSlot_6 = (MR_Word) (MaybeCSDIs_288);
          else
          {
            MR_Word CSDIs_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCSDIs_288, (MR_Integer) 0))));
            MR_Word CSDPtrs_255;
            MR_Word Var_257;
            MR_ArrayPtr Var_258;
            MR_ArrayPtr conv7_Var_258;

            CSDPtrs_255 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&read_profile_scalar_common_4[16]), CSDIs_254);
            conv7_Var_258 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), CSDPtrs_255);
            Var_258 = (MR_ArrayPtr) (conv7_Var_258);
            {
              Var_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_257, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(1), Var_257, 1) = ((MR_Box) (Var_258));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSlot_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_257));
            }
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
read_profile__make_csdptr_1_f_0(
  MR_Integer CSDI_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (CSDI_3);

  return HeadVar__2_2;
}

static void MR_CALL 
read_profile__read_call_site_kind_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeKind_6)
{
  MR_bool succeeded;
  MR_Word MaybeByte_8;

  read_profile__read_deep_byte_4_p_0(InputStream_5, &MaybeByte_8);
  if (((MR_tag((MR_Word) MaybeByte_8)) == (MR_Integer) 1))
    *MaybeKind_6 = (MR_Word) (MaybeByte_8);
  else
  {
    MR_Integer Byte_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeByte_8, (MR_Integer) 0))));
    MR_Word CallSiteKind_10;

    succeeded = profile__is_call_site_kind_2_p_0(Byte_9, &CallSiteKind_10);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeKind_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CallSiteKind_10));
      }
    else
    {
      MR_String Msg_11;
      MR_String Var_30;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Byte_9, &Var_30);
      Msg_11 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected call_site_kind ", Var_30);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeKind_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_11));
      }
    }
  }
}

static void MR_CALL 
read_profile__read_multi_call_site_csdis_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeCSDIs_6)
{
  read_profile__read_multi_call_site_csdis_2_5_p_0(InputStream_5, (MR_Word) ((MR_Unsigned) 0U), MaybeCSDIs_6);
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
      MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeByte_12, (MR_Integer) 0))));

      succeeded = (Byte_13 == (MR_Integer) 0);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCSDIs_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CSDIs0_7));
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
          MR_Integer CSDI_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeCSDI_14, (MR_Integer) 0))));
          MR_Word Var_28;
          MR_Word next_value_of_CSDIs0_7;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (CSDI_15));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (CSDIs0_7));
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

  read_profile__IntroducedFrom__pred__read_coverage_point_static__716__1_3_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_21);
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

  read_profile__read_cp_type_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv1_MaybeCPType_6);
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

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv0_MaybeStr_6);
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
    MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
    MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (read_profile__read_coverage_point_static_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (InputStream_5));
  }
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&read_profile_scalar_common_7[3]));
    MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (read_profile__read_coverage_point_static_4_p_0_2));
    MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (InputStream_5));
  }
  io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), Var_15, Var_16, (MR_Word) (&read_profile_scalar_common_4[12]), MaybeCP_6);
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

  read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__657__1_7_p_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)), ((MR_String) (wrapper_arg_4)), ((MR_Integer) (wrapper_arg_5)), ((MR_Integer) (wrapper_arg_6)), &conv2_LambdaHeadVar__7_31);
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

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv1_MaybeNum_6);
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

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv0_MaybeStr_6);
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
    MR_Integer Byte_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeByte_8, (MR_Integer) 0))));
    MR_Word ProcLabelKind_10;

    succeeded = mdbcomp__program_representation__is_proclabel_kind_2_p_0(Byte_9, &ProcLabelKind_10);
    if (succeeded)
      switch (ProcLabelKind_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case ((int) MR_proclabel_special):
          {
            MR_Word Var_45;
            MR_Word Var_49;

            {
              Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
              MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (read_profile__read_proc_id_4_p_0_1));
              MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (InputStream_5));
            }
            {
              Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
              MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (read_profile__read_proc_id_4_p_0_2));
              MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (InputStream_5));
            }
            io_combinator__maybe_error_sequence_6_10_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), Var_45, Var_45, Var_45, Var_45, Var_49, Var_49, (MR_Word) (&read_profile_scalar_common_4[11]), MaybeProcId_6);
          }
          break;
        case ((int) MR_proclabel_user_function):
          read_profile__read_proc_id_user_defined_5_p_0(InputStream_5, (MR_Integer) 1, MaybeProcId_6);
          break;
        case ((int) MR_proclabel_user_predicate):
          read_profile__read_proc_id_user_defined_5_p_0(InputStream_5, (MR_Integer) 0, MaybeProcId_6);
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeProcId_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_11));
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
      *MaybeByte_6 = (MR_Word) (MR_mkword(MR_mktag(1), &read_profile_scalar_common_6[9]));
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Byte_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeRawByte_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeByte_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Byte_9));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeRawByte_8, (MR_Integer) 0))));
        MR_String Msg_11;

        mercury__io__error_message_2_p_0(Error_10, &Msg_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeByte_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_11));
        }
      }
      break;
  }
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__6_30;

  read_profile__IntroducedFrom__pred__read_proc_id_user_defined__675__1_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)), ((MR_Integer) (wrapper_arg_4)), ((MR_Integer) (wrapper_arg_5)), &conv2_LambdaHeadVar__6_30);
  *wrapper_arg_6 = ((MR_Box) (conv2_LambdaHeadVar__6_30));
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeNum_6;

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv1_MaybeNum_6);
  *wrapper_arg_1 = ((MR_Box) (conv1_MaybeNum_6));
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeStr_6;

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv0_MaybeStr_6);
  *wrapper_arg_1 = ((MR_Box) (conv0_MaybeStr_6));
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_5_p_0(
  MR_Word InputStream_6,
  MR_Word PredOrFunc_7,
  MR_Word * MaybeProcLabel_8)
{
  MR_Word Var_18;
  MR_Word Var_21;
  MR_Word Var_23;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
    MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (read_profile__read_proc_id_user_defined_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (InputStream_6));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
    MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (read_profile__read_proc_id_user_defined_5_p_0_2));
    MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (InputStream_6));
  }
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&read_profile_scalar_common_9[1]));
    MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (read_profile__read_proc_id_user_defined_5_p_0_3));
    MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (PredOrFunc_7));
  }
  io_combinator__maybe_error_sequence_5_9_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), Var_18, Var_18, Var_18, Var_21, Var_21, Var_23, MaybeProcLabel_8);
}

static void MR_CALL 
read_profile__maybe_read_pd_coverage_points_5_p_0(
  MR_Word InputStream_6,
  MR_Word ProfileStats_7,
  MR_Word * MaybeCoveragePoints_8)
{
  MR_Word CoverageDataType_10;
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProfileStats_7, (MR_Integer) 9))));

  CoverageDataType_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 3))) & (MR_Integer) 3);
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
          MR_Integer N_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ResN_11, (MR_Integer) 0))));
          MR_Word MaybeRevItems_65;

          read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_56_95_95_91_51_93_95_48_6_p_0(InputStream_6, N_12, (MR_Word) ((MR_Unsigned) 0U), &MaybeRevItems_65);
          if (((MR_tag((MR_Word) MaybeRevItems_65)) == (MR_Integer) 1))
            *MaybeCoveragePoints_8 = (MR_Word) (MaybeRevItems_65);
          else
          {
            MR_Word CPsList_14;
            MR_Word Var_22;
            MR_ArrayPtr Var_23;
            MR_Word RevItems_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeRevItems_65, (MR_Integer) 0))));
            MR_ArrayPtr conv0_Var_23;

            mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevItems_66, &CPsList_14);
            conv0_Var_23 = mercury__array__array_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CPsList_14);
            Var_23 = (MR_ArrayPtr) (conv0_Var_23);
            {
              Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCoveragePoints_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
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
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RevItems0_9));
      }
    else
    {
      MR_Word MaybeItem_12;

      read_profile__read_num_acc_5_p_0(Var_24, (MR_Integer) 0, &MaybeItem_12);
      if (((MR_tag((MR_Word) MaybeItem_12)) == (MR_Integer) 1))
        *MaybeItems_10 = (MR_Word) (MaybeItem_12);
      else
      {
        MR_Integer Item_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeItem_12, (MR_Integer) 0))));
        MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) N_7 - (MR_Unsigned) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_7;
        MR_Word next_value_of_RevItems0_9;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Item_13));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (RevItems0_9));
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
    MR_Word Flags_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFlags_25, (MR_Integer) 0))));
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
      InitStats_27 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
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
    Var_30 = (MR_Word) (RootPDI_23);
    Var_32 = (MR_Integer) ((MR_Unsigned) MaxCSD_15 + (MR_Unsigned) 1);
    Var_37 = measurements__zero_own_prof_info_0_f_0();
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (Var_37));
    }
    conv0_Var_31 = mercury__array__init_2_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), Var_32, ((MR_Box) (Var_34)));
    Var_31 = (MR_ArrayPtr) (conv0_Var_31);
    Var_39 = (MR_Integer) ((MR_Unsigned) MaxPD_17 + (MR_Unsigned) 1);
    conv1_Var_43 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_Word) ((MR_Unsigned) 0U));
    Var_43 = (MR_ArrayPtr) (conv1_Var_43);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    conv2_Var_38 = mercury__array__init_2_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), Var_39, ((MR_Box) (Var_41)));
    Var_38 = (MR_ArrayPtr) (conv2_Var_38);
    Var_47 = (MR_Integer) ((MR_Unsigned) MaxCSS_16 + (MR_Unsigned) 1);
    conv3_Var_46 = mercury__array__init_2_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_0), Var_47, ((MR_Box) (&read_profile_scalar_common_5[3])));
    Var_46 = (MR_ArrayPtr) (conv3_Var_46);
    Var_58 = (MR_Integer) ((MR_Unsigned) MaxPS_18 + (MR_Unsigned) 1);
    Var_61 = profile__dummy_proc_id_0_f_0();
    conv4_Var_69 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) ((MR_Unsigned) 0U));
    Var_69 = (MR_ArrayPtr) (conv4_Var_69);
    conv5_Var_71 = mercury__array__array_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), (MR_Word) ((MR_Unsigned) 0U));
    Var_71 = (MR_ArrayPtr) (conv5_Var_71);
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), Var_60, 5) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), Var_60, 6) = ((MR_Box) ((MR_Integer) -1));
      MR_hl_field(MR_mktag(0), Var_60, 7) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_60, 8) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), Var_60, 9) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), Var_60, 10) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_60, 11) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    conv6_Var_57 = mercury__array__init_2_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), Var_58, ((MR_Box) (Var_60)));
    Var_57 = (MR_ArrayPtr) (conv6_Var_57);
    {
      InitDeep_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InitDeep_28, 0) = ((MR_Box) (InitStats_27));
      MR_hl_field(MR_mktag(0), InitDeep_28, 1) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), InitDeep_28, 2) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), InitDeep_28, 3) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), InitDeep_28, 4) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), InitDeep_28, 5) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeInitDeep_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InitDeep_28));
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
  MR_Integer Var_44;
  MR_Integer Var_45;
  MR_Integer Var_46;
  MR_Integer Var_47;
  MR_Integer Var_48;
  MR_Integer Var_49;

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
        Var_46 = (MR_Integer) 255;
        Var_47 = (MR_Integer) 768;
        Var_45 = (Var_46 | Var_47);
        Var_48 = (MR_Integer) 3072;
        Var_44 = (Var_45 | Var_48);
        Var_49 = (MR_Integer) 12288;
        Var_26 = (Var_44 | Var_49);
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
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (BytesPerInt_5));
      MR_hl_field(MR_mktag(0), Var_27, 1) = (MR_Box) ((MR_Unsigned) (CanonicalFlag_9));
      MR_hl_field(MR_mktag(0), Var_27, 2) = NULL;
      MR_hl_field(MR_mktag(0), Var_27, 3) = (MR_Box) ((MR_Unsigned) (CoverageFlag_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFlags_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
    }
  }
  else
  {
    MR_String Var_28;
    MR_String Var_36;

    mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) (&read_profile_scalar_common_6[2]), (MR_Integer) 2, FlagsInt_3, &Var_36);
    Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "Error parsing flags in file header, flags are 0x", Var_36);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeFlags_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
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

  read_profile__read_ptr_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv3_MaybePtr_8);
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

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv2_MaybeNum_6);
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

  read_profile__read_fixed_size_int_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv1_MaybeInt_6);
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

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv0_MaybeStr_6);
  *wrapper_arg_1 = ((MR_Box) (conv0_MaybeStr_6));
}

void MR_CALL 
read_profile__read_call_graph_4_p_0(
  MR_String FileName_5,
  MR_Word * MaybeInitDeep_6)
{
  MR_Word OpenResult_8;

  mercury__io__open_binary_input_4_p_0(FileName_5, &OpenResult_8);
  if (((MR_tag((MR_Word) OpenResult_8)) == (MR_Integer) 1))
  {
    MR_Word Error_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_8, (MR_Integer) 0))));
    MR_String Msg_37;

    mercury__io__error_message_2_p_0(Error_36, &Msg_37);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeInitDeep_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_37));
    }
  }
  else
  {
    MR_Word FileStream_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_8, (MR_Integer) 0))));
    MR_Word MaybeVersionNumber_10;

    read_profile__read_deep_id_string_4_p_0(FileStream_9, &MaybeVersionNumber_10);
    if (((MR_tag((MR_Word) MaybeVersionNumber_10)) == (MR_Integer) 1))
      *MaybeInitDeep_6 = (MR_Word) (MaybeVersionNumber_10);
    else
    {
      MR_Word MaybeInitDeepHeader_12;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_26;
      MR_Word Var_30;

      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (read_profile__read_call_graph_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (FileStream_9));
      }
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (read_profile__read_call_graph_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (FileStream_9));
      }
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (read_profile__read_call_graph_4_p_0_3));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (FileStream_9));
      }
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&read_profile_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (read_profile__read_call_graph_4_p_0_4));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (FileStream_9));
        MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      io_combinator__maybe_error_sequence_11_15_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&profile__profile__type_ctor_info_initial_deep_0), Var_20, Var_21, Var_21, Var_21, Var_21, Var_21, Var_26, Var_26, Var_26, Var_26, Var_30, (MR_Word) (&read_profile_scalar_common_4[10]), &MaybeInitDeepHeader_12);
      if (((MR_tag((MR_Word) MaybeInitDeepHeader_12)) == (MR_Integer) 1))
        *MaybeInitDeep_6 = MaybeInitDeepHeader_12;
      else
      {
        MR_Word InitDeep_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeInitDeepHeader_12, (MR_Integer) 0))));

        read_profile__read_nodes_5_p_0(FileStream_9, InitDeep_13, MaybeInitDeep_6);
      }
    }
    mercury__io__close_binary_input_3_p_0(FileStream_9);
  }
}

static void MR_CALL 
read_profile__read_nodes_5_p_0(
  MR_Word InputStream_6,
  MR_Word InitDeep0_7,
  MR_Word * MaybeInitDeep_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_Integer) 50000 < (MR_Integer) 1))
    {
      // direct tailcall eliminated
      ;
      continue;
    }
    else
    {
      MR_Word MaybeInitDeep0_33;

      read_profile__read_nodes_3_6_p_0(InputStream_6, (MR_Integer) ((MR_Unsigned) 50000 - (MR_Unsigned) 1), InitDeep0_7, &MaybeInitDeep0_33);
      switch (MR_tag((MR_Word) MaybeInitDeep0_33)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InitDeep_11 = (MR_Word) ((MR_Word) (MaybeInitDeep0_33));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeInitDeep_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InitDeep_11));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InitDeep1_31 = (MR_Word) (MR_body((MR_Word) (MaybeInitDeep0_33), (MR_Integer) 1));
            MR_Word next_value_of_InitDeep0_7 = InitDeep1_31;

            // direct tailcall eliminated
            ;
            InitDeep0_7 = next_value_of_InitDeep0_7;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Error_12 = ((MR_String) ((MR_hl_field(MR_mktag(2), MaybeInitDeep0_33, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInitDeep_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_12));
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
read_profile__read_nodes_2_6_p_0(
  MR_Word tscc_proc_1_input_1_InputStream_7,
  MR_Integer tscc_proc_1_input_2_Depth_8,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12,
  MR_Word * tscc_output_ptr_1_MaybeInitDeep_10)
{
  MR_Word tscc_proc_2_input_1_InputStream_7;
  MR_Integer tscc_proc_2_input_2_Depth_8;
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_InitDeep_0_38;
  MR_Word tscc_output_1_MaybeInitDeep_10;

  // The code for TSCC PROC 1: pred read_profile.read_nodes_2/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred read_profile.read_nodes_2/6-0
  ;
  // proc 2 in TSCC: pred read_profile.read_nodes_3/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word InputStream_7 = tscc_proc_1_input_1_InputStream_7;
    MR_Integer Depth_8 = tscc_proc_1_input_2_Depth_8;
    MR_Word STATE_VARIABLE_InitDeep_0_12 = tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;
    MR_Word MaybeInitDeep_10;
    MR_bool succeeded = (Depth_8 < (MR_Integer) 1);

    if (succeeded)
      MaybeInitDeep_10 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (STATE_VARIABLE_InitDeep_0_12)));
    else
    {
      MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) Depth_8 - (MR_Unsigned) 1);
      MR_Word next_value_of_tscc_proc_2_input_1_InputStream_7 = InputStream_7;
      MR_Integer next_value_of_tscc_proc_2_input_2_Depth_8 = Var_16;
      MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_InitDeep_0_38 = STATE_VARIABLE_InitDeep_0_12;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_InputStream_7 = next_value_of_tscc_proc_2_input_1_InputStream_7;
      tscc_proc_2_input_2_Depth_8 = next_value_of_tscc_proc_2_input_2_Depth_8;
      tscc_proc_2_input_3_STATE_VARIABLE_InitDeep_0_38 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_InitDeep_0_38;
      goto top_of_proc_2;
    }
    tscc_output_1_MaybeInitDeep_10 = MaybeInitDeep_10;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word InputStream_7 = tscc_proc_2_input_1_InputStream_7;
    MR_Integer Depth_8 = tscc_proc_2_input_2_Depth_8;
    MR_Word STATE_VARIABLE_InitDeep_0_38 = tscc_proc_2_input_3_STATE_VARIABLE_InitDeep_0_38;
    MR_Word MaybeInitDeep_10;
    MR_bool succeeded;
    MR_Word ProfileStats_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 0))));
    MR_Word MaybeByte_13;

    mercury__io__read_byte_4_p_0(InputStream_7, &MaybeByte_13);
    switch (MR_tag((MR_Word) MaybeByte_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeInitDeep_10 = (MR_Word) ((MR_Word) (STATE_VARIABLE_InitDeep_0_38));
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeByte_13, (MR_Integer) 0))));
          MR_Word NextItem_15;

          succeeded = read_profile__is_next_item_token_2_p_0(Byte_14, &NextItem_15);
          if (succeeded)
            switch (NextItem_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case ((int) MR_deep_item_call_site_dynamic):
                {
                  MR_Word MaybeCSD_16;

                  read_profile__read_call_site_dynamic_4_p_0(InputStream_7, &MaybeCSD_16);
                  if (((MR_tag((MR_Word) MaybeCSD_16)) == (MR_Integer) 1))
                  {
                    MR_String Error_21 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeCSD_16, (MR_Integer) 0))));

                    {
                      MaybeInitDeep_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), MaybeInitDeep_10, 0) = ((MR_Box) (Error_21));
                    }
                  }
                  else
                  {
                    MR_Word CallSiteDynamic_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCSD_16, (MR_Integer) 0))));
                    MR_Integer CSDI_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeCSD_16, (MR_Integer) 1))));
                    MR_ArrayPtr CSDs0_19 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 2))));
                    MR_ArrayPtr CSDs_20;
                    MR_Word STATE_VARIABLE_InitDeep_53_53;
                    MR_ArrayPtr conv0_CSDs_20;
                    MR_Word Var_89;
                    MR_Word Var_90;
                    MR_ArrayPtr Var_92;
                    MR_ArrayPtr Var_93;
                    MR_ArrayPtr Var_94;
                    MR_Word next_value_of_tscc_proc_1_input_1_InputStream_7;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Depth_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;

                    read_profile__deep_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_ArrayPtr) (CSDs0_19), CSDI_18, ((MR_Box) (CallSiteDynamic_17)), &conv0_CSDs_20);
                    CSDs_20 = (MR_ArrayPtr) (conv0_CSDs_20);
                    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 0))));
                    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 1))));
                    Var_92 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 3))));
                    Var_93 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 4))));
                    Var_94 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 5))));
                    {
                      STATE_VARIABLE_InitDeep_53_53 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_53, 0) = ((MR_Box) (Var_89));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_53, 1) = ((MR_Box) (Var_90));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_53, 2) = ((MR_Box) (CSDs_20));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_53, 3) = ((MR_Box) (Var_92));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_53, 4) = ((MR_Box) (Var_93));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_53, 5) = ((MR_Box) (Var_94));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_InputStream_7 = InputStream_7;
                    next_value_of_tscc_proc_1_input_2_Depth_8 = Depth_8;
                    next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = STATE_VARIABLE_InitDeep_53_53;
                    tscc_proc_1_input_1_InputStream_7 = next_value_of_tscc_proc_1_input_1_InputStream_7;
                    tscc_proc_1_input_2_Depth_8 = next_value_of_tscc_proc_1_input_2_Depth_8;
                    tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;
                    goto top_of_proc_1;
                  }
                }
                break;
              case ((int) MR_deep_item_call_site_static):
                {
                  MR_Word MaybeCSS_27;

                  read_profile__read_call_site_static_4_p_0(InputStream_7, &MaybeCSS_27);
                  if (((MR_tag((MR_Word) MaybeCSS_27)) == (MR_Integer) 1))
                  {
                    MR_String Error_66 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeCSS_27, (MR_Integer) 0))));

                    {
                      MaybeInitDeep_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), MaybeInitDeep_10, 0) = ((MR_Box) (Error_66));
                    }
                  }
                  else
                  {
                    MR_Word CallSiteStatic_28;
                    MR_Integer CSSI_29;
                    MR_ArrayPtr CSSs0_30;
                    MR_ArrayPtr CSSs_31;
                    MR_Tuple Var_46 = ((MR_Tuple) ((MR_hl_field(MR_mktag(0), MaybeCSS_27, (MR_Integer) 0))));
                    MR_Word STATE_VARIABLE_InitDeep_53_65;
                    MR_ArrayPtr conv1_CSSs_31;
                    MR_Word Var_111;
                    MR_Word Var_112;
                    MR_ArrayPtr Var_113;
                    MR_ArrayPtr Var_114;
                    MR_ArrayPtr Var_116;
                    MR_Word next_value_of_tscc_proc_1_input_1_InputStream_7;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Depth_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;

                    CallSiteStatic_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 0))));
                    CSSI_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 1))));
                    CSSs0_30 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 4))));
                    read_profile__deep_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_0), (MR_ArrayPtr) (CSSs0_30), CSSI_29, ((MR_Box) (CallSiteStatic_28)), &conv1_CSSs_31);
                    CSSs_31 = (MR_ArrayPtr) (conv1_CSSs_31);
                    Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 0))));
                    Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 1))));
                    Var_113 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 2))));
                    Var_114 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 3))));
                    Var_116 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 5))));
                    {
                      STATE_VARIABLE_InitDeep_53_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_65, 0) = ((MR_Box) (Var_111));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_65, 1) = ((MR_Box) (Var_112));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_65, 2) = ((MR_Box) (Var_113));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_65, 3) = ((MR_Box) (Var_114));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_65, 4) = ((MR_Box) (CSSs_31));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_65, 5) = ((MR_Box) (Var_116));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_InputStream_7 = InputStream_7;
                    next_value_of_tscc_proc_1_input_2_Depth_8 = Depth_8;
                    next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = STATE_VARIABLE_InitDeep_53_65;
                    tscc_proc_1_input_1_InputStream_7 = next_value_of_tscc_proc_1_input_1_InputStream_7;
                    tscc_proc_1_input_2_Depth_8 = next_value_of_tscc_proc_1_input_2_Depth_8;
                    tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;
                    goto top_of_proc_1;
                  }
                }
                break;
              case ((int) MR_deep_item_end):
                MaybeInitDeep_10 = (MR_Word) ((MR_Word) (STATE_VARIABLE_InitDeep_0_38));
                break;
              case ((int) MR_deep_item_proc_dynamic):
                {
                  MR_Word MaybePD_22;

                  read_profile__read_proc_dynamic_5_p_0(InputStream_7, ProfileStats_12, &MaybePD_22);
                  if (((MR_tag((MR_Word) MaybePD_22)) == (MR_Integer) 1))
                  {
                    MR_String Error_60 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybePD_22, (MR_Integer) 0))));

                    {
                      MaybeInitDeep_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), MaybeInitDeep_10, 0) = ((MR_Box) (Error_60));
                    }
                  }
                  else
                  {
                    MR_Word ProcDynamic_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePD_22, (MR_Integer) 0))));
                    MR_Integer PDI_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybePD_22, (MR_Integer) 1))));
                    MR_ArrayPtr PDs0_25 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 3))));
                    MR_ArrayPtr PDs_26;
                    MR_Word STATE_VARIABLE_InitDeep_53_59;
                    MR_ArrayPtr conv2_PDs_26;
                    MR_Word Var_100;
                    MR_Word Var_101;
                    MR_ArrayPtr Var_102;
                    MR_ArrayPtr Var_104;
                    MR_ArrayPtr Var_105;
                    MR_Word next_value_of_tscc_proc_1_input_1_InputStream_7;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Depth_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;

                    read_profile__deep_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_ArrayPtr) (PDs0_25), PDI_24, ((MR_Box) (ProcDynamic_23)), &conv2_PDs_26);
                    PDs_26 = (MR_ArrayPtr) (conv2_PDs_26);
                    Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 0))));
                    Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 1))));
                    Var_102 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 2))));
                    Var_104 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 4))));
                    Var_105 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 5))));
                    {
                      STATE_VARIABLE_InitDeep_53_59 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_59, 0) = ((MR_Box) (Var_100));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_59, 1) = ((MR_Box) (Var_101));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_59, 2) = ((MR_Box) (Var_102));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_59, 3) = ((MR_Box) (PDs_26));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_59, 4) = ((MR_Box) (Var_104));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_59, 5) = ((MR_Box) (Var_105));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_InputStream_7 = InputStream_7;
                    next_value_of_tscc_proc_1_input_2_Depth_8 = Depth_8;
                    next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = STATE_VARIABLE_InitDeep_53_59;
                    tscc_proc_1_input_1_InputStream_7 = next_value_of_tscc_proc_1_input_1_InputStream_7;
                    tscc_proc_1_input_2_Depth_8 = next_value_of_tscc_proc_1_input_2_Depth_8;
                    tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;
                    goto top_of_proc_1;
                  }
                }
                break;
              case ((int) MR_deep_item_proc_static):
                {
                  MR_Word MaybePS_32;

                  read_profile__read_proc_static_5_p_0(InputStream_7, ProfileStats_12, &MaybePS_32);
                  if (((MR_tag((MR_Word) MaybePS_32)) == (MR_Integer) 1))
                  {
                    MR_String Error_72 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybePS_32, (MR_Integer) 0))));

                    {
                      MaybeInitDeep_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), MaybeInitDeep_10, 0) = ((MR_Box) (Error_72));
                    }
                  }
                  else
                  {
                    MR_Word ProcStatic_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePS_32, (MR_Integer) 0))));
                    MR_Integer PSI_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybePS_32, (MR_Integer) 1))));
                    MR_ArrayPtr PSs0_35 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 5))));
                    MR_ArrayPtr PSs_36;
                    MR_Word STATE_VARIABLE_InitDeep_53_71;
                    MR_ArrayPtr conv3_PSs_36;
                    MR_Word Var_122;
                    MR_Word Var_123;
                    MR_ArrayPtr Var_124;
                    MR_ArrayPtr Var_125;
                    MR_ArrayPtr Var_126;
                    MR_Word next_value_of_tscc_proc_1_input_1_InputStream_7;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Depth_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;

                    read_profile__deep_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), (MR_ArrayPtr) (PSs0_35), PSI_34, ((MR_Box) (ProcStatic_33)), &conv3_PSs_36);
                    PSs_36 = (MR_ArrayPtr) (conv3_PSs_36);
                    Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 0))));
                    Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 1))));
                    Var_124 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 2))));
                    Var_125 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 3))));
                    Var_126 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 4))));
                    {
                      STATE_VARIABLE_InitDeep_53_71 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_71, 0) = ((MR_Box) (Var_122));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_71, 1) = ((MR_Box) (Var_123));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_71, 2) = ((MR_Box) (Var_124));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_71, 3) = ((MR_Box) (Var_125));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_71, 4) = ((MR_Box) (Var_126));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_71, 5) = ((MR_Box) (PSs_36));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_InputStream_7 = InputStream_7;
                    next_value_of_tscc_proc_1_input_2_Depth_8 = Depth_8;
                    next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = STATE_VARIABLE_InitDeep_53_71;
                    tscc_proc_1_input_1_InputStream_7 = next_value_of_tscc_proc_1_input_1_InputStream_7;
                    tscc_proc_1_input_2_Depth_8 = next_value_of_tscc_proc_1_input_2_Depth_8;
                    tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;
                    goto top_of_proc_1;
                  }
                }
                break;
            }
          else
          {
            MR_String Msg_37;
            MR_String Var_132;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Byte_14, &Var_132);
            Msg_37 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected token ", Var_132);
            {
              MaybeInitDeep_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), MaybeInitDeep_10, 0) = ((MR_Box) (Msg_37));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeByte_13, (MR_Integer) 0))));
          MR_String Msg_78;

          mercury__io__error_message_2_p_0(Error_77, &Msg_78);
          {
            MaybeInitDeep_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), MaybeInitDeep_10, 0) = ((MR_Box) (Msg_78));
          }
        }
        break;
    }
    tscc_output_1_MaybeInitDeep_10 = MaybeInitDeep_10;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_MaybeInitDeep_10 = tscc_output_1_MaybeInitDeep_10;
  return;
}

static void MR_CALL 
read_profile__read_nodes_3_6_p_0(
  MR_Word tscc_proc_2_input_1_InputStream_7,
  MR_Integer tscc_proc_2_input_2_Depth_8,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_InitDeep_0_38,
  MR_Word * tscc_output_ptr_1_MaybeInitDeep_10)
{
  MR_Word tscc_proc_1_input_1_InputStream_7;
  MR_Integer tscc_proc_1_input_2_Depth_8;
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;
  MR_Word tscc_output_1_MaybeInitDeep_10;

  // The code for TSCC PROC 2: pred read_profile.read_nodes_3/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred read_profile.read_nodes_2/6-0
  ;
  // proc 2 in TSCC: pred read_profile.read_nodes_3/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word InputStream_7 = tscc_proc_1_input_1_InputStream_7;
    MR_Integer Depth_8 = tscc_proc_1_input_2_Depth_8;
    MR_Word STATE_VARIABLE_InitDeep_0_12 = tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;
    MR_Word MaybeInitDeep_10;
    MR_bool succeeded = (Depth_8 < (MR_Integer) 1);

    if (succeeded)
      MaybeInitDeep_10 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (STATE_VARIABLE_InitDeep_0_12)));
    else
    {
      MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) Depth_8 - (MR_Unsigned) 1);
      MR_Word next_value_of_tscc_proc_2_input_1_InputStream_7 = InputStream_7;
      MR_Integer next_value_of_tscc_proc_2_input_2_Depth_8 = Var_16;
      MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_InitDeep_0_38 = STATE_VARIABLE_InitDeep_0_12;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_InputStream_7 = next_value_of_tscc_proc_2_input_1_InputStream_7;
      tscc_proc_2_input_2_Depth_8 = next_value_of_tscc_proc_2_input_2_Depth_8;
      tscc_proc_2_input_3_STATE_VARIABLE_InitDeep_0_38 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_InitDeep_0_38;
      goto top_of_proc_2;
    }
    tscc_output_1_MaybeInitDeep_10 = MaybeInitDeep_10;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word InputStream_7 = tscc_proc_2_input_1_InputStream_7;
    MR_Integer Depth_8 = tscc_proc_2_input_2_Depth_8;
    MR_Word STATE_VARIABLE_InitDeep_0_38 = tscc_proc_2_input_3_STATE_VARIABLE_InitDeep_0_38;
    MR_Word MaybeInitDeep_10;
    MR_bool succeeded;
    MR_Word ProfileStats_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 0))));
    MR_Word MaybeByte_13;

    mercury__io__read_byte_4_p_0(InputStream_7, &MaybeByte_13);
    switch (MR_tag((MR_Word) MaybeByte_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeInitDeep_10 = (MR_Word) ((MR_Word) (STATE_VARIABLE_InitDeep_0_38));
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeByte_13, (MR_Integer) 0))));
          MR_Word NextItem_15;

          succeeded = read_profile__is_next_item_token_2_p_0(Byte_14, &NextItem_15);
          if (succeeded)
            switch (NextItem_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case ((int) MR_deep_item_call_site_dynamic):
                {
                  MR_Word MaybeCSD_16;

                  read_profile__read_call_site_dynamic_4_p_0(InputStream_7, &MaybeCSD_16);
                  if (((MR_tag((MR_Word) MaybeCSD_16)) == (MR_Integer) 1))
                  {
                    MR_String Error_21 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeCSD_16, (MR_Integer) 0))));

                    {
                      MaybeInitDeep_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), MaybeInitDeep_10, 0) = ((MR_Box) (Error_21));
                    }
                  }
                  else
                  {
                    MR_Word CallSiteDynamic_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCSD_16, (MR_Integer) 0))));
                    MR_Integer CSDI_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeCSD_16, (MR_Integer) 1))));
                    MR_ArrayPtr CSDs0_19 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 2))));
                    MR_ArrayPtr CSDs_20;
                    MR_Word STATE_VARIABLE_InitDeep_53_53;
                    MR_ArrayPtr conv0_CSDs_20;
                    MR_Word Var_89;
                    MR_Word Var_90;
                    MR_ArrayPtr Var_92;
                    MR_ArrayPtr Var_93;
                    MR_ArrayPtr Var_94;
                    MR_Word next_value_of_tscc_proc_1_input_1_InputStream_7;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Depth_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;

                    read_profile__deep_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_ArrayPtr) (CSDs0_19), CSDI_18, ((MR_Box) (CallSiteDynamic_17)), &conv0_CSDs_20);
                    CSDs_20 = (MR_ArrayPtr) (conv0_CSDs_20);
                    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 0))));
                    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 1))));
                    Var_92 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 3))));
                    Var_93 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 4))));
                    Var_94 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 5))));
                    {
                      STATE_VARIABLE_InitDeep_53_53 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_53, 0) = ((MR_Box) (Var_89));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_53, 1) = ((MR_Box) (Var_90));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_53, 2) = ((MR_Box) (CSDs_20));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_53, 3) = ((MR_Box) (Var_92));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_53, 4) = ((MR_Box) (Var_93));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_53, 5) = ((MR_Box) (Var_94));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_InputStream_7 = InputStream_7;
                    next_value_of_tscc_proc_1_input_2_Depth_8 = Depth_8;
                    next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = STATE_VARIABLE_InitDeep_53_53;
                    tscc_proc_1_input_1_InputStream_7 = next_value_of_tscc_proc_1_input_1_InputStream_7;
                    tscc_proc_1_input_2_Depth_8 = next_value_of_tscc_proc_1_input_2_Depth_8;
                    tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;
                    goto top_of_proc_1;
                  }
                }
                break;
              case ((int) MR_deep_item_call_site_static):
                {
                  MR_Word MaybeCSS_27;

                  read_profile__read_call_site_static_4_p_0(InputStream_7, &MaybeCSS_27);
                  if (((MR_tag((MR_Word) MaybeCSS_27)) == (MR_Integer) 1))
                  {
                    MR_String Error_66 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeCSS_27, (MR_Integer) 0))));

                    {
                      MaybeInitDeep_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), MaybeInitDeep_10, 0) = ((MR_Box) (Error_66));
                    }
                  }
                  else
                  {
                    MR_Word CallSiteStatic_28;
                    MR_Integer CSSI_29;
                    MR_ArrayPtr CSSs0_30;
                    MR_ArrayPtr CSSs_31;
                    MR_Tuple Var_46 = ((MR_Tuple) ((MR_hl_field(MR_mktag(0), MaybeCSS_27, (MR_Integer) 0))));
                    MR_Word STATE_VARIABLE_InitDeep_53_65;
                    MR_ArrayPtr conv1_CSSs_31;
                    MR_Word Var_111;
                    MR_Word Var_112;
                    MR_ArrayPtr Var_113;
                    MR_ArrayPtr Var_114;
                    MR_ArrayPtr Var_116;
                    MR_Word next_value_of_tscc_proc_1_input_1_InputStream_7;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Depth_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;

                    CallSiteStatic_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 0))));
                    CSSI_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 1))));
                    CSSs0_30 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 4))));
                    read_profile__deep_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_0), (MR_ArrayPtr) (CSSs0_30), CSSI_29, ((MR_Box) (CallSiteStatic_28)), &conv1_CSSs_31);
                    CSSs_31 = (MR_ArrayPtr) (conv1_CSSs_31);
                    Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 0))));
                    Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 1))));
                    Var_113 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 2))));
                    Var_114 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 3))));
                    Var_116 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 5))));
                    {
                      STATE_VARIABLE_InitDeep_53_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_65, 0) = ((MR_Box) (Var_111));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_65, 1) = ((MR_Box) (Var_112));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_65, 2) = ((MR_Box) (Var_113));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_65, 3) = ((MR_Box) (Var_114));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_65, 4) = ((MR_Box) (CSSs_31));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_65, 5) = ((MR_Box) (Var_116));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_InputStream_7 = InputStream_7;
                    next_value_of_tscc_proc_1_input_2_Depth_8 = Depth_8;
                    next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = STATE_VARIABLE_InitDeep_53_65;
                    tscc_proc_1_input_1_InputStream_7 = next_value_of_tscc_proc_1_input_1_InputStream_7;
                    tscc_proc_1_input_2_Depth_8 = next_value_of_tscc_proc_1_input_2_Depth_8;
                    tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;
                    goto top_of_proc_1;
                  }
                }
                break;
              case ((int) MR_deep_item_end):
                MaybeInitDeep_10 = (MR_Word) ((MR_Word) (STATE_VARIABLE_InitDeep_0_38));
                break;
              case ((int) MR_deep_item_proc_dynamic):
                {
                  MR_Word MaybePD_22;

                  read_profile__read_proc_dynamic_5_p_0(InputStream_7, ProfileStats_12, &MaybePD_22);
                  if (((MR_tag((MR_Word) MaybePD_22)) == (MR_Integer) 1))
                  {
                    MR_String Error_60 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybePD_22, (MR_Integer) 0))));

                    {
                      MaybeInitDeep_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), MaybeInitDeep_10, 0) = ((MR_Box) (Error_60));
                    }
                  }
                  else
                  {
                    MR_Word ProcDynamic_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePD_22, (MR_Integer) 0))));
                    MR_Integer PDI_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybePD_22, (MR_Integer) 1))));
                    MR_ArrayPtr PDs0_25 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 3))));
                    MR_ArrayPtr PDs_26;
                    MR_Word STATE_VARIABLE_InitDeep_53_59;
                    MR_ArrayPtr conv2_PDs_26;
                    MR_Word Var_100;
                    MR_Word Var_101;
                    MR_ArrayPtr Var_102;
                    MR_ArrayPtr Var_104;
                    MR_ArrayPtr Var_105;
                    MR_Word next_value_of_tscc_proc_1_input_1_InputStream_7;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Depth_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;

                    read_profile__deep_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_ArrayPtr) (PDs0_25), PDI_24, ((MR_Box) (ProcDynamic_23)), &conv2_PDs_26);
                    PDs_26 = (MR_ArrayPtr) (conv2_PDs_26);
                    Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 0))));
                    Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 1))));
                    Var_102 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 2))));
                    Var_104 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 4))));
                    Var_105 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 5))));
                    {
                      STATE_VARIABLE_InitDeep_53_59 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_59, 0) = ((MR_Box) (Var_100));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_59, 1) = ((MR_Box) (Var_101));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_59, 2) = ((MR_Box) (Var_102));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_59, 3) = ((MR_Box) (PDs_26));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_59, 4) = ((MR_Box) (Var_104));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_59, 5) = ((MR_Box) (Var_105));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_InputStream_7 = InputStream_7;
                    next_value_of_tscc_proc_1_input_2_Depth_8 = Depth_8;
                    next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = STATE_VARIABLE_InitDeep_53_59;
                    tscc_proc_1_input_1_InputStream_7 = next_value_of_tscc_proc_1_input_1_InputStream_7;
                    tscc_proc_1_input_2_Depth_8 = next_value_of_tscc_proc_1_input_2_Depth_8;
                    tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;
                    goto top_of_proc_1;
                  }
                }
                break;
              case ((int) MR_deep_item_proc_static):
                {
                  MR_Word MaybePS_32;

                  read_profile__read_proc_static_5_p_0(InputStream_7, ProfileStats_12, &MaybePS_32);
                  if (((MR_tag((MR_Word) MaybePS_32)) == (MR_Integer) 1))
                  {
                    MR_String Error_72 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybePS_32, (MR_Integer) 0))));

                    {
                      MaybeInitDeep_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), MaybeInitDeep_10, 0) = ((MR_Box) (Error_72));
                    }
                  }
                  else
                  {
                    MR_Word ProcStatic_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePS_32, (MR_Integer) 0))));
                    MR_Integer PSI_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybePS_32, (MR_Integer) 1))));
                    MR_ArrayPtr PSs0_35 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 5))));
                    MR_ArrayPtr PSs_36;
                    MR_Word STATE_VARIABLE_InitDeep_53_71;
                    MR_ArrayPtr conv3_PSs_36;
                    MR_Word Var_122;
                    MR_Word Var_123;
                    MR_ArrayPtr Var_124;
                    MR_ArrayPtr Var_125;
                    MR_ArrayPtr Var_126;
                    MR_Word next_value_of_tscc_proc_1_input_1_InputStream_7;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Depth_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;

                    read_profile__deep_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), (MR_ArrayPtr) (PSs0_35), PSI_34, ((MR_Box) (ProcStatic_33)), &conv3_PSs_36);
                    PSs_36 = (MR_ArrayPtr) (conv3_PSs_36);
                    Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 0))));
                    Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 1))));
                    Var_124 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 2))));
                    Var_125 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 3))));
                    Var_126 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_0_38, (MR_Integer) 4))));
                    {
                      STATE_VARIABLE_InitDeep_53_71 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_71, 0) = ((MR_Box) (Var_122));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_71, 1) = ((MR_Box) (Var_123));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_71, 2) = ((MR_Box) (Var_124));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_71, 3) = ((MR_Box) (Var_125));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_71, 4) = ((MR_Box) (Var_126));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_InitDeep_53_71, 5) = ((MR_Box) (PSs_36));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_InputStream_7 = InputStream_7;
                    next_value_of_tscc_proc_1_input_2_Depth_8 = Depth_8;
                    next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = STATE_VARIABLE_InitDeep_53_71;
                    tscc_proc_1_input_1_InputStream_7 = next_value_of_tscc_proc_1_input_1_InputStream_7;
                    tscc_proc_1_input_2_Depth_8 = next_value_of_tscc_proc_1_input_2_Depth_8;
                    tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_InitDeep_0_12;
                    goto top_of_proc_1;
                  }
                }
                break;
            }
          else
          {
            MR_String Msg_37;
            MR_String Var_132;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&read_profile_scalar_common_6[2]), Byte_14, &Var_132);
            Msg_37 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected token ", Var_132);
            {
              MaybeInitDeep_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), MaybeInitDeep_10, 0) = ((MR_Box) (Msg_37));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeByte_13, (MR_Integer) 0))));
          MR_String Msg_78;

          mercury__io__error_message_2_p_0(Error_77, &Msg_78);
          {
            MaybeInitDeep_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), MaybeInitDeep_10, 0) = ((MR_Box) (Msg_78));
          }
        }
        break;
    }
    tscc_output_1_MaybeInitDeep_10 = MaybeInitDeep_10;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_MaybeInitDeep_10 = tscc_output_1_MaybeInitDeep_10;
  return;
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
  MR_ArrayPtr A0_5,
  MR_Integer Ind_6,
  MR_Box Item_7,
  MR_ArrayPtr * A_8)
{
  MR_bool succeeded;
  MR_Integer Max_9;

  mercury__array__max_2_p_0(TypeInfo_for_T_12, A0_5, &Max_9);
  succeeded = (Ind_6 > Max_9);
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
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    conv0_Var_11 = array_util__u_1_f_0(TypeInfo_14_14, ((MR_Box) (A0_5)));
    Var_11 = ((MR_ArrayPtr) (conv0_Var_11));
    mercury__array__set_4_p_0(TypeInfo_for_T_12, Ind_6, Item_7, Var_11, A_8);
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
    MR_String Error_44 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeCSDI_10, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeCSD_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_44));
    }
  }
  else
  {
    MR_Integer CSDI_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeCSDI_10, (MR_Integer) 0))));
    MR_Word MaybePDI_12;

    read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_50_93_95_48_5_p_0(InputStream_5, &MaybePDI_12);
    if (((MR_tag((MR_Word) MaybePDI_12)) == (MR_Integer) 1))
    {
      MR_String Error_43 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybePDI_12, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCSD_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_43));
      }
    }
    else
    {
      MR_Integer PDI_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybePDI_12, (MR_Integer) 0))));
      MR_Word MaybeProfile_14;

      read_profile__read_profile_4_p_0(InputStream_5, &MaybeProfile_14);
      if (((MR_tag((MR_Word) MaybeProfile_14)) == (MR_Integer) 1))
      {
        MR_String Error_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeProfile_14, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeCSD_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_19));
        }
      }
      else
      {
        MR_Word Profile_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeProfile_14, (MR_Integer) 0))));
        MR_Word PDPtr_16 = (MR_Word) (PDI_13);
        MR_Word CallSiteDynamic_18;

        {
          CallSiteDynamic_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CallSiteDynamic_18, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
          MR_hl_field(MR_mktag(0), CallSiteDynamic_18, 1) = ((MR_Box) (PDPtr_16));
          MR_hl_field(MR_mktag(0), CallSiteDynamic_18, 2) = ((MR_Box) (Profile_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCSD_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CallSiteDynamic_18));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CSDI_11));
        }
      }
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
    MR_Integer Mask_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeMask_8, (MR_Integer) 0))));
    MR_Integer Exits_11;
    MR_Integer Fails_12;
    MR_Integer Redos_13;
    MR_Integer Excps_14;
    MR_Integer Quanta_15;
    MR_Integer CallSeqs_16;
    MR_Integer Allocs_17;
    MR_Integer Words_18;
    MR_Word LastMaybeError_19;
    MR_Word STATE_VARIABLE_MaybeError_26_26;
    MR_Word STATE_VARIABLE_MaybeError_29_29;
    MR_Word STATE_VARIABLE_MaybeError_32_32;
    MR_Word STATE_VARIABLE_MaybeError_35_35;
    MR_Word STATE_VARIABLE_MaybeError_38_38;
    MR_Word STATE_VARIABLE_MaybeError_41_41;
    MR_Word STATE_VARIABLE_MaybeError_44_44;

    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 2, &Exits_11, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_MaybeError_26_26);
    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 4, &Fails_12, STATE_VARIABLE_MaybeError_26_26, &STATE_VARIABLE_MaybeError_29_29);
    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 64, &Redos_13, STATE_VARIABLE_MaybeError_29_29, &STATE_VARIABLE_MaybeError_32_32);
    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 128, &Excps_14, STATE_VARIABLE_MaybeError_32_32, &STATE_VARIABLE_MaybeError_35_35);
    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 256, &Quanta_15, STATE_VARIABLE_MaybeError_35_35, &STATE_VARIABLE_MaybeError_38_38);
    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 8, &CallSeqs_16, STATE_VARIABLE_MaybeError_38_38, &STATE_VARIABLE_MaybeError_41_41);
    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 16, &Allocs_17, STATE_VARIABLE_MaybeError_41_41, &STATE_VARIABLE_MaybeError_44_44);
    read_profile__maybe_read_num_handle_error_8_p_0(InputStream_5, Mask_9, (MR_Integer) 32, &Words_18, STATE_VARIABLE_MaybeError_44_44, &LastMaybeError_19);
    if ((LastMaybeError_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_49;

      Var_49 = measurements__compress_profile_8_f_0(Exits_11, Fails_12, Redos_13, Excps_14, Quanta_15, CallSeqs_16, Allocs_17, Words_18);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeProfile_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_49));
      }
    }
    else
    {
      MR_String Error_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), LastMaybeError_19, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeProfile_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_20));
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
      MR_String Error_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeNum_15, (MR_Integer) 0))));

      *Num_12 = (MR_Integer) 0;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_MaybeError_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_16));
      }
    }
    else
    {
      *Num_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeNum_15, (MR_Integer) 0))));
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

  read_profile__IntroducedFrom__pred__read_proc_dynamic__908__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_LambdaHeadVar__3_55);
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

  read_profile__IntroducedFrom__pred__read_proc_dynamic__910__1_5_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv6_HeadVar__3_93);
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

  read_profile__read_call_site_slot_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv5_MaybeSlot_6);
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

  read_profile__maybe_read_pd_coverage_points_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv4_MaybeCoveragePoints_8);
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

  read_profile__IntroducedFrom__pred__read_proc_dynamic__898__1_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv3_LambdaHeadVar__4_45);
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

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv2_MaybeNum_6);
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

  read_profile__read_ptr_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv1_MaybePtr_8);
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

  read_profile__read_ptr_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv0_MaybePtr_8);
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
    MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&read_profile_scalar_common_3[1]));
    MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (InputStream_6));
    MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&read_profile_scalar_common_3[1]));
    MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_2));
    MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (InputStream_6));
    MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
    MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_3));
    MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (InputStream_6));
  }
  io_combinator__maybe_error_sequence_3_7_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&read_profile_scalar_common_5[0]), Var_35, Var_36, Var_37, (MR_Word) (&read_profile_scalar_common_4[8]), &MaybePDHeader_16);
  if (((MR_tag((MR_Word) MaybePDHeader_16)) == (MR_Integer) 1))
  {
    MR_String Error_78 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybePDHeader_16, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybePD_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_78));
    }
  }
  else
  {
    MR_Integer PDI_17;
    MR_Integer PSI_18;
    MR_Integer N_19;
    MR_Word MaybeCPsAndSlots_23;
    MR_Tuple Var_47 = ((MR_Tuple) ((MR_hl_field(MR_mktag(0), MaybePDHeader_16, (MR_Integer) 0))));
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_52;

    PDI_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0))));
    PSI_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1))));
    N_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 2))));
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&read_profile_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (InputStream_6));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (ProfileStats_7));
    }
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&read_profile_scalar_common_7[7]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (InputStream_6));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&read_profile_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (read_profile__read_proc_dynamic_5_p_0_7));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (N_19));
      MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (Var_52));
    }
    io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) (&read_profile_scalar_common_1[3]), (MR_Word) (&read_profile_scalar_common_1[4]), (MR_Word) (&read_profile_scalar_common_2[1]), Var_48, Var_49, (MR_Word) (&read_profile_scalar_common_4[9]), &MaybeCPsAndSlots_23);
    if (((MR_tag((MR_Word) MaybeCPsAndSlots_23)) == (MR_Integer) 1))
    {
      MR_String Error_28 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeCPsAndSlots_23, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePD_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_28));
      }
    }
    else
    {
      MR_Word MaybeCPs_24;
      MR_Word Refs_25;
      MR_Word PSPtr_26;
      MR_Word ProcDynamic_27;
      MR_Tuple Var_57 = ((MR_Tuple) ((MR_hl_field(MR_mktag(0), MaybeCPsAndSlots_23, (MR_Integer) 0))));
      MR_ArrayPtr Var_58;
      MR_ArrayPtr conv8_Var_58;

      MaybeCPs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0))));
      Refs_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 1))));
      PSPtr_26 = read_profile__make_psptr_1_f_0(PSI_18);
      conv8_Var_58 = mercury__array__array_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), Refs_25);
      Var_58 = (MR_ArrayPtr) (conv8_Var_58);
      {
        ProcDynamic_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ProcDynamic_27, 0) = ((MR_Box) (PSPtr_26));
        MR_hl_field(MR_mktag(0), ProcDynamic_27, 1) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), ProcDynamic_27, 2) = ((MR_Box) (MaybeCPs_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *MaybePD_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ProcDynamic_27));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PDI_17));
      }
    }
  }
}

static MR_Word MR_CALL 
read_profile__make_psptr_1_f_0(
  MR_Integer PSI_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (PSI_3);

  return HeadVar__2_2;
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

  read_profile__IntroducedFrom__pred__read_proc_static__478__1_7_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)), ((MR_Integer) (wrapper_arg_4)), ((MR_Integer) (wrapper_arg_5)), ((MR_Integer) (wrapper_arg_6)), &conv5_LambdaHeadVar__7_60);
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

  read_profile__read_deep_byte_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv4_MaybeByte_6);
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

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv3_MaybeNum_6);
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

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv2_MaybeStr_6);
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

  read_profile__read_proc_id_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv1_MaybeProcId_6);
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

  read_profile__read_ptr_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv0_MaybePtr_8);
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
    MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&read_profile_scalar_common_3[1]));
    MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (read_profile__read_proc_static_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (InputStream_6));
    MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&read_profile_scalar_common_7[5]));
    MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (read_profile__read_proc_static_5_p_0_2));
    MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (InputStream_6));
  }
  {
    Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
    MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (read_profile__read_proc_static_5_p_0_3));
    MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (InputStream_6));
  }
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
    MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (read_profile__read_proc_static_5_p_0_4));
    MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (InputStream_6));
  }
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
    MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (read_profile__read_proc_static_5_p_0_5));
    MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (InputStream_6));
  }
  io_combinator__maybe_error_sequence_6_10_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&read_profile_scalar_common_3[0]), Var_45, Var_46, Var_47, Var_48, Var_49, Var_48, (MR_Word) (&read_profile_scalar_common_4[6]), &MaybeProcId_19);
  if (((MR_tag((MR_Word) MaybeProcId_19)) == (MR_Integer) 1))
  {
    MR_String Error_91 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeProcId_19, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybePS_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_91));
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
    MR_Word MaybeCSSIs_26;
    MR_Tuple Var_62 = ((MR_Tuple) ((MR_hl_field(MR_mktag(0), MaybeProcId_19, (MR_Integer) 0))));

    PSI_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 0))));
    Id_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 1))));
    FileName_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 2))));
    LineNumber_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 3))));
    Interface_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 4))));
    NCS_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 5))));
    read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_50_44_32_52_93_95_48_5_p_0(InputStream_6, NCS_25, &MaybeCSSIs_26);
    if (((MR_tag((MR_Word) MaybeCSSIs_26)) == (MR_Integer) 1))
    {
      MR_String Error_90 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeCSSIs_26, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePS_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_90));
      }
    }
    else
    {
      MR_Word CSSIs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCSSIs_26, (MR_Integer) 0))));
      MR_Word MaybeCoveragePoints_28;

      read_profile__maybe_read_ps_coverage_points_5_p_0(InputStream_6, ProfileStats_7, &MaybeCoveragePoints_28);
      if (((MR_tag((MR_Word) MaybeCoveragePoints_28)) == (MR_Integer) 1))
      {
        MR_String Error_38 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeCoveragePoints_28, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePS_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_38));
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
        MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCoveragePoints_28, (MR_Integer) 0))));
        MR_ArrayPtr Var_69;
        MR_ArrayPtr conv7_Var_69;

        CPInfos_29 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Var_67, (MR_Integer) 0))));
        MaybeCPs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_67, (MR_Integer) 1))));
        CSSPtrs_31 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) (&read_profile_scalar_common_4[7]), CSSIs_27);
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
          MR_hl_field(MR_mktag(0), ProcStatic_37, 0) = ((MR_Box) (Id_21));
          MR_hl_field(MR_mktag(0), ProcStatic_37, 1) = ((MR_Box) (DeclModule_32));
          MR_hl_field(MR_mktag(0), ProcStatic_37, 2) = ((MR_Box) (UnQualRefinedStr_33));
          MR_hl_field(MR_mktag(0), ProcStatic_37, 3) = ((MR_Box) (QualRefinedStr_34));
          MR_hl_field(MR_mktag(0), ProcStatic_37, 4) = ((MR_Box) (RawStr_35));
          MR_hl_field(MR_mktag(0), ProcStatic_37, 5) = ((MR_Box) (FileName_22));
          MR_hl_field(MR_mktag(0), ProcStatic_37, 6) = ((MR_Box) (LineNumber_23));
          MR_hl_field(MR_mktag(0), ProcStatic_37, 7) = (MR_Box) ((MR_Unsigned) (IsInInterface_36));
          MR_hl_field(MR_mktag(0), ProcStatic_37, 8) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), ProcStatic_37, 9) = ((MR_Box) (CPInfos_29));
          MR_hl_field(MR_mktag(0), ProcStatic_37, 10) = ((MR_Box) (MaybeCPs_30));
          MR_hl_field(MR_mktag(0), ProcStatic_37, 11) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *MaybePS_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ProcStatic_37));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PSI_20));
        }
      }
    }
  }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_50_44_32_52_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Integer N_6,
  MR_Word * MaybeItems_8)
{
  MR_Word MaybeRevItems_10;

  read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_53_95_95_91_50_44_32_52_93_95_48_6_p_0(Var_19, N_6, (MR_Word) ((MR_Unsigned) 0U), &MaybeRevItems_10);
  if (((MR_tag((MR_Word) MaybeRevItems_10)) == (MR_Integer) 1))
    *MaybeItems_8 = MaybeRevItems_10;
  else
  {
    MR_Word RevItems_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeRevItems_10, (MR_Integer) 0))));
    MR_Word Items_12;

    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevItems_11, &Items_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeItems_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Items_12));
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
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RevItems0_9));
      }
    else
    {
      MR_Word MaybeItem_12;

      read_profile__read_num_acc_5_p_0(Var_24, (MR_Integer) 0, &MaybeItem_12);
      if (((MR_tag((MR_Word) MaybeItem_12)) == (MR_Integer) 1))
        *MaybeItems_10 = (MR_Word) (MaybeItem_12);
      else
      {
        MR_Integer Item_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeItem_12, (MR_Integer) 0))));
        MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) N_7 - (MR_Unsigned) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_7;
        MR_Word next_value_of_RevItems0_9;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Item_13));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (RevItems0_9));
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
    MR_Word PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String DeclModule_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 1))));
    MR_String ProcName_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 3))));
    MR_Integer Arity_113 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 4))));
    MR_Integer Mode_114 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 5))));
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
              mercury__require__error_1_p_0((MR_String) "typespec: neither pred nor func");
              return;
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
              mercury__require__error_1_p_0((MR_String) "lambda: neither pred nor func");
              return;
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
    MR_String TypeName_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 0))));
    MR_String TypeModule_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 1))));
    MR_String RawPredName_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 3))));
    MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 4))));
    MR_Integer Mode_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 5))));
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
    LineNumberPrime_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Segments_4, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Segments_4, (MR_Integer) 1))));
    succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1))));
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
      Segment_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Segments_4, (MR_Integer) 0))));
      TailSegments_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Segments_4, (MR_Integer) 1))));
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
            Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Char) 95));
            MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (PredName1_11));
          }
          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Char) 95));
            MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
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
    MR_Char Char0_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Chars0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Chars1_6;
    MR_Char Var_10;
    MR_Word Var_11;
    MR_Char Var_12;

    succeeded = (Chars0_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars0_4, (MR_Integer) 0)));
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Chars0_4, (MR_Integer) 1))));
      succeeded = (Var_10 == (MR_Char) 95);
      if (succeeded)
      {
        succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0)));
          Chars1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 1))));
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
        Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_Word) (Char0_3));
        MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (StringList0_7));
      }
    }
    else
    {
      MR_Word StringList0_19;

      read_profile__split_lambda_name_2_p_0(Chars0_4, &StringList0_19);
      if ((StringList0_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_16;

        {
          Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_Word) (Char0_3));
          MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word String0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StringList0_19, (MR_Integer) 0))));
        MR_Word StringList1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StringList0_19, (MR_Integer) 1))));
        MR_Word Var_15;

        {
          Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_Word) (Char0_3));
          MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (String0_8));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (StringList1_9));
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
    Var_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars0_4, (MR_Integer) 0)));
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Chars0_4, (MR_Integer) 1))));
    succeeded = (Var_12 == (MR_Char) 95);
    if (succeeded)
    {
      succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0)));
        Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 1))));
        succeeded = (Var_14 == (MR_Char) 95);
        if (succeeded)
        {
          succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_16 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0)));
            SpecInfo0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
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
    mercury__list__take_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&read_profile_scalar_common_4[5]), SpecInfo0_7, &SpecInfo_8);
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
      Char_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars0_4, (MR_Integer) 0)));
      TailChars0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Chars0_4, (MR_Integer) 1))));
      succeeded = read_profile__fix_type_spec_suffix_3_p_0(TailChars0_10, &TailChars_11, SpecInfoStr_6);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

static MR_String MR_CALL 
read_profile__add_plus_one_for_function_1_f_0(
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
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word PredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String DeclModule_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String Name_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer Arity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer Mode_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
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
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) "-"));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) ((MR_String) "/"));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Name_28));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_String) "."));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (DeclModule_26));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_32));
    }
    HeadVar__2_2 = mercury__string__append_list_1_f_0(Var_31);
  }
  else
  {
    MR_String TypeName_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_String TypeModule_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_String PredName_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer Mode_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 5))));
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

    Var_19 = mercury__string__int_to_string_1_f_0(Arity_7);
    Var_23 = mercury__string__int_to_string_1_f_0(Mode_8);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) " mode "));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) ((MR_String) "/"));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (TypeName_3));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) ((MR_String) "."));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (TypeModule_4));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_13));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) ((MR_String) " for "));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (PredName_6));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_10));
    }
    HeadVar__2_2 = mercury__string__append_list_1_f_0(Var_9);
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv1_HeadVar__2_76;

  conv1_HeadVar__2_76 = read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__586__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
  MR_Word MaybeCoveragePoints0_11;
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProfileStats_7, (MR_Integer) 9))));

  CoverageDataType_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 3))) & (MR_Integer) 3);
  switch (CoverageDataType_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word MaybeNCP_12;

        read_profile__read_num_acc_5_p_0(InputStream_6, (MR_Integer) 0, &MaybeNCP_12);
        if (((MR_tag((MR_Word) MaybeNCP_12)) == (MR_Integer) 1))
          MaybeCoveragePoints0_11 = (MR_Word) (MaybeNCP_12);
        else
        {
          MR_Integer NCP_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MaybeNCP_12, (MR_Integer) 0))));

          switch (CoverageDataType_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                MR_Word MaybeCPInfos_19;

                read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_50_95_95_91_51_93_95_48_5_p_0(InputStream_6, NCP_13, &MaybeCPInfos_19);
                if (((MR_tag((MR_Word) MaybeCPInfos_19)) == (MR_Integer) 1))
                  MaybeCoveragePoints0_11 = (MR_Word) (MaybeCPInfos_19);
                else
                {
                  MR_Word Var_31;
                  MR_Word CPInfos_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCPInfos_19, (MR_Integer) 0))));

                  {
                    Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (CPInfos_43));
                    MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MaybeCoveragePoints0_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MaybeCoveragePoints0_11, 0) = ((MR_Box) (Var_31));
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeCPPairs_14;

                read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_51_95_95_91_51_93_95_48_5_p_0(InputStream_6, NCP_13, &MaybeCPPairs_14);
                if (((MR_tag((MR_Word) MaybeCPPairs_14)) == (MR_Integer) 1))
                  MaybeCoveragePoints0_11 = (MR_Word) (MaybeCPPairs_14);
                else
                {
                  MR_Word CPPairs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCPPairs_14, (MR_Integer) 0))));
                  MR_Word CPInfos_16;
                  MR_Word CPs_17;
                  MR_Word Var_35;
                  MR_Word Var_36;

                  mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CPPairs_15, &CPInfos_16, &CPs_17);
                  {
                    Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (CPs_17));
                  }
                  {
                    Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (CPInfos_16));
                    MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (Var_36));
                  }
                  {
                    MaybeCoveragePoints0_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MaybeCoveragePoints0_11, 0) = ((MR_Box) (Var_35));
                  }
                }
              }
              break;
          }
        }
      }
      break;
    case (MR_Integer) 0:
      MaybeCoveragePoints0_11 = (MR_Word) (&read_profile_scalar_common_6[3]);
      break;
  }
  if (((MR_tag((MR_Word) MaybeCoveragePoints0_11)) == (MR_Integer) 1))
    *MaybeCoveragePoints_8 = (MR_Word) (MaybeCoveragePoints0_11);
  else
  {
    MR_Word CPInfosList_20;
    MR_Word MaybeCPsList_21;
    MR_ArrayPtr CPInfosArray_22;
    MR_Word MaybeCPsArray_23;
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCoveragePoints0_11, (MR_Integer) 0))));
    MR_Word Var_42;
    MR_ArrayPtr conv0_CPInfosArray_22;

    CPInfosList_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0))));
    MaybeCPsList_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 1))));
    conv0_CPInfosArray_22 = mercury__array__array_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), CPInfosList_20);
    CPInfosArray_22 = (MR_ArrayPtr) (conv0_CPInfosArray_22);
    MaybeCPsArray_23 = mercury__maybe__map_maybe_2_f_0((MR_Word) (&read_profile_scalar_common_1[1]), (MR_Word) (&read_profile_scalar_common_1[2]), (MR_Word) (&read_profile_scalar_common_4[4]), MaybeCPsList_21);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (CPInfosArray_22));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (MaybeCPsArray_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCoveragePoints_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
    }
  }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_51_95_95_91_51_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Integer N_6,
  MR_Word * MaybeItems_8)
{
  MR_Word MaybeRevItems_10;

  read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0(Var_19, N_6, (MR_Word) ((MR_Unsigned) 0U), &MaybeRevItems_10);
  if (((MR_tag((MR_Word) MaybeRevItems_10)) == (MR_Integer) 1))
    *MaybeItems_8 = MaybeRevItems_10;
  else
  {
    MR_Word RevItems_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeRevItems_10, (MR_Integer) 0))));
    MR_Word Items_12;

    mercury__list__reverse_2_p_0((MR_Word) (&read_profile_scalar_common_4[0]), RevItems_11, &Items_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeItems_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Items_12));
    }
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

  read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__700__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_19);
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

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv1_MaybeNum_6);
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

  read_profile__read_coverage_point_static_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv0_MaybeCP_6);
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
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RevItems0_9));
      }
    else
    {
      MR_Word MaybeItem_12;
      MR_Word Var_33;
      MR_Word Var_34;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&read_profile_scalar_common_7[4]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Var_24));
      }
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_54_95_95_91_51_93_95_48_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Var_24));
      }
      io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&read_profile_scalar_common_4[0]), Var_33, Var_34, (MR_Word) (&read_profile_scalar_common_4[3]), &MaybeItem_12);
      if (((MR_tag((MR_Word) MaybeItem_12)) == (MR_Integer) 1))
        *MaybeItems_10 = (MR_Word) (MaybeItem_12);
      else
      {
        MR_Word Item_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeItem_12, (MR_Integer) 0))));
        MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) N_7 - (MR_Unsigned) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_7;
        MR_Word next_value_of_RevItems0_9;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Item_13));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (RevItems0_9));
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
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_50_95_95_91_51_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Integer N_6,
  MR_Word * MaybeItems_8)
{
  MR_Word MaybeRevItems_10;

  read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0(Var_19, N_6, (MR_Word) ((MR_Unsigned) 0U), &MaybeRevItems_10);
  if (((MR_tag((MR_Word) MaybeRevItems_10)) == (MR_Integer) 1))
    *MaybeItems_8 = MaybeRevItems_10;
  else
  {
    MR_Word RevItems_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeRevItems_10, (MR_Integer) 0))));
    MR_Word Items_12;

    mercury__list__reverse_2_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), RevItems_11, &Items_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeItems_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Items_12));
    }
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

  read_profile__IntroducedFrom__pred__read_coverage_point_static__716__1_3_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_21);
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

  read_profile__read_cp_type_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv1_MaybeCPType_6);
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

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv0_MaybeStr_6);
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
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RevItems0_9));
      }
    else
    {
      MR_Word MaybeItem_12;
      MR_Word Var_35;
      MR_Word Var_36;

      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Var_24));
      }
      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&read_profile_scalar_common_7[3]));
        MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_108_111_111_112_95_95_104_111_55_95_95_91_51_93_95_48_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Var_24));
      }
      io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), Var_35, Var_36, (MR_Word) (&read_profile_scalar_common_4[2]), &MaybeItem_12);
      if (((MR_tag((MR_Word) MaybeItem_12)) == (MR_Integer) 1))
        *MaybeItems_10 = (MR_Word) (MaybeItem_12);
      else
      {
        MR_Word Item_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeItem_12, (MR_Integer) 0))));
        MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) N_7 - (MR_Unsigned) 1);
        MR_Word Var_20;
        MR_Integer next_value_of_N_7;
        MR_Word next_value_of_RevItems0_9;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Item_13));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (RevItems0_9));
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
        *MaybeNum_8 = (MR_Word) (MR_mkword(MR_mktag(1), &read_profile_scalar_common_6[9]));
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeByte_10, (MR_Integer) 0))));
          MR_Integer Num1_12;
          MR_Integer Var_19;
          MR_Integer Var_21;
          MR_Integer Var_23;

          Var_19 = mercury__int__f_60_60_2_f_0(Num0_7, (MR_Integer) 7);
          Var_21 = (Byte_11 & (MR_Integer) 127);
          Num1_12 = (Var_19 | Var_21);
          Var_23 = (Byte_11 & (MR_Integer) 128);
          succeeded = (Var_23 != (MR_Integer) 0);
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
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Num1_12));
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeByte_10, (MR_Integer) 0))));
          MR_String Msg_14;

          mercury__io__error_message_2_p_0(Error_13, &Msg_14);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeNum_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_14));
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
read_profile__read_call_site_static_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__5_40;

  read_profile__IntroducedFrom__pred__read_call_site_static__441__1_5_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_String) (wrapper_arg_4)), &conv4_LambdaHeadVar__5_40);
  *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_40));
}

static void MR_CALL 
read_profile__read_call_site_static_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_MaybeStr_6;

  read_profile__read_string_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv3_MaybeStr_6);
  *wrapper_arg_1 = ((MR_Box) (conv3_MaybeStr_6));
}

static void MR_CALL 
read_profile__read_call_site_static_4_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_MaybeNum_6;

  read_profile__read_num_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv2_MaybeNum_6);
  *wrapper_arg_1 = ((MR_Box) (conv2_MaybeNum_6));
}

static void MR_CALL 
read_profile__read_call_site_static_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeKindAndCallee_6;

  read_profile__read_call_site_kind_and_callee_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv1_MaybeKindAndCallee_6);
  *wrapper_arg_1 = ((MR_Box) (conv1_MaybeKindAndCallee_6));
}

static void MR_CALL 
read_profile__read_call_site_static_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybePtr_8;

  read_profile__read_ptr_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv0_MaybePtr_8);
  *wrapper_arg_1 = ((MR_Box) (conv0_MaybePtr_8));
}

static void MR_CALL 
read_profile__read_call_site_static_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeCSS_6)
{
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;

  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&read_profile_scalar_common_3[1]));
    MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (read_profile__read_call_site_static_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (InputStream_5));
    MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) ((MR_Integer) 2));
  }
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&read_profile_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (read_profile__read_call_site_static_4_p_0_2));
    MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (InputStream_5));
  }
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&read_profile_scalar_common_7[1]));
    MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (read_profile__read_call_site_static_4_p_0_3));
    MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (InputStream_5));
  }
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
    MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (read_profile__read_call_site_static_4_p_0_4));
    MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (InputStream_5));
  }
  io_combinator__maybe_error_sequence_4_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&read_profile_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&read_profile_scalar_common_2[0]), Var_29, Var_30, Var_31, Var_32, (MR_Word) (&read_profile_scalar_common_4[1]), MaybeCSS_6);
}

static void MR_CALL 
read_profile__read_deep_id_string_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeVersionNumber_6)
{
  MR_bool succeeded;
  MR_Integer FirstLineLenLimit_8;
  MR_Word MaybeLine_9;
  MR_Integer Var_17;

  Var_17 = mercury__string__length_1_f_0((MR_String) "Mercury deep profiler data version ");
  FirstLineLenLimit_8 = (MR_Integer) ((MR_Unsigned) Var_17 + (MR_Unsigned) 10);
  read_profile__read_line_acc_6_p_0(InputStream_5, FirstLineLenLimit_8, (MR_Word) ((MR_Unsigned) 0U), &MaybeLine_9);
  if (((MR_tag((MR_Word) MaybeLine_9)) == (MR_Integer) 1))
    *MaybeVersionNumber_6 = (MR_Word) (MaybeLine_9);
  else
  {
    MR_String Line0_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), MaybeLine_9, (MR_Integer) 0))));
    MR_String Line_11;
    MR_Integer VersionNumber_13;
    MR_String Suffix_12;

    Line_11 = mercury__string__chomp_1_f_0(Line0_10);
    succeeded = mercury__string__append_3_p_1((MR_String) "Mercury deep profiler data version ", &Suffix_12, Line_11);
    if (succeeded)
      succeeded = mercury__string__to_int_2_p_0(Suffix_12, &VersionNumber_13);
    if (succeeded)
    {
      succeeded = (VersionNumber_13 == (MR_Integer) 8);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeVersionNumber_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VersionNumber_13));
        }
      else
        *MaybeVersionNumber_6 = (MR_Word) (MR_mkword(MR_mktag(1), &read_profile_scalar_common_6[0]));
    }
    else
      *MaybeVersionNumber_6 = (MR_Word) (MR_mkword(MR_mktag(1), &read_profile_scalar_common_6[1]));
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
          *MaybeLine_10 = (MR_Word) (MR_mkword(MR_mktag(1), &read_profile_scalar_common_6[9]));
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeByte_12, (MR_Integer) 0))));
            MR_Char Char_14;

            succeeded = mercury__char__to_int_2_p_2(&Char_14, Byte_13);
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_RevChars_25_25;

              {
                STATE_VARIABLE_RevChars_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_25_25, 0) = ((MR_Box) (MR_Word) (Char_14));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevChars_25_25, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_19));
              }
              succeeded = (Char_14 == (MR_Char) 10);
              if (succeeded)
              {
                MR_Word Chars_15;
                MR_String Str_16;

                mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_RevChars_25_25, &Chars_15);
                mercury__string__from_char_list_2_p_0(Chars_15, &Str_16);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeLine_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Str_16));
                }
              }
              else
              {
                MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) Limit_8 - (MR_Unsigned) 1);
                MR_Integer next_value_of_Limit_8 = Var_26;
                MR_Word next_value_of_STATE_VARIABLE_RevChars_0_19 = STATE_VARIABLE_RevChars_25_25;

                // direct tailcall eliminated
                ;
                Limit_8 = next_value_of_Limit_8;
                STATE_VARIABLE_RevChars_0_19 = next_value_of_STATE_VARIABLE_RevChars_0_19;
                continue;
              }
            }
            else
              *MaybeLine_10 = (MR_Word) (MR_mkword(MR_mktag(1), &read_profile_scalar_common_6[9]));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeByte_12, (MR_Integer) 0))));
            MR_String Msg_18;

            mercury__io__error_message_2_p_0(Error_17, &Msg_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLine_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_18));
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
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Str_31));
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
