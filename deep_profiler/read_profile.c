/*
** Automatically generated from `read_profile.m'
** by the Mercury compiler,
** version DEV
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


/* :- module read_profile. */
/* :- implementation. */

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




static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__type_ctor_info_initial_deep_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 read_profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__profile__pti_call_site_kind_and_callee_1__plain_profile__type_ctor_info_proc_static_ptr_0;

static const MR_VA_TypeInfo_Struct2 read_profile____vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_builtin__type_ctor_info_string_0;

static const MR_VA_TypeInfo_Struct6 read_profile____vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 read_profile__array__pti_array_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_cp_type_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0__plain_builtin__type_ctor_info_string_0;

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

static const MR_FA_TypeInfo_Struct2 read_profile__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

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
read_profile____Unify____maybe_error2_2_0_10001(
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3,
  MR_Box read_profile__wrapper_arg_4);

static void MR_CALL 
read_profile____Compare____maybe_error2_2_0_10001(
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3,
  MR_Box read_profile__wrapper_arg_4,
  MR_Box read_profile__wrapper_arg_5);

static MR_bool MR_CALL 
read_profile____Unify____maybe_init_deep_complete_0_0_10001(
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2);

static void MR_CALL 
read_profile____Compare____maybe_init_deep_complete_0_0_10001(
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3);

static MR_bool MR_CALL 
read_profile____Unify____next_deep_item_0_0_10001(
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2);

static void MR_CALL 
read_profile____Compare____next_deep_item_0_0_10001(
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3);

static MR_bool MR_CALL 
read_profile____Unify____ptr_kind_0_0_10001(
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2);

static void MR_CALL 
read_profile____Compare____ptr_kind_0_0_10001(
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_p_0(
  MR_Integer read_profile__N_7,
  MR_Word read_profile__RevItems0_9,
  MR_Word * read_profile__MaybeItems_10);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_p_0(
  MR_Integer read_profile__N_6,
  MR_Word * read_profile__MaybeItems_8);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_p_0(
  MR_Word * read_profile__MaybePtr_6);

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_p_0(
  MR_Integer read_profile__N_7,
  MR_Word read_profile__ItemReader_8,
  MR_Word read_profile__RevItems0_9,
  MR_Word * read_profile__MaybeItems_10);

static void MR_CALL 
read_profile__read_n_things__ho8_6_p_0(
  MR_Integer read_profile__N_7,
  MR_Word read_profile__RevItems0_9,
  MR_Word * read_profile__MaybeItems_10);

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0(
  MR_Integer read_profile__N_7,
  MR_Word read_profile__RevItems0_9,
  MR_Word * read_profile__MaybeItems_10);

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0(
  MR_Integer read_profile__N_7,
  MR_Word read_profile__RevItems0_9,
  MR_Word * read_profile__MaybeItems_10);

static void MR_CALL 
read_profile__read_n_things__ho3_5_p_0(
  MR_Integer read_profile__N_6,
  MR_Word * read_profile__MaybeItems_8);

static void MR_CALL 
read_profile__read_n_things__ho2_5_p_0(
  MR_Integer read_profile__N_6,
  MR_Word * read_profile__MaybeItems_8);

static MR_bool MR_CALL 
read_profile__IntroducedFrom__pred__read_n_byte_string__1315__1_2_p_0(
  MR_Integer read_profile__LambdaHeadVar__1_20,
  MR_Char * read_profile__LambdaHeadVar__2_21);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__895__1_3_p_0(
  MR_Word read_profile__LambdaHeadVar__1_49,
  MR_Word read_profile__LambdaHeadVar__2_50,
  MR_Word * read_profile__LambdaHeadVar__3_51);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_5_p_0(
  MR_Integer read_profile__N_16,
  MR_Word read_profile__HeadVar__2_48,
  MR_Word * read_profile__HeadVar__3_86);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__885__1_4_p_0(
  MR_Integer read_profile__LambdaHeadVar__1_38,
  MR_Integer read_profile__LambdaHeadVar__2_39,
  MR_Integer read_profile__LambdaHeadVar__3_40,
  MR_Word * read_profile__LambdaHeadVar__4_41);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_p_0(
  MR_String read_profile__LambdaHeadVar__1_17,
  MR_Word read_profile__LambdaHeadVar__2_18,
  MR_Word * read_profile__LambdaHeadVar__3_19);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__688__1_3_p_0(
  MR_Word read_profile__LambdaHeadVar__1_15,
  MR_Integer read_profile__LambdaHeadVar__2_16,
  MR_Word * read_profile__LambdaHeadVar__3_17);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_user_defined__663__1_7_p_0(
  MR_Word read_profile__PredOrFunc_5,
  MR_String read_profile__LambdaHeadVar__1_23,
  MR_String read_profile__LambdaHeadVar__2_24,
  MR_String read_profile__LambdaHeadVar__3_25,
  MR_Integer read_profile__LambdaHeadVar__4_26,
  MR_Integer read_profile__LambdaHeadVar__5_27,
  MR_Word * read_profile__LambdaHeadVar__6_28);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__644__1_7_p_0(
  MR_String read_profile__LambdaHeadVar__1_23,
  MR_String read_profile__LambdaHeadVar__2_24,
  MR_String read_profile__LambdaHeadVar__3_25,
  MR_String read_profile__LambdaHeadVar__4_26,
  MR_Integer read_profile__LambdaHeadVar__5_27,
  MR_Integer read_profile__LambdaHeadVar__6_28,
  MR_Word * read_profile__LambdaHeadVar__7_29);

static MR_ArrayPtr MR_CALL 
read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_f_0(
  MR_Word read_profile__HeadVar__1_73);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_static__471__1_7_p_0(
  MR_Integer read_profile__LambdaHeadVar__1_50,
  MR_Word read_profile__LambdaHeadVar__2_51,
  MR_String read_profile__LambdaHeadVar__3_52,
  MR_Integer read_profile__LambdaHeadVar__4_53,
  MR_Integer read_profile__LambdaHeadVar__5_54,
  MR_Integer read_profile__LambdaHeadVar__6_55,
  MR_Word * read_profile__LambdaHeadVar__7_56);

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_p_0(
  MR_Integer read_profile__LambdaHeadVar__1_32,
  MR_Word read_profile__LambdaHeadVar__2_33,
  MR_Integer read_profile__LambdaHeadVar__3_34,
  MR_String read_profile__LambdaHeadVar__4_35,
  MR_Word * read_profile__LambdaHeadVar__5_36);

static void MR_CALL 
read_profile____Compare____ptr_kind_0_0(
  MR_Word * read_profile__HeadVar__1_1,
  MR_Word read_profile__HeadVar__2_2,
  MR_Word read_profile__HeadVar__3_3);

static MR_bool MR_CALL 
read_profile____Unify____ptr_kind_0_0(
  MR_Word read_profile__HeadVar__2_1,
  MR_Word read_profile__HeadVar__2_2);

static void MR_CALL 
read_profile____Compare____next_deep_item_0_0(
  MR_Word * read_profile__HeadVar__1_1,
  MR_Word read_profile__HeadVar__2_2,
  MR_Word read_profile__HeadVar__3_3);

static MR_bool MR_CALL 
read_profile____Unify____next_deep_item_0_0(
  MR_Word read_profile__HeadVar__2_1,
  MR_Word read_profile__HeadVar__2_2);

static void MR_CALL 
read_profile____Compare____maybe_init_deep_complete_0_0(
  MR_Word * read_profile__HeadVar__1_1,
  MR_Word read_profile__HeadVar__2_2,
  MR_Word read_profile__HeadVar__3_3);

static MR_bool MR_CALL 
read_profile____Unify____maybe_init_deep_complete_0_0(
  MR_Word read_profile__HeadVar__1_1,
  MR_Word read_profile__HeadVar__2_2);

static void MR_CALL 
read_profile____Compare____maybe_error2_2_0(
  MR_Word read_profile__TypeInfo_for_T1_19,
  MR_Word read_profile__TypeInfo_for_T2_20,
  MR_Word * read_profile__HeadVar__1_1,
  MR_Word read_profile__HeadVar__2_2,
  MR_Word read_profile__HeadVar__3_3);

static MR_bool MR_CALL 
read_profile____Unify____maybe_error2_2_0(
  MR_Word read_profile__TypeInfo_for_T1_11,
  MR_Word read_profile__TypeInfo_for_T2_12,
  MR_Word read_profile__HeadVar__1_1,
  MR_Word read_profile__HeadVar__2_2);

static MR_bool MR_CALL 
read_profile__is_next_item_token_2_p_0(
  MR_Integer read_profile__Int_1,
  MR_Word * read_profile__NextItem_2);

static MR_Word MR_CALL 
read_profile__make_cssptr_1_f_0(
  MR_Integer read_profile__CSSI_3);

static MR_Word MR_CALL 
read_profile__make_csdptr_1_f_0(
  MR_Integer read_profile__CSDI_3);

static void MR_CALL 
read_profile__deep_insert_4_p_0(
  MR_Word read_profile__TypeInfo_for_T_12,
  MR_ArrayPtr read_profile__A0_5,
  MR_Integer read_profile__Ind_6,
  MR_Box read_profile__Item_7,
  MR_ArrayPtr * read_profile__A_8);

static void MR_CALL 
read_profile__read_deep_byte_3_p_0(
  MR_Word * read_profile__MaybeByte_4);

static void MR_CALL 
read_profile__read_n_bytes_acc_5_p_0(
  MR_Integer read_profile__N_6,
  MR_Word read_profile__RevBytes0_7,
  MR_Word * read_profile__MaybeNBytes_8);

static void MR_CALL 
read_profile__read_fixed_size_int_acc_6_p_0(
  MR_Integer read_profile__BytesLeft_7,
  MR_Integer read_profile__Num0_8,
  MR_Integer read_profile__ShiftBy_9,
  MR_Word * read_profile__MaybeInt_10);

static void MR_CALL 
read_profile__read_fixed_size_int_3_p_0(
  MR_Word * read_profile__MaybeInt_4);

static void MR_CALL 
read_profile__read_num_acc_4_p_0(
  MR_Integer read_profile__Num0_5,
  MR_Word * read_profile__MaybeNum_6);

static void MR_CALL 
read_profile__read_num_3_p_0(
  MR_Word * read_profile__MaybeNum_4);

static void MR_CALL 
read_profile__num_to_cp_type_2_p_0(
  MR_Integer read_profile__Int_1,
  MR_Word * read_profile__CPType_2);

static void MR_CALL 
read_profile__read_cp_type_3_p_0(
  MR_Word * read_profile__MaybeCPType_4);

static void MR_CALL 
read_profile__read_ptr_4_p_0(
  MR_Word read_profile___Kind_5,
  MR_Word * read_profile__MaybePtr_6);

static MR_bool MR_CALL 
read_profile__read_string_3_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box * read_profile__wrapper_arg_2);

static void MR_CALL 
read_profile__read_string_3_p_0(
  MR_Word * read_profile__MaybeStr_4);

static void MR_CALL 
read_profile__read_line_acc_5_p_0(
  MR_Integer read_profile__Limit_6,
  MR_Word read_profile__STATE_VARIABLE_RevChars_0_17,
  MR_Word * read_profile__MaybeLine_8);

static void MR_CALL 
read_profile__read_n_things_5_p_0(
  MR_Word read_profile__TypeInfo_for_T_18,
  MR_Integer read_profile__N_6,
  MR_Word read_profile__ItemReader_7,
  MR_Word * read_profile__MaybeItems_8);

static void MR_CALL 
read_profile__read_call_site_kind_and_callee_3_p_0(
  MR_Word * read_profile__MaybeKindAndCallee_4);

static void MR_CALL 
read_profile__read_call_site_kind_3_p_0(
  MR_Word * read_profile__MaybeKind_4);

static void MR_CALL 
read_profile__read_multi_call_site_csdis_2_4_p_0(
  MR_Word read_profile__CSDIs0_5,
  MR_Word * read_profile__MaybeCSDIs_6);

static void MR_CALL 
read_profile__read_multi_call_site_csdis_3_p_0(
  MR_Word * read_profile__MaybeCSDIs_4);

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_4(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1);

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1);

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1);

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1);

static void MR_CALL 
read_profile__read_call_site_slot_3_p_0(
  MR_Word * read_profile__MaybeSlot_4);

static void MR_CALL 
read_profile__maybe_read_num_handle_error_7_p_0(
  MR_Integer read_profile__MaskWord_8,
  MR_Integer read_profile__MaskValue_9,
  MR_Integer * read_profile__Num_10,
  MR_Word read_profile__STATE_VARIABLE_MaybeError_0_15,
  MR_Word * read_profile__STATE_VARIABLE_MaybeError_16);

static void MR_CALL 
read_profile__read_profile_3_p_0(
  MR_Word * read_profile__MaybeProfile_4);

static void MR_CALL 
read_profile__read_call_site_dynamic_3_p_0(
  MR_Word * read_profile__MaybeCSD_4);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_8(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_7(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_6(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_5(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_4(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3,
  MR_Box * read_profile__wrapper_arg_4);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0(
  MR_Word read_profile__ProfileStats_5,
  MR_Word * read_profile__MaybePD_6);

static MR_bool MR_CALL 
read_profile__glue_lambda_name_3_p_0(
  MR_Word read_profile__Segments_4,
  MR_Word * read_profile__PredName_5,
  MR_Word * read_profile__LineNumber_6);

static void MR_CALL 
read_profile__split_lambda_name_2_p_0(
  MR_Word read_profile__HeadVar__1_1,
  MR_Word * read_profile__HeadVar__2_2);

static MR_bool MR_CALL 
read_profile__non_right_bracket_1_p_0(
  MR_Char read_profile__C_2);

static MR_bool MR_CALL 
read_profile__fix_type_spec_suffix_3_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1);

static MR_bool MR_CALL 
read_profile__fix_type_spec_suffix_3_p_0(
  MR_Word read_profile__Chars0_4,
  MR_Word * read_profile__Chars_5,
  MR_String * read_profile__SpecInfoStr_6);

static MR_String MR_CALL 
read_profile__add_plus_one_for_function_1_f_0(
  MR_Word read_profile__HeadVar__1_1);

static void MR_CALL 
read_profile__create_refined_proc_ids_3_p_0(
  MR_Word read_profile__ProcLabel_4,
  MR_String * read_profile__UnQualName_5,
  MR_String * read_profile__QualName_6);

static MR_String MR_CALL 
read_profile__raw_proc_id_to_string_1_f_0(
  MR_Word read_profile__HeadVar__1_1);

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0(
  MR_Word * read_profile__MaybeCP_4);

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_6(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3,
  MR_Box read_profile__wrapper_arg_4,
  MR_Box read_profile__wrapper_arg_5,
  MR_Box * read_profile__wrapper_arg_6);

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_5(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_4(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0(
  MR_Word read_profile__PredOrFunc_5,
  MR_Word * read_profile__MaybeProcLabel_6);

static void MR_CALL 
read_profile__read_proc_id_3_p_0_7(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3,
  MR_Box read_profile__wrapper_arg_4,
  MR_Box read_profile__wrapper_arg_5,
  MR_Box read_profile__wrapper_arg_6,
  MR_Box * read_profile__wrapper_arg_7);

static void MR_CALL 
read_profile__read_proc_id_3_p_0_6(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_3_p_0_5(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_3_p_0_4(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_3_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_3_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_3_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_id_3_p_0(
  MR_Word * read_profile__MaybeProcId_4);

static void MR_CALL 
read_profile__maybe_read_pd_coverage_points_4_p_0(
  MR_Word read_profile__ProfileStats_5,
  MR_Word * read_profile__MaybeCoveragePoints_6);

static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1);

static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1);

static void MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0(
  MR_Word read_profile__ProfileStats_5,
  MR_Word * read_profile__MaybeCoveragePoints_6);

static MR_Box MR_CALL 
read_profile__read_proc_static_4_p_0_8(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1);

static void MR_CALL 
read_profile__read_proc_static_4_p_0_7(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3,
  MR_Box read_profile__wrapper_arg_4,
  MR_Box read_profile__wrapper_arg_5,
  MR_Box read_profile__wrapper_arg_6,
  MR_Box * read_profile__wrapper_arg_7);

static void MR_CALL 
read_profile__read_proc_static_4_p_0_6(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_4_p_0_5(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_4_p_0_4(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_4_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_4_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_4_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_proc_static_4_p_0(
  MR_Word read_profile__ProfileStats_5,
  MR_Word * read_profile__MaybePS_6);

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_5(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3,
  MR_Box read_profile__wrapper_arg_4,
  MR_Box * read_profile__wrapper_arg_5);

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_4(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_site_static_3_p_0(
  MR_Word * read_profile__MaybeCSS_4);

static void MR_CALL 
read_profile__read_nodes_3_5_p_0(
  MR_Integer read_profile__Depth_6,
  MR_Word read_profile__STATE_VARIABLE_InitDeep_0_36,
  MR_Word * read_profile__MaybeInitDeep_8);

static void MR_CALL 
read_profile__read_nodes_2_5_p_0(
  MR_Integer read_profile__Depth_6,
  MR_Word read_profile__STATE_VARIABLE_InitDeep_0_10,
  MR_Word * read_profile__MaybeInitDeep_8);

static void MR_CALL 
read_profile__read_nodes_4_p_0(
  MR_Word read_profile__InitDeep0_5,
  MR_Word * read_profile__MaybeInitDeep_6);

static void MR_CALL 
read_profile__maybe_deep_flags_2_p_0(
  MR_Integer read_profile__FlagsInt_3,
  MR_Word * read_profile__MaybeFlags_4);

static void MR_CALL 
read_profile__maybe_init_deep_12_p_0(
  MR_String read_profile__ProgName_13,
  MR_Integer read_profile__FlagsInt_14,
  MR_Integer read_profile__MaxCSD_15,
  MR_Integer read_profile__MaxCSS_16,
  MR_Integer read_profile__MaxPD_17,
  MR_Integer read_profile__MaxPS_18,
  MR_Integer read_profile__TicksPerSec_19,
  MR_Integer read_profile__InstrumentQuanta_20,
  MR_Integer read_profile__UserQuanta_21,
  MR_Integer read_profile__NumCallSeqs_22,
  MR_Integer read_profile__RootPDI_23,
  MR_Word * read_profile__MaybeInitDeep_24);

static void MR_CALL 
read_profile__read_deep_id_string_3_p_0(
  MR_Word * read_profile__MaybeVersionNumber_4);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_12(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3,
  MR_Box read_profile__wrapper_arg_4,
  MR_Box read_profile__wrapper_arg_5,
  MR_Box read_profile__wrapper_arg_6,
  MR_Box read_profile__wrapper_arg_7,
  MR_Box read_profile__wrapper_arg_8,
  MR_Box read_profile__wrapper_arg_9,
  MR_Box read_profile__wrapper_arg_10,
  MR_Box read_profile__wrapper_arg_11,
  MR_Box * read_profile__wrapper_arg_12);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_11(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_10(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_9(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_8(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_7(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_6(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_5(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_4(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);

static void MR_CALL 
read_profile__read_call_graph_4_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3);


static /* final */ const MR_Box read_profile_scalar_common_1[6][2];

static /* final */ const MR_Box read_profile_scalar_common_2[8][4];

static /* final */ const MR_Box read_profile_scalar_common_3[3][8];

static /* final */ const MR_Box read_profile_scalar_common_4[56][3];

static /* final */ const MR_Box read_profile_scalar_common_5[6][5];

static /* final */ const MR_Box read_profile_scalar_common_6[10][6];

static /* final */ const MR_Box read_profile_scalar_common_7[3][7];

static /* final */ const MR_Box read_profile_scalar_common_8[1][15];

static /* final */ const MR_Box read_profile_scalar_common_9[11][1];

static /* final */ const MR_Box read_profile_scalar_common_10[3][10];




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
    ((MR_Box) (read_profile__read_call_graph_4_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (&read_profile_scalar_common_7[0])),
    ((MR_Box) (read_profile__read_call_site_static_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
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
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&read_profile_scalar_common_7[0])),
    ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) (&read_profile_scalar_common_7[0])),
    ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
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
    ((MR_Box) (&read_profile_scalar_common_6[0])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&read_profile_scalar_common_8[0])),
    ((MR_Box) (read_profile__read_call_graph_4_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[2])),
    ((MR_Box) (read_profile__read_call_site_static_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_call_site_static_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[0])),
    ((MR_Box) (read_profile__read_call_site_static_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&read_profile_scalar_common_3[1])),
    ((MR_Box) (read_profile__read_call_site_static_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[3])),
    ((MR_Box) (read_profile__read_proc_static_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[0])),
    ((MR_Box) (read_profile__read_proc_static_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_proc_static_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_proc_static_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_proc_static_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&read_profile_scalar_common_10[0])),
    ((MR_Box) (read_profile__read_proc_static_4_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[2])),
    ((MR_Box) (read_profile__read_proc_static_4_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[3])),
    ((MR_Box) (read_profile__maybe_read_ps_coverage_points_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[3])),
    ((MR_Box) (read_profile__maybe_read_ps_coverage_points_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[0])),
    ((MR_Box) (read_profile__read_proc_id_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[0])),
    ((MR_Box) (read_profile__read_proc_id_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[0])),
    ((MR_Box) (read_profile__read_proc_id_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[0])),
    ((MR_Box) (read_profile__read_proc_id_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_proc_id_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_proc_id_3_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&read_profile_scalar_common_10[1])),
    ((MR_Box) (read_profile__read_proc_id_3_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[0])),
    ((MR_Box) (read_profile__read_proc_id_user_defined_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[0])),
    ((MR_Box) (read_profile__read_proc_id_user_defined_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[0])),
    ((MR_Box) (read_profile__read_proc_id_user_defined_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_proc_id_user_defined_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 36 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_proc_id_user_defined_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 37 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[0])),
    ((MR_Box) (read_profile__read_coverage_point_static_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 38 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[4])),
    ((MR_Box) (read_profile__read_coverage_point_static_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 39 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[5])),
    ((MR_Box) (read_profile__read_coverage_point_static_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 40 */
  {
    ((MR_Box) (&read_profile_scalar_common_2[5])),
    ((MR_Box) (read_profile__fix_type_spec_suffix_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 41 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 42 */
  {
    ((MR_Box) (&read_profile_scalar_common_7[1])),
    ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 43 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[6])),
    ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 44 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[7])),
    ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 45 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[4])),
    ((MR_Box) (read_profile__read_call_site_slot_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 46 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[4])),
    ((MR_Box) (read_profile__read_call_site_slot_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 47 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[4])),
    ((MR_Box) (read_profile__read_call_site_slot_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 48 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[4])),
    ((MR_Box) (read_profile__read_call_site_slot_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 49 */
  {
    ((MR_Box) (&read_profile_scalar_common_5[5])),
    ((MR_Box) (read_profile__read_string_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 50 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[8])),
    ((MR_Box) (read_profile__read_n_things__ho6_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 51 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[1])),
    ((MR_Box) (read_profile__read_n_things__ho6_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 52 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[9])),
    ((MR_Box) (read_profile__read_n_things__ho6_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 53 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[0])),
    ((MR_Box) (read_profile__read_n_things__ho7_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 54 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[4])),
    ((MR_Box) (read_profile__read_n_things__ho7_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 55 */
  {
    ((MR_Box) (&read_profile_scalar_common_6[5])),
    ((MR_Box) (read_profile__read_n_things__ho7_6_p_0_3)),
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
    ((MR_Box) (((MR_Box) ((MR_Integer) -1)))),
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &read_profile_scalar_common_1[5]))),
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&read_profile__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__array__pti_array_1__plain_builtin__type_ctor_info_int_0))
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

static /* final */ const MR_Box read_profile_scalar_common_6[10][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_cp_type_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_1__plain_array__ti_array_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__list__pti_list_1__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
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

static /* final */ const MR_Box read_profile_scalar_common_8[1][15] = {
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

static /* final */ const MR_Box read_profile_scalar_common_9[11][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "version number mismatch"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "not a deep profiling data file"))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "unexpected end of file"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "string contained bad char"))
  },
};

static /* final */ const MR_Box read_profile_scalar_common_10[3][10] = {
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_builtin__type_ctor_info_string_0))
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



static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
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

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_error2_2_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_error2_2_0 = {
  (MR_String) "ok2",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  read_profile__read_profile__field_types_maybe_error2_2_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_error2_2_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_error2_2_1 = {
  (MR_String) "error2",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  read_profile__read_profile__field_types_maybe_error2_2_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    read_profile__read_profile__du_stag_ordered_maybe_error2_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  read_profile__read_profile__field_types_maybe_init_deep_complete_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_1[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_initial_deep_0
};

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_1 = {
  (MR_String) "init_deep_incomplete",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  read_profile__read_profile__field_types_maybe_init_deep_complete_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_2 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  read_profile__read_profile__field_types_maybe_init_deep_complete_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN_ENUM,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
read_profile____Unify____maybe_error2_2_0_10001(
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3,
  MR_Box read_profile__wrapper_arg_4)
{
  {
    MR_bool read_profile__succeeded;

    {
      read_profile__succeeded = read_profile____Unify____maybe_error2_2_0(((MR_Word) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2), ((MR_Word) read_profile__wrapper_arg_3), ((MR_Word) read_profile__wrapper_arg_4));
    }
    return read_profile__succeeded;
  }
}

static void MR_CALL 
read_profile____Compare____maybe_error2_2_0_10001(
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3,
  MR_Box read_profile__wrapper_arg_4,
  MR_Box read_profile__wrapper_arg_5)
{
  {
    MR_Word read_profile__conv0_HeadVar__1_1;

    {
      read_profile____Compare____maybe_error2_2_0(((MR_Word) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2), &read_profile__conv0_HeadVar__1_1, ((MR_Word) read_profile__wrapper_arg_4), ((MR_Word) read_profile__wrapper_arg_5));
    }
    *read_profile__wrapper_arg_3 = ((MR_Box) (read_profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
read_profile____Unify____maybe_init_deep_complete_0_0_10001(
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2)
{
  {
    MR_bool read_profile__succeeded;

    {
      read_profile__succeeded = read_profile____Unify____maybe_init_deep_complete_0_0(((MR_Word) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2));
    }
    return read_profile__succeeded;
  }
}

static void MR_CALL 
read_profile____Compare____maybe_init_deep_complete_0_0_10001(
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3)
{
  {
    MR_Word read_profile__conv0_HeadVar__1_1;

    {
      read_profile____Compare____maybe_init_deep_complete_0_0(&read_profile__conv0_HeadVar__1_1, ((MR_Word) read_profile__wrapper_arg_2), ((MR_Word) read_profile__wrapper_arg_3));
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
read_profile____Unify____next_deep_item_0_0_10001(
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2)
{
  {
    MR_bool read_profile__succeeded;

    {
      read_profile__succeeded = read_profile____Unify____next_deep_item_0_0(((MR_Word) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2));
    }
    return read_profile__succeeded;
  }
}

static void MR_CALL 
read_profile____Compare____next_deep_item_0_0_10001(
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3)
{
  {
    MR_Word read_profile__conv0_HeadVar__1_1;

    {
      read_profile____Compare____next_deep_item_0_0(&read_profile__conv0_HeadVar__1_1, ((MR_Word) read_profile__wrapper_arg_2), ((MR_Word) read_profile__wrapper_arg_3));
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
read_profile____Unify____ptr_kind_0_0_10001(
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2)
{
  {
    MR_bool read_profile__succeeded;

    {
      read_profile__succeeded = read_profile____Unify____ptr_kind_0_0(((MR_Word) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2));
    }
    return read_profile__succeeded;
  }
}

static void MR_CALL 
read_profile____Compare____ptr_kind_0_0_10001(
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3)
{
  {
    MR_Word read_profile__conv0_HeadVar__1_1;

    {
      read_profile____Compare____ptr_kind_0_0(&read_profile__conv0_HeadVar__1_1, ((MR_Word) read_profile__wrapper_arg_2), ((MR_Word) read_profile__wrapper_arg_3));
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_p_0(
  MR_Integer read_profile__N_7,
  MR_Word read_profile__RevItems0_9,
  MR_Word * read_profile__MaybeItems_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool read_profile__succeeded = (read_profile__N_7 <= (MR_Integer) 0);

        if (read_profile__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *read_profile__MaybeItems_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__RevItems0_9));
          }
        else
          {
            MR_Word read_profile__MaybeItem_12;

            {
              read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeItem_12);
            }
            if (((MR_tag((MR_Word) read_profile__MaybeItem_12)) == (MR_mktag((MR_Integer) 1))))
              *read_profile__MaybeItems_10 = (MR_Word) read_profile__MaybeItem_12;
            else
              {
                MR_Integer read_profile__Item_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeItem_12, (MR_Integer) 0)));
                MR_Integer read_profile__V_19_19 = (read_profile__N_7 - (MR_Integer) 1);
                MR_Word read_profile__V_20_20;

                {
                  read_profile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 0) = ((MR_Box) (read_profile__Item_13));
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 1) = ((MR_Box) (read_profile__RevItems0_9));
                }
                /* direct tailcall eliminated */
                {
                  MR_Integer read_profile__N__tmp_copy_7 = read_profile__V_19_19;
                  MR_Word read_profile__RevItems0__tmp_copy_9 = read_profile__V_20_20;

                  read_profile__RevItems0_9 = read_profile__RevItems0__tmp_copy_9;
                  read_profile__N_7 = read_profile__N__tmp_copy_7;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_p_0(
  MR_Integer read_profile__N_6,
  MR_Word * read_profile__MaybeItems_8)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__MaybeRevItems_10;

    {
      read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_p_0(read_profile__N_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__MaybeRevItems_10);
    }
    if (((MR_tag((MR_Word) read_profile__MaybeRevItems_10)) == (MR_mktag((MR_Integer) 1))))
      *read_profile__MaybeItems_8 = read_profile__MaybeRevItems_10;
    else
      {
        MR_Word read_profile__RevItems_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeRevItems_10, (MR_Integer) 0)));
        MR_Word read_profile__Items_12;

        {
          mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__RevItems_11, &read_profile__Items_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *read_profile__MaybeItems_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Items_12));
        }
      }
  }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_p_0(
  MR_Word * read_profile__MaybePtr_6)
{
  {
    MR_bool read_profile__succeeded;

    {
      read_profile__read_num_acc_4_p_0((MR_Integer) 0, read_profile__MaybePtr_6);
    }
  }
}

static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_p_0(
  MR_Integer read_profile__N_7,
  MR_Word read_profile__ItemReader_8,
  MR_Word read_profile__RevItems0_9,
  MR_Word * read_profile__MaybeItems_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool read_profile__succeeded = (read_profile__N_7 <= (MR_Integer) 0);

        if (read_profile__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *read_profile__MaybeItems_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__RevItems0_9));
          }
        else
          {
            MR_Word read_profile__MaybeItem_12;
            void MR_CALL (* read_profile__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), read_profile__ItemReader_8, (MR_Integer) 1)));
            MR_Box read_profile__conv2_MaybeItem_12;
            MR_Box read_profile__conv1_STATE_VARIABLE_IO_18_18;

            {
              read_profile__func_0(((MR_Box) read_profile__ItemReader_8), &read_profile__conv2_MaybeItem_12, ((MR_Box) ((MR_Integer) 0)), &read_profile__conv1_STATE_VARIABLE_IO_18_18);
            }
            read_profile__MaybeItem_12 = ((MR_Word) read_profile__conv2_MaybeItem_12);
            if (((MR_tag((MR_Word) read_profile__MaybeItem_12)) == (MR_mktag((MR_Integer) 1))))
              *read_profile__MaybeItems_10 = (MR_Word) read_profile__MaybeItem_12;
            else
              {
                MR_Box read_profile__Item_13 = (MR_hl_field(MR_mktag(0), read_profile__MaybeItem_12, (MR_Integer) 0));
                MR_Integer read_profile__V_19_19 = (read_profile__N_7 - (MR_Integer) 1);
                MR_Word read_profile__V_20_20;

                {
                  read_profile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 0) = read_profile__Item_13;
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 1) = ((MR_Box) (read_profile__RevItems0_9));
                }
                /* direct tailcall eliminated */
                {
                  MR_Integer read_profile__N__tmp_copy_7 = read_profile__V_19_19;
                  MR_Word read_profile__RevItems0__tmp_copy_9 = read_profile__V_20_20;

                  read_profile__RevItems0_9 = read_profile__RevItems0__tmp_copy_9;
                  read_profile__N_7 = read_profile__N__tmp_copy_7;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
read_profile__read_n_things__ho8_6_p_0(
  MR_Integer read_profile__N_7,
  MR_Word read_profile__RevItems0_9,
  MR_Word * read_profile__MaybeItems_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool read_profile__succeeded = (read_profile__N_7 <= (MR_Integer) 0);

        if (read_profile__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *read_profile__MaybeItems_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__RevItems0_9));
          }
        else
          {
            MR_Word read_profile__MaybeItem_12;

            {
              read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeItem_12);
            }
            if (((MR_tag((MR_Word) read_profile__MaybeItem_12)) == (MR_mktag((MR_Integer) 1))))
              *read_profile__MaybeItems_10 = (MR_Word) read_profile__MaybeItem_12;
            else
              {
                MR_Integer read_profile__Item_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeItem_12, (MR_Integer) 0)));
                MR_Integer read_profile__V_19_19 = (read_profile__N_7 - (MR_Integer) 1);
                MR_Word read_profile__V_20_20;

                {
                  read_profile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 0) = ((MR_Box) (read_profile__Item_13));
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 1) = ((MR_Box) (read_profile__RevItems0_9));
                }
                /* direct tailcall eliminated */
                {
                  MR_Integer read_profile__N__tmp_copy_7 = read_profile__V_19_19;
                  MR_Word read_profile__RevItems0__tmp_copy_9 = read_profile__V_20_20;

                  read_profile__RevItems0_9 = read_profile__RevItems0__tmp_copy_9;
                  read_profile__N_7 = read_profile__N__tmp_copy_7;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv2_LambdaHeadVar__3_19;

    {
      read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_p_0(((MR_String) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2), &read_profile__conv2_LambdaHeadVar__3_19);
    }
    *read_profile__wrapper_arg_3 = ((MR_Box) (read_profile__conv2_LambdaHeadVar__3_19));
  }
}

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv1_MaybeCPType_4;

    {
      read_profile__read_cp_type_3_p_0(&read_profile__conv1_MaybeCPType_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeCPType_4));
  }
}

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv0_MaybeStr_4;

    {
      read_profile__read_string_3_p_0(&read_profile__conv0_MaybeStr_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0(
  MR_Integer read_profile__N_7,
  MR_Word read_profile__RevItems0_9,
  MR_Word * read_profile__MaybeItems_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool read_profile__succeeded = (read_profile__N_7 <= (MR_Integer) 0);

        if (read_profile__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *read_profile__MaybeItems_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__RevItems0_9));
          }
        else
          {
            MR_Word read_profile__MaybeItem_12;

            {
              io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) &read_profile_scalar_common_4[53], (MR_Word) &read_profile_scalar_common_4[54], (MR_Word) &read_profile_scalar_common_4[55], &read_profile__MaybeItem_12);
            }
            if (((MR_tag((MR_Word) read_profile__MaybeItem_12)) == (MR_mktag((MR_Integer) 1))))
              *read_profile__MaybeItems_10 = (MR_Word) read_profile__MaybeItem_12;
            else
              {
                MR_Word read_profile__Item_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeItem_12, (MR_Integer) 0)));
                MR_Integer read_profile__V_19_19 = (read_profile__N_7 - (MR_Integer) 1);
                MR_Word read_profile__V_20_20;

                {
                  read_profile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 0) = ((MR_Box) (read_profile__Item_13));
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 1) = ((MR_Box) (read_profile__RevItems0_9));
                }
                /* direct tailcall eliminated */
                {
                  MR_Integer read_profile__N__tmp_copy_7 = read_profile__V_19_19;
                  MR_Word read_profile__RevItems0__tmp_copy_9 = read_profile__V_20_20;

                  read_profile__RevItems0_9 = read_profile__RevItems0__tmp_copy_9;
                  read_profile__N_7 = read_profile__N__tmp_copy_7;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv2_LambdaHeadVar__3_17;

    {
      read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__688__1_3_p_0(((MR_Word) read_profile__wrapper_arg_1), ((MR_Integer) read_profile__wrapper_arg_2), &read_profile__conv2_LambdaHeadVar__3_17);
    }
    *read_profile__wrapper_arg_3 = ((MR_Box) (read_profile__conv2_LambdaHeadVar__3_17));
  }
}

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv1_MaybeNum_4;

    {
      read_profile__read_num_3_p_0(&read_profile__conv1_MaybeNum_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv0_MaybeCP_4;

    {
      read_profile__read_coverage_point_static_3_p_0(&read_profile__conv0_MaybeCP_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybeCP_4));
  }
}

static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0(
  MR_Integer read_profile__N_7,
  MR_Word read_profile__RevItems0_9,
  MR_Word * read_profile__MaybeItems_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool read_profile__succeeded = (read_profile__N_7 <= (MR_Integer) 0);

        if (read_profile__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *read_profile__MaybeItems_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__RevItems0_9));
          }
        else
          {
            MR_Word read_profile__MaybeItem_12;

            {
              io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &read_profile_scalar_common_4[0], (MR_Word) &read_profile_scalar_common_4[50], (MR_Word) &read_profile_scalar_common_4[51], (MR_Word) &read_profile_scalar_common_4[52], &read_profile__MaybeItem_12);
            }
            if (((MR_tag((MR_Word) read_profile__MaybeItem_12)) == (MR_mktag((MR_Integer) 1))))
              *read_profile__MaybeItems_10 = (MR_Word) read_profile__MaybeItem_12;
            else
              {
                MR_Word read_profile__Item_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeItem_12, (MR_Integer) 0)));
                MR_Integer read_profile__V_19_19 = (read_profile__N_7 - (MR_Integer) 1);
                MR_Word read_profile__V_20_20;

                {
                  read_profile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 0) = ((MR_Box) (read_profile__Item_13));
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 1) = ((MR_Box) (read_profile__RevItems0_9));
                }
                /* direct tailcall eliminated */
                {
                  MR_Integer read_profile__N__tmp_copy_7 = read_profile__V_19_19;
                  MR_Word read_profile__RevItems0__tmp_copy_9 = read_profile__V_20_20;

                  read_profile__RevItems0_9 = read_profile__RevItems0__tmp_copy_9;
                  read_profile__N_7 = read_profile__N__tmp_copy_7;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
read_profile__read_n_things__ho3_5_p_0(
  MR_Integer read_profile__N_6,
  MR_Word * read_profile__MaybeItems_8)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__MaybeRevItems_10;

    {
      read_profile__read_n_things__ho6_6_p_0(read_profile__N_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__MaybeRevItems_10);
    }
    if (((MR_tag((MR_Word) read_profile__MaybeRevItems_10)) == (MR_mktag((MR_Integer) 1))))
      *read_profile__MaybeItems_8 = read_profile__MaybeRevItems_10;
    else
      {
        MR_Word read_profile__RevItems_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeRevItems_10, (MR_Integer) 0)));
        MR_Word read_profile__Items_12;

        {
          mercury__list__reverse_2_p_0((MR_Word) &read_profile_scalar_common_4[0], read_profile__RevItems_11, &read_profile__Items_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *read_profile__MaybeItems_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Items_12));
        }
      }
  }
}

static void MR_CALL 
read_profile__read_n_things__ho2_5_p_0(
  MR_Integer read_profile__N_6,
  MR_Word * read_profile__MaybeItems_8)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__MaybeRevItems_10;

    {
      read_profile__read_n_things__ho7_6_p_0(read_profile__N_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__MaybeRevItems_10);
    }
    if (((MR_tag((MR_Word) read_profile__MaybeRevItems_10)) == (MR_mktag((MR_Integer) 1))))
      *read_profile__MaybeItems_8 = read_profile__MaybeRevItems_10;
    else
      {
        MR_Word read_profile__RevItems_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeRevItems_10, (MR_Integer) 0)));
        MR_Word read_profile__Items_12;

        {
          mercury__list__reverse_2_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, read_profile__RevItems_11, &read_profile__Items_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *read_profile__MaybeItems_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Items_12));
        }
      }
  }
}

static MR_bool MR_CALL 
read_profile__IntroducedFrom__pred__read_n_byte_string__1315__1_2_p_0(
  MR_Integer read_profile__LambdaHeadVar__1_20,
  MR_Char * read_profile__LambdaHeadVar__2_21)
{
  {
    MR_bool read_profile__succeeded;

    {
      read_profile__succeeded = mercury__char__to_int_2_p_2(read_profile__LambdaHeadVar__2_21, read_profile__LambdaHeadVar__1_20);
    }
    return read_profile__succeeded;
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__895__1_3_p_0(
  MR_Word read_profile__LambdaHeadVar__1_49,
  MR_Word read_profile__LambdaHeadVar__2_50,
  MR_Word * read_profile__LambdaHeadVar__3_51)
{
  {
    MR_bool read_profile__succeeded;
    MR_Tuple read_profile__V_52_52;

    {
      read_profile__V_52_52 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), read_profile__V_52_52, 0) = ((MR_Box) (read_profile__LambdaHeadVar__1_49));
      MR_hl_field(MR_mktag(0), read_profile__V_52_52, 1) = ((MR_Box) (read_profile__LambdaHeadVar__2_50));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *read_profile__LambdaHeadVar__3_51 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_52_52));
    }
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_5_p_0(
  MR_Integer read_profile__N_16,
  MR_Word read_profile__HeadVar__2_48,
  MR_Word * read_profile__HeadVar__3_86)
{
  {
    MR_bool read_profile__succeeded;

    {
      read_profile__read_n_things_5_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, read_profile__N_16, read_profile__HeadVar__2_48, read_profile__HeadVar__3_86);
    }
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__885__1_4_p_0(
  MR_Integer read_profile__LambdaHeadVar__1_38,
  MR_Integer read_profile__LambdaHeadVar__2_39,
  MR_Integer read_profile__LambdaHeadVar__3_40,
  MR_Word * read_profile__LambdaHeadVar__4_41)
{
  {
    MR_bool read_profile__succeeded;
    MR_Tuple read_profile__V_42_42;

    {
      read_profile__V_42_42 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), read_profile__V_42_42, 0) = ((MR_Box) (read_profile__LambdaHeadVar__1_38));
      MR_hl_field(MR_mktag(0), read_profile__V_42_42, 1) = ((MR_Box) (read_profile__LambdaHeadVar__2_39));
      MR_hl_field(MR_mktag(0), read_profile__V_42_42, 2) = ((MR_Box) (read_profile__LambdaHeadVar__3_40));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *read_profile__LambdaHeadVar__4_41 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_42_42));
    }
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_p_0(
  MR_String read_profile__LambdaHeadVar__1_17,
  MR_Word read_profile__LambdaHeadVar__2_18,
  MR_Word * read_profile__LambdaHeadVar__3_19)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__RevGoalPath0_9;
    MR_Word read_profile__RevGoalPath_10;
    MR_Word read_profile__V_20_20;

    {
      mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(read_profile__LambdaHeadVar__1_17, &read_profile__RevGoalPath0_9);
    }
    {
      mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(read_profile__RevGoalPath0_9, &read_profile__RevGoalPath_10);
    }
    {
      read_profile__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), read_profile__V_20_20, 0) = ((MR_Box) (read_profile__RevGoalPath_10));
      MR_hl_field(MR_mktag(0), read_profile__V_20_20, 1) = ((MR_Box) (read_profile__LambdaHeadVar__2_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *read_profile__LambdaHeadVar__3_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_20_20));
    }
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__688__1_3_p_0(
  MR_Word read_profile__LambdaHeadVar__1_15,
  MR_Integer read_profile__LambdaHeadVar__2_16,
  MR_Word * read_profile__LambdaHeadVar__3_17)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__CPI_20;

    {
      read_profile__CPI_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), read_profile__CPI_20, 0) = ((MR_Box) (read_profile__LambdaHeadVar__1_15));
      MR_hl_field(MR_mktag(0), read_profile__CPI_20, 1) = ((MR_Box) (read_profile__LambdaHeadVar__2_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *read_profile__LambdaHeadVar__3_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__CPI_20));
    }
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_user_defined__663__1_7_p_0(
  MR_Word read_profile__PredOrFunc_5,
  MR_String read_profile__LambdaHeadVar__1_23,
  MR_String read_profile__LambdaHeadVar__2_24,
  MR_String read_profile__LambdaHeadVar__3_25,
  MR_Integer read_profile__LambdaHeadVar__4_26,
  MR_Integer read_profile__LambdaHeadVar__5_27,
  MR_Word * read_profile__LambdaHeadVar__6_28)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__V_29_29;

    {
      read_profile__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), read_profile__V_29_29, 0) = ((MR_Box) (read_profile__PredOrFunc_5));
      MR_hl_field(MR_mktag(0), read_profile__V_29_29, 1) = ((MR_Box) (read_profile__LambdaHeadVar__1_23));
      MR_hl_field(MR_mktag(0), read_profile__V_29_29, 2) = ((MR_Box) (read_profile__LambdaHeadVar__2_24));
      MR_hl_field(MR_mktag(0), read_profile__V_29_29, 3) = ((MR_Box) (read_profile__LambdaHeadVar__3_25));
      MR_hl_field(MR_mktag(0), read_profile__V_29_29, 4) = ((MR_Box) (read_profile__LambdaHeadVar__4_26));
      MR_hl_field(MR_mktag(0), read_profile__V_29_29, 5) = ((MR_Box) (read_profile__LambdaHeadVar__5_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *read_profile__LambdaHeadVar__6_28 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_29_29));
    }
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__644__1_7_p_0(
  MR_String read_profile__LambdaHeadVar__1_23,
  MR_String read_profile__LambdaHeadVar__2_24,
  MR_String read_profile__LambdaHeadVar__3_25,
  MR_String read_profile__LambdaHeadVar__4_26,
  MR_Integer read_profile__LambdaHeadVar__5_27,
  MR_Integer read_profile__LambdaHeadVar__6_28,
  MR_Word * read_profile__LambdaHeadVar__7_29)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__V_30_30;

    {
      read_profile__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), read_profile__V_30_30, 0) = ((MR_Box) (read_profile__LambdaHeadVar__1_23));
      MR_hl_field(MR_mktag(1), read_profile__V_30_30, 1) = ((MR_Box) (read_profile__LambdaHeadVar__2_24));
      MR_hl_field(MR_mktag(1), read_profile__V_30_30, 2) = ((MR_Box) (read_profile__LambdaHeadVar__3_25));
      MR_hl_field(MR_mktag(1), read_profile__V_30_30, 3) = ((MR_Box) (read_profile__LambdaHeadVar__4_26));
      MR_hl_field(MR_mktag(1), read_profile__V_30_30, 4) = ((MR_Box) (read_profile__LambdaHeadVar__5_27));
      MR_hl_field(MR_mktag(1), read_profile__V_30_30, 5) = ((MR_Box) (read_profile__LambdaHeadVar__6_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *read_profile__LambdaHeadVar__7_29 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_30_30));
    }
  }
}

static MR_ArrayPtr MR_CALL 
read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_f_0(
  MR_Word read_profile__HeadVar__1_73)
{
  {
    MR_bool read_profile__succeeded;
    MR_ArrayPtr read_profile__HeadVar__2_74;
    MR_ArrayPtr read_profile__conv0_HeadVar__2_74;

    {
      read_profile__conv0_HeadVar__2_74 = mercury__array__array_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__HeadVar__1_73);
    }
    read_profile__HeadVar__2_74 = (MR_ArrayPtr) read_profile__conv0_HeadVar__2_74;
    return read_profile__HeadVar__2_74;
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_static__471__1_7_p_0(
  MR_Integer read_profile__LambdaHeadVar__1_50,
  MR_Word read_profile__LambdaHeadVar__2_51,
  MR_String read_profile__LambdaHeadVar__3_52,
  MR_Integer read_profile__LambdaHeadVar__4_53,
  MR_Integer read_profile__LambdaHeadVar__5_54,
  MR_Integer read_profile__LambdaHeadVar__6_55,
  MR_Word * read_profile__LambdaHeadVar__7_56)
{
  {
    MR_bool read_profile__succeeded;
    MR_Tuple read_profile__V_57_57;

    {
      read_profile__V_57_57 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), read_profile__V_57_57, 0) = ((MR_Box) (read_profile__LambdaHeadVar__1_50));
      MR_hl_field(MR_mktag(0), read_profile__V_57_57, 1) = ((MR_Box) (read_profile__LambdaHeadVar__2_51));
      MR_hl_field(MR_mktag(0), read_profile__V_57_57, 2) = ((MR_Box) (read_profile__LambdaHeadVar__3_52));
      MR_hl_field(MR_mktag(0), read_profile__V_57_57, 3) = ((MR_Box) (read_profile__LambdaHeadVar__4_53));
      MR_hl_field(MR_mktag(0), read_profile__V_57_57, 4) = ((MR_Box) (read_profile__LambdaHeadVar__5_54));
      MR_hl_field(MR_mktag(0), read_profile__V_57_57, 5) = ((MR_Box) (read_profile__LambdaHeadVar__6_55));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *read_profile__LambdaHeadVar__7_56 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_57_57));
    }
  }
}

static void MR_CALL 
read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_p_0(
  MR_Integer read_profile__LambdaHeadVar__1_32,
  MR_Word read_profile__LambdaHeadVar__2_33,
  MR_Integer read_profile__LambdaHeadVar__3_34,
  MR_String read_profile__LambdaHeadVar__4_35,
  MR_Word * read_profile__LambdaHeadVar__5_36)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__RevGoalPath0_14;
    MR_Word read_profile__RevGoalPath_15;
    MR_Word read_profile__CallSiteStatic0_16;
    MR_Tuple read_profile__V_37_37;

    {
      mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(read_profile__LambdaHeadVar__4_35, &read_profile__RevGoalPath0_14);
    }
    {
      mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(read_profile__RevGoalPath0_14, &read_profile__RevGoalPath_15);
    }
    {
      read_profile__CallSiteStatic0_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), read_profile__CallSiteStatic0_16, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
      MR_hl_field(MR_mktag(0), read_profile__CallSiteStatic0_16, 1) = ((MR_Box) ((MR_Integer) -1));
      MR_hl_field(MR_mktag(0), read_profile__CallSiteStatic0_16, 2) = ((MR_Box) (read_profile__LambdaHeadVar__2_33));
      MR_hl_field(MR_mktag(0), read_profile__CallSiteStatic0_16, 3) = ((MR_Box) (read_profile__LambdaHeadVar__3_34));
      MR_hl_field(MR_mktag(0), read_profile__CallSiteStatic0_16, 4) = ((MR_Box) (read_profile__RevGoalPath_15));
    }
    {
      read_profile__V_37_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), read_profile__V_37_37, 0) = ((MR_Box) (read_profile__CallSiteStatic0_16));
      MR_hl_field(MR_mktag(0), read_profile__V_37_37, 1) = ((MR_Box) (read_profile__LambdaHeadVar__1_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *read_profile__LambdaHeadVar__5_36 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_37_37));
    }
  }
}

static void MR_CALL 
read_profile____Compare____ptr_kind_0_0(
  MR_Word * read_profile__HeadVar__1_1,
  MR_Word read_profile__HeadVar__2_2,
  MR_Word read_profile__HeadVar__3_3)
{
  {
    MR_bool read_profile__succeeded;
    MR_Integer read_profile__Cast_HeadVar1_4 = (MR_Integer) read_profile__HeadVar__2_2;
    MR_Integer read_profile__Cast_HeadVar2_5 = (MR_Integer) read_profile__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(read_profile__HeadVar__1_1, read_profile__Cast_HeadVar1_4, read_profile__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
read_profile____Unify____ptr_kind_0_0(
  MR_Word read_profile__HeadVar__2_1,
  MR_Word read_profile__HeadVar__2_2)
{
  {
    MR_bool read_profile__succeeded = (read_profile__HeadVar__2_1 == read_profile__HeadVar__2_2);

    return read_profile__succeeded;
  }
}

static void MR_CALL 
read_profile____Compare____next_deep_item_0_0(
  MR_Word * read_profile__HeadVar__1_1,
  MR_Word read_profile__HeadVar__2_2,
  MR_Word read_profile__HeadVar__3_3)
{
  {
    MR_bool read_profile__succeeded;
    MR_Integer read_profile__Cast_HeadVar1_4 = (MR_Integer) read_profile__HeadVar__2_2;
    MR_Integer read_profile__Cast_HeadVar2_5 = (MR_Integer) read_profile__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(read_profile__HeadVar__1_1, read_profile__Cast_HeadVar1_4, read_profile__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
read_profile____Unify____next_deep_item_0_0(
  MR_Word read_profile__HeadVar__2_1,
  MR_Word read_profile__HeadVar__2_2)
{
  {
    MR_bool read_profile__succeeded = (read_profile__HeadVar__2_1 == read_profile__HeadVar__2_2);

    return read_profile__succeeded;
  }
}

static void MR_CALL 
read_profile____Compare____maybe_init_deep_complete_0_0(
  MR_Word * read_profile__HeadVar__1_1,
  MR_Word read_profile__HeadVar__2_2,
  MR_Word read_profile__HeadVar__3_3)
{
  {
    MR_bool read_profile__succeeded;
    MR_Integer read_profile__CastX_22 = (MR_Integer) read_profile__HeadVar__2_2;
    MR_Integer read_profile__CastY_23 = (MR_Integer) read_profile__HeadVar__3_3;

    read_profile__succeeded = (read_profile__CastX_22 == read_profile__CastY_23);
    if (read_profile__succeeded)
      *read_profile__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) read_profile__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word read_profile__V_28_28 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__2_2), (MR_Integer) 0);

            switch (MR_tag((MR_Word) read_profile__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word read_profile__V_5_5 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__3_3), (MR_Integer) 0);

                  {
                    profile____Compare____initial_deep_0_0(read_profile__HeadVar__1_1, read_profile__V_28_28, read_profile__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *read_profile__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *read_profile__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word read_profile__V_29_29 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__2_2), (MR_Integer) 1);

            switch (MR_tag((MR_Word) read_profile__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *read_profile__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word read_profile__V_13_13 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__3_3), (MR_Integer) 1);

                  {
                    profile____Compare____initial_deep_0_0(read_profile__HeadVar__1_1, read_profile__V_29_29, read_profile__V_13_13);
                  }
                }
                break;
              case (MR_Integer) 2:
                *read_profile__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String read_profile__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(2), read_profile__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) read_profile__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *read_profile__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *read_profile__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String read_profile__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), read_profile__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(read_profile__HeadVar__1_1, read_profile__V_27_27, read_profile__V_21_21);
                  }
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
  MR_Word read_profile__HeadVar__1_1,
  MR_Word read_profile__HeadVar__2_2)
{
  {
    MR_bool read_profile__succeeded;
    MR_Integer read_profile__CastX_9 = (MR_Integer) read_profile__HeadVar__1_1;
    MR_Integer read_profile__CastY_10 = (MR_Integer) read_profile__HeadVar__2_2;

    read_profile__succeeded = (read_profile__CastX_9 == read_profile__CastY_10);
    if (read_profile__succeeded)
      read_profile__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) read_profile__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word read_profile__V_3_3 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__1_1), (MR_Integer) 0);
            MR_Word read_profile__V_4_4;

            read_profile__succeeded = ((MR_tag((MR_Word) read_profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (read_profile__succeeded)
              {
                read_profile__V_4_4 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__2_2), (MR_Integer) 0);
                {
                  read_profile__succeeded = profile____Unify____initial_deep_0_0(read_profile__V_3_3, read_profile__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word read_profile__V_5_5 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__1_1), (MR_Integer) 1);
            MR_Word read_profile__V_6_6;

            read_profile__succeeded = ((MR_tag((MR_Word) read_profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (read_profile__succeeded)
              {
                read_profile__V_6_6 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__2_2), (MR_Integer) 1);
                {
                  read_profile__succeeded = profile____Unify____initial_deep_0_0(read_profile__V_5_5, read_profile__V_6_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String read_profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), read_profile__HeadVar__1_1, (MR_Integer) 0)));
            MR_String read_profile__V_8_8;

            read_profile__succeeded = ((MR_tag((MR_Word) read_profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (read_profile__succeeded)
              {
                read_profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), read_profile__HeadVar__2_2, (MR_Integer) 0)));
                read_profile__succeeded = (strcmp(read_profile__V_7_7, read_profile__V_8_8) == 0);
              }
          }
          break;
      }
    return read_profile__succeeded;
  }
}

static void MR_CALL 
read_profile____Compare____maybe_error2_2_0(
  MR_Word read_profile__TypeInfo_for_T1_19,
  MR_Word read_profile__TypeInfo_for_T2_20,
  MR_Word * read_profile__HeadVar__1_1,
  MR_Word read_profile__HeadVar__2_2,
  MR_Word read_profile__HeadVar__3_3)
{
  {
    MR_bool read_profile__succeeded;
    MR_Integer read_profile__CastX_17 = (MR_Integer) read_profile__HeadVar__2_2;
    MR_Integer read_profile__CastY_18 = (MR_Integer) read_profile__HeadVar__3_3;

    read_profile__succeeded = (read_profile__CastX_17 == read_profile__CastY_18);
    if (read_profile__succeeded)
      *read_profile__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) read_profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String read_profile__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) read_profile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String read_profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(read_profile__HeadVar__1_1, read_profile__V_22_22, read_profile__V_16_16);
            }
          }
        else
          *read_profile__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Box read_profile__V_23_23 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__2_2, (MR_Integer) 1));
        MR_Box read_profile__V_24_24 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) read_profile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *read_profile__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Box read_profile__V_6_6 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__3_3, (MR_Integer) 0));
            MR_Box read_profile__V_7_7 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__3_3, (MR_Integer) 1));
            MR_Word read_profile__V_8_8;

            {
              mercury__builtin__compare_3_p_0(read_profile__TypeInfo_for_T1_19, &read_profile__V_8_8, read_profile__V_24_24, read_profile__V_6_6);
            }
            read_profile__succeeded = (read_profile__V_8_8 == (MR_Integer) 0);
            read_profile__succeeded = !(read_profile__succeeded);
            if (read_profile__succeeded)
              *read_profile__HeadVar__1_1 = read_profile__V_8_8;
            else
              {
                mercury__builtin__compare_3_p_0(read_profile__TypeInfo_for_T2_20, read_profile__HeadVar__1_1, read_profile__V_23_23, read_profile__V_7_7);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
read_profile____Unify____maybe_error2_2_0(
  MR_Word read_profile__TypeInfo_for_T1_11,
  MR_Word read_profile__TypeInfo_for_T2_12,
  MR_Word read_profile__HeadVar__1_1,
  MR_Word read_profile__HeadVar__2_2)
{
  {
    MR_bool read_profile__succeeded;
    MR_Integer read_profile__CastX_9 = (MR_Integer) read_profile__HeadVar__1_1;
    MR_Integer read_profile__CastY_10 = (MR_Integer) read_profile__HeadVar__2_2;

    read_profile__succeeded = (read_profile__CastX_9 == read_profile__CastY_10);
    if (read_profile__succeeded)
      read_profile__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) read_profile__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String read_profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 0)));
        MR_String read_profile__V_8_8;

        read_profile__succeeded = ((MR_tag((MR_Word) read_profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (read_profile__succeeded)
          {
            read_profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__2_2, (MR_Integer) 0)));
            read_profile__succeeded = (strcmp(read_profile__V_7_7, read_profile__V_8_8) == 0);
          }
      }
    else
      {
        MR_Box read_profile__V_3_3 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 0));
        MR_Box read_profile__V_4_4 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 1));
        MR_Box read_profile__V_5_5;
        MR_Box read_profile__V_6_6;

        read_profile__succeeded = ((MR_tag((MR_Word) read_profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (read_profile__succeeded)
          {
            read_profile__V_5_5 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__2_2, (MR_Integer) 0));
            read_profile__V_6_6 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__2_2, (MR_Integer) 1));
            {
              read_profile__succeeded = mercury__builtin__unify_2_p_0(read_profile__TypeInfo_for_T1_11, read_profile__V_3_3, read_profile__V_5_5);
            }
            if (read_profile__succeeded)
              {
                read_profile__succeeded = mercury__builtin__unify_2_p_0(read_profile__TypeInfo_for_T2_12, read_profile__V_4_4, read_profile__V_6_6);
              }
          }
      }
    return read_profile__succeeded;
  }
}

static MR_bool MR_CALL 
read_profile__is_next_item_token_2_p_0(
  MR_Integer read_profile__Int_1,
  MR_Word * read_profile__NextItem_2)
{
  {
    MR_bool read_profile__succeeded;

{
#define MR_PROC_LABEL read_profile__is_next_item_token_2_p_0

	MR_Integer Int;
	MR_Word NextItem;
	MR_bool SUCCESS_INDICATOR;

	Int =  read_profile__Int_1 ;
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
	 *read_profile__NextItem_2  = NextItem;
	}
read_profile__succeeded  = SUCCESS_INDICATOR;
}
    return read_profile__succeeded;
  }
}

static MR_Word MR_CALL 
read_profile__make_cssptr_1_f_0(
  MR_Integer read_profile__CSSI_3)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__HeadVar__2_2 = (MR_Word) read_profile__CSSI_3;

    return read_profile__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
read_profile__make_csdptr_1_f_0(
  MR_Integer read_profile__CSDI_3)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__HeadVar__2_2 = (MR_Word) read_profile__CSDI_3;

    return read_profile__HeadVar__2_2;
  }
}

static void MR_CALL 
read_profile__deep_insert_4_p_0(
  MR_Word read_profile__TypeInfo_for_T_12,
  MR_ArrayPtr read_profile__A0_5,
  MR_Integer read_profile__Ind_6,
  MR_Box read_profile__Item_7,
  MR_ArrayPtr * read_profile__A_8)
{
  {
    MR_bool read_profile__succeeded;
    MR_Integer read_profile__Max_9;

    {
      mercury__array__max_2_p_0(read_profile__TypeInfo_for_T_12, read_profile__A0_5, &read_profile__Max_9);
    }
    read_profile__succeeded = (read_profile__Ind_6 > read_profile__Max_9);
    if (read_profile__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "deep_insert: array bounds violation");
          return;
        }
      }
    else
      {
        MR_Word read_profile__TypeInfo_14_14;
        MR_ArrayPtr read_profile__V_11_11;
        MR_Box read_profile__conv0_V_11_11;

        {
          read_profile__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), read_profile__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
          MR_hl_field(MR_mktag(0), read_profile__TypeInfo_14_14, 1) = ((MR_Box) (read_profile__TypeInfo_for_T_12));
        }
        {
          read_profile__conv0_V_11_11 = array_util__u_1_f_0(read_profile__TypeInfo_14_14, ((MR_Box) (read_profile__A0_5)));
        }
        read_profile__V_11_11 = ((MR_ArrayPtr) read_profile__conv0_V_11_11);
        {
          mercury__array__set_4_p_0(read_profile__TypeInfo_for_T_12, read_profile__Ind_6, read_profile__Item_7, read_profile__V_11_11, read_profile__A_8);
        }
      }
  }
}

static void MR_CALL 
read_profile__read_deep_byte_3_p_0(
  MR_Word * read_profile__MaybeByte_4)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__MaybeRawByte_6;

    {
      mercury__io__read_byte_3_p_0(&read_profile__MaybeRawByte_6);
    }
    switch (MR_tag((MR_Word) read_profile__MaybeRawByte_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *read_profile__MaybeByte_4 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_9[8]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer read_profile__Byte_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__MaybeRawByte_6, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *read_profile__MaybeByte_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Byte_7));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word read_profile__Error_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), read_profile__MaybeRawByte_6, (MR_Integer) 0)));
          MR_String read_profile__Msg_9;

          {
            mercury__io__error_message_2_p_0(read_profile__Error_8, &read_profile__Msg_9);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *read_profile__MaybeByte_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Msg_9));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
read_profile__read_n_bytes_acc_5_p_0(
  MR_Integer read_profile__N_6,
  MR_Word read_profile__RevBytes0_7,
  MR_Word * read_profile__MaybeNBytes_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool read_profile__succeeded = (read_profile__N_6 <= (MR_Integer) 0);

        if (read_profile__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *read_profile__MaybeNBytes_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__RevBytes0_7));
          }
        else
          {
            MR_Word read_profile__MaybeByte_10;

            {
              read_profile__read_deep_byte_3_p_0(&read_profile__MaybeByte_10);
            }
            if (((MR_tag((MR_Word) read_profile__MaybeByte_10)) == (MR_mktag((MR_Integer) 1))))
              *read_profile__MaybeNBytes_8 = (MR_Word) read_profile__MaybeByte_10;
            else
              {
                MR_Integer read_profile__Byte_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeByte_10, (MR_Integer) 0)));
                MR_Integer read_profile__V_17_17 = (read_profile__N_6 - (MR_Integer) 1);
                MR_Word read_profile__V_18_18;

                {
                  read_profile__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), read_profile__V_18_18, 0) = ((MR_Box) (read_profile__Byte_11));
                  MR_hl_field(MR_mktag(1), read_profile__V_18_18, 1) = ((MR_Box) (read_profile__RevBytes0_7));
                }
                /* direct tailcall eliminated */
                {
                  MR_Integer read_profile__N__tmp_copy_6 = read_profile__V_17_17;
                  MR_Word read_profile__RevBytes0__tmp_copy_7 = read_profile__V_18_18;

                  read_profile__RevBytes0_7 = read_profile__RevBytes0__tmp_copy_7;
                  read_profile__N_6 = read_profile__N__tmp_copy_6;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
read_profile__read_fixed_size_int_acc_6_p_0(
  MR_Integer read_profile__BytesLeft_7,
  MR_Integer read_profile__Num0_8,
  MR_Integer read_profile__ShiftBy_9,
  MR_Word * read_profile__MaybeInt_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool read_profile__succeeded = (read_profile__BytesLeft_7 <= (MR_Integer) 0);

        if (read_profile__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *read_profile__MaybeInt_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Num0_8));
          }
        else
          {
            MR_Word read_profile__MaybeByte_12;

            {
              read_profile__read_deep_byte_3_p_0(&read_profile__MaybeByte_12);
            }
            if (((MR_tag((MR_Word) read_profile__MaybeByte_12)) == (MR_mktag((MR_Integer) 1))))
              *read_profile__MaybeInt_10 = read_profile__MaybeByte_12;
            else
              {
                MR_Integer read_profile__Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeByte_12, (MR_Integer) 0)));
                MR_Integer read_profile__Num1_14;
                MR_Integer read_profile__V_20_20;
                MR_Integer read_profile__V_21_21;
                MR_Integer read_profile__V_22_22;

                {
                  read_profile__V_20_20 = mercury__int__f_60_60_2_f_0(read_profile__Byte_13, read_profile__ShiftBy_9);
                }
                read_profile__Num1_14 = (read_profile__Num0_8 | read_profile__V_20_20);
                read_profile__V_21_21 = (read_profile__BytesLeft_7 - (MR_Integer) 1);
                read_profile__V_22_22 = (read_profile__ShiftBy_9 + (MR_Integer) 8);
                /* direct tailcall eliminated */
                {
                  MR_Integer read_profile__BytesLeft__tmp_copy_7 = read_profile__V_21_21;
                  MR_Integer read_profile__Num0__tmp_copy_8 = read_profile__Num1_14;
                  MR_Integer read_profile__ShiftBy__tmp_copy_9 = read_profile__V_22_22;

                  read_profile__ShiftBy_9 = read_profile__ShiftBy__tmp_copy_9;
                  read_profile__Num0_8 = read_profile__Num0__tmp_copy_8;
                  read_profile__BytesLeft_7 = read_profile__BytesLeft__tmp_copy_7;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
read_profile__read_fixed_size_int_3_p_0(
  MR_Word * read_profile__MaybeInt_4)
{
  {
    MR_bool read_profile__succeeded;

    {
      read_profile__read_fixed_size_int_acc_6_p_0((MR_Integer) 8, (MR_Integer) 0, (MR_Integer) 0, read_profile__MaybeInt_4);
    }
  }
}

static void MR_CALL 
read_profile__read_num_acc_4_p_0(
  MR_Integer read_profile__Num0_5,
  MR_Word * read_profile__MaybeNum_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool read_profile__succeeded;
        MR_Word read_profile__MaybeByte_8;

        {
          mercury__io__read_byte_3_p_0(&read_profile__MaybeByte_8);
        }
        switch (MR_tag((MR_Word) read_profile__MaybeByte_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *read_profile__MaybeNum_6 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_9[8]);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer read_profile__Byte_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__MaybeByte_8, (MR_Integer) 0)));
              MR_Integer read_profile__Num1_10;
              MR_Integer read_profile__V_17_17;
              MR_Integer read_profile__V_19_19;
              MR_Integer read_profile__V_21_21;

              {
                read_profile__V_17_17 = mercury__int__f_60_60_2_f_0(read_profile__Num0_5, (MR_Integer) 7);
              }
              read_profile__V_19_19 = (read_profile__Byte_9 & (MR_Integer) 127);
              read_profile__Num1_10 = (read_profile__V_17_17 | read_profile__V_19_19);
              read_profile__V_21_21 = (read_profile__Byte_9 & (MR_Integer) 128);
              read_profile__succeeded = (read_profile__V_21_21 == (MR_Integer) 0);
              read_profile__succeeded = !(read_profile__succeeded);
              if (read_profile__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Integer read_profile__Num0__tmp_copy_5 = read_profile__Num1_10;

                    read_profile__Num0_5 = read_profile__Num0__tmp_copy_5;
                  }
                  continue;
                }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *read_profile__MaybeNum_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Num1_10));
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word read_profile__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), read_profile__MaybeByte_8, (MR_Integer) 0)));
              MR_String read_profile__Msg_12;

              {
                mercury__io__error_message_2_p_0(read_profile__Error_11, &read_profile__Msg_12);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *read_profile__MaybeNum_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Msg_12));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
read_profile__read_num_3_p_0(
  MR_Word * read_profile__MaybeNum_4)
{
  {
    MR_bool read_profile__succeeded;

    {
      read_profile__read_num_acc_4_p_0((MR_Integer) 0, read_profile__MaybeNum_4);
    }
  }
}

static void MR_CALL 
read_profile__num_to_cp_type_2_p_0(
  MR_Integer read_profile__Int_1,
  MR_Word * read_profile__CPType_2)
{
  {
    MR_bool read_profile__succeeded;

{
#define MR_PROC_LABEL read_profile__num_to_cp_type_2_p_0

	MR_Integer Int;
	MR_Word CPType;

	Int =  read_profile__Int_1 ;
		{

    CPType = Int;


		;}
#undef MR_PROC_LABEL
	 *read_profile__CPType_2  = CPType;
}
  }
}

static void MR_CALL 
read_profile__read_cp_type_3_p_0(
  MR_Word * read_profile__MaybeCPType_4)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__MaybeNum_6;

    {
      read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeNum_6);
    }
    if (((MR_tag((MR_Word) read_profile__MaybeNum_6)) == (MR_mktag((MR_Integer) 1))))
      *read_profile__MaybeCPType_4 = (MR_Word) read_profile__MaybeNum_6;
    else
      {
        MR_Integer read_profile__Num_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeNum_6, (MR_Integer) 0)));
        MR_Word read_profile__CPType_8;

{
#define MR_PROC_LABEL read_profile__read_cp_type_3_p_0

	MR_Integer Int;
	MR_Word CPType;

	Int =  read_profile__Num_7 ;
		{

    CPType = Int;


		;}
#undef MR_PROC_LABEL
	 read_profile__CPType_8  = CPType;
}
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *read_profile__MaybeCPType_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__CPType_8));
        }
      }
  }
}

static void MR_CALL 
read_profile__read_ptr_4_p_0(
  MR_Word read_profile___Kind_5,
  MR_Word * read_profile__MaybePtr_6)
{
  {
    MR_bool read_profile__succeeded;

    {
      read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_p_0(read_profile__MaybePtr_6);
    }
  }
}

static MR_bool MR_CALL 
read_profile__read_string_3_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box * read_profile__wrapper_arg_2)
{
  {
    MR_bool read_profile__succeeded;
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Char read_profile__conv0_LambdaHeadVar__2_21;

    {
      read_profile__succeeded = read_profile__IntroducedFrom__pred__read_n_byte_string__1315__1_2_p_0(((MR_Integer) read_profile__wrapper_arg_1), &read_profile__conv0_LambdaHeadVar__2_21);
    }
    if (read_profile__succeeded)
      {
        *read_profile__wrapper_arg_2 = ((MR_Box) (MR_Word) (read_profile__conv0_LambdaHeadVar__2_21));
        read_profile__succeeded = MR_TRUE;
      }
    return read_profile__succeeded;
  }
}

static void MR_CALL 
read_profile__read_string_3_p_0(
  MR_Word * read_profile__MaybeStr_4)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__MaybeNum_6;

    {
      read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeNum_6);
    }
    if (((MR_tag((MR_Word) read_profile__MaybeNum_6)) == (MR_mktag((MR_Integer) 1))))
      *read_profile__MaybeStr_4 = (MR_Word) read_profile__MaybeNum_6;
    else
      {
        MR_Integer read_profile__Length_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeNum_6, (MR_Integer) 0)));

        read_profile__succeeded = (read_profile__Length_7 == (MR_Integer) 0);
        if (read_profile__succeeded)
          {
            *read_profile__MaybeStr_4 = (MR_Word) &read_profile_scalar_common_9[9];
          }
        else
          {
            MR_Word read_profile__MaybeRevNBytes_62;

            {
              read_profile__read_n_bytes_acc_5_p_0(read_profile__Length_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__MaybeRevNBytes_62);
            }
            if (((MR_tag((MR_Word) read_profile__MaybeRevNBytes_62)) == (MR_mktag((MR_Integer) 1))))
              *read_profile__MaybeStr_4 = (MR_Word) read_profile__MaybeRevNBytes_62;
            else
              {
                MR_Word read_profile__Bytes_34;
                MR_Word read_profile__RevBytes_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeRevNBytes_62, (MR_Integer) 0)));
                MR_Word read_profile__Chars_37;

                {
                  mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__RevBytes_63, &read_profile__Bytes_34);
                }
                {
                  read_profile__succeeded = mercury__list__map_3_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &read_profile_scalar_common_4[49], read_profile__Bytes_34, &read_profile__Chars_37);
                }
                if (read_profile__succeeded)
                  {
                    MR_String read_profile__Str_38;

                    {
                      mercury__string__from_char_list_2_p_0(read_profile__Chars_37, &read_profile__Str_38);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *read_profile__MaybeStr_4 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Str_38));
                    }
                  }
                else
                  {
                    *read_profile__MaybeStr_4 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_9[10]);
                  }
              }
          }
      }
  }
}

static void MR_CALL 
read_profile__read_line_acc_5_p_0(
  MR_Integer read_profile__Limit_6,
  MR_Word read_profile__STATE_VARIABLE_RevChars_0_17,
  MR_Word * read_profile__MaybeLine_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool read_profile__succeeded = (read_profile__Limit_6 > (MR_Integer) 0);

        if (read_profile__succeeded)
          {
            MR_Word read_profile__MaybeByte_10;

            {
              mercury__io__read_byte_3_p_0(&read_profile__MaybeByte_10);
            }
            switch (MR_tag((MR_Word) read_profile__MaybeByte_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *read_profile__MaybeLine_8 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_9[8]);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer read_profile__Byte_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__MaybeByte_10, (MR_Integer) 0)));
                  MR_Char read_profile__Char_12;

                  {
                    read_profile__succeeded = mercury__char__to_int_2_p_2(&read_profile__Char_12, read_profile__Byte_11);
                  }
                  if (read_profile__succeeded)
                    {
                      MR_Word read_profile__STATE_VARIABLE_RevChars_23_23;

                      {
                        read_profile__STATE_VARIABLE_RevChars_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), read_profile__STATE_VARIABLE_RevChars_23_23, 0) = ((MR_Box) (MR_Word) (read_profile__Char_12));
                        MR_hl_field(MR_mktag(1), read_profile__STATE_VARIABLE_RevChars_23_23, 1) = ((MR_Box) (read_profile__STATE_VARIABLE_RevChars_0_17));
                      }
                      read_profile__succeeded = (read_profile__Char_12 == (MR_Char) 10);
                      if (read_profile__succeeded)
                        {
                          MR_Word read_profile__Chars_13;
                          MR_String read_profile__Str_14;

                          {
                            mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, read_profile__STATE_VARIABLE_RevChars_23_23, &read_profile__Chars_13);
                          }
                          {
                            mercury__string__from_char_list_2_p_0(read_profile__Chars_13, &read_profile__Str_14);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            *read_profile__MaybeLine_8 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Str_14));
                          }
                        }
                      else
                        {
                          MR_Integer read_profile__V_24_24 = (read_profile__Limit_6 - (MR_Integer) 1);

                          /* direct tailcall eliminated */
                          {
                            MR_Integer read_profile__Limit__tmp_copy_6 = read_profile__V_24_24;
                            MR_Word read_profile__STATE_VARIABLE_RevChars_0__tmp_copy_17 = read_profile__STATE_VARIABLE_RevChars_23_23;

                            read_profile__STATE_VARIABLE_RevChars_0_17 = read_profile__STATE_VARIABLE_RevChars_0__tmp_copy_17;
                            read_profile__Limit_6 = read_profile__Limit__tmp_copy_6;
                          }
                          continue;
                        }
                    }
                  else
                    {
                      *read_profile__MaybeLine_8 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_9[8]);
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word read_profile__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), read_profile__MaybeByte_10, (MR_Integer) 0)));
                  MR_String read_profile__Msg_16;

                  {
                    mercury__io__error_message_2_p_0(read_profile__Error_15, &read_profile__Msg_16);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *read_profile__MaybeLine_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Msg_16));
                  }
                }
                break;
            }
          }
        else
          {
            MR_Word read_profile__Chars_35;
            MR_String read_profile__Str_36;

            {
              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, read_profile__STATE_VARIABLE_RevChars_0_17, &read_profile__Chars_35);
            }
            {
              mercury__string__from_char_list_2_p_0(read_profile__Chars_35, &read_profile__Str_36);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *read_profile__MaybeLine_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Str_36));
            }
          }
      }
      break;
    }
}

static void MR_CALL 
read_profile__read_n_things_5_p_0(
  MR_Word read_profile__TypeInfo_for_T_18,
  MR_Integer read_profile__N_6,
  MR_Word read_profile__ItemReader_7,
  MR_Word * read_profile__MaybeItems_8)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__MaybeRevItems_10;

    {
      read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_p_0(read_profile__N_6, read_profile__ItemReader_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__MaybeRevItems_10);
    }
    if (((MR_tag((MR_Word) read_profile__MaybeRevItems_10)) == (MR_mktag((MR_Integer) 1))))
      *read_profile__MaybeItems_8 = read_profile__MaybeRevItems_10;
    else
      {
        MR_Word read_profile__RevItems_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeRevItems_10, (MR_Integer) 0)));
        MR_Word read_profile__Items_12;

        {
          mercury__list__reverse_2_p_0(read_profile__TypeInfo_for_T_18, read_profile__RevItems_11, &read_profile__Items_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *read_profile__MaybeItems_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Items_12));
        }
      }
  }
}

static void MR_CALL 
read_profile__read_call_site_kind_and_callee_3_p_0(
  MR_Word * read_profile__MaybeKindAndCallee_4)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__MaybeByte_6;

    {
      read_profile__read_deep_byte_3_p_0(&read_profile__MaybeByte_6);
    }
    if (((MR_tag((MR_Word) read_profile__MaybeByte_6)) == (MR_mktag((MR_Integer) 1))))
      *read_profile__MaybeKindAndCallee_4 = (MR_Word) read_profile__MaybeByte_6;
    else
      {
        MR_Integer read_profile__Byte_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeByte_6, (MR_Integer) 0)));
        MR_Word read_profile__CallSiteKind_8;

        {
          read_profile__succeeded = profile__is_call_site_kind_2_p_0(read_profile__Byte_7, &read_profile__CallSiteKind_8);
        }
        if (read_profile__succeeded)
          switch (read_profile__CallSiteKind_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case ((int) MR_callsite_callback):
              {
                *read_profile__MaybeKindAndCallee_4 = (MR_Word) &read_profile_scalar_common_9[4];
              }
              break;
            case ((int) MR_callsite_higher_order_call):
              {
                *read_profile__MaybeKindAndCallee_4 = (MR_Word) &read_profile_scalar_common_9[5];
              }
              break;
            case ((int) MR_callsite_method_call):
              {
                *read_profile__MaybeKindAndCallee_4 = (MR_Word) &read_profile_scalar_common_9[6];
              }
              break;
            case ((int) MR_callsite_normal_call):
              {
                MR_Word read_profile__MaybeCSS_9;

                {
                  read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeCSS_9);
                }
                if (((MR_tag((MR_Word) read_profile__MaybeCSS_9)) == (MR_mktag((MR_Integer) 1))))
                  *read_profile__MaybeKindAndCallee_4 = (MR_Word) read_profile__MaybeCSS_9;
                else
                  {
                    MR_Integer read_profile__CalleeProcStatic_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSS_9, (MR_Integer) 0)));
                    MR_Word read_profile__MaybeTypeSubst_11;

                    {
                      read_profile__read_string_3_p_0(&read_profile__MaybeTypeSubst_11);
                    }
                    if (((MR_tag((MR_Word) read_profile__MaybeTypeSubst_11)) == (MR_mktag((MR_Integer) 1))))
                      *read_profile__MaybeKindAndCallee_4 = (MR_Word) read_profile__MaybeTypeSubst_11;
                    else
                      {
                        MR_String read_profile__TypeSubst_12 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__MaybeTypeSubst_11, (MR_Integer) 0)));
                        MR_Word read_profile__V_25_25;
                        MR_Word read_profile__V_26_26 = (MR_Word) read_profile__CalleeProcStatic_10;

                        {
                          read_profile__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), read_profile__V_25_25, 0) = ((MR_Box) (read_profile__V_26_26));
                          MR_hl_field(MR_mktag(1), read_profile__V_25_25, 1) = ((MR_Box) (read_profile__TypeSubst_12));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *read_profile__MaybeKindAndCallee_4 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_25_25));
                        }
                      }
                  }
              }
              break;
            case ((int) MR_callsite_special_call):
              {
                *read_profile__MaybeKindAndCallee_4 = (MR_Word) &read_profile_scalar_common_9[7];
              }
              break;
          }
        else
          {
            MR_String read_profile__Msg_14;
            MR_String read_profile__V_40_40;

            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &read_profile_scalar_common_9[2], read_profile__Byte_7, &read_profile__V_40_40);
            }
            {
              read_profile__Msg_14 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected call_site_kind ", read_profile__V_40_40);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *read_profile__MaybeKindAndCallee_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Msg_14));
            }
          }
      }
  }
}

static void MR_CALL 
read_profile__read_call_site_kind_3_p_0(
  MR_Word * read_profile__MaybeKind_4)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__MaybeByte_6;

    {
      read_profile__read_deep_byte_3_p_0(&read_profile__MaybeByte_6);
    }
    if (((MR_tag((MR_Word) read_profile__MaybeByte_6)) == (MR_mktag((MR_Integer) 1))))
      *read_profile__MaybeKind_4 = (MR_Word) read_profile__MaybeByte_6;
    else
      {
        MR_Integer read_profile__Byte_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeByte_6, (MR_Integer) 0)));
        MR_Word read_profile__CallSiteKind_8;

        {
          read_profile__succeeded = profile__is_call_site_kind_2_p_0(read_profile__Byte_7, &read_profile__CallSiteKind_8);
        }
        if (read_profile__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *read_profile__MaybeKind_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__CallSiteKind_8));
          }
        else
          {
            MR_String read_profile__Msg_9;
            MR_String read_profile__V_26_26;

            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &read_profile_scalar_common_9[2], read_profile__Byte_7, &read_profile__V_26_26);
            }
            {
              read_profile__Msg_9 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected call_site_kind ", read_profile__V_26_26);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *read_profile__MaybeKind_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Msg_9));
            }
          }
      }
  }
}

static void MR_CALL 
read_profile__read_multi_call_site_csdis_2_4_p_0(
  MR_Word read_profile__CSDIs0_5,
  MR_Word * read_profile__MaybeCSDIs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool read_profile__succeeded;
        MR_Word read_profile__MaybeByte_9;

        {
          read_profile__read_deep_byte_3_p_0(&read_profile__MaybeByte_9);
        }
        if (((MR_tag((MR_Word) read_profile__MaybeByte_9)) == (MR_mktag((MR_Integer) 1))))
          *read_profile__MaybeCSDIs_6 = (MR_Word) read_profile__MaybeByte_9;
        else
          {
            MR_Integer read_profile__Byte_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeByte_9, (MR_Integer) 0)));

            read_profile__succeeded = (read_profile__Byte_10 == (MR_Integer) 0);
            if (read_profile__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *read_profile__MaybeCSDIs_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__CSDIs0_5));
              }
            else
              {
                MR_Word read_profile__MaybeCSDI_11;

                {
                  mercury__io__putback_byte_3_p_0(read_profile__Byte_10);
                }
                {
                  read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeCSDI_11);
                }
                if (((MR_tag((MR_Word) read_profile__MaybeCSDI_11)) == (MR_mktag((MR_Integer) 1))))
                  *read_profile__MaybeCSDIs_6 = (MR_Word) read_profile__MaybeCSDI_11;
                else
                  {
                    MR_Integer read_profile__CSDI_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSDI_11, (MR_Integer) 0)));
                    MR_Word read_profile__V_24_24;

                    {
                      read_profile__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), read_profile__V_24_24, 0) = ((MR_Box) (read_profile__CSDI_12));
                      MR_hl_field(MR_mktag(1), read_profile__V_24_24, 1) = ((MR_Box) (read_profile__CSDIs0_5));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word read_profile__CSDIs0__tmp_copy_5 = read_profile__V_24_24;

                      read_profile__CSDIs0_5 = read_profile__CSDIs0__tmp_copy_5;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
read_profile__read_multi_call_site_csdis_3_p_0(
  MR_Word * read_profile__MaybeCSDIs_4)
{
  {
    MR_bool read_profile__succeeded;

    {
      read_profile__read_multi_call_site_csdis_2_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), read_profile__MaybeCSDIs_4);
    }
  }
}

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_4(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1)
{
  {
    MR_Box read_profile__wrapper_arg_2;
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv6_HeadVar__2_2;

    {
      read_profile__conv6_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) read_profile__wrapper_arg_1));
    }
    read_profile__wrapper_arg_2 = ((MR_Box) (read_profile__conv6_HeadVar__2_2));
    return read_profile__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1)
{
  {
    MR_Box read_profile__wrapper_arg_2;
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv4_HeadVar__2_2;

    {
      read_profile__conv4_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) read_profile__wrapper_arg_1));
    }
    read_profile__wrapper_arg_2 = ((MR_Box) (read_profile__conv4_HeadVar__2_2));
    return read_profile__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1)
{
  {
    MR_Box read_profile__wrapper_arg_2;
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv2_HeadVar__2_2;

    {
      read_profile__conv2_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) read_profile__wrapper_arg_1));
    }
    read_profile__wrapper_arg_2 = ((MR_Box) (read_profile__conv2_HeadVar__2_2));
    return read_profile__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1)
{
  {
    MR_Box read_profile__wrapper_arg_2;
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv0_HeadVar__2_2;

    {
      read_profile__conv0_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) read_profile__wrapper_arg_1));
    }
    read_profile__wrapper_arg_2 = ((MR_Box) (read_profile__conv0_HeadVar__2_2));
    return read_profile__wrapper_arg_2;
  }
}

static void MR_CALL 
read_profile__read_call_site_slot_3_p_0(
  MR_Word * read_profile__MaybeSlot_4)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__MaybeKind_7;

    {
      read_profile__read_call_site_kind_3_p_0(&read_profile__MaybeKind_7);
    }
    if (((MR_tag((MR_Word) read_profile__MaybeKind_7)) == (MR_mktag((MR_Integer) 1))))
      *read_profile__MaybeSlot_4 = (MR_Word) read_profile__MaybeKind_7;
    else
      {
        MR_Word read_profile__Kind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeKind_7, (MR_Integer) 0)));

        switch (read_profile__Kind_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case ((int) MR_callsite_callback):
            {
              MR_Word read_profile__MaybeCSDIs_14;

              {
                read_profile__read_multi_call_site_csdis_3_p_0(&read_profile__MaybeCSDIs_14);
              }
              if (((MR_tag((MR_Word) read_profile__MaybeCSDIs_14)) == (MR_mktag((MR_Integer) 1))))
                *read_profile__MaybeSlot_4 = (MR_Word) read_profile__MaybeCSDIs_14;
              else
                {
                  MR_Word read_profile__TypeCtorInfo_47_47 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
                  MR_Word read_profile__CSDIs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSDIs_14, (MR_Integer) 0)));
                  MR_Word read_profile__CSDPtrs_16;
                  MR_Word read_profile__V_25_25;
                  MR_ArrayPtr read_profile__V_26_26;
                  MR_ArrayPtr read_profile__conv1_V_26_26;

                  {
                    read_profile__CSDPtrs_16 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__TypeCtorInfo_47_47, (MR_Word) &read_profile_scalar_common_4[45], read_profile__CSDIs_15);
                  }
                  {
                    read_profile__conv1_V_26_26 = mercury__array__array_1_f_0(read_profile__TypeCtorInfo_47_47, read_profile__CSDPtrs_16);
                  }
                  read_profile__V_26_26 = (MR_ArrayPtr) read_profile__conv1_V_26_26;
                  {
                    read_profile__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), read_profile__V_25_25, 0) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(1), read_profile__V_25_25, 1) = ((MR_Box) (read_profile__V_26_26));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *read_profile__MaybeSlot_4 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_25_25));
                  }
                }
            }
            break;
          case ((int) MR_callsite_higher_order_call):
            {
              MR_Word read_profile__MaybeCSDIs_98;

              {
                read_profile__read_multi_call_site_csdis_3_p_0(&read_profile__MaybeCSDIs_98);
              }
              if (((MR_tag((MR_Word) read_profile__MaybeCSDIs_98)) == (MR_mktag((MR_Integer) 1))))
                *read_profile__MaybeSlot_4 = (MR_Word) read_profile__MaybeCSDIs_98;
              else
                {
                  MR_Word read_profile__TypeCtorInfo_47_80 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
                  MR_Word read_profile__CSDIs_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSDIs_98, (MR_Integer) 0)));
                  MR_Word read_profile__CSDPtrs_69;
                  MR_Word read_profile__V_71_71;
                  MR_ArrayPtr read_profile__V_72_72;
                  MR_ArrayPtr read_profile__conv3_V_72_72;

                  {
                    read_profile__CSDPtrs_69 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__TypeCtorInfo_47_80, (MR_Word) &read_profile_scalar_common_4[46], read_profile__CSDIs_68);
                  }
                  {
                    read_profile__conv3_V_72_72 = mercury__array__array_1_f_0(read_profile__TypeCtorInfo_47_80, read_profile__CSDPtrs_69);
                  }
                  read_profile__V_72_72 = (MR_ArrayPtr) read_profile__conv3_V_72_72;
                  {
                    read_profile__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), read_profile__V_71_71, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), read_profile__V_71_71, 1) = ((MR_Box) (read_profile__V_72_72));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *read_profile__MaybeSlot_4 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_71_71));
                  }
                }
            }
            break;
          case ((int) MR_callsite_method_call):
            {
              MR_Word read_profile__MaybeCSDIs_161;

              {
                read_profile__read_multi_call_site_csdis_3_p_0(&read_profile__MaybeCSDIs_161);
              }
              if (((MR_tag((MR_Word) read_profile__MaybeCSDIs_161)) == (MR_mktag((MR_Integer) 1))))
                *read_profile__MaybeSlot_4 = (MR_Word) read_profile__MaybeCSDIs_161;
              else
                {
                  MR_Word read_profile__TypeCtorInfo_47_143 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
                  MR_Word read_profile__CSDIs_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSDIs_161, (MR_Integer) 0)));
                  MR_Word read_profile__CSDPtrs_132;
                  MR_Word read_profile__V_134_134;
                  MR_ArrayPtr read_profile__V_135_135;
                  MR_ArrayPtr read_profile__conv5_V_135_135;

                  {
                    read_profile__CSDPtrs_132 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__TypeCtorInfo_47_143, (MR_Word) &read_profile_scalar_common_4[47], read_profile__CSDIs_131);
                  }
                  {
                    read_profile__conv5_V_135_135 = mercury__array__array_1_f_0(read_profile__TypeCtorInfo_47_143, read_profile__CSDPtrs_132);
                  }
                  read_profile__V_135_135 = (MR_ArrayPtr) read_profile__conv5_V_135_135;
                  {
                    read_profile__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), read_profile__V_134_134, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), read_profile__V_134_134, 1) = ((MR_Box) (read_profile__V_135_135));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *read_profile__MaybeSlot_4 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_134_134));
                  }
                }
            }
            break;
          case ((int) MR_callsite_normal_call):
            {
              MR_Word read_profile__MaybeCSDI_9;

              {
                read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_p_0(&read_profile__MaybeCSDI_9);
              }
              if (((MR_tag((MR_Word) read_profile__MaybeCSDI_9)) == (MR_mktag((MR_Integer) 1))))
                *read_profile__MaybeSlot_4 = (MR_Word) read_profile__MaybeCSDI_9;
              else
                {
                  MR_Integer read_profile__CSDI_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSDI_9, (MR_Integer) 0)));
                  MR_Word read_profile__CSDPtr_11;
                  MR_Word read_profile__V_35_35;

                  {
                    read_profile__CSDPtr_11 = read_profile__make_csdptr_1_f_0(read_profile__CSDI_10);
                  }
                  {
                    read_profile__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), read_profile__V_35_35, 0) = ((MR_Box) (read_profile__CSDPtr_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *read_profile__MaybeSlot_4 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_35_35));
                  }
                }
            }
            break;
          case ((int) MR_callsite_special_call):
            {
              MR_Word read_profile__MaybeCSDIs_224;

              {
                read_profile__read_multi_call_site_csdis_3_p_0(&read_profile__MaybeCSDIs_224);
              }
              if (((MR_tag((MR_Word) read_profile__MaybeCSDIs_224)) == (MR_mktag((MR_Integer) 1))))
                *read_profile__MaybeSlot_4 = (MR_Word) read_profile__MaybeCSDIs_224;
              else
                {
                  MR_Word read_profile__TypeCtorInfo_47_206 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
                  MR_Word read_profile__CSDIs_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSDIs_224, (MR_Integer) 0)));
                  MR_Word read_profile__CSDPtrs_195;
                  MR_Word read_profile__V_197_197;
                  MR_ArrayPtr read_profile__V_198_198;
                  MR_ArrayPtr read_profile__conv7_V_198_198;

                  {
                    read_profile__CSDPtrs_195 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__TypeCtorInfo_47_206, (MR_Word) &read_profile_scalar_common_4[48], read_profile__CSDIs_194);
                  }
                  {
                    read_profile__conv7_V_198_198 = mercury__array__array_1_f_0(read_profile__TypeCtorInfo_47_206, read_profile__CSDPtrs_195);
                  }
                  read_profile__V_198_198 = (MR_ArrayPtr) read_profile__conv7_V_198_198;
                  {
                    read_profile__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), read_profile__V_197_197, 0) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(1), read_profile__V_197_197, 1) = ((MR_Box) (read_profile__V_198_198));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *read_profile__MaybeSlot_4 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_197_197));
                  }
                }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
read_profile__maybe_read_num_handle_error_7_p_0(
  MR_Integer read_profile__MaskWord_8,
  MR_Integer read_profile__MaskValue_9,
  MR_Integer * read_profile__Num_10,
  MR_Word read_profile__STATE_VARIABLE_MaybeError_0_15,
  MR_Word * read_profile__STATE_VARIABLE_MaybeError_16)
{
  {
    MR_bool read_profile__succeeded;
    MR_Integer read_profile__V_19_19 = (read_profile__MaskWord_8 & read_profile__MaskValue_9);

    read_profile__succeeded = (read_profile__V_19_19 == (MR_Integer) 0);
    read_profile__succeeded = !(read_profile__succeeded);
    if (read_profile__succeeded)
      {
        MR_Word read_profile__MaybeNum_13;

        {
          read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeNum_13);
        }
        if (((MR_tag((MR_Word) read_profile__MaybeNum_13)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String read_profile__Error_14 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeNum_13, (MR_Integer) 0)));

            *read_profile__Num_10 = (MR_Integer) 0;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *read_profile__STATE_VARIABLE_MaybeError_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_14));
            }
          }
        else
          {
            *read_profile__Num_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeNum_13, (MR_Integer) 0)));
            *read_profile__STATE_VARIABLE_MaybeError_16 = read_profile__STATE_VARIABLE_MaybeError_0_15;
          }
      }
    else
      {
        *read_profile__Num_10 = (MR_Integer) 0;
        *read_profile__STATE_VARIABLE_MaybeError_16 = read_profile__STATE_VARIABLE_MaybeError_0_15;
      }
  }
}

static void MR_CALL 
read_profile__read_profile_3_p_0(
  MR_Word * read_profile__MaybeProfile_4)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__MaybeMask_6;

    {
      read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeMask_6);
    }
    if (((MR_tag((MR_Word) read_profile__MaybeMask_6)) == (MR_mktag((MR_Integer) 1))))
      *read_profile__MaybeProfile_4 = (MR_Word) read_profile__MaybeMask_6;
    else
      {
        MR_Integer read_profile__Mask_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeMask_6, (MR_Integer) 0)));
        MR_Integer read_profile__Exits_9;
        MR_Integer read_profile__Fails_10;
        MR_Integer read_profile__Redos_11;
        MR_Integer read_profile__Excps_12;
        MR_Integer read_profile__Quanta_13;
        MR_Integer read_profile__CallSeqs_14;
        MR_Integer read_profile__Allocs_15;
        MR_Integer read_profile__Words_16;
        MR_Word read_profile__LastMaybeError_17;
        MR_Word read_profile__STATE_VARIABLE_MaybeError_24_24;
        MR_Word read_profile__STATE_VARIABLE_MaybeError_27_27;
        MR_Word read_profile__STATE_VARIABLE_MaybeError_30_30;
        MR_Word read_profile__STATE_VARIABLE_MaybeError_33_33;
        MR_Word read_profile__STATE_VARIABLE_MaybeError_36_36;
        MR_Word read_profile__STATE_VARIABLE_MaybeError_39_39;
        MR_Word read_profile__STATE_VARIABLE_MaybeError_42_42;

        {
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 2, &read_profile__Exits_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__STATE_VARIABLE_MaybeError_24_24);
        }
        {
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 4, &read_profile__Fails_10, read_profile__STATE_VARIABLE_MaybeError_24_24, &read_profile__STATE_VARIABLE_MaybeError_27_27);
        }
        {
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 64, &read_profile__Redos_11, read_profile__STATE_VARIABLE_MaybeError_27_27, &read_profile__STATE_VARIABLE_MaybeError_30_30);
        }
        {
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 128, &read_profile__Excps_12, read_profile__STATE_VARIABLE_MaybeError_30_30, &read_profile__STATE_VARIABLE_MaybeError_33_33);
        }
        {
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 256, &read_profile__Quanta_13, read_profile__STATE_VARIABLE_MaybeError_33_33, &read_profile__STATE_VARIABLE_MaybeError_36_36);
        }
        {
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 8, &read_profile__CallSeqs_14, read_profile__STATE_VARIABLE_MaybeError_36_36, &read_profile__STATE_VARIABLE_MaybeError_39_39);
        }
        {
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 16, &read_profile__Allocs_15, read_profile__STATE_VARIABLE_MaybeError_39_39, &read_profile__STATE_VARIABLE_MaybeError_42_42);
        }
        {
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 32, &read_profile__Words_16, read_profile__STATE_VARIABLE_MaybeError_42_42, &read_profile__LastMaybeError_17);
        }
        if ((read_profile__LastMaybeError_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word read_profile__V_47_47;

            {
              read_profile__V_47_47 = measurements__compress_profile_8_f_0(read_profile__Exits_9, read_profile__Fails_10, read_profile__Redos_11, read_profile__Excps_12, read_profile__Quanta_13, read_profile__CallSeqs_14, read_profile__Allocs_15, read_profile__Words_16);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *read_profile__MaybeProfile_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_47_47));
            }
          }
        else
          {
            MR_String read_profile__Error_18 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__LastMaybeError_17, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *read_profile__MaybeProfile_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_18));
            }
          }
      }
  }
}

static void MR_CALL 
read_profile__read_call_site_dynamic_3_p_0(
  MR_Word * read_profile__MaybeCSD_4)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__MaybeCSDI_7;

    {
      read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeCSDI_7);
    }
    if (((MR_tag((MR_Word) read_profile__MaybeCSDI_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String read_profile__Error_37 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeCSDI_7, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *read_profile__MaybeCSD_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_37));
        }
      }
    else
      {
        MR_Integer read_profile__CSDI_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSDI_7, (MR_Integer) 0)));
        MR_Word read_profile__MaybePDI_9;

        {
          read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybePDI_9);
        }
        if (((MR_tag((MR_Word) read_profile__MaybePDI_9)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String read_profile__Error_36 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybePDI_9, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *read_profile__MaybeCSD_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_36));
            }
          }
        else
          {
            MR_Integer read_profile__PDI_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybePDI_9, (MR_Integer) 0)));
            MR_Word read_profile__MaybeProfile_11;

            {
              read_profile__read_profile_3_p_0(&read_profile__MaybeProfile_11);
            }
            if (((MR_tag((MR_Word) read_profile__MaybeProfile_11)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_String read_profile__Error_16 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeProfile_11, (MR_Integer) 0)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *read_profile__MaybeCSD_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_16));
                }
              }
            else
              {
                MR_Word read_profile__Profile_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeProfile_11, (MR_Integer) 0)));
                MR_Word read_profile__PDPtr_13 = (MR_Word) read_profile__PDI_10;
                MR_Word read_profile__CallSiteDynamic_15;

                {
                  read_profile__CallSiteDynamic_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), read_profile__CallSiteDynamic_15, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
                  MR_hl_field(MR_mktag(0), read_profile__CallSiteDynamic_15, 1) = ((MR_Box) (read_profile__PDPtr_13));
                  MR_hl_field(MR_mktag(0), read_profile__CallSiteDynamic_15, 2) = ((MR_Box) (read_profile__Profile_12));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *read_profile__MaybeCSD_4 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__CallSiteDynamic_15));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (read_profile__CSDI_8));
                }
              }
          }
      }
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_8(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv7_LambdaHeadVar__3_51;

    {
      read_profile__IntroducedFrom__pred__read_proc_dynamic__895__1_3_p_0(((MR_Word) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2), &read_profile__conv7_LambdaHeadVar__3_51);
    }
    *read_profile__wrapper_arg_3 = ((MR_Box) (read_profile__conv7_LambdaHeadVar__3_51));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_7(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv6_HeadVar__3_86;

    {
      read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_5_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 4))), &read_profile__conv6_HeadVar__3_86);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv6_HeadVar__3_86));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_6(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv5_MaybeSlot_4;

    {
      read_profile__read_call_site_slot_3_p_0(&read_profile__conv5_MaybeSlot_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv5_MaybeSlot_4));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_5(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv4_MaybeCoveragePoints_6;

    {
      read_profile__maybe_read_pd_coverage_points_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), &read_profile__conv4_MaybeCoveragePoints_6);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv4_MaybeCoveragePoints_6));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_4(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3,
  MR_Box * read_profile__wrapper_arg_4)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv3_LambdaHeadVar__4_41;

    {
      read_profile__IntroducedFrom__pred__read_proc_dynamic__885__1_4_p_0(((MR_Integer) read_profile__wrapper_arg_1), ((MR_Integer) read_profile__wrapper_arg_2), ((MR_Integer) read_profile__wrapper_arg_3), &read_profile__conv3_LambdaHeadVar__4_41);
    }
    *read_profile__wrapper_arg_4 = ((MR_Box) (read_profile__conv3_LambdaHeadVar__4_41));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv2_MaybeNum_4;

    {
      read_profile__read_num_3_p_0(&read_profile__conv2_MaybeNum_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv2_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv1_MaybePtr_6;

    {
      read_profile__read_ptr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), &read_profile__conv1_MaybePtr_6);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybePtr_6));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv0_MaybePtr_6;

    {
      read_profile__read_ptr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), &read_profile__conv0_MaybePtr_6);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybePtr_6));
  }
}

static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0(
  MR_Word read_profile__ProfileStats_5,
  MR_Word * read_profile__MaybePD_6)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word read_profile__MaybePDHeader_13;

    {
      io_combinator__maybe_error_sequence_3_7_p_0(read_profile__TypeCtorInfo_81_81, read_profile__TypeCtorInfo_81_81, read_profile__TypeCtorInfo_81_81, (MR_Word) &read_profile_scalar_common_5[0], (MR_Word) &read_profile_scalar_common_2[6], (MR_Word) &read_profile_scalar_common_2[7], (MR_Word) &read_profile_scalar_common_4[41], (MR_Word) &read_profile_scalar_common_4[42], &read_profile__MaybePDHeader_13);
    }
    if (((MR_tag((MR_Word) read_profile__MaybePDHeader_13)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String read_profile__Error_71 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybePDHeader_13, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *read_profile__MaybePD_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_71));
        }
      }
    else
      {
        MR_Integer read_profile__PDI_14;
        MR_Integer read_profile__PSI_15;
        MR_Integer read_profile__N_16;
        MR_Word read_profile__MaybeCPsAndSlots_20;
        MR_Tuple read_profile__V_43_43 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), read_profile__MaybePDHeader_13, (MR_Integer) 0)));
        MR_Word read_profile__V_44_44;
        MR_Word read_profile__V_45_45;

        read_profile__PDI_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_43_43, (MR_Integer) 0)));
        read_profile__PSI_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_43_43, (MR_Integer) 1)));
        read_profile__N_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_43_43, (MR_Integer) 2)));
        {
          read_profile__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), read_profile__V_44_44, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
          MR_hl_field(MR_mktag(0), read_profile__V_44_44, 1) = ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_5));
          MR_hl_field(MR_mktag(0), read_profile__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), read_profile__V_44_44, 3) = ((MR_Box) (read_profile__ProfileStats_5));
        }
        {
          read_profile__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), read_profile__V_45_45, 0) = ((MR_Box) (&read_profile_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), read_profile__V_45_45, 1) = ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_7));
          MR_hl_field(MR_mktag(0), read_profile__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), read_profile__V_45_45, 3) = ((MR_Box) (read_profile__N_16));
          MR_hl_field(MR_mktag(0), read_profile__V_45_45, 4) = ((MR_Box) (&read_profile_scalar_common_4[43]));
        }
        {
          io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) &read_profile_scalar_common_1[3], (MR_Word) &read_profile_scalar_common_1[4], (MR_Word) &read_profile_scalar_common_2[1], read_profile__V_44_44, read_profile__V_45_45, (MR_Word) &read_profile_scalar_common_4[44], &read_profile__MaybeCPsAndSlots_20);
        }
        if (((MR_tag((MR_Word) read_profile__MaybeCPsAndSlots_20)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String read_profile__Error_25 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeCPsAndSlots_20, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *read_profile__MaybePD_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_25));
            }
          }
        else
          {
            MR_Word read_profile__MaybeCPs_21;
            MR_Word read_profile__Refs_22;
            MR_Word read_profile__PSPtr_23;
            MR_Word read_profile__ProcDynamic_24;
            MR_Tuple read_profile__V_53_53 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), read_profile__MaybeCPsAndSlots_20, (MR_Integer) 0)));
            MR_ArrayPtr read_profile__V_54_54;
            MR_ArrayPtr read_profile__conv8_V_54_54;

            read_profile__MaybeCPs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_53_53, (MR_Integer) 0)));
            read_profile__Refs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_53_53, (MR_Integer) 1)));
            read_profile__PSPtr_23 = (MR_Word) read_profile__PSI_15;
            {
              read_profile__conv8_V_54_54 = mercury__array__array_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, read_profile__Refs_22);
            }
            read_profile__V_54_54 = (MR_ArrayPtr) read_profile__conv8_V_54_54;
            {
              read_profile__ProcDynamic_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), read_profile__ProcDynamic_24, 0) = ((MR_Box) (read_profile__PSPtr_23));
              MR_hl_field(MR_mktag(0), read_profile__ProcDynamic_24, 1) = ((MR_Box) (read_profile__V_54_54));
              MR_hl_field(MR_mktag(0), read_profile__ProcDynamic_24, 2) = ((MR_Box) (read_profile__MaybeCPs_21));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *read_profile__MaybePD_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__ProcDynamic_24));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (read_profile__PDI_14));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
read_profile__glue_lambda_name_3_p_0(
  MR_Word read_profile__Segments_4,
  MR_Word * read_profile__PredName_5,
  MR_Word * read_profile__LineNumber_6)
{
  {
    MR_bool read_profile__succeeded = ((MR_tag((MR_Word) read_profile__Segments_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word read_profile__LineNumberPrime_7;
    MR_Word read_profile__V_14_14;
    MR_Word read_profile__V_15_15;
    MR_Word read_profile__V_8_8;

    if (read_profile__succeeded)
      {
        read_profile__LineNumberPrime_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Segments_4, (MR_Integer) 0)));
        read_profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Segments_4, (MR_Integer) 1)));
        read_profile__succeeded = ((MR_tag((MR_Word) read_profile__V_14_14)) == (MR_mktag((MR_Integer) 1)));
        if (read_profile__succeeded)
          {
            read_profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_14_14, (MR_Integer) 0)));
            read_profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_14_14, (MR_Integer) 1)));
            read_profile__succeeded = (read_profile__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
      }
    if (read_profile__succeeded)
      {
        *read_profile__PredName_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *read_profile__LineNumber_6 = read_profile__LineNumberPrime_7;
        read_profile__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word read_profile__Segment_9;
        MR_Word read_profile__TailSegments_10;
        MR_Word read_profile__PredName1_11;

        read_profile__succeeded = ((MR_tag((MR_Word) read_profile__Segments_4)) == (MR_mktag((MR_Integer) 1)));
        if (read_profile__succeeded)
          {
            read_profile__Segment_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Segments_4, (MR_Integer) 0)));
            read_profile__TailSegments_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Segments_4, (MR_Integer) 1)));
            {
              read_profile__succeeded = read_profile__glue_lambda_name_3_p_0(read_profile__TailSegments_10, &read_profile__PredName1_11, read_profile__LineNumber_6);
            }
            if (read_profile__succeeded)
              {
                if ((read_profile__PredName1_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  *read_profile__PredName_5 = read_profile__Segment_9;
                else
                  {
                    MR_Word read_profile__V_16_16;
                    MR_Word read_profile__V_18_18;

                    {
                      read_profile__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), read_profile__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Char) 95));
                      MR_hl_field(MR_mktag(1), read_profile__V_18_18, 1) = ((MR_Box) (read_profile__PredName1_11));
                    }
                    {
                      read_profile__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), read_profile__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Char) 95));
                      MR_hl_field(MR_mktag(1), read_profile__V_16_16, 1) = ((MR_Box) (read_profile__V_18_18));
                    }
                    {
                      mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, read_profile__Segment_9, read_profile__V_16_16, read_profile__PredName_5);
                    }
                  }
                read_profile__succeeded = MR_TRUE;
              }
          }
      }
    return read_profile__succeeded;
  }
}

static void MR_CALL 
read_profile__split_lambda_name_2_p_0(
  MR_Word read_profile__HeadVar__1_1,
  MR_Word * read_profile__HeadVar__2_2)
{
  {
    MR_bool read_profile__succeeded;

    if ((read_profile__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *read_profile__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Char read_profile__Char0_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word read_profile__Chars0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word read_profile__Chars1_6;
        MR_Char read_profile__V_10_10;
        MR_Word read_profile__V_11_11;
        MR_Char read_profile__V_12_12;

        read_profile__succeeded = ((MR_tag((MR_Word) read_profile__Chars0_4)) == (MR_mktag((MR_Integer) 1)));
        if (read_profile__succeeded)
          {
            read_profile__V_10_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Chars0_4, (MR_Integer) 0)));
            read_profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Chars0_4, (MR_Integer) 1)));
            read_profile__succeeded = (read_profile__V_10_10 == (MR_Char) 95);
            if (read_profile__succeeded)
              {
                read_profile__succeeded = ((MR_tag((MR_Word) read_profile__V_11_11)) == (MR_mktag((MR_Integer) 1)));
                if (read_profile__succeeded)
                  {
                    read_profile__V_12_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_11_11, (MR_Integer) 0)));
                    read_profile__Chars1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_11_11, (MR_Integer) 1)));
                    read_profile__succeeded = (read_profile__V_12_12 == (MR_Char) 95);
                  }
              }
          }
        if (read_profile__succeeded)
          {
            MR_Word read_profile__StringList0_7;
            MR_Word read_profile__V_13_13;

            {
              read_profile__split_lambda_name_2_p_0(read_profile__Chars1_6, &read_profile__StringList0_7);
            }
            {
              read_profile__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), read_profile__V_13_13, 0) = ((MR_Box) (MR_Word) (read_profile__Char0_3));
              MR_hl_field(MR_mktag(1), read_profile__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *read_profile__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__V_13_13));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (read_profile__StringList0_7));
            }
          }
        else
          {
            MR_Word read_profile__StringList0_19;

            {
              read_profile__split_lambda_name_2_p_0(read_profile__Chars0_4, &read_profile__StringList0_19);
            }
            if ((read_profile__StringList0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word read_profile__V_16_16;

                {
                  read_profile__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), read_profile__V_16_16, 0) = ((MR_Box) (MR_Word) (read_profile__Char0_3));
                  MR_hl_field(MR_mktag(1), read_profile__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *read_profile__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__V_16_16));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            else
              {
                MR_Word read_profile__String0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__StringList0_19, (MR_Integer) 0)));
                MR_Word read_profile__StringList1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__StringList0_19, (MR_Integer) 1)));
                MR_Word read_profile__V_15_15;

                {
                  read_profile__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), read_profile__V_15_15, 0) = ((MR_Box) (MR_Word) (read_profile__Char0_3));
                  MR_hl_field(MR_mktag(1), read_profile__V_15_15, 1) = ((MR_Box) (read_profile__String0_8));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *read_profile__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__V_15_15));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (read_profile__StringList1_9));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
read_profile__non_right_bracket_1_p_0(
  MR_Char read_profile__C_2)
{
  {
    MR_bool read_profile__succeeded = (read_profile__C_2 == (MR_Char) 93);

    read_profile__succeeded = !(read_profile__succeeded);
    return read_profile__succeeded;
  }
}

static MR_bool MR_CALL 
read_profile__fix_type_spec_suffix_3_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1)
{
  {
    MR_bool read_profile__succeeded;
    MR_Box read_profile__closure = read_profile__closure_arg;

    {
      read_profile__succeeded = read_profile__non_right_bracket_1_p_0(((MR_Char) (MR_Word) read_profile__wrapper_arg_1));
    }
    return read_profile__succeeded;
  }
}

static MR_bool MR_CALL 
read_profile__fix_type_spec_suffix_3_p_0(
  MR_Word read_profile__Chars0_4,
  MR_Word * read_profile__Chars_5,
  MR_String * read_profile__SpecInfoStr_6)
{
  {
    MR_bool read_profile__succeeded = ((MR_tag((MR_Word) read_profile__Chars0_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word read_profile__SpecInfo0_7;
    MR_Char read_profile__V_13_13;
    MR_Word read_profile__V_14_14;
    MR_Char read_profile__V_15_15;
    MR_Word read_profile__V_16_16;
    MR_Char read_profile__V_17_17;

    if (read_profile__succeeded)
      {
        read_profile__V_13_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Chars0_4, (MR_Integer) 0)));
        read_profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Chars0_4, (MR_Integer) 1)));
        read_profile__succeeded = (read_profile__V_13_13 == (MR_Char) 95);
        if (read_profile__succeeded)
          {
            read_profile__succeeded = ((MR_tag((MR_Word) read_profile__V_14_14)) == (MR_mktag((MR_Integer) 1)));
            if (read_profile__succeeded)
              {
                read_profile__V_15_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_14_14, (MR_Integer) 0)));
                read_profile__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_14_14, (MR_Integer) 1)));
                read_profile__succeeded = (read_profile__V_15_15 == (MR_Char) 95);
                if (read_profile__succeeded)
                  {
                    read_profile__succeeded = ((MR_tag((MR_Word) read_profile__V_16_16)) == (MR_mktag((MR_Integer) 1)));
                    if (read_profile__succeeded)
                      {
                        read_profile__V_17_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_16_16, (MR_Integer) 0)));
                        read_profile__SpecInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_16_16, (MR_Integer) 1)));
                        read_profile__succeeded = (read_profile__V_17_17 == (MR_Char) 91);
                      }
                  }
              }
          }
      }
    if (read_profile__succeeded)
      {
        MR_Word read_profile__SpecInfo_8;
        MR_Word read_profile__V_9_9;

        *read_profile__Chars_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &read_profile_scalar_common_4[40], read_profile__SpecInfo0_7, &read_profile__SpecInfo_8, &read_profile__V_9_9);
        }
        {
          mercury__string__from_char_list_2_p_0(read_profile__SpecInfo_8, read_profile__SpecInfoStr_6);
        }
        read_profile__succeeded = MR_TRUE;
      }
    else
      {
        MR_Char read_profile__Char_10;
        MR_Word read_profile__TailChars0_11;
        MR_Word read_profile__TailChars_12;

        read_profile__succeeded = ((MR_tag((MR_Word) read_profile__Chars0_4)) == (MR_mktag((MR_Integer) 1)));
        if (read_profile__succeeded)
          {
            read_profile__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Chars0_4, (MR_Integer) 0)));
            read_profile__TailChars0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Chars0_4, (MR_Integer) 1)));
            {
              read_profile__succeeded = read_profile__fix_type_spec_suffix_3_p_0(read_profile__TailChars0_11, &read_profile__TailChars_12, read_profile__SpecInfoStr_6);
            }
            if (read_profile__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *read_profile__Chars_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (read_profile__Char_10));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (read_profile__TailChars_12));
                }
                read_profile__succeeded = MR_TRUE;
              }
          }
      }
    return read_profile__succeeded;
  }
}

static MR_String MR_CALL 
read_profile__add_plus_one_for_function_1_f_0(
  MR_Word read_profile__HeadVar__1_1)
{
  {
    MR_bool read_profile__succeeded;
    MR_String read_profile__HeadVar__2_2;

    switch (read_profile__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        read_profile__HeadVar__2_2 = (MR_String) "+1";
        break;
      case (MR_Integer) 0:
        read_profile__HeadVar__2_2 = (MR_String) "";
        break;
    }
    return read_profile__HeadVar__2_2;
  }
}

static void MR_CALL 
read_profile__create_refined_proc_ids_3_p_0(
  MR_Word read_profile__ProcLabel_4,
  MR_String * read_profile__UnQualName_5,
  MR_String * read_profile__QualName_6)
{
  {
    MR_bool read_profile__succeeded;

    if (((MR_tag((MR_Word) read_profile__ProcLabel_4)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word read_profile__PredOrFunc_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__ProcLabel_4, (MR_Integer) 0)));
        MR_String read_profile__DeclModule_21 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__ProcLabel_4, (MR_Integer) 1)));
        MR_String read_profile__ProcName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__ProcLabel_4, (MR_Integer) 3)));
        MR_Integer read_profile__Arity_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProcLabel_4, (MR_Integer) 4)));
        MR_Integer read_profile__Mode_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProcLabel_4, (MR_Integer) 5)));
        MR_String read_profile___DefModule_95 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__ProcLabel_4, (MR_Integer) 2)));
        MR_Word read_profile__ProcNameChars_29;
        MR_String read_profile__SpecInfo_30;
        MR_String read_profile__ProcName1_23;
        MR_String read_profile__ProcName2_25;
        MR_Word read_profile__ProcName2Chars_28;
        MR_String read_profile__ProcName2A_24;
        MR_String read_profile__V_39_39;

        {
          read_profile__succeeded = mercury__string__append_3_p_1((MR_String) "TypeSpecOf__", &read_profile__ProcName1_23, read_profile__ProcName_22);
        }
        if (read_profile__succeeded)
          {
            read_profile__V_39_39 = (MR_String) "pred__";
            {
              read_profile__succeeded = mercury__string__append_3_p_1(read_profile__V_39_39, &read_profile__ProcName2A_24, read_profile__ProcName1_23);
            }
            if (read_profile__succeeded)
              read_profile__ProcName2_25 = read_profile__ProcName2A_24;
            else
              {
                MR_String read_profile__ProcName2B_26;

                {
                  read_profile__succeeded = mercury__string__append_3_p_1((MR_String) "func__", &read_profile__ProcName2B_26, read_profile__ProcName1_23);
                }
                if (read_profile__succeeded)
                  read_profile__ProcName2_25 = read_profile__ProcName2B_26;
                else
                  {
                    MR_String read_profile__ProcName2C_27;

                    {
                      read_profile__succeeded = mercury__string__append_3_p_1((MR_String) "pred_or_func__", &read_profile__ProcName2C_27, read_profile__ProcName1_23);
                    }
                    if (read_profile__succeeded)
                      read_profile__ProcName2_25 = read_profile__ProcName2C_27;
                    else
                      {
                        {
                          mercury__require__error_1_p_0((MR_String) "typespec: neither pred nor func");
                          return;
                        }
                      }
                  }
              }
            {
              mercury__string__to_char_list_2_p_0(read_profile__ProcName2_25, &read_profile__ProcName2Chars_28);
            }
            {
              read_profile__succeeded = read_profile__fix_type_spec_suffix_3_p_0(read_profile__ProcName2Chars_28, &read_profile__ProcNameChars_29, &read_profile__SpecInfo_30);
            }
          }
        if (read_profile__succeeded)
          {
            MR_String read_profile__RefinedProcName_31;
            MR_String read_profile__Suffix_32;
            MR_String read_profile__V_44_44;
            MR_String read_profile__V_45_45;
            MR_String read_profile__V_46_46;
            MR_String read_profile__V_47_47;
            MR_String read_profile__V_48_48;
            MR_String read_profile__V_50_50;
            MR_String read_profile__V_51_51;
            MR_String read_profile__V_52_52;
            MR_String read_profile__V_54_54;
            MR_String read_profile__V_56_56;
            MR_String read_profile__V_58_58;

            {
              read_profile__RefinedProcName_31 = mercury__string__from_char_list_1_f_0(read_profile__ProcNameChars_29);
            }
            {
              read_profile__V_45_45 = mercury__string__int_to_string_1_f_0(read_profile__Arity_113);
            }
            {
              read_profile__V_47_47 = read_profile__add_plus_one_for_function_1_f_0(read_profile__PredOrFunc_20);
            }
            {
              read_profile__V_51_51 = mercury__string__int_to_string_1_f_0(read_profile__Mode_114);
            }
            {
              read_profile__V_54_54 = mercury__string__f_43_43_2_f_0(read_profile__SpecInfo_30, (MR_String) "]");
            }
            {
              read_profile__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) " [", read_profile__V_54_54);
            }
            {
              read_profile__V_50_50 = mercury__string__f_43_43_2_f_0(read_profile__V_51_51, read_profile__V_52_52);
            }
            {
              read_profile__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "-", read_profile__V_50_50);
            }
            {
              read_profile__V_46_46 = mercury__string__f_43_43_2_f_0(read_profile__V_47_47, read_profile__V_48_48);
            }
            {
              read_profile__V_44_44 = mercury__string__f_43_43_2_f_0(read_profile__V_45_45, read_profile__V_46_46);
            }
            {
              read_profile__Suffix_32 = mercury__string__f_43_43_2_f_0((MR_String) "/", read_profile__V_44_44);
            }
            {
              *read_profile__UnQualName_5 = mercury__string__f_43_43_2_f_0(read_profile__RefinedProcName_31, read_profile__Suffix_32);
            }
            {
              read_profile__V_58_58 = mercury__string__f_43_43_2_f_0(read_profile__RefinedProcName_31, read_profile__Suffix_32);
            }
            {
              read_profile__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) ".", read_profile__V_58_58);
            }
            {
              *read_profile__QualName_6 = mercury__string__f_43_43_2_f_0(read_profile__DeclModule_21, read_profile__V_56_56);
            }
          }
        else
          {
            MR_Word read_profile__ContainingNameChars_34;
            MR_Word read_profile__LineNumberChars_35;
            MR_Word read_profile__Segments_33;
            MR_String read_profile__ProcName1_99;
            MR_String read_profile__ProcName2_101;
            MR_Word read_profile__ProcName2Chars_103;
            MR_String read_profile__ProcName2A_97;
            MR_String read_profile__V_60_60;

            {
              read_profile__succeeded = mercury__string__append_3_p_1((MR_String) "IntroducedFrom__", &read_profile__ProcName1_99, read_profile__ProcName_22);
            }
            if (read_profile__succeeded)
              {
                read_profile__V_60_60 = (MR_String) "pred__";
                {
                  read_profile__succeeded = mercury__string__append_3_p_1(read_profile__V_60_60, &read_profile__ProcName2A_97, read_profile__ProcName1_99);
                }
                if (read_profile__succeeded)
                  read_profile__ProcName2_101 = read_profile__ProcName2A_97;
                else
                  {
                    MR_String read_profile__ProcName2B_96;

                    {
                      read_profile__succeeded = mercury__string__append_3_p_1((MR_String) "func__", &read_profile__ProcName2B_96, read_profile__ProcName1_99);
                    }
                    if (read_profile__succeeded)
                      read_profile__ProcName2_101 = read_profile__ProcName2B_96;
                    else
                      {
                        {
                          mercury__require__error_1_p_0((MR_String) "lambda: neither pred nor func");
                          return;
                        }
                      }
                  }
                {
                  mercury__string__to_char_list_2_p_0(read_profile__ProcName2_101, &read_profile__ProcName2Chars_103);
                }
                {
                  read_profile__split_lambda_name_2_p_0(read_profile__ProcName2Chars_103, &read_profile__Segments_33);
                }
                {
                  read_profile__succeeded = read_profile__glue_lambda_name_3_p_0(read_profile__Segments_33, &read_profile__ContainingNameChars_34, &read_profile__LineNumberChars_35);
                }
              }
            if (read_profile__succeeded)
              {
                MR_String read_profile__ContainingName_36;
                MR_String read_profile__LineNumber_37;
                MR_String read_profile__V_64_64;
                MR_String read_profile__V_65_65;
                MR_String read_profile__V_67_67;
                MR_String read_profile__V_68_68;
                MR_String read_profile__V_69_69;
                MR_String read_profile__V_70_70;
                MR_String read_profile__V_72_72;
                MR_String read_profile__Suffix_104;

                {
                  mercury__string__from_char_list_2_p_0(read_profile__ContainingNameChars_34, &read_profile__ContainingName_36);
                }
                {
                  mercury__string__from_char_list_2_p_0(read_profile__LineNumberChars_35, &read_profile__LineNumber_37);
                }
                {
                  read_profile__V_68_68 = mercury__string__int_to_string_1_f_0(read_profile__Arity_113);
                }
                {
                  read_profile__V_69_69 = read_profile__add_plus_one_for_function_1_f_0(read_profile__PredOrFunc_20);
                }
                {
                  read_profile__V_67_67 = mercury__string__f_43_43_2_f_0(read_profile__V_68_68, read_profile__V_69_69);
                }
                {
                  read_profile__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) "/", read_profile__V_67_67);
                }
                {
                  read_profile__V_64_64 = mercury__string__f_43_43_2_f_0(read_profile__LineNumber_37, read_profile__V_65_65);
                }
                {
                  read_profile__Suffix_104 = mercury__string__f_43_43_2_f_0((MR_String) " lambda line ", read_profile__V_64_64);
                }
                {
                  *read_profile__UnQualName_5 = mercury__string__f_43_43_2_f_0(read_profile__ContainingName_36, read_profile__Suffix_104);
                }
                {
                  read_profile__V_72_72 = mercury__string__f_43_43_2_f_0(read_profile__ContainingName_36, read_profile__Suffix_104);
                }
                {
                  read_profile__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) ".", read_profile__V_72_72);
                }
                {
                  *read_profile__QualName_6 = mercury__string__f_43_43_2_f_0(read_profile__DeclModule_21, read_profile__V_70_70);
                }
              }
            else
              {
                MR_String read_profile__V_74_74;
                MR_String read_profile__V_75_75;
                MR_String read_profile__V_76_76;
                MR_String read_profile__V_77_77;
                MR_String read_profile__V_78_78;
                MR_String read_profile__V_80_80;
                MR_String read_profile__V_81_81;
                MR_String read_profile__V_83_83;
                MR_String read_profile__Suffix_105;

                {
                  read_profile__V_75_75 = mercury__string__int_to_string_1_f_0(read_profile__Arity_113);
                }
                {
                  read_profile__V_77_77 = read_profile__add_plus_one_for_function_1_f_0(read_profile__PredOrFunc_20);
                }
                {
                  read_profile__V_80_80 = mercury__string__int_to_string_1_f_0(read_profile__Mode_114);
                }
                {
                  read_profile__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) "-", read_profile__V_80_80);
                }
                {
                  read_profile__V_76_76 = mercury__string__f_43_43_2_f_0(read_profile__V_77_77, read_profile__V_78_78);
                }
                {
                  read_profile__V_74_74 = mercury__string__f_43_43_2_f_0(read_profile__V_75_75, read_profile__V_76_76);
                }
                {
                  read_profile__Suffix_105 = mercury__string__f_43_43_2_f_0((MR_String) "/", read_profile__V_74_74);
                }
                {
                  *read_profile__UnQualName_5 = mercury__string__f_43_43_2_f_0(read_profile__ProcName_22, read_profile__Suffix_105);
                }
                {
                  read_profile__V_83_83 = mercury__string__f_43_43_2_f_0(read_profile__ProcName_22, read_profile__Suffix_105);
                }
                {
                  read_profile__V_81_81 = mercury__string__f_43_43_2_f_0((MR_String) ".", read_profile__V_83_83);
                }
                {
                  *read_profile__QualName_6 = mercury__string__f_43_43_2_f_0(read_profile__DeclModule_21, read_profile__V_81_81);
                }
              }
          }
      }
    else
      {
        MR_String read_profile__TypeName_7 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__ProcLabel_4, (MR_Integer) 0)));
        MR_String read_profile__TypeModule_8 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__ProcLabel_4, (MR_Integer) 1)));
        MR_String read_profile__RawPredName_10 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__ProcLabel_4, (MR_Integer) 3)));
        MR_Integer read_profile__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__ProcLabel_4, (MR_Integer) 4)));
        MR_Integer read_profile__Mode_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__ProcLabel_4, (MR_Integer) 5)));
        MR_String read_profile__PredName_13;
        MR_String read_profile__Prefix_15;
        MR_String read_profile__AritySuffix_16;
        MR_String read_profile__UnQualName0_17;
        MR_String read_profile__QualName0_18;
        MR_String read_profile__V_87_87;
        MR_String read_profile__V_88_88;
        MR_String read_profile__V_89_89;
        MR_String read_profile__V_90_90;
        MR_String read_profile__V_92_92;
        MR_String read_profile___DefModule_9 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__ProcLabel_4, (MR_Integer) 2)));

        read_profile__succeeded = (strcmp(read_profile__RawPredName_10, (MR_String) "__Unify__") == 0);
        if (read_profile__succeeded)
          read_profile__PredName_13 = (MR_String) "Unify";
        else
          {
            read_profile__succeeded = (strcmp(read_profile__RawPredName_10, (MR_String) "__Compare__") == 0);
            if (read_profile__succeeded)
              read_profile__PredName_13 = (MR_String) "Compare";
            else
              {
                read_profile__succeeded = (strcmp(read_profile__RawPredName_10, (MR_String) "__CompareRep__") == 0);
                if (read_profile__succeeded)
                  read_profile__PredName_13 = (MR_String) "CompareRep";
                else
                  {
                    read_profile__succeeded = (strcmp(read_profile__RawPredName_10, (MR_String) "__Index__") == 0);
                    if (read_profile__succeeded)
                      read_profile__PredName_13 = (MR_String) "Index";
                    else
                      {
                        MR_String read_profile__Msg_14;

                        {
                          read_profile__Msg_14 = mercury__string__f_43_43_2_f_0((MR_String) "unknown special predicate name ", read_profile__RawPredName_10);
                        }
                        {
                          mercury__require__error_1_p_0(read_profile__Msg_14);
                          return;
                        }
                      }
                  }
              }
          }
        {
          read_profile__Prefix_15 = mercury__string__f_43_43_2_f_0(read_profile__PredName_13, (MR_String) " for ");
        }
        {
          read_profile__V_87_87 = mercury__string__int_to_string_1_f_0(read_profile__Arity_11);
        }
        {
          read_profile__AritySuffix_16 = mercury__string__f_43_43_2_f_0((MR_String) "/", read_profile__V_87_87);
        }
        {
          read_profile__V_88_88 = mercury__string__f_43_43_2_f_0(read_profile__TypeName_7, read_profile__AritySuffix_16);
        }
        {
          read_profile__UnQualName0_17 = mercury__string__f_43_43_2_f_0(read_profile__Prefix_15, read_profile__V_88_88);
        }
        {
          read_profile__V_92_92 = mercury__string__f_43_43_2_f_0(read_profile__TypeName_7, read_profile__AritySuffix_16);
        }
        {
          read_profile__V_90_90 = mercury__string__f_43_43_2_f_0((MR_String) ".", read_profile__V_92_92);
        }
        {
          read_profile__V_89_89 = mercury__string__f_43_43_2_f_0(read_profile__TypeModule_8, read_profile__V_90_90);
        }
        {
          read_profile__QualName0_18 = mercury__string__f_43_43_2_f_0(read_profile__Prefix_15, read_profile__V_89_89);
        }
        read_profile__succeeded = (read_profile__Mode_12 == (MR_Integer) 0);
        if (read_profile__succeeded)
          {
            *read_profile__UnQualName_5 = read_profile__UnQualName0_17;
            *read_profile__QualName_6 = read_profile__QualName0_18;
          }
        else
          {
            MR_String read_profile__ModeSuffix_19;
            MR_String read_profile__V_94_94;

            {
              read_profile__V_94_94 = mercury__string__int_to_string_1_f_0(read_profile__Mode_12);
            }
            {
              read_profile__ModeSuffix_19 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", read_profile__V_94_94);
            }
            {
              *read_profile__UnQualName_5 = mercury__string__f_43_43_2_f_0(read_profile__UnQualName0_17, read_profile__ModeSuffix_19);
            }
            {
              *read_profile__QualName_6 = mercury__string__f_43_43_2_f_0(read_profile__QualName0_18, read_profile__ModeSuffix_19);
            }
          }
      }
  }
}

static MR_String MR_CALL 
read_profile__raw_proc_id_to_string_1_f_0(
  MR_Word read_profile__HeadVar__1_1)
{
  {
    MR_bool read_profile__succeeded;
    MR_String read_profile__HeadVar__2_2;

    if (((MR_tag((MR_Word) read_profile__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word read_profile__PredOrFunc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 0)));
        MR_String read_profile__DeclModule_26 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 1)));
        MR_String read_profile__Name_28 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer read_profile__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer read_profile__Mode_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word read_profile__V_31_31;
        MR_Word read_profile__V_32_32;
        MR_Word read_profile__V_34_34;
        MR_Word read_profile__V_35_35;
        MR_Word read_profile__V_37_37;
        MR_String read_profile__V_38_38;
        MR_Word read_profile__V_39_39;
        MR_String read_profile__V_40_40;
        MR_Word read_profile__V_41_41;
        MR_Word read_profile__V_43_43;
        MR_String read_profile__V_44_44;
        MR_String read_profile___DefModule_27 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 2)));

        {
          read_profile__V_38_38 = mercury__string__int_to_string_1_f_0(read_profile__Arity_29);
        }
        switch (read_profile__PredOrFunc_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            read_profile__V_40_40 = (MR_String) "+1";
            break;
          case (MR_Integer) 0:
            read_profile__V_40_40 = (MR_String) "";
            break;
        }
        {
          read_profile__V_44_44 = mercury__string__int_to_string_1_f_0(read_profile__Mode_30);
        }
        {
          read_profile__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_43_43, 0) = ((MR_Box) (read_profile__V_44_44));
          MR_hl_field(MR_mktag(1), read_profile__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          read_profile__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_41_41, 0) = ((MR_Box) ((MR_String) "-"));
          MR_hl_field(MR_mktag(1), read_profile__V_41_41, 1) = ((MR_Box) (read_profile__V_43_43));
        }
        {
          read_profile__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_39_39, 0) = ((MR_Box) (read_profile__V_40_40));
          MR_hl_field(MR_mktag(1), read_profile__V_39_39, 1) = ((MR_Box) (read_profile__V_41_41));
        }
        {
          read_profile__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_37_37, 0) = ((MR_Box) (read_profile__V_38_38));
          MR_hl_field(MR_mktag(1), read_profile__V_37_37, 1) = ((MR_Box) (read_profile__V_39_39));
        }
        {
          read_profile__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_35_35, 0) = ((MR_Box) ((MR_String) "/"));
          MR_hl_field(MR_mktag(1), read_profile__V_35_35, 1) = ((MR_Box) (read_profile__V_37_37));
        }
        {
          read_profile__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_34_34, 0) = ((MR_Box) (read_profile__Name_28));
          MR_hl_field(MR_mktag(1), read_profile__V_34_34, 1) = ((MR_Box) (read_profile__V_35_35));
        }
        {
          read_profile__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_32_32, 0) = ((MR_Box) ((MR_String) "."));
          MR_hl_field(MR_mktag(1), read_profile__V_32_32, 1) = ((MR_Box) (read_profile__V_34_34));
        }
        {
          read_profile__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_31_31, 0) = ((MR_Box) (read_profile__DeclModule_26));
          MR_hl_field(MR_mktag(1), read_profile__V_31_31, 1) = ((MR_Box) (read_profile__V_32_32));
        }
        {
          read_profile__HeadVar__2_2 = mercury__string__append_list_1_f_0(read_profile__V_31_31);
        }
      }
    else
      {
        MR_String read_profile__TypeName_3 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 0)));
        MR_String read_profile__TypeModule_4 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 1)));
        MR_String read_profile__PredName_6 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer read_profile__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer read_profile__Mode_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word read_profile__V_9_9;
        MR_Word read_profile__V_10_10;
        MR_Word read_profile__V_12_12;
        MR_Word read_profile__V_13_13;
        MR_Word read_profile__V_15_15;
        MR_Word read_profile__V_16_16;
        MR_Word read_profile__V_18_18;
        MR_String read_profile__V_19_19;
        MR_Word read_profile__V_20_20;
        MR_Word read_profile__V_22_22;
        MR_String read_profile__V_23_23;
        MR_String read_profile___DefModule_5 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 2)));

        {
          read_profile__V_19_19 = mercury__string__int_to_string_1_f_0(read_profile__Arity_7);
        }
        {
          read_profile__V_23_23 = mercury__string__int_to_string_1_f_0(read_profile__Mode_8);
        }
        {
          read_profile__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_22_22, 0) = ((MR_Box) (read_profile__V_23_23));
          MR_hl_field(MR_mktag(1), read_profile__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          read_profile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_20_20, 0) = ((MR_Box) ((MR_String) " mode "));
          MR_hl_field(MR_mktag(1), read_profile__V_20_20, 1) = ((MR_Box) (read_profile__V_22_22));
        }
        {
          read_profile__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_18_18, 0) = ((MR_Box) (read_profile__V_19_19));
          MR_hl_field(MR_mktag(1), read_profile__V_18_18, 1) = ((MR_Box) (read_profile__V_20_20));
        }
        {
          read_profile__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_16_16, 0) = ((MR_Box) ((MR_String) "/"));
          MR_hl_field(MR_mktag(1), read_profile__V_16_16, 1) = ((MR_Box) (read_profile__V_18_18));
        }
        {
          read_profile__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_15_15, 0) = ((MR_Box) (read_profile__TypeName_3));
          MR_hl_field(MR_mktag(1), read_profile__V_15_15, 1) = ((MR_Box) (read_profile__V_16_16));
        }
        {
          read_profile__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_13_13, 0) = ((MR_Box) ((MR_String) "."));
          MR_hl_field(MR_mktag(1), read_profile__V_13_13, 1) = ((MR_Box) (read_profile__V_15_15));
        }
        {
          read_profile__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_12_12, 0) = ((MR_Box) (read_profile__TypeModule_4));
          MR_hl_field(MR_mktag(1), read_profile__V_12_12, 1) = ((MR_Box) (read_profile__V_13_13));
        }
        {
          read_profile__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_10_10, 0) = ((MR_Box) ((MR_String) " for "));
          MR_hl_field(MR_mktag(1), read_profile__V_10_10, 1) = ((MR_Box) (read_profile__V_12_12));
        }
        {
          read_profile__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), read_profile__V_9_9, 0) = ((MR_Box) (read_profile__PredName_6));
          MR_hl_field(MR_mktag(1), read_profile__V_9_9, 1) = ((MR_Box) (read_profile__V_10_10));
        }
        {
          read_profile__HeadVar__2_2 = mercury__string__append_list_1_f_0(read_profile__V_9_9);
        }
      }
    return read_profile__HeadVar__2_2;
  }
}

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv2_LambdaHeadVar__3_19;

    {
      read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_p_0(((MR_String) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2), &read_profile__conv2_LambdaHeadVar__3_19);
    }
    *read_profile__wrapper_arg_3 = ((MR_Box) (read_profile__conv2_LambdaHeadVar__3_19));
  }
}

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv1_MaybeCPType_4;

    {
      read_profile__read_cp_type_3_p_0(&read_profile__conv1_MaybeCPType_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeCPType_4));
  }
}

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv0_MaybeStr_4;

    {
      read_profile__read_string_3_p_0(&read_profile__conv0_MaybeStr_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0(
  MR_Word * read_profile__MaybeCP_4)
{
  {
    MR_bool read_profile__succeeded;

    {
      io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) &read_profile_scalar_common_4[37], (MR_Word) &read_profile_scalar_common_4[38], (MR_Word) &read_profile_scalar_common_4[39], read_profile__MaybeCP_4);
    }
  }
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_6(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3,
  MR_Box read_profile__wrapper_arg_4,
  MR_Box read_profile__wrapper_arg_5,
  MR_Box * read_profile__wrapper_arg_6)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv5_LambdaHeadVar__6_28;

    {
      read_profile__IntroducedFrom__pred__read_proc_id_user_defined__663__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), ((MR_String) read_profile__wrapper_arg_1), ((MR_String) read_profile__wrapper_arg_2), ((MR_String) read_profile__wrapper_arg_3), ((MR_Integer) read_profile__wrapper_arg_4), ((MR_Integer) read_profile__wrapper_arg_5), &read_profile__conv5_LambdaHeadVar__6_28);
    }
    *read_profile__wrapper_arg_6 = ((MR_Box) (read_profile__conv5_LambdaHeadVar__6_28));
  }
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_5(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv4_MaybeNum_4;

    {
      read_profile__read_num_3_p_0(&read_profile__conv4_MaybeNum_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv4_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_4(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv3_MaybeNum_4;

    {
      read_profile__read_num_3_p_0(&read_profile__conv3_MaybeNum_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv3_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv2_MaybeStr_4;

    {
      read_profile__read_string_3_p_0(&read_profile__conv2_MaybeStr_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv2_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv1_MaybeStr_4;

    {
      read_profile__read_string_3_p_0(&read_profile__conv1_MaybeStr_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv0_MaybeStr_4;

    {
      read_profile__read_string_3_p_0(&read_profile__conv0_MaybeStr_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0(
  MR_Word read_profile__PredOrFunc_5,
  MR_Word * read_profile__MaybeProcLabel_6)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__TypeCtorInfo_51_51;
    MR_Word read_profile__TypeCtorInfo_52_52;
    MR_Word read_profile__V_21_21;

    {
      read_profile__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), read_profile__V_21_21, 0) = ((MR_Box) (&read_profile_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), read_profile__V_21_21, 1) = ((MR_Box) (read_profile__read_proc_id_user_defined_4_p_0_6));
      MR_hl_field(MR_mktag(0), read_profile__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), read_profile__V_21_21, 3) = ((MR_Box) (read_profile__PredOrFunc_5));
    }
    read_profile__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    read_profile__TypeCtorInfo_52_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      io_combinator__maybe_error_sequence_5_9_p_0(read_profile__TypeCtorInfo_51_51, read_profile__TypeCtorInfo_51_51, read_profile__TypeCtorInfo_51_51, read_profile__TypeCtorInfo_52_52, read_profile__TypeCtorInfo_52_52, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0, (MR_Word) &read_profile_scalar_common_4[32], (MR_Word) &read_profile_scalar_common_4[33], (MR_Word) &read_profile_scalar_common_4[34], (MR_Word) &read_profile_scalar_common_4[35], (MR_Word) &read_profile_scalar_common_4[36], read_profile__V_21_21, read_profile__MaybeProcLabel_6);
    }
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0_7(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3,
  MR_Box read_profile__wrapper_arg_4,
  MR_Box read_profile__wrapper_arg_5,
  MR_Box read_profile__wrapper_arg_6,
  MR_Box * read_profile__wrapper_arg_7)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv6_LambdaHeadVar__7_29;

    {
      read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__644__1_7_p_0(((MR_String) read_profile__wrapper_arg_1), ((MR_String) read_profile__wrapper_arg_2), ((MR_String) read_profile__wrapper_arg_3), ((MR_String) read_profile__wrapper_arg_4), ((MR_Integer) read_profile__wrapper_arg_5), ((MR_Integer) read_profile__wrapper_arg_6), &read_profile__conv6_LambdaHeadVar__7_29);
    }
    *read_profile__wrapper_arg_7 = ((MR_Box) (read_profile__conv6_LambdaHeadVar__7_29));
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0_6(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv5_MaybeNum_4;

    {
      read_profile__read_num_3_p_0(&read_profile__conv5_MaybeNum_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv5_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0_5(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv4_MaybeNum_4;

    {
      read_profile__read_num_3_p_0(&read_profile__conv4_MaybeNum_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv4_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0_4(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv3_MaybeStr_4;

    {
      read_profile__read_string_3_p_0(&read_profile__conv3_MaybeStr_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv3_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv2_MaybeStr_4;

    {
      read_profile__read_string_3_p_0(&read_profile__conv2_MaybeStr_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv2_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv1_MaybeStr_4;

    {
      read_profile__read_string_3_p_0(&read_profile__conv1_MaybeStr_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv0_MaybeStr_4;

    {
      read_profile__read_string_3_p_0(&read_profile__conv0_MaybeStr_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_id_3_p_0(
  MR_Word * read_profile__MaybeProcId_4)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__MaybeByte_6;

    {
      read_profile__read_deep_byte_3_p_0(&read_profile__MaybeByte_6);
    }
    if (((MR_tag((MR_Word) read_profile__MaybeByte_6)) == (MR_mktag((MR_Integer) 1))))
      *read_profile__MaybeProcId_4 = (MR_Word) read_profile__MaybeByte_6;
    else
      {
        MR_Integer read_profile__Byte_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeByte_6, (MR_Integer) 0)));
        MR_Word read_profile__ProcLabelKind_8;

        {
          read_profile__succeeded = mdbcomp__program_representation__is_proclabel_kind_2_p_0(read_profile__Byte_7, &read_profile__ProcLabelKind_8);
        }
        if (read_profile__succeeded)
          switch (read_profile__ProcLabelKind_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case ((int) MR_proclabel_special):
              {
                MR_Word read_profile__TypeCtorInfo_56_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                MR_Word read_profile__TypeCtorInfo_57_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

                {
                  io_combinator__maybe_error_sequence_6_10_p_0(read_profile__TypeCtorInfo_56_83, read_profile__TypeCtorInfo_56_83, read_profile__TypeCtorInfo_56_83, read_profile__TypeCtorInfo_56_83, read_profile__TypeCtorInfo_57_84, read_profile__TypeCtorInfo_57_84, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0, (MR_Word) &read_profile_scalar_common_4[25], (MR_Word) &read_profile_scalar_common_4[26], (MR_Word) &read_profile_scalar_common_4[27], (MR_Word) &read_profile_scalar_common_4[28], (MR_Word) &read_profile_scalar_common_4[29], (MR_Word) &read_profile_scalar_common_4[30], (MR_Word) &read_profile_scalar_common_4[31], read_profile__MaybeProcId_4);
                }
              }
              break;
            case ((int) MR_proclabel_user_function):
              {
                {
                  read_profile__read_proc_id_user_defined_4_p_0((MR_Integer) 1, read_profile__MaybeProcId_4);
                }
              }
              break;
            case ((int) MR_proclabel_user_predicate):
              {
                {
                  read_profile__read_proc_id_user_defined_4_p_0((MR_Integer) 0, read_profile__MaybeProcId_4);
                }
              }
              break;
          }
        else
          {
            MR_String read_profile__Msg_9;
            MR_String read_profile__V_23_23;

            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &read_profile_scalar_common_9[2], read_profile__Byte_7, &read_profile__V_23_23);
            }
            {
              read_profile__Msg_9 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected proclabel_kind ", read_profile__V_23_23);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *read_profile__MaybeProcId_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Msg_9));
            }
          }
      }
  }
}

static void MR_CALL 
read_profile__maybe_read_pd_coverage_points_4_p_0(
  MR_Word read_profile__ProfileStats_5,
  MR_Word * read_profile__MaybeCoveragePoints_6)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__CoverageDataType_8;
    MR_Word read_profile__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 9)));
    MR_String read_profile__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 0)));
    MR_Integer read_profile__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 1)));
    MR_Integer read_profile__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 2)));
    MR_Integer read_profile__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 3)));
    MR_Integer read_profile__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 4)));
    MR_Integer read_profile__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 5)));
    MR_Integer read_profile__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 6)));
    MR_Integer read_profile__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 7)));
    MR_Integer read_profile__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 8)));
    MR_Integer read_profile__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_16_16, (MR_Integer) 0)));
    MR_Word read_profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_16_16, (MR_Integer) 1)));

    read_profile__CoverageDataType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_16_16, (MR_Integer) 3)));
    switch (read_profile__CoverageDataType_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word read_profile__ResN_9;

          {
            read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__ResN_9);
          }
          if (((MR_tag((MR_Word) read_profile__ResN_9)) == (MR_mktag((MR_Integer) 1))))
            *read_profile__MaybeCoveragePoints_6 = (MR_Word) read_profile__ResN_9;
          else
            {
              MR_Integer read_profile__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ResN_9, (MR_Integer) 0)));
              MR_Word read_profile__MaybeRevItems_61;

              {
                read_profile__read_n_things__ho8_6_p_0(read_profile__N_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__MaybeRevItems_61);
              }
              if (((MR_tag((MR_Word) read_profile__MaybeRevItems_61)) == (MR_mktag((MR_Integer) 1))))
                *read_profile__MaybeCoveragePoints_6 = (MR_Word) read_profile__MaybeRevItems_61;
              else
                {
                  MR_Word read_profile__CPsList_12;
                  MR_Word read_profile__V_20_20;
                  MR_ArrayPtr read_profile__V_21_21;
                  MR_Word read_profile__RevItems_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeRevItems_61, (MR_Integer) 0)));
                  MR_ArrayPtr read_profile__conv0_V_21_21;

                  {
                    mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__RevItems_62, &read_profile__CPsList_12);
                  }
                  {
                    read_profile__conv0_V_21_21 = mercury__array__array_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__CPsList_12);
                  }
                  read_profile__V_21_21 = (MR_ArrayPtr) read_profile__conv0_V_21_21;
                  {
                    read_profile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), read_profile__V_20_20, 0) = ((MR_Box) (read_profile__V_21_21));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *read_profile__MaybeCoveragePoints_6 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_20_20));
                  }
                }
            }
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          *read_profile__MaybeCoveragePoints_6 = (MR_Word) &read_profile_scalar_common_9[3];
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1)
{
  {
    MR_Box read_profile__wrapper_arg_2;
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_ArrayPtr read_profile__conv3_HeadVar__2_74;

    {
      read_profile__conv3_HeadVar__2_74 = read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_f_0(((MR_Word) read_profile__wrapper_arg_1));
    }
    read_profile__wrapper_arg_2 = ((MR_Box) (read_profile__conv3_HeadVar__2_74));
    return read_profile__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1)
{
  {
    MR_Box read_profile__wrapper_arg_2;
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_ArrayPtr read_profile__conv1_HeadVar__2_74;

    {
      read_profile__conv1_HeadVar__2_74 = read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_f_0(((MR_Word) read_profile__wrapper_arg_1));
    }
    read_profile__wrapper_arg_2 = ((MR_Box) (read_profile__conv1_HeadVar__2_74));
    return read_profile__wrapper_arg_2;
  }
}

static void MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0(
  MR_Word read_profile__ProfileStats_5,
  MR_Word * read_profile__MaybeCoveragePoints_6)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__CoverageDataType_8;
    MR_Word read_profile__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 9)));
    MR_String read_profile__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 0)));
    MR_Integer read_profile__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 1)));
    MR_Integer read_profile__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 2)));
    MR_Integer read_profile__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 3)));
    MR_Integer read_profile__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 4)));
    MR_Integer read_profile__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 5)));
    MR_Integer read_profile__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 6)));
    MR_Integer read_profile__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 7)));
    MR_Integer read_profile__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 8)));
    MR_Integer read_profile__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_25_25, (MR_Integer) 0)));
    MR_Word read_profile__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_25_25, (MR_Integer) 1)));

    read_profile__CoverageDataType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_25_25, (MR_Integer) 3)));
    switch (read_profile__CoverageDataType_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word read_profile__MaybeCoveragePoints0_9;
          MR_Word read_profile__MaybeNCP_10;

          {
            read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeNCP_10);
          }
          if (((MR_tag((MR_Word) read_profile__MaybeNCP_10)) == (MR_mktag((MR_Integer) 1))))
            read_profile__MaybeCoveragePoints0_9 = (MR_Word) read_profile__MaybeNCP_10;
          else
            {
              MR_Integer read_profile__NCP_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeNCP_10, (MR_Integer) 0)));

              switch (read_profile__CoverageDataType_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    MR_Word read_profile__MaybeCPInfos_17;

                    {
                      read_profile__read_n_things__ho2_5_p_0(read_profile__NCP_11, &read_profile__MaybeCPInfos_17);
                    }
                    if (((MR_tag((MR_Word) read_profile__MaybeCPInfos_17)) == (MR_mktag((MR_Integer) 1))))
                      read_profile__MaybeCoveragePoints0_9 = (MR_Word) read_profile__MaybeCPInfos_17;
                    else
                      {
                        MR_Word read_profile__V_29_29;
                        MR_Word read_profile__CPInfos_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCPInfos_17, (MR_Integer) 0)));

                        {
                          read_profile__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), read_profile__V_29_29, 0) = ((MR_Box) (read_profile__CPInfos_41));
                          MR_hl_field(MR_mktag(0), read_profile__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          read_profile__MaybeCoveragePoints0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), read_profile__MaybeCoveragePoints0_9, 0) = ((MR_Box) (read_profile__V_29_29));
                        }
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word read_profile__MaybeCPPairs_12;

                    {
                      read_profile__read_n_things__ho3_5_p_0(read_profile__NCP_11, &read_profile__MaybeCPPairs_12);
                    }
                    if (((MR_tag((MR_Word) read_profile__MaybeCPPairs_12)) == (MR_mktag((MR_Integer) 1))))
                      read_profile__MaybeCoveragePoints0_9 = (MR_Word) read_profile__MaybeCPPairs_12;
                    else
                      {
                        MR_Word read_profile__CPPairs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCPPairs_12, (MR_Integer) 0)));
                        MR_Word read_profile__CPInfos_14;
                        MR_Word read_profile__CPs_15;
                        MR_Word read_profile__V_33_33;
                        MR_Word read_profile__V_34_34;

                        {
                          mercury__assoc_list__keys_and_values_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__CPPairs_13, &read_profile__CPInfos_14, &read_profile__CPs_15);
                        }
                        {
                          read_profile__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), read_profile__V_34_34, 0) = ((MR_Box) (read_profile__CPs_15));
                        }
                        {
                          read_profile__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), read_profile__V_33_33, 0) = ((MR_Box) (read_profile__CPInfos_14));
                          MR_hl_field(MR_mktag(0), read_profile__V_33_33, 1) = ((MR_Box) (read_profile__V_34_34));
                        }
                        {
                          read_profile__MaybeCoveragePoints0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), read_profile__MaybeCoveragePoints0_9, 0) = ((MR_Box) (read_profile__V_33_33));
                        }
                      }
                  }
                  break;
              }
            }
          if (((MR_tag((MR_Word) read_profile__MaybeCoveragePoints0_9)) == (MR_mktag((MR_Integer) 1))))
            *read_profile__MaybeCoveragePoints_6 = (MR_Word) read_profile__MaybeCoveragePoints0_9;
          else
            {
              MR_Word read_profile__CPInfosList_18;
              MR_Word read_profile__MaybeCPsList_19;
              MR_ArrayPtr read_profile__CPInfosArray_20;
              MR_Word read_profile__MaybeCPsArray_21;
              MR_Word read_profile__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCoveragePoints0_9, (MR_Integer) 0)));
              MR_Word read_profile__V_40_40;
              MR_ArrayPtr read_profile__conv0_CPInfosArray_20;

              read_profile__CPInfosList_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_38_38, (MR_Integer) 0)));
              read_profile__MaybeCPsList_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_38_38, (MR_Integer) 1)));
              {
                read_profile__conv0_CPInfosArray_20 = mercury__array__array_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, read_profile__CPInfosList_18);
              }
              read_profile__CPInfosArray_20 = (MR_ArrayPtr) read_profile__conv0_CPInfosArray_20;
              {
                read_profile__MaybeCPsArray_21 = mercury__maybe__map_maybe_2_f_0((MR_Word) &read_profile_scalar_common_1[1], (MR_Word) &read_profile_scalar_common_1[2], (MR_Word) &read_profile_scalar_common_4[23], read_profile__MaybeCPsList_19);
              }
              {
                read_profile__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), read_profile__V_40_40, 0) = ((MR_Box) (read_profile__CPInfosArray_20));
                MR_hl_field(MR_mktag(0), read_profile__V_40_40, 1) = ((MR_Box) (read_profile__MaybeCPsArray_21));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *read_profile__MaybeCoveragePoints_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_40_40));
              }
            }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_ArrayPtr read_profile__CPInfosArray_95;
          MR_Word read_profile__MaybeCPsArray_96;
          MR_Word read_profile__V_99_99;
          MR_ArrayPtr read_profile__conv2_CPInfosArray_95;

          {
            read_profile__conv2_CPInfosArray_95 = mercury__array__array_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          read_profile__CPInfosArray_95 = (MR_ArrayPtr) read_profile__conv2_CPInfosArray_95;
          {
            read_profile__MaybeCPsArray_96 = mercury__maybe__map_maybe_2_f_0((MR_Word) &read_profile_scalar_common_1[1], (MR_Word) &read_profile_scalar_common_1[2], (MR_Word) &read_profile_scalar_common_4[24], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          {
            read_profile__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), read_profile__V_99_99, 0) = ((MR_Box) (read_profile__CPInfosArray_95));
            MR_hl_field(MR_mktag(0), read_profile__V_99_99, 1) = ((MR_Box) (read_profile__MaybeCPsArray_96));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *read_profile__MaybeCoveragePoints_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_99_99));
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
read_profile__read_proc_static_4_p_0_8(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1)
{
  {
    MR_Box read_profile__wrapper_arg_2;
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv7_HeadVar__2_2;

    {
      read_profile__conv7_HeadVar__2_2 = read_profile__make_cssptr_1_f_0(((MR_Integer) read_profile__wrapper_arg_1));
    }
    read_profile__wrapper_arg_2 = ((MR_Box) (read_profile__conv7_HeadVar__2_2));
    return read_profile__wrapper_arg_2;
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0_7(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3,
  MR_Box read_profile__wrapper_arg_4,
  MR_Box read_profile__wrapper_arg_5,
  MR_Box read_profile__wrapper_arg_6,
  MR_Box * read_profile__wrapper_arg_7)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv6_LambdaHeadVar__7_56;

    {
      read_profile__IntroducedFrom__pred__read_proc_static__471__1_7_p_0(((MR_Integer) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2), ((MR_String) read_profile__wrapper_arg_3), ((MR_Integer) read_profile__wrapper_arg_4), ((MR_Integer) read_profile__wrapper_arg_5), ((MR_Integer) read_profile__wrapper_arg_6), &read_profile__conv6_LambdaHeadVar__7_56);
    }
    *read_profile__wrapper_arg_7 = ((MR_Box) (read_profile__conv6_LambdaHeadVar__7_56));
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0_6(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv5_MaybeNum_4;

    {
      read_profile__read_num_3_p_0(&read_profile__conv5_MaybeNum_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv5_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0_5(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv4_MaybeByte_4;

    {
      read_profile__read_deep_byte_3_p_0(&read_profile__conv4_MaybeByte_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv4_MaybeByte_4));
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0_4(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv3_MaybeNum_4;

    {
      read_profile__read_num_3_p_0(&read_profile__conv3_MaybeNum_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv3_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv2_MaybeStr_4;

    {
      read_profile__read_string_3_p_0(&read_profile__conv2_MaybeStr_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv2_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv1_MaybeProcId_4;

    {
      read_profile__read_proc_id_3_p_0(&read_profile__conv1_MaybeProcId_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeProcId_4));
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv0_MaybePtr_6;

    {
      read_profile__read_ptr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), &read_profile__conv0_MaybePtr_6);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybePtr_6));
  }
}

static void MR_CALL 
read_profile__read_proc_static_4_p_0(
  MR_Word read_profile__ProfileStats_5,
  MR_Word * read_profile__MaybePS_6)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__TypeCtorInfo_103_103 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word read_profile__MaybeProcId_16;

    {
      io_combinator__maybe_error_sequence_6_10_p_0(read_profile__TypeCtorInfo_103_103, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, read_profile__TypeCtorInfo_103_103, read_profile__TypeCtorInfo_103_103, read_profile__TypeCtorInfo_103_103, (MR_Word) &read_profile_scalar_common_3[0], (MR_Word) &read_profile_scalar_common_2[4], (MR_Word) &read_profile_scalar_common_4[16], (MR_Word) &read_profile_scalar_common_4[17], (MR_Word) &read_profile_scalar_common_4[18], (MR_Word) &read_profile_scalar_common_4[19], (MR_Word) &read_profile_scalar_common_4[20], (MR_Word) &read_profile_scalar_common_4[21], &read_profile__MaybeProcId_16);
    }
    if (((MR_tag((MR_Word) read_profile__MaybeProcId_16)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String read_profile__Error_84 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeProcId_16, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *read_profile__MaybePS_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_84));
        }
      }
    else
      {
        MR_Integer read_profile__PSI_17;
        MR_Word read_profile__Id_18;
        MR_String read_profile__FileName_19;
        MR_Integer read_profile__LineNumber_20;
        MR_Integer read_profile__Interface_21;
        MR_Integer read_profile__NCS_22;
        MR_Word read_profile__MaybeCSSIs_23;
        MR_Tuple read_profile__V_58_58 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), read_profile__MaybeProcId_16, (MR_Integer) 0)));

        read_profile__PSI_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_58_58, (MR_Integer) 0)));
        read_profile__Id_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_58_58, (MR_Integer) 1)));
        read_profile__FileName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__V_58_58, (MR_Integer) 2)));
        read_profile__LineNumber_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_58_58, (MR_Integer) 3)));
        read_profile__Interface_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_58_58, (MR_Integer) 4)));
        read_profile__NCS_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_58_58, (MR_Integer) 5)));
        {
          read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_p_0(read_profile__NCS_22, &read_profile__MaybeCSSIs_23);
        }
        if (((MR_tag((MR_Word) read_profile__MaybeCSSIs_23)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String read_profile__Error_83 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeCSSIs_23, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *read_profile__MaybePS_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_83));
            }
          }
        else
          {
            MR_Word read_profile__CSSIs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSSIs_23, (MR_Integer) 0)));
            MR_Word read_profile__MaybeCoveragePoints_25;

            {
              read_profile__maybe_read_ps_coverage_points_4_p_0(read_profile__ProfileStats_5, &read_profile__MaybeCoveragePoints_25);
            }
            if (((MR_tag((MR_Word) read_profile__MaybeCoveragePoints_25)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_String read_profile__Error_35 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeCoveragePoints_25, (MR_Integer) 0)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *read_profile__MaybePS_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_35));
                }
              }
            else
              {
                MR_Word read_profile__TypeCtorInfo_110_110;
                MR_ArrayPtr read_profile__CPInfos_26;
                MR_Word read_profile__MaybeCPs_27;
                MR_Word read_profile__CSSPtrs_28;
                MR_String read_profile__DeclModule_29;
                MR_String read_profile__UnQualRefinedStr_30;
                MR_String read_profile__QualRefinedStr_31;
                MR_String read_profile__RawStr_32;
                MR_Word read_profile__IsInInterface_33;
                MR_Word read_profile__ProcStatic_34;
                MR_Word read_profile__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCoveragePoints_25, (MR_Integer) 0)));
                MR_ArrayPtr read_profile__V_65_65;
                MR_ArrayPtr read_profile__conv8_V_65_65;

                read_profile__CPInfos_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__V_63_63, (MR_Integer) 0)));
                read_profile__MaybeCPs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_63_63, (MR_Integer) 1)));
                read_profile__TypeCtorInfo_110_110 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
                {
                  read_profile__CSSPtrs_28 = mercury__list__map_2_f_0(read_profile__TypeCtorInfo_103_103, read_profile__TypeCtorInfo_110_110, (MR_Word) &read_profile_scalar_common_4[22], read_profile__CSSIs_24);
                }
                {
                  read_profile__DeclModule_29 = profile__decl_module_1_f_0(read_profile__Id_18);
                }
                {
                  read_profile__create_refined_proc_ids_3_p_0(read_profile__Id_18, &read_profile__UnQualRefinedStr_30, &read_profile__QualRefinedStr_31);
                }
                {
                  read_profile__RawStr_32 = read_profile__raw_proc_id_to_string_1_f_0(read_profile__Id_18);
                }
                read_profile__succeeded = (read_profile__Interface_21 == (MR_Integer) 0);
                if (read_profile__succeeded)
                  read_profile__IsInInterface_33 = (MR_Integer) 0;
                else
                  read_profile__IsInInterface_33 = (MR_Integer) 1;
                {
                  read_profile__conv8_V_65_65 = mercury__array__array_1_f_0(read_profile__TypeCtorInfo_110_110, read_profile__CSSPtrs_28);
                }
                read_profile__V_65_65 = (MR_ArrayPtr) read_profile__conv8_V_65_65;
                {
                  read_profile__ProcStatic_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 0) = ((MR_Box) (read_profile__Id_18));
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 1) = ((MR_Box) (read_profile__DeclModule_29));
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 2) = ((MR_Box) (read_profile__UnQualRefinedStr_30));
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 3) = ((MR_Box) (read_profile__QualRefinedStr_31));
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 4) = ((MR_Box) (read_profile__RawStr_32));
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 5) = ((MR_Box) (read_profile__FileName_19));
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 6) = ((MR_Box) (read_profile__LineNumber_20));
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 7) = ((MR_Box) (read_profile__IsInInterface_33));
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 8) = ((MR_Box) (read_profile__V_65_65));
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 9) = ((MR_Box) (read_profile__CPInfos_26));
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 10) = ((MR_Box) (read_profile__MaybeCPs_27));
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 11) = ((MR_Box) ((MR_Integer) 1));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *read_profile__MaybePS_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__ProcStatic_34));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (read_profile__PSI_17));
                }
              }
          }
      }
  }
}

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_5(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3,
  MR_Box read_profile__wrapper_arg_4,
  MR_Box * read_profile__wrapper_arg_5)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv4_LambdaHeadVar__5_36;

    {
      read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_p_0(((MR_Integer) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2), ((MR_Integer) read_profile__wrapper_arg_3), ((MR_String) read_profile__wrapper_arg_4), &read_profile__conv4_LambdaHeadVar__5_36);
    }
    *read_profile__wrapper_arg_5 = ((MR_Box) (read_profile__conv4_LambdaHeadVar__5_36));
  }
}

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_4(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv3_MaybeStr_4;

    {
      read_profile__read_string_3_p_0(&read_profile__conv3_MaybeStr_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv3_MaybeStr_4));
  }
}

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv2_MaybeNum_4;

    {
      read_profile__read_num_3_p_0(&read_profile__conv2_MaybeNum_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv2_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv1_MaybeKindAndCallee_4;

    {
      read_profile__read_call_site_kind_and_callee_3_p_0(&read_profile__conv1_MaybeKindAndCallee_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeKindAndCallee_4));
  }
}

static void MR_CALL 
read_profile__read_call_site_static_3_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv0_MaybePtr_6;

    {
      read_profile__read_ptr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), &read_profile__conv0_MaybePtr_6);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybePtr_6));
  }
}

static void MR_CALL 
read_profile__read_call_site_static_3_p_0(
  MR_Word * read_profile__MaybeCSS_4)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__TypeCtorInfo_65_65 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

    {
      io_combinator__maybe_error_sequence_4_8_p_0(read_profile__TypeCtorInfo_65_65, (MR_Word) &read_profile_scalar_common_1[0], read_profile__TypeCtorInfo_65_65, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &read_profile_scalar_common_2[0], (MR_Word) &read_profile_scalar_common_2[3], (MR_Word) &read_profile_scalar_common_4[12], (MR_Word) &read_profile_scalar_common_4[13], (MR_Word) &read_profile_scalar_common_4[14], (MR_Word) &read_profile_scalar_common_4[15], read_profile__MaybeCSS_4);
    }
  }
}

static void MR_CALL 
read_profile__read_nodes_3_5_p_0(
  MR_Integer read_profile__Depth_6,
  MR_Word read_profile__STATE_VARIABLE_InitDeep_0_36,
  MR_Word * read_profile__MaybeInitDeep_8)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__ProfileStats_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
    MR_Word read_profile__MaybeByte_11;
    MR_Word read_profile__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
    MR_ArrayPtr read_profile__V_94_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
    MR_ArrayPtr read_profile__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
    MR_ArrayPtr read_profile__V_96_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
    MR_ArrayPtr read_profile__V_97_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));

    {
      mercury__io__read_byte_3_p_0(&read_profile__MaybeByte_11);
    }
    switch (MR_tag((MR_Word) read_profile__MaybeByte_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *read_profile__MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) read_profile__STATE_VARIABLE_InitDeep_0_36);
        break;
      case (MR_Integer) 1:
        {
          MR_Integer read_profile__Byte_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__MaybeByte_11, (MR_Integer) 0)));
          MR_Word read_profile__NextItem_13;

          {
            read_profile__succeeded = read_profile__is_next_item_token_2_p_0(read_profile__Byte_12, &read_profile__NextItem_13);
          }
          if (read_profile__succeeded)
            switch (read_profile__NextItem_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case ((int) MR_deep_item_call_site_dynamic):
                {
                  MR_Word read_profile__MaybeCSD_14;

                  {
                    read_profile__read_call_site_dynamic_3_p_0(&read_profile__MaybeCSD_14);
                  }
                  if (((MR_tag((MR_Word) read_profile__MaybeCSD_14)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_String read_profile__Error_19 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeCSD_14, (MR_Integer) 0)));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *read_profile__MaybeInitDeep_8 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (read_profile__Error_19));
                      }
                    }
                  else
                    {
                      MR_Word read_profile__CallSiteDynamic_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSD_14, (MR_Integer) 0)));
                      MR_Integer read_profile__CSDI_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSD_14, (MR_Integer) 1)));
                      MR_ArrayPtr read_profile__CSDs0_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      MR_ArrayPtr read_profile__CSDs_18;
                      MR_Word read_profile__STATE_VARIABLE_InitDeep_51_51;
                      MR_Word read_profile__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      MR_Word read_profile__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      MR_ArrayPtr read_profile__V_100_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      MR_ArrayPtr read_profile__V_101_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      MR_ArrayPtr read_profile__V_102_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      MR_ArrayPtr read_profile__conv0_CSDs_18;
                      MR_Word read_profile__V_103_103;
                      MR_Word read_profile__V_104_104;
                      MR_ArrayPtr read_profile__V_106_106;
                      MR_ArrayPtr read_profile__V_107_107;
                      MR_ArrayPtr read_profile__V_108_108;
                      MR_ArrayPtr read_profile__V_105_105;

                      {
                        read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) read_profile__CSDs0_17, read_profile__CSDI_16, ((MR_Box) (read_profile__CallSiteDynamic_15)), &read_profile__conv0_CSDs_18);
                      }
                      read_profile__CSDs_18 = (MR_ArrayPtr) read_profile__conv0_CSDs_18;
                      read_profile__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      read_profile__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      read_profile__V_105_105 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      read_profile__V_106_106 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      read_profile__V_107_107 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      read_profile__V_108_108 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      {
                        read_profile__STATE_VARIABLE_InitDeep_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_51, 0) = ((MR_Box) (read_profile__V_103_103));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_51, 1) = ((MR_Box) (read_profile__V_104_104));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_51, 2) = ((MR_Box) (read_profile__CSDs_18));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_51, 3) = ((MR_Box) (read_profile__V_106_106));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_51, 4) = ((MR_Box) (read_profile__V_107_107));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_51, 5) = ((MR_Box) (read_profile__V_108_108));
                      }
                      {
                        read_profile__read_nodes_2_5_p_0(read_profile__Depth_6, read_profile__STATE_VARIABLE_InitDeep_51_51, read_profile__MaybeInitDeep_8);
                      }
                    }
                }
                break;
              case ((int) MR_deep_item_call_site_static):
                {
                  MR_Word read_profile__MaybeCSS_25;

                  {
                    read_profile__read_call_site_static_3_p_0(&read_profile__MaybeCSS_25);
                  }
                  if (((MR_tag((MR_Word) read_profile__MaybeCSS_25)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_String read_profile__Error_69 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeCSS_25, (MR_Integer) 0)));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *read_profile__MaybeInitDeep_8 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (read_profile__Error_69));
                      }
                    }
                  else
                    {
                      MR_Word read_profile__CallSiteStatic_26;
                      MR_Integer read_profile__CSSI_27;
                      MR_ArrayPtr read_profile__CSSs0_28;
                      MR_ArrayPtr read_profile__CSSs_29;
                      MR_Tuple read_profile__V_44_44 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSS_25, (MR_Integer) 0)));
                      MR_Word read_profile__STATE_VARIABLE_InitDeep_51_67;
                      MR_Word read_profile__V_120_120;
                      MR_Word read_profile__V_121_121;
                      MR_ArrayPtr read_profile__V_122_122;
                      MR_ArrayPtr read_profile__V_123_123;
                      MR_ArrayPtr read_profile__V_124_124;
                      MR_ArrayPtr read_profile__conv1_CSSs_29;
                      MR_Word read_profile__V_125_125;
                      MR_Word read_profile__V_126_126;
                      MR_ArrayPtr read_profile__V_127_127;
                      MR_ArrayPtr read_profile__V_128_128;
                      MR_ArrayPtr read_profile__V_130_130;
                      MR_ArrayPtr read_profile__V_129_129;

                      read_profile__CallSiteStatic_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_44_44, (MR_Integer) 0)));
                      read_profile__CSSI_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_44_44, (MR_Integer) 1)));
                      read_profile__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      read_profile__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      read_profile__V_122_122 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      read_profile__V_123_123 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      read_profile__CSSs0_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      read_profile__V_124_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      {
                        read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_ArrayPtr) read_profile__CSSs0_28, read_profile__CSSI_27, ((MR_Box) (read_profile__CallSiteStatic_26)), &read_profile__conv1_CSSs_29);
                      }
                      read_profile__CSSs_29 = (MR_ArrayPtr) read_profile__conv1_CSSs_29;
                      read_profile__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      read_profile__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      read_profile__V_127_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      read_profile__V_128_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      read_profile__V_129_129 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      read_profile__V_130_130 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      {
                        read_profile__STATE_VARIABLE_InitDeep_51_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_67, 0) = ((MR_Box) (read_profile__V_125_125));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_67, 1) = ((MR_Box) (read_profile__V_126_126));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_67, 2) = ((MR_Box) (read_profile__V_127_127));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_67, 3) = ((MR_Box) (read_profile__V_128_128));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_67, 4) = ((MR_Box) (read_profile__CSSs_29));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_67, 5) = ((MR_Box) (read_profile__V_130_130));
                      }
                      {
                        read_profile__read_nodes_2_5_p_0(read_profile__Depth_6, read_profile__STATE_VARIABLE_InitDeep_51_67, read_profile__MaybeInitDeep_8);
                      }
                    }
                }
                break;
              case ((int) MR_deep_item_end):
                *read_profile__MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) read_profile__STATE_VARIABLE_InitDeep_0_36);
                break;
              case ((int) MR_deep_item_proc_dynamic):
                {
                  MR_Word read_profile__MaybePD_20;

                  {
                    read_profile__read_proc_dynamic_4_p_0(read_profile__ProfileStats_10, &read_profile__MaybePD_20);
                  }
                  if (((MR_tag((MR_Word) read_profile__MaybePD_20)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_String read_profile__Error_61 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybePD_20, (MR_Integer) 0)));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *read_profile__MaybeInitDeep_8 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (read_profile__Error_61));
                      }
                    }
                  else
                    {
                      MR_Word read_profile__ProcDynamic_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybePD_20, (MR_Integer) 0)));
                      MR_Integer read_profile__PDI_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybePD_20, (MR_Integer) 1)));
                      MR_ArrayPtr read_profile__PDs0_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      MR_ArrayPtr read_profile__PDs_24;
                      MR_Word read_profile__STATE_VARIABLE_InitDeep_51_59;
                      MR_Word read_profile__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      MR_Word read_profile__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      MR_ArrayPtr read_profile__V_111_111 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      MR_ArrayPtr read_profile__V_112_112 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      MR_ArrayPtr read_profile__V_113_113 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      MR_ArrayPtr read_profile__conv2_PDs_24;
                      MR_Word read_profile__V_114_114;
                      MR_Word read_profile__V_115_115;
                      MR_ArrayPtr read_profile__V_116_116;
                      MR_ArrayPtr read_profile__V_118_118;
                      MR_ArrayPtr read_profile__V_119_119;
                      MR_ArrayPtr read_profile__V_117_117;

                      {
                        read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) read_profile__PDs0_23, read_profile__PDI_22, ((MR_Box) (read_profile__ProcDynamic_21)), &read_profile__conv2_PDs_24);
                      }
                      read_profile__PDs_24 = (MR_ArrayPtr) read_profile__conv2_PDs_24;
                      read_profile__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      read_profile__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      read_profile__V_116_116 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      read_profile__V_117_117 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      read_profile__V_118_118 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      read_profile__V_119_119 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      {
                        read_profile__STATE_VARIABLE_InitDeep_51_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_59, 0) = ((MR_Box) (read_profile__V_114_114));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_59, 1) = ((MR_Box) (read_profile__V_115_115));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_59, 2) = ((MR_Box) (read_profile__V_116_116));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_59, 3) = ((MR_Box) (read_profile__PDs_24));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_59, 4) = ((MR_Box) (read_profile__V_118_118));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_59, 5) = ((MR_Box) (read_profile__V_119_119));
                      }
                      {
                        read_profile__read_nodes_2_5_p_0(read_profile__Depth_6, read_profile__STATE_VARIABLE_InitDeep_51_59, read_profile__MaybeInitDeep_8);
                      }
                    }
                }
                break;
              case ((int) MR_deep_item_proc_static):
                {
                  MR_Word read_profile__MaybePS_30;

                  {
                    read_profile__read_proc_static_4_p_0(read_profile__ProfileStats_10, &read_profile__MaybePS_30);
                  }
                  if (((MR_tag((MR_Word) read_profile__MaybePS_30)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_String read_profile__Error_77 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybePS_30, (MR_Integer) 0)));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *read_profile__MaybeInitDeep_8 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (read_profile__Error_77));
                      }
                    }
                  else
                    {
                      MR_Word read_profile__ProcStatic_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybePS_30, (MR_Integer) 0)));
                      MR_Integer read_profile__PSI_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybePS_30, (MR_Integer) 1)));
                      MR_ArrayPtr read_profile__PSs0_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      MR_ArrayPtr read_profile__PSs_34;
                      MR_Word read_profile__STATE_VARIABLE_InitDeep_51_75;
                      MR_Word read_profile__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      MR_Word read_profile__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      MR_ArrayPtr read_profile__V_133_133 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      MR_ArrayPtr read_profile__V_134_134 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      MR_ArrayPtr read_profile__V_135_135 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      MR_ArrayPtr read_profile__conv3_PSs_34;
                      MR_Word read_profile__V_136_136;
                      MR_Word read_profile__V_137_137;
                      MR_ArrayPtr read_profile__V_138_138;
                      MR_ArrayPtr read_profile__V_139_139;
                      MR_ArrayPtr read_profile__V_140_140;
                      MR_ArrayPtr read_profile__V_141_141;

                      {
                        read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_ArrayPtr) read_profile__PSs0_33, read_profile__PSI_32, ((MR_Box) (read_profile__ProcStatic_31)), &read_profile__conv3_PSs_34);
                      }
                      read_profile__PSs_34 = (MR_ArrayPtr) read_profile__conv3_PSs_34;
                      read_profile__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
                      read_profile__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
                      read_profile__V_138_138 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
                      read_profile__V_139_139 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
                      read_profile__V_140_140 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
                      read_profile__V_141_141 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
                      {
                        read_profile__STATE_VARIABLE_InitDeep_51_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_75, 0) = ((MR_Box) (read_profile__V_136_136));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_75, 1) = ((MR_Box) (read_profile__V_137_137));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_75, 2) = ((MR_Box) (read_profile__V_138_138));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_75, 3) = ((MR_Box) (read_profile__V_139_139));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_75, 4) = ((MR_Box) (read_profile__V_140_140));
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_75, 5) = ((MR_Box) (read_profile__PSs_34));
                      }
                      {
                        read_profile__read_nodes_2_5_p_0(read_profile__Depth_6, read_profile__STATE_VARIABLE_InitDeep_51_75, read_profile__MaybeInitDeep_8);
                      }
                    }
                }
                break;
            }
          else
            {
              MR_String read_profile__Msg_35;
              MR_String read_profile__V_146_146;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &read_profile_scalar_common_9[2], read_profile__Byte_12, &read_profile__V_146_146);
              }
              {
                read_profile__Msg_35 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected token ", read_profile__V_146_146);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *read_profile__MaybeInitDeep_8 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (read_profile__Msg_35));
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word read_profile__Error_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), read_profile__MaybeByte_11, (MR_Integer) 0)));
          MR_String read_profile__Msg_91;

          {
            mercury__io__error_message_2_p_0(read_profile__Error_90, &read_profile__Msg_91);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *read_profile__MaybeInitDeep_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (read_profile__Msg_91));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
read_profile__read_nodes_2_5_p_0(
  MR_Integer read_profile__Depth_6,
  MR_Word read_profile__STATE_VARIABLE_InitDeep_0_10,
  MR_Word * read_profile__MaybeInitDeep_8)
{
  {
    MR_bool read_profile__succeeded = (read_profile__Depth_6 < (MR_Integer) 1);

    if (read_profile__succeeded)
      *read_profile__MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) read_profile__STATE_VARIABLE_InitDeep_0_10);
    else
      {
        MR_Integer read_profile__V_14_14 = (read_profile__Depth_6 - (MR_Integer) 1);

        {
          read_profile__read_nodes_3_5_p_0(read_profile__V_14_14, read_profile__STATE_VARIABLE_InitDeep_0_10, read_profile__MaybeInitDeep_8);
        }
      }
  }
}

static void MR_CALL 
read_profile__read_nodes_4_p_0(
  MR_Word read_profile__InitDeep0_5,
  MR_Word * read_profile__MaybeInitDeep_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool read_profile__succeeded;
        MR_Word read_profile__MaybeInitDeep0_8;

        {
          read_profile__read_nodes_3_5_p_0(((MR_Integer) 50000 - (MR_Integer) 1), read_profile__InitDeep0_5, &read_profile__MaybeInitDeep0_8);
        }
        switch (MR_tag((MR_Word) read_profile__MaybeInitDeep0_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word read_profile__InitDeep_9 = (MR_Word) MR_body(((MR_Word) read_profile__MaybeInitDeep0_8), (MR_Integer) 0);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *read_profile__MaybeInitDeep_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__InitDeep_9));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word read_profile__InitDeep1_11 = (MR_Word) MR_body(((MR_Word) read_profile__MaybeInitDeep0_8), (MR_Integer) 1);

              /* direct tailcall eliminated */
              {
                MR_Word read_profile__InitDeep0__tmp_copy_5 = read_profile__InitDeep1_11;

                read_profile__InitDeep0_5 = read_profile__InitDeep0__tmp_copy_5;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String read_profile__Error_10 = ((MR_String) (MR_hl_field(MR_mktag(2), read_profile__MaybeInitDeep0_8, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *read_profile__MaybeInitDeep_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_10));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
read_profile__maybe_deep_flags_2_p_0(
  MR_Integer read_profile__FlagsInt_3,
  MR_Word * read_profile__MaybeFlags_4)
{
  {
    MR_bool read_profile__succeeded;
    MR_Integer read_profile__BytesPerInt_5;
    MR_Integer read_profile__Canonical_6;
    MR_Integer read_profile__Compression_7;
    MR_Integer read_profile__Coverage_8;
    MR_Integer read_profile__V_12_12 = (read_profile__FlagsInt_3 & (MR_Integer) 255);
    MR_Integer read_profile__V_15_15;
    MR_Integer read_profile__V_18_18;
    MR_Integer read_profile__V_21_21;
    MR_Word read_profile__CanonicalFlag_9;
    MR_Word read_profile__CoverageFlag_11;
    MR_Integer read_profile__V_24_24;
    MR_Integer read_profile__V_25_25;
    MR_Integer read_profile__V_34_34;

    {
      read_profile__BytesPerInt_5 = mercury__int__f_62_62_2_f_0(read_profile__V_12_12, (MR_Integer) 0);
    }
    read_profile__V_15_15 = (read_profile__FlagsInt_3 & (MR_Integer) 768);
    {
      read_profile__Canonical_6 = mercury__int__f_62_62_2_f_0(read_profile__V_15_15, (MR_Integer) 8);
    }
    read_profile__V_18_18 = (read_profile__FlagsInt_3 & (MR_Integer) 3072);
    {
      read_profile__Compression_7 = mercury__int__f_62_62_2_f_0(read_profile__V_18_18, (MR_Integer) 10);
    }
    read_profile__V_21_21 = (read_profile__FlagsInt_3 & (MR_Integer) 12288);
    {
      read_profile__Coverage_8 = mercury__int__f_62_62_2_f_0(read_profile__V_21_21, (MR_Integer) 12);
    }
    read_profile__succeeded = (read_profile__Compression_7 == (MR_Integer) 0);
    if (read_profile__succeeded)
      {
        switch (read_profile__Canonical_6) {
          default:
            read_profile__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              read_profile__CanonicalFlag_9 = (MR_Integer) 1;
              read_profile__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              read_profile__CanonicalFlag_9 = (MR_Integer) 0;
              read_profile__succeeded = MR_TRUE;
            }
            break;
        }
        if (read_profile__succeeded)
          {
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
            switch (read_profile__Coverage_8) {
              default:
                read_profile__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  read_profile__CoverageFlag_11 = (MR_Integer) 0;
                  read_profile__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  read_profile__CoverageFlag_11 = (MR_Integer) 1;
                  read_profile__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  read_profile__CoverageFlag_11 = (MR_Integer) 2;
                  read_profile__succeeded = MR_TRUE;
                }
                break;
            }
            if (read_profile__succeeded)
              {
                read_profile__V_24_24 = (MR_Integer) 0;
                read_profile__V_25_25 = (MR_Integer) -16384;
                read_profile__V_34_34 = (read_profile__V_25_25 & read_profile__FlagsInt_3);
                read_profile__succeeded = (read_profile__V_24_24 == read_profile__V_34_34);
              }
          }
      }
    if (read_profile__succeeded)
      {
        MR_Word read_profile__V_27_27;

        {
          read_profile__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), read_profile__V_27_27, 0) = ((MR_Box) (read_profile__BytesPerInt_5));
          MR_hl_field(MR_mktag(0), read_profile__V_27_27, 1) = ((MR_Box) (read_profile__CanonicalFlag_9));
          MR_hl_field(MR_mktag(0), read_profile__V_27_27, 2) = NULL;
          MR_hl_field(MR_mktag(0), read_profile__V_27_27, 3) = ((MR_Box) (read_profile__CoverageFlag_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *read_profile__MaybeFlags_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_27_27));
        }
      }
    else
      {
        MR_String read_profile__V_28_28;
        MR_String read_profile__V_35_35;

        {
          mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) &read_profile_scalar_common_9[2], (MR_Integer) 2, read_profile__FlagsInt_3, &read_profile__V_35_35);
        }
        {
          read_profile__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) "Error parsing flags in file header, flags are 0x", read_profile__V_35_35);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *read_profile__MaybeFlags_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__V_28_28));
        }
      }
  }
}

static void MR_CALL 
read_profile__maybe_init_deep_12_p_0(
  MR_String read_profile__ProgName_13,
  MR_Integer read_profile__FlagsInt_14,
  MR_Integer read_profile__MaxCSD_15,
  MR_Integer read_profile__MaxCSS_16,
  MR_Integer read_profile__MaxPD_17,
  MR_Integer read_profile__MaxPS_18,
  MR_Integer read_profile__TicksPerSec_19,
  MR_Integer read_profile__InstrumentQuanta_20,
  MR_Integer read_profile__UserQuanta_21,
  MR_Integer read_profile__NumCallSeqs_22,
  MR_Integer read_profile__RootPDI_23,
  MR_Word * read_profile__MaybeInitDeep_24)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__MaybeFlags_25;

    {
      read_profile__maybe_deep_flags_2_p_0(read_profile__FlagsInt_14, &read_profile__MaybeFlags_25);
    }
    if (((MR_tag((MR_Word) read_profile__MaybeFlags_25)) == (MR_mktag((MR_Integer) 1))))
      *read_profile__MaybeInitDeep_24 = (MR_Word) read_profile__MaybeFlags_25;
    else
      {
        MR_Word read_profile__Flags_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeFlags_25, (MR_Integer) 0)));
        MR_Word read_profile__InitStats_27;
        MR_Word read_profile__InitDeep_28;
        MR_Word read_profile__V_30_30;
        MR_ArrayPtr read_profile__V_31_31;
        MR_Integer read_profile__V_32_32;
        MR_Word read_profile__V_34_34;
        MR_Word read_profile__V_35_35;
        MR_Word read_profile__V_37_37;
        MR_ArrayPtr read_profile__V_38_38;
        MR_Integer read_profile__V_39_39;
        MR_Word read_profile__V_41_41;
        MR_ArrayPtr read_profile__V_43_43;
        MR_ArrayPtr read_profile__V_46_46;
        MR_Integer read_profile__V_47_47;
        MR_ArrayPtr read_profile__V_57_57;
        MR_Integer read_profile__V_58_58;
        MR_Word read_profile__V_60_60;
        MR_Word read_profile__V_61_61;
        MR_ArrayPtr read_profile__V_69_69;
        MR_ArrayPtr read_profile__V_71_71;
        MR_ArrayPtr read_profile__conv0_V_31_31;
        MR_ArrayPtr read_profile__conv1_V_43_43;
        MR_ArrayPtr read_profile__conv2_V_38_38;
        MR_ArrayPtr read_profile__conv3_V_46_46;
        MR_ArrayPtr read_profile__conv4_V_69_69;
        MR_ArrayPtr read_profile__conv5_V_71_71;
        MR_ArrayPtr read_profile__conv6_V_57_57;

        {
          read_profile__InitStats_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 0) = ((MR_Box) (read_profile__ProgName_13));
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 1) = ((MR_Box) (read_profile__MaxCSD_15));
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 2) = ((MR_Box) (read_profile__MaxCSS_16));
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 3) = ((MR_Box) (read_profile__MaxPD_17));
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 4) = ((MR_Box) (read_profile__MaxPS_18));
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 5) = ((MR_Box) (read_profile__TicksPerSec_19));
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 6) = ((MR_Box) (read_profile__InstrumentQuanta_20));
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 7) = ((MR_Box) (read_profile__UserQuanta_21));
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 8) = ((MR_Box) (read_profile__NumCallSeqs_22));
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 9) = ((MR_Box) (read_profile__Flags_26));
        }
        read_profile__V_30_30 = (MR_Word) read_profile__RootPDI_23;
        read_profile__V_32_32 = (read_profile__MaxCSD_15 + (MR_Integer) 1);
        read_profile__V_35_35 = (MR_Word) ((MR_Box) ((MR_Integer) -1));
        {
          read_profile__V_37_37 = measurements__zero_own_prof_info_0_f_0();
        }
        {
          read_profile__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), read_profile__V_34_34, 0) = ((MR_Box) (read_profile__V_35_35));
          MR_hl_field(MR_mktag(0), read_profile__V_34_34, 1) = ((MR_Box) (read_profile__V_35_35));
          MR_hl_field(MR_mktag(0), read_profile__V_34_34, 2) = ((MR_Box) (read_profile__V_37_37));
        }
        {
          read_profile__conv0_V_31_31 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, read_profile__V_32_32, ((MR_Box) (read_profile__V_34_34)));
        }
        read_profile__V_31_31 = (MR_ArrayPtr) read_profile__conv0_V_31_31;
        read_profile__V_39_39 = (read_profile__MaxPD_17 + (MR_Integer) 1);
        {
          read_profile__conv1_V_43_43 = mercury__array__array_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        read_profile__V_43_43 = (MR_ArrayPtr) read_profile__conv1_V_43_43;
        {
          read_profile__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), read_profile__V_41_41, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
          MR_hl_field(MR_mktag(0), read_profile__V_41_41, 1) = ((MR_Box) (read_profile__V_43_43));
          MR_hl_field(MR_mktag(0), read_profile__V_41_41, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          read_profile__conv2_V_38_38 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, read_profile__V_39_39, ((MR_Box) (read_profile__V_41_41)));
        }
        read_profile__V_38_38 = (MR_ArrayPtr) read_profile__conv2_V_38_38;
        read_profile__V_47_47 = (read_profile__MaxCSS_16 + (MR_Integer) 1);
        {
          read_profile__conv3_V_46_46 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, read_profile__V_47_47, ((MR_Box) (&read_profile_scalar_common_5[1])));
        }
        read_profile__V_46_46 = (MR_ArrayPtr) read_profile__conv3_V_46_46;
        read_profile__V_58_58 = (read_profile__MaxPS_18 + (MR_Integer) 1);
        {
          read_profile__V_61_61 = profile__dummy_proc_id_0_f_0();
        }
        {
          read_profile__conv4_V_69_69 = mercury__array__array_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        read_profile__V_69_69 = (MR_ArrayPtr) read_profile__conv4_V_69_69;
        {
          read_profile__conv5_V_71_71 = mercury__array__array_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        read_profile__V_71_71 = (MR_ArrayPtr) read_profile__conv5_V_71_71;
        {
          read_profile__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 0) = ((MR_Box) (read_profile__V_61_61));
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 1) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 2) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 3) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 4) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 5) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 6) = ((MR_Box) ((MR_Integer) -1));
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 7) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 8) = ((MR_Box) (read_profile__V_69_69));
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 9) = ((MR_Box) (read_profile__V_71_71));
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 11) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          read_profile__conv6_V_57_57 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, read_profile__V_58_58, ((MR_Box) (read_profile__V_60_60)));
        }
        read_profile__V_57_57 = (MR_ArrayPtr) read_profile__conv6_V_57_57;
        {
          read_profile__InitDeep_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), read_profile__InitDeep_28, 0) = ((MR_Box) (read_profile__InitStats_27));
          MR_hl_field(MR_mktag(0), read_profile__InitDeep_28, 1) = ((MR_Box) (read_profile__V_30_30));
          MR_hl_field(MR_mktag(0), read_profile__InitDeep_28, 2) = ((MR_Box) (read_profile__V_31_31));
          MR_hl_field(MR_mktag(0), read_profile__InitDeep_28, 3) = ((MR_Box) (read_profile__V_38_38));
          MR_hl_field(MR_mktag(0), read_profile__InitDeep_28, 4) = ((MR_Box) (read_profile__V_46_46));
          MR_hl_field(MR_mktag(0), read_profile__InitDeep_28, 5) = ((MR_Box) (read_profile__V_57_57));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *read_profile__MaybeInitDeep_24 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__InitDeep_28));
        }
      }
  }
}

static void MR_CALL 
read_profile__read_deep_id_string_3_p_0(
  MR_Word * read_profile__MaybeVersionNumber_4)
{
  {
    MR_bool read_profile__succeeded;
    MR_Integer read_profile__FirstLineLenLimit_6;
    MR_Word read_profile__MaybeLine_7;
    MR_Integer read_profile__V_15_15;

    {
      read_profile__V_15_15 = mercury__string__length_1_f_0((MR_String) "Mercury deep profiler data version ");
    }
    read_profile__FirstLineLenLimit_6 = (read_profile__V_15_15 + (MR_Integer) 10);
    {
      read_profile__read_line_acc_5_p_0(read_profile__FirstLineLenLimit_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__MaybeLine_7);
    }
    if (((MR_tag((MR_Word) read_profile__MaybeLine_7)) == (MR_mktag((MR_Integer) 1))))
      *read_profile__MaybeVersionNumber_4 = (MR_Word) read_profile__MaybeLine_7;
    else
      {
        MR_String read_profile__Line0_8 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__MaybeLine_7, (MR_Integer) 0)));
        MR_String read_profile__Line_9;
        MR_Integer read_profile__VersionNumber_11;
        MR_String read_profile__Suffix_10;

        {
          read_profile__Line_9 = mercury__string__chomp_1_f_0(read_profile__Line0_8);
        }
        {
          read_profile__succeeded = mercury__string__append_3_p_1((MR_String) "Mercury deep profiler data version ", &read_profile__Suffix_10, read_profile__Line_9);
        }
        if (read_profile__succeeded)
          {
            read_profile__succeeded = mercury__string__to_int_2_p_0(read_profile__Suffix_10, &read_profile__VersionNumber_11);
          }
        if (read_profile__succeeded)
          {
            read_profile__succeeded = (read_profile__VersionNumber_11 == (MR_Integer) 8);
            if (read_profile__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *read_profile__MaybeVersionNumber_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__VersionNumber_11));
              }
            else
              {
                *read_profile__MaybeVersionNumber_4 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_9[0]);
              }
          }
        else
          {
            *read_profile__MaybeVersionNumber_4 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_9[1]);
          }
      }
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_12(
  MR_Box read_profile__closure_arg,
  MR_Box read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box read_profile__wrapper_arg_3,
  MR_Box read_profile__wrapper_arg_4,
  MR_Box read_profile__wrapper_arg_5,
  MR_Box read_profile__wrapper_arg_6,
  MR_Box read_profile__wrapper_arg_7,
  MR_Box read_profile__wrapper_arg_8,
  MR_Box read_profile__wrapper_arg_9,
  MR_Box read_profile__wrapper_arg_10,
  MR_Box read_profile__wrapper_arg_11,
  MR_Box * read_profile__wrapper_arg_12)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv11_MaybeInitDeep_24;

    {
      read_profile__maybe_init_deep_12_p_0(((MR_String) read_profile__wrapper_arg_1), ((MR_Integer) read_profile__wrapper_arg_2), ((MR_Integer) read_profile__wrapper_arg_3), ((MR_Integer) read_profile__wrapper_arg_4), ((MR_Integer) read_profile__wrapper_arg_5), ((MR_Integer) read_profile__wrapper_arg_6), ((MR_Integer) read_profile__wrapper_arg_7), ((MR_Integer) read_profile__wrapper_arg_8), ((MR_Integer) read_profile__wrapper_arg_9), ((MR_Integer) read_profile__wrapper_arg_10), ((MR_Integer) read_profile__wrapper_arg_11), &read_profile__conv11_MaybeInitDeep_24);
    }
    *read_profile__wrapper_arg_12 = ((MR_Box) (read_profile__conv11_MaybeInitDeep_24));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_11(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv10_MaybePtr_6;

    {
      read_profile__read_ptr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), &read_profile__conv10_MaybePtr_6);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv10_MaybePtr_6));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_10(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv9_MaybeNum_4;

    {
      read_profile__read_num_3_p_0(&read_profile__conv9_MaybeNum_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv9_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_9(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv8_MaybeNum_4;

    {
      read_profile__read_num_3_p_0(&read_profile__conv8_MaybeNum_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv8_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_8(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv7_MaybeNum_4;

    {
      read_profile__read_num_3_p_0(&read_profile__conv7_MaybeNum_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv7_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_7(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv6_MaybeNum_4;

    {
      read_profile__read_num_3_p_0(&read_profile__conv6_MaybeNum_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv6_MaybeNum_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_6(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv5_MaybeInt_4;

    {
      read_profile__read_fixed_size_int_3_p_0(&read_profile__conv5_MaybeInt_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv5_MaybeInt_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_5(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv4_MaybeInt_4;

    {
      read_profile__read_fixed_size_int_3_p_0(&read_profile__conv4_MaybeInt_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv4_MaybeInt_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_4(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv3_MaybeInt_4;

    {
      read_profile__read_fixed_size_int_3_p_0(&read_profile__conv3_MaybeInt_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv3_MaybeInt_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_3(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv2_MaybeInt_4;

    {
      read_profile__read_fixed_size_int_3_p_0(&read_profile__conv2_MaybeInt_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv2_MaybeInt_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_2(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv1_MaybeInt_4;

    {
      read_profile__read_fixed_size_int_3_p_0(&read_profile__conv1_MaybeInt_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeInt_4));
  }
}

static void MR_CALL 
read_profile__read_call_graph_4_p_0_1(
  MR_Box read_profile__closure_arg,
  MR_Box * read_profile__wrapper_arg_1,
  MR_Box read_profile__wrapper_arg_2,
  MR_Box * read_profile__wrapper_arg_3)
{
  {
    MR_Box read_profile__closure = read_profile__closure_arg;
    MR_Word read_profile__conv0_MaybeStr_4;

    {
      read_profile__read_string_3_p_0(&read_profile__conv0_MaybeStr_4);
    }
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybeStr_4));
  }
}

void MR_CALL 
read_profile__read_call_graph_4_p_0(
  MR_String read_profile__FileName_5,
  MR_Word * read_profile__MaybeInitDeep_6)
{
  {
    MR_bool read_profile__succeeded;
    MR_Word read_profile__OpenResult_8;

    {
      mercury__io__open_binary_input_4_p_0(read_profile__FileName_5, &read_profile__OpenResult_8);
    }
    if (((MR_tag((MR_Word) read_profile__OpenResult_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word read_profile__Error_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__OpenResult_8, (MR_Integer) 0)));
        MR_String read_profile__Msg_40;

        {
          mercury__io__error_message_2_p_0(read_profile__Error_39, &read_profile__Msg_40);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *read_profile__MaybeInitDeep_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Msg_40));
        }
      }
    else
      {
        MR_Word read_profile__FileStream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__OpenResult_8, (MR_Integer) 0)));
        MR_Word read_profile__OldStream_10;
        MR_Word read_profile__MaybeVersionNumber_11;
        MR_Word read_profile__V_17_17;

        {
          mercury__io__set_binary_input_stream_4_p_0(read_profile__FileStream_9, &read_profile__OldStream_10);
        }
        {
          read_profile__read_deep_id_string_3_p_0(&read_profile__MaybeVersionNumber_11);
        }
        if (((MR_tag((MR_Word) read_profile__MaybeVersionNumber_11)) == (MR_mktag((MR_Integer) 1))))
          *read_profile__MaybeInitDeep_6 = (MR_Word) read_profile__MaybeVersionNumber_11;
        else
          {
            MR_Word read_profile__TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Word read_profile__MaybeInitDeepHeader_13;

            {
              io_combinator__maybe_error_sequence_11_15_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, (MR_Word) &profile__profile__type_ctor_info_initial_deep_0, (MR_Word) &read_profile_scalar_common_4[1], (MR_Word) &read_profile_scalar_common_4[2], (MR_Word) &read_profile_scalar_common_4[3], (MR_Word) &read_profile_scalar_common_4[4], (MR_Word) &read_profile_scalar_common_4[5], (MR_Word) &read_profile_scalar_common_4[6], (MR_Word) &read_profile_scalar_common_4[7], (MR_Word) &read_profile_scalar_common_4[8], (MR_Word) &read_profile_scalar_common_4[9], (MR_Word) &read_profile_scalar_common_4[10], (MR_Word) &read_profile_scalar_common_2[2], (MR_Word) &read_profile_scalar_common_4[11], &read_profile__MaybeInitDeepHeader_13);
            }
            if (((MR_tag((MR_Word) read_profile__MaybeInitDeepHeader_13)) == (MR_mktag((MR_Integer) 1))))
              *read_profile__MaybeInitDeep_6 = read_profile__MaybeInitDeepHeader_13;
            else
              {
                MR_Word read_profile__InitDeep_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeInitDeepHeader_13, (MR_Integer) 0)));

                {
                  read_profile__read_nodes_4_p_0(read_profile__InitDeep_14, read_profile__MaybeInitDeep_6);
                }
              }
          }
        {
          mercury__io__set_binary_input_stream_4_p_0(read_profile__OldStream_10, &read_profile__V_17_17);
        }
      }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module read_profile. */
