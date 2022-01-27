/*
** Automatically generated from `read_profile.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 85 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 88 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 91 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__type_ctor_info_initial_deep_0__plain_builtin__type_ctor_info_string_0;

#line 94 "read_profile.c"
static const MR_FA_TypeInfo_Struct1 read_profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0;

#line 97 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0__plain_builtin__type_ctor_info_string_0;

#line 100 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct1 read_profile__profile__pti_call_site_kind_and_callee_1__plain_profile__type_ctor_info_proc_static_ptr_0;

#line 103 "read_profile.c"
static const MR_VA_TypeInfo_Struct2 read_profile____vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0;

#line 106 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 109 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_builtin__type_ctor_info_string_0;

#line 112 "read_profile.c"
static const MR_VA_TypeInfo_Struct6 read_profile____vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 115 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 118 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct1 read_profile__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 121 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct1 read_profile__array__pti_array_1__plain_builtin__type_ctor_info_int_0;

#line 124 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_cp_type_0__plain_builtin__type_ctor_info_string_0;

#line 127 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0__plain_builtin__type_ctor_info_string_0;

#line 130 "read_profile.c"
static const MR_VA_TypeInfo_Struct3 read_profile____vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 133 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 136 "read_profile.c"
static const MR_FA_TypeInfo_Struct1 read_profile__array__ti_array_1builtin__type_ctor_info_int_0;

#line 139 "read_profile.c"
static const MR_FA_TypeInfo_Struct1 read_profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

#line 142 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 145 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0;

#line 148 "read_profile.c"
static const MR_FA_TypeInfo_Struct2 read_profile__maybe__ti_maybe_error_2profile__type_ctor_info_call_site_array_slot_0builtin__type_ctor_info_string_0;

#line 151 "read_profile.c"
static const MR_VA_PseudoTypeInfo_Struct3 read_profile____vpti_pred_3__plain_maybe__ti_maybe_error_2profile__type_ctor_info_call_site_array_slot_0builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 154 "read_profile.c"
static const MR_FA_TypeInfo_Struct1 read_profile__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0;

#line 157 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_list__ti_list_1profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0;

#line 160 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct1 read_profile__maybe__pti_maybe_1__plain_array__ti_array_1builtin__type_ctor_info_int_0;

#line 163 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct1 read_profile__list__pti_list_1__plain_profile__type_ctor_info_call_site_array_slot_0;

#line 166 "read_profile.c"
static const MR_VA_TypeInfo_Struct2 read_profile____vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0;

#line 169 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0;

#line 172 "read_profile.c"
static const MR_FA_TypeInfo_Struct2 read_profile__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0;

#line 175 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 178 "read_profile.c"
static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_error2_2_0[2];

#line 181 "read_profile.c"
static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_error2_2_0;

#line 184 "read_profile.c"
static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_error2_2_1[1];

#line 187 "read_profile.c"
static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_error2_2_1;

#line 190 "read_profile.c"
static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_error2_2_0[1];

#line 193 "read_profile.c"
static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_error2_2_1[1];

#line 196 "read_profile.c"
static const MR_DuPtagLayout read_profile__read_profile__du_ptag_ordered_maybe_error2_2[2];

#line 199 "read_profile.c"
static const MR_DuFunctorDescPtr read_profile__read_profile__du_name_ordered_maybe_error2_2[2];

#line 202 "read_profile.c"
static const MR_Integer read_profile__read_profile__functor_number_map_maybe_error2_2[2];

#line 205 "read_profile.c"
static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_0[1];

#line 208 "read_profile.c"
static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_0;

#line 211 "read_profile.c"
static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_1[1];

#line 214 "read_profile.c"
static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_1;

#line 217 "read_profile.c"
static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_2[1];

#line 220 "read_profile.c"
static const MR_DuFunctorDesc read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_2;

#line 223 "read_profile.c"
static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_0[1];

#line 226 "read_profile.c"
static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_1[1];

#line 229 "read_profile.c"
static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_2[1];

#line 232 "read_profile.c"
static const MR_DuPtagLayout read_profile__read_profile__du_ptag_ordered_maybe_init_deep_complete_0[3];

#line 235 "read_profile.c"
static const MR_DuFunctorDescPtr read_profile__read_profile__du_name_ordered_maybe_init_deep_complete_0[3];

#line 238 "read_profile.c"
static const MR_Integer read_profile__read_profile__functor_number_map_maybe_init_deep_complete_0[3];

#line 241 "read_profile.c"
static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_0;

#line 244 "read_profile.c"
static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_1;

#line 247 "read_profile.c"
static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_2;

#line 250 "read_profile.c"
static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_3;

#line 253 "read_profile.c"
static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_4;

#line 256 "read_profile.c"
static const MR_ForeignEnumFunctorDescPtr read_profile__read_profile__foreign_enum_ordinal_ordered_next_deep_item_0[5];

#line 259 "read_profile.c"
static const MR_ForeignEnumFunctorDescPtr read_profile__read_profile__foreign_enum_name_ordered_next_deep_item_0[5];

#line 262 "read_profile.c"
static const MR_Integer read_profile__read_profile__functor_number_map_next_deep_item_0[5];

#line 265 "read_profile.c"
static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_0;

#line 268 "read_profile.c"
static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_1;

#line 271 "read_profile.c"
static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_2;

#line 274 "read_profile.c"
static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_3;

#line 277 "read_profile.c"
static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_value_ordered_ptr_kind_0[4];

#line 280 "read_profile.c"
static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_name_ordered_ptr_kind_0[4];

#line 283 "read_profile.c"
static const MR_Integer read_profile__read_profile__functor_number_map_ptr_kind_0[4];

#line 286 "read_profile.c"
static MR_bool MR_CALL 
read_profile____Unify____maybe_error2_2_0_10001(
#line 289 "read_profile.c"
  MR_Box read_profile__wrapper_arg_1,
#line 291 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2,
#line 293 "read_profile.c"
  MR_Box read_profile__wrapper_arg_3,
#line 295 "read_profile.c"
  MR_Box read_profile__wrapper_arg_4);

#line 298 "read_profile.c"
static void MR_CALL 
read_profile____Compare____maybe_error2_2_0_10001(
#line 301 "read_profile.c"
  MR_Box read_profile__wrapper_arg_1,
#line 303 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2,
#line 305 "read_profile.c"
  MR_Box * read_profile__wrapper_arg_3,
#line 307 "read_profile.c"
  MR_Box read_profile__wrapper_arg_4,
#line 309 "read_profile.c"
  MR_Box read_profile__wrapper_arg_5);

#line 312 "read_profile.c"
static MR_bool MR_CALL 
read_profile____Unify____maybe_init_deep_complete_0_0_10001(
#line 315 "read_profile.c"
  MR_Box read_profile__wrapper_arg_1,
#line 317 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2);

#line 320 "read_profile.c"
static void MR_CALL 
read_profile____Compare____maybe_init_deep_complete_0_0_10001(
#line 323 "read_profile.c"
  MR_Box * read_profile__wrapper_arg_1,
#line 325 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2,
#line 327 "read_profile.c"
  MR_Box read_profile__wrapper_arg_3);

#line 330 "read_profile.c"
static MR_bool MR_CALL 
read_profile____Unify____next_deep_item_0_0_10001(
#line 333 "read_profile.c"
  MR_Box read_profile__wrapper_arg_1,
#line 335 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2);

#line 338 "read_profile.c"
static void MR_CALL 
read_profile____Compare____next_deep_item_0_0_10001(
#line 341 "read_profile.c"
  MR_Box * read_profile__wrapper_arg_1,
#line 343 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2,
#line 345 "read_profile.c"
  MR_Box read_profile__wrapper_arg_3);

#line 348 "read_profile.c"
static MR_bool MR_CALL 
read_profile____Unify____ptr_kind_0_0_10001(
#line 351 "read_profile.c"
  MR_Box read_profile__wrapper_arg_1,
#line 353 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2);

#line 356 "read_profile.c"
static void MR_CALL 
read_profile____Compare____ptr_kind_0_0_10001(
#line 359 "read_profile.c"
  MR_Box * read_profile__wrapper_arg_1,
#line 361 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2,
#line 363 "read_profile.c"
  MR_Box read_profile__wrapper_arg_3);

#line 1231 "read_profile.m"
static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 1231 "read_profile.m"
  MR_Integer read_profile__N_7,
#line 1231 "read_profile.m"
  MR_Word read_profile__RevItems0_9,
#line 1231 "read_profile.m"
  MR_Word * read_profile__MaybeItems_10);

#line 1216 "read_profile.m"
static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_p_0(
#line 1216 "read_profile.m"
  MR_Integer read_profile__N_6,
#line 1216 "read_profile.m"
  MR_Word * read_profile__MaybeItems_8);

#line 1335 "read_profile.m"
static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_p_0(
#line 1335 "read_profile.m"
  MR_Word * read_profile__MaybePtr_6);

#line 1231 "read_profile.m"
static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_p_0(
#line 1231 "read_profile.m"
  MR_Integer read_profile__N_7,
#line 1231 "read_profile.m"
  MR_Word read_profile__ItemReader_8,
#line 1231 "read_profile.m"
  MR_Word read_profile__RevItems0_9,
#line 1231 "read_profile.m"
  MR_Word * read_profile__MaybeItems_10);

#line 1231 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho8_6_p_0(
#line 1231 "read_profile.m"
  MR_Integer read_profile__N_7,
#line 1231 "read_profile.m"
  MR_Word read_profile__RevItems0_9,
#line 1231 "read_profile.m"
  MR_Word * read_profile__MaybeItems_10);

#line 704 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_3(
#line 704 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 704 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 704 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 704 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 706 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_2(
#line 706 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 706 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 706 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 706 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 705 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_1(
#line 705 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 705 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 705 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 705 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 1231 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0(
#line 1231 "read_profile.m"
  MR_Integer read_profile__N_7,
#line 1231 "read_profile.m"
  MR_Word read_profile__RevItems0_9,
#line 1231 "read_profile.m"
  MR_Word * read_profile__MaybeItems_10);

#line 688 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_3(
#line 688 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 688 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 688 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 688 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 690 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_2(
#line 690 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 690 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 690 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 690 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 689 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_1(
#line 689 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 689 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 689 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 689 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 1231 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0(
#line 1231 "read_profile.m"
  MR_Integer read_profile__N_7,
#line 1231 "read_profile.m"
  MR_Word read_profile__RevItems0_9,
#line 1231 "read_profile.m"
  MR_Word * read_profile__MaybeItems_10);

#line 1216 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho3_5_p_0(
#line 1216 "read_profile.m"
  MR_Integer read_profile__N_6,
#line 1216 "read_profile.m"
  MR_Word * read_profile__MaybeItems_8);

#line 1216 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho2_5_p_0(
#line 1216 "read_profile.m"
  MR_Integer read_profile__N_6,
#line 1216 "read_profile.m"
  MR_Word * read_profile__MaybeItems_8);

#line 1317 "read_profile.m"
static MR_bool MR_CALL 
read_profile__IntroducedFrom__pred__read_n_byte_string__1317__1_2_p_0(
#line 1317 "read_profile.m"
  MR_Integer read_profile__HeadVar__1_20,
#line 1317 "read_profile.m"
  MR_Char * read_profile__HeadVar__2_21);

#line 897 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_3_p_0(
#line 897 "read_profile.m"
  MR_Word read_profile__HeadVar__1_49,
#line 897 "read_profile.m"
  MR_Word read_profile__HeadVar__2_50,
#line 897 "read_profile.m"
  MR_Word * read_profile__HeadVar__3_51);

#line 899 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__899__1_5_p_0(
#line 899 "read_profile.m"
  MR_Integer read_profile__N_16,
#line 899 "read_profile.m"
  MR_Word read_profile__HeadVar__2_48,
#line 899 "read_profile.m"
  MR_Word * read_profile__HeadVar__3_86);

#line 887 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__887__1_4_p_0(
#line 887 "read_profile.m"
  MR_Integer read_profile__HeadVar__1_38,
#line 887 "read_profile.m"
  MR_Integer read_profile__HeadVar__2_39,
#line 887 "read_profile.m"
  MR_Integer read_profile__HeadVar__3_40,
#line 887 "read_profile.m"
  MR_Word * read_profile__HeadVar__4_41);

#line 704 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_p_0(
#line 704 "read_profile.m"
  MR_String read_profile__HeadVar__1_17,
#line 704 "read_profile.m"
  MR_Word read_profile__HeadVar__2_18,
#line 704 "read_profile.m"
  MR_Word * read_profile__HeadVar__3_19);

#line 688 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__688__1_3_p_0(
#line 688 "read_profile.m"
  MR_Word read_profile__HeadVar__1_15,
#line 688 "read_profile.m"
  MR_Integer read_profile__HeadVar__2_16,
#line 688 "read_profile.m"
  MR_Word * read_profile__HeadVar__3_17);

#line 663 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_user_defined__663__1_7_p_0(
#line 663 "read_profile.m"
  MR_Word read_profile__PredOrFunc_5,
#line 663 "read_profile.m"
  MR_String read_profile__HeadVar__2_23,
#line 663 "read_profile.m"
  MR_String read_profile__HeadVar__3_24,
#line 663 "read_profile.m"
  MR_String read_profile__HeadVar__4_25,
#line 663 "read_profile.m"
  MR_Integer read_profile__HeadVar__5_26,
#line 663 "read_profile.m"
  MR_Integer read_profile__HeadVar__6_27,
#line 663 "read_profile.m"
  MR_Word * read_profile__HeadVar__7_28);

#line 644 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__644__1_7_p_0(
#line 644 "read_profile.m"
  MR_String read_profile__HeadVar__1_23,
#line 644 "read_profile.m"
  MR_String read_profile__HeadVar__2_24,
#line 644 "read_profile.m"
  MR_String read_profile__HeadVar__3_25,
#line 644 "read_profile.m"
  MR_String read_profile__HeadVar__4_26,
#line 644 "read_profile.m"
  MR_Integer read_profile__HeadVar__5_27,
#line 644 "read_profile.m"
  MR_Integer read_profile__HeadVar__6_28,
#line 644 "read_profile.m"
  MR_Word * read_profile__HeadVar__7_29);

#line 577 "read_profile.m"
static MR_ArrayPtr MR_CALL 
read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_f_0(
#line 577 "read_profile.m"
  MR_Word read_profile__HeadVar__1_73);

#line 471 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_static__471__1_7_p_0(
#line 471 "read_profile.m"
  MR_Integer read_profile__HeadVar__1_50,
#line 471 "read_profile.m"
  MR_Word read_profile__HeadVar__2_51,
#line 471 "read_profile.m"
  MR_String read_profile__HeadVar__3_52,
#line 471 "read_profile.m"
  MR_Integer read_profile__HeadVar__4_53,
#line 471 "read_profile.m"
  MR_Integer read_profile__HeadVar__5_54,
#line 471 "read_profile.m"
  MR_Integer read_profile__HeadVar__6_55,
#line 471 "read_profile.m"
  MR_Word * read_profile__HeadVar__7_56);

#line 435 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_p_0(
#line 435 "read_profile.m"
  MR_Integer read_profile__HeadVar__1_32,
#line 435 "read_profile.m"
  MR_Word read_profile__HeadVar__2_33,
#line 435 "read_profile.m"
  MR_Integer read_profile__HeadVar__3_34,
#line 435 "read_profile.m"
  MR_String read_profile__HeadVar__4_35,
#line 435 "read_profile.m"
  MR_Word * read_profile__HeadVar__5_36);

#line 57 "read_profile.m"
static void MR_CALL 
read_profile____Compare____ptr_kind_0_0(
#line 57 "read_profile.m"
  MR_Word * read_profile__HeadVar__1_1,
#line 57 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2,
#line 57 "read_profile.m"
  MR_Word read_profile__HeadVar__3_3);

#line 57 "read_profile.m"
static MR_bool MR_CALL 
read_profile____Unify____ptr_kind_0_0(
#line 57 "read_profile.m"
  MR_Word read_profile__HeadVar__2_1,
#line 57 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2);

#line 1528 "read_profile.m"
static void MR_CALL 
read_profile____Compare____next_deep_item_0_0(
#line 1528 "read_profile.m"
  MR_Word * read_profile__HeadVar__1_1,
#line 1528 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2,
#line 1528 "read_profile.m"
  MR_Word read_profile__HeadVar__3_3);

#line 1528 "read_profile.m"
static MR_bool MR_CALL 
read_profile____Unify____next_deep_item_0_0(
#line 1528 "read_profile.m"
  MR_Word read_profile__HeadVar__2_1,
#line 1528 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2);

#line 334 "read_profile.m"
static void MR_CALL 
read_profile____Compare____maybe_init_deep_complete_0_0(
#line 334 "read_profile.m"
  MR_Word * read_profile__HeadVar__1_1,
#line 334 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2,
#line 334 "read_profile.m"
  MR_Word read_profile__HeadVar__3_3);

#line 334 "read_profile.m"
static MR_bool MR_CALL 
read_profile____Unify____maybe_init_deep_complete_0_0(
#line 334 "read_profile.m"
  MR_Word read_profile__HeadVar__1_1,
#line 334 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2);

#line 53 "read_profile.m"
static void MR_CALL 
read_profile____Compare____maybe_error2_2_0(
#line 53 "read_profile.m"
  MR_Word read_profile__TypeInfo_for_T1_19,
#line 53 "read_profile.m"
  MR_Word read_profile__TypeInfo_for_T2_20,
#line 53 "read_profile.m"
  MR_Word * read_profile__HeadVar__1_1,
#line 53 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2,
#line 53 "read_profile.m"
  MR_Word read_profile__HeadVar__3_3);

#line 53 "read_profile.m"
static MR_bool MR_CALL 
read_profile____Unify____maybe_error2_2_0(
#line 53 "read_profile.m"
  MR_Word read_profile__TypeInfo_for_T1_11,
#line 53 "read_profile.m"
  MR_Word read_profile__TypeInfo_for_T2_12,
#line 53 "read_profile.m"
  MR_Word read_profile__HeadVar__1_1,
#line 53 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2);

#line 1543 "read_profile.m"
static MR_bool MR_CALL 
read_profile__is_next_item_token_2_p_0(
#line 1543 "read_profile.m"
  MR_Integer read_profile__Int_1,
#line 1543 "read_profile.m"
  MR_Word * read_profile__NextItem_2);

#line 1505 "read_profile.m"
static MR_Word MR_CALL 
read_profile__make_cssptr_1_f_0(
#line 1505 "read_profile.m"
  MR_Integer read_profile__CSSI_3);

#line 1504 "read_profile.m"
static MR_Word MR_CALL 
read_profile__make_csdptr_1_f_0(
#line 1504 "read_profile.m"
  MR_Integer read_profile__CSDI_3);

#line 1489 "read_profile.m"
static void MR_CALL 
read_profile__deep_insert_4_p_0(
#line 1489 "read_profile.m"
  MR_Word read_profile__TypeInfo_for_T_12,
#line 1489 "read_profile.m"
  MR_ArrayPtr read_profile__A0_5,
#line 1489 "read_profile.m"
  MR_Integer read_profile__Ind_6,
#line 1489 "read_profile.m"
  MR_Box read_profile__Item_7,
#line 1489 "read_profile.m"
  MR_ArrayPtr * read_profile__A_8);

#line 1465 "read_profile.m"
static void MR_CALL 
read_profile__read_deep_byte_3_p_0(
#line 1465 "read_profile.m"
  MR_Word * read_profile__MaybeByte_4);

#line 1448 "read_profile.m"
static void MR_CALL 
read_profile__read_n_bytes_acc_5_p_0(
#line 1448 "read_profile.m"
  MR_Integer read_profile__N_6,
#line 1448 "read_profile.m"
  MR_Word read_profile__RevBytes0_7,
#line 1448 "read_profile.m"
  MR_Word * read_profile__MaybeNBytes_8);

#line 1415 "read_profile.m"
static void MR_CALL 
read_profile__read_fixed_size_int_acc_6_p_0(
#line 1415 "read_profile.m"
  MR_Integer read_profile__BytesLeft_7,
#line 1415 "read_profile.m"
  MR_Integer read_profile__Num0_8,
#line 1415 "read_profile.m"
  MR_Integer read_profile__ShiftBy_9,
#line 1415 "read_profile.m"
  MR_Word * read_profile__MaybeInt_10);

#line 1406 "read_profile.m"
static void MR_CALL 
read_profile__read_fixed_size_int_3_p_0(
#line 1406 "read_profile.m"
  MR_Word * read_profile__MaybeInt_4);

#line 1377 "read_profile.m"
static void MR_CALL 
read_profile__read_num_acc_4_p_0(
#line 1377 "read_profile.m"
  MR_Integer read_profile__Num0_5,
#line 1377 "read_profile.m"
  MR_Word * read_profile__MaybeNum_6);

#line 1367 "read_profile.m"
static void MR_CALL 
read_profile__read_num_3_p_0(
#line 1367 "read_profile.m"
  MR_Word * read_profile__MaybeNum_4);

#line 1358 "read_profile.m"
static void MR_CALL 
read_profile__num_to_cp_type_2_p_0(
#line 1358 "read_profile.m"
  MR_Integer read_profile__Int_1,
#line 1358 "read_profile.m"
  MR_Word * read_profile__CPType_2);

#line 1345 "read_profile.m"
static void MR_CALL 
read_profile__read_cp_type_3_p_0(
#line 1345 "read_profile.m"
  MR_Word * read_profile__MaybeCPType_4);

#line 1335 "read_profile.m"
static void MR_CALL 
read_profile__read_ptr_4_p_0(
#line 1335 "read_profile.m"
  MR_Word read_profile___Kind_5,
#line 1335 "read_profile.m"
  MR_Word * read_profile__MaybePtr_6);

#line 1317 "read_profile.m"
static MR_bool MR_CALL 
read_profile__read_string_3_p_0_1(
#line 1317 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 1317 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 1317 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_2);

#line 1292 "read_profile.m"
static void MR_CALL 
read_profile__read_string_3_p_0(
#line 1292 "read_profile.m"
  MR_Word * read_profile__MaybeStr_4);

#line 1257 "read_profile.m"
static void MR_CALL 
read_profile__read_line_acc_5_p_0(
#line 1257 "read_profile.m"
  MR_Integer read_profile__Limit_6,
#line 1257 "read_profile.m"
  MR_Word read_profile__STATE_VARIABLE_RevChars_0_17,
#line 1257 "read_profile.m"
  MR_Word * read_profile__MaybeLine_8);

#line 1216 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things_5_p_0(
#line 1216 "read_profile.m"
  MR_Word read_profile__TypeInfo_for_T_18,
#line 1216 "read_profile.m"
  MR_Integer read_profile__N_6,
#line 1216 "read_profile.m"
  MR_Word read_profile__ItemReader_7,
#line 1216 "read_profile.m"
  MR_Word * read_profile__MaybeItems_8);

#line 1160 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_kind_and_callee_3_p_0(
#line 1160 "read_profile.m"
  MR_Word * read_profile__MaybeKindAndCallee_4);

#line 1137 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_kind_3_p_0(
#line 1137 "read_profile.m"
  MR_Word * read_profile__MaybeKind_4);

#line 1109 "read_profile.m"
static void MR_CALL 
read_profile__read_multi_call_site_csdis_2_4_p_0(
#line 1109 "read_profile.m"
  MR_Word read_profile__CSDIs0_5,
#line 1109 "read_profile.m"
  MR_Word * read_profile__MaybeCSDIs_6);

#line 1093 "read_profile.m"
static void MR_CALL 
read_profile__read_multi_call_site_csdis_3_p_0(
#line 1093 "read_profile.m"
  MR_Word * read_profile__MaybeCSDIs_4);

#line 1076 "read_profile.m"
static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_4(
#line 1076 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 1076 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1);

#line 1076 "read_profile.m"
static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_3(
#line 1076 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 1076 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1);

#line 1076 "read_profile.m"
static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_2(
#line 1076 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 1076 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1);

#line 1076 "read_profile.m"
static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_1(
#line 1076 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 1076 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1);

#line 1033 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_slot_3_p_0(
#line 1033 "read_profile.m"
  MR_Word * read_profile__MaybeSlot_4);

#line 1016 "read_profile.m"
static void MR_CALL 
read_profile__maybe_read_num_handle_error_7_p_0(
#line 1016 "read_profile.m"
  MR_Integer read_profile__MaskWord_8,
#line 1016 "read_profile.m"
  MR_Integer read_profile__MaskValue_9,
#line 1016 "read_profile.m"
  MR_Integer * read_profile__Num_10,
#line 1016 "read_profile.m"
  MR_Word read_profile__STATE_VARIABLE_MaybeError_0_15,
#line 1016 "read_profile.m"
  MR_Word * read_profile__STATE_VARIABLE_MaybeError_16);

#line 966 "read_profile.m"
static void MR_CALL 
read_profile__read_profile_3_p_0(
#line 966 "read_profile.m"
  MR_Word * read_profile__MaybeProfile_4);

#line 925 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_dynamic_3_p_0(
#line 925 "read_profile.m"
  MR_Word * read_profile__MaybeCSD_4);

#line 897 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_8(
#line 897 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 897 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 897 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 897 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 899 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_7(
#line 899 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 899 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 899 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 899 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 899 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_6(
#line 899 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 899 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 899 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 899 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 898 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_5(
#line 898 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 898 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 898 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 898 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 887 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_4(
#line 887 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 887 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 887 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 887 "read_profile.m"
  MR_Box read_profile__wrapper_arg_3,
#line 887 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_4);

#line 890 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_3(
#line 890 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 890 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 890 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 890 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 889 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_2(
#line 889 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 889 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 889 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 889 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 888 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_1(
#line 888 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 888 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 888 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 888 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 880 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0(
#line 880 "read_profile.m"
  MR_Word read_profile__ProfileStats_5,
#line 880 "read_profile.m"
  MR_Word * read_profile__MaybePD_6);

#line 860 "read_profile.m"
static MR_bool MR_CALL 
read_profile__glue_lambda_name_3_p_0(
#line 860 "read_profile.m"
  MR_Word read_profile__Segments_4,
#line 860 "read_profile.m"
  MR_Word * read_profile__PredName_5,
#line 860 "read_profile.m"
  MR_Word * read_profile__LineNumber_6);

#line 842 "read_profile.m"
static void MR_CALL 
read_profile__split_lambda_name_2_p_0(
#line 842 "read_profile.m"
  MR_Word read_profile__HeadVar__1_1,
#line 842 "read_profile.m"
  MR_Word * read_profile__HeadVar__2_2);

#line 837 "read_profile.m"
static MR_bool MR_CALL 
read_profile__non_right_bracket_1_p_0(
#line 837 "read_profile.m"
  MR_Char read_profile__C_2);

#line 828 "read_profile.m"
static MR_bool MR_CALL 
read_profile__fix_type_spec_suffix_3_p_0_1(
#line 828 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 828 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1);

#line 822 "read_profile.m"
static MR_bool MR_CALL 
read_profile__fix_type_spec_suffix_3_p_0(
#line 822 "read_profile.m"
  MR_Word read_profile__Chars0_4,
#line 822 "read_profile.m"
  MR_Word * read_profile__Chars_5,
#line 822 "read_profile.m"
  MR_String * read_profile__SpecInfoStr_6);

#line 817 "read_profile.m"
static MR_String MR_CALL 
read_profile__add_plus_one_for_function_1_f_0(
#line 817 "read_profile.m"
  MR_Word read_profile__HeadVar__1_1);

#line 728 "read_profile.m"
static void MR_CALL 
read_profile__create_refined_proc_ids_3_p_0(
#line 728 "read_profile.m"
  MR_Word read_profile__ProcLabel_4,
#line 728 "read_profile.m"
  MR_String * read_profile__UnQualName_5,
#line 728 "read_profile.m"
  MR_String * read_profile__QualName_6);

#line 713 "read_profile.m"
static MR_String MR_CALL 
read_profile__raw_proc_id_to_string_1_f_0(
#line 713 "read_profile.m"
  MR_Word read_profile__HeadVar__1_1);

#line 704 "read_profile.m"
static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_3(
#line 704 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 704 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 704 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 704 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 706 "read_profile.m"
static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_2(
#line 706 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 706 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 706 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 706 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 705 "read_profile.m"
static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_1(
#line 705 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 705 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 705 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 705 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 700 "read_profile.m"
static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0(
#line 700 "read_profile.m"
  MR_Word * read_profile__MaybeCP_4);

#line 663 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_6(
#line 663 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 663 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 663 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 663 "read_profile.m"
  MR_Box read_profile__wrapper_arg_3,
#line 663 "read_profile.m"
  MR_Box read_profile__wrapper_arg_4,
#line 663 "read_profile.m"
  MR_Box read_profile__wrapper_arg_5,
#line 663 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_6);

#line 668 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_5(
#line 668 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 668 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 668 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 668 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 667 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_4(
#line 667 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 667 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 667 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 667 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 666 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_3(
#line 666 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 666 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 666 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 666 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 665 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_2(
#line 665 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 665 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 665 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 665 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 664 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_1(
#line 664 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 664 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 664 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 664 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 659 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0(
#line 659 "read_profile.m"
  MR_Word read_profile__PredOrFunc_5,
#line 659 "read_profile.m"
  MR_Word * read_profile__MaybeProcLabel_6);

#line 644 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0_7(
#line 644 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 644 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 644 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 644 "read_profile.m"
  MR_Box read_profile__wrapper_arg_3,
#line 644 "read_profile.m"
  MR_Box read_profile__wrapper_arg_4,
#line 644 "read_profile.m"
  MR_Box read_profile__wrapper_arg_5,
#line 644 "read_profile.m"
  MR_Box read_profile__wrapper_arg_6,
#line 644 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_7);

#line 650 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0_6(
#line 650 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 650 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 650 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 650 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 649 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0_5(
#line 649 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 649 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 649 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 649 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 648 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0_4(
#line 648 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 648 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 648 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 648 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 647 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0_3(
#line 647 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 647 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 647 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 647 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 646 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0_2(
#line 646 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 646 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 646 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 646 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 645 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0_1(
#line 645 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 645 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 645 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 645 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 613 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0(
#line 613 "read_profile.m"
  MR_Word * read_profile__MaybeProcId_4);

#line 584 "read_profile.m"
static void MR_CALL 
read_profile__maybe_read_pd_coverage_points_4_p_0(
#line 584 "read_profile.m"
  MR_Word read_profile__ProfileStats_5,
#line 584 "read_profile.m"
  MR_Word * read_profile__MaybeCoveragePoints_6);

#line 577 "read_profile.m"
static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0_2(
#line 577 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 577 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1);

#line 577 "read_profile.m"
static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0_1(
#line 577 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 577 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1);

#line 529 "read_profile.m"
static void MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0(
#line 529 "read_profile.m"
  MR_Word read_profile__ProfileStats_5,
#line 529 "read_profile.m"
  MR_Word * read_profile__MaybeCoveragePoints_6);

#line 492 "read_profile.m"
static MR_Box MR_CALL 
read_profile__read_proc_static_4_p_0_8(
#line 492 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 492 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1);

#line 471 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0_7(
#line 471 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 471 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 471 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 471 "read_profile.m"
  MR_Box read_profile__wrapper_arg_3,
#line 471 "read_profile.m"
  MR_Box read_profile__wrapper_arg_4,
#line 471 "read_profile.m"
  MR_Box read_profile__wrapper_arg_5,
#line 471 "read_profile.m"
  MR_Box read_profile__wrapper_arg_6,
#line 471 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_7);

#line 477 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0_6(
#line 477 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 477 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 477 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 477 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 476 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0_5(
#line 476 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 476 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 476 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 476 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 475 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0_4(
#line 475 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 475 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 475 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 475 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 474 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0_3(
#line 474 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 474 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 474 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 474 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 473 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0_2(
#line 473 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 473 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 473 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 473 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 472 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0_1(
#line 472 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 472 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 472 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 472 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 464 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0(
#line 464 "read_profile.m"
  MR_Word read_profile__ProfileStats_5,
#line 464 "read_profile.m"
  MR_Word * read_profile__MaybePS_6);

#line 435 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_static_3_p_0_5(
#line 435 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 435 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 435 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 435 "read_profile.m"
  MR_Box read_profile__wrapper_arg_3,
#line 435 "read_profile.m"
  MR_Box read_profile__wrapper_arg_4,
#line 435 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_5);

#line 439 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_static_3_p_0_4(
#line 439 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 439 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 439 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 439 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 438 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_static_3_p_0_3(
#line 438 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 438 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 438 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 438 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 437 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_static_3_p_0_2(
#line 437 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 437 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 437 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 437 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 436 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_static_3_p_0_1(
#line 436 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 436 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 436 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 436 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 428 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_static_3_p_0(
#line 428 "read_profile.m"
  MR_Word * read_profile__MaybeCSS_4);

#line 349 "read_profile.m"
static void MR_CALL 
read_profile__read_nodes_3_5_p_0(
#line 349 "read_profile.m"
  MR_Integer read_profile__Depth_6,
#line 349 "read_profile.m"
  MR_Word read_profile__STATE_VARIABLE_InitDeep_0_36,
#line 349 "read_profile.m"
  MR_Word * read_profile__MaybeInitDeep_8);

#line 339 "read_profile.m"
static void MR_CALL 
read_profile__read_nodes_2_5_p_0(
#line 339 "read_profile.m"
  MR_Integer read_profile__Depth_6,
#line 339 "read_profile.m"
  MR_Word read_profile__STATE_VARIABLE_InitDeep_0_10,
#line 339 "read_profile.m"
  MR_Word * read_profile__MaybeInitDeep_8);

#line 310 "read_profile.m"
static void MR_CALL 
read_profile__read_nodes_4_p_0(
#line 310 "read_profile.m"
  MR_Word read_profile__InitDeep0_5,
#line 310 "read_profile.m"
  MR_Word * read_profile__MaybeInitDeep_6);

#line 225 "read_profile.m"
static void MR_CALL 
read_profile__maybe_deep_flags_2_p_0(
#line 225 "read_profile.m"
  MR_Integer read_profile__FlagsInt_3,
#line 225 "read_profile.m"
  MR_Word * read_profile__MaybeFlags_4);

#line 188 "read_profile.m"
static void MR_CALL 
read_profile__maybe_init_deep_12_p_0(
#line 188 "read_profile.m"
  MR_String read_profile__ProgName_13,
#line 188 "read_profile.m"
  MR_Integer read_profile__FlagsInt_14,
#line 188 "read_profile.m"
  MR_Integer read_profile__MaxCSD_15,
#line 188 "read_profile.m"
  MR_Integer read_profile__MaxCSS_16,
#line 188 "read_profile.m"
  MR_Integer read_profile__MaxPD_17,
#line 188 "read_profile.m"
  MR_Integer read_profile__MaxPS_18,
#line 188 "read_profile.m"
  MR_Integer read_profile__TicksPerSec_19,
#line 188 "read_profile.m"
  MR_Integer read_profile__InstrumentQuanta_20,
#line 188 "read_profile.m"
  MR_Integer read_profile__UserQuanta_21,
#line 188 "read_profile.m"
  MR_Integer read_profile__NumCallSeqs_22,
#line 188 "read_profile.m"
  MR_Integer read_profile__RootPDI_23,
#line 188 "read_profile.m"
  MR_Word * read_profile__MaybeInitDeep_24);

#line 107 "read_profile.m"
static void MR_CALL 
read_profile__read_deep_id_string_3_p_0(
#line 107 "read_profile.m"
  MR_Word * read_profile__MaybeVersionNumber_4);

#line 85 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_12(
#line 85 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_3,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_4,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_5,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_6,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_7,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_8,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_9,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_10,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_11,
#line 85 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_12);

#line 84 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_11(
#line 84 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 84 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 84 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 84 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 83 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_10(
#line 83 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 83 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 83 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 83 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 82 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_9(
#line 82 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 82 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 82 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 82 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 81 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_8(
#line 81 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 81 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 81 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 81 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 80 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_7(
#line 80 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 80 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 80 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 80 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 79 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_6(
#line 79 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 79 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 79 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 79 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 78 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_5(
#line 78 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 78 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 78 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 78 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 77 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_4(
#line 77 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 77 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 77 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 77 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 76 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_3(
#line 76 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 76 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 76 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 76 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 75 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_2(
#line 75 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 75 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 75 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 75 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3);

#line 74 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_1(
#line 74 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 74 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 74 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 74 "read_profile.m"
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



#include "read_profile.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "profile.mh"
#include "profile.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 2604 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2613 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2622 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__type_ctor_info_initial_deep_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_initial_deep_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2631 "read_profile.c"
static const MR_FA_TypeInfo_Struct1 read_profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 2639 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2648 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct1 read_profile__profile__pti_call_site_kind_and_callee_1__plain_profile__type_ctor_info_proc_static_ptr_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 2656 "read_profile.c"
static const MR_VA_TypeInfo_Struct2 read_profile____vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_static_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2666 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile____vti_tuple_2profile__type_ctor_info_call_site_static_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2675 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2684 "read_profile.c"
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

#line 2698 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile____vti_tuple_6builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_string_proc_label_0builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2707 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct1 read_profile__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2715 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct1 read_profile__array__pti_array_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2723 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_cp_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2732 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2741 "read_profile.c"
static const MR_VA_TypeInfo_Struct3 read_profile____vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2752 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile____vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2761 "read_profile.c"
static const MR_FA_TypeInfo_Struct1 read_profile__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2769 "read_profile.c"
static const MR_FA_TypeInfo_Struct1 read_profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &read_profile__array__ti_array_1builtin__type_ctor_info_int_0
  }
};

#line 2777 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2786 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2795 "read_profile.c"
static const MR_FA_TypeInfo_Struct2 read_profile__maybe__ti_maybe_error_2profile__type_ctor_info_call_site_array_slot_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2804 "read_profile.c"
static const MR_VA_PseudoTypeInfo_Struct3 read_profile____vpti_pred_3__plain_maybe__ti_maybe_error_2profile__type_ctor_info_call_site_array_slot_0builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &read_profile__maybe__ti_maybe_error_2profile__type_ctor_info_call_site_array_slot_0builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 2815 "read_profile.c"
static const MR_FA_TypeInfo_Struct1 read_profile__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

#line 2823 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_list__ti_list_1profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2832 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct1 read_profile__maybe__pti_maybe_1__plain_array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &read_profile__array__ti_array_1builtin__type_ctor_info_int_0
  }
};

#line 2840 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct1 read_profile__list__pti_list_1__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

#line 2848 "read_profile.c"
static const MR_VA_TypeInfo_Struct2 read_profile____vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &read_profile__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &read_profile__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0
  }
};

#line 2858 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain___vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile____vti_tuple_2maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0list__ti_list_1profile__type_ctor_info_call_site_array_slot_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2867 "read_profile.c"
static const MR_FA_TypeInfo_Struct2 read_profile__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2876 "read_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 read_profile__maybe__pti_maybe_error_2__plain_pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &read_profile__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_coverage_point_info_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2885 "read_profile.c"
static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_error2_2_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 2891 "read_profile.c"
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
  NULL
};

#line 2906 "read_profile.c"
static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_error2_2_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2911 "read_profile.c"
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
  NULL
};

#line 2926 "read_profile.c"
static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_error2_2_0[1] = {
  &read_profile__read_profile__du_functor_desc_maybe_error2_2_0
};

#line 2931 "read_profile.c"
static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_error2_2_1[1] = {
  &read_profile__read_profile__du_functor_desc_maybe_error2_2_1
};

#line 2936 "read_profile.c"
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

#line 2950 "read_profile.c"
static const MR_DuFunctorDescPtr read_profile__read_profile__du_name_ordered_maybe_error2_2[2] = {
  &read_profile__read_profile__du_functor_desc_maybe_error2_2_1,
  &read_profile__read_profile__du_functor_desc_maybe_error2_2_0
};

#line 2956 "read_profile.c"
static const MR_Integer read_profile__read_profile__functor_number_map_maybe_error2_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2962 "read_profile.c"
const MR_TypeCtorInfo_Struct read_profile__read_profile__type_ctor_info_maybe_error2_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (read_profile____Unify____maybe_error2_2_0_10001)),
  ((MR_Box) (read_profile____Compare____maybe_error2_2_0_10001)),
  (MR_String) "read_profile",
  (MR_String) "maybe_error2",
  {
    read_profile__read_profile__du_name_ordered_maybe_error2_2
  },
  {
    read_profile__read_profile__du_ptag_ordered_maybe_error2_2
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  read_profile__read_profile__functor_number_map_maybe_error2_2
};

#line 2983 "read_profile.c"
static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_0[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_initial_deep_0
};

#line 2988 "read_profile.c"
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
  NULL
};

#line 3003 "read_profile.c"
static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_1[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_initial_deep_0
};

#line 3008 "read_profile.c"
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
  NULL
};

#line 3023 "read_profile.c"
static const MR_PseudoTypeInfo read_profile__read_profile__field_types_maybe_init_deep_complete_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3028 "read_profile.c"
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
  NULL
};

#line 3043 "read_profile.c"
static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_0[1] = {
  &read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_0
};

#line 3048 "read_profile.c"
static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_1[1] = {
  &read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_1
};

#line 3053 "read_profile.c"
static const MR_DuFunctorDescPtr read_profile__read_profile__du_stag_ordered_maybe_init_deep_complete_0_2[1] = {
  &read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_2
};

#line 3058 "read_profile.c"
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

#line 3077 "read_profile.c"
static const MR_DuFunctorDescPtr read_profile__read_profile__du_name_ordered_maybe_init_deep_complete_0[3] = {
  &read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_2,
  &read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_0,
  &read_profile__read_profile__du_functor_desc_maybe_init_deep_complete_0_1
};

#line 3084 "read_profile.c"
static const MR_Integer read_profile__read_profile__functor_number_map_maybe_init_deep_complete_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 3091 "read_profile.c"
const MR_TypeCtorInfo_Struct read_profile__read_profile__type_ctor_info_maybe_init_deep_complete_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (read_profile____Unify____maybe_init_deep_complete_0_0_10001)),
  ((MR_Box) (read_profile____Compare____maybe_init_deep_complete_0_0_10001)),
  (MR_String) "read_profile",
  (MR_String) "maybe_init_deep_complete",
  {
    read_profile__read_profile__du_name_ordered_maybe_init_deep_complete_0
  },
  {
    read_profile__read_profile__du_ptag_ordered_maybe_init_deep_complete_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  read_profile__read_profile__functor_number_map_maybe_init_deep_complete_0
};

#line 3112 "read_profile.c"
static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_0 = {
  (MR_String) "deep_item_end",
  (MR_Integer) 0,
  ((int) MR_deep_item_end)
};

#line 3119 "read_profile.c"
static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_1 = {
  (MR_String) "deep_item_call_site_static",
  (MR_Integer) 1,
  ((int) MR_deep_item_call_site_static)
};

#line 3126 "read_profile.c"
static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_2 = {
  (MR_String) "deep_item_call_site_dynamic",
  (MR_Integer) 2,
  ((int) MR_deep_item_call_site_dynamic)
};

#line 3133 "read_profile.c"
static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_3 = {
  (MR_String) "deep_item_proc_static",
  (MR_Integer) 3,
  ((int) MR_deep_item_proc_static)
};

#line 3140 "read_profile.c"
static const MR_ForeignEnumFunctorDesc read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_4 = {
  (MR_String) "deep_item_proc_dynamic",
  (MR_Integer) 4,
  ((int) MR_deep_item_proc_dynamic)
};

#line 3147 "read_profile.c"
static const MR_ForeignEnumFunctorDescPtr read_profile__read_profile__foreign_enum_ordinal_ordered_next_deep_item_0[5] = {
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_0,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_1,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_2,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_3,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_4
};

#line 3156 "read_profile.c"
static const MR_ForeignEnumFunctorDescPtr read_profile__read_profile__foreign_enum_name_ordered_next_deep_item_0[5] = {
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_2,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_1,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_0,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_4,
  &read_profile__read_profile__foreign_enum_functor_desc_next_deep_item_0_3
};

#line 3165 "read_profile.c"
static const MR_Integer read_profile__read_profile__functor_number_map_next_deep_item_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 3174 "read_profile.c"
const MR_TypeCtorInfo_Struct read_profile__read_profile__type_ctor_info_next_deep_item_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN_ENUM,
  ((MR_Box) (read_profile____Unify____next_deep_item_0_0_10001)),
  ((MR_Box) (read_profile____Compare____next_deep_item_0_0_10001)),
  (MR_String) "read_profile",
  (MR_String) "next_deep_item",
  {
    read_profile__read_profile__foreign_enum_name_ordered_next_deep_item_0
  },
  {
    read_profile__read_profile__foreign_enum_ordinal_ordered_next_deep_item_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  read_profile__read_profile__functor_number_map_next_deep_item_0
};

#line 3195 "read_profile.c"
static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_0 = {
  (MR_String) "ps",
  (MR_Integer) 0
};

#line 3201 "read_profile.c"
static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_1 = {
  (MR_String) "pd",
  (MR_Integer) 1
};

#line 3207 "read_profile.c"
static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_2 = {
  (MR_String) "css",
  (MR_Integer) 2
};

#line 3213 "read_profile.c"
static const MR_EnumFunctorDesc read_profile__read_profile__enum_functor_desc_ptr_kind_0_3 = {
  (MR_String) "csd",
  (MR_Integer) 3
};

#line 3219 "read_profile.c"
static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_value_ordered_ptr_kind_0[4] = {
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_0,
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_1,
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_2,
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_3
};

#line 3227 "read_profile.c"
static const MR_EnumFunctorDescPtr read_profile__read_profile__enum_name_ordered_ptr_kind_0[4] = {
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_3,
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_2,
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_1,
  &read_profile__read_profile__enum_functor_desc_ptr_kind_0_0
};

#line 3235 "read_profile.c"
static const MR_Integer read_profile__read_profile__functor_number_map_ptr_kind_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3243 "read_profile.c"
const MR_TypeCtorInfo_Struct read_profile__read_profile__type_ctor_info_ptr_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (read_profile____Unify____ptr_kind_0_0_10001)),
  ((MR_Box) (read_profile____Compare____ptr_kind_0_0_10001)),
  (MR_String) "read_profile",
  (MR_String) "ptr_kind",
  {
    read_profile__read_profile__enum_name_ordered_ptr_kind_0
  },
  {
    read_profile__read_profile__enum_value_ordered_ptr_kind_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  read_profile__read_profile__functor_number_map_ptr_kind_0
};

#line 3264 "read_profile.c"
static MR_bool MR_CALL 
read_profile____Unify____maybe_error2_2_0_10001(
#line 3267 "read_profile.c"
  MR_Box read_profile__wrapper_arg_1,
#line 3269 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2,
#line 3271 "read_profile.c"
  MR_Box read_profile__wrapper_arg_3,
#line 3273 "read_profile.c"
  MR_Box read_profile__wrapper_arg_4)
#line 3275 "read_profile.c"
{
#line 3277 "read_profile.c"
  {
#line 3279 "read_profile.c"
    MR_bool read_profile__succeeded;

#line 3282 "read_profile.c"
    {
#line 3284 "read_profile.c"
      read_profile__succeeded = read_profile____Unify____maybe_error2_2_0(((MR_Word) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2), ((MR_Word) read_profile__wrapper_arg_3), ((MR_Word) read_profile__wrapper_arg_4));
    }
#line 3287 "read_profile.c"
    return read_profile__succeeded;
#line 3289 "read_profile.c"
  }
#line 3291 "read_profile.c"
}

#line 3294 "read_profile.c"
static void MR_CALL 
read_profile____Compare____maybe_error2_2_0_10001(
#line 3297 "read_profile.c"
  MR_Box read_profile__wrapper_arg_1,
#line 3299 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2,
#line 3301 "read_profile.c"
  MR_Box * read_profile__wrapper_arg_3,
#line 3303 "read_profile.c"
  MR_Box read_profile__wrapper_arg_4,
#line 3305 "read_profile.c"
  MR_Box read_profile__wrapper_arg_5)
#line 3307 "read_profile.c"
{
#line 3309 "read_profile.c"
  {
#line 3311 "read_profile.c"
    MR_Word read_profile__conv0_HeadVar__1_1;

#line 3314 "read_profile.c"
    {
#line 3316 "read_profile.c"
      read_profile____Compare____maybe_error2_2_0(((MR_Word) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2), &read_profile__conv0_HeadVar__1_1, ((MR_Word) read_profile__wrapper_arg_4), ((MR_Word) read_profile__wrapper_arg_5));
    }
#line 3319 "read_profile.c"
    *read_profile__wrapper_arg_3 = ((MR_Box) (read_profile__conv0_HeadVar__1_1));
#line 3321 "read_profile.c"
  }
#line 3323 "read_profile.c"
}

#line 3326 "read_profile.c"
static MR_bool MR_CALL 
read_profile____Unify____maybe_init_deep_complete_0_0_10001(
#line 3329 "read_profile.c"
  MR_Box read_profile__wrapper_arg_1,
#line 3331 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2)
#line 3333 "read_profile.c"
{
#line 3335 "read_profile.c"
  {
#line 3337 "read_profile.c"
    MR_bool read_profile__succeeded;

#line 3340 "read_profile.c"
    {
#line 3342 "read_profile.c"
      read_profile__succeeded = read_profile____Unify____maybe_init_deep_complete_0_0(((MR_Word) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2));
    }
#line 3345 "read_profile.c"
    return read_profile__succeeded;
#line 3347 "read_profile.c"
  }
#line 3349 "read_profile.c"
}

#line 3352 "read_profile.c"
static void MR_CALL 
read_profile____Compare____maybe_init_deep_complete_0_0_10001(
#line 3355 "read_profile.c"
  MR_Box * read_profile__wrapper_arg_1,
#line 3357 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2,
#line 3359 "read_profile.c"
  MR_Box read_profile__wrapper_arg_3)
#line 3361 "read_profile.c"
{
#line 3363 "read_profile.c"
  {
#line 3365 "read_profile.c"
    MR_Word read_profile__conv0_HeadVar__1_1;

#line 3368 "read_profile.c"
    {
#line 3370 "read_profile.c"
      read_profile____Compare____maybe_init_deep_complete_0_0(&read_profile__conv0_HeadVar__1_1, ((MR_Word) read_profile__wrapper_arg_2), ((MR_Word) read_profile__wrapper_arg_3));
    }
#line 3373 "read_profile.c"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_HeadVar__1_1));
#line 3375 "read_profile.c"
  }
#line 3377 "read_profile.c"
}

#line 3380 "read_profile.c"
static MR_bool MR_CALL 
read_profile____Unify____next_deep_item_0_0_10001(
#line 3383 "read_profile.c"
  MR_Box read_profile__wrapper_arg_1,
#line 3385 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2)
#line 3387 "read_profile.c"
{
#line 3389 "read_profile.c"
  {
#line 3391 "read_profile.c"
    MR_bool read_profile__succeeded;

#line 3394 "read_profile.c"
    {
#line 3396 "read_profile.c"
      read_profile__succeeded = read_profile____Unify____next_deep_item_0_0(((MR_Word) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2));
    }
#line 3399 "read_profile.c"
    return read_profile__succeeded;
#line 3401 "read_profile.c"
  }
#line 3403 "read_profile.c"
}

#line 3406 "read_profile.c"
static void MR_CALL 
read_profile____Compare____next_deep_item_0_0_10001(
#line 3409 "read_profile.c"
  MR_Box * read_profile__wrapper_arg_1,
#line 3411 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2,
#line 3413 "read_profile.c"
  MR_Box read_profile__wrapper_arg_3)
#line 3415 "read_profile.c"
{
#line 3417 "read_profile.c"
  {
#line 3419 "read_profile.c"
    MR_Word read_profile__conv0_HeadVar__1_1;

#line 3422 "read_profile.c"
    {
#line 3424 "read_profile.c"
      read_profile____Compare____next_deep_item_0_0(&read_profile__conv0_HeadVar__1_1, ((MR_Word) read_profile__wrapper_arg_2), ((MR_Word) read_profile__wrapper_arg_3));
    }
#line 3427 "read_profile.c"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_HeadVar__1_1));
#line 3429 "read_profile.c"
  }
#line 3431 "read_profile.c"
}

#line 3434 "read_profile.c"
static MR_bool MR_CALL 
read_profile____Unify____ptr_kind_0_0_10001(
#line 3437 "read_profile.c"
  MR_Box read_profile__wrapper_arg_1,
#line 3439 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2)
#line 3441 "read_profile.c"
{
#line 3443 "read_profile.c"
  {
#line 3445 "read_profile.c"
    MR_bool read_profile__succeeded;

#line 3448 "read_profile.c"
    {
#line 3450 "read_profile.c"
      read_profile__succeeded = read_profile____Unify____ptr_kind_0_0(((MR_Word) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2));
    }
#line 3453 "read_profile.c"
    return read_profile__succeeded;
#line 3455 "read_profile.c"
  }
#line 3457 "read_profile.c"
}

#line 3460 "read_profile.c"
static void MR_CALL 
read_profile____Compare____ptr_kind_0_0_10001(
#line 3463 "read_profile.c"
  MR_Box * read_profile__wrapper_arg_1,
#line 3465 "read_profile.c"
  MR_Box read_profile__wrapper_arg_2,
#line 3467 "read_profile.c"
  MR_Box read_profile__wrapper_arg_3)
#line 3469 "read_profile.c"
{
#line 3471 "read_profile.c"
  {
#line 3473 "read_profile.c"
    MR_Word read_profile__conv0_HeadVar__1_1;

#line 3476 "read_profile.c"
    {
#line 3478 "read_profile.c"
      read_profile____Compare____ptr_kind_0_0(&read_profile__conv0_HeadVar__1_1, ((MR_Word) read_profile__wrapper_arg_2), ((MR_Word) read_profile__wrapper_arg_3));
    }
#line 3481 "read_profile.c"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_HeadVar__1_1));
#line 3483 "read_profile.c"
  }
#line 3485 "read_profile.c"
}

#line 1231 "read_profile.m"
static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 1231 "read_profile.m"
  MR_Integer read_profile__N_7,
#line 1231 "read_profile.m"
  MR_Word read_profile__RevItems0_9,
#line 1231 "read_profile.m"
  MR_Word * read_profile__MaybeItems_10)
#line 1231 "read_profile.m"
{
#line 1238 "read_profile.m"
  while (MR_TRUE)
#line 1238 "read_profile.m"
    {
#line 1238 "read_profile.m"
      /* tailcall optimized into a loop */
#line 1238 "read_profile.m"
      {
#line 1238 "read_profile.m"
        MR_bool read_profile__succeeded = (read_profile__N_7 <= (MR_Integer) 0);

#line 1238 "read_profile.m"
        if (read_profile__succeeded)
#line 1237 "read_profile.m"
          {
#line 1237 "read_profile.m"
            MR_Word base;
#line 1237 "read_profile.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "read_profile.m"
            *read_profile__MaybeItems_10 = base;
#line 1237 "read_profile.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__RevItems0_9));
#line 1237 "read_profile.m"
          }
#line 1238 "read_profile.m"
        else
#line 1239 "read_profile.m"
          {
#line 1239 "read_profile.m"
            MR_Word read_profile__MaybeItem_12;

#line 1370 "read_profile.m"
            {
#line 1370 "read_profile.m"
              read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeItem_12);
            }
#line 1244 "read_profile.m"
            if (((MR_tag((MR_Word) read_profile__MaybeItem_12)) == (MR_mktag((MR_Integer) 1))))
#line 1246 "read_profile.m"
              *read_profile__MaybeItems_10 = (MR_Word) read_profile__MaybeItem_12;
#line 1244 "read_profile.m"
            else
#line 1241 "read_profile.m"
              {
#line 1241 "read_profile.m"
                MR_Integer read_profile__Item_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeItem_12, (MR_Integer) 0)));
#line 1241 "read_profile.m"
                MR_Integer read_profile__V_19_19 = (read_profile__N_7 - (MR_Integer) 1);
#line 1241 "read_profile.m"
                MR_Word read_profile__V_20_20;

#line 1242 "read_profile.m"
                {
#line 1242 "read_profile.m"
                  read_profile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 0) = ((MR_Box) (read_profile__Item_13));
#line 1242 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 1) = ((MR_Box) (read_profile__RevItems0_9));
#line 1242 "read_profile.m"
                }
#line 1242 "read_profile.m"
                /* direct tailcall eliminated */
#line 1242 "read_profile.m"
                {
#line 1242 "read_profile.m"
                  MR_Integer read_profile__N__tmp_copy_7 = read_profile__V_19_19;
#line 1242 "read_profile.m"
                  MR_Word read_profile__RevItems0__tmp_copy_9 = read_profile__V_20_20;

#line 1242 "read_profile.m"
                  read_profile__RevItems0_9 = read_profile__RevItems0__tmp_copy_9;
#line 1242 "read_profile.m"
                  read_profile__N_7 = read_profile__N__tmp_copy_7;
#line 1242 "read_profile.m"
                }
#line 1242 "read_profile.m"
                continue;
#line 1241 "read_profile.m"
              }
#line 1239 "read_profile.m"
          }
#line 1238 "read_profile.m"
      }
#line 1238 "read_profile.m"
      break;
#line 1238 "read_profile.m"
    }
#line 1231 "read_profile.m"
}

#line 1216 "read_profile.m"
static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_p_0(
#line 1216 "read_profile.m"
  MR_Integer read_profile__N_6,
#line 1216 "read_profile.m"
  MR_Word * read_profile__MaybeItems_8)
#line 1216 "read_profile.m"
{
#line 1220 "read_profile.m"
  {
#line 1220 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1220 "read_profile.m"
    MR_Word read_profile__MaybeRevItems_10;

#line 1221 "read_profile.m"
    {
#line 1221 "read_profile.m"
      read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_p_0(read_profile__N_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__MaybeRevItems_10);
    }
#line 1226 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybeRevItems_10)) == (MR_mktag((MR_Integer) 1))))
#line 1228 "read_profile.m"
      *read_profile__MaybeItems_8 = read_profile__MaybeRevItems_10;
#line 1226 "read_profile.m"
    else
#line 1223 "read_profile.m"
      {
#line 1223 "read_profile.m"
        MR_Word read_profile__RevItems_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeRevItems_10, (MR_Integer) 0)));
#line 1223 "read_profile.m"
        MR_Word read_profile__Items_12;

#line 1224 "read_profile.m"
        {
#line 1224 "read_profile.m"
          mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__RevItems_11, &read_profile__Items_12);
        }
#line 1225 "read_profile.m"
        {
#line 1225 "read_profile.m"
          MR_Word base;
#line 1225 "read_profile.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1225 "read_profile.m"
          *read_profile__MaybeItems_8 = base;
#line 1225 "read_profile.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Items_12));
#line 1225 "read_profile.m"
        }
#line 1223 "read_profile.m"
      }
#line 1220 "read_profile.m"
  }
#line 1216 "read_profile.m"
}

#line 1335 "read_profile.m"
static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_p_0(
#line 1335 "read_profile.m"
  MR_Word * read_profile__MaybePtr_6)
#line 1335 "read_profile.m"
{
#line 1369 "read_profile.m"
  {
#line 1369 "read_profile.m"
    MR_bool read_profile__succeeded;

#line 1370 "read_profile.m"
    {
#line 1370 "read_profile.m"
      read_profile__read_num_acc_4_p_0((MR_Integer) 0, read_profile__MaybePtr_6);
#line 1370 "read_profile.m"
      return;
    }
#line 1369 "read_profile.m"
  }
#line 1335 "read_profile.m"
}

#line 1231 "read_profile.m"
static void MR_CALL 
read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_p_0(
#line 1231 "read_profile.m"
  MR_Integer read_profile__N_7,
#line 1231 "read_profile.m"
  MR_Word read_profile__ItemReader_8,
#line 1231 "read_profile.m"
  MR_Word read_profile__RevItems0_9,
#line 1231 "read_profile.m"
  MR_Word * read_profile__MaybeItems_10)
#line 1231 "read_profile.m"
{
#line 1238 "read_profile.m"
  while (MR_TRUE)
#line 1238 "read_profile.m"
    {
#line 1238 "read_profile.m"
      /* tailcall optimized into a loop */
#line 1238 "read_profile.m"
      {
#line 1238 "read_profile.m"
        MR_bool read_profile__succeeded = (read_profile__N_7 <= (MR_Integer) 0);

#line 1238 "read_profile.m"
        if (read_profile__succeeded)
#line 1237 "read_profile.m"
          {
#line 1237 "read_profile.m"
            MR_Word base;
#line 1237 "read_profile.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "read_profile.m"
            *read_profile__MaybeItems_10 = base;
#line 1237 "read_profile.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__RevItems0_9));
#line 1237 "read_profile.m"
          }
#line 1238 "read_profile.m"
        else
#line 1239 "read_profile.m"
          {
#line 1239 "read_profile.m"
            MR_Word read_profile__MaybeItem_12;
#line 1239 "read_profile.m"
            void MR_CALL (* read_profile__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), read_profile__ItemReader_8, (MR_Integer) 1)));
#line 1239 "read_profile.m"
            MR_Box read_profile__conv2_MaybeItem_12;
#line 1239 "read_profile.m"
            MR_Box read_profile__conv1_STATE_VARIABLE_IO_18_18;

#line 1239 "read_profile.m"
            {
#line 1239 "read_profile.m"
              read_profile__func_0(((MR_Box) read_profile__ItemReader_8), &read_profile__conv2_MaybeItem_12, ((MR_Box) ((MR_Integer) 0)), &read_profile__conv1_STATE_VARIABLE_IO_18_18);
            }
#line 1239 "read_profile.m"
            read_profile__MaybeItem_12 = ((MR_Word) read_profile__conv2_MaybeItem_12);
#line 1244 "read_profile.m"
            if (((MR_tag((MR_Word) read_profile__MaybeItem_12)) == (MR_mktag((MR_Integer) 1))))
#line 1246 "read_profile.m"
              *read_profile__MaybeItems_10 = (MR_Word) read_profile__MaybeItem_12;
#line 1244 "read_profile.m"
            else
#line 1241 "read_profile.m"
              {
#line 1241 "read_profile.m"
                MR_Box read_profile__Item_13 = (MR_hl_field(MR_mktag(0), read_profile__MaybeItem_12, (MR_Integer) 0));
#line 1241 "read_profile.m"
                MR_Integer read_profile__V_19_19 = (read_profile__N_7 - (MR_Integer) 1);
#line 1241 "read_profile.m"
                MR_Word read_profile__V_20_20;

#line 1242 "read_profile.m"
                {
#line 1242 "read_profile.m"
                  read_profile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 0) = read_profile__Item_13;
#line 1242 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 1) = ((MR_Box) (read_profile__RevItems0_9));
#line 1242 "read_profile.m"
                }
#line 1242 "read_profile.m"
                /* direct tailcall eliminated */
#line 1242 "read_profile.m"
                {
#line 1242 "read_profile.m"
                  MR_Integer read_profile__N__tmp_copy_7 = read_profile__V_19_19;
#line 1242 "read_profile.m"
                  MR_Word read_profile__RevItems0__tmp_copy_9 = read_profile__V_20_20;

#line 1242 "read_profile.m"
                  read_profile__RevItems0_9 = read_profile__RevItems0__tmp_copy_9;
#line 1242 "read_profile.m"
                  read_profile__N_7 = read_profile__N__tmp_copy_7;
#line 1242 "read_profile.m"
                }
#line 1242 "read_profile.m"
                continue;
#line 1241 "read_profile.m"
              }
#line 1239 "read_profile.m"
          }
#line 1238 "read_profile.m"
      }
#line 1238 "read_profile.m"
      break;
#line 1238 "read_profile.m"
    }
#line 1231 "read_profile.m"
}

#line 1231 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho8_6_p_0(
#line 1231 "read_profile.m"
  MR_Integer read_profile__N_7,
#line 1231 "read_profile.m"
  MR_Word read_profile__RevItems0_9,
#line 1231 "read_profile.m"
  MR_Word * read_profile__MaybeItems_10)
#line 1231 "read_profile.m"
{
#line 1238 "read_profile.m"
  while (MR_TRUE)
#line 1238 "read_profile.m"
    {
#line 1238 "read_profile.m"
      /* tailcall optimized into a loop */
#line 1238 "read_profile.m"
      {
#line 1238 "read_profile.m"
        MR_bool read_profile__succeeded = (read_profile__N_7 <= (MR_Integer) 0);

#line 1238 "read_profile.m"
        if (read_profile__succeeded)
#line 1237 "read_profile.m"
          {
#line 1237 "read_profile.m"
            MR_Word base;
#line 1237 "read_profile.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "read_profile.m"
            *read_profile__MaybeItems_10 = base;
#line 1237 "read_profile.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__RevItems0_9));
#line 1237 "read_profile.m"
          }
#line 1238 "read_profile.m"
        else
#line 1239 "read_profile.m"
          {
#line 1239 "read_profile.m"
            MR_Word read_profile__MaybeItem_12;

#line 1370 "read_profile.m"
            {
#line 1370 "read_profile.m"
              read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeItem_12);
            }
#line 1244 "read_profile.m"
            if (((MR_tag((MR_Word) read_profile__MaybeItem_12)) == (MR_mktag((MR_Integer) 1))))
#line 1246 "read_profile.m"
              *read_profile__MaybeItems_10 = (MR_Word) read_profile__MaybeItem_12;
#line 1244 "read_profile.m"
            else
#line 1241 "read_profile.m"
              {
#line 1241 "read_profile.m"
                MR_Integer read_profile__Item_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeItem_12, (MR_Integer) 0)));
#line 1241 "read_profile.m"
                MR_Integer read_profile__V_19_19 = (read_profile__N_7 - (MR_Integer) 1);
#line 1241 "read_profile.m"
                MR_Word read_profile__V_20_20;

#line 1242 "read_profile.m"
                {
#line 1242 "read_profile.m"
                  read_profile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 0) = ((MR_Box) (read_profile__Item_13));
#line 1242 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 1) = ((MR_Box) (read_profile__RevItems0_9));
#line 1242 "read_profile.m"
                }
#line 1242 "read_profile.m"
                /* direct tailcall eliminated */
#line 1242 "read_profile.m"
                {
#line 1242 "read_profile.m"
                  MR_Integer read_profile__N__tmp_copy_7 = read_profile__V_19_19;
#line 1242 "read_profile.m"
                  MR_Word read_profile__RevItems0__tmp_copy_9 = read_profile__V_20_20;

#line 1242 "read_profile.m"
                  read_profile__RevItems0_9 = read_profile__RevItems0__tmp_copy_9;
#line 1242 "read_profile.m"
                  read_profile__N_7 = read_profile__N__tmp_copy_7;
#line 1242 "read_profile.m"
                }
#line 1242 "read_profile.m"
                continue;
#line 1241 "read_profile.m"
              }
#line 1239 "read_profile.m"
          }
#line 1238 "read_profile.m"
      }
#line 1238 "read_profile.m"
      break;
#line 1238 "read_profile.m"
    }
#line 1231 "read_profile.m"
}

#line 704 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_3(
#line 704 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 704 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 704 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 704 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 704 "read_profile.m"
{
#line 704 "read_profile.m"
  {
#line 704 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 704 "read_profile.m"
    MR_Word read_profile__conv2_HeadVar__3_19;

#line 704 "read_profile.m"
    {
#line 704 "read_profile.m"
      read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_p_0(((MR_String) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2), &read_profile__conv2_HeadVar__3_19);
    }
#line 704 "read_profile.m"
    *read_profile__wrapper_arg_3 = ((MR_Box) (read_profile__conv2_HeadVar__3_19));
#line 704 "read_profile.m"
  }
#line 704 "read_profile.m"
}

#line 706 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_2(
#line 706 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 706 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 706 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 706 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 706 "read_profile.m"
{
#line 706 "read_profile.m"
  {
#line 706 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 706 "read_profile.m"
    MR_Word read_profile__conv1_MaybeCPType_4;

#line 706 "read_profile.m"
    {
#line 706 "read_profile.m"
      read_profile__read_cp_type_3_p_0(&read_profile__conv1_MaybeCPType_4);
    }
#line 706 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeCPType_4));
#line 706 "read_profile.m"
  }
#line 706 "read_profile.m"
}

#line 705 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0_1(
#line 705 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 705 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 705 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 705 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 705 "read_profile.m"
{
#line 705 "read_profile.m"
  {
#line 705 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 705 "read_profile.m"
    MR_Word read_profile__conv0_MaybeStr_4;

#line 705 "read_profile.m"
    {
#line 705 "read_profile.m"
      read_profile__read_string_3_p_0(&read_profile__conv0_MaybeStr_4);
    }
#line 705 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybeStr_4));
#line 705 "read_profile.m"
  }
#line 705 "read_profile.m"
}

#line 1231 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho7_6_p_0(
#line 1231 "read_profile.m"
  MR_Integer read_profile__N_7,
#line 1231 "read_profile.m"
  MR_Word read_profile__RevItems0_9,
#line 1231 "read_profile.m"
  MR_Word * read_profile__MaybeItems_10)
#line 1231 "read_profile.m"
{
#line 1238 "read_profile.m"
  while (MR_TRUE)
#line 1238 "read_profile.m"
    {
#line 1238 "read_profile.m"
      /* tailcall optimized into a loop */
#line 1238 "read_profile.m"
      {
#line 1238 "read_profile.m"
        MR_bool read_profile__succeeded = (read_profile__N_7 <= (MR_Integer) 0);

#line 1238 "read_profile.m"
        if (read_profile__succeeded)
#line 1237 "read_profile.m"
          {
#line 1237 "read_profile.m"
            MR_Word base;
#line 1237 "read_profile.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "read_profile.m"
            *read_profile__MaybeItems_10 = base;
#line 1237 "read_profile.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__RevItems0_9));
#line 1237 "read_profile.m"
          }
#line 1238 "read_profile.m"
        else
#line 1239 "read_profile.m"
          {
#line 1239 "read_profile.m"
            MR_Word read_profile__MaybeItem_12;

#line 704 "read_profile.m"
            {
#line 704 "read_profile.m"
              io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) &read_profile_scalar_common_4[53], (MR_Word) &read_profile_scalar_common_4[54], (MR_Word) &read_profile_scalar_common_4[55], &read_profile__MaybeItem_12);
            }
#line 1244 "read_profile.m"
            if (((MR_tag((MR_Word) read_profile__MaybeItem_12)) == (MR_mktag((MR_Integer) 1))))
#line 1246 "read_profile.m"
              *read_profile__MaybeItems_10 = (MR_Word) read_profile__MaybeItem_12;
#line 1244 "read_profile.m"
            else
#line 1241 "read_profile.m"
              {
#line 1241 "read_profile.m"
                MR_Word read_profile__Item_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeItem_12, (MR_Integer) 0)));
#line 1241 "read_profile.m"
                MR_Integer read_profile__V_19_19 = (read_profile__N_7 - (MR_Integer) 1);
#line 1241 "read_profile.m"
                MR_Word read_profile__V_20_20;

#line 1242 "read_profile.m"
                {
#line 1242 "read_profile.m"
                  read_profile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 0) = ((MR_Box) (read_profile__Item_13));
#line 1242 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 1) = ((MR_Box) (read_profile__RevItems0_9));
#line 1242 "read_profile.m"
                }
#line 1242 "read_profile.m"
                /* direct tailcall eliminated */
#line 1242 "read_profile.m"
                {
#line 1242 "read_profile.m"
                  MR_Integer read_profile__N__tmp_copy_7 = read_profile__V_19_19;
#line 1242 "read_profile.m"
                  MR_Word read_profile__RevItems0__tmp_copy_9 = read_profile__V_20_20;

#line 1242 "read_profile.m"
                  read_profile__RevItems0_9 = read_profile__RevItems0__tmp_copy_9;
#line 1242 "read_profile.m"
                  read_profile__N_7 = read_profile__N__tmp_copy_7;
#line 1242 "read_profile.m"
                }
#line 1242 "read_profile.m"
                continue;
#line 1241 "read_profile.m"
              }
#line 1239 "read_profile.m"
          }
#line 1238 "read_profile.m"
      }
#line 1238 "read_profile.m"
      break;
#line 1238 "read_profile.m"
    }
#line 1231 "read_profile.m"
}

#line 688 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_3(
#line 688 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 688 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 688 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 688 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 688 "read_profile.m"
{
#line 688 "read_profile.m"
  {
#line 688 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 688 "read_profile.m"
    MR_Word read_profile__conv2_HeadVar__3_17;

#line 688 "read_profile.m"
    {
#line 688 "read_profile.m"
      read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__688__1_3_p_0(((MR_Word) read_profile__wrapper_arg_1), ((MR_Integer) read_profile__wrapper_arg_2), &read_profile__conv2_HeadVar__3_17);
    }
#line 688 "read_profile.m"
    *read_profile__wrapper_arg_3 = ((MR_Box) (read_profile__conv2_HeadVar__3_17));
#line 688 "read_profile.m"
  }
#line 688 "read_profile.m"
}

#line 690 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_2(
#line 690 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 690 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 690 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 690 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 690 "read_profile.m"
{
#line 690 "read_profile.m"
  {
#line 690 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 690 "read_profile.m"
    MR_Word read_profile__conv1_MaybeNum_4;

#line 690 "read_profile.m"
    {
#line 690 "read_profile.m"
      read_profile__read_num_3_p_0(&read_profile__conv1_MaybeNum_4);
    }
#line 690 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeNum_4));
#line 690 "read_profile.m"
  }
#line 690 "read_profile.m"
}

#line 689 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0_1(
#line 689 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 689 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 689 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 689 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 689 "read_profile.m"
{
#line 689 "read_profile.m"
  {
#line 689 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 689 "read_profile.m"
    MR_Word read_profile__conv0_MaybeCP_4;

#line 689 "read_profile.m"
    {
#line 689 "read_profile.m"
      read_profile__read_coverage_point_static_3_p_0(&read_profile__conv0_MaybeCP_4);
    }
#line 689 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybeCP_4));
#line 689 "read_profile.m"
  }
#line 689 "read_profile.m"
}

#line 1231 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho6_6_p_0(
#line 1231 "read_profile.m"
  MR_Integer read_profile__N_7,
#line 1231 "read_profile.m"
  MR_Word read_profile__RevItems0_9,
#line 1231 "read_profile.m"
  MR_Word * read_profile__MaybeItems_10)
#line 1231 "read_profile.m"
{
#line 1238 "read_profile.m"
  while (MR_TRUE)
#line 1238 "read_profile.m"
    {
#line 1238 "read_profile.m"
      /* tailcall optimized into a loop */
#line 1238 "read_profile.m"
      {
#line 1238 "read_profile.m"
        MR_bool read_profile__succeeded = (read_profile__N_7 <= (MR_Integer) 0);

#line 1238 "read_profile.m"
        if (read_profile__succeeded)
#line 1237 "read_profile.m"
          {
#line 1237 "read_profile.m"
            MR_Word base;
#line 1237 "read_profile.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "read_profile.m"
            *read_profile__MaybeItems_10 = base;
#line 1237 "read_profile.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__RevItems0_9));
#line 1237 "read_profile.m"
          }
#line 1238 "read_profile.m"
        else
#line 1239 "read_profile.m"
          {
#line 1239 "read_profile.m"
            MR_Word read_profile__MaybeItem_12;

#line 688 "read_profile.m"
            {
#line 688 "read_profile.m"
              io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &read_profile_scalar_common_4[0], (MR_Word) &read_profile_scalar_common_4[50], (MR_Word) &read_profile_scalar_common_4[51], (MR_Word) &read_profile_scalar_common_4[52], &read_profile__MaybeItem_12);
            }
#line 1244 "read_profile.m"
            if (((MR_tag((MR_Word) read_profile__MaybeItem_12)) == (MR_mktag((MR_Integer) 1))))
#line 1246 "read_profile.m"
              *read_profile__MaybeItems_10 = (MR_Word) read_profile__MaybeItem_12;
#line 1244 "read_profile.m"
            else
#line 1241 "read_profile.m"
              {
#line 1241 "read_profile.m"
                MR_Word read_profile__Item_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeItem_12, (MR_Integer) 0)));
#line 1241 "read_profile.m"
                MR_Integer read_profile__V_19_19 = (read_profile__N_7 - (MR_Integer) 1);
#line 1241 "read_profile.m"
                MR_Word read_profile__V_20_20;

#line 1242 "read_profile.m"
                {
#line 1242 "read_profile.m"
                  read_profile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 0) = ((MR_Box) (read_profile__Item_13));
#line 1242 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 1) = ((MR_Box) (read_profile__RevItems0_9));
#line 1242 "read_profile.m"
                }
#line 1242 "read_profile.m"
                /* direct tailcall eliminated */
#line 1242 "read_profile.m"
                {
#line 1242 "read_profile.m"
                  MR_Integer read_profile__N__tmp_copy_7 = read_profile__V_19_19;
#line 1242 "read_profile.m"
                  MR_Word read_profile__RevItems0__tmp_copy_9 = read_profile__V_20_20;

#line 1242 "read_profile.m"
                  read_profile__RevItems0_9 = read_profile__RevItems0__tmp_copy_9;
#line 1242 "read_profile.m"
                  read_profile__N_7 = read_profile__N__tmp_copy_7;
#line 1242 "read_profile.m"
                }
#line 1242 "read_profile.m"
                continue;
#line 1241 "read_profile.m"
              }
#line 1239 "read_profile.m"
          }
#line 1238 "read_profile.m"
      }
#line 1238 "read_profile.m"
      break;
#line 1238 "read_profile.m"
    }
#line 1231 "read_profile.m"
}

#line 1216 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho3_5_p_0(
#line 1216 "read_profile.m"
  MR_Integer read_profile__N_6,
#line 1216 "read_profile.m"
  MR_Word * read_profile__MaybeItems_8)
#line 1216 "read_profile.m"
{
#line 1220 "read_profile.m"
  {
#line 1220 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1220 "read_profile.m"
    MR_Word read_profile__MaybeRevItems_10;

#line 1221 "read_profile.m"
    {
#line 1221 "read_profile.m"
      read_profile__read_n_things__ho6_6_p_0(read_profile__N_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__MaybeRevItems_10);
    }
#line 1226 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybeRevItems_10)) == (MR_mktag((MR_Integer) 1))))
#line 1228 "read_profile.m"
      *read_profile__MaybeItems_8 = read_profile__MaybeRevItems_10;
#line 1226 "read_profile.m"
    else
#line 1223 "read_profile.m"
      {
#line 1223 "read_profile.m"
        MR_Word read_profile__RevItems_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeRevItems_10, (MR_Integer) 0)));
#line 1223 "read_profile.m"
        MR_Word read_profile__Items_12;

#line 1224 "read_profile.m"
        {
#line 1224 "read_profile.m"
          mercury__list__reverse_2_p_0((MR_Word) &read_profile_scalar_common_4[0], read_profile__RevItems_11, &read_profile__Items_12);
        }
#line 1225 "read_profile.m"
        {
#line 1225 "read_profile.m"
          MR_Word base;
#line 1225 "read_profile.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1225 "read_profile.m"
          *read_profile__MaybeItems_8 = base;
#line 1225 "read_profile.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Items_12));
#line 1225 "read_profile.m"
        }
#line 1223 "read_profile.m"
      }
#line 1220 "read_profile.m"
  }
#line 1216 "read_profile.m"
}

#line 1216 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things__ho2_5_p_0(
#line 1216 "read_profile.m"
  MR_Integer read_profile__N_6,
#line 1216 "read_profile.m"
  MR_Word * read_profile__MaybeItems_8)
#line 1216 "read_profile.m"
{
#line 1220 "read_profile.m"
  {
#line 1220 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1220 "read_profile.m"
    MR_Word read_profile__MaybeRevItems_10;

#line 1221 "read_profile.m"
    {
#line 1221 "read_profile.m"
      read_profile__read_n_things__ho7_6_p_0(read_profile__N_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__MaybeRevItems_10);
    }
#line 1226 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybeRevItems_10)) == (MR_mktag((MR_Integer) 1))))
#line 1228 "read_profile.m"
      *read_profile__MaybeItems_8 = read_profile__MaybeRevItems_10;
#line 1226 "read_profile.m"
    else
#line 1223 "read_profile.m"
      {
#line 1223 "read_profile.m"
        MR_Word read_profile__RevItems_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeRevItems_10, (MR_Integer) 0)));
#line 1223 "read_profile.m"
        MR_Word read_profile__Items_12;

#line 1224 "read_profile.m"
        {
#line 1224 "read_profile.m"
          mercury__list__reverse_2_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, read_profile__RevItems_11, &read_profile__Items_12);
        }
#line 1225 "read_profile.m"
        {
#line 1225 "read_profile.m"
          MR_Word base;
#line 1225 "read_profile.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1225 "read_profile.m"
          *read_profile__MaybeItems_8 = base;
#line 1225 "read_profile.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Items_12));
#line 1225 "read_profile.m"
        }
#line 1223 "read_profile.m"
      }
#line 1220 "read_profile.m"
  }
#line 1216 "read_profile.m"
}

#line 1317 "read_profile.m"
static MR_bool MR_CALL 
read_profile__IntroducedFrom__pred__read_n_byte_string__1317__1_2_p_0(
#line 1317 "read_profile.m"
  MR_Integer read_profile__HeadVar__1_20,
#line 1317 "read_profile.m"
  MR_Char * read_profile__HeadVar__2_21)
#line 1317 "read_profile.m"
{
#line 1317 "read_profile.m"
  {
#line 1317 "read_profile.m"
    MR_bool read_profile__succeeded;

#line 1317 "read_profile.m"
    {
#line 1317 "read_profile.m"
      return read_profile__succeeded = mercury__char__to_int_2_p_2(read_profile__HeadVar__2_21, read_profile__HeadVar__1_20);
    }
#line 1317 "read_profile.m"
    return read_profile__succeeded;
#line 1317 "read_profile.m"
  }
#line 1317 "read_profile.m"
}

#line 897 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_3_p_0(
#line 897 "read_profile.m"
  MR_Word read_profile__HeadVar__1_49,
#line 897 "read_profile.m"
  MR_Word read_profile__HeadVar__2_50,
#line 897 "read_profile.m"
  MR_Word * read_profile__HeadVar__3_51)
#line 897 "read_profile.m"
{
#line 897 "read_profile.m"
  {
#line 897 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 897 "read_profile.m"
    MR_Tuple read_profile__V_52_52;

#line 901 "read_profile.m"
    {
#line 901 "read_profile.m"
      read_profile__V_52_52 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 901 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_52_52, 0) = ((MR_Box) (read_profile__HeadVar__1_49));
#line 901 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_52_52, 1) = ((MR_Box) (read_profile__HeadVar__2_50));
#line 901 "read_profile.m"
    }
#line 901 "read_profile.m"
    {
#line 901 "read_profile.m"
      MR_Word base;
#line 901 "read_profile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 901 "read_profile.m"
      *read_profile__HeadVar__3_51 = base;
#line 901 "read_profile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_52_52));
#line 901 "read_profile.m"
    }
#line 897 "read_profile.m"
  }
#line 897 "read_profile.m"
}

#line 899 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__899__1_5_p_0(
#line 899 "read_profile.m"
  MR_Integer read_profile__N_16,
#line 899 "read_profile.m"
  MR_Word read_profile__HeadVar__2_48,
#line 899 "read_profile.m"
  MR_Word * read_profile__HeadVar__3_86)
#line 899 "read_profile.m"
{
#line 899 "read_profile.m"
  {
#line 899 "read_profile.m"
    MR_bool read_profile__succeeded;

#line 899 "read_profile.m"
    {
#line 899 "read_profile.m"
      read_profile__read_n_things_5_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, read_profile__N_16, read_profile__HeadVar__2_48, read_profile__HeadVar__3_86);
#line 899 "read_profile.m"
      return;
    }
#line 899 "read_profile.m"
  }
#line 899 "read_profile.m"
}

#line 887 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_dynamic__887__1_4_p_0(
#line 887 "read_profile.m"
  MR_Integer read_profile__HeadVar__1_38,
#line 887 "read_profile.m"
  MR_Integer read_profile__HeadVar__2_39,
#line 887 "read_profile.m"
  MR_Integer read_profile__HeadVar__3_40,
#line 887 "read_profile.m"
  MR_Word * read_profile__HeadVar__4_41)
#line 887 "read_profile.m"
{
#line 887 "read_profile.m"
  {
#line 887 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 887 "read_profile.m"
    MR_Tuple read_profile__V_42_42;

#line 892 "read_profile.m"
    {
#line 892 "read_profile.m"
      read_profile__V_42_42 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 892 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_42_42, 0) = ((MR_Box) (read_profile__HeadVar__1_38));
#line 892 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_42_42, 1) = ((MR_Box) (read_profile__HeadVar__2_39));
#line 892 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_42_42, 2) = ((MR_Box) (read_profile__HeadVar__3_40));
#line 892 "read_profile.m"
    }
#line 892 "read_profile.m"
    {
#line 892 "read_profile.m"
      MR_Word base;
#line 892 "read_profile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 892 "read_profile.m"
      *read_profile__HeadVar__4_41 = base;
#line 892 "read_profile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_42_42));
#line 892 "read_profile.m"
    }
#line 887 "read_profile.m"
  }
#line 887 "read_profile.m"
}

#line 704 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_p_0(
#line 704 "read_profile.m"
  MR_String read_profile__HeadVar__1_17,
#line 704 "read_profile.m"
  MR_Word read_profile__HeadVar__2_18,
#line 704 "read_profile.m"
  MR_Word * read_profile__HeadVar__3_19)
#line 704 "read_profile.m"
{
#line 704 "read_profile.m"
  {
#line 704 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 704 "read_profile.m"
    MR_Word read_profile__RevGoalPath0_9;
#line 704 "read_profile.m"
    MR_Word read_profile__RevGoalPath_10;
#line 704 "read_profile.m"
    MR_Word read_profile__V_20_20;

#line 708 "read_profile.m"
    {
#line 708 "read_profile.m"
      mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(read_profile__HeadVar__1_17, &read_profile__RevGoalPath0_9);
    }
#line 709 "read_profile.m"
    {
#line 709 "read_profile.m"
      mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(read_profile__RevGoalPath0_9, &read_profile__RevGoalPath_10);
    }
#line 710 "read_profile.m"
    {
#line 710 "read_profile.m"
      read_profile__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 710 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_20_20, 0) = ((MR_Box) (read_profile__RevGoalPath_10));
#line 710 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_20_20, 1) = ((MR_Box) (read_profile__HeadVar__2_18));
#line 710 "read_profile.m"
    }
#line 710 "read_profile.m"
    {
#line 710 "read_profile.m"
      MR_Word base;
#line 710 "read_profile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 710 "read_profile.m"
      *read_profile__HeadVar__3_19 = base;
#line 710 "read_profile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_20_20));
#line 710 "read_profile.m"
    }
#line 704 "read_profile.m"
  }
#line 704 "read_profile.m"
}

#line 688 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__688__1_3_p_0(
#line 688 "read_profile.m"
  MR_Word read_profile__HeadVar__1_15,
#line 688 "read_profile.m"
  MR_Integer read_profile__HeadVar__2_16,
#line 688 "read_profile.m"
  MR_Word * read_profile__HeadVar__3_17)
#line 688 "read_profile.m"
{
#line 688 "read_profile.m"
  {
#line 688 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 688 "read_profile.m"
    MR_Word read_profile__CPI_20;

#line 692 "read_profile.m"
    {
#line 692 "read_profile.m"
      read_profile__CPI_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 692 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__CPI_20, 0) = ((MR_Box) (read_profile__HeadVar__1_15));
#line 692 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__CPI_20, 1) = ((MR_Box) (read_profile__HeadVar__2_16));
#line 692 "read_profile.m"
    }
#line 691 "read_profile.m"
    {
#line 691 "read_profile.m"
      MR_Word base;
#line 691 "read_profile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 691 "read_profile.m"
      *read_profile__HeadVar__3_17 = base;
#line 691 "read_profile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__CPI_20));
#line 691 "read_profile.m"
    }
#line 688 "read_profile.m"
  }
#line 688 "read_profile.m"
}

#line 663 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_user_defined__663__1_7_p_0(
#line 663 "read_profile.m"
  MR_Word read_profile__PredOrFunc_5,
#line 663 "read_profile.m"
  MR_String read_profile__HeadVar__2_23,
#line 663 "read_profile.m"
  MR_String read_profile__HeadVar__3_24,
#line 663 "read_profile.m"
  MR_String read_profile__HeadVar__4_25,
#line 663 "read_profile.m"
  MR_Integer read_profile__HeadVar__5_26,
#line 663 "read_profile.m"
  MR_Integer read_profile__HeadVar__6_27,
#line 663 "read_profile.m"
  MR_Word * read_profile__HeadVar__7_28)
#line 663 "read_profile.m"
{
#line 663 "read_profile.m"
  {
#line 663 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 663 "read_profile.m"
    MR_Word read_profile__V_29_29;

#line 671 "read_profile.m"
    {
#line 671 "read_profile.m"
      read_profile__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 671 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_29_29, 0) = ((MR_Box) (read_profile__PredOrFunc_5));
#line 671 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_29_29, 1) = ((MR_Box) (read_profile__HeadVar__2_23));
#line 671 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_29_29, 2) = ((MR_Box) (read_profile__HeadVar__3_24));
#line 671 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_29_29, 3) = ((MR_Box) (read_profile__HeadVar__4_25));
#line 671 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_29_29, 4) = ((MR_Box) (read_profile__HeadVar__5_26));
#line 671 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_29_29, 5) = ((MR_Box) (read_profile__HeadVar__6_27));
#line 671 "read_profile.m"
    }
#line 671 "read_profile.m"
    {
#line 671 "read_profile.m"
      MR_Word base;
#line 671 "read_profile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 671 "read_profile.m"
      *read_profile__HeadVar__7_28 = base;
#line 671 "read_profile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_29_29));
#line 671 "read_profile.m"
    }
#line 663 "read_profile.m"
  }
#line 663 "read_profile.m"
}

#line 644 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__644__1_7_p_0(
#line 644 "read_profile.m"
  MR_String read_profile__HeadVar__1_23,
#line 644 "read_profile.m"
  MR_String read_profile__HeadVar__2_24,
#line 644 "read_profile.m"
  MR_String read_profile__HeadVar__3_25,
#line 644 "read_profile.m"
  MR_String read_profile__HeadVar__4_26,
#line 644 "read_profile.m"
  MR_Integer read_profile__HeadVar__5_27,
#line 644 "read_profile.m"
  MR_Integer read_profile__HeadVar__6_28,
#line 644 "read_profile.m"
  MR_Word * read_profile__HeadVar__7_29)
#line 644 "read_profile.m"
{
#line 644 "read_profile.m"
  {
#line 644 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 644 "read_profile.m"
    MR_Word read_profile__V_30_30;

#line 654 "read_profile.m"
    {
#line 654 "read_profile.m"
      read_profile__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 654 "read_profile.m"
      MR_hl_field(MR_mktag(1), read_profile__V_30_30, 0) = ((MR_Box) (read_profile__HeadVar__1_23));
#line 654 "read_profile.m"
      MR_hl_field(MR_mktag(1), read_profile__V_30_30, 1) = ((MR_Box) (read_profile__HeadVar__2_24));
#line 654 "read_profile.m"
      MR_hl_field(MR_mktag(1), read_profile__V_30_30, 2) = ((MR_Box) (read_profile__HeadVar__3_25));
#line 654 "read_profile.m"
      MR_hl_field(MR_mktag(1), read_profile__V_30_30, 3) = ((MR_Box) (read_profile__HeadVar__4_26));
#line 654 "read_profile.m"
      MR_hl_field(MR_mktag(1), read_profile__V_30_30, 4) = ((MR_Box) (read_profile__HeadVar__5_27));
#line 654 "read_profile.m"
      MR_hl_field(MR_mktag(1), read_profile__V_30_30, 5) = ((MR_Box) (read_profile__HeadVar__6_28));
#line 654 "read_profile.m"
    }
#line 654 "read_profile.m"
    {
#line 654 "read_profile.m"
      MR_Word base;
#line 654 "read_profile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 654 "read_profile.m"
      *read_profile__HeadVar__7_29 = base;
#line 654 "read_profile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_30_30));
#line 654 "read_profile.m"
    }
#line 644 "read_profile.m"
  }
#line 644 "read_profile.m"
}

#line 577 "read_profile.m"
static MR_ArrayPtr MR_CALL 
read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_f_0(
#line 577 "read_profile.m"
  MR_Word read_profile__HeadVar__1_73)
#line 577 "read_profile.m"
{
#line 577 "read_profile.m"
  {
#line 577 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 577 "read_profile.m"
    MR_ArrayPtr read_profile__HeadVar__2_74;
#line 577 "read_profile.m"
    MR_ArrayPtr read_profile__conv0_HeadVar__2_74;

#line 577 "read_profile.m"
    {
#line 577 "read_profile.m"
      read_profile__conv0_HeadVar__2_74 = mercury__array__array_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__HeadVar__1_73);
    }
#line 577 "read_profile.m"
    read_profile__HeadVar__2_74 = (MR_ArrayPtr) read_profile__conv0_HeadVar__2_74;
#line 577 "read_profile.m"
    return read_profile__HeadVar__2_74;
#line 577 "read_profile.m"
  }
#line 577 "read_profile.m"
}

#line 471 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_proc_static__471__1_7_p_0(
#line 471 "read_profile.m"
  MR_Integer read_profile__HeadVar__1_50,
#line 471 "read_profile.m"
  MR_Word read_profile__HeadVar__2_51,
#line 471 "read_profile.m"
  MR_String read_profile__HeadVar__3_52,
#line 471 "read_profile.m"
  MR_Integer read_profile__HeadVar__4_53,
#line 471 "read_profile.m"
  MR_Integer read_profile__HeadVar__5_54,
#line 471 "read_profile.m"
  MR_Integer read_profile__HeadVar__6_55,
#line 471 "read_profile.m"
  MR_Word * read_profile__HeadVar__7_56)
#line 471 "read_profile.m"
{
#line 471 "read_profile.m"
  {
#line 471 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 471 "read_profile.m"
    MR_Tuple read_profile__V_57_57;

#line 480 "read_profile.m"
    {
#line 480 "read_profile.m"
      read_profile__V_57_57 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 480 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_57_57, 0) = ((MR_Box) (read_profile__HeadVar__1_50));
#line 480 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_57_57, 1) = ((MR_Box) (read_profile__HeadVar__2_51));
#line 480 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_57_57, 2) = ((MR_Box) (read_profile__HeadVar__3_52));
#line 480 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_57_57, 3) = ((MR_Box) (read_profile__HeadVar__4_53));
#line 480 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_57_57, 4) = ((MR_Box) (read_profile__HeadVar__5_54));
#line 480 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_57_57, 5) = ((MR_Box) (read_profile__HeadVar__6_55));
#line 480 "read_profile.m"
    }
#line 480 "read_profile.m"
    {
#line 480 "read_profile.m"
      MR_Word base;
#line 480 "read_profile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 480 "read_profile.m"
      *read_profile__HeadVar__7_56 = base;
#line 480 "read_profile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_57_57));
#line 480 "read_profile.m"
    }
#line 471 "read_profile.m"
  }
#line 471 "read_profile.m"
}

#line 435 "read_profile.m"
static void MR_CALL 
read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_p_0(
#line 435 "read_profile.m"
  MR_Integer read_profile__HeadVar__1_32,
#line 435 "read_profile.m"
  MR_Word read_profile__HeadVar__2_33,
#line 435 "read_profile.m"
  MR_Integer read_profile__HeadVar__3_34,
#line 435 "read_profile.m"
  MR_String read_profile__HeadVar__4_35,
#line 435 "read_profile.m"
  MR_Word * read_profile__HeadVar__5_36)
#line 435 "read_profile.m"
{
#line 435 "read_profile.m"
  {
#line 435 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 435 "read_profile.m"
    MR_Word read_profile__RevGoalPath0_14;
#line 435 "read_profile.m"
    MR_Word read_profile__RevGoalPath_15;
#line 435 "read_profile.m"
    MR_Word read_profile__CallSiteStatic0_16;
#line 435 "read_profile.m"
    MR_Tuple read_profile__V_37_37;

#line 444 "read_profile.m"
    {
#line 444 "read_profile.m"
      mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(read_profile__HeadVar__4_35, &read_profile__RevGoalPath0_14);
    }
#line 445 "read_profile.m"
    {
#line 445 "read_profile.m"
      mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(read_profile__RevGoalPath0_14, &read_profile__RevGoalPath_15);
    }
#line 446 "read_profile.m"
    {
#line 446 "read_profile.m"
      read_profile__CallSiteStatic0_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 446 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__CallSiteStatic0_16, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
#line 446 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__CallSiteStatic0_16, 1) = ((MR_Box) ((MR_Integer) -1));
#line 446 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__CallSiteStatic0_16, 2) = ((MR_Box) (read_profile__HeadVar__2_33));
#line 446 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__CallSiteStatic0_16, 3) = ((MR_Box) (read_profile__HeadVar__3_34));
#line 446 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__CallSiteStatic0_16, 4) = ((MR_Box) (read_profile__RevGoalPath_15));
#line 446 "read_profile.m"
    }
#line 448 "read_profile.m"
    {
#line 448 "read_profile.m"
      read_profile__V_37_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 448 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_37_37, 0) = ((MR_Box) (read_profile__CallSiteStatic0_16));
#line 448 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_37_37, 1) = ((MR_Box) (read_profile__HeadVar__1_32));
#line 448 "read_profile.m"
    }
#line 448 "read_profile.m"
    {
#line 448 "read_profile.m"
      MR_Word base;
#line 448 "read_profile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 448 "read_profile.m"
      *read_profile__HeadVar__5_36 = base;
#line 448 "read_profile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_37_37));
#line 448 "read_profile.m"
    }
#line 435 "read_profile.m"
  }
#line 435 "read_profile.m"
}

#line 57 "read_profile.m"
static void MR_CALL 
read_profile____Compare____ptr_kind_0_0(
#line 57 "read_profile.m"
  MR_Word * read_profile__HeadVar__1_1,
#line 57 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2,
#line 57 "read_profile.m"
  MR_Word read_profile__HeadVar__3_3)
#line 57 "read_profile.m"
{
#line 57 "read_profile.m"
  {
#line 57 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 57 "read_profile.m"
    MR_Integer read_profile__Cast_HeadVar1_4 = (MR_Integer) read_profile__HeadVar__2_2;
#line 57 "read_profile.m"
    MR_Integer read_profile__Cast_HeadVar2_5 = (MR_Integer) read_profile__HeadVar__3_3;

#line 57 "read_profile.m"
    {
#line 57 "read_profile.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(read_profile__HeadVar__1_1, read_profile__Cast_HeadVar1_4, read_profile__Cast_HeadVar2_5);
#line 57 "read_profile.m"
      return;
    }
#line 57 "read_profile.m"
  }
#line 57 "read_profile.m"
}

#line 57 "read_profile.m"
static MR_bool MR_CALL 
read_profile____Unify____ptr_kind_0_0(
#line 57 "read_profile.m"
  MR_Word read_profile__HeadVar__2_1,
#line 57 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2)
#line 57 "read_profile.m"
{
#line 4990 "read_profile.c"
  {
#line 4992 "read_profile.c"
    MR_bool read_profile__succeeded = (read_profile__HeadVar__2_1 == read_profile__HeadVar__2_2);

#line 4995 "read_profile.c"
    return read_profile__succeeded;
#line 4997 "read_profile.c"
  }
#line 57 "read_profile.m"
}

#line 1528 "read_profile.m"
static void MR_CALL 
read_profile____Compare____next_deep_item_0_0(
#line 1528 "read_profile.m"
  MR_Word * read_profile__HeadVar__1_1,
#line 1528 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2,
#line 1528 "read_profile.m"
  MR_Word read_profile__HeadVar__3_3)
#line 1528 "read_profile.m"
{
#line 1528 "read_profile.m"
  {
#line 1528 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1528 "read_profile.m"
    MR_Integer read_profile__Cast_HeadVar1_4 = (MR_Integer) read_profile__HeadVar__2_2;
#line 1528 "read_profile.m"
    MR_Integer read_profile__Cast_HeadVar2_5 = (MR_Integer) read_profile__HeadVar__3_3;

#line 1528 "read_profile.m"
    {
#line 1528 "read_profile.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(read_profile__HeadVar__1_1, read_profile__Cast_HeadVar1_4, read_profile__Cast_HeadVar2_5);
#line 1528 "read_profile.m"
      return;
    }
#line 1528 "read_profile.m"
  }
#line 1528 "read_profile.m"
}

#line 1528 "read_profile.m"
static MR_bool MR_CALL 
read_profile____Unify____next_deep_item_0_0(
#line 1528 "read_profile.m"
  MR_Word read_profile__HeadVar__2_1,
#line 1528 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2)
#line 1528 "read_profile.m"
{
#line 5043 "read_profile.c"
  {
#line 5045 "read_profile.c"
    MR_bool read_profile__succeeded = (read_profile__HeadVar__2_1 == read_profile__HeadVar__2_2);

#line 5048 "read_profile.c"
    return read_profile__succeeded;
#line 5050 "read_profile.c"
  }
#line 1528 "read_profile.m"
}

#line 334 "read_profile.m"
static void MR_CALL 
read_profile____Compare____maybe_init_deep_complete_0_0(
#line 334 "read_profile.m"
  MR_Word * read_profile__HeadVar__1_1,
#line 334 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2,
#line 334 "read_profile.m"
  MR_Word read_profile__HeadVar__3_3)
#line 334 "read_profile.m"
{
#line 334 "read_profile.m"
  {
#line 334 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 334 "read_profile.m"
    MR_Integer read_profile__CastX_22 = (MR_Integer) read_profile__HeadVar__2_2;
#line 334 "read_profile.m"
    MR_Integer read_profile__CastY_23 = (MR_Integer) read_profile__HeadVar__3_3;

#line 334 "read_profile.m"
    read_profile__succeeded = (read_profile__CastX_22 == read_profile__CastY_23);
#line 334 "read_profile.m"
    if (read_profile__succeeded)
#line 5079 "read_profile.c"
      *read_profile__HeadVar__1_1 = (MR_Integer) 0;
#line 334 "read_profile.m"
    else
#line 334 "read_profile.m"
      if (((MR_tag((MR_Word) read_profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 334 "read_profile.m"
        {
#line 334 "read_profile.m"
          MR_String read_profile__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(2), read_profile__HeadVar__2_2, (MR_Integer) 0)));

#line 334 "read_profile.m"
          if (((MR_tag((MR_Word) read_profile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 334 "read_profile.m"
            {
#line 334 "read_profile.m"
              MR_String read_profile__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), read_profile__HeadVar__3_3, (MR_Integer) 0)));

#line 334 "read_profile.m"
              {
#line 334 "read_profile.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(read_profile__HeadVar__1_1, read_profile__V_27_27, read_profile__V_21_21);
#line 334 "read_profile.m"
                return;
              }
#line 334 "read_profile.m"
            }
#line 334 "read_profile.m"
          else
#line 334 "read_profile.m"
            if (((MR_tag((MR_Word) read_profile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5110 "read_profile.c"
              *read_profile__HeadVar__1_1 = (MR_Integer) 2;
#line 334 "read_profile.m"
            else
#line 5114 "read_profile.c"
              *read_profile__HeadVar__1_1 = (MR_Integer) 2;
#line 334 "read_profile.m"
        }
#line 334 "read_profile.m"
      else
#line 334 "read_profile.m"
        if (((MR_tag((MR_Word) read_profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 334 "read_profile.m"
          {
#line 334 "read_profile.m"
            MR_Word read_profile__V_28_28 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__2_2), (MR_Integer) 0);

#line 334 "read_profile.m"
            if (((MR_tag((MR_Word) read_profile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5129 "read_profile.c"
              *read_profile__HeadVar__1_1 = (MR_Integer) 1;
#line 334 "read_profile.m"
            else
#line 334 "read_profile.m"
              if (((MR_tag((MR_Word) read_profile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 334 "read_profile.m"
                {
#line 334 "read_profile.m"
                  MR_Word read_profile__V_5_5 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__3_3), (MR_Integer) 0);

#line 334 "read_profile.m"
                  {
#line 334 "read_profile.m"
                    profile____Compare____initial_deep_0_0(read_profile__HeadVar__1_1, read_profile__V_28_28, read_profile__V_5_5);
#line 334 "read_profile.m"
                    return;
                  }
#line 334 "read_profile.m"
                }
#line 334 "read_profile.m"
              else
#line 5151 "read_profile.c"
                *read_profile__HeadVar__1_1 = (MR_Integer) 1;
#line 334 "read_profile.m"
          }
#line 334 "read_profile.m"
        else
#line 334 "read_profile.m"
          {
#line 334 "read_profile.m"
            MR_Word read_profile__V_29_29 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__2_2), (MR_Integer) 1);

#line 334 "read_profile.m"
            if (((MR_tag((MR_Word) read_profile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5164 "read_profile.c"
              *read_profile__HeadVar__1_1 = (MR_Integer) 1;
#line 334 "read_profile.m"
            else
#line 334 "read_profile.m"
              if (((MR_tag((MR_Word) read_profile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5170 "read_profile.c"
                *read_profile__HeadVar__1_1 = (MR_Integer) 2;
#line 334 "read_profile.m"
              else
#line 334 "read_profile.m"
                {
#line 334 "read_profile.m"
                  MR_Word read_profile__V_13_13 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__3_3), (MR_Integer) 1);

#line 334 "read_profile.m"
                  {
#line 334 "read_profile.m"
                    profile____Compare____initial_deep_0_0(read_profile__HeadVar__1_1, read_profile__V_29_29, read_profile__V_13_13);
#line 334 "read_profile.m"
                    return;
                  }
#line 334 "read_profile.m"
                }
#line 334 "read_profile.m"
          }
#line 334 "read_profile.m"
  }
#line 334 "read_profile.m"
}

#line 334 "read_profile.m"
static MR_bool MR_CALL 
read_profile____Unify____maybe_init_deep_complete_0_0(
#line 334 "read_profile.m"
  MR_Word read_profile__HeadVar__1_1,
#line 334 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2)
#line 334 "read_profile.m"
{
#line 334 "read_profile.m"
  {
#line 334 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 334 "read_profile.m"
    MR_Integer read_profile__CastX_9 = (MR_Integer) read_profile__HeadVar__1_1;
#line 334 "read_profile.m"
    MR_Integer read_profile__CastY_10 = (MR_Integer) read_profile__HeadVar__2_2;

#line 334 "read_profile.m"
    read_profile__succeeded = (read_profile__CastX_9 == read_profile__CastY_10);
#line 334 "read_profile.m"
    if (read_profile__succeeded)
#line 334 "read_profile.m"
      read_profile__succeeded = MR_TRUE;
#line 334 "read_profile.m"
    else
#line 334 "read_profile.m"
      if (((MR_tag((MR_Word) read_profile__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 334 "read_profile.m"
        {
#line 334 "read_profile.m"
          MR_String read_profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), read_profile__HeadVar__1_1, (MR_Integer) 0)));
#line 334 "read_profile.m"
          MR_String read_profile__V_8_8;

#line 334 "read_profile.m"
          read_profile__succeeded = ((MR_tag((MR_Word) read_profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 334 "read_profile.m"
          if (read_profile__succeeded)
#line 334 "read_profile.m"
            {
#line 334 "read_profile.m"
              read_profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), read_profile__HeadVar__2_2, (MR_Integer) 0)));
#line 5238 "read_profile.c"
              read_profile__succeeded = (strcmp(read_profile__V_7_7, read_profile__V_8_8) == 0);
#line 334 "read_profile.m"
            }
#line 334 "read_profile.m"
        }
#line 334 "read_profile.m"
      else
#line 334 "read_profile.m"
        if (((MR_tag((MR_Word) read_profile__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 334 "read_profile.m"
          {
#line 334 "read_profile.m"
            MR_Word read_profile__V_3_3 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__1_1), (MR_Integer) 0);
#line 334 "read_profile.m"
            MR_Word read_profile__V_4_4;

#line 334 "read_profile.m"
            read_profile__succeeded = ((MR_tag((MR_Word) read_profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 334 "read_profile.m"
            if (read_profile__succeeded)
#line 334 "read_profile.m"
              {
#line 334 "read_profile.m"
                read_profile__V_4_4 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__2_2), (MR_Integer) 0);
#line 5263 "read_profile.c"
                {
#line 5265 "read_profile.c"
                  return read_profile__succeeded = profile____Unify____initial_deep_0_0(read_profile__V_3_3, read_profile__V_4_4);
                }
#line 334 "read_profile.m"
              }
#line 334 "read_profile.m"
          }
#line 334 "read_profile.m"
        else
#line 334 "read_profile.m"
          {
#line 334 "read_profile.m"
            MR_Word read_profile__V_5_5 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__1_1), (MR_Integer) 1);
#line 334 "read_profile.m"
            MR_Word read_profile__V_6_6;

#line 334 "read_profile.m"
            read_profile__succeeded = ((MR_tag((MR_Word) read_profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 334 "read_profile.m"
            if (read_profile__succeeded)
#line 334 "read_profile.m"
              {
#line 334 "read_profile.m"
                read_profile__V_6_6 = (MR_Word) MR_body(((MR_Word) read_profile__HeadVar__2_2), (MR_Integer) 1);
#line 5289 "read_profile.c"
                {
#line 5291 "read_profile.c"
                  return read_profile__succeeded = profile____Unify____initial_deep_0_0(read_profile__V_5_5, read_profile__V_6_6);
                }
#line 334 "read_profile.m"
              }
#line 334 "read_profile.m"
          }
#line 334 "read_profile.m"
    return read_profile__succeeded;
#line 334 "read_profile.m"
  }
#line 334 "read_profile.m"
}

#line 53 "read_profile.m"
static void MR_CALL 
read_profile____Compare____maybe_error2_2_0(
#line 53 "read_profile.m"
  MR_Word read_profile__TypeInfo_for_T1_19,
#line 53 "read_profile.m"
  MR_Word read_profile__TypeInfo_for_T2_20,
#line 53 "read_profile.m"
  MR_Word * read_profile__HeadVar__1_1,
#line 53 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2,
#line 53 "read_profile.m"
  MR_Word read_profile__HeadVar__3_3)
#line 53 "read_profile.m"
{
#line 53 "read_profile.m"
  {
#line 53 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 53 "read_profile.m"
    MR_Integer read_profile__CastX_17 = (MR_Integer) read_profile__HeadVar__2_2;
#line 53 "read_profile.m"
    MR_Integer read_profile__CastY_18 = (MR_Integer) read_profile__HeadVar__3_3;

#line 53 "read_profile.m"
    read_profile__succeeded = (read_profile__CastX_17 == read_profile__CastY_18);
#line 53 "read_profile.m"
    if (read_profile__succeeded)
#line 5333 "read_profile.c"
      *read_profile__HeadVar__1_1 = (MR_Integer) 0;
#line 53 "read_profile.m"
    else
#line 53 "read_profile.m"
      if (((MR_tag((MR_Word) read_profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 53 "read_profile.m"
        {
#line 53 "read_profile.m"
          MR_String read_profile__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__2_2, (MR_Integer) 0)));

#line 53 "read_profile.m"
          if (((MR_tag((MR_Word) read_profile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 53 "read_profile.m"
            {
#line 53 "read_profile.m"
              MR_String read_profile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__3_3, (MR_Integer) 0)));

#line 53 "read_profile.m"
              {
#line 53 "read_profile.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(read_profile__HeadVar__1_1, read_profile__V_22_22, read_profile__V_16_16);
#line 53 "read_profile.m"
                return;
              }
#line 53 "read_profile.m"
            }
#line 53 "read_profile.m"
          else
#line 5362 "read_profile.c"
            *read_profile__HeadVar__1_1 = (MR_Integer) 2;
#line 53 "read_profile.m"
        }
#line 53 "read_profile.m"
      else
#line 53 "read_profile.m"
        {
#line 53 "read_profile.m"
          MR_Box read_profile__V_23_23 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__2_2, (MR_Integer) 1));
#line 53 "read_profile.m"
          MR_Box read_profile__V_24_24 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__2_2, (MR_Integer) 0));

#line 53 "read_profile.m"
          if (((MR_tag((MR_Word) read_profile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5377 "read_profile.c"
            *read_profile__HeadVar__1_1 = (MR_Integer) 1;
#line 53 "read_profile.m"
          else
#line 53 "read_profile.m"
            {
#line 53 "read_profile.m"
              MR_Box read_profile__V_6_6 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__3_3, (MR_Integer) 0));
#line 53 "read_profile.m"
              MR_Box read_profile__V_7_7 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__3_3, (MR_Integer) 1));
#line 53 "read_profile.m"
              MR_Word read_profile__V_8_8;

#line 53 "read_profile.m"
              {
#line 53 "read_profile.m"
                mercury__builtin__compare_3_p_0(read_profile__TypeInfo_for_T1_19, &read_profile__V_8_8, read_profile__V_24_24, read_profile__V_6_6);
              }
#line 5395 "read_profile.c"
              read_profile__succeeded = (read_profile__V_8_8 == (MR_Integer) 0);
#line 53 "read_profile.m"
              read_profile__succeeded = !(read_profile__succeeded);
#line 53 "read_profile.m"
              if (read_profile__succeeded)
#line 53 "read_profile.m"
                *read_profile__HeadVar__1_1 = read_profile__V_8_8;
#line 53 "read_profile.m"
              else
#line 53 "read_profile.m"
                {
#line 53 "read_profile.m"
                  mercury__builtin__compare_3_p_0(read_profile__TypeInfo_for_T2_20, read_profile__HeadVar__1_1, read_profile__V_23_23, read_profile__V_7_7);
#line 53 "read_profile.m"
                  return;
                }
#line 53 "read_profile.m"
            }
#line 53 "read_profile.m"
        }
#line 53 "read_profile.m"
  }
#line 53 "read_profile.m"
}

#line 53 "read_profile.m"
static MR_bool MR_CALL 
read_profile____Unify____maybe_error2_2_0(
#line 53 "read_profile.m"
  MR_Word read_profile__TypeInfo_for_T1_11,
#line 53 "read_profile.m"
  MR_Word read_profile__TypeInfo_for_T2_12,
#line 53 "read_profile.m"
  MR_Word read_profile__HeadVar__1_1,
#line 53 "read_profile.m"
  MR_Word read_profile__HeadVar__2_2)
#line 53 "read_profile.m"
{
#line 53 "read_profile.m"
  {
#line 53 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 53 "read_profile.m"
    MR_Integer read_profile__CastX_9 = (MR_Integer) read_profile__HeadVar__1_1;
#line 53 "read_profile.m"
    MR_Integer read_profile__CastY_10 = (MR_Integer) read_profile__HeadVar__2_2;

#line 53 "read_profile.m"
    read_profile__succeeded = (read_profile__CastX_9 == read_profile__CastY_10);
#line 53 "read_profile.m"
    if (read_profile__succeeded)
#line 53 "read_profile.m"
      read_profile__succeeded = MR_TRUE;
#line 53 "read_profile.m"
    else
#line 53 "read_profile.m"
      if (((MR_tag((MR_Word) read_profile__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 53 "read_profile.m"
        {
#line 53 "read_profile.m"
          MR_String read_profile__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 0)));
#line 53 "read_profile.m"
          MR_String read_profile__V_8_8;

#line 53 "read_profile.m"
          read_profile__succeeded = ((MR_tag((MR_Word) read_profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 53 "read_profile.m"
          if (read_profile__succeeded)
#line 53 "read_profile.m"
            {
#line 53 "read_profile.m"
              read_profile__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__2_2, (MR_Integer) 0)));
#line 5468 "read_profile.c"
              read_profile__succeeded = (strcmp(read_profile__V_7_7, read_profile__V_8_8) == 0);
#line 53 "read_profile.m"
            }
#line 53 "read_profile.m"
        }
#line 53 "read_profile.m"
      else
#line 53 "read_profile.m"
        {
#line 53 "read_profile.m"
          MR_Box read_profile__V_3_3 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 0));
#line 53 "read_profile.m"
          MR_Box read_profile__V_4_4 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 1));
#line 53 "read_profile.m"
          MR_Box read_profile__V_5_5;
#line 53 "read_profile.m"
          MR_Box read_profile__V_6_6;

#line 53 "read_profile.m"
          read_profile__succeeded = ((MR_tag((MR_Word) read_profile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 53 "read_profile.m"
          if (read_profile__succeeded)
#line 53 "read_profile.m"
            {
#line 53 "read_profile.m"
              read_profile__V_5_5 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__2_2, (MR_Integer) 0));
#line 53 "read_profile.m"
              read_profile__V_6_6 = (MR_hl_field(MR_mktag(0), read_profile__HeadVar__2_2, (MR_Integer) 1));
#line 5497 "read_profile.c"
              {
#line 5499 "read_profile.c"
                read_profile__succeeded = mercury__builtin__unify_2_p_0(read_profile__TypeInfo_for_T1_11, read_profile__V_3_3, read_profile__V_5_5);
              }
#line 53 "read_profile.m"
              if (read_profile__succeeded)
#line 5504 "read_profile.c"
                {
#line 5506 "read_profile.c"
                  return read_profile__succeeded = mercury__builtin__unify_2_p_0(read_profile__TypeInfo_for_T2_12, read_profile__V_4_4, read_profile__V_6_6);
                }
#line 53 "read_profile.m"
            }
#line 53 "read_profile.m"
        }
#line 53 "read_profile.m"
    return read_profile__succeeded;
#line 53 "read_profile.m"
  }
#line 53 "read_profile.m"
}

#line 1543 "read_profile.m"
static MR_bool MR_CALL 
read_profile__is_next_item_token_2_p_0(
#line 1543 "read_profile.m"
  MR_Integer read_profile__Int_1,
#line 1543 "read_profile.m"
  MR_Word * read_profile__NextItem_2)
#line 1543 "read_profile.m"
{
#line 1545 "read_profile.m"
  {
#line 1545 "read_profile.m"
    MR_bool read_profile__succeeded;

#line 1548 "read_profile.m"
{
#define MR_PROC_LABEL read_profile__is_next_item_token_2_p_0

	MR_Integer Int;
	MR_Word NextItem;
	MR_bool SUCCESS_INDICATOR;

	Int =  read_profile__Int_1 ;
		{
#line 1548 "read_profile.m"

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

#line 5562 "read_profile.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *read_profile__NextItem_2  = NextItem;
#line 1548 "read_profile.m"
	}
read_profile__succeeded  = SUCCESS_INDICATOR;
}
#line 1545 "read_profile.m"
    return read_profile__succeeded;
#line 1545 "read_profile.m"
  }
#line 1543 "read_profile.m"
}

#line 1505 "read_profile.m"
static MR_Word MR_CALL 
read_profile__make_cssptr_1_f_0(
#line 1505 "read_profile.m"
  MR_Integer read_profile__CSSI_3)
#line 1505 "read_profile.m"
{
#line 1510 "read_profile.m"
  {
#line 1510 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1510 "read_profile.m"
    MR_Word read_profile__HeadVar__2_2 = (MR_Word) read_profile__CSSI_3;

#line 1510 "read_profile.m"
    return read_profile__HeadVar__2_2;
#line 1510 "read_profile.m"
  }
#line 1505 "read_profile.m"
}

#line 1504 "read_profile.m"
static MR_Word MR_CALL 
read_profile__make_csdptr_1_f_0(
#line 1504 "read_profile.m"
  MR_Integer read_profile__CSDI_3)
#line 1504 "read_profile.m"
{
#line 1509 "read_profile.m"
  {
#line 1509 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1509 "read_profile.m"
    MR_Word read_profile__HeadVar__2_2 = (MR_Word) read_profile__CSDI_3;

#line 1509 "read_profile.m"
    return read_profile__HeadVar__2_2;
#line 1509 "read_profile.m"
  }
#line 1504 "read_profile.m"
}

#line 1489 "read_profile.m"
static void MR_CALL 
read_profile__deep_insert_4_p_0(
#line 1489 "read_profile.m"
  MR_Word read_profile__TypeInfo_for_T_12,
#line 1489 "read_profile.m"
  MR_ArrayPtr read_profile__A0_5,
#line 1489 "read_profile.m"
  MR_Integer read_profile__Ind_6,
#line 1489 "read_profile.m"
  MR_Box read_profile__Item_7,
#line 1489 "read_profile.m"
  MR_ArrayPtr * read_profile__A_8)
#line 1489 "read_profile.m"
{
#line 1491 "read_profile.m"
  {
#line 1491 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1491 "read_profile.m"
    MR_Integer read_profile__Max_9;

#line 1492 "read_profile.m"
    {
#line 1492 "read_profile.m"
      mercury__array__max_2_p_0(read_profile__TypeInfo_for_T_12, read_profile__A0_5, &read_profile__Max_9);
    }
#line 1493 "read_profile.m"
    read_profile__succeeded = (read_profile__Ind_6 > read_profile__Max_9);
#line 1498 "read_profile.m"
    if (read_profile__succeeded)
#line 1494 "read_profile.m"
      {
#line 1494 "read_profile.m"
        {
#line 1494 "read_profile.m"
          mercury__require__error_1_p_0((MR_String) "deep_insert: array bounds violation");
#line 1494 "read_profile.m"
          return;
        }
#line 1494 "read_profile.m"
      }
#line 1498 "read_profile.m"
    else
#line 1499 "read_profile.m"
      {
#line 1499 "read_profile.m"
        MR_Word read_profile__TypeInfo_14_14;
#line 1499 "read_profile.m"
        MR_ArrayPtr read_profile__V_11_11;
#line 1499 "read_profile.m"
        MR_Box read_profile__conv0_V_11_11;

#line 5674 "read_profile.c"
        {
#line 5676 "read_profile.c"
          read_profile__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5678 "read_profile.c"
          MR_hl_field(MR_mktag(0), read_profile__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
#line 5680 "read_profile.c"
          MR_hl_field(MR_mktag(0), read_profile__TypeInfo_14_14, 1) = ((MR_Box) (read_profile__TypeInfo_for_T_12));
#line 5682 "read_profile.c"
        }
#line 1499 "read_profile.m"
        {
#line 1499 "read_profile.m"
          read_profile__conv0_V_11_11 = array_util__u_1_f_0(read_profile__TypeInfo_14_14, ((MR_Box) (read_profile__A0_5)));
        }
#line 1499 "read_profile.m"
        read_profile__V_11_11 = ((MR_ArrayPtr) read_profile__conv0_V_11_11);
#line 1499 "read_profile.m"
        {
#line 1499 "read_profile.m"
          mercury__array__set_4_p_0(read_profile__TypeInfo_for_T_12, read_profile__Ind_6, read_profile__Item_7, read_profile__V_11_11, read_profile__A_8);
#line 1499 "read_profile.m"
          return;
        }
#line 1499 "read_profile.m"
      }
#line 1491 "read_profile.m"
  }
#line 1489 "read_profile.m"
}

#line 1465 "read_profile.m"
static void MR_CALL 
read_profile__read_deep_byte_3_p_0(
#line 1465 "read_profile.m"
  MR_Word * read_profile__MaybeByte_4)
#line 1465 "read_profile.m"
{
#line 1468 "read_profile.m"
  {
#line 1468 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1468 "read_profile.m"
    MR_Word read_profile__MaybeRawByte_6;

#line 1469 "read_profile.m"
    {
#line 1469 "read_profile.m"
      mercury__io__read_byte_3_p_0(&read_profile__MaybeRawByte_6);
    }
#line 1473 "read_profile.m"
    if ((read_profile__MaybeRawByte_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1474 "read_profile.m"
      {
#line 1475 "read_profile.m"
        *read_profile__MaybeByte_4 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_9[8]);
#line 1474 "read_profile.m"
      }
#line 1473 "read_profile.m"
    else
#line 1473 "read_profile.m"
      if (((MR_tag((MR_Word) read_profile__MaybeRawByte_6)) == (MR_mktag((MR_Integer) 2))))
#line 1477 "read_profile.m"
        {
#line 1477 "read_profile.m"
          MR_Word read_profile__Error_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), read_profile__MaybeRawByte_6, (MR_Integer) 0)));
#line 1477 "read_profile.m"
          MR_String read_profile__Msg_9;

#line 1478 "read_profile.m"
          {
#line 1478 "read_profile.m"
            mercury__io__error_message_2_p_0(read_profile__Error_8, &read_profile__Msg_9);
          }
#line 1479 "read_profile.m"
          {
#line 1479 "read_profile.m"
            MR_Word base;
#line 1479 "read_profile.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "read_profile.m"
            *read_profile__MaybeByte_4 = base;
#line 1479 "read_profile.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Msg_9));
#line 1479 "read_profile.m"
          }
#line 1477 "read_profile.m"
        }
#line 1473 "read_profile.m"
      else
#line 1471 "read_profile.m"
        {
#line 1471 "read_profile.m"
          MR_Integer read_profile__Byte_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__MaybeRawByte_6, (MR_Integer) 0)));

#line 1472 "read_profile.m"
          {
#line 1472 "read_profile.m"
            MR_Word base;
#line 1472 "read_profile.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1472 "read_profile.m"
            *read_profile__MaybeByte_4 = base;
#line 1472 "read_profile.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Byte_7));
#line 1472 "read_profile.m"
          }
#line 1471 "read_profile.m"
        }
#line 1468 "read_profile.m"
  }
#line 1465 "read_profile.m"
}

#line 1448 "read_profile.m"
static void MR_CALL 
read_profile__read_n_bytes_acc_5_p_0(
#line 1448 "read_profile.m"
  MR_Integer read_profile__N_6,
#line 1448 "read_profile.m"
  MR_Word read_profile__RevBytes0_7,
#line 1448 "read_profile.m"
  MR_Word * read_profile__MaybeNBytes_8)
#line 1448 "read_profile.m"
{
#line 1454 "read_profile.m"
  while (MR_TRUE)
#line 1454 "read_profile.m"
    {
#line 1454 "read_profile.m"
      /* tailcall optimized into a loop */
#line 1454 "read_profile.m"
      {
#line 1454 "read_profile.m"
        MR_bool read_profile__succeeded = (read_profile__N_6 <= (MR_Integer) 0);

#line 1454 "read_profile.m"
        if (read_profile__succeeded)
#line 1453 "read_profile.m"
          {
#line 1453 "read_profile.m"
            MR_Word base;
#line 1453 "read_profile.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1453 "read_profile.m"
            *read_profile__MaybeNBytes_8 = base;
#line 1453 "read_profile.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__RevBytes0_7));
#line 1453 "read_profile.m"
          }
#line 1454 "read_profile.m"
        else
#line 1455 "read_profile.m"
          {
#line 1455 "read_profile.m"
            MR_Word read_profile__MaybeByte_10;

#line 1455 "read_profile.m"
            {
#line 1455 "read_profile.m"
              read_profile__read_deep_byte_3_p_0(&read_profile__MaybeByte_10);
            }
#line 1459 "read_profile.m"
            if (((MR_tag((MR_Word) read_profile__MaybeByte_10)) == (MR_mktag((MR_Integer) 1))))
#line 1461 "read_profile.m"
              *read_profile__MaybeNBytes_8 = (MR_Word) read_profile__MaybeByte_10;
#line 1459 "read_profile.m"
            else
#line 1457 "read_profile.m"
              {
#line 1457 "read_profile.m"
                MR_Integer read_profile__Byte_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeByte_10, (MR_Integer) 0)));
#line 1457 "read_profile.m"
                MR_Integer read_profile__V_17_17 = (read_profile__N_6 - (MR_Integer) 1);
#line 1457 "read_profile.m"
                MR_Word read_profile__V_18_18;

#line 1458 "read_profile.m"
                {
#line 1458 "read_profile.m"
                  read_profile__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_18_18, 0) = ((MR_Box) (read_profile__Byte_11));
#line 1458 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_18_18, 1) = ((MR_Box) (read_profile__RevBytes0_7));
#line 1458 "read_profile.m"
                }
#line 1458 "read_profile.m"
                /* direct tailcall eliminated */
#line 1458 "read_profile.m"
                {
#line 1458 "read_profile.m"
                  MR_Integer read_profile__N__tmp_copy_6 = read_profile__V_17_17;
#line 1458 "read_profile.m"
                  MR_Word read_profile__RevBytes0__tmp_copy_7 = read_profile__V_18_18;

#line 1458 "read_profile.m"
                  read_profile__RevBytes0_7 = read_profile__RevBytes0__tmp_copy_7;
#line 1458 "read_profile.m"
                  read_profile__N_6 = read_profile__N__tmp_copy_6;
#line 1458 "read_profile.m"
                }
#line 1458 "read_profile.m"
                continue;
#line 1457 "read_profile.m"
              }
#line 1455 "read_profile.m"
          }
#line 1454 "read_profile.m"
      }
#line 1454 "read_profile.m"
      break;
#line 1454 "read_profile.m"
    }
#line 1448 "read_profile.m"
}

#line 1415 "read_profile.m"
static void MR_CALL 
read_profile__read_fixed_size_int_acc_6_p_0(
#line 1415 "read_profile.m"
  MR_Integer read_profile__BytesLeft_7,
#line 1415 "read_profile.m"
  MR_Integer read_profile__Num0_8,
#line 1415 "read_profile.m"
  MR_Integer read_profile__ShiftBy_9,
#line 1415 "read_profile.m"
  MR_Word * read_profile__MaybeInt_10)
#line 1415 "read_profile.m"
{
#line 1421 "read_profile.m"
  while (MR_TRUE)
#line 1421 "read_profile.m"
    {
#line 1421 "read_profile.m"
      /* tailcall optimized into a loop */
#line 1421 "read_profile.m"
      {
#line 1421 "read_profile.m"
        MR_bool read_profile__succeeded = (read_profile__BytesLeft_7 <= (MR_Integer) 0);

#line 1421 "read_profile.m"
        if (read_profile__succeeded)
#line 1420 "read_profile.m"
          {
#line 1420 "read_profile.m"
            MR_Word base;
#line 1420 "read_profile.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1420 "read_profile.m"
            *read_profile__MaybeInt_10 = base;
#line 1420 "read_profile.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Num0_8));
#line 1420 "read_profile.m"
          }
#line 1421 "read_profile.m"
        else
#line 1422 "read_profile.m"
          {
#line 1422 "read_profile.m"
            MR_Word read_profile__MaybeByte_12;

#line 1422 "read_profile.m"
            {
#line 1422 "read_profile.m"
              read_profile__read_deep_byte_3_p_0(&read_profile__MaybeByte_12);
            }
#line 1428 "read_profile.m"
            if (((MR_tag((MR_Word) read_profile__MaybeByte_12)) == (MR_mktag((MR_Integer) 1))))
#line 1430 "read_profile.m"
              *read_profile__MaybeInt_10 = read_profile__MaybeByte_12;
#line 1428 "read_profile.m"
            else
#line 1424 "read_profile.m"
              {
#line 1424 "read_profile.m"
                MR_Integer read_profile__Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeByte_12, (MR_Integer) 0)));
#line 1424 "read_profile.m"
                MR_Integer read_profile__Num1_14;
#line 1424 "read_profile.m"
                MR_Integer read_profile__V_20_20;
#line 1424 "read_profile.m"
                MR_Integer read_profile__V_21_21;
#line 1424 "read_profile.m"
                MR_Integer read_profile__V_22_22;

#line 1425 "read_profile.m"
                {
#line 1425 "read_profile.m"
                  read_profile__V_20_20 = mercury__int__f_60_60_2_f_0(read_profile__Byte_13, read_profile__ShiftBy_9);
                }
#line 1425 "read_profile.m"
                read_profile__Num1_14 = (read_profile__Num0_8 | read_profile__V_20_20);
#line 1426 "read_profile.m"
                read_profile__V_21_21 = (read_profile__BytesLeft_7 - (MR_Integer) 1);
#line 1426 "read_profile.m"
                read_profile__V_22_22 = (read_profile__ShiftBy_9 + (MR_Integer) 8);
#line 1426 "read_profile.m"
                /* direct tailcall eliminated */
#line 1426 "read_profile.m"
                {
#line 1426 "read_profile.m"
                  MR_Integer read_profile__BytesLeft__tmp_copy_7 = read_profile__V_21_21;
#line 1426 "read_profile.m"
                  MR_Integer read_profile__Num0__tmp_copy_8 = read_profile__Num1_14;
#line 1426 "read_profile.m"
                  MR_Integer read_profile__ShiftBy__tmp_copy_9 = read_profile__V_22_22;

#line 1426 "read_profile.m"
                  read_profile__ShiftBy_9 = read_profile__ShiftBy__tmp_copy_9;
#line 1426 "read_profile.m"
                  read_profile__Num0_8 = read_profile__Num0__tmp_copy_8;
#line 1426 "read_profile.m"
                  read_profile__BytesLeft_7 = read_profile__BytesLeft__tmp_copy_7;
#line 1426 "read_profile.m"
                }
#line 1426 "read_profile.m"
                continue;
#line 1424 "read_profile.m"
              }
#line 1422 "read_profile.m"
          }
#line 1421 "read_profile.m"
      }
#line 1421 "read_profile.m"
      break;
#line 1421 "read_profile.m"
    }
#line 1415 "read_profile.m"
}

#line 1406 "read_profile.m"
static void MR_CALL 
read_profile__read_fixed_size_int_3_p_0(
#line 1406 "read_profile.m"
  MR_Word * read_profile__MaybeInt_4)
#line 1406 "read_profile.m"
{
#line 1409 "read_profile.m"
  {
#line 1409 "read_profile.m"
    MR_bool read_profile__succeeded;

#line 1410 "read_profile.m"
    {
#line 1410 "read_profile.m"
      read_profile__read_fixed_size_int_acc_6_p_0((MR_Integer) 8, (MR_Integer) 0, (MR_Integer) 0, read_profile__MaybeInt_4);
#line 1410 "read_profile.m"
      return;
    }
#line 1409 "read_profile.m"
  }
#line 1406 "read_profile.m"
}

#line 1377 "read_profile.m"
static void MR_CALL 
read_profile__read_num_acc_4_p_0(
#line 1377 "read_profile.m"
  MR_Integer read_profile__Num0_5,
#line 1377 "read_profile.m"
  MR_Word * read_profile__MaybeNum_6)
#line 1377 "read_profile.m"
{
#line 1380 "read_profile.m"
  while (MR_TRUE)
#line 1380 "read_profile.m"
    {
#line 1380 "read_profile.m"
      /* tailcall optimized into a loop */
#line 1380 "read_profile.m"
      {
#line 1380 "read_profile.m"
        MR_bool read_profile__succeeded;
#line 1380 "read_profile.m"
        MR_Word read_profile__MaybeByte_8;

#line 1381 "read_profile.m"
        {
#line 1381 "read_profile.m"
          mercury__io__read_byte_3_p_0(&read_profile__MaybeByte_8);
        }
#line 1390 "read_profile.m"
        if ((read_profile__MaybeByte_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1391 "read_profile.m"
          {
#line 1392 "read_profile.m"
            *read_profile__MaybeNum_6 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_9[8]);
#line 1391 "read_profile.m"
          }
#line 1390 "read_profile.m"
        else
#line 1390 "read_profile.m"
          if (((MR_tag((MR_Word) read_profile__MaybeByte_8)) == (MR_mktag((MR_Integer) 2))))
#line 1394 "read_profile.m"
            {
#line 1394 "read_profile.m"
              MR_Word read_profile__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), read_profile__MaybeByte_8, (MR_Integer) 0)));
#line 1394 "read_profile.m"
              MR_String read_profile__Msg_12;

#line 1395 "read_profile.m"
              {
#line 1395 "read_profile.m"
                mercury__io__error_message_2_p_0(read_profile__Error_11, &read_profile__Msg_12);
              }
#line 1396 "read_profile.m"
              {
#line 1396 "read_profile.m"
                MR_Word base;
#line 1396 "read_profile.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "read_profile.m"
                *read_profile__MaybeNum_6 = base;
#line 1396 "read_profile.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Msg_12));
#line 1396 "read_profile.m"
              }
#line 1394 "read_profile.m"
            }
#line 1390 "read_profile.m"
          else
#line 1383 "read_profile.m"
            {
#line 1383 "read_profile.m"
              MR_Integer read_profile__Byte_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__MaybeByte_8, (MR_Integer) 0)));
#line 1383 "read_profile.m"
              MR_Integer read_profile__Num1_10;
#line 1383 "read_profile.m"
              MR_Integer read_profile__V_17_17;
#line 1383 "read_profile.m"
              MR_Integer read_profile__V_19_19;
#line 1385 "read_profile.m"
              MR_Integer read_profile__V_21_21;

#line 1384 "read_profile.m"
              {
#line 1384 "read_profile.m"
                read_profile__V_17_17 = mercury__int__f_60_60_2_f_0(read_profile__Num0_5, (MR_Integer) 7);
              }
#line 1384 "read_profile.m"
              read_profile__V_19_19 = (read_profile__Byte_9 & (MR_Integer) 127);
#line 1384 "read_profile.m"
              read_profile__Num1_10 = (read_profile__V_17_17 | read_profile__V_19_19);
#line 1385 "read_profile.m"
              read_profile__V_21_21 = (read_profile__Byte_9 & (MR_Integer) 128);
#line 1385 "read_profile.m"
              read_profile__succeeded = (read_profile__V_21_21 == (MR_Integer) 0);
#line 1385 "read_profile.m"
              read_profile__succeeded = !(read_profile__succeeded);
#line 1387 "read_profile.m"
              if (read_profile__succeeded)
#line 1386 "read_profile.m"
                {
#line 1386 "read_profile.m"
                  /* direct tailcall eliminated */
#line 1386 "read_profile.m"
                  {
#line 1386 "read_profile.m"
                    MR_Integer read_profile__Num0__tmp_copy_5 = read_profile__Num1_10;

#line 1386 "read_profile.m"
                    read_profile__Num0_5 = read_profile__Num0__tmp_copy_5;
#line 1386 "read_profile.m"
                  }
#line 1386 "read_profile.m"
                  continue;
#line 1386 "read_profile.m"
                }
#line 1387 "read_profile.m"
              else
#line 1388 "read_profile.m"
                {
#line 1388 "read_profile.m"
                  MR_Word base;
#line 1388 "read_profile.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1388 "read_profile.m"
                  *read_profile__MaybeNum_6 = base;
#line 1388 "read_profile.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Num1_10));
#line 1388 "read_profile.m"
                }
#line 1383 "read_profile.m"
            }
#line 1380 "read_profile.m"
      }
#line 1380 "read_profile.m"
      break;
#line 1380 "read_profile.m"
    }
#line 1377 "read_profile.m"
}

#line 1367 "read_profile.m"
static void MR_CALL 
read_profile__read_num_3_p_0(
#line 1367 "read_profile.m"
  MR_Word * read_profile__MaybeNum_4)
#line 1367 "read_profile.m"
{
#line 1369 "read_profile.m"
  {
#line 1369 "read_profile.m"
    MR_bool read_profile__succeeded;

#line 1370 "read_profile.m"
    {
#line 1370 "read_profile.m"
      read_profile__read_num_acc_4_p_0((MR_Integer) 0, read_profile__MaybeNum_4);
#line 1370 "read_profile.m"
      return;
    }
#line 1369 "read_profile.m"
  }
#line 1367 "read_profile.m"
}

#line 1358 "read_profile.m"
static void MR_CALL 
read_profile__num_to_cp_type_2_p_0(
#line 1358 "read_profile.m"
  MR_Integer read_profile__Int_1,
#line 1358 "read_profile.m"
  MR_Word * read_profile__CPType_2)
#line 1358 "read_profile.m"
{
#line 1360 "read_profile.m"
  {
#line 1360 "read_profile.m"
    MR_bool read_profile__succeeded;

#line 1363 "read_profile.m"
{
#define MR_PROC_LABEL read_profile__num_to_cp_type_2_p_0

	MR_Integer Int;
	MR_Word CPType;

	Int =  read_profile__Int_1 ;
		{
#line 1363 "read_profile.m"

    CPType = Int;

#line 6219 "read_profile.c"

		;}
#undef MR_PROC_LABEL
	 *read_profile__CPType_2  = CPType;
#line 1363 "read_profile.m"
}
#line 1360 "read_profile.m"
  }
#line 1358 "read_profile.m"
}

#line 1345 "read_profile.m"
static void MR_CALL 
read_profile__read_cp_type_3_p_0(
#line 1345 "read_profile.m"
  MR_Word * read_profile__MaybeCPType_4)
#line 1345 "read_profile.m"
{
#line 1347 "read_profile.m"
  {
#line 1347 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1347 "read_profile.m"
    MR_Word read_profile__MaybeNum_6;

#line 1370 "read_profile.m"
    {
#line 1370 "read_profile.m"
      read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeNum_6);
    }
#line 1353 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybeNum_6)) == (MR_mktag((MR_Integer) 1))))
#line 1355 "read_profile.m"
      *read_profile__MaybeCPType_4 = (MR_Word) read_profile__MaybeNum_6;
#line 1353 "read_profile.m"
    else
#line 1350 "read_profile.m"
      {
#line 1350 "read_profile.m"
        MR_Integer read_profile__Num_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeNum_6, (MR_Integer) 0)));
#line 1350 "read_profile.m"
        MR_Word read_profile__CPType_8;

#line 1363 "read_profile.m"
{
#define MR_PROC_LABEL read_profile__read_cp_type_3_p_0

	MR_Integer Int;
	MR_Word CPType;

	Int =  read_profile__Num_7 ;
		{
#line 1363 "read_profile.m"

    CPType = Int;

#line 6276 "read_profile.c"

		;}
#undef MR_PROC_LABEL
	 read_profile__CPType_8  = CPType;
#line 1363 "read_profile.m"
}
#line 1352 "read_profile.m"
        {
#line 1352 "read_profile.m"
          MR_Word base;
#line 1352 "read_profile.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "read_profile.m"
          *read_profile__MaybeCPType_4 = base;
#line 1352 "read_profile.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__CPType_8));
#line 1352 "read_profile.m"
        }
#line 1350 "read_profile.m"
      }
#line 1347 "read_profile.m"
  }
#line 1345 "read_profile.m"
}

#line 1335 "read_profile.m"
static void MR_CALL 
read_profile__read_ptr_4_p_0(
#line 1335 "read_profile.m"
  MR_Word read_profile___Kind_5,
#line 1335 "read_profile.m"
  MR_Word * read_profile__MaybePtr_6)
#line 1335 "read_profile.m"
{
#line 1369 "read_profile.m"
  {
#line 1369 "read_profile.m"
    MR_bool read_profile__succeeded;

#line 1369 "read_profile.m"
    {
#line 1369 "read_profile.m"
      read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_p_0(read_profile__MaybePtr_6);
#line 1369 "read_profile.m"
      return;
    }
#line 1369 "read_profile.m"
  }
#line 1335 "read_profile.m"
}

#line 1317 "read_profile.m"
static MR_bool MR_CALL 
read_profile__read_string_3_p_0_1(
#line 1317 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 1317 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 1317 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_2)
#line 1317 "read_profile.m"
{
#line 1317 "read_profile.m"
  {
#line 1317 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1317 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 1317 "read_profile.m"
    MR_Char read_profile__conv0_HeadVar__2_21;

#line 1317 "read_profile.m"
    {
#line 1317 "read_profile.m"
      read_profile__succeeded = read_profile__IntroducedFrom__pred__read_n_byte_string__1317__1_2_p_0(((MR_Integer) read_profile__wrapper_arg_1), &read_profile__conv0_HeadVar__2_21);
    }
#line 1317 "read_profile.m"
    if (read_profile__succeeded)
#line 1317 "read_profile.m"
      {
#line 1317 "read_profile.m"
        *read_profile__wrapper_arg_2 = ((MR_Box) (MR_Word) (read_profile__conv0_HeadVar__2_21));
#line 1317 "read_profile.m"
        read_profile__succeeded = MR_TRUE;
#line 1317 "read_profile.m"
      }
#line 1317 "read_profile.m"
    return read_profile__succeeded;
#line 1317 "read_profile.m"
  }
#line 1317 "read_profile.m"
}

#line 1292 "read_profile.m"
static void MR_CALL 
read_profile__read_string_3_p_0(
#line 1292 "read_profile.m"
  MR_Word * read_profile__MaybeStr_4)
#line 1292 "read_profile.m"
{
#line 1295 "read_profile.m"
  {
#line 1295 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1295 "read_profile.m"
    MR_Word read_profile__MaybeNum_6;

#line 1370 "read_profile.m"
    {
#line 1370 "read_profile.m"
      read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeNum_6);
    }
#line 1304 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybeNum_6)) == (MR_mktag((MR_Integer) 1))))
#line 1306 "read_profile.m"
      *read_profile__MaybeStr_4 = (MR_Word) read_profile__MaybeNum_6;
#line 1304 "read_profile.m"
    else
#line 1298 "read_profile.m"
      {
#line 1298 "read_profile.m"
        MR_Integer read_profile__Length_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeNum_6, (MR_Integer) 0)));

#line 1299 "read_profile.m"
        read_profile__succeeded = (read_profile__Length_7 == (MR_Integer) 0);
#line 1301 "read_profile.m"
        if (read_profile__succeeded)
#line 1300 "read_profile.m"
          {
#line 1300 "read_profile.m"
            *read_profile__MaybeStr_4 = (MR_Word) &read_profile_scalar_common_9[9];
#line 1300 "read_profile.m"
          }
#line 1301 "read_profile.m"
        else
#line 1312 "read_profile.m"
          {
#line 1312 "read_profile.m"
            MR_Word read_profile__MaybeRevNBytes_62;

#line 1438 "read_profile.m"
            {
#line 1438 "read_profile.m"
              read_profile__read_n_bytes_acc_5_p_0(read_profile__Length_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__MaybeRevNBytes_62);
            }
#line 6422 "read_profile.c"
            if (((MR_tag((MR_Word) read_profile__MaybeRevNBytes_62)) == (MR_mktag((MR_Integer) 1))))
#line 1327 "read_profile.m"
              *read_profile__MaybeStr_4 = (MR_Word) read_profile__MaybeRevNBytes_62;
#line 6426 "read_profile.c"
            else
#line 6428 "read_profile.c"
              {
#line 6430 "read_profile.c"
                MR_Word read_profile__Bytes_34;
#line 6432 "read_profile.c"
                MR_Word read_profile__RevBytes_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeRevNBytes_62, (MR_Integer) 0)));
#line 1322 "read_profile.m"
                MR_Word read_profile__Chars_37;

#line 1441 "read_profile.m"
                {
#line 1441 "read_profile.m"
                  mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__RevBytes_63, &read_profile__Bytes_34);
                }
#line 1317 "read_profile.m"
                {
#line 1317 "read_profile.m"
                  read_profile__succeeded = mercury__list__map_3_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &read_profile_scalar_common_4[49], read_profile__Bytes_34, &read_profile__Chars_37);
                }
#line 1322 "read_profile.m"
                if (read_profile__succeeded)
#line 1320 "read_profile.m"
                  {
#line 1320 "read_profile.m"
                    MR_String read_profile__Str_38;

#line 1320 "read_profile.m"
                    {
#line 1320 "read_profile.m"
                      mercury__string__from_char_list_2_p_0(read_profile__Chars_37, &read_profile__Str_38);
                    }
#line 1321 "read_profile.m"
                    {
#line 1321 "read_profile.m"
                      MR_Word base;
#line 1321 "read_profile.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "read_profile.m"
                      *read_profile__MaybeStr_4 = base;
#line 1321 "read_profile.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Str_38));
#line 1321 "read_profile.m"
                    }
#line 1320 "read_profile.m"
                  }
#line 1322 "read_profile.m"
                else
#line 1323 "read_profile.m"
                  {
#line 1323 "read_profile.m"
                    *read_profile__MaybeStr_4 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_9[10]);
#line 1323 "read_profile.m"
                  }
#line 6481 "read_profile.c"
              }
#line 1312 "read_profile.m"
          }
#line 1298 "read_profile.m"
      }
#line 1295 "read_profile.m"
  }
#line 1292 "read_profile.m"
}

#line 1257 "read_profile.m"
static void MR_CALL 
read_profile__read_line_acc_5_p_0(
#line 1257 "read_profile.m"
  MR_Integer read_profile__Limit_6,
#line 1257 "read_profile.m"
  MR_Word read_profile__STATE_VARIABLE_RevChars_0_17,
#line 1257 "read_profile.m"
  MR_Word * read_profile__MaybeLine_8)
#line 1257 "read_profile.m"
{
#line 1286 "read_profile.m"
  while (MR_TRUE)
#line 1286 "read_profile.m"
    {
#line 1286 "read_profile.m"
      /* tailcall optimized into a loop */
#line 1286 "read_profile.m"
      {
#line 1286 "read_profile.m"
        MR_bool read_profile__succeeded = (read_profile__Limit_6 > (MR_Integer) 0);

#line 1286 "read_profile.m"
        if (read_profile__succeeded)
#line 1262 "read_profile.m"
          {
#line 1262 "read_profile.m"
            MR_Word read_profile__MaybeByte_10;

#line 1262 "read_profile.m"
            {
#line 1262 "read_profile.m"
              mercury__io__read_byte_3_p_0(&read_profile__MaybeByte_10);
            }
#line 1278 "read_profile.m"
            if ((read_profile__MaybeByte_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1279 "read_profile.m"
              {
#line 1280 "read_profile.m"
                *read_profile__MaybeLine_8 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_9[8]);
#line 1279 "read_profile.m"
              }
#line 1278 "read_profile.m"
            else
#line 1278 "read_profile.m"
              if (((MR_tag((MR_Word) read_profile__MaybeByte_10)) == (MR_mktag((MR_Integer) 2))))
#line 1282 "read_profile.m"
                {
#line 1282 "read_profile.m"
                  MR_Word read_profile__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), read_profile__MaybeByte_10, (MR_Integer) 0)));
#line 1282 "read_profile.m"
                  MR_String read_profile__Msg_16;

#line 1283 "read_profile.m"
                  {
#line 1283 "read_profile.m"
                    mercury__io__error_message_2_p_0(read_profile__Error_15, &read_profile__Msg_16);
                  }
#line 1284 "read_profile.m"
                  {
#line 1284 "read_profile.m"
                    MR_Word base;
#line 1284 "read_profile.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "read_profile.m"
                    *read_profile__MaybeLine_8 = base;
#line 1284 "read_profile.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Msg_16));
#line 1284 "read_profile.m"
                  }
#line 1282 "read_profile.m"
                }
#line 1278 "read_profile.m"
              else
#line 1264 "read_profile.m"
                {
#line 1264 "read_profile.m"
                  MR_Integer read_profile__Byte_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__MaybeByte_10, (MR_Integer) 0)));
#line 1275 "read_profile.m"
                  MR_Char read_profile__Char_12;

#line 1265 "read_profile.m"
                  {
#line 1265 "read_profile.m"
                    read_profile__succeeded = mercury__char__to_int_2_p_2(&read_profile__Char_12, read_profile__Byte_11);
                  }
#line 1275 "read_profile.m"
                  if (read_profile__succeeded)
#line 1267 "read_profile.m"
                    {
#line 1267 "read_profile.m"
                      MR_Word read_profile__STATE_VARIABLE_RevChars_23_23;

#line 1267 "read_profile.m"
                      {
#line 1267 "read_profile.m"
                        read_profile__STATE_VARIABLE_RevChars_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1267 "read_profile.m"
                        MR_hl_field(MR_mktag(1), read_profile__STATE_VARIABLE_RevChars_23_23, 0) = ((MR_Box) (MR_Word) (read_profile__Char_12));
#line 1267 "read_profile.m"
                        MR_hl_field(MR_mktag(1), read_profile__STATE_VARIABLE_RevChars_23_23, 1) = ((MR_Box) (read_profile__STATE_VARIABLE_RevChars_0_17));
#line 1267 "read_profile.m"
                      }
#line 1268 "read_profile.m"
                      read_profile__succeeded = (read_profile__Char_12 == (MR_Char) 10);
#line 1272 "read_profile.m"
                      if (read_profile__succeeded)
#line 1269 "read_profile.m"
                        {
#line 1269 "read_profile.m"
                          MR_Word read_profile__Chars_13;
#line 1269 "read_profile.m"
                          MR_String read_profile__Str_14;

#line 1269 "read_profile.m"
                          {
#line 1269 "read_profile.m"
                            mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, read_profile__STATE_VARIABLE_RevChars_23_23, &read_profile__Chars_13);
                          }
#line 1270 "read_profile.m"
                          {
#line 1270 "read_profile.m"
                            mercury__string__from_char_list_2_p_0(read_profile__Chars_13, &read_profile__Str_14);
                          }
#line 1271 "read_profile.m"
                          {
#line 1271 "read_profile.m"
                            MR_Word base;
#line 1271 "read_profile.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1271 "read_profile.m"
                            *read_profile__MaybeLine_8 = base;
#line 1271 "read_profile.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Str_14));
#line 1271 "read_profile.m"
                          }
#line 1269 "read_profile.m"
                        }
#line 1272 "read_profile.m"
                      else
#line 1273 "read_profile.m"
                        {
#line 1273 "read_profile.m"
                          MR_Integer read_profile__V_24_24 = (read_profile__Limit_6 - (MR_Integer) 1);

#line 1273 "read_profile.m"
                          /* direct tailcall eliminated */
#line 1273 "read_profile.m"
                          {
#line 1273 "read_profile.m"
                            MR_Integer read_profile__Limit__tmp_copy_6 = read_profile__V_24_24;
#line 1273 "read_profile.m"
                            MR_Word read_profile__STATE_VARIABLE_RevChars_0__tmp_copy_17 = read_profile__STATE_VARIABLE_RevChars_23_23;

#line 1273 "read_profile.m"
                            read_profile__STATE_VARIABLE_RevChars_0_17 = read_profile__STATE_VARIABLE_RevChars_0__tmp_copy_17;
#line 1273 "read_profile.m"
                            read_profile__Limit_6 = read_profile__Limit__tmp_copy_6;
#line 1273 "read_profile.m"
                          }
#line 1273 "read_profile.m"
                          continue;
#line 1273 "read_profile.m"
                        }
#line 1267 "read_profile.m"
                    }
#line 1275 "read_profile.m"
                  else
#line 1276 "read_profile.m"
                    {
#line 1276 "read_profile.m"
                      *read_profile__MaybeLine_8 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_9[8]);
#line 1276 "read_profile.m"
                    }
#line 1264 "read_profile.m"
                }
#line 1262 "read_profile.m"
          }
#line 1286 "read_profile.m"
        else
#line 1287 "read_profile.m"
          {
#line 1287 "read_profile.m"
            MR_Word read_profile__Chars_35;
#line 1287 "read_profile.m"
            MR_String read_profile__Str_36;

#line 1287 "read_profile.m"
            {
#line 1287 "read_profile.m"
              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, read_profile__STATE_VARIABLE_RevChars_0_17, &read_profile__Chars_35);
            }
#line 1288 "read_profile.m"
            {
#line 1288 "read_profile.m"
              mercury__string__from_char_list_2_p_0(read_profile__Chars_35, &read_profile__Str_36);
            }
#line 1289 "read_profile.m"
            {
#line 1289 "read_profile.m"
              MR_Word base;
#line 1289 "read_profile.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1289 "read_profile.m"
              *read_profile__MaybeLine_8 = base;
#line 1289 "read_profile.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Str_36));
#line 1289 "read_profile.m"
            }
#line 1287 "read_profile.m"
          }
#line 1286 "read_profile.m"
      }
#line 1286 "read_profile.m"
      break;
#line 1286 "read_profile.m"
    }
#line 1257 "read_profile.m"
}

#line 1216 "read_profile.m"
static void MR_CALL 
read_profile__read_n_things_5_p_0(
#line 1216 "read_profile.m"
  MR_Word read_profile__TypeInfo_for_T_18,
#line 1216 "read_profile.m"
  MR_Integer read_profile__N_6,
#line 1216 "read_profile.m"
  MR_Word read_profile__ItemReader_7,
#line 1216 "read_profile.m"
  MR_Word * read_profile__MaybeItems_8)
#line 1216 "read_profile.m"
{
#line 1220 "read_profile.m"
  {
#line 1220 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1220 "read_profile.m"
    MR_Word read_profile__MaybeRevItems_10;

#line 1221 "read_profile.m"
    {
#line 1221 "read_profile.m"
      read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_p_0(read_profile__N_6, read_profile__ItemReader_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__MaybeRevItems_10);
    }
#line 1226 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybeRevItems_10)) == (MR_mktag((MR_Integer) 1))))
#line 1228 "read_profile.m"
      *read_profile__MaybeItems_8 = read_profile__MaybeRevItems_10;
#line 1226 "read_profile.m"
    else
#line 1223 "read_profile.m"
      {
#line 1223 "read_profile.m"
        MR_Word read_profile__RevItems_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeRevItems_10, (MR_Integer) 0)));
#line 1223 "read_profile.m"
        MR_Word read_profile__Items_12;

#line 1224 "read_profile.m"
        {
#line 1224 "read_profile.m"
          mercury__list__reverse_2_p_0(read_profile__TypeInfo_for_T_18, read_profile__RevItems_11, &read_profile__Items_12);
        }
#line 1225 "read_profile.m"
        {
#line 1225 "read_profile.m"
          MR_Word base;
#line 1225 "read_profile.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1225 "read_profile.m"
          *read_profile__MaybeItems_8 = base;
#line 1225 "read_profile.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__Items_12));
#line 1225 "read_profile.m"
        }
#line 1223 "read_profile.m"
      }
#line 1220 "read_profile.m"
  }
#line 1216 "read_profile.m"
}

#line 1160 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_kind_and_callee_3_p_0(
#line 1160 "read_profile.m"
  MR_Word * read_profile__MaybeKindAndCallee_4)
#line 1160 "read_profile.m"
{
#line 1164 "read_profile.m"
  {
#line 1164 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1164 "read_profile.m"
    MR_Word read_profile__MaybeByte_6;

#line 1165 "read_profile.m"
    {
#line 1165 "read_profile.m"
      read_profile__read_deep_byte_3_p_0(&read_profile__MaybeByte_6);
    }
#line 1209 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybeByte_6)) == (MR_mktag((MR_Integer) 1))))
#line 1211 "read_profile.m"
      *read_profile__MaybeKindAndCallee_4 = (MR_Word) read_profile__MaybeByte_6;
#line 1209 "read_profile.m"
    else
#line 1167 "read_profile.m"
      {
#line 1167 "read_profile.m"
        MR_Integer read_profile__Byte_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeByte_6, (MR_Integer) 0)));
#line 1200 "read_profile.m"
        MR_Word read_profile__CallSiteKind_8;

#line 1168 "read_profile.m"
        {
#line 1168 "read_profile.m"
          read_profile__succeeded = profile__is_call_site_kind_2_p_0(read_profile__Byte_7, &read_profile__CallSiteKind_8);
        }
#line 1200 "read_profile.m"
        if (read_profile__succeeded)
#line 1187 "read_profile.m"
          if ((read_profile__CallSiteKind_8 == ((int) MR_callsite_callback)))
#line 1197 "read_profile.m"
            {
#line 1198 "read_profile.m"
              *read_profile__MaybeKindAndCallee_4 = (MR_Word) &read_profile_scalar_common_9[4];
#line 1197 "read_profile.m"
            }
#line 1187 "read_profile.m"
          else
#line 1187 "read_profile.m"
            if ((read_profile__CallSiteKind_8 == ((int) MR_callsite_higher_order_call)))
#line 1191 "read_profile.m"
              {
#line 1192 "read_profile.m"
                *read_profile__MaybeKindAndCallee_4 = (MR_Word) &read_profile_scalar_common_9[5];
#line 1191 "read_profile.m"
              }
#line 1187 "read_profile.m"
            else
#line 1187 "read_profile.m"
              if ((read_profile__CallSiteKind_8 == ((int) MR_callsite_method_call)))
#line 1194 "read_profile.m"
                {
#line 1195 "read_profile.m"
                  *read_profile__MaybeKindAndCallee_4 = (MR_Word) &read_profile_scalar_common_9[6];
#line 1194 "read_profile.m"
                }
#line 1187 "read_profile.m"
              else
#line 1187 "read_profile.m"
                if ((read_profile__CallSiteKind_8 == ((int) MR_callsite_normal_call)))
#line 1170 "read_profile.m"
                  {
#line 1170 "read_profile.m"
                    MR_Word read_profile__MaybeCSS_9;

#line 1370 "read_profile.m"
                    {
#line 1370 "read_profile.m"
                      read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeCSS_9);
                    }
#line 1183 "read_profile.m"
                    if (((MR_tag((MR_Word) read_profile__MaybeCSS_9)) == (MR_mktag((MR_Integer) 1))))
#line 1185 "read_profile.m"
                      *read_profile__MaybeKindAndCallee_4 = (MR_Word) read_profile__MaybeCSS_9;
#line 1183 "read_profile.m"
                    else
#line 1173 "read_profile.m"
                      {
#line 1173 "read_profile.m"
                        MR_Integer read_profile__CalleeProcStatic_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSS_9, (MR_Integer) 0)));
#line 1173 "read_profile.m"
                        MR_Word read_profile__MaybeTypeSubst_11;

#line 1174 "read_profile.m"
                        {
#line 1174 "read_profile.m"
                          read_profile__read_string_3_p_0(&read_profile__MaybeTypeSubst_11);
                        }
#line 1179 "read_profile.m"
                        if (((MR_tag((MR_Word) read_profile__MaybeTypeSubst_11)) == (MR_mktag((MR_Integer) 1))))
#line 1181 "read_profile.m"
                          *read_profile__MaybeKindAndCallee_4 = (MR_Word) read_profile__MaybeTypeSubst_11;
#line 1179 "read_profile.m"
                        else
#line 1176 "read_profile.m"
                          {
#line 1176 "read_profile.m"
                            MR_String read_profile__TypeSubst_12 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__MaybeTypeSubst_11, (MR_Integer) 0)));
#line 1176 "read_profile.m"
                            MR_Word read_profile__V_25_25;
#line 1176 "read_profile.m"
                            MR_Word read_profile__V_26_26 = (MR_Word) read_profile__CalleeProcStatic_10;

#line 1177 "read_profile.m"
                            {
#line 1177 "read_profile.m"
                              read_profile__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "read_profile.m"
                              MR_hl_field(MR_mktag(1), read_profile__V_25_25, 0) = ((MR_Box) (read_profile__V_26_26));
#line 1177 "read_profile.m"
                              MR_hl_field(MR_mktag(1), read_profile__V_25_25, 1) = ((MR_Box) (read_profile__TypeSubst_12));
#line 1177 "read_profile.m"
                            }
#line 1177 "read_profile.m"
                            {
#line 1177 "read_profile.m"
                              MR_Word base;
#line 1177 "read_profile.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "read_profile.m"
                              *read_profile__MaybeKindAndCallee_4 = base;
#line 1177 "read_profile.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_25_25));
#line 1177 "read_profile.m"
                            }
#line 1176 "read_profile.m"
                          }
#line 1173 "read_profile.m"
                      }
#line 1170 "read_profile.m"
                  }
#line 1187 "read_profile.m"
                else
#line 1188 "read_profile.m"
                  {
#line 1189 "read_profile.m"
                    *read_profile__MaybeKindAndCallee_4 = (MR_Word) &read_profile_scalar_common_9[7];
#line 1188 "read_profile.m"
                  }
#line 1200 "read_profile.m"
        else
#line 1201 "read_profile.m"
          {
#line 1201 "read_profile.m"
            MR_String read_profile__Msg_14;
#line 1201 "read_profile.m"
            MR_String read_profile__V_40_40;

#line 1201 "read_profile.m"
            {
#line 1201 "read_profile.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &read_profile_scalar_common_9[2], read_profile__Byte_7, &read_profile__V_40_40);
            }
#line 1201 "read_profile.m"
            {
#line 1201 "read_profile.m"
              read_profile__Msg_14 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected call_site_kind ", read_profile__V_40_40);
            }
#line 1202 "read_profile.m"
            {
#line 1202 "read_profile.m"
              MR_Word base;
#line 1202 "read_profile.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "read_profile.m"
              *read_profile__MaybeKindAndCallee_4 = base;
#line 1202 "read_profile.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Msg_14));
#line 1202 "read_profile.m"
            }
#line 1201 "read_profile.m"
          }
#line 1167 "read_profile.m"
      }
#line 1164 "read_profile.m"
  }
#line 1160 "read_profile.m"
}

#line 1137 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_kind_3_p_0(
#line 1137 "read_profile.m"
  MR_Word * read_profile__MaybeKind_4)
#line 1137 "read_profile.m"
{
#line 1140 "read_profile.m"
  {
#line 1140 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1140 "read_profile.m"
    MR_Word read_profile__MaybeByte_6;

#line 1141 "read_profile.m"
    {
#line 1141 "read_profile.m"
      read_profile__read_deep_byte_3_p_0(&read_profile__MaybeByte_6);
    }
#line 1155 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybeByte_6)) == (MR_mktag((MR_Integer) 1))))
#line 1157 "read_profile.m"
      *read_profile__MaybeKind_4 = (MR_Word) read_profile__MaybeByte_6;
#line 1155 "read_profile.m"
    else
#line 1143 "read_profile.m"
      {
#line 1143 "read_profile.m"
        MR_Integer read_profile__Byte_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeByte_6, (MR_Integer) 0)));
#line 1146 "read_profile.m"
        MR_Word read_profile__CallSiteKind_8;

#line 1144 "read_profile.m"
        {
#line 1144 "read_profile.m"
          read_profile__succeeded = profile__is_call_site_kind_2_p_0(read_profile__Byte_7, &read_profile__CallSiteKind_8);
        }
#line 1146 "read_profile.m"
        if (read_profile__succeeded)
#line 1145 "read_profile.m"
          {
#line 1145 "read_profile.m"
            MR_Word base;
#line 1145 "read_profile.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1145 "read_profile.m"
            *read_profile__MaybeKind_4 = base;
#line 1145 "read_profile.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__CallSiteKind_8));
#line 1145 "read_profile.m"
          }
#line 1146 "read_profile.m"
        else
#line 1147 "read_profile.m"
          {
#line 1147 "read_profile.m"
            MR_String read_profile__Msg_9;
#line 1147 "read_profile.m"
            MR_String read_profile__V_26_26;

#line 1147 "read_profile.m"
            {
#line 1147 "read_profile.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &read_profile_scalar_common_9[2], read_profile__Byte_7, &read_profile__V_26_26);
            }
#line 1147 "read_profile.m"
            {
#line 1147 "read_profile.m"
              read_profile__Msg_9 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected call_site_kind ", read_profile__V_26_26);
            }
#line 1148 "read_profile.m"
            {
#line 1148 "read_profile.m"
              MR_Word base;
#line 1148 "read_profile.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "read_profile.m"
              *read_profile__MaybeKind_4 = base;
#line 1148 "read_profile.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Msg_9));
#line 1148 "read_profile.m"
            }
#line 1147 "read_profile.m"
          }
#line 1143 "read_profile.m"
      }
#line 1140 "read_profile.m"
  }
#line 1137 "read_profile.m"
}

#line 1109 "read_profile.m"
static void MR_CALL 
read_profile__read_multi_call_site_csdis_2_4_p_0(
#line 1109 "read_profile.m"
  MR_Word read_profile__CSDIs0_5,
#line 1109 "read_profile.m"
  MR_Word * read_profile__MaybeCSDIs_6)
#line 1109 "read_profile.m"
{
#line 1112 "read_profile.m"
  while (MR_TRUE)
#line 1112 "read_profile.m"
    {
#line 1112 "read_profile.m"
      /* tailcall optimized into a loop */
#line 1112 "read_profile.m"
      {
#line 1112 "read_profile.m"
        MR_bool read_profile__succeeded;
#line 1112 "read_profile.m"
        MR_Word read_profile__MaybeByte_9;

#line 1116 "read_profile.m"
        {
#line 1116 "read_profile.m"
          read_profile__read_deep_byte_3_p_0(&read_profile__MaybeByte_9);
        }
#line 1132 "read_profile.m"
        if (((MR_tag((MR_Word) read_profile__MaybeByte_9)) == (MR_mktag((MR_Integer) 1))))
#line 1134 "read_profile.m"
          *read_profile__MaybeCSDIs_6 = (MR_Word) read_profile__MaybeByte_9;
#line 1132 "read_profile.m"
        else
#line 1118 "read_profile.m"
          {
#line 1118 "read_profile.m"
            MR_Integer read_profile__Byte_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeByte_9, (MR_Integer) 0)));

#line 1119 "read_profile.m"
            read_profile__succeeded = (read_profile__Byte_10 == (MR_Integer) 0);
#line 1121 "read_profile.m"
            if (read_profile__succeeded)
#line 1120 "read_profile.m"
              {
#line 1120 "read_profile.m"
                MR_Word base;
#line 1120 "read_profile.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1120 "read_profile.m"
                *read_profile__MaybeCSDIs_6 = base;
#line 1120 "read_profile.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__CSDIs0_5));
#line 1120 "read_profile.m"
              }
#line 1121 "read_profile.m"
            else
#line 1122 "read_profile.m"
              {
#line 1122 "read_profile.m"
                MR_Word read_profile__MaybeCSDI_11;

#line 1122 "read_profile.m"
                {
#line 1122 "read_profile.m"
                  mercury__io__putback_byte_3_p_0(read_profile__Byte_10);
                }
#line 1370 "read_profile.m"
                {
#line 1370 "read_profile.m"
                  read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeCSDI_11);
                }
#line 1127 "read_profile.m"
                if (((MR_tag((MR_Word) read_profile__MaybeCSDI_11)) == (MR_mktag((MR_Integer) 1))))
#line 1129 "read_profile.m"
                  *read_profile__MaybeCSDIs_6 = (MR_Word) read_profile__MaybeCSDI_11;
#line 1127 "read_profile.m"
                else
#line 1125 "read_profile.m"
                  {
#line 1125 "read_profile.m"
                    MR_Integer read_profile__CSDI_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSDI_11, (MR_Integer) 0)));
#line 1125 "read_profile.m"
                    MR_Word read_profile__V_24_24;

#line 1126 "read_profile.m"
                    {
#line 1126 "read_profile.m"
                      read_profile__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "read_profile.m"
                      MR_hl_field(MR_mktag(1), read_profile__V_24_24, 0) = ((MR_Box) (read_profile__CSDI_12));
#line 1126 "read_profile.m"
                      MR_hl_field(MR_mktag(1), read_profile__V_24_24, 1) = ((MR_Box) (read_profile__CSDIs0_5));
#line 1126 "read_profile.m"
                    }
#line 1126 "read_profile.m"
                    /* direct tailcall eliminated */
#line 1126 "read_profile.m"
                    {
#line 1126 "read_profile.m"
                      MR_Word read_profile__CSDIs0__tmp_copy_5 = read_profile__V_24_24;

#line 1126 "read_profile.m"
                      read_profile__CSDIs0_5 = read_profile__CSDIs0__tmp_copy_5;
#line 1126 "read_profile.m"
                    }
#line 1126 "read_profile.m"
                    continue;
#line 1125 "read_profile.m"
                  }
#line 1122 "read_profile.m"
              }
#line 1118 "read_profile.m"
          }
#line 1112 "read_profile.m"
      }
#line 1112 "read_profile.m"
      break;
#line 1112 "read_profile.m"
    }
#line 1109 "read_profile.m"
}

#line 1093 "read_profile.m"
static void MR_CALL 
read_profile__read_multi_call_site_csdis_3_p_0(
#line 1093 "read_profile.m"
  MR_Word * read_profile__MaybeCSDIs_4)
#line 1093 "read_profile.m"
{
#line 1096 "read_profile.m"
  {
#line 1096 "read_profile.m"
    MR_bool read_profile__succeeded;

#line 1097 "read_profile.m"
    {
#line 1097 "read_profile.m"
      read_profile__read_multi_call_site_csdis_2_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), read_profile__MaybeCSDIs_4);
#line 1097 "read_profile.m"
      return;
    }
#line 1096 "read_profile.m"
  }
#line 1093 "read_profile.m"
}

#line 1076 "read_profile.m"
static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_4(
#line 1076 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 1076 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1)
#line 1076 "read_profile.m"
{
#line 1076 "read_profile.m"
  {
#line 1076 "read_profile.m"
    MR_Box read_profile__wrapper_arg_2;
#line 1076 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 1076 "read_profile.m"
    MR_Word read_profile__conv6_HeadVar__2_2;

#line 1076 "read_profile.m"
    {
#line 1076 "read_profile.m"
      read_profile__conv6_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) read_profile__wrapper_arg_1));
    }
#line 1076 "read_profile.m"
    read_profile__wrapper_arg_2 = ((MR_Box) (read_profile__conv6_HeadVar__2_2));
#line 1076 "read_profile.m"
    return read_profile__wrapper_arg_2;
#line 1076 "read_profile.m"
  }
#line 1076 "read_profile.m"
}

#line 1076 "read_profile.m"
static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_3(
#line 1076 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 1076 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1)
#line 1076 "read_profile.m"
{
#line 1076 "read_profile.m"
  {
#line 1076 "read_profile.m"
    MR_Box read_profile__wrapper_arg_2;
#line 1076 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 1076 "read_profile.m"
    MR_Word read_profile__conv4_HeadVar__2_2;

#line 1076 "read_profile.m"
    {
#line 1076 "read_profile.m"
      read_profile__conv4_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) read_profile__wrapper_arg_1));
    }
#line 1076 "read_profile.m"
    read_profile__wrapper_arg_2 = ((MR_Box) (read_profile__conv4_HeadVar__2_2));
#line 1076 "read_profile.m"
    return read_profile__wrapper_arg_2;
#line 1076 "read_profile.m"
  }
#line 1076 "read_profile.m"
}

#line 1076 "read_profile.m"
static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_2(
#line 1076 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 1076 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1)
#line 1076 "read_profile.m"
{
#line 1076 "read_profile.m"
  {
#line 1076 "read_profile.m"
    MR_Box read_profile__wrapper_arg_2;
#line 1076 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 1076 "read_profile.m"
    MR_Word read_profile__conv2_HeadVar__2_2;

#line 1076 "read_profile.m"
    {
#line 1076 "read_profile.m"
      read_profile__conv2_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) read_profile__wrapper_arg_1));
    }
#line 1076 "read_profile.m"
    read_profile__wrapper_arg_2 = ((MR_Box) (read_profile__conv2_HeadVar__2_2));
#line 1076 "read_profile.m"
    return read_profile__wrapper_arg_2;
#line 1076 "read_profile.m"
  }
#line 1076 "read_profile.m"
}

#line 1076 "read_profile.m"
static MR_Box MR_CALL 
read_profile__read_call_site_slot_3_p_0_1(
#line 1076 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 1076 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1)
#line 1076 "read_profile.m"
{
#line 1076 "read_profile.m"
  {
#line 1076 "read_profile.m"
    MR_Box read_profile__wrapper_arg_2;
#line 1076 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 1076 "read_profile.m"
    MR_Word read_profile__conv0_HeadVar__2_2;

#line 1076 "read_profile.m"
    {
#line 1076 "read_profile.m"
      read_profile__conv0_HeadVar__2_2 = read_profile__make_csdptr_1_f_0(((MR_Integer) read_profile__wrapper_arg_1));
    }
#line 1076 "read_profile.m"
    read_profile__wrapper_arg_2 = ((MR_Box) (read_profile__conv0_HeadVar__2_2));
#line 1076 "read_profile.m"
    return read_profile__wrapper_arg_2;
#line 1076 "read_profile.m"
  }
#line 1076 "read_profile.m"
}

#line 1033 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_slot_3_p_0(
#line 1033 "read_profile.m"
  MR_Word * read_profile__MaybeSlot_4)
#line 1033 "read_profile.m"
{
#line 1036 "read_profile.m"
  {
#line 1036 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1036 "read_profile.m"
    MR_Word read_profile__MaybeKind_7;

#line 1040 "read_profile.m"
    {
#line 1040 "read_profile.m"
      read_profile__read_call_site_kind_3_p_0(&read_profile__MaybeKind_7);
    }
#line 1088 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybeKind_7)) == (MR_mktag((MR_Integer) 1))))
#line 1090 "read_profile.m"
      *read_profile__MaybeSlot_4 = (MR_Word) read_profile__MaybeKind_7;
#line 1088 "read_profile.m"
    else
#line 1042 "read_profile.m"
      {
#line 1042 "read_profile.m"
        MR_Word read_profile__Kind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeKind_7, (MR_Integer) 0)));

#line 1059 "read_profile.m"
        if ((read_profile__Kind_8 == ((int) MR_callsite_callback)))
#line 1072 "read_profile.m"
          {
#line 1072 "read_profile.m"
            MR_Word read_profile__MaybeCSDIs_14;

#line 1073 "read_profile.m"
            {
#line 1073 "read_profile.m"
              read_profile__read_multi_call_site_csdis_3_p_0(&read_profile__MaybeCSDIs_14);
            }
#line 1083 "read_profile.m"
            if (((MR_tag((MR_Word) read_profile__MaybeCSDIs_14)) == (MR_mktag((MR_Integer) 1))))
#line 1085 "read_profile.m"
              *read_profile__MaybeSlot_4 = (MR_Word) read_profile__MaybeCSDIs_14;
#line 1083 "read_profile.m"
            else
#line 1075 "read_profile.m"
              {
#line 1075 "read_profile.m"
                MR_Word read_profile__TypeCtorInfo_47_47 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 1075 "read_profile.m"
                MR_Word read_profile__CSDIs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSDIs_14, (MR_Integer) 0)));
#line 1075 "read_profile.m"
                MR_Word read_profile__CSDPtrs_16;
#line 1075 "read_profile.m"
                MR_Word read_profile__V_25_25;
#line 1075 "read_profile.m"
                MR_ArrayPtr read_profile__V_26_26;
#line 1077 "read_profile.m"
                MR_ArrayPtr read_profile__conv1_V_26_26;

#line 1076 "read_profile.m"
                {
#line 1076 "read_profile.m"
                  read_profile__CSDPtrs_16 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__TypeCtorInfo_47_47, (MR_Word) &read_profile_scalar_common_4[45], read_profile__CSDIs_15);
                }
#line 1077 "read_profile.m"
                {
#line 1077 "read_profile.m"
                  read_profile__conv1_V_26_26 = mercury__array__array_1_f_0(read_profile__TypeCtorInfo_47_47, read_profile__CSDPtrs_16);
                }
#line 1077 "read_profile.m"
                read_profile__V_26_26 = (MR_ArrayPtr) read_profile__conv1_V_26_26;
#line 1077 "read_profile.m"
                {
#line 1077 "read_profile.m"
                  read_profile__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_25_25, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1077 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_25_25, 1) = ((MR_Box) (read_profile__V_26_26));
#line 1077 "read_profile.m"
                }
#line 1077 "read_profile.m"
                {
#line 1077 "read_profile.m"
                  MR_Word base;
#line 1077 "read_profile.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1077 "read_profile.m"
                  *read_profile__MaybeSlot_4 = base;
#line 1077 "read_profile.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_25_25));
#line 1077 "read_profile.m"
                }
#line 1075 "read_profile.m"
              }
#line 1072 "read_profile.m"
          }
#line 1059 "read_profile.m"
        else
#line 1059 "read_profile.m"
          if ((read_profile__Kind_8 == ((int) MR_callsite_higher_order_call)))
#line 1072 "read_profile.m"
            {
#line 1072 "read_profile.m"
              MR_Word read_profile__MaybeCSDIs_98;

#line 1073 "read_profile.m"
              {
#line 1073 "read_profile.m"
                read_profile__read_multi_call_site_csdis_3_p_0(&read_profile__MaybeCSDIs_98);
              }
#line 1083 "read_profile.m"
              if (((MR_tag((MR_Word) read_profile__MaybeCSDIs_98)) == (MR_mktag((MR_Integer) 1))))
#line 1085 "read_profile.m"
                *read_profile__MaybeSlot_4 = (MR_Word) read_profile__MaybeCSDIs_98;
#line 1083 "read_profile.m"
              else
#line 1075 "read_profile.m"
                {
#line 1075 "read_profile.m"
                  MR_Word read_profile__TypeCtorInfo_47_80 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 1075 "read_profile.m"
                  MR_Word read_profile__CSDIs_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSDIs_98, (MR_Integer) 0)));
#line 1075 "read_profile.m"
                  MR_Word read_profile__CSDPtrs_69;
#line 1075 "read_profile.m"
                  MR_Word read_profile__V_71_71;
#line 1075 "read_profile.m"
                  MR_ArrayPtr read_profile__V_72_72;
#line 1077 "read_profile.m"
                  MR_ArrayPtr read_profile__conv3_V_72_72;

#line 1076 "read_profile.m"
                  {
#line 1076 "read_profile.m"
                    read_profile__CSDPtrs_69 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__TypeCtorInfo_47_80, (MR_Word) &read_profile_scalar_common_4[46], read_profile__CSDIs_68);
                  }
#line 1077 "read_profile.m"
                  {
#line 1077 "read_profile.m"
                    read_profile__conv3_V_72_72 = mercury__array__array_1_f_0(read_profile__TypeCtorInfo_47_80, read_profile__CSDPtrs_69);
                  }
#line 1077 "read_profile.m"
                  read_profile__V_72_72 = (MR_ArrayPtr) read_profile__conv3_V_72_72;
#line 1077 "read_profile.m"
                  {
#line 1077 "read_profile.m"
                    read_profile__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "read_profile.m"
                    MR_hl_field(MR_mktag(1), read_profile__V_71_71, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1077 "read_profile.m"
                    MR_hl_field(MR_mktag(1), read_profile__V_71_71, 1) = ((MR_Box) (read_profile__V_72_72));
#line 1077 "read_profile.m"
                  }
#line 1077 "read_profile.m"
                  {
#line 1077 "read_profile.m"
                    MR_Word base;
#line 1077 "read_profile.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1077 "read_profile.m"
                    *read_profile__MaybeSlot_4 = base;
#line 1077 "read_profile.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_71_71));
#line 1077 "read_profile.m"
                  }
#line 1075 "read_profile.m"
                }
#line 1072 "read_profile.m"
            }
#line 1059 "read_profile.m"
          else
#line 1059 "read_profile.m"
            if ((read_profile__Kind_8 == ((int) MR_callsite_method_call)))
#line 1072 "read_profile.m"
              {
#line 1072 "read_profile.m"
                MR_Word read_profile__MaybeCSDIs_161;

#line 1073 "read_profile.m"
                {
#line 1073 "read_profile.m"
                  read_profile__read_multi_call_site_csdis_3_p_0(&read_profile__MaybeCSDIs_161);
                }
#line 1083 "read_profile.m"
                if (((MR_tag((MR_Word) read_profile__MaybeCSDIs_161)) == (MR_mktag((MR_Integer) 1))))
#line 1085 "read_profile.m"
                  *read_profile__MaybeSlot_4 = (MR_Word) read_profile__MaybeCSDIs_161;
#line 1083 "read_profile.m"
                else
#line 1075 "read_profile.m"
                  {
#line 1075 "read_profile.m"
                    MR_Word read_profile__TypeCtorInfo_47_143 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 1075 "read_profile.m"
                    MR_Word read_profile__CSDIs_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSDIs_161, (MR_Integer) 0)));
#line 1075 "read_profile.m"
                    MR_Word read_profile__CSDPtrs_132;
#line 1075 "read_profile.m"
                    MR_Word read_profile__V_134_134;
#line 1075 "read_profile.m"
                    MR_ArrayPtr read_profile__V_135_135;
#line 1077 "read_profile.m"
                    MR_ArrayPtr read_profile__conv5_V_135_135;

#line 1076 "read_profile.m"
                    {
#line 1076 "read_profile.m"
                      read_profile__CSDPtrs_132 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__TypeCtorInfo_47_143, (MR_Word) &read_profile_scalar_common_4[47], read_profile__CSDIs_131);
                    }
#line 1077 "read_profile.m"
                    {
#line 1077 "read_profile.m"
                      read_profile__conv5_V_135_135 = mercury__array__array_1_f_0(read_profile__TypeCtorInfo_47_143, read_profile__CSDPtrs_132);
                    }
#line 1077 "read_profile.m"
                    read_profile__V_135_135 = (MR_ArrayPtr) read_profile__conv5_V_135_135;
#line 1077 "read_profile.m"
                    {
#line 1077 "read_profile.m"
                      read_profile__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "read_profile.m"
                      MR_hl_field(MR_mktag(1), read_profile__V_134_134, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1077 "read_profile.m"
                      MR_hl_field(MR_mktag(1), read_profile__V_134_134, 1) = ((MR_Box) (read_profile__V_135_135));
#line 1077 "read_profile.m"
                    }
#line 1077 "read_profile.m"
                    {
#line 1077 "read_profile.m"
                      MR_Word base;
#line 1077 "read_profile.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1077 "read_profile.m"
                      *read_profile__MaybeSlot_4 = base;
#line 1077 "read_profile.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_134_134));
#line 1077 "read_profile.m"
                    }
#line 1075 "read_profile.m"
                  }
#line 1072 "read_profile.m"
              }
#line 1059 "read_profile.m"
            else
#line 1059 "read_profile.m"
              if ((read_profile__Kind_8 == ((int) MR_callsite_normal_call)))
#line 1044 "read_profile.m"
                {
#line 1044 "read_profile.m"
                  MR_Word read_profile__MaybeCSDI_9;

#line 1045 "read_profile.m"
                  {
#line 1045 "read_profile.m"
                    read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_p_0(&read_profile__MaybeCSDI_9);
                  }
#line 1055 "read_profile.m"
                  if (((MR_tag((MR_Word) read_profile__MaybeCSDI_9)) == (MR_mktag((MR_Integer) 1))))
#line 1057 "read_profile.m"
                    *read_profile__MaybeSlot_4 = (MR_Word) read_profile__MaybeCSDI_9;
#line 1055 "read_profile.m"
                  else
#line 1047 "read_profile.m"
                    {
#line 1047 "read_profile.m"
                      MR_Integer read_profile__CSDI_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSDI_9, (MR_Integer) 0)));
#line 1047 "read_profile.m"
                      MR_Word read_profile__CSDPtr_11;
#line 1047 "read_profile.m"
                      MR_Word read_profile__V_35_35;

#line 1048 "read_profile.m"
                      {
#line 1048 "read_profile.m"
                        read_profile__CSDPtr_11 = read_profile__make_csdptr_1_f_0(read_profile__CSDI_10);
                      }
#line 1049 "read_profile.m"
                      {
#line 1049 "read_profile.m"
                        read_profile__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "read_profile.m"
                        MR_hl_field(MR_mktag(0), read_profile__V_35_35, 0) = ((MR_Box) (read_profile__CSDPtr_11));
#line 1049 "read_profile.m"
                      }
#line 1049 "read_profile.m"
                      {
#line 1049 "read_profile.m"
                        MR_Word base;
#line 1049 "read_profile.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "read_profile.m"
                        *read_profile__MaybeSlot_4 = base;
#line 1049 "read_profile.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_35_35));
#line 1049 "read_profile.m"
                      }
#line 1047 "read_profile.m"
                    }
#line 1044 "read_profile.m"
                }
#line 1059 "read_profile.m"
              else
#line 1072 "read_profile.m"
                {
#line 1072 "read_profile.m"
                  MR_Word read_profile__MaybeCSDIs_224;

#line 1073 "read_profile.m"
                  {
#line 1073 "read_profile.m"
                    read_profile__read_multi_call_site_csdis_3_p_0(&read_profile__MaybeCSDIs_224);
                  }
#line 1083 "read_profile.m"
                  if (((MR_tag((MR_Word) read_profile__MaybeCSDIs_224)) == (MR_mktag((MR_Integer) 1))))
#line 1085 "read_profile.m"
                    *read_profile__MaybeSlot_4 = (MR_Word) read_profile__MaybeCSDIs_224;
#line 1083 "read_profile.m"
                  else
#line 1075 "read_profile.m"
                    {
#line 1075 "read_profile.m"
                      MR_Word read_profile__TypeCtorInfo_47_206 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 1075 "read_profile.m"
                      MR_Word read_profile__CSDIs_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSDIs_224, (MR_Integer) 0)));
#line 1075 "read_profile.m"
                      MR_Word read_profile__CSDPtrs_195;
#line 1075 "read_profile.m"
                      MR_Word read_profile__V_197_197;
#line 1075 "read_profile.m"
                      MR_ArrayPtr read_profile__V_198_198;
#line 1077 "read_profile.m"
                      MR_ArrayPtr read_profile__conv7_V_198_198;

#line 1076 "read_profile.m"
                      {
#line 1076 "read_profile.m"
                        read_profile__CSDPtrs_195 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__TypeCtorInfo_47_206, (MR_Word) &read_profile_scalar_common_4[48], read_profile__CSDIs_194);
                      }
#line 1077 "read_profile.m"
                      {
#line 1077 "read_profile.m"
                        read_profile__conv7_V_198_198 = mercury__array__array_1_f_0(read_profile__TypeCtorInfo_47_206, read_profile__CSDPtrs_195);
                      }
#line 1077 "read_profile.m"
                      read_profile__V_198_198 = (MR_ArrayPtr) read_profile__conv7_V_198_198;
#line 1077 "read_profile.m"
                      {
#line 1077 "read_profile.m"
                        read_profile__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "read_profile.m"
                        MR_hl_field(MR_mktag(1), read_profile__V_197_197, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1077 "read_profile.m"
                        MR_hl_field(MR_mktag(1), read_profile__V_197_197, 1) = ((MR_Box) (read_profile__V_198_198));
#line 1077 "read_profile.m"
                      }
#line 1077 "read_profile.m"
                      {
#line 1077 "read_profile.m"
                        MR_Word base;
#line 1077 "read_profile.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1077 "read_profile.m"
                        *read_profile__MaybeSlot_4 = base;
#line 1077 "read_profile.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_197_197));
#line 1077 "read_profile.m"
                      }
#line 1075 "read_profile.m"
                    }
#line 1072 "read_profile.m"
                }
#line 1042 "read_profile.m"
      }
#line 1036 "read_profile.m"
  }
#line 1033 "read_profile.m"
}

#line 1016 "read_profile.m"
static void MR_CALL 
read_profile__maybe_read_num_handle_error_7_p_0(
#line 1016 "read_profile.m"
  MR_Integer read_profile__MaskWord_8,
#line 1016 "read_profile.m"
  MR_Integer read_profile__MaskValue_9,
#line 1016 "read_profile.m"
  MR_Integer * read_profile__Num_10,
#line 1016 "read_profile.m"
  MR_Word read_profile__STATE_VARIABLE_MaybeError_0_15,
#line 1016 "read_profile.m"
  MR_Word * read_profile__STATE_VARIABLE_MaybeError_16)
#line 1016 "read_profile.m"
{
#line 1029 "read_profile.m"
  {
#line 1029 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 1020 "read_profile.m"
    MR_Integer read_profile__V_19_19 = (read_profile__MaskWord_8 & read_profile__MaskValue_9);

#line 1020 "read_profile.m"
    read_profile__succeeded = (read_profile__V_19_19 == (MR_Integer) 0);
#line 1020 "read_profile.m"
    read_profile__succeeded = !(read_profile__succeeded);
#line 1029 "read_profile.m"
    if (read_profile__succeeded)
#line 1021 "read_profile.m"
      {
#line 1021 "read_profile.m"
        MR_Word read_profile__MaybeNum_13;

#line 1370 "read_profile.m"
        {
#line 1370 "read_profile.m"
          read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeNum_13);
        }
#line 1024 "read_profile.m"
        if (((MR_tag((MR_Word) read_profile__MaybeNum_13)) == (MR_mktag((MR_Integer) 1))))
#line 1025 "read_profile.m"
          {
#line 1025 "read_profile.m"
            MR_String read_profile__Error_14 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeNum_13, (MR_Integer) 0)));

#line 1026 "read_profile.m"
            *read_profile__Num_10 = (MR_Integer) 0;
#line 1027 "read_profile.m"
            {
#line 1027 "read_profile.m"
              MR_Word base;
#line 1027 "read_profile.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "read_profile.m"
              *read_profile__STATE_VARIABLE_MaybeError_16 = base;
#line 1027 "read_profile.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_14));
#line 1027 "read_profile.m"
            }
#line 1025 "read_profile.m"
          }
#line 1024 "read_profile.m"
        else
#line 1023 "read_profile.m"
          {
#line 1023 "read_profile.m"
            *read_profile__Num_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeNum_13, (MR_Integer) 0)));
#line 1023 "read_profile.m"
            *read_profile__STATE_VARIABLE_MaybeError_16 = read_profile__STATE_VARIABLE_MaybeError_0_15;
#line 1023 "read_profile.m"
          }
#line 1021 "read_profile.m"
      }
#line 1029 "read_profile.m"
    else
#line 1030 "read_profile.m"
      {
#line 1030 "read_profile.m"
        *read_profile__Num_10 = (MR_Integer) 0;
#line 1030 "read_profile.m"
        *read_profile__STATE_VARIABLE_MaybeError_16 = read_profile__STATE_VARIABLE_MaybeError_0_15;
#line 1030 "read_profile.m"
      }
#line 1029 "read_profile.m"
  }
#line 1016 "read_profile.m"
}

#line 966 "read_profile.m"
static void MR_CALL 
read_profile__read_profile_3_p_0(
#line 966 "read_profile.m"
  MR_Word * read_profile__MaybeProfile_4)
#line 966 "read_profile.m"
{
#line 968 "read_profile.m"
  {
#line 968 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 968 "read_profile.m"
    MR_Word read_profile__MaybeMask_6;

#line 1370 "read_profile.m"
    {
#line 1370 "read_profile.m"
      read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeMask_6);
    }
#line 1011 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybeMask_6)) == (MR_mktag((MR_Integer) 1))))
#line 1013 "read_profile.m"
      *read_profile__MaybeProfile_4 = (MR_Word) read_profile__MaybeMask_6;
#line 1011 "read_profile.m"
    else
#line 971 "read_profile.m"
      {
#line 971 "read_profile.m"
        MR_Integer read_profile__Mask_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeMask_6, (MR_Integer) 0)));
#line 971 "read_profile.m"
        MR_Integer read_profile__Exits_9;
#line 971 "read_profile.m"
        MR_Integer read_profile__Fails_10;
#line 971 "read_profile.m"
        MR_Integer read_profile__Redos_11;
#line 971 "read_profile.m"
        MR_Integer read_profile__Excps_12;
#line 971 "read_profile.m"
        MR_Integer read_profile__Quanta_13;
#line 971 "read_profile.m"
        MR_Integer read_profile__CallSeqs_14;
#line 971 "read_profile.m"
        MR_Integer read_profile__Allocs_15;
#line 971 "read_profile.m"
        MR_Integer read_profile__Words_16;
#line 971 "read_profile.m"
        MR_Word read_profile__LastMaybeError_17;
#line 971 "read_profile.m"
        MR_Word read_profile__STATE_VARIABLE_MaybeError_24_24;
#line 971 "read_profile.m"
        MR_Word read_profile__STATE_VARIABLE_MaybeError_27_27;
#line 971 "read_profile.m"
        MR_Word read_profile__STATE_VARIABLE_MaybeError_30_30;
#line 971 "read_profile.m"
        MR_Word read_profile__STATE_VARIABLE_MaybeError_33_33;
#line 971 "read_profile.m"
        MR_Word read_profile__STATE_VARIABLE_MaybeError_36_36;
#line 971 "read_profile.m"
        MR_Word read_profile__STATE_VARIABLE_MaybeError_39_39;
#line 971 "read_profile.m"
        MR_Word read_profile__STATE_VARIABLE_MaybeError_42_42;

#line 985 "read_profile.m"
        {
#line 985 "read_profile.m"
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 2, &read_profile__Exits_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__STATE_VARIABLE_MaybeError_24_24);
        }
#line 987 "read_profile.m"
        {
#line 987 "read_profile.m"
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 4, &read_profile__Fails_10, read_profile__STATE_VARIABLE_MaybeError_24_24, &read_profile__STATE_VARIABLE_MaybeError_27_27);
        }
#line 989 "read_profile.m"
        {
#line 989 "read_profile.m"
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 64, &read_profile__Redos_11, read_profile__STATE_VARIABLE_MaybeError_27_27, &read_profile__STATE_VARIABLE_MaybeError_30_30);
        }
#line 991 "read_profile.m"
        {
#line 991 "read_profile.m"
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 128, &read_profile__Excps_12, read_profile__STATE_VARIABLE_MaybeError_30_30, &read_profile__STATE_VARIABLE_MaybeError_33_33);
        }
#line 993 "read_profile.m"
        {
#line 993 "read_profile.m"
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 256, &read_profile__Quanta_13, read_profile__STATE_VARIABLE_MaybeError_33_33, &read_profile__STATE_VARIABLE_MaybeError_36_36);
        }
#line 995 "read_profile.m"
        {
#line 995 "read_profile.m"
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 8, &read_profile__CallSeqs_14, read_profile__STATE_VARIABLE_MaybeError_36_36, &read_profile__STATE_VARIABLE_MaybeError_39_39);
        }
#line 997 "read_profile.m"
        {
#line 997 "read_profile.m"
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 16, &read_profile__Allocs_15, read_profile__STATE_VARIABLE_MaybeError_39_39, &read_profile__STATE_VARIABLE_MaybeError_42_42);
        }
#line 999 "read_profile.m"
        {
#line 999 "read_profile.m"
          read_profile__maybe_read_num_handle_error_7_p_0(read_profile__Mask_7, (MR_Integer) 32, &read_profile__Words_16, read_profile__STATE_VARIABLE_MaybeError_42_42, &read_profile__LastMaybeError_17);
        }
#line 1006 "read_profile.m"
        if ((read_profile__LastMaybeError_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1007 "read_profile.m"
          {
#line 1007 "read_profile.m"
            MR_Word read_profile__V_47_47;

#line 1008 "read_profile.m"
            {
#line 1008 "read_profile.m"
              read_profile__V_47_47 = measurements__compress_profile_8_f_0(read_profile__Exits_9, read_profile__Fails_10, read_profile__Redos_11, read_profile__Excps_12, read_profile__Quanta_13, read_profile__CallSeqs_14, read_profile__Allocs_15, read_profile__Words_16);
            }
#line 1008 "read_profile.m"
            {
#line 1008 "read_profile.m"
              MR_Word base;
#line 1008 "read_profile.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "read_profile.m"
              *read_profile__MaybeProfile_4 = base;
#line 1008 "read_profile.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_47_47));
#line 1008 "read_profile.m"
            }
#line 1007 "read_profile.m"
          }
#line 1006 "read_profile.m"
        else
#line 1004 "read_profile.m"
          {
#line 1004 "read_profile.m"
            MR_String read_profile__Error_18 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__LastMaybeError_17, (MR_Integer) 0)));

#line 1005 "read_profile.m"
            {
#line 1005 "read_profile.m"
              MR_Word base;
#line 1005 "read_profile.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "read_profile.m"
              *read_profile__MaybeProfile_4 = base;
#line 1005 "read_profile.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_18));
#line 1005 "read_profile.m"
            }
#line 1004 "read_profile.m"
          }
#line 971 "read_profile.m"
      }
#line 968 "read_profile.m"
  }
#line 966 "read_profile.m"
}

#line 925 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_dynamic_3_p_0(
#line 925 "read_profile.m"
  MR_Word * read_profile__MaybeCSD_4)
#line 925 "read_profile.m"
{
#line 928 "read_profile.m"
  {
#line 928 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 928 "read_profile.m"
    MR_Word read_profile__MaybeCSDI_7;

#line 1370 "read_profile.m"
    {
#line 1370 "read_profile.m"
      read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeCSDI_7);
    }
#line 961 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybeCSDI_7)) == (MR_mktag((MR_Integer) 1))))
#line 962 "read_profile.m"
      {
#line 962 "read_profile.m"
        MR_String read_profile__Error_37 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeCSDI_7, (MR_Integer) 0)));

#line 963 "read_profile.m"
        {
#line 963 "read_profile.m"
          MR_Word base;
#line 963 "read_profile.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 963 "read_profile.m"
          *read_profile__MaybeCSD_4 = base;
#line 963 "read_profile.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_37));
#line 963 "read_profile.m"
        }
#line 962 "read_profile.m"
      }
#line 961 "read_profile.m"
    else
#line 934 "read_profile.m"
      {
#line 934 "read_profile.m"
        MR_Integer read_profile__CSDI_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSDI_7, (MR_Integer) 0)));
#line 934 "read_profile.m"
        MR_Word read_profile__MaybePDI_9;

#line 1370 "read_profile.m"
        {
#line 1370 "read_profile.m"
          read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybePDI_9);
        }
#line 957 "read_profile.m"
        if (((MR_tag((MR_Word) read_profile__MaybePDI_9)) == (MR_mktag((MR_Integer) 1))))
#line 958 "read_profile.m"
          {
#line 958 "read_profile.m"
            MR_String read_profile__Error_36 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybePDI_9, (MR_Integer) 0)));

#line 959 "read_profile.m"
            {
#line 959 "read_profile.m"
              MR_Word base;
#line 959 "read_profile.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 959 "read_profile.m"
              *read_profile__MaybeCSD_4 = base;
#line 959 "read_profile.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_36));
#line 959 "read_profile.m"
            }
#line 958 "read_profile.m"
          }
#line 957 "read_profile.m"
        else
#line 937 "read_profile.m"
          {
#line 937 "read_profile.m"
            MR_Integer read_profile__PDI_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybePDI_9, (MR_Integer) 0)));
#line 937 "read_profile.m"
            MR_Word read_profile__MaybeProfile_11;

#line 938 "read_profile.m"
            {
#line 938 "read_profile.m"
              read_profile__read_profile_3_p_0(&read_profile__MaybeProfile_11);
            }
#line 953 "read_profile.m"
            if (((MR_tag((MR_Word) read_profile__MaybeProfile_11)) == (MR_mktag((MR_Integer) 1))))
#line 954 "read_profile.m"
              {
#line 954 "read_profile.m"
                MR_String read_profile__Error_16 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeProfile_11, (MR_Integer) 0)));

#line 955 "read_profile.m"
                {
#line 955 "read_profile.m"
                  MR_Word base;
#line 955 "read_profile.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 955 "read_profile.m"
                  *read_profile__MaybeCSD_4 = base;
#line 955 "read_profile.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_16));
#line 955 "read_profile.m"
                }
#line 954 "read_profile.m"
              }
#line 953 "read_profile.m"
            else
#line 940 "read_profile.m"
              {
#line 940 "read_profile.m"
                MR_Word read_profile__Profile_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeProfile_11, (MR_Integer) 0)));
#line 940 "read_profile.m"
                MR_Word read_profile__PDPtr_13 = (MR_Word) read_profile__PDI_10;
#line 940 "read_profile.m"
                MR_Word read_profile__CallSiteDynamic_15;

#line 943 "read_profile.m"
                {
#line 943 "read_profile.m"
                  read_profile__CallSiteDynamic_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 943 "read_profile.m"
                  MR_hl_field(MR_mktag(0), read_profile__CallSiteDynamic_15, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
#line 943 "read_profile.m"
                  MR_hl_field(MR_mktag(0), read_profile__CallSiteDynamic_15, 1) = ((MR_Box) (read_profile__PDPtr_13));
#line 943 "read_profile.m"
                  MR_hl_field(MR_mktag(0), read_profile__CallSiteDynamic_15, 2) = ((MR_Box) (read_profile__Profile_12));
#line 943 "read_profile.m"
                }
#line 945 "read_profile.m"
                {
#line 945 "read_profile.m"
                  MR_Word base;
#line 945 "read_profile.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 945 "read_profile.m"
                  *read_profile__MaybeCSD_4 = base;
#line 945 "read_profile.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__CallSiteDynamic_15));
#line 945 "read_profile.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (read_profile__CSDI_8));
#line 945 "read_profile.m"
                }
#line 940 "read_profile.m"
              }
#line 937 "read_profile.m"
          }
#line 934 "read_profile.m"
      }
#line 928 "read_profile.m"
  }
#line 925 "read_profile.m"
}

#line 897 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_8(
#line 897 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 897 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 897 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 897 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 897 "read_profile.m"
{
#line 897 "read_profile.m"
  {
#line 897 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 897 "read_profile.m"
    MR_Word read_profile__conv7_HeadVar__3_51;

#line 897 "read_profile.m"
    {
#line 897 "read_profile.m"
      read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_3_p_0(((MR_Word) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2), &read_profile__conv7_HeadVar__3_51);
    }
#line 897 "read_profile.m"
    *read_profile__wrapper_arg_3 = ((MR_Box) (read_profile__conv7_HeadVar__3_51));
#line 897 "read_profile.m"
  }
#line 897 "read_profile.m"
}

#line 899 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_7(
#line 899 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 899 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 899 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 899 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 899 "read_profile.m"
{
#line 899 "read_profile.m"
  {
#line 899 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 899 "read_profile.m"
    MR_Word read_profile__conv6_HeadVar__3_86;

#line 899 "read_profile.m"
    {
#line 899 "read_profile.m"
      read_profile__IntroducedFrom__pred__read_proc_dynamic__899__1_5_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 4))), &read_profile__conv6_HeadVar__3_86);
    }
#line 899 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv6_HeadVar__3_86));
#line 899 "read_profile.m"
  }
#line 899 "read_profile.m"
}

#line 899 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_6(
#line 899 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 899 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 899 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 899 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 899 "read_profile.m"
{
#line 899 "read_profile.m"
  {
#line 899 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 899 "read_profile.m"
    MR_Word read_profile__conv5_MaybeSlot_4;

#line 899 "read_profile.m"
    {
#line 899 "read_profile.m"
      read_profile__read_call_site_slot_3_p_0(&read_profile__conv5_MaybeSlot_4);
    }
#line 899 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv5_MaybeSlot_4));
#line 899 "read_profile.m"
  }
#line 899 "read_profile.m"
}

#line 898 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_5(
#line 898 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 898 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 898 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 898 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 898 "read_profile.m"
{
#line 898 "read_profile.m"
  {
#line 898 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 898 "read_profile.m"
    MR_Word read_profile__conv4_MaybeCoveragePoints_6;

#line 898 "read_profile.m"
    {
#line 898 "read_profile.m"
      read_profile__maybe_read_pd_coverage_points_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), &read_profile__conv4_MaybeCoveragePoints_6);
    }
#line 898 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv4_MaybeCoveragePoints_6));
#line 898 "read_profile.m"
  }
#line 898 "read_profile.m"
}

#line 887 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_4(
#line 887 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 887 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 887 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 887 "read_profile.m"
  MR_Box read_profile__wrapper_arg_3,
#line 887 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_4)
#line 887 "read_profile.m"
{
#line 887 "read_profile.m"
  {
#line 887 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 887 "read_profile.m"
    MR_Word read_profile__conv3_HeadVar__4_41;

#line 887 "read_profile.m"
    {
#line 887 "read_profile.m"
      read_profile__IntroducedFrom__pred__read_proc_dynamic__887__1_4_p_0(((MR_Integer) read_profile__wrapper_arg_1), ((MR_Integer) read_profile__wrapper_arg_2), ((MR_Integer) read_profile__wrapper_arg_3), &read_profile__conv3_HeadVar__4_41);
    }
#line 887 "read_profile.m"
    *read_profile__wrapper_arg_4 = ((MR_Box) (read_profile__conv3_HeadVar__4_41));
#line 887 "read_profile.m"
  }
#line 887 "read_profile.m"
}

#line 890 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_3(
#line 890 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 890 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 890 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 890 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 890 "read_profile.m"
{
#line 890 "read_profile.m"
  {
#line 890 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 890 "read_profile.m"
    MR_Word read_profile__conv2_MaybeNum_4;

#line 890 "read_profile.m"
    {
#line 890 "read_profile.m"
      read_profile__read_num_3_p_0(&read_profile__conv2_MaybeNum_4);
    }
#line 890 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv2_MaybeNum_4));
#line 890 "read_profile.m"
  }
#line 890 "read_profile.m"
}

#line 889 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_2(
#line 889 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 889 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 889 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 889 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 889 "read_profile.m"
{
#line 889 "read_profile.m"
  {
#line 889 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 889 "read_profile.m"
    MR_Word read_profile__conv1_MaybePtr_6;

#line 889 "read_profile.m"
    {
#line 889 "read_profile.m"
      read_profile__read_ptr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), &read_profile__conv1_MaybePtr_6);
    }
#line 889 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybePtr_6));
#line 889 "read_profile.m"
  }
#line 889 "read_profile.m"
}

#line 888 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0_1(
#line 888 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 888 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 888 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 888 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 888 "read_profile.m"
{
#line 888 "read_profile.m"
  {
#line 888 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 888 "read_profile.m"
    MR_Word read_profile__conv0_MaybePtr_6;

#line 888 "read_profile.m"
    {
#line 888 "read_profile.m"
      read_profile__read_ptr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), &read_profile__conv0_MaybePtr_6);
    }
#line 888 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybePtr_6));
#line 888 "read_profile.m"
  }
#line 888 "read_profile.m"
}

#line 880 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_dynamic_4_p_0(
#line 880 "read_profile.m"
  MR_Word read_profile__ProfileStats_5,
#line 880 "read_profile.m"
  MR_Word * read_profile__MaybePD_6)
#line 880 "read_profile.m"
{
#line 883 "read_profile.m"
  {
#line 883 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 883 "read_profile.m"
    MR_Word read_profile__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 883 "read_profile.m"
    MR_Word read_profile__MaybePDHeader_13;

#line 887 "read_profile.m"
    {
#line 887 "read_profile.m"
      io_combinator__maybe_error_sequence_3_7_p_0(read_profile__TypeCtorInfo_81_81, read_profile__TypeCtorInfo_81_81, read_profile__TypeCtorInfo_81_81, (MR_Word) &read_profile_scalar_common_5[0], (MR_Word) &read_profile_scalar_common_2[6], (MR_Word) &read_profile_scalar_common_2[7], (MR_Word) &read_profile_scalar_common_4[41], (MR_Word) &read_profile_scalar_common_4[42], &read_profile__MaybePDHeader_13);
    }
#line 920 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybePDHeader_13)) == (MR_mktag((MR_Integer) 1))))
#line 921 "read_profile.m"
      {
#line 921 "read_profile.m"
        MR_String read_profile__Error_71 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybePDHeader_13, (MR_Integer) 0)));

#line 922 "read_profile.m"
        {
#line 922 "read_profile.m"
          MR_Word base;
#line 922 "read_profile.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 922 "read_profile.m"
          *read_profile__MaybePD_6 = base;
#line 922 "read_profile.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_71));
#line 922 "read_profile.m"
        }
#line 921 "read_profile.m"
      }
#line 920 "read_profile.m"
    else
#line 896 "read_profile.m"
      {
#line 896 "read_profile.m"
        MR_Integer read_profile__PDI_14;
#line 896 "read_profile.m"
        MR_Integer read_profile__PSI_15;
#line 896 "read_profile.m"
        MR_Integer read_profile__N_16;
#line 896 "read_profile.m"
        MR_Word read_profile__MaybeCPsAndSlots_20;
#line 896 "read_profile.m"
        MR_Tuple read_profile__V_43_43 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), read_profile__MaybePDHeader_13, (MR_Integer) 0)));
#line 896 "read_profile.m"
        MR_Word read_profile__V_44_44;
#line 896 "read_profile.m"
        MR_Word read_profile__V_45_45;

#line 896 "read_profile.m"
        read_profile__PDI_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_43_43, (MR_Integer) 0)));
#line 896 "read_profile.m"
        read_profile__PSI_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_43_43, (MR_Integer) 1)));
#line 896 "read_profile.m"
        read_profile__N_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_43_43, (MR_Integer) 2)));
#line 898 "read_profile.m"
        {
#line 898 "read_profile.m"
          read_profile__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 898 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_44_44, 0) = ((MR_Box) (&read_profile_scalar_common_7[2]));
#line 898 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_44_44, 1) = ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_5));
#line 898 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 898 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_44_44, 3) = ((MR_Box) (read_profile__ProfileStats_5));
#line 898 "read_profile.m"
        }
#line 899 "read_profile.m"
        {
#line 899 "read_profile.m"
          read_profile__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 899 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_45_45, 0) = ((MR_Box) (&read_profile_scalar_common_3[2]));
#line 899 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_45_45, 1) = ((MR_Box) (read_profile__read_proc_dynamic_4_p_0_7));
#line 899 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 899 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_45_45, 3) = ((MR_Box) (read_profile__N_16));
#line 899 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_45_45, 4) = ((MR_Box) (&read_profile_scalar_common_4[43]));
#line 899 "read_profile.m"
        }
#line 897 "read_profile.m"
        {
#line 897 "read_profile.m"
          io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) &read_profile_scalar_common_1[3], (MR_Word) &read_profile_scalar_common_1[4], (MR_Word) &read_profile_scalar_common_2[1], read_profile__V_44_44, read_profile__V_45_45, (MR_Word) &read_profile_scalar_common_4[44], &read_profile__MaybeCPsAndSlots_20);
        }
#line 916 "read_profile.m"
        if (((MR_tag((MR_Word) read_profile__MaybeCPsAndSlots_20)) == (MR_mktag((MR_Integer) 1))))
#line 917 "read_profile.m"
          {
#line 917 "read_profile.m"
            MR_String read_profile__Error_25 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeCPsAndSlots_20, (MR_Integer) 0)));

#line 918 "read_profile.m"
            {
#line 918 "read_profile.m"
              MR_Word base;
#line 918 "read_profile.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 918 "read_profile.m"
              *read_profile__MaybePD_6 = base;
#line 918 "read_profile.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_25));
#line 918 "read_profile.m"
            }
#line 917 "read_profile.m"
          }
#line 916 "read_profile.m"
        else
#line 905 "read_profile.m"
          {
#line 905 "read_profile.m"
            MR_Word read_profile__MaybeCPs_21;
#line 905 "read_profile.m"
            MR_Word read_profile__Refs_22;
#line 905 "read_profile.m"
            MR_Word read_profile__PSPtr_23;
#line 905 "read_profile.m"
            MR_Word read_profile__ProcDynamic_24;
#line 905 "read_profile.m"
            MR_Tuple read_profile__V_53_53 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), read_profile__MaybeCPsAndSlots_20, (MR_Integer) 0)));
#line 905 "read_profile.m"
            MR_ArrayPtr read_profile__V_54_54;
#line 907 "read_profile.m"
            MR_ArrayPtr read_profile__conv8_V_54_54;

#line 905 "read_profile.m"
            read_profile__MaybeCPs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_53_53, (MR_Integer) 0)));
#line 905 "read_profile.m"
            read_profile__Refs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_53_53, (MR_Integer) 1)));
#line 1512 "read_profile.m"
            read_profile__PSPtr_23 = (MR_Word) read_profile__PSI_15;
#line 907 "read_profile.m"
            {
#line 907 "read_profile.m"
              read_profile__conv8_V_54_54 = mercury__array__array_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, read_profile__Refs_22);
            }
#line 907 "read_profile.m"
            read_profile__V_54_54 = (MR_ArrayPtr) read_profile__conv8_V_54_54;
#line 907 "read_profile.m"
            {
#line 907 "read_profile.m"
              read_profile__ProcDynamic_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 907 "read_profile.m"
              MR_hl_field(MR_mktag(0), read_profile__ProcDynamic_24, 0) = ((MR_Box) (read_profile__PSPtr_23));
#line 907 "read_profile.m"
              MR_hl_field(MR_mktag(0), read_profile__ProcDynamic_24, 1) = ((MR_Box) (read_profile__V_54_54));
#line 907 "read_profile.m"
              MR_hl_field(MR_mktag(0), read_profile__ProcDynamic_24, 2) = ((MR_Box) (read_profile__MaybeCPs_21));
#line 907 "read_profile.m"
            }
#line 908 "read_profile.m"
            {
#line 908 "read_profile.m"
              MR_Word base;
#line 908 "read_profile.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 908 "read_profile.m"
              *read_profile__MaybePD_6 = base;
#line 908 "read_profile.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__ProcDynamic_24));
#line 908 "read_profile.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (read_profile__PDI_14));
#line 908 "read_profile.m"
            }
#line 905 "read_profile.m"
          }
#line 896 "read_profile.m"
      }
#line 883 "read_profile.m"
  }
#line 880 "read_profile.m"
}

#line 860 "read_profile.m"
static MR_bool MR_CALL 
read_profile__glue_lambda_name_3_p_0(
#line 860 "read_profile.m"
  MR_Word read_profile__Segments_4,
#line 860 "read_profile.m"
  MR_Word * read_profile__PredName_5,
#line 860 "read_profile.m"
  MR_Word * read_profile__LineNumber_6)
#line 860 "read_profile.m"
{
#line 867 "read_profile.m"
  {
#line 867 "read_profile.m"
    MR_bool read_profile__succeeded = ((MR_tag((MR_Word) read_profile__Segments_4)) == (MR_mktag((MR_Integer) 1)));
#line 867 "read_profile.m"
    MR_Word read_profile__LineNumberPrime_7;
#line 864 "read_profile.m"
    MR_Word read_profile__V_14_14;
#line 864 "read_profile.m"
    MR_Word read_profile__V_15_15;
#line 864 "read_profile.m"
    MR_Word read_profile__V_8_8;

#line 864 "read_profile.m"
    if (read_profile__succeeded)
#line 864 "read_profile.m"
      {
#line 864 "read_profile.m"
        read_profile__LineNumberPrime_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Segments_4, (MR_Integer) 0)));
#line 864 "read_profile.m"
        read_profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Segments_4, (MR_Integer) 1)));
#line 864 "read_profile.m"
        read_profile__succeeded = ((MR_tag((MR_Word) read_profile__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 864 "read_profile.m"
        if (read_profile__succeeded)
#line 864 "read_profile.m"
          {
#line 864 "read_profile.m"
            read_profile__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_14_14, (MR_Integer) 0)));
#line 864 "read_profile.m"
            read_profile__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_14_14, (MR_Integer) 1)));
#line 864 "read_profile.m"
            read_profile__succeeded = (read_profile__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 864 "read_profile.m"
          }
#line 864 "read_profile.m"
      }
#line 867 "read_profile.m"
    if (read_profile__succeeded)
#line 865 "read_profile.m"
      {
#line 865 "read_profile.m"
        *read_profile__PredName_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "read_profile.m"
        *read_profile__LineNumber_6 = read_profile__LineNumberPrime_7;
#line 865 "read_profile.m"
        read_profile__succeeded = MR_TRUE;
#line 865 "read_profile.m"
      }
#line 867 "read_profile.m"
    else
#line 876 "read_profile.m"
      {
#line 876 "read_profile.m"
        MR_Word read_profile__Segment_9;
#line 876 "read_profile.m"
        MR_Word read_profile__TailSegments_10;
#line 876 "read_profile.m"
        MR_Word read_profile__PredName1_11;

#line 867 "read_profile.m"
        read_profile__succeeded = ((MR_tag((MR_Word) read_profile__Segments_4)) == (MR_mktag((MR_Integer) 1)));
#line 867 "read_profile.m"
        if (read_profile__succeeded)
#line 867 "read_profile.m"
          {
#line 867 "read_profile.m"
            read_profile__Segment_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Segments_4, (MR_Integer) 0)));
#line 867 "read_profile.m"
            read_profile__TailSegments_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Segments_4, (MR_Integer) 1)));
#line 868 "read_profile.m"
            {
#line 868 "read_profile.m"
              read_profile__succeeded = read_profile__glue_lambda_name_3_p_0(read_profile__TailSegments_10, &read_profile__PredName1_11, read_profile__LineNumber_6);
            }
#line 876 "read_profile.m"
            if (read_profile__succeeded)
#line 876 "read_profile.m"
              {
#line 872 "read_profile.m"
                if ((read_profile__PredName1_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 871 "read_profile.m"
                  *read_profile__PredName_5 = read_profile__Segment_9;
#line 872 "read_profile.m"
                else
#line 873 "read_profile.m"
                  {
#line 873 "read_profile.m"
                    MR_Word read_profile__V_16_16;
#line 873 "read_profile.m"
                    MR_Word read_profile__V_18_18;

#line 874 "read_profile.m"
                    {
#line 874 "read_profile.m"
                      read_profile__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "read_profile.m"
                      MR_hl_field(MR_mktag(1), read_profile__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Char) 95));
#line 874 "read_profile.m"
                      MR_hl_field(MR_mktag(1), read_profile__V_18_18, 1) = ((MR_Box) (read_profile__PredName1_11));
#line 874 "read_profile.m"
                    }
#line 874 "read_profile.m"
                    {
#line 874 "read_profile.m"
                      read_profile__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "read_profile.m"
                      MR_hl_field(MR_mktag(1), read_profile__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Char) 95));
#line 874 "read_profile.m"
                      MR_hl_field(MR_mktag(1), read_profile__V_16_16, 1) = ((MR_Box) (read_profile__V_18_18));
#line 874 "read_profile.m"
                    }
#line 874 "read_profile.m"
                    {
#line 874 "read_profile.m"
                      mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, read_profile__Segment_9, read_profile__V_16_16, read_profile__PredName_5);
                    }
#line 873 "read_profile.m"
                  }
#line 872 "read_profile.m"
                read_profile__succeeded = MR_TRUE;
#line 876 "read_profile.m"
              }
#line 867 "read_profile.m"
          }
#line 876 "read_profile.m"
      }
#line 867 "read_profile.m"
    return read_profile__succeeded;
#line 867 "read_profile.m"
  }
#line 860 "read_profile.m"
}

#line 842 "read_profile.m"
static void MR_CALL 
read_profile__split_lambda_name_2_p_0(
#line 842 "read_profile.m"
  MR_Word read_profile__HeadVar__1_1,
#line 842 "read_profile.m"
  MR_Word * read_profile__HeadVar__2_2)
#line 842 "read_profile.m"
{
#line 844 "read_profile.m"
  {
#line 844 "read_profile.m"
    MR_bool read_profile__succeeded;

#line 844 "read_profile.m"
    if ((read_profile__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 844 "read_profile.m"
      *read_profile__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 844 "read_profile.m"
    else
#line 845 "read_profile.m"
      {
#line 845 "read_profile.m"
        MR_Char read_profile__Char0_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 0)));
#line 845 "read_profile.m"
        MR_Word read_profile__Chars0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 1)));
#line 849 "read_profile.m"
        MR_Word read_profile__Chars1_6;
#line 846 "read_profile.m"
        MR_Char read_profile__V_10_10;
#line 846 "read_profile.m"
        MR_Word read_profile__V_11_11;
#line 846 "read_profile.m"
        MR_Char read_profile__V_12_12;

#line 846 "read_profile.m"
        read_profile__succeeded = ((MR_tag((MR_Word) read_profile__Chars0_4)) == (MR_mktag((MR_Integer) 1)));
#line 846 "read_profile.m"
        if (read_profile__succeeded)
#line 846 "read_profile.m"
          {
#line 846 "read_profile.m"
            read_profile__V_10_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Chars0_4, (MR_Integer) 0)));
#line 846 "read_profile.m"
            read_profile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Chars0_4, (MR_Integer) 1)));
#line 846 "read_profile.m"
            read_profile__succeeded = (read_profile__V_10_10 == (MR_Char) 95);
#line 846 "read_profile.m"
            if (read_profile__succeeded)
#line 846 "read_profile.m"
              {
#line 846 "read_profile.m"
                read_profile__succeeded = ((MR_tag((MR_Word) read_profile__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 846 "read_profile.m"
                if (read_profile__succeeded)
#line 846 "read_profile.m"
                  {
#line 846 "read_profile.m"
                    read_profile__V_12_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_11_11, (MR_Integer) 0)));
#line 846 "read_profile.m"
                    read_profile__Chars1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_11_11, (MR_Integer) 1)));
#line 846 "read_profile.m"
                    read_profile__succeeded = (read_profile__V_12_12 == (MR_Char) 95);
#line 846 "read_profile.m"
                  }
#line 846 "read_profile.m"
              }
#line 846 "read_profile.m"
          }
#line 849 "read_profile.m"
        if (read_profile__succeeded)
#line 847 "read_profile.m"
          {
#line 847 "read_profile.m"
            MR_Word read_profile__StringList0_7;
#line 847 "read_profile.m"
            MR_Word read_profile__V_13_13;

#line 847 "read_profile.m"
            {
#line 847 "read_profile.m"
              read_profile__split_lambda_name_2_p_0(read_profile__Chars1_6, &read_profile__StringList0_7);
            }
#line 848 "read_profile.m"
            {
#line 848 "read_profile.m"
              read_profile__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "read_profile.m"
              MR_hl_field(MR_mktag(1), read_profile__V_13_13, 0) = ((MR_Box) (MR_Word) (read_profile__Char0_3));
#line 848 "read_profile.m"
              MR_hl_field(MR_mktag(1), read_profile__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "read_profile.m"
            }
#line 848 "read_profile.m"
            {
#line 848 "read_profile.m"
              MR_Word base;
#line 848 "read_profile.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "read_profile.m"
              *read_profile__HeadVar__2_2 = base;
#line 848 "read_profile.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__V_13_13));
#line 848 "read_profile.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (read_profile__StringList0_7));
#line 848 "read_profile.m"
            }
#line 847 "read_profile.m"
          }
#line 849 "read_profile.m"
        else
#line 850 "read_profile.m"
          {
#line 850 "read_profile.m"
            MR_Word read_profile__StringList0_19;

#line 850 "read_profile.m"
            {
#line 850 "read_profile.m"
              read_profile__split_lambda_name_2_p_0(read_profile__Chars0_4, &read_profile__StringList0_19);
            }
#line 854 "read_profile.m"
            if ((read_profile__StringList0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 852 "read_profile.m"
              {
#line 852 "read_profile.m"
                MR_Word read_profile__V_16_16;

#line 853 "read_profile.m"
                {
#line 853 "read_profile.m"
                  read_profile__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_16_16, 0) = ((MR_Box) (MR_Word) (read_profile__Char0_3));
#line 853 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "read_profile.m"
                }
#line 853 "read_profile.m"
                {
#line 853 "read_profile.m"
                  MR_Word base;
#line 853 "read_profile.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "read_profile.m"
                  *read_profile__HeadVar__2_2 = base;
#line 853 "read_profile.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__V_16_16));
#line 853 "read_profile.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "read_profile.m"
                }
#line 852 "read_profile.m"
              }
#line 854 "read_profile.m"
            else
#line 855 "read_profile.m"
              {
#line 855 "read_profile.m"
                MR_Word read_profile__String0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__StringList0_19, (MR_Integer) 0)));
#line 855 "read_profile.m"
                MR_Word read_profile__StringList1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__StringList0_19, (MR_Integer) 1)));
#line 855 "read_profile.m"
                MR_Word read_profile__V_15_15;

#line 856 "read_profile.m"
                {
#line 856 "read_profile.m"
                  read_profile__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_15_15, 0) = ((MR_Box) (MR_Word) (read_profile__Char0_3));
#line 856 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_15_15, 1) = ((MR_Box) (read_profile__String0_8));
#line 856 "read_profile.m"
                }
#line 856 "read_profile.m"
                {
#line 856 "read_profile.m"
                  MR_Word base;
#line 856 "read_profile.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "read_profile.m"
                  *read_profile__HeadVar__2_2 = base;
#line 856 "read_profile.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__V_15_15));
#line 856 "read_profile.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (read_profile__StringList1_9));
#line 856 "read_profile.m"
                }
#line 855 "read_profile.m"
              }
#line 850 "read_profile.m"
          }
#line 845 "read_profile.m"
      }
#line 844 "read_profile.m"
  }
#line 842 "read_profile.m"
}

#line 837 "read_profile.m"
static MR_bool MR_CALL 
read_profile__non_right_bracket_1_p_0(
#line 837 "read_profile.m"
  MR_Char read_profile__C_2)
#line 837 "read_profile.m"
{
#line 840 "read_profile.m"
  {
#line 840 "read_profile.m"
    MR_bool read_profile__succeeded = (read_profile__C_2 == (MR_Char) 93);

#line 840 "read_profile.m"
    read_profile__succeeded = !(read_profile__succeeded);
#line 840 "read_profile.m"
    return read_profile__succeeded;
#line 840 "read_profile.m"
  }
#line 837 "read_profile.m"
}

#line 828 "read_profile.m"
static MR_bool MR_CALL 
read_profile__fix_type_spec_suffix_3_p_0_1(
#line 828 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 828 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1)
#line 828 "read_profile.m"
{
#line 828 "read_profile.m"
  {
#line 828 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 828 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;

#line 828 "read_profile.m"
    {
#line 828 "read_profile.m"
      return read_profile__succeeded = read_profile__non_right_bracket_1_p_0(((MR_Char) (MR_Word) read_profile__wrapper_arg_1));
    }
#line 828 "read_profile.m"
    return read_profile__succeeded;
#line 828 "read_profile.m"
  }
#line 828 "read_profile.m"
}

#line 822 "read_profile.m"
static MR_bool MR_CALL 
read_profile__fix_type_spec_suffix_3_p_0(
#line 822 "read_profile.m"
  MR_Word read_profile__Chars0_4,
#line 822 "read_profile.m"
  MR_Word * read_profile__Chars_5,
#line 822 "read_profile.m"
  MR_String * read_profile__SpecInfoStr_6)
#line 822 "read_profile.m"
{
#line 830 "read_profile.m"
  {
#line 830 "read_profile.m"
    MR_bool read_profile__succeeded = ((MR_tag((MR_Word) read_profile__Chars0_4)) == (MR_mktag((MR_Integer) 1)));
#line 830 "read_profile.m"
    MR_Word read_profile__SpecInfo0_7;
#line 826 "read_profile.m"
    MR_Char read_profile__V_13_13;
#line 826 "read_profile.m"
    MR_Word read_profile__V_14_14;
#line 826 "read_profile.m"
    MR_Char read_profile__V_15_15;
#line 826 "read_profile.m"
    MR_Word read_profile__V_16_16;
#line 826 "read_profile.m"
    MR_Char read_profile__V_17_17;

#line 826 "read_profile.m"
    if (read_profile__succeeded)
#line 826 "read_profile.m"
      {
#line 826 "read_profile.m"
        read_profile__V_13_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Chars0_4, (MR_Integer) 0)));
#line 826 "read_profile.m"
        read_profile__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Chars0_4, (MR_Integer) 1)));
#line 826 "read_profile.m"
        read_profile__succeeded = (read_profile__V_13_13 == (MR_Char) 95);
#line 826 "read_profile.m"
        if (read_profile__succeeded)
#line 826 "read_profile.m"
          {
#line 826 "read_profile.m"
            read_profile__succeeded = ((MR_tag((MR_Word) read_profile__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 826 "read_profile.m"
            if (read_profile__succeeded)
#line 826 "read_profile.m"
              {
#line 826 "read_profile.m"
                read_profile__V_15_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_14_14, (MR_Integer) 0)));
#line 826 "read_profile.m"
                read_profile__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_14_14, (MR_Integer) 1)));
#line 826 "read_profile.m"
                read_profile__succeeded = (read_profile__V_15_15 == (MR_Char) 95);
#line 826 "read_profile.m"
                if (read_profile__succeeded)
#line 826 "read_profile.m"
                  {
#line 826 "read_profile.m"
                    read_profile__succeeded = ((MR_tag((MR_Word) read_profile__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 826 "read_profile.m"
                    if (read_profile__succeeded)
#line 826 "read_profile.m"
                      {
#line 826 "read_profile.m"
                        read_profile__V_17_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_16_16, (MR_Integer) 0)));
#line 826 "read_profile.m"
                        read_profile__SpecInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__V_16_16, (MR_Integer) 1)));
#line 826 "read_profile.m"
                        read_profile__succeeded = (read_profile__V_17_17 == (MR_Char) 91);
#line 826 "read_profile.m"
                      }
#line 826 "read_profile.m"
                  }
#line 826 "read_profile.m"
              }
#line 826 "read_profile.m"
          }
#line 826 "read_profile.m"
      }
#line 830 "read_profile.m"
    if (read_profile__succeeded)
#line 827 "read_profile.m"
      {
#line 827 "read_profile.m"
        MR_Word read_profile__SpecInfo_8;
#line 828 "read_profile.m"
        MR_Word read_profile__V_9_9;

#line 827 "read_profile.m"
        *read_profile__Chars_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 828 "read_profile.m"
        {
#line 828 "read_profile.m"
          mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &read_profile_scalar_common_4[40], read_profile__SpecInfo0_7, &read_profile__SpecInfo_8, &read_profile__V_9_9);
        }
#line 829 "read_profile.m"
        {
#line 829 "read_profile.m"
          mercury__string__from_char_list_2_p_0(read_profile__SpecInfo_8, read_profile__SpecInfoStr_6);
        }
#line 827 "read_profile.m"
        read_profile__succeeded = MR_TRUE;
#line 827 "read_profile.m"
      }
#line 830 "read_profile.m"
    else
#line 833 "read_profile.m"
      {
#line 833 "read_profile.m"
        MR_Char read_profile__Char_10;
#line 833 "read_profile.m"
        MR_Word read_profile__TailChars0_11;
#line 833 "read_profile.m"
        MR_Word read_profile__TailChars_12;

#line 830 "read_profile.m"
        read_profile__succeeded = ((MR_tag((MR_Word) read_profile__Chars0_4)) == (MR_mktag((MR_Integer) 1)));
#line 830 "read_profile.m"
        if (read_profile__succeeded)
#line 830 "read_profile.m"
          {
#line 830 "read_profile.m"
            read_profile__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Chars0_4, (MR_Integer) 0)));
#line 830 "read_profile.m"
            read_profile__TailChars0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__Chars0_4, (MR_Integer) 1)));
#line 831 "read_profile.m"
            {
#line 831 "read_profile.m"
              read_profile__succeeded = read_profile__fix_type_spec_suffix_3_p_0(read_profile__TailChars0_11, &read_profile__TailChars_12, read_profile__SpecInfoStr_6);
            }
#line 833 "read_profile.m"
            if (read_profile__succeeded)
#line 833 "read_profile.m"
              {
#line 832 "read_profile.m"
                {
#line 832 "read_profile.m"
                  MR_Word base;
#line 832 "read_profile.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "read_profile.m"
                  *read_profile__Chars_5 = base;
#line 832 "read_profile.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (read_profile__Char_10));
#line 832 "read_profile.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (read_profile__TailChars_12));
#line 832 "read_profile.m"
                }
#line 832 "read_profile.m"
                read_profile__succeeded = MR_TRUE;
#line 833 "read_profile.m"
              }
#line 830 "read_profile.m"
          }
#line 833 "read_profile.m"
      }
#line 830 "read_profile.m"
    return read_profile__succeeded;
#line 830 "read_profile.m"
  }
#line 822 "read_profile.m"
}

#line 817 "read_profile.m"
static MR_String MR_CALL 
read_profile__add_plus_one_for_function_1_f_0(
#line 817 "read_profile.m"
  MR_Word read_profile__HeadVar__1_1)
#line 817 "read_profile.m"
{
#line 819 "read_profile.m"
  {
#line 819 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 819 "read_profile.m"
    MR_String read_profile__HeadVar__2_2;

#line 819 "read_profile.m"
    if ((read_profile__HeadVar__1_1 == (MR_Integer) 1))
#line 819 "read_profile.m"
      read_profile__HeadVar__2_2 = (MR_String) "+1";
#line 819 "read_profile.m"
    else
#line 820 "read_profile.m"
      read_profile__HeadVar__2_2 = (MR_String) "";
#line 819 "read_profile.m"
    return read_profile__HeadVar__2_2;
#line 819 "read_profile.m"
  }
#line 817 "read_profile.m"
}

#line 728 "read_profile.m"
static void MR_CALL 
read_profile__create_refined_proc_ids_3_p_0(
#line 728 "read_profile.m"
  MR_Word read_profile__ProcLabel_4,
#line 728 "read_profile.m"
  MR_String * read_profile__UnQualName_5,
#line 728 "read_profile.m"
  MR_String * read_profile__QualName_6)
#line 728 "read_profile.m"
{
#line 734 "read_profile.m"
  {
#line 734 "read_profile.m"
    MR_bool read_profile__succeeded;

#line 734 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__ProcLabel_4)) == (MR_mktag((MR_Integer) 0))))
#line 763 "read_profile.m"
      {
#line 763 "read_profile.m"
        MR_Word read_profile__PredOrFunc_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__ProcLabel_4, (MR_Integer) 0)));
#line 763 "read_profile.m"
        MR_String read_profile__DeclModule_21 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__ProcLabel_4, (MR_Integer) 1)));
#line 763 "read_profile.m"
        MR_String read_profile__ProcName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__ProcLabel_4, (MR_Integer) 3)));
#line 763 "read_profile.m"
        MR_Integer read_profile__Arity_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProcLabel_4, (MR_Integer) 4)));
#line 763 "read_profile.m"
        MR_Integer read_profile__Mode_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProcLabel_4, (MR_Integer) 5)));
#line 762 "read_profile.m"
        MR_String read_profile___DefModule_95 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__ProcLabel_4, (MR_Integer) 2)));
#line 785 "read_profile.m"
        MR_Word read_profile__ProcNameChars_29;
#line 785 "read_profile.m"
        MR_String read_profile__SpecInfo_30;
#line 765 "read_profile.m"
        MR_String read_profile__ProcName1_23;
#line 765 "read_profile.m"
        MR_String read_profile__ProcName2_25;
#line 765 "read_profile.m"
        MR_Word read_profile__ProcName2Chars_28;
#line 768 "read_profile.m"
        MR_String read_profile__ProcName2A_24;
#line 766 "read_profile.m"
        MR_String read_profile__V_39_39;

#line 765 "read_profile.m"
        {
#line 765 "read_profile.m"
          read_profile__succeeded = mercury__string__append_3_p_1((MR_String) "TypeSpecOf__", &read_profile__ProcName1_23, read_profile__ProcName_22);
        }
#line 765 "read_profile.m"
        if (read_profile__succeeded)
#line 765 "read_profile.m"
          {
#line 766 "read_profile.m"
            read_profile__V_39_39 = (MR_String) "pred__";
#line 766 "read_profile.m"
            {
#line 766 "read_profile.m"
              read_profile__succeeded = mercury__string__append_3_p_1(read_profile__V_39_39, &read_profile__ProcName2A_24, read_profile__ProcName1_23);
            }
#line 768 "read_profile.m"
            if (read_profile__succeeded)
#line 767 "read_profile.m"
              read_profile__ProcName2_25 = read_profile__ProcName2A_24;
#line 768 "read_profile.m"
            else
#line 770 "read_profile.m"
              {
#line 770 "read_profile.m"
                MR_String read_profile__ProcName2B_26;

#line 768 "read_profile.m"
                {
#line 768 "read_profile.m"
                  read_profile__succeeded = mercury__string__append_3_p_1((MR_String) "func__", &read_profile__ProcName2B_26, read_profile__ProcName1_23);
                }
#line 770 "read_profile.m"
                if (read_profile__succeeded)
#line 769 "read_profile.m"
                  read_profile__ProcName2_25 = read_profile__ProcName2B_26;
#line 770 "read_profile.m"
                else
#line 772 "read_profile.m"
                  {
#line 772 "read_profile.m"
                    MR_String read_profile__ProcName2C_27;

#line 770 "read_profile.m"
                    {
#line 770 "read_profile.m"
                      read_profile__succeeded = mercury__string__append_3_p_1((MR_String) "pred_or_func__", &read_profile__ProcName2C_27, read_profile__ProcName1_23);
                    }
#line 772 "read_profile.m"
                    if (read_profile__succeeded)
#line 771 "read_profile.m"
                      read_profile__ProcName2_25 = read_profile__ProcName2C_27;
#line 772 "read_profile.m"
                    else
#line 773 "read_profile.m"
                      {
#line 773 "read_profile.m"
                        {
#line 773 "read_profile.m"
                          mercury__require__error_1_p_0((MR_String) "typespec: neither pred nor func");
#line 773 "read_profile.m"
                          return;
                        }
#line 773 "read_profile.m"
                      }
#line 772 "read_profile.m"
                  }
#line 770 "read_profile.m"
              }
#line 775 "read_profile.m"
            {
#line 775 "read_profile.m"
              mercury__string__to_char_list_2_p_0(read_profile__ProcName2_25, &read_profile__ProcName2Chars_28);
            }
#line 776 "read_profile.m"
            {
#line 776 "read_profile.m"
              read_profile__succeeded = read_profile__fix_type_spec_suffix_3_p_0(read_profile__ProcName2Chars_28, &read_profile__ProcNameChars_29, &read_profile__SpecInfo_30);
            }
#line 765 "read_profile.m"
          }
#line 785 "read_profile.m"
        if (read_profile__succeeded)
#line 778 "read_profile.m"
          {
#line 778 "read_profile.m"
            MR_String read_profile__RefinedProcName_31;
#line 778 "read_profile.m"
            MR_String read_profile__Suffix_32;
#line 778 "read_profile.m"
            MR_String read_profile__V_44_44;
#line 778 "read_profile.m"
            MR_String read_profile__V_45_45;
#line 778 "read_profile.m"
            MR_String read_profile__V_46_46;
#line 778 "read_profile.m"
            MR_String read_profile__V_47_47;
#line 778 "read_profile.m"
            MR_String read_profile__V_48_48;
#line 778 "read_profile.m"
            MR_String read_profile__V_50_50;
#line 778 "read_profile.m"
            MR_String read_profile__V_51_51;
#line 778 "read_profile.m"
            MR_String read_profile__V_52_52;
#line 778 "read_profile.m"
            MR_String read_profile__V_54_54;
#line 778 "read_profile.m"
            MR_String read_profile__V_56_56;
#line 778 "read_profile.m"
            MR_String read_profile__V_58_58;

#line 778 "read_profile.m"
            {
#line 778 "read_profile.m"
              read_profile__RefinedProcName_31 = mercury__string__from_char_list_1_f_0(read_profile__ProcNameChars_29);
            }
#line 779 "read_profile.m"
            {
#line 779 "read_profile.m"
              read_profile__V_45_45 = mercury__string__int_to_string_1_f_0(read_profile__Arity_113);
            }
#line 780 "read_profile.m"
            {
#line 780 "read_profile.m"
              read_profile__V_47_47 = read_profile__add_plus_one_for_function_1_f_0(read_profile__PredOrFunc_20);
            }
#line 781 "read_profile.m"
            {
#line 781 "read_profile.m"
              read_profile__V_51_51 = mercury__string__int_to_string_1_f_0(read_profile__Mode_114);
            }
#line 782 "read_profile.m"
            {
#line 782 "read_profile.m"
              read_profile__V_54_54 = mercury__string__f_43_43_2_f_0(read_profile__SpecInfo_30, (MR_String) "]");
            }
#line 782 "read_profile.m"
            {
#line 782 "read_profile.m"
              read_profile__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) " [", read_profile__V_54_54);
            }
#line 781 "read_profile.m"
            {
#line 781 "read_profile.m"
              read_profile__V_50_50 = mercury__string__f_43_43_2_f_0(read_profile__V_51_51, read_profile__V_52_52);
            }
#line 781 "read_profile.m"
            {
#line 781 "read_profile.m"
              read_profile__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "-", read_profile__V_50_50);
            }
#line 780 "read_profile.m"
            {
#line 780 "read_profile.m"
              read_profile__V_46_46 = mercury__string__f_43_43_2_f_0(read_profile__V_47_47, read_profile__V_48_48);
            }
#line 779 "read_profile.m"
            {
#line 779 "read_profile.m"
              read_profile__V_44_44 = mercury__string__f_43_43_2_f_0(read_profile__V_45_45, read_profile__V_46_46);
            }
#line 779 "read_profile.m"
            {
#line 779 "read_profile.m"
              read_profile__Suffix_32 = mercury__string__f_43_43_2_f_0((MR_String) "/", read_profile__V_44_44);
            }
#line 783 "read_profile.m"
            {
#line 783 "read_profile.m"
              *read_profile__UnQualName_5 = mercury__string__f_43_43_2_f_0(read_profile__RefinedProcName_31, read_profile__Suffix_32);
            }
#line 784 "read_profile.m"
            {
#line 784 "read_profile.m"
              read_profile__V_58_58 = mercury__string__f_43_43_2_f_0(read_profile__RefinedProcName_31, read_profile__Suffix_32);
            }
#line 784 "read_profile.m"
            {
#line 784 "read_profile.m"
              read_profile__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) ".", read_profile__V_58_58);
            }
#line 784 "read_profile.m"
            {
#line 784 "read_profile.m"
              *read_profile__QualName_6 = mercury__string__f_43_43_2_f_0(read_profile__DeclModule_21, read_profile__V_56_56);
            }
#line 778 "read_profile.m"
          }
#line 785 "read_profile.m"
        else
#line 807 "read_profile.m"
          {
#line 807 "read_profile.m"
            MR_Word read_profile__ContainingNameChars_34;
#line 807 "read_profile.m"
            MR_Word read_profile__LineNumberChars_35;
#line 786 "read_profile.m"
            MR_Word read_profile__Segments_33;
#line 786 "read_profile.m"
            MR_String read_profile__ProcName1_99;
#line 786 "read_profile.m"
            MR_String read_profile__ProcName2_101;
#line 786 "read_profile.m"
            MR_Word read_profile__ProcName2Chars_103;
#line 789 "read_profile.m"
            MR_String read_profile__ProcName2A_97;
#line 787 "read_profile.m"
            MR_String read_profile__V_60_60;

#line 786 "read_profile.m"
            {
#line 786 "read_profile.m"
              read_profile__succeeded = mercury__string__append_3_p_1((MR_String) "IntroducedFrom__", &read_profile__ProcName1_99, read_profile__ProcName_22);
            }
#line 786 "read_profile.m"
            if (read_profile__succeeded)
#line 786 "read_profile.m"
              {
#line 787 "read_profile.m"
                read_profile__V_60_60 = (MR_String) "pred__";
#line 787 "read_profile.m"
                {
#line 787 "read_profile.m"
                  read_profile__succeeded = mercury__string__append_3_p_1(read_profile__V_60_60, &read_profile__ProcName2A_97, read_profile__ProcName1_99);
                }
#line 789 "read_profile.m"
                if (read_profile__succeeded)
#line 788 "read_profile.m"
                  read_profile__ProcName2_101 = read_profile__ProcName2A_97;
#line 789 "read_profile.m"
                else
#line 791 "read_profile.m"
                  {
#line 791 "read_profile.m"
                    MR_String read_profile__ProcName2B_96;

#line 789 "read_profile.m"
                    {
#line 789 "read_profile.m"
                      read_profile__succeeded = mercury__string__append_3_p_1((MR_String) "func__", &read_profile__ProcName2B_96, read_profile__ProcName1_99);
                    }
#line 791 "read_profile.m"
                    if (read_profile__succeeded)
#line 790 "read_profile.m"
                      read_profile__ProcName2_101 = read_profile__ProcName2B_96;
#line 791 "read_profile.m"
                    else
#line 792 "read_profile.m"
                      {
#line 792 "read_profile.m"
                        {
#line 792 "read_profile.m"
                          mercury__require__error_1_p_0((MR_String) "lambda: neither pred nor func");
#line 792 "read_profile.m"
                          return;
                        }
#line 792 "read_profile.m"
                      }
#line 791 "read_profile.m"
                  }
#line 794 "read_profile.m"
                {
#line 794 "read_profile.m"
                  mercury__string__to_char_list_2_p_0(read_profile__ProcName2_101, &read_profile__ProcName2Chars_103);
                }
#line 795 "read_profile.m"
                {
#line 795 "read_profile.m"
                  read_profile__split_lambda_name_2_p_0(read_profile__ProcName2Chars_103, &read_profile__Segments_33);
                }
#line 796 "read_profile.m"
                {
#line 796 "read_profile.m"
                  read_profile__succeeded = read_profile__glue_lambda_name_3_p_0(read_profile__Segments_33, &read_profile__ContainingNameChars_34, &read_profile__LineNumberChars_35);
                }
#line 786 "read_profile.m"
              }
#line 807 "read_profile.m"
            if (read_profile__succeeded)
#line 799 "read_profile.m"
              {
#line 799 "read_profile.m"
                MR_String read_profile__ContainingName_36;
#line 799 "read_profile.m"
                MR_String read_profile__LineNumber_37;
#line 799 "read_profile.m"
                MR_String read_profile__V_64_64;
#line 799 "read_profile.m"
                MR_String read_profile__V_65_65;
#line 799 "read_profile.m"
                MR_String read_profile__V_67_67;
#line 799 "read_profile.m"
                MR_String read_profile__V_68_68;
#line 799 "read_profile.m"
                MR_String read_profile__V_69_69;
#line 799 "read_profile.m"
                MR_String read_profile__V_70_70;
#line 799 "read_profile.m"
                MR_String read_profile__V_72_72;
#line 799 "read_profile.m"
                MR_String read_profile__Suffix_104;

#line 799 "read_profile.m"
                {
#line 799 "read_profile.m"
                  mercury__string__from_char_list_2_p_0(read_profile__ContainingNameChars_34, &read_profile__ContainingName_36);
                }
#line 800 "read_profile.m"
                {
#line 800 "read_profile.m"
                  mercury__string__from_char_list_2_p_0(read_profile__LineNumberChars_35, &read_profile__LineNumber_37);
                }
#line 803 "read_profile.m"
                {
#line 803 "read_profile.m"
                  read_profile__V_68_68 = mercury__string__int_to_string_1_f_0(read_profile__Arity_113);
                }
#line 804 "read_profile.m"
                {
#line 804 "read_profile.m"
                  read_profile__V_69_69 = read_profile__add_plus_one_for_function_1_f_0(read_profile__PredOrFunc_20);
                }
#line 803 "read_profile.m"
                {
#line 803 "read_profile.m"
                  read_profile__V_67_67 = mercury__string__f_43_43_2_f_0(read_profile__V_68_68, read_profile__V_69_69);
                }
#line 803 "read_profile.m"
                {
#line 803 "read_profile.m"
                  read_profile__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) "/", read_profile__V_67_67);
                }
#line 802 "read_profile.m"
                {
#line 802 "read_profile.m"
                  read_profile__V_64_64 = mercury__string__f_43_43_2_f_0(read_profile__LineNumber_37, read_profile__V_65_65);
                }
#line 802 "read_profile.m"
                {
#line 802 "read_profile.m"
                  read_profile__Suffix_104 = mercury__string__f_43_43_2_f_0((MR_String) " lambda line ", read_profile__V_64_64);
                }
#line 805 "read_profile.m"
                {
#line 805 "read_profile.m"
                  *read_profile__UnQualName_5 = mercury__string__f_43_43_2_f_0(read_profile__ContainingName_36, read_profile__Suffix_104);
                }
#line 806 "read_profile.m"
                {
#line 806 "read_profile.m"
                  read_profile__V_72_72 = mercury__string__f_43_43_2_f_0(read_profile__ContainingName_36, read_profile__Suffix_104);
                }
#line 806 "read_profile.m"
                {
#line 806 "read_profile.m"
                  read_profile__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) ".", read_profile__V_72_72);
                }
#line 806 "read_profile.m"
                {
#line 806 "read_profile.m"
                  *read_profile__QualName_6 = mercury__string__f_43_43_2_f_0(read_profile__DeclModule_21, read_profile__V_70_70);
                }
#line 799 "read_profile.m"
              }
#line 807 "read_profile.m"
            else
#line 811 "read_profile.m"
              {
#line 811 "read_profile.m"
                MR_String read_profile__V_74_74;
#line 811 "read_profile.m"
                MR_String read_profile__V_75_75;
#line 811 "read_profile.m"
                MR_String read_profile__V_76_76;
#line 811 "read_profile.m"
                MR_String read_profile__V_77_77;
#line 811 "read_profile.m"
                MR_String read_profile__V_78_78;
#line 811 "read_profile.m"
                MR_String read_profile__V_80_80;
#line 811 "read_profile.m"
                MR_String read_profile__V_81_81;
#line 811 "read_profile.m"
                MR_String read_profile__V_83_83;
#line 811 "read_profile.m"
                MR_String read_profile__Suffix_105;

#line 809 "read_profile.m"
                {
#line 809 "read_profile.m"
                  read_profile__V_75_75 = mercury__string__int_to_string_1_f_0(read_profile__Arity_113);
                }
#line 810 "read_profile.m"
                {
#line 810 "read_profile.m"
                  read_profile__V_77_77 = read_profile__add_plus_one_for_function_1_f_0(read_profile__PredOrFunc_20);
                }
#line 811 "read_profile.m"
                {
#line 811 "read_profile.m"
                  read_profile__V_80_80 = mercury__string__int_to_string_1_f_0(read_profile__Mode_114);
                }
#line 811 "read_profile.m"
                {
#line 811 "read_profile.m"
                  read_profile__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) "-", read_profile__V_80_80);
                }
#line 810 "read_profile.m"
                {
#line 810 "read_profile.m"
                  read_profile__V_76_76 = mercury__string__f_43_43_2_f_0(read_profile__V_77_77, read_profile__V_78_78);
                }
#line 809 "read_profile.m"
                {
#line 809 "read_profile.m"
                  read_profile__V_74_74 = mercury__string__f_43_43_2_f_0(read_profile__V_75_75, read_profile__V_76_76);
                }
#line 809 "read_profile.m"
                {
#line 809 "read_profile.m"
                  read_profile__Suffix_105 = mercury__string__f_43_43_2_f_0((MR_String) "/", read_profile__V_74_74);
                }
#line 812 "read_profile.m"
                {
#line 812 "read_profile.m"
                  *read_profile__UnQualName_5 = mercury__string__f_43_43_2_f_0(read_profile__ProcName_22, read_profile__Suffix_105);
                }
#line 813 "read_profile.m"
                {
#line 813 "read_profile.m"
                  read_profile__V_83_83 = mercury__string__f_43_43_2_f_0(read_profile__ProcName_22, read_profile__Suffix_105);
                }
#line 813 "read_profile.m"
                {
#line 813 "read_profile.m"
                  read_profile__V_81_81 = mercury__string__f_43_43_2_f_0((MR_String) ".", read_profile__V_83_83);
                }
#line 813 "read_profile.m"
                {
#line 813 "read_profile.m"
                  *read_profile__QualName_6 = mercury__string__f_43_43_2_f_0(read_profile__DeclModule_21, read_profile__V_81_81);
                }
#line 811 "read_profile.m"
              }
#line 807 "read_profile.m"
          }
#line 763 "read_profile.m"
      }
#line 734 "read_profile.m"
    else
#line 734 "read_profile.m"
      {
#line 734 "read_profile.m"
        MR_String read_profile__TypeName_7 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__ProcLabel_4, (MR_Integer) 0)));
#line 734 "read_profile.m"
        MR_String read_profile__TypeModule_8 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__ProcLabel_4, (MR_Integer) 1)));
#line 734 "read_profile.m"
        MR_String read_profile__RawPredName_10 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__ProcLabel_4, (MR_Integer) 3)));
#line 734 "read_profile.m"
        MR_Integer read_profile__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__ProcLabel_4, (MR_Integer) 4)));
#line 734 "read_profile.m"
        MR_Integer read_profile__Mode_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__ProcLabel_4, (MR_Integer) 5)));
#line 734 "read_profile.m"
        MR_String read_profile__PredName_13;
#line 734 "read_profile.m"
        MR_String read_profile__Prefix_15;
#line 734 "read_profile.m"
        MR_String read_profile__AritySuffix_16;
#line 734 "read_profile.m"
        MR_String read_profile__UnQualName0_17;
#line 734 "read_profile.m"
        MR_String read_profile__QualName0_18;
#line 734 "read_profile.m"
        MR_String read_profile__V_87_87;
#line 734 "read_profile.m"
        MR_String read_profile__V_88_88;
#line 734 "read_profile.m"
        MR_String read_profile__V_89_89;
#line 734 "read_profile.m"
        MR_String read_profile__V_90_90;
#line 734 "read_profile.m"
        MR_String read_profile__V_92_92;
#line 733 "read_profile.m"
        MR_String read_profile___DefModule_9 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__ProcLabel_4, (MR_Integer) 2)));

#line 735 "read_profile.m"
        read_profile__succeeded = (strcmp(read_profile__RawPredName_10, (MR_String) "__Unify__") == 0);
#line 737 "read_profile.m"
        if (read_profile__succeeded)
#line 736 "read_profile.m"
          read_profile__PredName_13 = (MR_String) "Unify";
#line 737 "read_profile.m"
        else
#line 739 "read_profile.m"
          {
#line 737 "read_profile.m"
            read_profile__succeeded = (strcmp(read_profile__RawPredName_10, (MR_String) "__Compare__") == 0);
#line 739 "read_profile.m"
            if (read_profile__succeeded)
#line 738 "read_profile.m"
              read_profile__PredName_13 = (MR_String) "Compare";
#line 739 "read_profile.m"
            else
#line 741 "read_profile.m"
              {
#line 739 "read_profile.m"
                read_profile__succeeded = (strcmp(read_profile__RawPredName_10, (MR_String) "__CompareRep__") == 0);
#line 741 "read_profile.m"
                if (read_profile__succeeded)
#line 740 "read_profile.m"
                  read_profile__PredName_13 = (MR_String) "CompareRep";
#line 741 "read_profile.m"
                else
#line 743 "read_profile.m"
                  {
#line 741 "read_profile.m"
                    read_profile__succeeded = (strcmp(read_profile__RawPredName_10, (MR_String) "__Index__") == 0);
#line 743 "read_profile.m"
                    if (read_profile__succeeded)
#line 742 "read_profile.m"
                      read_profile__PredName_13 = (MR_String) "Index";
#line 743 "read_profile.m"
                    else
#line 745 "read_profile.m"
                      {
#line 743 "read_profile.m"
                        read_profile__succeeded = (strcmp(read_profile__RawPredName_10, (MR_String) "__Initialise__") == 0);
#line 745 "read_profile.m"
                        if (read_profile__succeeded)
#line 744 "read_profile.m"
                          read_profile__PredName_13 = (MR_String) "Initialise";
#line 745 "read_profile.m"
                        else
#line 746 "read_profile.m"
                          {
#line 746 "read_profile.m"
                            MR_String read_profile__Msg_14;

#line 746 "read_profile.m"
                            {
#line 746 "read_profile.m"
                              read_profile__Msg_14 = mercury__string__f_43_43_2_f_0((MR_String) "unknown special predicate name ", read_profile__RawPredName_10);
                            }
#line 747 "read_profile.m"
                            {
#line 747 "read_profile.m"
                              mercury__require__error_1_p_0(read_profile__Msg_14);
#line 747 "read_profile.m"
                              return;
                            }
#line 746 "read_profile.m"
                          }
#line 745 "read_profile.m"
                      }
#line 743 "read_profile.m"
                  }
#line 741 "read_profile.m"
              }
#line 739 "read_profile.m"
          }
#line 749 "read_profile.m"
        {
#line 749 "read_profile.m"
          read_profile__Prefix_15 = mercury__string__f_43_43_2_f_0(read_profile__PredName_13, (MR_String) " for ");
        }
#line 750 "read_profile.m"
        {
#line 750 "read_profile.m"
          read_profile__V_87_87 = mercury__string__int_to_string_1_f_0(read_profile__Arity_11);
        }
#line 750 "read_profile.m"
        {
#line 750 "read_profile.m"
          read_profile__AritySuffix_16 = mercury__string__f_43_43_2_f_0((MR_String) "/", read_profile__V_87_87);
        }
#line 751 "read_profile.m"
        {
#line 751 "read_profile.m"
          read_profile__V_88_88 = mercury__string__f_43_43_2_f_0(read_profile__TypeName_7, read_profile__AritySuffix_16);
        }
#line 751 "read_profile.m"
        {
#line 751 "read_profile.m"
          read_profile__UnQualName0_17 = mercury__string__f_43_43_2_f_0(read_profile__Prefix_15, read_profile__V_88_88);
        }
#line 752 "read_profile.m"
        {
#line 752 "read_profile.m"
          read_profile__V_92_92 = mercury__string__f_43_43_2_f_0(read_profile__TypeName_7, read_profile__AritySuffix_16);
        }
#line 752 "read_profile.m"
        {
#line 752 "read_profile.m"
          read_profile__V_90_90 = mercury__string__f_43_43_2_f_0((MR_String) ".", read_profile__V_92_92);
        }
#line 752 "read_profile.m"
        {
#line 752 "read_profile.m"
          read_profile__V_89_89 = mercury__string__f_43_43_2_f_0(read_profile__TypeModule_8, read_profile__V_90_90);
        }
#line 752 "read_profile.m"
        {
#line 752 "read_profile.m"
          read_profile__QualName0_18 = mercury__string__f_43_43_2_f_0(read_profile__Prefix_15, read_profile__V_89_89);
        }
#line 753 "read_profile.m"
        read_profile__succeeded = (read_profile__Mode_12 == (MR_Integer) 0);
#line 756 "read_profile.m"
        if (read_profile__succeeded)
#line 754 "read_profile.m"
          {
#line 754 "read_profile.m"
            *read_profile__UnQualName_5 = read_profile__UnQualName0_17;
#line 755 "read_profile.m"
            *read_profile__QualName_6 = read_profile__QualName0_18;
#line 754 "read_profile.m"
          }
#line 756 "read_profile.m"
        else
#line 757 "read_profile.m"
          {
#line 757 "read_profile.m"
            MR_String read_profile__ModeSuffix_19;
#line 757 "read_profile.m"
            MR_String read_profile__V_94_94;

#line 757 "read_profile.m"
            {
#line 757 "read_profile.m"
              read_profile__V_94_94 = mercury__string__int_to_string_1_f_0(read_profile__Mode_12);
            }
#line 757 "read_profile.m"
            {
#line 757 "read_profile.m"
              read_profile__ModeSuffix_19 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", read_profile__V_94_94);
            }
#line 758 "read_profile.m"
            {
#line 758 "read_profile.m"
              *read_profile__UnQualName_5 = mercury__string__f_43_43_2_f_0(read_profile__UnQualName0_17, read_profile__ModeSuffix_19);
            }
#line 759 "read_profile.m"
            {
#line 759 "read_profile.m"
              *read_profile__QualName_6 = mercury__string__f_43_43_2_f_0(read_profile__QualName0_18, read_profile__ModeSuffix_19);
            }
#line 757 "read_profile.m"
          }
#line 734 "read_profile.m"
      }
#line 734 "read_profile.m"
  }
#line 728 "read_profile.m"
}

#line 713 "read_profile.m"
static MR_String MR_CALL 
read_profile__raw_proc_id_to_string_1_f_0(
#line 713 "read_profile.m"
  MR_Word read_profile__HeadVar__1_1)
#line 713 "read_profile.m"
{
#line 716 "read_profile.m"
  {
#line 716 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 716 "read_profile.m"
    MR_String read_profile__HeadVar__2_2;

#line 716 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 722 "read_profile.m"
      {
#line 722 "read_profile.m"
        MR_Word read_profile__PredOrFunc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 0)));
#line 722 "read_profile.m"
        MR_String read_profile__DeclModule_26 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 1)));
#line 722 "read_profile.m"
        MR_String read_profile__Name_28 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 3)));
#line 722 "read_profile.m"
        MR_Integer read_profile__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 4)));
#line 722 "read_profile.m"
        MR_Integer read_profile__Mode_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 5)));
#line 722 "read_profile.m"
        MR_Word read_profile__V_31_31;
#line 722 "read_profile.m"
        MR_Word read_profile__V_32_32;
#line 722 "read_profile.m"
        MR_Word read_profile__V_34_34;
#line 722 "read_profile.m"
        MR_Word read_profile__V_35_35;
#line 722 "read_profile.m"
        MR_Word read_profile__V_37_37;
#line 722 "read_profile.m"
        MR_String read_profile__V_38_38;
#line 722 "read_profile.m"
        MR_Word read_profile__V_39_39;
#line 722 "read_profile.m"
        MR_String read_profile__V_40_40;
#line 722 "read_profile.m"
        MR_Word read_profile__V_41_41;
#line 722 "read_profile.m"
        MR_Word read_profile__V_43_43;
#line 722 "read_profile.m"
        MR_String read_profile__V_44_44;
#line 721 "read_profile.m"
        MR_String read_profile___DefModule_27 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__HeadVar__1_1, (MR_Integer) 2)));

#line 724 "read_profile.m"
        {
#line 724 "read_profile.m"
          read_profile__V_38_38 = mercury__string__int_to_string_1_f_0(read_profile__Arity_29);
        }
#line 819 "read_profile.m"
        if ((read_profile__PredOrFunc_25 == (MR_Integer) 1))
#line 819 "read_profile.m"
          read_profile__V_40_40 = (MR_String) "+1";
#line 819 "read_profile.m"
        else
#line 820 "read_profile.m"
          read_profile__V_40_40 = (MR_String) "";
#line 726 "read_profile.m"
        {
#line 726 "read_profile.m"
          read_profile__V_44_44 = mercury__string__int_to_string_1_f_0(read_profile__Mode_30);
        }
#line 726 "read_profile.m"
        {
#line 726 "read_profile.m"
          read_profile__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_43_43, 0) = ((MR_Box) (read_profile__V_44_44));
#line 726 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "read_profile.m"
        }
#line 726 "read_profile.m"
        {
#line 726 "read_profile.m"
          read_profile__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_41_41, 0) = ((MR_Box) ((MR_String) "-"));
#line 726 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_41_41, 1) = ((MR_Box) (read_profile__V_43_43));
#line 726 "read_profile.m"
        }
#line 725 "read_profile.m"
        {
#line 725 "read_profile.m"
          read_profile__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_39_39, 0) = ((MR_Box) (read_profile__V_40_40));
#line 725 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_39_39, 1) = ((MR_Box) (read_profile__V_41_41));
#line 725 "read_profile.m"
        }
#line 724 "read_profile.m"
        {
#line 724 "read_profile.m"
          read_profile__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_37_37, 0) = ((MR_Box) (read_profile__V_38_38));
#line 724 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_37_37, 1) = ((MR_Box) (read_profile__V_39_39));
#line 724 "read_profile.m"
        }
#line 724 "read_profile.m"
        {
#line 724 "read_profile.m"
          read_profile__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_35_35, 0) = ((MR_Box) ((MR_String) "/"));
#line 724 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_35_35, 1) = ((MR_Box) (read_profile__V_37_37));
#line 724 "read_profile.m"
        }
#line 723 "read_profile.m"
        {
#line 723 "read_profile.m"
          read_profile__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_34_34, 0) = ((MR_Box) (read_profile__Name_28));
#line 723 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_34_34, 1) = ((MR_Box) (read_profile__V_35_35));
#line 723 "read_profile.m"
        }
#line 723 "read_profile.m"
        {
#line 723 "read_profile.m"
          read_profile__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_32_32, 0) = ((MR_Box) ((MR_String) "."));
#line 723 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_32_32, 1) = ((MR_Box) (read_profile__V_34_34));
#line 723 "read_profile.m"
        }
#line 723 "read_profile.m"
        {
#line 723 "read_profile.m"
          read_profile__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_31_31, 0) = ((MR_Box) (read_profile__DeclModule_26));
#line 723 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_31_31, 1) = ((MR_Box) (read_profile__V_32_32));
#line 723 "read_profile.m"
        }
#line 723 "read_profile.m"
        {
#line 723 "read_profile.m"
          return read_profile__HeadVar__2_2 = mercury__string__append_list_1_f_0(read_profile__V_31_31);
        }
#line 722 "read_profile.m"
      }
#line 716 "read_profile.m"
    else
#line 716 "read_profile.m"
      {
#line 716 "read_profile.m"
        MR_String read_profile__TypeName_3 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 0)));
#line 716 "read_profile.m"
        MR_String read_profile__TypeModule_4 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 1)));
#line 716 "read_profile.m"
        MR_String read_profile__PredName_6 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 3)));
#line 716 "read_profile.m"
        MR_Integer read_profile__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 4)));
#line 716 "read_profile.m"
        MR_Integer read_profile__Mode_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 5)));
#line 716 "read_profile.m"
        MR_Word read_profile__V_9_9;
#line 716 "read_profile.m"
        MR_Word read_profile__V_10_10;
#line 716 "read_profile.m"
        MR_Word read_profile__V_12_12;
#line 716 "read_profile.m"
        MR_Word read_profile__V_13_13;
#line 716 "read_profile.m"
        MR_Word read_profile__V_15_15;
#line 716 "read_profile.m"
        MR_Word read_profile__V_16_16;
#line 716 "read_profile.m"
        MR_Word read_profile__V_18_18;
#line 716 "read_profile.m"
        MR_String read_profile__V_19_19;
#line 716 "read_profile.m"
        MR_Word read_profile__V_20_20;
#line 716 "read_profile.m"
        MR_Word read_profile__V_22_22;
#line 716 "read_profile.m"
        MR_String read_profile__V_23_23;
#line 715 "read_profile.m"
        MR_String read_profile___DefModule_5 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__HeadVar__1_1, (MR_Integer) 2)));

#line 719 "read_profile.m"
        {
#line 719 "read_profile.m"
          read_profile__V_19_19 = mercury__string__int_to_string_1_f_0(read_profile__Arity_7);
        }
#line 720 "read_profile.m"
        {
#line 720 "read_profile.m"
          read_profile__V_23_23 = mercury__string__int_to_string_1_f_0(read_profile__Mode_8);
        }
#line 720 "read_profile.m"
        {
#line 720 "read_profile.m"
          read_profile__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_22_22, 0) = ((MR_Box) (read_profile__V_23_23));
#line 720 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 720 "read_profile.m"
        }
#line 720 "read_profile.m"
        {
#line 720 "read_profile.m"
          read_profile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_20_20, 0) = ((MR_Box) ((MR_String) " mode "));
#line 720 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_20_20, 1) = ((MR_Box) (read_profile__V_22_22));
#line 720 "read_profile.m"
        }
#line 719 "read_profile.m"
        {
#line 719 "read_profile.m"
          read_profile__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_18_18, 0) = ((MR_Box) (read_profile__V_19_19));
#line 719 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_18_18, 1) = ((MR_Box) (read_profile__V_20_20));
#line 719 "read_profile.m"
        }
#line 719 "read_profile.m"
        {
#line 719 "read_profile.m"
          read_profile__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_16_16, 0) = ((MR_Box) ((MR_String) "/"));
#line 719 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_16_16, 1) = ((MR_Box) (read_profile__V_18_18));
#line 719 "read_profile.m"
        }
#line 718 "read_profile.m"
        {
#line 718 "read_profile.m"
          read_profile__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_15_15, 0) = ((MR_Box) (read_profile__TypeName_3));
#line 718 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_15_15, 1) = ((MR_Box) (read_profile__V_16_16));
#line 718 "read_profile.m"
        }
#line 718 "read_profile.m"
        {
#line 718 "read_profile.m"
          read_profile__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_13_13, 0) = ((MR_Box) ((MR_String) "."));
#line 718 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_13_13, 1) = ((MR_Box) (read_profile__V_15_15));
#line 718 "read_profile.m"
        }
#line 718 "read_profile.m"
        {
#line 718 "read_profile.m"
          read_profile__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_12_12, 0) = ((MR_Box) (read_profile__TypeModule_4));
#line 718 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_12_12, 1) = ((MR_Box) (read_profile__V_13_13));
#line 718 "read_profile.m"
        }
#line 718 "read_profile.m"
        {
#line 718 "read_profile.m"
          read_profile__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_10_10, 0) = ((MR_Box) ((MR_String) " for "));
#line 718 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_10_10, 1) = ((MR_Box) (read_profile__V_12_12));
#line 718 "read_profile.m"
        }
#line 718 "read_profile.m"
        {
#line 718 "read_profile.m"
          read_profile__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_9_9, 0) = ((MR_Box) (read_profile__PredName_6));
#line 718 "read_profile.m"
          MR_hl_field(MR_mktag(1), read_profile__V_9_9, 1) = ((MR_Box) (read_profile__V_10_10));
#line 718 "read_profile.m"
        }
#line 717 "read_profile.m"
        {
#line 717 "read_profile.m"
          return read_profile__HeadVar__2_2 = mercury__string__append_list_1_f_0(read_profile__V_9_9);
        }
#line 716 "read_profile.m"
      }
#line 716 "read_profile.m"
    return read_profile__HeadVar__2_2;
#line 716 "read_profile.m"
  }
#line 713 "read_profile.m"
}

#line 704 "read_profile.m"
static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_3(
#line 704 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 704 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 704 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 704 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 704 "read_profile.m"
{
#line 704 "read_profile.m"
  {
#line 704 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 704 "read_profile.m"
    MR_Word read_profile__conv2_HeadVar__3_19;

#line 704 "read_profile.m"
    {
#line 704 "read_profile.m"
      read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_p_0(((MR_String) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2), &read_profile__conv2_HeadVar__3_19);
    }
#line 704 "read_profile.m"
    *read_profile__wrapper_arg_3 = ((MR_Box) (read_profile__conv2_HeadVar__3_19));
#line 704 "read_profile.m"
  }
#line 704 "read_profile.m"
}

#line 706 "read_profile.m"
static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_2(
#line 706 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 706 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 706 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 706 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 706 "read_profile.m"
{
#line 706 "read_profile.m"
  {
#line 706 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 706 "read_profile.m"
    MR_Word read_profile__conv1_MaybeCPType_4;

#line 706 "read_profile.m"
    {
#line 706 "read_profile.m"
      read_profile__read_cp_type_3_p_0(&read_profile__conv1_MaybeCPType_4);
    }
#line 706 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeCPType_4));
#line 706 "read_profile.m"
  }
#line 706 "read_profile.m"
}

#line 705 "read_profile.m"
static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0_1(
#line 705 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 705 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 705 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 705 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 705 "read_profile.m"
{
#line 705 "read_profile.m"
  {
#line 705 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 705 "read_profile.m"
    MR_Word read_profile__conv0_MaybeStr_4;

#line 705 "read_profile.m"
    {
#line 705 "read_profile.m"
      read_profile__read_string_3_p_0(&read_profile__conv0_MaybeStr_4);
    }
#line 705 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybeStr_4));
#line 705 "read_profile.m"
  }
#line 705 "read_profile.m"
}

#line 700 "read_profile.m"
static void MR_CALL 
read_profile__read_coverage_point_static_3_p_0(
#line 700 "read_profile.m"
  MR_Word * read_profile__MaybeCP_4)
#line 700 "read_profile.m"
{
#line 703 "read_profile.m"
  {
#line 703 "read_profile.m"
    MR_bool read_profile__succeeded;

#line 704 "read_profile.m"
    {
#line 704 "read_profile.m"
      io_combinator__maybe_error_sequence_2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) &read_profile_scalar_common_4[37], (MR_Word) &read_profile_scalar_common_4[38], (MR_Word) &read_profile_scalar_common_4[39], read_profile__MaybeCP_4);
#line 704 "read_profile.m"
      return;
    }
#line 703 "read_profile.m"
  }
#line 700 "read_profile.m"
}

#line 663 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_6(
#line 663 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 663 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 663 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 663 "read_profile.m"
  MR_Box read_profile__wrapper_arg_3,
#line 663 "read_profile.m"
  MR_Box read_profile__wrapper_arg_4,
#line 663 "read_profile.m"
  MR_Box read_profile__wrapper_arg_5,
#line 663 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_6)
#line 663 "read_profile.m"
{
#line 663 "read_profile.m"
  {
#line 663 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 663 "read_profile.m"
    MR_Word read_profile__conv5_HeadVar__7_28;

#line 663 "read_profile.m"
    {
#line 663 "read_profile.m"
      read_profile__IntroducedFrom__pred__read_proc_id_user_defined__663__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), ((MR_String) read_profile__wrapper_arg_1), ((MR_String) read_profile__wrapper_arg_2), ((MR_String) read_profile__wrapper_arg_3), ((MR_Integer) read_profile__wrapper_arg_4), ((MR_Integer) read_profile__wrapper_arg_5), &read_profile__conv5_HeadVar__7_28);
    }
#line 663 "read_profile.m"
    *read_profile__wrapper_arg_6 = ((MR_Box) (read_profile__conv5_HeadVar__7_28));
#line 663 "read_profile.m"
  }
#line 663 "read_profile.m"
}

#line 668 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_5(
#line 668 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 668 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 668 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 668 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 668 "read_profile.m"
{
#line 668 "read_profile.m"
  {
#line 668 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 668 "read_profile.m"
    MR_Word read_profile__conv4_MaybeNum_4;

#line 668 "read_profile.m"
    {
#line 668 "read_profile.m"
      read_profile__read_num_3_p_0(&read_profile__conv4_MaybeNum_4);
    }
#line 668 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv4_MaybeNum_4));
#line 668 "read_profile.m"
  }
#line 668 "read_profile.m"
}

#line 667 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_4(
#line 667 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 667 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 667 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 667 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 667 "read_profile.m"
{
#line 667 "read_profile.m"
  {
#line 667 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 667 "read_profile.m"
    MR_Word read_profile__conv3_MaybeNum_4;

#line 667 "read_profile.m"
    {
#line 667 "read_profile.m"
      read_profile__read_num_3_p_0(&read_profile__conv3_MaybeNum_4);
    }
#line 667 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv3_MaybeNum_4));
#line 667 "read_profile.m"
  }
#line 667 "read_profile.m"
}

#line 666 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_3(
#line 666 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 666 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 666 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 666 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 666 "read_profile.m"
{
#line 666 "read_profile.m"
  {
#line 666 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 666 "read_profile.m"
    MR_Word read_profile__conv2_MaybeStr_4;

#line 666 "read_profile.m"
    {
#line 666 "read_profile.m"
      read_profile__read_string_3_p_0(&read_profile__conv2_MaybeStr_4);
    }
#line 666 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv2_MaybeStr_4));
#line 666 "read_profile.m"
  }
#line 666 "read_profile.m"
}

#line 665 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_2(
#line 665 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 665 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 665 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 665 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 665 "read_profile.m"
{
#line 665 "read_profile.m"
  {
#line 665 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 665 "read_profile.m"
    MR_Word read_profile__conv1_MaybeStr_4;

#line 665 "read_profile.m"
    {
#line 665 "read_profile.m"
      read_profile__read_string_3_p_0(&read_profile__conv1_MaybeStr_4);
    }
#line 665 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeStr_4));
#line 665 "read_profile.m"
  }
#line 665 "read_profile.m"
}

#line 664 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0_1(
#line 664 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 664 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 664 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 664 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 664 "read_profile.m"
{
#line 664 "read_profile.m"
  {
#line 664 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 664 "read_profile.m"
    MR_Word read_profile__conv0_MaybeStr_4;

#line 664 "read_profile.m"
    {
#line 664 "read_profile.m"
      read_profile__read_string_3_p_0(&read_profile__conv0_MaybeStr_4);
    }
#line 664 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybeStr_4));
#line 664 "read_profile.m"
  }
#line 664 "read_profile.m"
}

#line 659 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_user_defined_4_p_0(
#line 659 "read_profile.m"
  MR_Word read_profile__PredOrFunc_5,
#line 659 "read_profile.m"
  MR_Word * read_profile__MaybeProcLabel_6)
#line 659 "read_profile.m"
{
#line 662 "read_profile.m"
  {
#line 662 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 662 "read_profile.m"
    MR_Word read_profile__TypeCtorInfo_51_51;
#line 662 "read_profile.m"
    MR_Word read_profile__TypeCtorInfo_52_52;
#line 662 "read_profile.m"
    MR_Word read_profile__V_21_21;

#line 663 "read_profile.m"
    {
#line 663 "read_profile.m"
      read_profile__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 663 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_21_21, 0) = ((MR_Box) (&read_profile_scalar_common_10[2]));
#line 663 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_21_21, 1) = ((MR_Box) (read_profile__read_proc_id_user_defined_4_p_0_6));
#line 663 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 663 "read_profile.m"
      MR_hl_field(MR_mktag(0), read_profile__V_21_21, 3) = ((MR_Box) (read_profile__PredOrFunc_5));
#line 663 "read_profile.m"
    }
#line 10517 "read_profile.c"
    read_profile__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 10519 "read_profile.c"
    read_profile__TypeCtorInfo_52_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 663 "read_profile.m"
    {
#line 663 "read_profile.m"
      io_combinator__maybe_error_sequence_5_9_p_0(read_profile__TypeCtorInfo_51_51, read_profile__TypeCtorInfo_51_51, read_profile__TypeCtorInfo_51_51, read_profile__TypeCtorInfo_52_52, read_profile__TypeCtorInfo_52_52, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0, (MR_Word) &read_profile_scalar_common_4[32], (MR_Word) &read_profile_scalar_common_4[33], (MR_Word) &read_profile_scalar_common_4[34], (MR_Word) &read_profile_scalar_common_4[35], (MR_Word) &read_profile_scalar_common_4[36], read_profile__V_21_21, read_profile__MaybeProcLabel_6);
#line 663 "read_profile.m"
      return;
    }
#line 662 "read_profile.m"
  }
#line 659 "read_profile.m"
}

#line 644 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0_7(
#line 644 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 644 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 644 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 644 "read_profile.m"
  MR_Box read_profile__wrapper_arg_3,
#line 644 "read_profile.m"
  MR_Box read_profile__wrapper_arg_4,
#line 644 "read_profile.m"
  MR_Box read_profile__wrapper_arg_5,
#line 644 "read_profile.m"
  MR_Box read_profile__wrapper_arg_6,
#line 644 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_7)
#line 644 "read_profile.m"
{
#line 644 "read_profile.m"
  {
#line 644 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 644 "read_profile.m"
    MR_Word read_profile__conv6_HeadVar__7_29;

#line 644 "read_profile.m"
    {
#line 644 "read_profile.m"
      read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__644__1_7_p_0(((MR_String) read_profile__wrapper_arg_1), ((MR_String) read_profile__wrapper_arg_2), ((MR_String) read_profile__wrapper_arg_3), ((MR_String) read_profile__wrapper_arg_4), ((MR_Integer) read_profile__wrapper_arg_5), ((MR_Integer) read_profile__wrapper_arg_6), &read_profile__conv6_HeadVar__7_29);
    }
#line 644 "read_profile.m"
    *read_profile__wrapper_arg_7 = ((MR_Box) (read_profile__conv6_HeadVar__7_29));
#line 644 "read_profile.m"
  }
#line 644 "read_profile.m"
}

#line 650 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0_6(
#line 650 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 650 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 650 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 650 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 650 "read_profile.m"
{
#line 650 "read_profile.m"
  {
#line 650 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 650 "read_profile.m"
    MR_Word read_profile__conv5_MaybeNum_4;

#line 650 "read_profile.m"
    {
#line 650 "read_profile.m"
      read_profile__read_num_3_p_0(&read_profile__conv5_MaybeNum_4);
    }
#line 650 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv5_MaybeNum_4));
#line 650 "read_profile.m"
  }
#line 650 "read_profile.m"
}

#line 649 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0_5(
#line 649 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 649 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 649 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 649 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 649 "read_profile.m"
{
#line 649 "read_profile.m"
  {
#line 649 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 649 "read_profile.m"
    MR_Word read_profile__conv4_MaybeNum_4;

#line 649 "read_profile.m"
    {
#line 649 "read_profile.m"
      read_profile__read_num_3_p_0(&read_profile__conv4_MaybeNum_4);
    }
#line 649 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv4_MaybeNum_4));
#line 649 "read_profile.m"
  }
#line 649 "read_profile.m"
}

#line 648 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0_4(
#line 648 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 648 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 648 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 648 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 648 "read_profile.m"
{
#line 648 "read_profile.m"
  {
#line 648 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 648 "read_profile.m"
    MR_Word read_profile__conv3_MaybeStr_4;

#line 648 "read_profile.m"
    {
#line 648 "read_profile.m"
      read_profile__read_string_3_p_0(&read_profile__conv3_MaybeStr_4);
    }
#line 648 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv3_MaybeStr_4));
#line 648 "read_profile.m"
  }
#line 648 "read_profile.m"
}

#line 647 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0_3(
#line 647 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 647 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 647 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 647 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 647 "read_profile.m"
{
#line 647 "read_profile.m"
  {
#line 647 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 647 "read_profile.m"
    MR_Word read_profile__conv2_MaybeStr_4;

#line 647 "read_profile.m"
    {
#line 647 "read_profile.m"
      read_profile__read_string_3_p_0(&read_profile__conv2_MaybeStr_4);
    }
#line 647 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv2_MaybeStr_4));
#line 647 "read_profile.m"
  }
#line 647 "read_profile.m"
}

#line 646 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0_2(
#line 646 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 646 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 646 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 646 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 646 "read_profile.m"
{
#line 646 "read_profile.m"
  {
#line 646 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 646 "read_profile.m"
    MR_Word read_profile__conv1_MaybeStr_4;

#line 646 "read_profile.m"
    {
#line 646 "read_profile.m"
      read_profile__read_string_3_p_0(&read_profile__conv1_MaybeStr_4);
    }
#line 646 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeStr_4));
#line 646 "read_profile.m"
  }
#line 646 "read_profile.m"
}

#line 645 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0_1(
#line 645 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 645 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 645 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 645 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 645 "read_profile.m"
{
#line 645 "read_profile.m"
  {
#line 645 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 645 "read_profile.m"
    MR_Word read_profile__conv0_MaybeStr_4;

#line 645 "read_profile.m"
    {
#line 645 "read_profile.m"
      read_profile__read_string_3_p_0(&read_profile__conv0_MaybeStr_4);
    }
#line 645 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybeStr_4));
#line 645 "read_profile.m"
  }
#line 645 "read_profile.m"
}

#line 613 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_id_3_p_0(
#line 613 "read_profile.m"
  MR_Word * read_profile__MaybeProcId_4)
#line 613 "read_profile.m"
{
#line 616 "read_profile.m"
  {
#line 616 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 616 "read_profile.m"
    MR_Word read_profile__MaybeByte_6;

#line 617 "read_profile.m"
    {
#line 617 "read_profile.m"
      read_profile__read_deep_byte_3_p_0(&read_profile__MaybeByte_6);
    }
#line 635 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybeByte_6)) == (MR_mktag((MR_Integer) 1))))
#line 637 "read_profile.m"
      *read_profile__MaybeProcId_4 = (MR_Word) read_profile__MaybeByte_6;
#line 635 "read_profile.m"
    else
#line 619 "read_profile.m"
      {
#line 619 "read_profile.m"
        MR_Integer read_profile__Byte_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeByte_6, (MR_Integer) 0)));
#line 631 "read_profile.m"
        MR_Word read_profile__ProcLabelKind_8;

#line 620 "read_profile.m"
        {
#line 620 "read_profile.m"
          read_profile__succeeded = mdbcomp__program_representation__is_proclabel_kind_2_p_0(read_profile__Byte_7, &read_profile__ProcLabelKind_8);
        }
#line 631 "read_profile.m"
        if (read_profile__succeeded)
#line 624 "read_profile.m"
          if ((read_profile__ProcLabelKind_8 == ((int) MR_proclabel_special)))
#line 643 "read_profile.m"
            {
#line 643 "read_profile.m"
              MR_Word read_profile__TypeCtorInfo_56_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 643 "read_profile.m"
              MR_Word read_profile__TypeCtorInfo_57_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 644 "read_profile.m"
              {
#line 644 "read_profile.m"
                io_combinator__maybe_error_sequence_6_10_p_0(read_profile__TypeCtorInfo_56_83, read_profile__TypeCtorInfo_56_83, read_profile__TypeCtorInfo_56_83, read_profile__TypeCtorInfo_56_83, read_profile__TypeCtorInfo_57_84, read_profile__TypeCtorInfo_57_84, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0, (MR_Word) &read_profile_scalar_common_4[25], (MR_Word) &read_profile_scalar_common_4[26], (MR_Word) &read_profile_scalar_common_4[27], (MR_Word) &read_profile_scalar_common_4[28], (MR_Word) &read_profile_scalar_common_4[29], (MR_Word) &read_profile_scalar_common_4[30], (MR_Word) &read_profile_scalar_common_4[31], read_profile__MaybeProcId_4);
#line 644 "read_profile.m"
                return;
              }
#line 643 "read_profile.m"
            }
#line 624 "read_profile.m"
          else
#line 624 "read_profile.m"
            if ((read_profile__ProcLabelKind_8 == ((int) MR_proclabel_user_function)))
#line 628 "read_profile.m"
              {
#line 629 "read_profile.m"
                {
#line 629 "read_profile.m"
                  read_profile__read_proc_id_user_defined_4_p_0((MR_Integer) 1, read_profile__MaybeProcId_4);
#line 629 "read_profile.m"
                  return;
                }
#line 628 "read_profile.m"
              }
#line 624 "read_profile.m"
            else
#line 625 "read_profile.m"
              {
#line 626 "read_profile.m"
                {
#line 626 "read_profile.m"
                  read_profile__read_proc_id_user_defined_4_p_0((MR_Integer) 0, read_profile__MaybeProcId_4);
#line 626 "read_profile.m"
                  return;
                }
#line 625 "read_profile.m"
              }
#line 631 "read_profile.m"
        else
#line 632 "read_profile.m"
          {
#line 632 "read_profile.m"
            MR_String read_profile__Msg_9;
#line 632 "read_profile.m"
            MR_String read_profile__V_23_23;

#line 632 "read_profile.m"
            {
#line 632 "read_profile.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &read_profile_scalar_common_9[2], read_profile__Byte_7, &read_profile__V_23_23);
            }
#line 632 "read_profile.m"
            {
#line 632 "read_profile.m"
              read_profile__Msg_9 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected proclabel_kind ", read_profile__V_23_23);
            }
#line 633 "read_profile.m"
            {
#line 633 "read_profile.m"
              MR_Word base;
#line 633 "read_profile.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 633 "read_profile.m"
              *read_profile__MaybeProcId_4 = base;
#line 633 "read_profile.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Msg_9));
#line 633 "read_profile.m"
            }
#line 632 "read_profile.m"
          }
#line 619 "read_profile.m"
      }
#line 616 "read_profile.m"
  }
#line 613 "read_profile.m"
}

#line 584 "read_profile.m"
static void MR_CALL 
read_profile__maybe_read_pd_coverage_points_4_p_0(
#line 584 "read_profile.m"
  MR_Word read_profile__ProfileStats_5,
#line 584 "read_profile.m"
  MR_Word * read_profile__MaybeCoveragePoints_6)
#line 584 "read_profile.m"
{
#line 587 "read_profile.m"
  {
#line 587 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 587 "read_profile.m"
    MR_Word read_profile__CoverageDataType_8;
#line 587 "read_profile.m"
    MR_Word read_profile__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 9)));
#line 588 "read_profile.m"
    MR_String read_profile__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 0)));
#line 588 "read_profile.m"
    MR_Integer read_profile__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 1)));
#line 588 "read_profile.m"
    MR_Integer read_profile__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 2)));
#line 588 "read_profile.m"
    MR_Integer read_profile__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 3)));
#line 588 "read_profile.m"
    MR_Integer read_profile__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 4)));
#line 588 "read_profile.m"
    MR_Integer read_profile__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 5)));
#line 588 "read_profile.m"
    MR_Integer read_profile__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 6)));
#line 588 "read_profile.m"
    MR_Integer read_profile__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 7)));
#line 588 "read_profile.m"
    MR_Integer read_profile__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 8)));
#line 588 "read_profile.m"
    MR_Integer read_profile__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_16_16, (MR_Integer) 0)));
#line 588 "read_profile.m"
    MR_Word read_profile__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_16_16, (MR_Integer) 1)));

#line 588 "read_profile.m"
    read_profile__CoverageDataType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_16_16, (MR_Integer) 3)));
#line 594 "read_profile.m"
    if ((read_profile__CoverageDataType_8 == (MR_Integer) 2))
#line 595 "read_profile.m"
      {
#line 595 "read_profile.m"
        MR_Word read_profile__ResN_9;

#line 1370 "read_profile.m"
        {
#line 1370 "read_profile.m"
          read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__ResN_9);
        }
#line 607 "read_profile.m"
        if (((MR_tag((MR_Word) read_profile__ResN_9)) == (MR_mktag((MR_Integer) 1))))
#line 609 "read_profile.m"
          *read_profile__MaybeCoveragePoints_6 = (MR_Word) read_profile__ResN_9;
#line 607 "read_profile.m"
        else
#line 598 "read_profile.m"
          {
#line 598 "read_profile.m"
            MR_Integer read_profile__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ResN_9, (MR_Integer) 0)));
#line 598 "read_profile.m"
            MR_Word read_profile__MaybeRevItems_61;

#line 1221 "read_profile.m"
            {
#line 1221 "read_profile.m"
              read_profile__read_n_things__ho8_6_p_0(read_profile__N_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__MaybeRevItems_61);
            }
#line 10962 "read_profile.c"
            if (((MR_tag((MR_Word) read_profile__MaybeRevItems_61)) == (MR_mktag((MR_Integer) 1))))
#line 605 "read_profile.m"
              *read_profile__MaybeCoveragePoints_6 = (MR_Word) read_profile__MaybeRevItems_61;
#line 10966 "read_profile.c"
            else
#line 10968 "read_profile.c"
              {
#line 10970 "read_profile.c"
                MR_Word read_profile__CPsList_12;
#line 10972 "read_profile.c"
                MR_Word read_profile__V_20_20;
#line 10974 "read_profile.c"
                MR_ArrayPtr read_profile__V_21_21;
#line 10976 "read_profile.c"
                MR_Word read_profile__RevItems_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeRevItems_61, (MR_Integer) 0)));
#line 602 "read_profile.m"
                MR_ArrayPtr read_profile__conv0_V_21_21;

#line 1224 "read_profile.m"
                {
#line 1224 "read_profile.m"
                  mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__RevItems_62, &read_profile__CPsList_12);
                }
#line 602 "read_profile.m"
                {
#line 602 "read_profile.m"
                  read_profile__conv0_V_21_21 = mercury__array__array_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__CPsList_12);
                }
#line 602 "read_profile.m"
                read_profile__V_21_21 = (MR_ArrayPtr) read_profile__conv0_V_21_21;
#line 602 "read_profile.m"
                {
#line 602 "read_profile.m"
                  read_profile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 602 "read_profile.m"
                  MR_hl_field(MR_mktag(1), read_profile__V_20_20, 0) = ((MR_Box) (read_profile__V_21_21));
#line 602 "read_profile.m"
                }
#line 602 "read_profile.m"
                {
#line 602 "read_profile.m"
                  MR_Word base;
#line 602 "read_profile.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 602 "read_profile.m"
                  *read_profile__MaybeCoveragePoints_6 = base;
#line 602 "read_profile.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_20_20));
#line 602 "read_profile.m"
                }
#line 11013 "read_profile.c"
              }
#line 598 "read_profile.m"
          }
#line 595 "read_profile.m"
      }
#line 594 "read_profile.m"
    else
#line 592 "read_profile.m"
      {
#line 593 "read_profile.m"
        *read_profile__MaybeCoveragePoints_6 = (MR_Word) &read_profile_scalar_common_9[3];
#line 592 "read_profile.m"
      }
#line 587 "read_profile.m"
  }
#line 584 "read_profile.m"
}

#line 577 "read_profile.m"
static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0_2(
#line 577 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 577 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1)
#line 577 "read_profile.m"
{
#line 577 "read_profile.m"
  {
#line 577 "read_profile.m"
    MR_Box read_profile__wrapper_arg_2;
#line 577 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 577 "read_profile.m"
    MR_ArrayPtr read_profile__conv3_HeadVar__2_74;

#line 577 "read_profile.m"
    {
#line 577 "read_profile.m"
      read_profile__conv3_HeadVar__2_74 = read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_f_0(((MR_Word) read_profile__wrapper_arg_1));
    }
#line 577 "read_profile.m"
    read_profile__wrapper_arg_2 = ((MR_Box) (read_profile__conv3_HeadVar__2_74));
#line 577 "read_profile.m"
    return read_profile__wrapper_arg_2;
#line 577 "read_profile.m"
  }
#line 577 "read_profile.m"
}

#line 577 "read_profile.m"
static MR_Box MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0_1(
#line 577 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 577 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1)
#line 577 "read_profile.m"
{
#line 577 "read_profile.m"
  {
#line 577 "read_profile.m"
    MR_Box read_profile__wrapper_arg_2;
#line 577 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 577 "read_profile.m"
    MR_ArrayPtr read_profile__conv1_HeadVar__2_74;

#line 577 "read_profile.m"
    {
#line 577 "read_profile.m"
      read_profile__conv1_HeadVar__2_74 = read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_f_0(((MR_Word) read_profile__wrapper_arg_1));
    }
#line 577 "read_profile.m"
    read_profile__wrapper_arg_2 = ((MR_Box) (read_profile__conv1_HeadVar__2_74));
#line 577 "read_profile.m"
    return read_profile__wrapper_arg_2;
#line 577 "read_profile.m"
  }
#line 577 "read_profile.m"
}

#line 529 "read_profile.m"
static void MR_CALL 
read_profile__maybe_read_ps_coverage_points_4_p_0(
#line 529 "read_profile.m"
  MR_Word read_profile__ProfileStats_5,
#line 529 "read_profile.m"
  MR_Word * read_profile__MaybeCoveragePoints_6)
#line 529 "read_profile.m"
{
#line 533 "read_profile.m"
  {
#line 533 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 533 "read_profile.m"
    MR_Word read_profile__CoverageDataType_8;
#line 533 "read_profile.m"
    MR_Word read_profile__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 9)));
#line 534 "read_profile.m"
    MR_String read_profile__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 0)));
#line 534 "read_profile.m"
    MR_Integer read_profile__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 1)));
#line 534 "read_profile.m"
    MR_Integer read_profile__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 2)));
#line 534 "read_profile.m"
    MR_Integer read_profile__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 3)));
#line 534 "read_profile.m"
    MR_Integer read_profile__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 4)));
#line 534 "read_profile.m"
    MR_Integer read_profile__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 5)));
#line 534 "read_profile.m"
    MR_Integer read_profile__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 6)));
#line 534 "read_profile.m"
    MR_Integer read_profile__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 7)));
#line 534 "read_profile.m"
    MR_Integer read_profile__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__ProfileStats_5, (MR_Integer) 8)));
#line 534 "read_profile.m"
    MR_Integer read_profile__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_25_25, (MR_Integer) 0)));
#line 534 "read_profile.m"
    MR_Word read_profile__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_25_25, (MR_Integer) 1)));

#line 534 "read_profile.m"
    read_profile__CoverageDataType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_25_25, (MR_Integer) 3)));
#line 11138 "read_profile.c"
    if ((read_profile__CoverageDataType_8 == (MR_Integer) 0))
#line 11140 "read_profile.c"
      {
#line 11142 "read_profile.c"
        MR_ArrayPtr read_profile__CPInfosArray_95;
#line 11144 "read_profile.c"
        MR_Word read_profile__MaybeCPsArray_96;
#line 11146 "read_profile.c"
        MR_Word read_profile__V_99_99;
#line 576 "read_profile.m"
        MR_ArrayPtr read_profile__conv0_CPInfosArray_95;

#line 576 "read_profile.m"
        {
#line 576 "read_profile.m"
          read_profile__conv0_CPInfosArray_95 = mercury__array__array_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 576 "read_profile.m"
        read_profile__CPInfosArray_95 = (MR_ArrayPtr) read_profile__conv0_CPInfosArray_95;
#line 577 "read_profile.m"
        {
#line 577 "read_profile.m"
          read_profile__MaybeCPsArray_96 = mercury__maybe__map_maybe_2_f_0((MR_Word) &read_profile_scalar_common_1[1], (MR_Word) &read_profile_scalar_common_1[2], (MR_Word) &read_profile_scalar_common_4[23], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 578 "read_profile.m"
        {
#line 578 "read_profile.m"
          read_profile__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_99_99, 0) = ((MR_Box) (read_profile__CPInfosArray_95));
#line 578 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_99_99, 1) = ((MR_Box) (read_profile__MaybeCPsArray_96));
#line 578 "read_profile.m"
        }
#line 578 "read_profile.m"
        {
#line 578 "read_profile.m"
          MR_Word base;
#line 578 "read_profile.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 578 "read_profile.m"
          *read_profile__MaybeCoveragePoints_6 = base;
#line 578 "read_profile.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_99_99));
#line 578 "read_profile.m"
        }
#line 11185 "read_profile.c"
      }
#line 11187 "read_profile.c"
    else
#line 11189 "read_profile.c"
      {
#line 11191 "read_profile.c"
        MR_Word read_profile__MaybeCoveragePoints0_9;
#line 11193 "read_profile.c"
        MR_Word read_profile__MaybeNCP_10;

#line 1370 "read_profile.m"
        {
#line 1370 "read_profile.m"
          read_profile__read_num_acc_4_p_0((MR_Integer) 0, &read_profile__MaybeNCP_10);
        }
#line 569 "read_profile.m"
        if (((MR_tag((MR_Word) read_profile__MaybeNCP_10)) == (MR_mktag((MR_Integer) 1))))
#line 571 "read_profile.m"
          read_profile__MaybeCoveragePoints0_9 = (MR_Word) read_profile__MaybeNCP_10;
#line 569 "read_profile.m"
        else
#line 544 "read_profile.m"
          {
#line 544 "read_profile.m"
            MR_Integer read_profile__NCP_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeNCP_10, (MR_Integer) 0)));

#line 557 "read_profile.m"
            if ((read_profile__CoverageDataType_8 == (MR_Integer) 2))
#line 558 "read_profile.m"
              {
#line 558 "read_profile.m"
                MR_Word read_profile__MaybeCPInfos_17;

#line 559 "read_profile.m"
                {
#line 559 "read_profile.m"
                  read_profile__read_n_things__ho2_5_p_0(read_profile__NCP_11, &read_profile__MaybeCPInfos_17);
                }
#line 564 "read_profile.m"
                if (((MR_tag((MR_Word) read_profile__MaybeCPInfos_17)) == (MR_mktag((MR_Integer) 1))))
#line 566 "read_profile.m"
                  read_profile__MaybeCoveragePoints0_9 = (MR_Word) read_profile__MaybeCPInfos_17;
#line 564 "read_profile.m"
                else
#line 562 "read_profile.m"
                  {
#line 562 "read_profile.m"
                    MR_Word read_profile__V_29_29;
#line 562 "read_profile.m"
                    MR_Word read_profile__CPInfos_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCPInfos_17, (MR_Integer) 0)));

#line 563 "read_profile.m"
                    {
#line 563 "read_profile.m"
                      read_profile__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 563 "read_profile.m"
                      MR_hl_field(MR_mktag(0), read_profile__V_29_29, 0) = ((MR_Box) (read_profile__CPInfos_41));
#line 563 "read_profile.m"
                      MR_hl_field(MR_mktag(0), read_profile__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 563 "read_profile.m"
                    }
#line 563 "read_profile.m"
                    {
#line 563 "read_profile.m"
                      read_profile__MaybeCoveragePoints0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 563 "read_profile.m"
                      MR_hl_field(MR_mktag(0), read_profile__MaybeCoveragePoints0_9, 0) = ((MR_Box) (read_profile__V_29_29));
#line 563 "read_profile.m"
                    }
#line 562 "read_profile.m"
                  }
#line 558 "read_profile.m"
              }
#line 557 "read_profile.m"
            else
#line 546 "read_profile.m"
              {
#line 546 "read_profile.m"
                MR_Word read_profile__MaybeCPPairs_12;

#line 547 "read_profile.m"
                {
#line 547 "read_profile.m"
                  read_profile__read_n_things__ho3_5_p_0(read_profile__NCP_11, &read_profile__MaybeCPPairs_12);
                }
#line 553 "read_profile.m"
                if (((MR_tag((MR_Word) read_profile__MaybeCPPairs_12)) == (MR_mktag((MR_Integer) 1))))
#line 555 "read_profile.m"
                  read_profile__MaybeCoveragePoints0_9 = (MR_Word) read_profile__MaybeCPPairs_12;
#line 553 "read_profile.m"
                else
#line 550 "read_profile.m"
                  {
#line 550 "read_profile.m"
                    MR_Word read_profile__CPPairs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCPPairs_12, (MR_Integer) 0)));
#line 550 "read_profile.m"
                    MR_Word read_profile__CPInfos_14;
#line 550 "read_profile.m"
                    MR_Word read_profile__CPs_15;
#line 550 "read_profile.m"
                    MR_Word read_profile__V_33_33;
#line 550 "read_profile.m"
                    MR_Word read_profile__V_34_34;

#line 551 "read_profile.m"
                    {
#line 551 "read_profile.m"
                      mercury__assoc_list__keys_and_values_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, read_profile__CPPairs_13, &read_profile__CPInfos_14, &read_profile__CPs_15);
                    }
#line 552 "read_profile.m"
                    {
#line 552 "read_profile.m"
                      read_profile__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 552 "read_profile.m"
                      MR_hl_field(MR_mktag(1), read_profile__V_34_34, 0) = ((MR_Box) (read_profile__CPs_15));
#line 552 "read_profile.m"
                    }
#line 552 "read_profile.m"
                    {
#line 552 "read_profile.m"
                      read_profile__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 552 "read_profile.m"
                      MR_hl_field(MR_mktag(0), read_profile__V_33_33, 0) = ((MR_Box) (read_profile__CPInfos_14));
#line 552 "read_profile.m"
                      MR_hl_field(MR_mktag(0), read_profile__V_33_33, 1) = ((MR_Box) (read_profile__V_34_34));
#line 552 "read_profile.m"
                    }
#line 552 "read_profile.m"
                    {
#line 552 "read_profile.m"
                      read_profile__MaybeCoveragePoints0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 552 "read_profile.m"
                      MR_hl_field(MR_mktag(0), read_profile__MaybeCoveragePoints0_9, 0) = ((MR_Box) (read_profile__V_33_33));
#line 552 "read_profile.m"
                    }
#line 550 "read_profile.m"
                  }
#line 546 "read_profile.m"
              }
#line 544 "read_profile.m"
          }
#line 579 "read_profile.m"
        if (((MR_tag((MR_Word) read_profile__MaybeCoveragePoints0_9)) == (MR_mktag((MR_Integer) 1))))
#line 581 "read_profile.m"
          *read_profile__MaybeCoveragePoints_6 = (MR_Word) read_profile__MaybeCoveragePoints0_9;
#line 579 "read_profile.m"
        else
#line 575 "read_profile.m"
          {
#line 575 "read_profile.m"
            MR_Word read_profile__CPInfosList_18;
#line 575 "read_profile.m"
            MR_Word read_profile__MaybeCPsList_19;
#line 575 "read_profile.m"
            MR_ArrayPtr read_profile__CPInfosArray_20;
#line 575 "read_profile.m"
            MR_Word read_profile__MaybeCPsArray_21;
#line 575 "read_profile.m"
            MR_Word read_profile__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCoveragePoints0_9, (MR_Integer) 0)));
#line 575 "read_profile.m"
            MR_Word read_profile__V_40_40;
#line 576 "read_profile.m"
            MR_ArrayPtr read_profile__conv2_CPInfosArray_20;

#line 575 "read_profile.m"
            read_profile__CPInfosList_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_38_38, (MR_Integer) 0)));
#line 575 "read_profile.m"
            read_profile__MaybeCPsList_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_38_38, (MR_Integer) 1)));
#line 576 "read_profile.m"
            {
#line 576 "read_profile.m"
              read_profile__conv2_CPInfosArray_20 = mercury__array__array_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, read_profile__CPInfosList_18);
            }
#line 576 "read_profile.m"
            read_profile__CPInfosArray_20 = (MR_ArrayPtr) read_profile__conv2_CPInfosArray_20;
#line 577 "read_profile.m"
            {
#line 577 "read_profile.m"
              read_profile__MaybeCPsArray_21 = mercury__maybe__map_maybe_2_f_0((MR_Word) &read_profile_scalar_common_1[1], (MR_Word) &read_profile_scalar_common_1[2], (MR_Word) &read_profile_scalar_common_4[24], read_profile__MaybeCPsList_19);
            }
#line 578 "read_profile.m"
            {
#line 578 "read_profile.m"
              read_profile__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "read_profile.m"
              MR_hl_field(MR_mktag(0), read_profile__V_40_40, 0) = ((MR_Box) (read_profile__CPInfosArray_20));
#line 578 "read_profile.m"
              MR_hl_field(MR_mktag(0), read_profile__V_40_40, 1) = ((MR_Box) (read_profile__MaybeCPsArray_21));
#line 578 "read_profile.m"
            }
#line 578 "read_profile.m"
            {
#line 578 "read_profile.m"
              MR_Word base;
#line 578 "read_profile.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 578 "read_profile.m"
              *read_profile__MaybeCoveragePoints_6 = base;
#line 578 "read_profile.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_40_40));
#line 578 "read_profile.m"
            }
#line 575 "read_profile.m"
          }
#line 11390 "read_profile.c"
      }
#line 533 "read_profile.m"
  }
#line 529 "read_profile.m"
}

#line 492 "read_profile.m"
static MR_Box MR_CALL 
read_profile__read_proc_static_4_p_0_8(
#line 492 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 492 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1)
#line 492 "read_profile.m"
{
#line 492 "read_profile.m"
  {
#line 492 "read_profile.m"
    MR_Box read_profile__wrapper_arg_2;
#line 492 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 492 "read_profile.m"
    MR_Word read_profile__conv7_HeadVar__2_2;

#line 492 "read_profile.m"
    {
#line 492 "read_profile.m"
      read_profile__conv7_HeadVar__2_2 = read_profile__make_cssptr_1_f_0(((MR_Integer) read_profile__wrapper_arg_1));
    }
#line 492 "read_profile.m"
    read_profile__wrapper_arg_2 = ((MR_Box) (read_profile__conv7_HeadVar__2_2));
#line 492 "read_profile.m"
    return read_profile__wrapper_arg_2;
#line 492 "read_profile.m"
  }
#line 492 "read_profile.m"
}

#line 471 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0_7(
#line 471 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 471 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 471 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 471 "read_profile.m"
  MR_Box read_profile__wrapper_arg_3,
#line 471 "read_profile.m"
  MR_Box read_profile__wrapper_arg_4,
#line 471 "read_profile.m"
  MR_Box read_profile__wrapper_arg_5,
#line 471 "read_profile.m"
  MR_Box read_profile__wrapper_arg_6,
#line 471 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_7)
#line 471 "read_profile.m"
{
#line 471 "read_profile.m"
  {
#line 471 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 471 "read_profile.m"
    MR_Word read_profile__conv6_HeadVar__7_56;

#line 471 "read_profile.m"
    {
#line 471 "read_profile.m"
      read_profile__IntroducedFrom__pred__read_proc_static__471__1_7_p_0(((MR_Integer) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2), ((MR_String) read_profile__wrapper_arg_3), ((MR_Integer) read_profile__wrapper_arg_4), ((MR_Integer) read_profile__wrapper_arg_5), ((MR_Integer) read_profile__wrapper_arg_6), &read_profile__conv6_HeadVar__7_56);
    }
#line 471 "read_profile.m"
    *read_profile__wrapper_arg_7 = ((MR_Box) (read_profile__conv6_HeadVar__7_56));
#line 471 "read_profile.m"
  }
#line 471 "read_profile.m"
}

#line 477 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0_6(
#line 477 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 477 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 477 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 477 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 477 "read_profile.m"
{
#line 477 "read_profile.m"
  {
#line 477 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 477 "read_profile.m"
    MR_Word read_profile__conv5_MaybeNum_4;

#line 477 "read_profile.m"
    {
#line 477 "read_profile.m"
      read_profile__read_num_3_p_0(&read_profile__conv5_MaybeNum_4);
    }
#line 477 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv5_MaybeNum_4));
#line 477 "read_profile.m"
  }
#line 477 "read_profile.m"
}

#line 476 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0_5(
#line 476 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 476 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 476 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 476 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 476 "read_profile.m"
{
#line 476 "read_profile.m"
  {
#line 476 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 476 "read_profile.m"
    MR_Word read_profile__conv4_MaybeByte_4;

#line 476 "read_profile.m"
    {
#line 476 "read_profile.m"
      read_profile__read_deep_byte_3_p_0(&read_profile__conv4_MaybeByte_4);
    }
#line 476 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv4_MaybeByte_4));
#line 476 "read_profile.m"
  }
#line 476 "read_profile.m"
}

#line 475 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0_4(
#line 475 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 475 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 475 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 475 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 475 "read_profile.m"
{
#line 475 "read_profile.m"
  {
#line 475 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 475 "read_profile.m"
    MR_Word read_profile__conv3_MaybeNum_4;

#line 475 "read_profile.m"
    {
#line 475 "read_profile.m"
      read_profile__read_num_3_p_0(&read_profile__conv3_MaybeNum_4);
    }
#line 475 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv3_MaybeNum_4));
#line 475 "read_profile.m"
  }
#line 475 "read_profile.m"
}

#line 474 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0_3(
#line 474 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 474 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 474 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 474 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 474 "read_profile.m"
{
#line 474 "read_profile.m"
  {
#line 474 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 474 "read_profile.m"
    MR_Word read_profile__conv2_MaybeStr_4;

#line 474 "read_profile.m"
    {
#line 474 "read_profile.m"
      read_profile__read_string_3_p_0(&read_profile__conv2_MaybeStr_4);
    }
#line 474 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv2_MaybeStr_4));
#line 474 "read_profile.m"
  }
#line 474 "read_profile.m"
}

#line 473 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0_2(
#line 473 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 473 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 473 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 473 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 473 "read_profile.m"
{
#line 473 "read_profile.m"
  {
#line 473 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 473 "read_profile.m"
    MR_Word read_profile__conv1_MaybeProcId_4;

#line 473 "read_profile.m"
    {
#line 473 "read_profile.m"
      read_profile__read_proc_id_3_p_0(&read_profile__conv1_MaybeProcId_4);
    }
#line 473 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeProcId_4));
#line 473 "read_profile.m"
  }
#line 473 "read_profile.m"
}

#line 472 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0_1(
#line 472 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 472 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 472 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 472 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 472 "read_profile.m"
{
#line 472 "read_profile.m"
  {
#line 472 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 472 "read_profile.m"
    MR_Word read_profile__conv0_MaybePtr_6;

#line 472 "read_profile.m"
    {
#line 472 "read_profile.m"
      read_profile__read_ptr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), &read_profile__conv0_MaybePtr_6);
    }
#line 472 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybePtr_6));
#line 472 "read_profile.m"
  }
#line 472 "read_profile.m"
}

#line 464 "read_profile.m"
static void MR_CALL 
read_profile__read_proc_static_4_p_0(
#line 464 "read_profile.m"
  MR_Word read_profile__ProfileStats_5,
#line 464 "read_profile.m"
  MR_Word * read_profile__MaybePS_6)
#line 464 "read_profile.m"
{
#line 467 "read_profile.m"
  {
#line 467 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 467 "read_profile.m"
    MR_Word read_profile__TypeCtorInfo_103_103 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 467 "read_profile.m"
    MR_Word read_profile__MaybeProcId_16;

#line 471 "read_profile.m"
    {
#line 471 "read_profile.m"
      io_combinator__maybe_error_sequence_6_10_p_0(read_profile__TypeCtorInfo_103_103, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, read_profile__TypeCtorInfo_103_103, read_profile__TypeCtorInfo_103_103, read_profile__TypeCtorInfo_103_103, (MR_Word) &read_profile_scalar_common_3[0], (MR_Word) &read_profile_scalar_common_2[4], (MR_Word) &read_profile_scalar_common_4[16], (MR_Word) &read_profile_scalar_common_4[17], (MR_Word) &read_profile_scalar_common_4[18], (MR_Word) &read_profile_scalar_common_4[19], (MR_Word) &read_profile_scalar_common_4[20], (MR_Word) &read_profile_scalar_common_4[21], &read_profile__MaybeProcId_16);
    }
#line 524 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybeProcId_16)) == (MR_mktag((MR_Integer) 1))))
#line 525 "read_profile.m"
      {
#line 525 "read_profile.m"
        MR_String read_profile__Error_84 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeProcId_16, (MR_Integer) 0)));

#line 526 "read_profile.m"
        {
#line 526 "read_profile.m"
          MR_Word base;
#line 526 "read_profile.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 526 "read_profile.m"
          *read_profile__MaybePS_6 = base;
#line 526 "read_profile.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_84));
#line 526 "read_profile.m"
        }
#line 525 "read_profile.m"
      }
#line 524 "read_profile.m"
    else
#line 484 "read_profile.m"
      {
#line 484 "read_profile.m"
        MR_Integer read_profile__PSI_17;
#line 484 "read_profile.m"
        MR_Word read_profile__Id_18;
#line 484 "read_profile.m"
        MR_String read_profile__FileName_19;
#line 484 "read_profile.m"
        MR_Integer read_profile__LineNumber_20;
#line 484 "read_profile.m"
        MR_Integer read_profile__Interface_21;
#line 484 "read_profile.m"
        MR_Integer read_profile__NCS_22;
#line 484 "read_profile.m"
        MR_Word read_profile__MaybeCSSIs_23;
#line 484 "read_profile.m"
        MR_Tuple read_profile__V_58_58 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), read_profile__MaybeProcId_16, (MR_Integer) 0)));

#line 484 "read_profile.m"
        read_profile__PSI_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_58_58, (MR_Integer) 0)));
#line 484 "read_profile.m"
        read_profile__Id_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_58_58, (MR_Integer) 1)));
#line 484 "read_profile.m"
        read_profile__FileName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__V_58_58, (MR_Integer) 2)));
#line 484 "read_profile.m"
        read_profile__LineNumber_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_58_58, (MR_Integer) 3)));
#line 484 "read_profile.m"
        read_profile__Interface_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_58_58, (MR_Integer) 4)));
#line 484 "read_profile.m"
        read_profile__NCS_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_58_58, (MR_Integer) 5)));
#line 485 "read_profile.m"
        {
#line 485 "read_profile.m"
          read_profile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_p_0(read_profile__NCS_22, &read_profile__MaybeCSSIs_23);
        }
#line 520 "read_profile.m"
        if (((MR_tag((MR_Word) read_profile__MaybeCSSIs_23)) == (MR_mktag((MR_Integer) 1))))
#line 521 "read_profile.m"
          {
#line 521 "read_profile.m"
            MR_String read_profile__Error_83 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeCSSIs_23, (MR_Integer) 0)));

#line 522 "read_profile.m"
            {
#line 522 "read_profile.m"
              MR_Word base;
#line 522 "read_profile.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 522 "read_profile.m"
              *read_profile__MaybePS_6 = base;
#line 522 "read_profile.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_83));
#line 522 "read_profile.m"
            }
#line 521 "read_profile.m"
          }
#line 520 "read_profile.m"
        else
#line 487 "read_profile.m"
          {
#line 487 "read_profile.m"
            MR_Word read_profile__CSSIs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSSIs_23, (MR_Integer) 0)));
#line 487 "read_profile.m"
            MR_Word read_profile__MaybeCoveragePoints_25;

#line 488 "read_profile.m"
            {
#line 488 "read_profile.m"
              read_profile__maybe_read_ps_coverage_points_4_p_0(read_profile__ProfileStats_5, &read_profile__MaybeCoveragePoints_25);
            }
#line 516 "read_profile.m"
            if (((MR_tag((MR_Word) read_profile__MaybeCoveragePoints_25)) == (MR_mktag((MR_Integer) 1))))
#line 517 "read_profile.m"
              {
#line 517 "read_profile.m"
                MR_String read_profile__Error_35 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeCoveragePoints_25, (MR_Integer) 0)));

#line 518 "read_profile.m"
                {
#line 518 "read_profile.m"
                  MR_Word base;
#line 518 "read_profile.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 518 "read_profile.m"
                  *read_profile__MaybePS_6 = base;
#line 518 "read_profile.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_35));
#line 518 "read_profile.m"
                }
#line 517 "read_profile.m"
              }
#line 516 "read_profile.m"
            else
#line 491 "read_profile.m"
              {
#line 491 "read_profile.m"
                MR_Word read_profile__TypeCtorInfo_110_110;
#line 491 "read_profile.m"
                MR_ArrayPtr read_profile__CPInfos_26;
#line 491 "read_profile.m"
                MR_Word read_profile__MaybeCPs_27;
#line 491 "read_profile.m"
                MR_Word read_profile__CSSPtrs_28;
#line 491 "read_profile.m"
                MR_String read_profile__DeclModule_29;
#line 491 "read_profile.m"
                MR_String read_profile__UnQualRefinedStr_30;
#line 491 "read_profile.m"
                MR_String read_profile__QualRefinedStr_31;
#line 491 "read_profile.m"
                MR_String read_profile__RawStr_32;
#line 491 "read_profile.m"
                MR_Word read_profile__IsInInterface_33;
#line 491 "read_profile.m"
                MR_Word read_profile__ProcStatic_34;
#line 491 "read_profile.m"
                MR_Word read_profile__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCoveragePoints_25, (MR_Integer) 0)));
#line 491 "read_profile.m"
                MR_ArrayPtr read_profile__V_65_65;
#line 507 "read_profile.m"
                MR_ArrayPtr read_profile__conv8_V_65_65;

#line 491 "read_profile.m"
                read_profile__CPInfos_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__V_63_63, (MR_Integer) 0)));
#line 491 "read_profile.m"
                read_profile__MaybeCPs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_63_63, (MR_Integer) 1)));
#line 11834 "read_profile.c"
                read_profile__TypeCtorInfo_110_110 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
#line 492 "read_profile.m"
                {
#line 492 "read_profile.m"
                  read_profile__CSSPtrs_28 = mercury__list__map_2_f_0(read_profile__TypeCtorInfo_103_103, read_profile__TypeCtorInfo_110_110, (MR_Word) &read_profile_scalar_common_4[22], read_profile__CSSIs_24);
                }
#line 493 "read_profile.m"
                {
#line 493 "read_profile.m"
                  read_profile__DeclModule_29 = profile__decl_module_1_f_0(read_profile__Id_18);
                }
#line 494 "read_profile.m"
                {
#line 494 "read_profile.m"
                  read_profile__create_refined_proc_ids_3_p_0(read_profile__Id_18, &read_profile__UnQualRefinedStr_30, &read_profile__QualRefinedStr_31);
                }
#line 495 "read_profile.m"
                {
#line 495 "read_profile.m"
                  read_profile__RawStr_32 = read_profile__raw_proc_id_to_string_1_f_0(read_profile__Id_18);
                }
#line 496 "read_profile.m"
                read_profile__succeeded = (read_profile__Interface_21 == (MR_Integer) 0);
#line 498 "read_profile.m"
                if (read_profile__succeeded)
#line 497 "read_profile.m"
                  read_profile__IsInInterface_33 = (MR_Integer) 0;
#line 498 "read_profile.m"
                else
#line 499 "read_profile.m"
                  read_profile__IsInInterface_33 = (MR_Integer) 1;
#line 507 "read_profile.m"
                {
#line 507 "read_profile.m"
                  read_profile__conv8_V_65_65 = mercury__array__array_1_f_0(read_profile__TypeCtorInfo_110_110, read_profile__CSSPtrs_28);
                }
#line 507 "read_profile.m"
                read_profile__V_65_65 = (MR_ArrayPtr) read_profile__conv8_V_65_65;
#line 504 "read_profile.m"
                {
#line 504 "read_profile.m"
                  read_profile__ProcStatic_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 504 "read_profile.m"
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 0) = ((MR_Box) (read_profile__Id_18));
#line 504 "read_profile.m"
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 1) = ((MR_Box) (read_profile__DeclModule_29));
#line 504 "read_profile.m"
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 2) = ((MR_Box) (read_profile__UnQualRefinedStr_30));
#line 504 "read_profile.m"
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 3) = ((MR_Box) (read_profile__QualRefinedStr_31));
#line 504 "read_profile.m"
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 4) = ((MR_Box) (read_profile__RawStr_32));
#line 504 "read_profile.m"
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 5) = ((MR_Box) (read_profile__FileName_19));
#line 504 "read_profile.m"
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 6) = ((MR_Box) (read_profile__LineNumber_20));
#line 504 "read_profile.m"
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 7) = ((MR_Box) (read_profile__IsInInterface_33));
#line 504 "read_profile.m"
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 8) = ((MR_Box) (read_profile__V_65_65));
#line 504 "read_profile.m"
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 9) = ((MR_Box) (read_profile__CPInfos_26));
#line 504 "read_profile.m"
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 10) = ((MR_Box) (read_profile__MaybeCPs_27));
#line 504 "read_profile.m"
                  MR_hl_field(MR_mktag(0), read_profile__ProcStatic_34, 11) = ((MR_Box) ((MR_Integer) 1));
#line 504 "read_profile.m"
                }
#line 508 "read_profile.m"
                {
#line 508 "read_profile.m"
                  MR_Word base;
#line 508 "read_profile.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 508 "read_profile.m"
                  *read_profile__MaybePS_6 = base;
#line 508 "read_profile.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__ProcStatic_34));
#line 508 "read_profile.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (read_profile__PSI_17));
#line 508 "read_profile.m"
                }
#line 491 "read_profile.m"
              }
#line 487 "read_profile.m"
          }
#line 484 "read_profile.m"
      }
#line 467 "read_profile.m"
  }
#line 464 "read_profile.m"
}

#line 435 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_static_3_p_0_5(
#line 435 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 435 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 435 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 435 "read_profile.m"
  MR_Box read_profile__wrapper_arg_3,
#line 435 "read_profile.m"
  MR_Box read_profile__wrapper_arg_4,
#line 435 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_5)
#line 435 "read_profile.m"
{
#line 435 "read_profile.m"
  {
#line 435 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 435 "read_profile.m"
    MR_Word read_profile__conv4_HeadVar__5_36;

#line 435 "read_profile.m"
    {
#line 435 "read_profile.m"
      read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_p_0(((MR_Integer) read_profile__wrapper_arg_1), ((MR_Word) read_profile__wrapper_arg_2), ((MR_Integer) read_profile__wrapper_arg_3), ((MR_String) read_profile__wrapper_arg_4), &read_profile__conv4_HeadVar__5_36);
    }
#line 435 "read_profile.m"
    *read_profile__wrapper_arg_5 = ((MR_Box) (read_profile__conv4_HeadVar__5_36));
#line 435 "read_profile.m"
  }
#line 435 "read_profile.m"
}

#line 439 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_static_3_p_0_4(
#line 439 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 439 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 439 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 439 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 439 "read_profile.m"
{
#line 439 "read_profile.m"
  {
#line 439 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 439 "read_profile.m"
    MR_Word read_profile__conv3_MaybeStr_4;

#line 439 "read_profile.m"
    {
#line 439 "read_profile.m"
      read_profile__read_string_3_p_0(&read_profile__conv3_MaybeStr_4);
    }
#line 439 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv3_MaybeStr_4));
#line 439 "read_profile.m"
  }
#line 439 "read_profile.m"
}

#line 438 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_static_3_p_0_3(
#line 438 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 438 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 438 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 438 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 438 "read_profile.m"
{
#line 438 "read_profile.m"
  {
#line 438 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 438 "read_profile.m"
    MR_Word read_profile__conv2_MaybeNum_4;

#line 438 "read_profile.m"
    {
#line 438 "read_profile.m"
      read_profile__read_num_3_p_0(&read_profile__conv2_MaybeNum_4);
    }
#line 438 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv2_MaybeNum_4));
#line 438 "read_profile.m"
  }
#line 438 "read_profile.m"
}

#line 437 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_static_3_p_0_2(
#line 437 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 437 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 437 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 437 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 437 "read_profile.m"
{
#line 437 "read_profile.m"
  {
#line 437 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 437 "read_profile.m"
    MR_Word read_profile__conv1_MaybeKindAndCallee_4;

#line 437 "read_profile.m"
    {
#line 437 "read_profile.m"
      read_profile__read_call_site_kind_and_callee_3_p_0(&read_profile__conv1_MaybeKindAndCallee_4);
    }
#line 437 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeKindAndCallee_4));
#line 437 "read_profile.m"
  }
#line 437 "read_profile.m"
}

#line 436 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_static_3_p_0_1(
#line 436 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 436 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 436 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 436 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 436 "read_profile.m"
{
#line 436 "read_profile.m"
  {
#line 436 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 436 "read_profile.m"
    MR_Word read_profile__conv0_MaybePtr_6;

#line 436 "read_profile.m"
    {
#line 436 "read_profile.m"
      read_profile__read_ptr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), &read_profile__conv0_MaybePtr_6);
    }
#line 436 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybePtr_6));
#line 436 "read_profile.m"
  }
#line 436 "read_profile.m"
}

#line 428 "read_profile.m"
static void MR_CALL 
read_profile__read_call_site_static_3_p_0(
#line 428 "read_profile.m"
  MR_Word * read_profile__MaybeCSS_4)
#line 428 "read_profile.m"
{
#line 431 "read_profile.m"
  {
#line 431 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 431 "read_profile.m"
    MR_Word read_profile__TypeCtorInfo_65_65 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 435 "read_profile.m"
    {
#line 435 "read_profile.m"
      io_combinator__maybe_error_sequence_4_8_p_0(read_profile__TypeCtorInfo_65_65, (MR_Word) &read_profile_scalar_common_1[0], read_profile__TypeCtorInfo_65_65, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &read_profile_scalar_common_2[0], (MR_Word) &read_profile_scalar_common_2[3], (MR_Word) &read_profile_scalar_common_4[12], (MR_Word) &read_profile_scalar_common_4[13], (MR_Word) &read_profile_scalar_common_4[14], (MR_Word) &read_profile_scalar_common_4[15], read_profile__MaybeCSS_4);
#line 435 "read_profile.m"
      return;
    }
#line 431 "read_profile.m"
  }
#line 428 "read_profile.m"
}

#line 349 "read_profile.m"
static void MR_CALL 
read_profile__read_nodes_3_5_p_0(
#line 349 "read_profile.m"
  MR_Integer read_profile__Depth_6,
#line 349 "read_profile.m"
  MR_Word read_profile__STATE_VARIABLE_InitDeep_0_36,
#line 349 "read_profile.m"
  MR_Word * read_profile__MaybeInitDeep_8)
#line 349 "read_profile.m"
{
#line 352 "read_profile.m"
  {
#line 352 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 352 "read_profile.m"
    MR_Word read_profile__ProfileStats_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
#line 352 "read_profile.m"
    MR_Word read_profile__MaybeByte_11;
#line 353 "read_profile.m"
    MR_Word read_profile__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
#line 353 "read_profile.m"
    MR_ArrayPtr read_profile__V_94_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
#line 353 "read_profile.m"
    MR_ArrayPtr read_profile__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
#line 353 "read_profile.m"
    MR_ArrayPtr read_profile__V_96_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
#line 353 "read_profile.m"
    MR_ArrayPtr read_profile__V_97_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));

#line 354 "read_profile.m"
    {
#line 354 "read_profile.m"
      mercury__io__read_byte_3_p_0(&read_profile__MaybeByte_11);
    }
#line 418 "read_profile.m"
    if ((read_profile__MaybeByte_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 421 "read_profile.m"
      *read_profile__MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) read_profile__STATE_VARIABLE_InitDeep_0_36);
#line 418 "read_profile.m"
    else
#line 418 "read_profile.m"
      if (((MR_tag((MR_Word) read_profile__MaybeByte_11)) == (MR_mktag((MR_Integer) 2))))
#line 423 "read_profile.m"
        {
#line 423 "read_profile.m"
          MR_Word read_profile__Error_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), read_profile__MaybeByte_11, (MR_Integer) 0)));
#line 423 "read_profile.m"
          MR_String read_profile__Msg_91;

#line 424 "read_profile.m"
          {
#line 424 "read_profile.m"
            mercury__io__error_message_2_p_0(read_profile__Error_90, &read_profile__Msg_91);
          }
#line 425 "read_profile.m"
          {
#line 425 "read_profile.m"
            MR_Word base;
#line 425 "read_profile.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 425 "read_profile.m"
            *read_profile__MaybeInitDeep_8 = base;
#line 425 "read_profile.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (read_profile__Msg_91));
#line 425 "read_profile.m"
          }
#line 423 "read_profile.m"
        }
#line 418 "read_profile.m"
      else
#line 356 "read_profile.m"
        {
#line 356 "read_profile.m"
          MR_Integer read_profile__Byte_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), read_profile__MaybeByte_11, (MR_Integer) 0)));
#line 414 "read_profile.m"
          MR_Word read_profile__NextItem_13;

#line 357 "read_profile.m"
          {
#line 357 "read_profile.m"
            read_profile__succeeded = read_profile__is_next_item_token_2_p_0(read_profile__Byte_12, &read_profile__NextItem_13);
          }
#line 414 "read_profile.m"
          if (read_profile__succeeded)
#line 371 "read_profile.m"
            if ((read_profile__NextItem_13 == ((int) MR_deep_item_call_site_dynamic)))
#line 359 "read_profile.m"
              {
#line 359 "read_profile.m"
                MR_Word read_profile__MaybeCSD_14;

#line 360 "read_profile.m"
                {
#line 360 "read_profile.m"
                  read_profile__read_call_site_dynamic_3_p_0(&read_profile__MaybeCSD_14);
                }
#line 367 "read_profile.m"
                if (((MR_tag((MR_Word) read_profile__MaybeCSD_14)) == (MR_mktag((MR_Integer) 1))))
#line 368 "read_profile.m"
                  {
#line 368 "read_profile.m"
                    MR_String read_profile__Error_19 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeCSD_14, (MR_Integer) 0)));

#line 369 "read_profile.m"
                    {
#line 369 "read_profile.m"
                      MR_Word base;
#line 369 "read_profile.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 369 "read_profile.m"
                      *read_profile__MaybeInitDeep_8 = base;
#line 369 "read_profile.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (read_profile__Error_19));
#line 369 "read_profile.m"
                    }
#line 368 "read_profile.m"
                  }
#line 367 "read_profile.m"
                else
#line 362 "read_profile.m"
                  {
#line 362 "read_profile.m"
                    MR_Word read_profile__CallSiteDynamic_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSD_14, (MR_Integer) 0)));
#line 362 "read_profile.m"
                    MR_Integer read_profile__CSDI_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSD_14, (MR_Integer) 1)));
#line 362 "read_profile.m"
                    MR_ArrayPtr read_profile__CSDs0_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
#line 362 "read_profile.m"
                    MR_ArrayPtr read_profile__CSDs_18;
#line 362 "read_profile.m"
                    MR_Word read_profile__STATE_VARIABLE_InitDeep_51_51;
#line 363 "read_profile.m"
                    MR_Word read_profile__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
#line 363 "read_profile.m"
                    MR_Word read_profile__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
#line 363 "read_profile.m"
                    MR_ArrayPtr read_profile__V_100_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
#line 363 "read_profile.m"
                    MR_ArrayPtr read_profile__V_101_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
#line 363 "read_profile.m"
                    MR_ArrayPtr read_profile__V_102_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
#line 364 "read_profile.m"
                    MR_ArrayPtr read_profile__conv0_CSDs_18;
#line 365 "read_profile.m"
                    MR_Word read_profile__V_103_103;
#line 365 "read_profile.m"
                    MR_Word read_profile__V_104_104;
#line 365 "read_profile.m"
                    MR_ArrayPtr read_profile__V_106_106;
#line 365 "read_profile.m"
                    MR_ArrayPtr read_profile__V_107_107;
#line 365 "read_profile.m"
                    MR_ArrayPtr read_profile__V_108_108;
#line 365 "read_profile.m"
                    MR_ArrayPtr read_profile__V_105_105;

#line 364 "read_profile.m"
                    {
#line 364 "read_profile.m"
                      read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) read_profile__CSDs0_17, read_profile__CSDI_16, ((MR_Box) (read_profile__CallSiteDynamic_15)), &read_profile__conv0_CSDs_18);
                    }
#line 364 "read_profile.m"
                    read_profile__CSDs_18 = (MR_ArrayPtr) read_profile__conv0_CSDs_18;
#line 365 "read_profile.m"
                    read_profile__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
#line 365 "read_profile.m"
                    read_profile__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
#line 365 "read_profile.m"
                    read_profile__V_105_105 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
#line 365 "read_profile.m"
                    read_profile__V_106_106 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
#line 365 "read_profile.m"
                    read_profile__V_107_107 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
#line 365 "read_profile.m"
                    read_profile__V_108_108 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
#line 365 "read_profile.m"
                    {
#line 365 "read_profile.m"
                      read_profile__STATE_VARIABLE_InitDeep_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 365 "read_profile.m"
                      MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_51, 0) = ((MR_Box) (read_profile__V_103_103));
#line 365 "read_profile.m"
                      MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_51, 1) = ((MR_Box) (read_profile__V_104_104));
#line 365 "read_profile.m"
                      MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_51, 2) = ((MR_Box) (read_profile__CSDs_18));
#line 365 "read_profile.m"
                      MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_51, 3) = ((MR_Box) (read_profile__V_106_106));
#line 365 "read_profile.m"
                      MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_51, 4) = ((MR_Box) (read_profile__V_107_107));
#line 365 "read_profile.m"
                      MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_51, 5) = ((MR_Box) (read_profile__V_108_108));
#line 365 "read_profile.m"
                    }
#line 366 "read_profile.m"
                    {
#line 366 "read_profile.m"
                      read_profile__read_nodes_2_5_p_0(read_profile__Depth_6, read_profile__STATE_VARIABLE_InitDeep_51_51, read_profile__MaybeInitDeep_8);
#line 366 "read_profile.m"
                      return;
                    }
#line 362 "read_profile.m"
                  }
#line 359 "read_profile.m"
              }
#line 371 "read_profile.m"
            else
#line 371 "read_profile.m"
              if ((read_profile__NextItem_13 == ((int) MR_deep_item_call_site_static)))
#line 385 "read_profile.m"
                {
#line 385 "read_profile.m"
                  MR_Word read_profile__MaybeCSS_25;

#line 386 "read_profile.m"
                  {
#line 386 "read_profile.m"
                    read_profile__read_call_site_static_3_p_0(&read_profile__MaybeCSS_25);
                  }
#line 393 "read_profile.m"
                  if (((MR_tag((MR_Word) read_profile__MaybeCSS_25)) == (MR_mktag((MR_Integer) 1))))
#line 394 "read_profile.m"
                    {
#line 394 "read_profile.m"
                      MR_String read_profile__Error_69 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybeCSS_25, (MR_Integer) 0)));

#line 395 "read_profile.m"
                      {
#line 395 "read_profile.m"
                        MR_Word base;
#line 395 "read_profile.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 395 "read_profile.m"
                        *read_profile__MaybeInitDeep_8 = base;
#line 395 "read_profile.m"
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (read_profile__Error_69));
#line 395 "read_profile.m"
                      }
#line 394 "read_profile.m"
                    }
#line 393 "read_profile.m"
                  else
#line 388 "read_profile.m"
                    {
#line 388 "read_profile.m"
                      MR_Word read_profile__CallSiteStatic_26;
#line 388 "read_profile.m"
                      MR_Integer read_profile__CSSI_27;
#line 388 "read_profile.m"
                      MR_ArrayPtr read_profile__CSSs0_28;
#line 388 "read_profile.m"
                      MR_ArrayPtr read_profile__CSSs_29;
#line 388 "read_profile.m"
                      MR_Tuple read_profile__V_44_44 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), read_profile__MaybeCSS_25, (MR_Integer) 0)));
#line 388 "read_profile.m"
                      MR_Word read_profile__STATE_VARIABLE_InitDeep_51_67;
#line 389 "read_profile.m"
                      MR_Word read_profile__V_120_120;
#line 389 "read_profile.m"
                      MR_Word read_profile__V_121_121;
#line 389 "read_profile.m"
                      MR_ArrayPtr read_profile__V_122_122;
#line 389 "read_profile.m"
                      MR_ArrayPtr read_profile__V_123_123;
#line 389 "read_profile.m"
                      MR_ArrayPtr read_profile__V_124_124;
#line 390 "read_profile.m"
                      MR_ArrayPtr read_profile__conv1_CSSs_29;
#line 391 "read_profile.m"
                      MR_Word read_profile__V_125_125;
#line 391 "read_profile.m"
                      MR_Word read_profile__V_126_126;
#line 391 "read_profile.m"
                      MR_ArrayPtr read_profile__V_127_127;
#line 391 "read_profile.m"
                      MR_ArrayPtr read_profile__V_128_128;
#line 391 "read_profile.m"
                      MR_ArrayPtr read_profile__V_130_130;
#line 391 "read_profile.m"
                      MR_ArrayPtr read_profile__V_129_129;

#line 388 "read_profile.m"
                      read_profile__CallSiteStatic_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__V_44_44, (MR_Integer) 0)));
#line 388 "read_profile.m"
                      read_profile__CSSI_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__V_44_44, (MR_Integer) 1)));
#line 389 "read_profile.m"
                      read_profile__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
#line 389 "read_profile.m"
                      read_profile__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
#line 389 "read_profile.m"
                      read_profile__V_122_122 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
#line 389 "read_profile.m"
                      read_profile__V_123_123 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
#line 389 "read_profile.m"
                      read_profile__CSSs0_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
#line 389 "read_profile.m"
                      read_profile__V_124_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
#line 390 "read_profile.m"
                      {
#line 390 "read_profile.m"
                        read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_ArrayPtr) read_profile__CSSs0_28, read_profile__CSSI_27, ((MR_Box) (read_profile__CallSiteStatic_26)), &read_profile__conv1_CSSs_29);
                      }
#line 390 "read_profile.m"
                      read_profile__CSSs_29 = (MR_ArrayPtr) read_profile__conv1_CSSs_29;
#line 391 "read_profile.m"
                      read_profile__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
#line 391 "read_profile.m"
                      read_profile__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
#line 391 "read_profile.m"
                      read_profile__V_127_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
#line 391 "read_profile.m"
                      read_profile__V_128_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
#line 391 "read_profile.m"
                      read_profile__V_129_129 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
#line 391 "read_profile.m"
                      read_profile__V_130_130 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
#line 391 "read_profile.m"
                      {
#line 391 "read_profile.m"
                        read_profile__STATE_VARIABLE_InitDeep_51_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 391 "read_profile.m"
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_67, 0) = ((MR_Box) (read_profile__V_125_125));
#line 391 "read_profile.m"
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_67, 1) = ((MR_Box) (read_profile__V_126_126));
#line 391 "read_profile.m"
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_67, 2) = ((MR_Box) (read_profile__V_127_127));
#line 391 "read_profile.m"
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_67, 3) = ((MR_Box) (read_profile__V_128_128));
#line 391 "read_profile.m"
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_67, 4) = ((MR_Box) (read_profile__CSSs_29));
#line 391 "read_profile.m"
                        MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_67, 5) = ((MR_Box) (read_profile__V_130_130));
#line 391 "read_profile.m"
                      }
#line 392 "read_profile.m"
                      {
#line 392 "read_profile.m"
                        read_profile__read_nodes_2_5_p_0(read_profile__Depth_6, read_profile__STATE_VARIABLE_InitDeep_51_67, read_profile__MaybeInitDeep_8);
#line 392 "read_profile.m"
                        return;
                      }
#line 388 "read_profile.m"
                    }
#line 385 "read_profile.m"
                }
#line 371 "read_profile.m"
              else
#line 371 "read_profile.m"
                if ((read_profile__NextItem_13 == ((int) MR_deep_item_end)))
#line 412 "read_profile.m"
                  *read_profile__MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) read_profile__STATE_VARIABLE_InitDeep_0_36);
#line 371 "read_profile.m"
                else
#line 371 "read_profile.m"
                  if ((read_profile__NextItem_13 == ((int) MR_deep_item_proc_dynamic)))
#line 372 "read_profile.m"
                    {
#line 372 "read_profile.m"
                      MR_Word read_profile__MaybePD_20;

#line 373 "read_profile.m"
                      {
#line 373 "read_profile.m"
                        read_profile__read_proc_dynamic_4_p_0(read_profile__ProfileStats_10, &read_profile__MaybePD_20);
                      }
#line 380 "read_profile.m"
                      if (((MR_tag((MR_Word) read_profile__MaybePD_20)) == (MR_mktag((MR_Integer) 1))))
#line 381 "read_profile.m"
                        {
#line 381 "read_profile.m"
                          MR_String read_profile__Error_61 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybePD_20, (MR_Integer) 0)));

#line 382 "read_profile.m"
                          {
#line 382 "read_profile.m"
                            MR_Word base;
#line 382 "read_profile.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 382 "read_profile.m"
                            *read_profile__MaybeInitDeep_8 = base;
#line 382 "read_profile.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (read_profile__Error_61));
#line 382 "read_profile.m"
                          }
#line 381 "read_profile.m"
                        }
#line 380 "read_profile.m"
                      else
#line 375 "read_profile.m"
                        {
#line 375 "read_profile.m"
                          MR_Word read_profile__ProcDynamic_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybePD_20, (MR_Integer) 0)));
#line 375 "read_profile.m"
                          MR_Integer read_profile__PDI_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybePD_20, (MR_Integer) 1)));
#line 375 "read_profile.m"
                          MR_ArrayPtr read_profile__PDs0_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
#line 375 "read_profile.m"
                          MR_ArrayPtr read_profile__PDs_24;
#line 375 "read_profile.m"
                          MR_Word read_profile__STATE_VARIABLE_InitDeep_51_59;
#line 376 "read_profile.m"
                          MR_Word read_profile__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
#line 376 "read_profile.m"
                          MR_Word read_profile__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
#line 376 "read_profile.m"
                          MR_ArrayPtr read_profile__V_111_111 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
#line 376 "read_profile.m"
                          MR_ArrayPtr read_profile__V_112_112 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
#line 376 "read_profile.m"
                          MR_ArrayPtr read_profile__V_113_113 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
#line 377 "read_profile.m"
                          MR_ArrayPtr read_profile__conv2_PDs_24;
#line 378 "read_profile.m"
                          MR_Word read_profile__V_114_114;
#line 378 "read_profile.m"
                          MR_Word read_profile__V_115_115;
#line 378 "read_profile.m"
                          MR_ArrayPtr read_profile__V_116_116;
#line 378 "read_profile.m"
                          MR_ArrayPtr read_profile__V_118_118;
#line 378 "read_profile.m"
                          MR_ArrayPtr read_profile__V_119_119;
#line 378 "read_profile.m"
                          MR_ArrayPtr read_profile__V_117_117;

#line 377 "read_profile.m"
                          {
#line 377 "read_profile.m"
                            read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) read_profile__PDs0_23, read_profile__PDI_22, ((MR_Box) (read_profile__ProcDynamic_21)), &read_profile__conv2_PDs_24);
                          }
#line 377 "read_profile.m"
                          read_profile__PDs_24 = (MR_ArrayPtr) read_profile__conv2_PDs_24;
#line 378 "read_profile.m"
                          read_profile__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
#line 378 "read_profile.m"
                          read_profile__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
#line 378 "read_profile.m"
                          read_profile__V_116_116 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
#line 378 "read_profile.m"
                          read_profile__V_117_117 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
#line 378 "read_profile.m"
                          read_profile__V_118_118 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
#line 378 "read_profile.m"
                          read_profile__V_119_119 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
#line 378 "read_profile.m"
                          {
#line 378 "read_profile.m"
                            read_profile__STATE_VARIABLE_InitDeep_51_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 378 "read_profile.m"
                            MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_59, 0) = ((MR_Box) (read_profile__V_114_114));
#line 378 "read_profile.m"
                            MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_59, 1) = ((MR_Box) (read_profile__V_115_115));
#line 378 "read_profile.m"
                            MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_59, 2) = ((MR_Box) (read_profile__V_116_116));
#line 378 "read_profile.m"
                            MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_59, 3) = ((MR_Box) (read_profile__PDs_24));
#line 378 "read_profile.m"
                            MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_59, 4) = ((MR_Box) (read_profile__V_118_118));
#line 378 "read_profile.m"
                            MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_59, 5) = ((MR_Box) (read_profile__V_119_119));
#line 378 "read_profile.m"
                          }
#line 379 "read_profile.m"
                          {
#line 379 "read_profile.m"
                            read_profile__read_nodes_2_5_p_0(read_profile__Depth_6, read_profile__STATE_VARIABLE_InitDeep_51_59, read_profile__MaybeInitDeep_8);
#line 379 "read_profile.m"
                            return;
                          }
#line 375 "read_profile.m"
                        }
#line 372 "read_profile.m"
                    }
#line 371 "read_profile.m"
                  else
#line 398 "read_profile.m"
                    {
#line 398 "read_profile.m"
                      MR_Word read_profile__MaybePS_30;

#line 399 "read_profile.m"
                      {
#line 399 "read_profile.m"
                        read_profile__read_proc_static_4_p_0(read_profile__ProfileStats_10, &read_profile__MaybePS_30);
                      }
#line 406 "read_profile.m"
                      if (((MR_tag((MR_Word) read_profile__MaybePS_30)) == (MR_mktag((MR_Integer) 1))))
#line 407 "read_profile.m"
                        {
#line 407 "read_profile.m"
                          MR_String read_profile__Error_77 = ((MR_String) (MR_hl_field(MR_mktag(1), read_profile__MaybePS_30, (MR_Integer) 0)));

#line 408 "read_profile.m"
                          {
#line 408 "read_profile.m"
                            MR_Word base;
#line 408 "read_profile.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 408 "read_profile.m"
                            *read_profile__MaybeInitDeep_8 = base;
#line 408 "read_profile.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (read_profile__Error_77));
#line 408 "read_profile.m"
                          }
#line 407 "read_profile.m"
                        }
#line 406 "read_profile.m"
                      else
#line 401 "read_profile.m"
                        {
#line 401 "read_profile.m"
                          MR_Word read_profile__ProcStatic_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybePS_30, (MR_Integer) 0)));
#line 401 "read_profile.m"
                          MR_Integer read_profile__PSI_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), read_profile__MaybePS_30, (MR_Integer) 1)));
#line 401 "read_profile.m"
                          MR_ArrayPtr read_profile__PSs0_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
#line 401 "read_profile.m"
                          MR_ArrayPtr read_profile__PSs_34;
#line 401 "read_profile.m"
                          MR_Word read_profile__STATE_VARIABLE_InitDeep_51_75;
#line 402 "read_profile.m"
                          MR_Word read_profile__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
#line 402 "read_profile.m"
                          MR_Word read_profile__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
#line 402 "read_profile.m"
                          MR_ArrayPtr read_profile__V_133_133 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
#line 402 "read_profile.m"
                          MR_ArrayPtr read_profile__V_134_134 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
#line 402 "read_profile.m"
                          MR_ArrayPtr read_profile__V_135_135 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
#line 403 "read_profile.m"
                          MR_ArrayPtr read_profile__conv3_PSs_34;
#line 404 "read_profile.m"
                          MR_Word read_profile__V_136_136;
#line 404 "read_profile.m"
                          MR_Word read_profile__V_137_137;
#line 404 "read_profile.m"
                          MR_ArrayPtr read_profile__V_138_138;
#line 404 "read_profile.m"
                          MR_ArrayPtr read_profile__V_139_139;
#line 404 "read_profile.m"
                          MR_ArrayPtr read_profile__V_140_140;
#line 404 "read_profile.m"
                          MR_ArrayPtr read_profile__V_141_141;

#line 403 "read_profile.m"
                          {
#line 403 "read_profile.m"
                            read_profile__deep_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_ArrayPtr) read_profile__PSs0_33, read_profile__PSI_32, ((MR_Box) (read_profile__ProcStatic_31)), &read_profile__conv3_PSs_34);
                          }
#line 403 "read_profile.m"
                          read_profile__PSs_34 = (MR_ArrayPtr) read_profile__conv3_PSs_34;
#line 404 "read_profile.m"
                          read_profile__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 0)));
#line 404 "read_profile.m"
                          read_profile__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 1)));
#line 404 "read_profile.m"
                          read_profile__V_138_138 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 2)));
#line 404 "read_profile.m"
                          read_profile__V_139_139 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 3)));
#line 404 "read_profile.m"
                          read_profile__V_140_140 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 4)));
#line 404 "read_profile.m"
                          read_profile__V_141_141 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_0_36, (MR_Integer) 5)));
#line 404 "read_profile.m"
                          {
#line 404 "read_profile.m"
                            read_profile__STATE_VARIABLE_InitDeep_51_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 404 "read_profile.m"
                            MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_75, 0) = ((MR_Box) (read_profile__V_136_136));
#line 404 "read_profile.m"
                            MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_75, 1) = ((MR_Box) (read_profile__V_137_137));
#line 404 "read_profile.m"
                            MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_75, 2) = ((MR_Box) (read_profile__V_138_138));
#line 404 "read_profile.m"
                            MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_75, 3) = ((MR_Box) (read_profile__V_139_139));
#line 404 "read_profile.m"
                            MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_75, 4) = ((MR_Box) (read_profile__V_140_140));
#line 404 "read_profile.m"
                            MR_hl_field(MR_mktag(0), read_profile__STATE_VARIABLE_InitDeep_51_75, 5) = ((MR_Box) (read_profile__PSs_34));
#line 404 "read_profile.m"
                          }
#line 405 "read_profile.m"
                          {
#line 405 "read_profile.m"
                            read_profile__read_nodes_2_5_p_0(read_profile__Depth_6, read_profile__STATE_VARIABLE_InitDeep_51_75, read_profile__MaybeInitDeep_8);
#line 405 "read_profile.m"
                            return;
                          }
#line 401 "read_profile.m"
                        }
#line 398 "read_profile.m"
                    }
#line 414 "read_profile.m"
          else
#line 415 "read_profile.m"
            {
#line 415 "read_profile.m"
              MR_String read_profile__Msg_35;
#line 415 "read_profile.m"
              MR_String read_profile__V_146_146;

#line 415 "read_profile.m"
              {
#line 415 "read_profile.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &read_profile_scalar_common_9[2], read_profile__Byte_12, &read_profile__V_146_146);
              }
#line 415 "read_profile.m"
              {
#line 415 "read_profile.m"
                read_profile__Msg_35 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected token ", read_profile__V_146_146);
              }
#line 416 "read_profile.m"
              {
#line 416 "read_profile.m"
                MR_Word base;
#line 416 "read_profile.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 416 "read_profile.m"
                *read_profile__MaybeInitDeep_8 = base;
#line 416 "read_profile.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (read_profile__Msg_35));
#line 416 "read_profile.m"
              }
#line 415 "read_profile.m"
            }
#line 356 "read_profile.m"
        }
#line 352 "read_profile.m"
  }
#line 349 "read_profile.m"
}

#line 339 "read_profile.m"
static void MR_CALL 
read_profile__read_nodes_2_5_p_0(
#line 339 "read_profile.m"
  MR_Integer read_profile__Depth_6,
#line 339 "read_profile.m"
  MR_Word read_profile__STATE_VARIABLE_InitDeep_0_10,
#line 339 "read_profile.m"
  MR_Word * read_profile__MaybeInitDeep_8)
#line 339 "read_profile.m"
{
#line 345 "read_profile.m"
  {
#line 345 "read_profile.m"
    MR_bool read_profile__succeeded = (read_profile__Depth_6 < (MR_Integer) 1);

#line 345 "read_profile.m"
    if (read_profile__succeeded)
#line 344 "read_profile.m"
      *read_profile__MaybeInitDeep_8 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) read_profile__STATE_VARIABLE_InitDeep_0_10);
#line 345 "read_profile.m"
    else
#line 346 "read_profile.m"
      {
#line 346 "read_profile.m"
        MR_Integer read_profile__V_14_14 = (read_profile__Depth_6 - (MR_Integer) 1);

#line 346 "read_profile.m"
        {
#line 346 "read_profile.m"
          read_profile__read_nodes_3_5_p_0(read_profile__V_14_14, read_profile__STATE_VARIABLE_InitDeep_0_10, read_profile__MaybeInitDeep_8);
#line 346 "read_profile.m"
          return;
        }
#line 346 "read_profile.m"
      }
#line 345 "read_profile.m"
  }
#line 339 "read_profile.m"
}

#line 310 "read_profile.m"
static void MR_CALL 
read_profile__read_nodes_4_p_0(
#line 310 "read_profile.m"
  MR_Word read_profile__InitDeep0_5,
#line 310 "read_profile.m"
  MR_Word * read_profile__MaybeInitDeep_6)
#line 310 "read_profile.m"
{
#line 313 "read_profile.m"
  while (MR_TRUE)
#line 313 "read_profile.m"
    {
#line 313 "read_profile.m"
      /* tailcall optimized into a loop */
#line 313 "read_profile.m"
      {
#line 313 "read_profile.m"
        MR_bool read_profile__succeeded;
#line 313 "read_profile.m"
        MR_Word read_profile__MaybeInitDeep0_8;

#line 346 "read_profile.m"
        {
#line 346 "read_profile.m"
          read_profile__read_nodes_3_5_p_0((MR_Integer) 49999, read_profile__InitDeep0_5, &read_profile__MaybeInitDeep0_8);
        }
#line 326 "read_profile.m"
        if (((MR_tag((MR_Word) read_profile__MaybeInitDeep0_8)) == (MR_mktag((MR_Integer) 2))))
#line 327 "read_profile.m"
          {
#line 327 "read_profile.m"
            MR_String read_profile__Error_10 = ((MR_String) (MR_hl_field(MR_mktag(2), read_profile__MaybeInitDeep0_8, (MR_Integer) 0)));

#line 328 "read_profile.m"
            {
#line 328 "read_profile.m"
              MR_Word base;
#line 328 "read_profile.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 328 "read_profile.m"
              *read_profile__MaybeInitDeep_6 = base;
#line 328 "read_profile.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Error_10));
#line 328 "read_profile.m"
            }
#line 327 "read_profile.m"
          }
#line 326 "read_profile.m"
        else
#line 326 "read_profile.m"
          if (((MR_tag((MR_Word) read_profile__MaybeInitDeep0_8)) == (MR_mktag((MR_Integer) 0))))
#line 324 "read_profile.m"
            {
#line 324 "read_profile.m"
              MR_Word read_profile__InitDeep_9 = (MR_Word) MR_body(((MR_Word) read_profile__MaybeInitDeep0_8), (MR_Integer) 0);

#line 325 "read_profile.m"
              {
#line 325 "read_profile.m"
                MR_Word base;
#line 325 "read_profile.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 325 "read_profile.m"
                *read_profile__MaybeInitDeep_6 = base;
#line 325 "read_profile.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__InitDeep_9));
#line 325 "read_profile.m"
              }
#line 324 "read_profile.m"
            }
#line 326 "read_profile.m"
          else
#line 330 "read_profile.m"
            {
#line 330 "read_profile.m"
              MR_Word read_profile__InitDeep1_11 = (MR_Word) MR_body(((MR_Word) read_profile__MaybeInitDeep0_8), (MR_Integer) 1);

#line 331 "read_profile.m"
              /* direct tailcall eliminated */
#line 331 "read_profile.m"
              {
#line 331 "read_profile.m"
                MR_Word read_profile__InitDeep0__tmp_copy_5 = read_profile__InitDeep1_11;

#line 331 "read_profile.m"
                read_profile__InitDeep0_5 = read_profile__InitDeep0__tmp_copy_5;
#line 331 "read_profile.m"
              }
#line 331 "read_profile.m"
              continue;
#line 330 "read_profile.m"
            }
#line 313 "read_profile.m"
      }
#line 313 "read_profile.m"
      break;
#line 313 "read_profile.m"
    }
#line 310 "read_profile.m"
}

#line 225 "read_profile.m"
static void MR_CALL 
read_profile__maybe_deep_flags_2_p_0(
#line 225 "read_profile.m"
  MR_Integer read_profile__FlagsInt_3,
#line 225 "read_profile.m"
  MR_Word * read_profile__MaybeFlags_4)
#line 225 "read_profile.m"
{
#line 227 "read_profile.m"
  {
#line 227 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 227 "read_profile.m"
    MR_Integer read_profile__BytesPerInt_5;
#line 227 "read_profile.m"
    MR_Integer read_profile__Canonical_6;
#line 227 "read_profile.m"
    MR_Integer read_profile__Compression_7;
#line 227 "read_profile.m"
    MR_Integer read_profile__Coverage_8;
#line 227 "read_profile.m"
    MR_Integer read_profile__V_12_12 = (read_profile__FlagsInt_3 & (MR_Integer) 255);
#line 227 "read_profile.m"
    MR_Integer read_profile__V_15_15;
#line 227 "read_profile.m"
    MR_Integer read_profile__V_18_18;
#line 227 "read_profile.m"
    MR_Integer read_profile__V_21_21;
#line 263 "read_profile.m"
    MR_Word read_profile__CanonicalFlag_9;
#line 263 "read_profile.m"
    MR_Word read_profile__CoverageFlag_11;
#line 243 "read_profile.m"
    MR_Integer read_profile__V_24_24;
#line 243 "read_profile.m"
    MR_Integer read_profile__V_25_25;
#line 243 "read_profile.m"
    MR_Integer read_profile__V_34_34;

#line 229 "read_profile.m"
    {
#line 229 "read_profile.m"
      read_profile__BytesPerInt_5 = mercury__int__f_62_62_2_f_0(read_profile__V_12_12, (MR_Integer) 0);
    }
#line 230 "read_profile.m"
    read_profile__V_15_15 = (read_profile__FlagsInt_3 & (MR_Integer) 768);
#line 231 "read_profile.m"
    {
#line 231 "read_profile.m"
      read_profile__Canonical_6 = mercury__int__f_62_62_2_f_0(read_profile__V_15_15, (MR_Integer) 8);
    }
#line 232 "read_profile.m"
    read_profile__V_18_18 = (read_profile__FlagsInt_3 & (MR_Integer) 3072);
#line 233 "read_profile.m"
    {
#line 233 "read_profile.m"
      read_profile__Compression_7 = mercury__int__f_62_62_2_f_0(read_profile__V_18_18, (MR_Integer) 10);
    }
#line 234 "read_profile.m"
    read_profile__V_21_21 = (read_profile__FlagsInt_3 & (MR_Integer) 12288);
#line 235 "read_profile.m"
    {
#line 235 "read_profile.m"
      read_profile__Coverage_8 = mercury__int__f_62_62_2_f_0(read_profile__V_21_21, (MR_Integer) 12);
    }
#line 245 "read_profile.m"
    read_profile__succeeded = (read_profile__Compression_7 == (MR_Integer) 0);
#line 243 "read_profile.m"
    if (read_profile__succeeded)
#line 243 "read_profile.m"
      {
#line 240 "read_profile.m"
        if ((read_profile__Canonical_6 == (MR_Integer) 0))
#line 239 "read_profile.m"
          {
#line 239 "read_profile.m"
            read_profile__CanonicalFlag_9 = (MR_Integer) 1;
#line 239 "read_profile.m"
            read_profile__succeeded = MR_TRUE;
#line 239 "read_profile.m"
          }
#line 240 "read_profile.m"
        else
#line 240 "read_profile.m"
          if ((read_profile__Canonical_6 == (MR_Integer) 1))
#line 242 "read_profile.m"
            {
#line 242 "read_profile.m"
              read_profile__CanonicalFlag_9 = (MR_Integer) 0;
#line 242 "read_profile.m"
              read_profile__succeeded = MR_TRUE;
#line 242 "read_profile.m"
            }
#line 240 "read_profile.m"
          else
#line 240 "read_profile.m"
            read_profile__succeeded = MR_FALSE;
#line 243 "read_profile.m"
        if (read_profile__succeeded)
#line 243 "read_profile.m"
          {
#line 246 "read_profile.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 252 "read_profile.m"
            if ((read_profile__Coverage_8 == (MR_Integer) 0))
#line 251 "read_profile.m"
              {
#line 251 "read_profile.m"
                read_profile__CoverageFlag_11 = (MR_Integer) 0;
#line 251 "read_profile.m"
                read_profile__succeeded = MR_TRUE;
#line 251 "read_profile.m"
              }
#line 252 "read_profile.m"
            else
#line 252 "read_profile.m"
              if ((read_profile__Coverage_8 == (MR_Integer) 1))
#line 254 "read_profile.m"
                {
#line 254 "read_profile.m"
                  read_profile__CoverageFlag_11 = (MR_Integer) 1;
#line 254 "read_profile.m"
                  read_profile__succeeded = MR_TRUE;
#line 254 "read_profile.m"
                }
#line 252 "read_profile.m"
              else
#line 252 "read_profile.m"
                if ((read_profile__Coverage_8 == (MR_Integer) 2))
#line 257 "read_profile.m"
                  {
#line 257 "read_profile.m"
                    read_profile__CoverageFlag_11 = (MR_Integer) 2;
#line 257 "read_profile.m"
                    read_profile__succeeded = MR_TRUE;
#line 257 "read_profile.m"
                  }
#line 252 "read_profile.m"
                else
#line 252 "read_profile.m"
                  read_profile__succeeded = MR_FALSE;
#line 243 "read_profile.m"
            if (read_profile__succeeded)
#line 243 "read_profile.m"
              {
#line 259 "read_profile.m"
                read_profile__V_24_24 = (MR_Integer) 0;
#line 259 "read_profile.m"
                read_profile__V_25_25 = (MR_Integer) -16384;
#line 259 "read_profile.m"
                read_profile__V_34_34 = (read_profile__V_25_25 & read_profile__FlagsInt_3);
#line 259 "read_profile.m"
                read_profile__succeeded = (read_profile__V_24_24 == read_profile__V_34_34);
#line 243 "read_profile.m"
              }
#line 243 "read_profile.m"
          }
#line 243 "read_profile.m"
      }
#line 263 "read_profile.m"
    if (read_profile__succeeded)
#line 261 "read_profile.m"
      {
#line 261 "read_profile.m"
        MR_Word read_profile__V_27_27;

#line 261 "read_profile.m"
        {
#line 261 "read_profile.m"
          read_profile__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 261 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_27_27, 0) = ((MR_Box) (read_profile__BytesPerInt_5));
#line 261 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_27_27, 1) = ((MR_Box) (read_profile__CanonicalFlag_9));
#line 261 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_27_27, 2) = NULL;
#line 261 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_27_27, 3) = ((MR_Box) (read_profile__CoverageFlag_11));
#line 261 "read_profile.m"
        }
#line 261 "read_profile.m"
        {
#line 261 "read_profile.m"
          MR_Word base;
#line 261 "read_profile.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 261 "read_profile.m"
          *read_profile__MaybeFlags_4 = base;
#line 261 "read_profile.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__V_27_27));
#line 261 "read_profile.m"
        }
#line 261 "read_profile.m"
      }
#line 263 "read_profile.m"
    else
#line 264 "read_profile.m"
      {
#line 264 "read_profile.m"
        MR_String read_profile__V_28_28;
#line 264 "read_profile.m"
        MR_String read_profile__V_35_35;

#line 266 "read_profile.m"
        {
#line 266 "read_profile.m"
          mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) &read_profile_scalar_common_9[2], (MR_Integer) 2, read_profile__FlagsInt_3, &read_profile__V_35_35);
        }
#line 265 "read_profile.m"
        {
#line 265 "read_profile.m"
          read_profile__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) "Error parsing flags in file header, flags are 0x", read_profile__V_35_35);
        }
#line 264 "read_profile.m"
        {
#line 264 "read_profile.m"
          MR_Word base;
#line 264 "read_profile.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 264 "read_profile.m"
          *read_profile__MaybeFlags_4 = base;
#line 264 "read_profile.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__V_28_28));
#line 264 "read_profile.m"
        }
#line 264 "read_profile.m"
      }
#line 227 "read_profile.m"
  }
#line 225 "read_profile.m"
}

#line 188 "read_profile.m"
static void MR_CALL 
read_profile__maybe_init_deep_12_p_0(
#line 188 "read_profile.m"
  MR_String read_profile__ProgName_13,
#line 188 "read_profile.m"
  MR_Integer read_profile__FlagsInt_14,
#line 188 "read_profile.m"
  MR_Integer read_profile__MaxCSD_15,
#line 188 "read_profile.m"
  MR_Integer read_profile__MaxCSS_16,
#line 188 "read_profile.m"
  MR_Integer read_profile__MaxPD_17,
#line 188 "read_profile.m"
  MR_Integer read_profile__MaxPS_18,
#line 188 "read_profile.m"
  MR_Integer read_profile__TicksPerSec_19,
#line 188 "read_profile.m"
  MR_Integer read_profile__InstrumentQuanta_20,
#line 188 "read_profile.m"
  MR_Integer read_profile__UserQuanta_21,
#line 188 "read_profile.m"
  MR_Integer read_profile__NumCallSeqs_22,
#line 188 "read_profile.m"
  MR_Integer read_profile__RootPDI_23,
#line 188 "read_profile.m"
  MR_Word * read_profile__MaybeInitDeep_24)
#line 188 "read_profile.m"
{
#line 193 "read_profile.m"
  {
#line 193 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 193 "read_profile.m"
    MR_Word read_profile__MaybeFlags_25;

#line 194 "read_profile.m"
    {
#line 194 "read_profile.m"
      read_profile__maybe_deep_flags_2_p_0(read_profile__FlagsInt_14, &read_profile__MaybeFlags_25);
    }
#line 220 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybeFlags_25)) == (MR_mktag((MR_Integer) 1))))
#line 222 "read_profile.m"
      *read_profile__MaybeInitDeep_24 = (MR_Word) read_profile__MaybeFlags_25;
#line 220 "read_profile.m"
    else
#line 196 "read_profile.m"
      {
#line 196 "read_profile.m"
        MR_Word read_profile__Flags_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeFlags_25, (MR_Integer) 0)));
#line 196 "read_profile.m"
        MR_Word read_profile__InitStats_27;
#line 196 "read_profile.m"
        MR_Word read_profile__InitDeep_28;
#line 196 "read_profile.m"
        MR_Word read_profile__V_30_30;
#line 196 "read_profile.m"
        MR_ArrayPtr read_profile__V_31_31;
#line 196 "read_profile.m"
        MR_Integer read_profile__V_32_32;
#line 196 "read_profile.m"
        MR_Word read_profile__V_34_34;
#line 196 "read_profile.m"
        MR_Word read_profile__V_35_35;
#line 196 "read_profile.m"
        MR_Word read_profile__V_37_37;
#line 196 "read_profile.m"
        MR_ArrayPtr read_profile__V_38_38;
#line 196 "read_profile.m"
        MR_Integer read_profile__V_39_39;
#line 196 "read_profile.m"
        MR_Word read_profile__V_41_41;
#line 196 "read_profile.m"
        MR_ArrayPtr read_profile__V_43_43;
#line 196 "read_profile.m"
        MR_ArrayPtr read_profile__V_46_46;
#line 196 "read_profile.m"
        MR_Integer read_profile__V_47_47;
#line 196 "read_profile.m"
        MR_ArrayPtr read_profile__V_57_57;
#line 196 "read_profile.m"
        MR_Integer read_profile__V_58_58;
#line 196 "read_profile.m"
        MR_Word read_profile__V_60_60;
#line 196 "read_profile.m"
        MR_Word read_profile__V_61_61;
#line 196 "read_profile.m"
        MR_ArrayPtr read_profile__V_69_69;
#line 196 "read_profile.m"
        MR_ArrayPtr read_profile__V_71_71;
#line 202 "read_profile.m"
        MR_ArrayPtr read_profile__conv0_V_31_31;
#line 208 "read_profile.m"
        MR_ArrayPtr read_profile__conv1_V_43_43;
#line 208 "read_profile.m"
        MR_ArrayPtr read_profile__conv2_V_38_38;
#line 210 "read_profile.m"
        MR_ArrayPtr read_profile__conv3_V_46_46;
#line 217 "read_profile.m"
        MR_ArrayPtr read_profile__conv4_V_69_69;
#line 217 "read_profile.m"
        MR_ArrayPtr read_profile__conv5_V_71_71;
#line 215 "read_profile.m"
        MR_ArrayPtr read_profile__conv6_V_57_57;

#line 197 "read_profile.m"
        {
#line 197 "read_profile.m"
          read_profile__InitStats_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 197 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 0) = ((MR_Box) (read_profile__ProgName_13));
#line 197 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 1) = ((MR_Box) (read_profile__MaxCSD_15));
#line 197 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 2) = ((MR_Box) (read_profile__MaxCSS_16));
#line 197 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 3) = ((MR_Box) (read_profile__MaxPD_17));
#line 197 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 4) = ((MR_Box) (read_profile__MaxPS_18));
#line 197 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 5) = ((MR_Box) (read_profile__TicksPerSec_19));
#line 197 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 6) = ((MR_Box) (read_profile__InstrumentQuanta_20));
#line 197 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 7) = ((MR_Box) (read_profile__UserQuanta_21));
#line 197 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 8) = ((MR_Box) (read_profile__NumCallSeqs_22));
#line 197 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitStats_27, 9) = ((MR_Box) (read_profile__Flags_26));
#line 197 "read_profile.m"
        }
#line 1511 "read_profile.m"
        read_profile__V_30_30 = (MR_Word) read_profile__RootPDI_23;
#line 202 "read_profile.m"
        read_profile__V_32_32 = (read_profile__MaxCSD_15 + (MR_Integer) 1);
#line 1521 "read_profile.m"
        read_profile__V_35_35 = (MR_Word) ((MR_Box) ((MR_Integer) -1));
#line 206 "read_profile.m"
        {
#line 206 "read_profile.m"
          read_profile__V_37_37 = measurements__zero_own_prof_info_0_f_0();
        }
#line 203 "read_profile.m"
        {
#line 203 "read_profile.m"
          read_profile__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 203 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_34_34, 0) = ((MR_Box) (read_profile__V_35_35));
#line 203 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_34_34, 1) = ((MR_Box) (read_profile__V_35_35));
#line 203 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_34_34, 2) = ((MR_Box) (read_profile__V_37_37));
#line 203 "read_profile.m"
        }
#line 202 "read_profile.m"
        {
#line 202 "read_profile.m"
          read_profile__conv0_V_31_31 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, read_profile__V_32_32, ((MR_Box) (read_profile__V_34_34)));
        }
#line 202 "read_profile.m"
        read_profile__V_31_31 = (MR_ArrayPtr) read_profile__conv0_V_31_31;
#line 208 "read_profile.m"
        read_profile__V_39_39 = (read_profile__MaxPD_17 + (MR_Integer) 1);
#line 208 "read_profile.m"
        {
#line 208 "read_profile.m"
          read_profile__conv1_V_43_43 = mercury__array__array_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 208 "read_profile.m"
        read_profile__V_43_43 = (MR_ArrayPtr) read_profile__conv1_V_43_43;
#line 208 "read_profile.m"
        {
#line 208 "read_profile.m"
          read_profile__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 208 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_41_41, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
#line 208 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_41_41, 1) = ((MR_Box) (read_profile__V_43_43));
#line 208 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_41_41, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "read_profile.m"
        }
#line 208 "read_profile.m"
        {
#line 208 "read_profile.m"
          read_profile__conv2_V_38_38 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, read_profile__V_39_39, ((MR_Box) (read_profile__V_41_41)));
        }
#line 208 "read_profile.m"
        read_profile__V_38_38 = (MR_ArrayPtr) read_profile__conv2_V_38_38;
#line 210 "read_profile.m"
        read_profile__V_47_47 = (read_profile__MaxCSS_16 + (MR_Integer) 1);
#line 210 "read_profile.m"
        {
#line 210 "read_profile.m"
          read_profile__conv3_V_46_46 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, read_profile__V_47_47, ((MR_Box) (&read_profile_scalar_common_5[1])));
        }
#line 210 "read_profile.m"
        read_profile__V_46_46 = (MR_ArrayPtr) read_profile__conv3_V_46_46;
#line 215 "read_profile.m"
        read_profile__V_58_58 = (read_profile__MaxPS_18 + (MR_Integer) 1);
#line 216 "read_profile.m"
        {
#line 216 "read_profile.m"
          read_profile__V_61_61 = profile__dummy_proc_id_0_f_0();
        }
#line 217 "read_profile.m"
        {
#line 217 "read_profile.m"
          read_profile__conv4_V_69_69 = mercury__array__array_1_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 217 "read_profile.m"
        read_profile__V_69_69 = (MR_ArrayPtr) read_profile__conv4_V_69_69;
#line 217 "read_profile.m"
        {
#line 217 "read_profile.m"
          read_profile__conv5_V_71_71 = mercury__array__array_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 217 "read_profile.m"
        read_profile__V_71_71 = (MR_ArrayPtr) read_profile__conv5_V_71_71;
#line 216 "read_profile.m"
        {
#line 216 "read_profile.m"
          read_profile__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 216 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 0) = ((MR_Box) (read_profile__V_61_61));
#line 216 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 1) = ((MR_Box) ((MR_String) ""));
#line 216 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 2) = ((MR_Box) ((MR_String) ""));
#line 216 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 3) = ((MR_Box) ((MR_String) ""));
#line 216 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 4) = ((MR_Box) ((MR_String) ""));
#line 216 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 5) = ((MR_Box) ((MR_String) ""));
#line 216 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 6) = ((MR_Box) ((MR_Integer) -1));
#line 216 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 7) = ((MR_Box) ((MR_Integer) 0));
#line 216 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 8) = ((MR_Box) (read_profile__V_69_69));
#line 216 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 9) = ((MR_Box) (read_profile__V_71_71));
#line 216 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__V_60_60, 11) = ((MR_Box) ((MR_Integer) 1));
#line 216 "read_profile.m"
        }
#line 215 "read_profile.m"
        {
#line 215 "read_profile.m"
          read_profile__conv6_V_57_57 = mercury__array__init_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, read_profile__V_58_58, ((MR_Box) (read_profile__V_60_60)));
        }
#line 215 "read_profile.m"
        read_profile__V_57_57 = (MR_ArrayPtr) read_profile__conv6_V_57_57;
#line 199 "read_profile.m"
        {
#line 199 "read_profile.m"
          read_profile__InitDeep_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 199 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitDeep_28, 0) = ((MR_Box) (read_profile__InitStats_27));
#line 199 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitDeep_28, 1) = ((MR_Box) (read_profile__V_30_30));
#line 199 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitDeep_28, 2) = ((MR_Box) (read_profile__V_31_31));
#line 199 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitDeep_28, 3) = ((MR_Box) (read_profile__V_38_38));
#line 199 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitDeep_28, 4) = ((MR_Box) (read_profile__V_46_46));
#line 199 "read_profile.m"
          MR_hl_field(MR_mktag(0), read_profile__InitDeep_28, 5) = ((MR_Box) (read_profile__V_57_57));
#line 199 "read_profile.m"
        }
#line 219 "read_profile.m"
        {
#line 219 "read_profile.m"
          MR_Word base;
#line 219 "read_profile.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 219 "read_profile.m"
          *read_profile__MaybeInitDeep_24 = base;
#line 219 "read_profile.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__InitDeep_28));
#line 219 "read_profile.m"
        }
#line 196 "read_profile.m"
      }
#line 193 "read_profile.m"
  }
#line 188 "read_profile.m"
}

#line 107 "read_profile.m"
static void MR_CALL 
read_profile__read_deep_id_string_3_p_0(
#line 107 "read_profile.m"
  MR_Word * read_profile__MaybeVersionNumber_4)
#line 107 "read_profile.m"
{
#line 109 "read_profile.m"
  {
#line 109 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 109 "read_profile.m"
    MR_Integer read_profile__FirstLineLenLimit_6;
#line 109 "read_profile.m"
    MR_Word read_profile__MaybeLine_7;
#line 109 "read_profile.m"
    MR_Integer read_profile__V_15_15;

#line 111 "read_profile.m"
    {
#line 111 "read_profile.m"
      read_profile__V_15_15 = mercury__string__length_1_f_0((MR_String) "Mercury deep profiler data version ");
    }
#line 111 "read_profile.m"
    read_profile__FirstLineLenLimit_6 = (read_profile__V_15_15 + (MR_Integer) 10);
#line 1255 "read_profile.m"
    {
#line 1255 "read_profile.m"
      read_profile__read_line_acc_5_p_0(read_profile__FirstLineLenLimit_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &read_profile__MaybeLine_7);
    }
#line 128 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__MaybeLine_7)) == (MR_mktag((MR_Integer) 1))))
#line 130 "read_profile.m"
      *read_profile__MaybeVersionNumber_4 = (MR_Word) read_profile__MaybeLine_7;
#line 128 "read_profile.m"
    else
#line 114 "read_profile.m"
      {
#line 114 "read_profile.m"
        MR_String read_profile__Line0_8 = ((MR_String) (MR_hl_field(MR_mktag(0), read_profile__MaybeLine_7, (MR_Integer) 0)));
#line 114 "read_profile.m"
        MR_String read_profile__Line_9;
#line 125 "read_profile.m"
        MR_Integer read_profile__VersionNumber_11;
#line 117 "read_profile.m"
        MR_String read_profile__Suffix_10;

#line 115 "read_profile.m"
        {
#line 115 "read_profile.m"
          read_profile__Line_9 = mercury__string__chomp_1_f_0(read_profile__Line0_8);
        }
#line 117 "read_profile.m"
        {
#line 117 "read_profile.m"
          read_profile__succeeded = mercury__string__append_3_p_1((MR_String) "Mercury deep profiler data version ", &read_profile__Suffix_10, read_profile__Line_9);
        }
#line 117 "read_profile.m"
        if (read_profile__succeeded)
#line 118 "read_profile.m"
          {
#line 118 "read_profile.m"
            read_profile__succeeded = mercury__string__to_int_2_p_0(read_profile__Suffix_10, &read_profile__VersionNumber_11);
          }
#line 125 "read_profile.m"
        if (read_profile__succeeded)
#line 122 "read_profile.m"
          {
#line 147 "read_profile.m"
            read_profile__succeeded = (read_profile__VersionNumber_11 == (MR_Integer) 8);
#line 122 "read_profile.m"
            if (read_profile__succeeded)
#line 121 "read_profile.m"
              {
#line 121 "read_profile.m"
                MR_Word base;
#line 121 "read_profile.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 121 "read_profile.m"
                *read_profile__MaybeVersionNumber_4 = base;
#line 121 "read_profile.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (read_profile__VersionNumber_11));
#line 121 "read_profile.m"
              }
#line 122 "read_profile.m"
            else
#line 123 "read_profile.m"
              {
#line 123 "read_profile.m"
                *read_profile__MaybeVersionNumber_4 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_9[0]);
#line 123 "read_profile.m"
              }
#line 122 "read_profile.m"
          }
#line 125 "read_profile.m"
        else
#line 126 "read_profile.m"
          {
#line 126 "read_profile.m"
            *read_profile__MaybeVersionNumber_4 = (MR_Word) MR_mkword(MR_mktag(1), &read_profile_scalar_common_9[1]);
#line 126 "read_profile.m"
          }
#line 114 "read_profile.m"
      }
#line 109 "read_profile.m"
  }
#line 107 "read_profile.m"
}

#line 85 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_12(
#line 85 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_1,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_3,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_4,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_5,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_6,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_7,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_8,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_9,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_10,
#line 85 "read_profile.m"
  MR_Box read_profile__wrapper_arg_11,
#line 85 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_12)
#line 85 "read_profile.m"
{
#line 85 "read_profile.m"
  {
#line 85 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 85 "read_profile.m"
    MR_Word read_profile__conv11_MaybeInitDeep_24;

#line 85 "read_profile.m"
    {
#line 85 "read_profile.m"
      read_profile__maybe_init_deep_12_p_0(((MR_String) read_profile__wrapper_arg_1), ((MR_Integer) read_profile__wrapper_arg_2), ((MR_Integer) read_profile__wrapper_arg_3), ((MR_Integer) read_profile__wrapper_arg_4), ((MR_Integer) read_profile__wrapper_arg_5), ((MR_Integer) read_profile__wrapper_arg_6), ((MR_Integer) read_profile__wrapper_arg_7), ((MR_Integer) read_profile__wrapper_arg_8), ((MR_Integer) read_profile__wrapper_arg_9), ((MR_Integer) read_profile__wrapper_arg_10), ((MR_Integer) read_profile__wrapper_arg_11), &read_profile__conv11_MaybeInitDeep_24);
    }
#line 85 "read_profile.m"
    *read_profile__wrapper_arg_12 = ((MR_Box) (read_profile__conv11_MaybeInitDeep_24));
#line 85 "read_profile.m"
  }
#line 85 "read_profile.m"
}

#line 84 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_11(
#line 84 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 84 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 84 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 84 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 84 "read_profile.m"
{
#line 84 "read_profile.m"
  {
#line 84 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 84 "read_profile.m"
    MR_Word read_profile__conv10_MaybePtr_6;

#line 84 "read_profile.m"
    {
#line 84 "read_profile.m"
      read_profile__read_ptr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__closure, (MR_Integer) 3))), &read_profile__conv10_MaybePtr_6);
    }
#line 84 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv10_MaybePtr_6));
#line 84 "read_profile.m"
  }
#line 84 "read_profile.m"
}

#line 83 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_10(
#line 83 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 83 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 83 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 83 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 83 "read_profile.m"
{
#line 83 "read_profile.m"
  {
#line 83 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 83 "read_profile.m"
    MR_Word read_profile__conv9_MaybeNum_4;

#line 83 "read_profile.m"
    {
#line 83 "read_profile.m"
      read_profile__read_num_3_p_0(&read_profile__conv9_MaybeNum_4);
    }
#line 83 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv9_MaybeNum_4));
#line 83 "read_profile.m"
  }
#line 83 "read_profile.m"
}

#line 82 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_9(
#line 82 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 82 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 82 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 82 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 82 "read_profile.m"
{
#line 82 "read_profile.m"
  {
#line 82 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 82 "read_profile.m"
    MR_Word read_profile__conv8_MaybeNum_4;

#line 82 "read_profile.m"
    {
#line 82 "read_profile.m"
      read_profile__read_num_3_p_0(&read_profile__conv8_MaybeNum_4);
    }
#line 82 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv8_MaybeNum_4));
#line 82 "read_profile.m"
  }
#line 82 "read_profile.m"
}

#line 81 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_8(
#line 81 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 81 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 81 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 81 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 81 "read_profile.m"
{
#line 81 "read_profile.m"
  {
#line 81 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 81 "read_profile.m"
    MR_Word read_profile__conv7_MaybeNum_4;

#line 81 "read_profile.m"
    {
#line 81 "read_profile.m"
      read_profile__read_num_3_p_0(&read_profile__conv7_MaybeNum_4);
    }
#line 81 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv7_MaybeNum_4));
#line 81 "read_profile.m"
  }
#line 81 "read_profile.m"
}

#line 80 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_7(
#line 80 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 80 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 80 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 80 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 80 "read_profile.m"
{
#line 80 "read_profile.m"
  {
#line 80 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 80 "read_profile.m"
    MR_Word read_profile__conv6_MaybeNum_4;

#line 80 "read_profile.m"
    {
#line 80 "read_profile.m"
      read_profile__read_num_3_p_0(&read_profile__conv6_MaybeNum_4);
    }
#line 80 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv6_MaybeNum_4));
#line 80 "read_profile.m"
  }
#line 80 "read_profile.m"
}

#line 79 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_6(
#line 79 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 79 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 79 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 79 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 79 "read_profile.m"
{
#line 79 "read_profile.m"
  {
#line 79 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 79 "read_profile.m"
    MR_Word read_profile__conv5_MaybeInt_4;

#line 79 "read_profile.m"
    {
#line 79 "read_profile.m"
      read_profile__read_fixed_size_int_3_p_0(&read_profile__conv5_MaybeInt_4);
    }
#line 79 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv5_MaybeInt_4));
#line 79 "read_profile.m"
  }
#line 79 "read_profile.m"
}

#line 78 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_5(
#line 78 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 78 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 78 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 78 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 78 "read_profile.m"
{
#line 78 "read_profile.m"
  {
#line 78 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 78 "read_profile.m"
    MR_Word read_profile__conv4_MaybeInt_4;

#line 78 "read_profile.m"
    {
#line 78 "read_profile.m"
      read_profile__read_fixed_size_int_3_p_0(&read_profile__conv4_MaybeInt_4);
    }
#line 78 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv4_MaybeInt_4));
#line 78 "read_profile.m"
  }
#line 78 "read_profile.m"
}

#line 77 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_4(
#line 77 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 77 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 77 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 77 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 77 "read_profile.m"
{
#line 77 "read_profile.m"
  {
#line 77 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 77 "read_profile.m"
    MR_Word read_profile__conv3_MaybeInt_4;

#line 77 "read_profile.m"
    {
#line 77 "read_profile.m"
      read_profile__read_fixed_size_int_3_p_0(&read_profile__conv3_MaybeInt_4);
    }
#line 77 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv3_MaybeInt_4));
#line 77 "read_profile.m"
  }
#line 77 "read_profile.m"
}

#line 76 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_3(
#line 76 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 76 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 76 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 76 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 76 "read_profile.m"
{
#line 76 "read_profile.m"
  {
#line 76 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 76 "read_profile.m"
    MR_Word read_profile__conv2_MaybeInt_4;

#line 76 "read_profile.m"
    {
#line 76 "read_profile.m"
      read_profile__read_fixed_size_int_3_p_0(&read_profile__conv2_MaybeInt_4);
    }
#line 76 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv2_MaybeInt_4));
#line 76 "read_profile.m"
  }
#line 76 "read_profile.m"
}

#line 75 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_2(
#line 75 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 75 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 75 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 75 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 75 "read_profile.m"
{
#line 75 "read_profile.m"
  {
#line 75 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 75 "read_profile.m"
    MR_Word read_profile__conv1_MaybeInt_4;

#line 75 "read_profile.m"
    {
#line 75 "read_profile.m"
      read_profile__read_fixed_size_int_3_p_0(&read_profile__conv1_MaybeInt_4);
    }
#line 75 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv1_MaybeInt_4));
#line 75 "read_profile.m"
  }
#line 75 "read_profile.m"
}

#line 74 "read_profile.m"
static void MR_CALL 
read_profile__read_call_graph_4_p_0_1(
#line 74 "read_profile.m"
  MR_Box read_profile__closure_arg,
#line 74 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_1,
#line 74 "read_profile.m"
  MR_Box read_profile__wrapper_arg_2,
#line 74 "read_profile.m"
  MR_Box * read_profile__wrapper_arg_3)
#line 74 "read_profile.m"
{
#line 74 "read_profile.m"
  {
#line 74 "read_profile.m"
    MR_Box read_profile__closure = read_profile__closure_arg;
#line 74 "read_profile.m"
    MR_Word read_profile__conv0_MaybeStr_4;

#line 74 "read_profile.m"
    {
#line 74 "read_profile.m"
      read_profile__read_string_3_p_0(&read_profile__conv0_MaybeStr_4);
    }
#line 74 "read_profile.m"
    *read_profile__wrapper_arg_1 = ((MR_Box) (read_profile__conv0_MaybeStr_4));
#line 74 "read_profile.m"
  }
#line 74 "read_profile.m"
}

#line 25 "read_profile.m"
void MR_CALL 
read_profile__read_call_graph_4_p_0(
#line 25 "read_profile.m"
  MR_String read_profile__FileName_5,
#line 25 "read_profile.m"
  MR_Word * read_profile__MaybeInitDeep_6)
#line 25 "read_profile.m"
{
#line 63 "read_profile.m"
  {
#line 63 "read_profile.m"
    MR_bool read_profile__succeeded;
#line 63 "read_profile.m"
    MR_Word read_profile__OpenResult_8;

#line 64 "read_profile.m"
    {
#line 64 "read_profile.m"
      mercury__io__open_binary_input_4_p_0(read_profile__FileName_5, &read_profile__OpenResult_8);
    }
#line 101 "read_profile.m"
    if (((MR_tag((MR_Word) read_profile__OpenResult_8)) == (MR_mktag((MR_Integer) 1))))
#line 102 "read_profile.m"
      {
#line 102 "read_profile.m"
        MR_Word read_profile__Error_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), read_profile__OpenResult_8, (MR_Integer) 0)));
#line 102 "read_profile.m"
        MR_String read_profile__Msg_40;

#line 103 "read_profile.m"
        {
#line 103 "read_profile.m"
          mercury__io__error_message_2_p_0(read_profile__Error_39, &read_profile__Msg_40);
        }
#line 104 "read_profile.m"
        {
#line 104 "read_profile.m"
          MR_Word base;
#line 104 "read_profile.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 104 "read_profile.m"
          *read_profile__MaybeInitDeep_6 = base;
#line 104 "read_profile.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read_profile__Msg_40));
#line 104 "read_profile.m"
        }
#line 102 "read_profile.m"
      }
#line 101 "read_profile.m"
    else
#line 66 "read_profile.m"
      {
#line 66 "read_profile.m"
        MR_Word read_profile__FileStream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__OpenResult_8, (MR_Integer) 0)));
#line 66 "read_profile.m"
        MR_Word read_profile__OldStream_10;
#line 66 "read_profile.m"
        MR_Word read_profile__MaybeVersionNumber_11;
#line 100 "read_profile.m"
        MR_Word read_profile__V_17_17;

#line 67 "read_profile.m"
        {
#line 67 "read_profile.m"
          mercury__io__set_binary_input_stream_4_p_0(read_profile__FileStream_9, &read_profile__OldStream_10);
        }
#line 68 "read_profile.m"
        {
#line 68 "read_profile.m"
          read_profile__read_deep_id_string_3_p_0(&read_profile__MaybeVersionNumber_11);
        }
#line 96 "read_profile.m"
        if (((MR_tag((MR_Word) read_profile__MaybeVersionNumber_11)) == (MR_mktag((MR_Integer) 1))))
#line 98 "read_profile.m"
          *read_profile__MaybeInitDeep_6 = (MR_Word) read_profile__MaybeVersionNumber_11;
#line 96 "read_profile.m"
        else
#line 70 "read_profile.m"
          {
#line 70 "read_profile.m"
            MR_Word read_profile__TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 70 "read_profile.m"
            MR_Word read_profile__MaybeInitDeepHeader_13;

#line 73 "read_profile.m"
            {
#line 73 "read_profile.m"
              io_combinator__maybe_error_sequence_11_15_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, read_profile__TypeCtorInfo_87_87, (MR_Word) &profile__profile__type_ctor_info_initial_deep_0, (MR_Word) &read_profile_scalar_common_4[1], (MR_Word) &read_profile_scalar_common_4[2], (MR_Word) &read_profile_scalar_common_4[3], (MR_Word) &read_profile_scalar_common_4[4], (MR_Word) &read_profile_scalar_common_4[5], (MR_Word) &read_profile_scalar_common_4[6], (MR_Word) &read_profile_scalar_common_4[7], (MR_Word) &read_profile_scalar_common_4[8], (MR_Word) &read_profile_scalar_common_4[9], (MR_Word) &read_profile_scalar_common_4[10], (MR_Word) &read_profile_scalar_common_2[2], (MR_Word) &read_profile_scalar_common_4[11], &read_profile__MaybeInitDeepHeader_13);
            }
#line 92 "read_profile.m"
            if (((MR_tag((MR_Word) read_profile__MaybeInitDeepHeader_13)) == (MR_mktag((MR_Integer) 1))))
#line 94 "read_profile.m"
              *read_profile__MaybeInitDeep_6 = read_profile__MaybeInitDeepHeader_13;
#line 92 "read_profile.m"
            else
#line 87 "read_profile.m"
              {
#line 87 "read_profile.m"
                MR_Word read_profile__InitDeep_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), read_profile__MaybeInitDeepHeader_13, (MR_Integer) 0)));

#line 91 "read_profile.m"
                {
#line 91 "read_profile.m"
                  read_profile__read_nodes_4_p_0(read_profile__InitDeep_14, read_profile__MaybeInitDeep_6);
                }
#line 87 "read_profile.m"
              }
#line 70 "read_profile.m"
          }
#line 100 "read_profile.m"
        {
#line 100 "read_profile.m"
          mercury__io__set_binary_input_stream_4_p_0(read_profile__OldStream_10, &read_profile__V_17_17);
        }
#line 66 "read_profile.m"
      }
#line 63 "read_profile.m"
  }
#line 25 "read_profile.m"
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
