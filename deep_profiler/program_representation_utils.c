/*
** Automatically generated from `program_representation_utils.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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


/* :- module program_representation_utils. */
/* :- implementation. */

/*
INIT mercury__program_representation_utils__init
ENDINIT
*/

#include "program_representation_utils.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"




#line 76 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

#line 79 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_proc_rep_1__plain_unit__type_ctor_info_unit_0;

#line 82 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 85 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 88 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

#line 91 "program_representation_utils.c"
static const MR_VA_PseudoTypeInfo_Struct2 program_representation_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_mdbcomp__goal_path__type_ctor_info_goal_path_step_0;

#line 94 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__pseudo_1;

#line 97 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 100 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 103 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__pseudo_1;

#line 106 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 109 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct1 program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 112 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 115 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct1 program_representation_utils__list__ti_list_1builtin__type_ctor_info_int_0;

#line 118 "program_representation_utils.c"
static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_atomic_goal_is_call_0_0[1];

#line 121 "program_representation_utils.c"
static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_0;

#line 124 "program_representation_utils.c"
static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_1;

#line 127 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_0[1];

#line 130 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_1[1];

#line 133 "program_representation_utils.c"
static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_atomic_goal_is_call_0[2];

#line 136 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_atomic_goal_is_call_0[2];

#line 139 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_atomic_goal_is_call_0[2];

#line 142 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_inst_rep_0;

#line 145 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 148 "program_representation_utils.c"
static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_inst_map_0_0[2];

#line 151 "program_representation_utils.c"
static const MR_ConstString program_representation_utils__program_representation_utils__field_names_inst_map_0_0[2];

#line 154 "program_representation_utils.c"
static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_inst_map_0_0;

#line 157 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_inst_map_0_0[1];

#line 160 "program_representation_utils.c"
static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_inst_map_0[1];

#line 163 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_inst_map_0[1];

#line 166 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_inst_map_0[1];

#line 169 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_inst_map_delta_0[1];

#line 172 "program_representation_utils.c"
static const MR_NotagFunctorDesc program_representation_utils__program_representation_utils__notag_functor_desc_inst_map_delta_0;

#line 175 "program_representation_utils.c"
static const MR_VA_PseudoTypeInfo_Struct2 program_representation_utils____vpti_func_2__pseudo_1__pseudo_2;

#line 178 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

#line 181 "program_representation_utils.c"
static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_print_goal_info_2_0[2];

#line 184 "program_representation_utils.c"
static const MR_ConstString program_representation_utils__program_representation_utils__field_names_print_goal_info_2_0[2];

#line 187 "program_representation_utils.c"
static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_print_goal_info_2_0;

#line 190 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_print_goal_info_2_0[1];

#line 193 "program_representation_utils.c"
static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_print_goal_info_2[1];

#line 196 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_print_goal_info_2[1];

#line 199 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_print_goal_info_2[1];

#line 202 "program_representation_utils.c"
static const MR_EnumFunctorDesc program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_0;

#line 205 "program_representation_utils.c"
static const MR_EnumFunctorDesc program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_1;

#line 208 "program_representation_utils.c"
static const MR_EnumFunctorDescPtr program_representation_utils__program_representation_utils__enum_value_ordered_seen_duplicate_instantiation_0[2];

#line 211 "program_representation_utils.c"
static const MR_EnumFunctorDescPtr program_representation_utils__program_representation_utils__enum_name_ordered_seen_duplicate_instantiation_0[2];

#line 214 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_seen_duplicate_instantiation_0[2];

#line 217 "program_representation_utils.c"
static const MR_ConstString program_representation_utils__program_representation_utils__type_class_id_var_names_goal_annotation_1[1];

#line 220 "program_representation_utils.c"
static const MR_TypeClassMethod program_representation_utils__program_representation_utils__type_class_id_method_ids_goal_annotation_1[1];

#line 223 "program_representation_utils.c"
static const MR_TypeClassId program_representation_utils__program_representation_utils__type_class_id_goal_annotation_1;

#line 226 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____atomic_goal_is_call_0_0_10001(
#line 229 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 231 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2);

#line 234 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____atomic_goal_is_call_0_0_10001(
#line 237 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 239 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 241 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3);

#line 244 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_0_0_10001(
#line 247 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 249 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2);

#line 252 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____inst_map_0_0_10001(
#line 255 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 257 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 259 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3);

#line 262 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_delta_0_0_10001(
#line 265 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 267 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2);

#line 270 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____inst_map_delta_0_0_10001(
#line 273 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 275 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 277 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3);

#line 280 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____print_goal_info_2_0_10001(
#line 283 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 285 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 287 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 289 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_4);

#line 292 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____print_goal_info_2_0_10001(
#line 295 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 297 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 299 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_3,
#line 301 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_4,
#line 303 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_5);

#line 306 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____seen_duplicate_instantiation_0_0_10001(
#line 309 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 311 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2);

#line 314 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____seen_duplicate_instantiation_0_0_10001(
#line 317 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 319 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 321 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3);

#line 324 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
#line 327 "program_representation_utils.c"
  MR_Box program_representation_utils__closure_arg,
#line 329 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 331 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 333 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_3);

#line 231 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_109_111_100_117_108_101_95_116_111_95_115_116_114_105_110_103_115_95_95_50_51_49_95_95_49_95_95_91_49_93_95_48_4_p_0(
#line 231 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_45,
#line 231 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_46,
#line 231 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__4_47);

#line 863 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_112_114_105_110_116_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_116_111_95_115_116_114_105_110_103_115_95_51_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 863 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_3);

#line 773 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho8_5_p_0(
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_2,
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3,
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__Prefix_4,
#line 773 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_5);

#line 773 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho7_5_p_0(
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_2,
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3,
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__Prefix_4,
#line 773 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_5);

#line 773 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho6_5_p_0(
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_2,
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3,
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__Prefix_4,
#line 773 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_5);

#line 759 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_to_strings__ho3_4_p_0(
#line 759 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_6,
#line 759 "program_representation_utils.m"
  MR_Word program_representation_utils__Args_7,
#line 759 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_8);

#line 759 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_to_strings__ho2_4_p_0(
#line 759 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_6,
#line 759 "program_representation_utils.m"
  MR_Word program_representation_utils__Args_7,
#line 759 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_8);

#line 959 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_wrapper__ho1_10_p_0(
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_32,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__ParentGoalId_12,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_17,
#line 959 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_18,
#line 959 "program_representation_utils.m"
  MR_Integer program_representation_utils__STATE_VARIABLE_GoalNum_0_19,
#line 959 "program_representation_utils.m"
  MR_Integer * program_representation_utils__STATE_VARIABLE_GoalNum_20,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_21,
#line 959 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_22,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_23,
#line 959 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_24);

#line 924 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__924__1_1_f_0(
#line 924 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__1_80);

#line 919 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__919__1_1_f_0(
#line 919 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__1_87);

#line 1212 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1212__2_3_p_0(
#line 1212 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_52,
#line 1212 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_53,
#line 1212 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_54);

#line 1212 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1212__1_3_p_0(
#line 1212 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_30,
#line 1212 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_31,
#line 1212 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_32);

#line 1177 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__calc_inst_map_delta__1177__1_5_p_0(
#line 1177 "program_representation_utils.m"
  MR_Word program_representation_utils__Before_4,
#line 1177 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_15,
#line 1177 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_16,
#line 1177 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__4_17,
#line 1177 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_18);

#line 1043 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__merge_inst_map__1043__1_3_p_0(
#line 1043 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_24,
#line 1043 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_25,
#line 1043 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_26);

#line 547 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__547__1_2_f_0(
#line 547 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_194,
#line 547 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_195);

#line 545 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__545__1_2_f_0(
#line 545 "program_representation_utils.m"
  MR_Word program_representation_utils__LinePrefix_46,
#line 545 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_159);

#line 390 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__IntroducedFrom__func__print_proc_to_strings__390__1_2_f_0(
#line 390 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_6,
#line 390 "program_representation_utils.m"
  MR_Box program_representation_utils__HeadVar__2_7);

#line 231 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__print_module_to_strings__231__1_4_p_0(
#line 231 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_44,
#line 231 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_45,
#line 231 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_46,
#line 231 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__4_47);

#line 863 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
#line 863 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 863 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_3);

#line 1117 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0_1(
#line 1117 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1117 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1117 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1117 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3);

#line 1105 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0(
#line 1105 "program_representation_utils.m"
  MR_Word program_representation_utils__VarToDepVars_5,
#line 1105 "program_representation_utils.m"
  MR_Integer program_representation_utils__VarRep_6,
#line 1105 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Set_0_9,
#line 1105 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Set_10);

#line 1064 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_ground_var_6_p_0(
#line 1064 "program_representation_utils.m"
  MR_Word program_representation_utils__DepVars0_7,
#line 1064 "program_representation_utils.m"
  MR_Integer program_representation_utils__Var_8,
#line 1064 "program_representation_utils.m"
  MR_Word program_representation_utils__InstMap0_9,
#line 1064 "program_representation_utils.m"
  MR_Word * program_representation_utils__InstMap_10,
#line 1064 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_0_21,
#line 1064 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_22);

#line 1048 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_intersect_3_p_0(
#line 1048 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 1048 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 1048 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_3);

#line 995 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__add_head_var_inst_to_map_3_p_0(
#line 995 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 995 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_InstMap_0_9,
#line 995 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_InstMap_10);

#line 968 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_case_9_p_0(
#line 968 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_37,
#line 968 "program_representation_utils.m"
  MR_Word program_representation_utils__ParentGoalId_10,
#line 968 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Case_0_20,
#line 968 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Case_21,
#line 968 "program_representation_utils.m"
  MR_Integer program_representation_utils__STATE_VARIABLE_CaseNum_0_22,
#line 968 "program_representation_utils.m"
  MR_Integer * program_representation_utils__STATE_VARIABLE_CaseNum_23,
#line 968 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_24,
#line 968 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_25,
#line 968 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_26,
#line 968 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_27);

#line 959 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_wrapper_10_p_0(
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_32,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__MakePathStep_11,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__ParentGoalId_12,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_17,
#line 959 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_18,
#line 959 "program_representation_utils.m"
  MR_Integer program_representation_utils__STATE_VARIABLE_GoalNum_0_19,
#line 959 "program_representation_utils.m"
  MR_Integer * program_representation_utils__STATE_VARIABLE_GoalNum_20,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_21,
#line 959 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_22,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_23,
#line 959 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_24);

#line 929 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0_5(
#line 929 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 929 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 929 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2,
#line 929 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 929 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4,
#line 929 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_5,
#line 929 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_6,
#line 929 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_7,
#line 929 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_8);

#line 924 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0_4(
#line 924 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 924 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 924 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2,
#line 924 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 924 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4,
#line 924 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_5,
#line 924 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_6,
#line 924 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_7,
#line 924 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_8);

#line 924 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_3(
#line 924 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 924 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1);

#line 919 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0_2(
#line 919 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 919 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 919 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2,
#line 919 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 919 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4,
#line 919 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_5,
#line 919 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_6,
#line 919 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_7,
#line 919 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_8);

#line 919 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_1(
#line 919 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 919 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1);

#line 907 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0(
#line 907 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_94,
#line 907 "program_representation_utils.m"
  MR_Word program_representation_utils__ContainingGoal_8,
#line 907 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_43,
#line 907 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_44,
#line 907 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_45,
#line 907 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_46,
#line 907 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_47,
#line 907 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_48);

#line 856 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__add_nl_1_f_0(
#line 856 "program_representation_utils.m"
  MR_String program_representation_utils__Str_3);

#line 852 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__nl_0_f_0(void);

#line 820 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__detism_to_string_2_p_0(
#line 820 "program_representation_utils.m"
  MR_Word program_representation_utils__Detism_3,
#line 820 "program_representation_utils.m"
  MR_Word * program_representation_utils__DetismStrCord_4);

#line 807 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__indent_1_f_0(
#line 807 "program_representation_utils.m"
  MR_Integer program_representation_utils__N_3);

#line 790 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_head_var_3_p_0(
#line 790 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_4,
#line 790 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 790 "program_representation_utils.m"
  MR_String * program_representation_utils__String_7);

#line 666 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_atomic_goal_to_strings_3_p_0(
#line 666 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_4,
#line 666 "program_representation_utils.m"
  MR_Word program_representation_utils__AtomicGoalRep_5,
#line 666 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_6);

#line 656 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(
#line 656 "program_representation_utils.m"
  MR_Integer program_representation_utils__Indent_4,
#line 656 "program_representation_utils.m"
  MR_Word program_representation_utils__ConsIdArityRep_5,
#line 656 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_6);

#line 644 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0_1(
#line 644 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 644 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 644 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2);

#line 626 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0(
#line 626 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_50,
#line 626 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_49,
#line 626 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_1,
#line 626 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_2,
#line 626 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_3,
#line 626 "program_representation_utils.m"
  MR_Integer program_representation_utils__CaseNum_4,
#line 626 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__5_5,
#line 626 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__6_6,
#line 626 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__7_7);

#line 604 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_disj_to_strings_7_p_0(
#line 604 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_36,
#line 604 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_35,
#line 604 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_1,
#line 604 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_2,
#line 604 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_3,
#line 604 "program_representation_utils.m"
  MR_Integer program_representation_utils__DisjNum_4,
#line 604 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__5_5,
#line 604 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__6_6,
#line 604 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__7_7);

#line 578 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_conj_to_strings_2_6_p_0(
#line 578 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_32,
#line 578 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_31,
#line 578 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_1,
#line 578 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_2,
#line 578 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_3,
#line 578 "program_representation_utils.m"
  MR_Integer program_representation_utils__ConjNum_4,
#line 578 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__5_5,
#line 578 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__6_6);

#line 564 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_conj_to_strings_5_p_0(
#line 564 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_17,
#line 564 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_16,
#line 564 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_6,
#line 564 "program_representation_utils.m"
  MR_Integer program_representation_utils__Indent_7,
#line 564 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_8,
#line 564 "program_representation_utils.m"
  MR_Word program_representation_utils__GoalReps_9,
#line 564 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_10);

#line 420 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(
#line 420 "program_representation_utils.m"
  MR_Word program_representation_utils__VarNameTable_6,
#line 420 "program_representation_utils.m"
  MR_Integer program_representation_utils__VarNum_7,
#line 420 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeRep_8,
#line 420 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_15,
#line 420 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_16);

#line 363 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__arg_type_reps_to_strings_3_p_0(
#line 363 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadTypeRep_1,
#line 363 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 363 "program_representation_utils.m"
  MR_Word * program_representation_utils__Cord_3);

#line 279 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__type_rep_to_strings_2_p_0(
#line 279 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeRep_3,
#line 279 "program_representation_utils.m"
  MR_Word * program_representation_utils__Cord_4);

#line 267 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_type_table_entries_to_strings_4_p_0(
#line 267 "program_representation_utils.m"
  MR_Integer program_representation_utils__TypeNum_5,
#line 267 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeRep_6,
#line 267 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_11,
#line 267 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_12);

#line 256 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_6(
#line 256 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 256 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1);

#line 255 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_5(
#line 255 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 255 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1);

#line 254 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_4(
#line 254 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 254 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1);

#line 253 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_3(
#line 253 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 253 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 253 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2);

#line 252 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_2(
#line 252 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 252 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 252 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2);

#line 251 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_1(
#line 251 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 251 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 251 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2);

#line 238 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0(
#line 238 "program_representation_utils.m"
  MR_Word program_representation_utils__OISUTypeProcs_4,
#line 238 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_7,
#line 238 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_8);

#line 1208 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_2(
#line 1208 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1208 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1208 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1208 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3);

#line 1208 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_1(
#line 1208 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1208 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1208 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1208 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3);

#line 1136 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__calc_inst_map_delta_3_p_0_1(
#line 1136 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1136 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1136 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1136 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 1136 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4);

#line 1043 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_2(
#line 1043 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1043 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1043 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1043 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3);

#line 1042 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_1(
#line 1042 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1042 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1042 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1042 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3);

#line 1061 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_ground_vars_5_p_0_1(
#line 1061 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1061 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1061 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1061 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3,
#line 1061 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_4,
#line 1061 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_5);

#line 992 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__initial_inst_map_1_f_0_1(
#line 992 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 992 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 992 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 992 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3);

#line 547 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_2(
#line 547 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 547 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 547 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2);

#line 545 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_1(
#line 545 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 545 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1);

#line 415 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_2(
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 415 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4);

#line 390 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_1(
#line 390 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 390 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1);

#line 415 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_proc_to_strings_3_p_0_1(
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 415 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4);

#line 231 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_3(
#line 231 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 231 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 231 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 231 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 231 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4);

#line 223 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_2(
#line 223 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 223 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 223 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 223 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 223 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4);

#line 221 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_1(
#line 221 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 221 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 221 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 221 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3);


static /* final */ const MR_Box program_representation_utils_scalar_common_1[11][2];

static /* final */ const MR_Box program_representation_utils_scalar_common_2[20][3];

static /* final */ const MR_Box program_representation_utils_scalar_common_3[8][6];

static /* final */ const MR_Box program_representation_utils_scalar_common_4[3][7];

static /* final */ const MR_Box program_representation_utils_scalar_common_5[2][8];

static /* final */ const MR_Integer program_representation_utils_scalar_common_6[2][2];

static /* final */ const MR_Box program_representation_utils_scalar_common_7[1][9];

static /* final */ const MR_Box program_representation_utils_scalar_common_8[3][5];

static /* final */ const MR_Box program_representation_utils_scalar_common_9[1][14];

static /* final */ const MR_Box program_representation_utils_scalar_common_10[1][13];




static /* final */ const MR_Box program_representation_utils_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_program_representation_utils__goal_annotation__arity1__unit__unit__arity0__)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_module_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) " -> ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_2[20][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils_scalar_common_1[3]))
  },
  /* row 3 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_3[0])),
    ((MR_Box) (program_representation_utils__print_module_to_strings_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[0])),
    ((MR_Box) (program_representation_utils__print_module_to_strings_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[1])),
    ((MR_Box) (program_representation_utils__print_module_to_strings_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_3[2])),
    ((MR_Box) (program_representation_utils__print_goal_to_strings_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_3[3])),
    ((MR_Box) (program_representation_utils__initial_inst_map_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_3[4])),
    ((MR_Box) (program_representation_utils__merge_inst_map_4_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_3[5])),
    ((MR_Box) (program_representation_utils__merge_inst_map_4_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_3[6])),
    ((MR_Box) (program_representation_utils__atomic_goal_get_vars_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_3[6])),
    ((MR_Box) (program_representation_utils__atomic_goal_get_vars_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_8[0])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_8[0])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_8[0])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_8[1])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_8[1])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_8[1])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_8[2])),
    ((MR_Box) (program_representation_utils__label_goal_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_8[2])),
    ((MR_Box) (program_representation_utils__label_goal_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_3[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_oisu_type_procs_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&program_representation_utils_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&program_representation_utils__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_4[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&program_representation_utils__mdbcomp__program_representation__pti_proc_rep_1__plain_unit__type_ctor_info_unit_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Integer program_representation_utils_scalar_common_6[2][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_seen_duplicate_instantiation_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_seen_duplicate_instantiation_0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_8[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_9[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&program_representation_utils_scalar_common_6[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&program_representation_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_mdbcomp__goal_path__type_ctor_info_goal_path_step_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__pseudo_1)),
    ((MR_Box) (&program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&program_representation_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&program_representation_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_10[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&program_representation_utils_scalar_common_6[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__pseudo_1)),
    ((MR_Box) (&program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&program_representation_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&program_representation_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
};



#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "array.mh"
#include "array.mh"
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



#line 1633 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1641 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_proc_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_rep_1,
  {
    (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 1649 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1658 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1666 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1674 "program_representation_utils.c"
static const MR_VA_PseudoTypeInfo_Struct2 program_representation_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_mdbcomp__goal_path__type_ctor_info_goal_path_step_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0
  }
};

#line 1684 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__pseudo_1 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1692 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1700 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 1709 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__pseudo_1 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1717 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1725 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct1 program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1733 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1742 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct1 program_representation_utils__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1750 "program_representation_utils.c"
static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_atomic_goal_is_call_0_0[1] = {
  (MR_PseudoTypeInfo) &program_representation_utils__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 1755 "program_representation_utils.c"
static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_0 = {
  (MR_String) "atomic_goal_is_call",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  program_representation_utils__program_representation_utils__field_types_atomic_goal_is_call_0_0,
  NULL,
  NULL,
  NULL
};

#line 1770 "program_representation_utils.c"
static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_1 = {
  (MR_String) "atomic_goal_is_trivial",
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

#line 1785 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_0[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_1
};

#line 1790 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_1[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_0
};

#line 1795 "program_representation_utils.c"
static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_atomic_goal_is_call_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_1
  }
};

#line 1809 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_atomic_goal_is_call_0[2] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_0,
  &program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_1
};

#line 1815 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_atomic_goal_is_call_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1821 "program_representation_utils.c"
const MR_TypeCtorInfo_Struct program_representation_utils__program_representation_utils__type_ctor_info_atomic_goal_is_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (program_representation_utils____Unify____atomic_goal_is_call_0_0_10001)),
  ((MR_Box) (program_representation_utils____Compare____atomic_goal_is_call_0_0_10001)),
  (MR_String) "program_representation_utils",
  (MR_String) "atomic_goal_is_call",
  {
    program_representation_utils__program_representation_utils__du_name_ordered_atomic_goal_is_call_0
  },
  {
    program_representation_utils__program_representation_utils__du_ptag_ordered_atomic_goal_is_call_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  program_representation_utils__program_representation_utils__functor_number_map_atomic_goal_is_call_0
};

#line 1842 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_inst_rep_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0
  }
};

#line 1851 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1860 "program_representation_utils.c"
static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_inst_map_0_0[2] = {
  (MR_PseudoTypeInfo) &program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_inst_rep_0,
  (MR_PseudoTypeInfo) &program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

#line 1866 "program_representation_utils.c"
static const MR_ConstString program_representation_utils__program_representation_utils__field_names_inst_map_0_0[2] = {
  (MR_String) "im_inst_map",
  (MR_String) "im_var_dep_map"
};

#line 1872 "program_representation_utils.c"
static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_inst_map_0_0 = {
  (MR_String) "inst_map",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  program_representation_utils__program_representation_utils__field_types_inst_map_0_0,
  program_representation_utils__program_representation_utils__field_names_inst_map_0_0,
  NULL,
  NULL
};

#line 1887 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_inst_map_0_0[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_inst_map_0_0
};

#line 1892 "program_representation_utils.c"
static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_inst_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    program_representation_utils__program_representation_utils__du_stag_ordered_inst_map_0_0
  }
};

#line 1901 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_inst_map_0[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_inst_map_0_0
};

#line 1906 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_inst_map_0[1] = {
  (MR_Integer) 0
};

#line 1911 "program_representation_utils.c"
const MR_TypeCtorInfo_Struct program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (program_representation_utils____Unify____inst_map_0_0_10001)),
  ((MR_Box) (program_representation_utils____Compare____inst_map_0_0_10001)),
  (MR_String) "program_representation_utils",
  (MR_String) "inst_map",
  {
    program_representation_utils__program_representation_utils__du_name_ordered_inst_map_0
  },
  {
    program_representation_utils__program_representation_utils__du_ptag_ordered_inst_map_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  program_representation_utils__program_representation_utils__functor_number_map_inst_map_0
};

#line 1932 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_inst_map_delta_0[1] = {
  (MR_Integer) 0
};

#line 1937 "program_representation_utils.c"
static const MR_NotagFunctorDesc program_representation_utils__program_representation_utils__notag_functor_desc_inst_map_delta_0 = {
  (MR_String) "inst_map_delta",
  (MR_PseudoTypeInfo) &program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0,
  NULL
};

#line 1944 "program_representation_utils.c"
const MR_TypeCtorInfo_Struct program_representation_utils__program_representation_utils__type_ctor_info_inst_map_delta_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (program_representation_utils____Unify____inst_map_delta_0_0_10001)),
  ((MR_Box) (program_representation_utils____Compare____inst_map_delta_0_0_10001)),
  (MR_String) "program_representation_utils",
  (MR_String) "inst_map_delta",
  {
    &program_representation_utils__program_representation_utils__notag_functor_desc_inst_map_delta_0
  },
  {
    &program_representation_utils__program_representation_utils__notag_functor_desc_inst_map_delta_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  program_representation_utils__program_representation_utils__functor_number_map_inst_map_delta_0
};

#line 1965 "program_representation_utils.c"
static const MR_VA_PseudoTypeInfo_Struct2 program_representation_utils____vpti_func_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1975 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1984 "program_representation_utils.c"
static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_print_goal_info_2_0[2] = {
  (MR_PseudoTypeInfo) &program_representation_utils____vpti_func_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0
};

#line 1990 "program_representation_utils.c"
static const MR_ConstString program_representation_utils__program_representation_utils__field_names_print_goal_info_2_0[2] = {
  (MR_String) "pgi_lookup_annotation",
  (MR_String) "pgi_var_name_table"
};

#line 1996 "program_representation_utils.c"
static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_print_goal_info_2_0 = {
  (MR_String) "print_goal_info",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  program_representation_utils__program_representation_utils__field_types_print_goal_info_2_0,
  program_representation_utils__program_representation_utils__field_names_print_goal_info_2_0,
  NULL,
  NULL
};

#line 2011 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_print_goal_info_2_0[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_print_goal_info_2_0
};

#line 2016 "program_representation_utils.c"
static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_print_goal_info_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    program_representation_utils__program_representation_utils__du_stag_ordered_print_goal_info_2_0
  }
};

#line 2025 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_print_goal_info_2[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_print_goal_info_2_0
};

#line 2030 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_print_goal_info_2[1] = {
  (MR_Integer) 0
};

#line 2035 "program_representation_utils.c"
const MR_TypeCtorInfo_Struct program_representation_utils__program_representation_utils__type_ctor_info_print_goal_info_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (program_representation_utils____Unify____print_goal_info_2_0_10001)),
  ((MR_Box) (program_representation_utils____Compare____print_goal_info_2_0_10001)),
  (MR_String) "program_representation_utils",
  (MR_String) "print_goal_info",
  {
    program_representation_utils__program_representation_utils__du_name_ordered_print_goal_info_2
  },
  {
    program_representation_utils__program_representation_utils__du_ptag_ordered_print_goal_info_2
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  program_representation_utils__program_representation_utils__functor_number_map_print_goal_info_2
};

#line 2056 "program_representation_utils.c"
static const MR_EnumFunctorDesc program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_0 = {
  (MR_String) "seen_duplicate_instantiation",
  (MR_Integer) 0
};

#line 2062 "program_representation_utils.c"
static const MR_EnumFunctorDesc program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_1 = {
  (MR_String) "have_not_seen_duplicate_instantiation",
  (MR_Integer) 1
};

#line 2068 "program_representation_utils.c"
static const MR_EnumFunctorDescPtr program_representation_utils__program_representation_utils__enum_value_ordered_seen_duplicate_instantiation_0[2] = {
  &program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_0,
  &program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_1
};

#line 2074 "program_representation_utils.c"
static const MR_EnumFunctorDescPtr program_representation_utils__program_representation_utils__enum_name_ordered_seen_duplicate_instantiation_0[2] = {
  &program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_1,
  &program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_0
};

#line 2080 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_seen_duplicate_instantiation_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2086 "program_representation_utils.c"
const MR_TypeCtorInfo_Struct program_representation_utils__program_representation_utils__type_ctor_info_seen_duplicate_instantiation_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (program_representation_utils____Unify____seen_duplicate_instantiation_0_0_10001)),
  ((MR_Box) (program_representation_utils____Compare____seen_duplicate_instantiation_0_0_10001)),
  (MR_String) "program_representation_utils",
  (MR_String) "seen_duplicate_instantiation",
  {
    program_representation_utils__program_representation_utils__enum_name_ordered_seen_duplicate_instantiation_0
  },
  {
    program_representation_utils__program_representation_utils__enum_value_ordered_seen_duplicate_instantiation_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  program_representation_utils__program_representation_utils__functor_number_map_seen_duplicate_instantiation_0
};

#line 2107 "program_representation_utils.c"
const MR_BaseTypeclassInfo base_typeclass_info_program_representation_utils__goal_annotation__arity1__unit__unit__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001))
};

#line 2117 "program_representation_utils.c"
static const MR_ConstString program_representation_utils__program_representation_utils__type_class_id_var_names_goal_annotation_1[1] = {
  (MR_String) "T"
};

#line 2122 "program_representation_utils.c"
static const MR_TypeClassMethod program_representation_utils__program_representation_utils__type_class_id_method_ids_goal_annotation_1[1] = {
  {
    (MR_String) "print_goal_annotation_to_strings",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 2131 "program_representation_utils.c"
static const MR_TypeClassId program_representation_utils__program_representation_utils__type_class_id_goal_annotation_1 = {
  (MR_String) "program_representation_utils",
  (MR_String) "goal_annotation",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  program_representation_utils__program_representation_utils__type_class_id_var_names_goal_annotation_1,
  program_representation_utils__program_representation_utils__type_class_id_method_ids_goal_annotation_1
};

#line 2142 "program_representation_utils.c"
const MR_TypeClassDeclStruct program_representation_utils__program_representation_utils__type_class_decl_goal_annotation_1 = {
  &program_representation_utils__program_representation_utils__type_class_id_goal_annotation_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 2150 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____atomic_goal_is_call_0_0_10001(
#line 2153 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 2155 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2)
#line 2157 "program_representation_utils.c"
{
#line 2159 "program_representation_utils.c"
  {
#line 2161 "program_representation_utils.c"
    MR_bool program_representation_utils__succeeded;

#line 2164 "program_representation_utils.c"
    {
#line 2166 "program_representation_utils.c"
      program_representation_utils__succeeded = program_representation_utils____Unify____atomic_goal_is_call_0_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2));
    }
#line 2169 "program_representation_utils.c"
    return program_representation_utils__succeeded;
#line 2171 "program_representation_utils.c"
  }
#line 2173 "program_representation_utils.c"
}

#line 2176 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____atomic_goal_is_call_0_0_10001(
#line 2179 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 2181 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 2183 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3)
#line 2185 "program_representation_utils.c"
{
#line 2187 "program_representation_utils.c"
  {
#line 2189 "program_representation_utils.c"
    MR_Word program_representation_utils__conv0_HeadVar__1_1;

#line 2192 "program_representation_utils.c"
    {
#line 2194 "program_representation_utils.c"
      program_representation_utils____Compare____atomic_goal_is_call_0_0(&program_representation_utils__conv0_HeadVar__1_1, ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3));
    }
#line 2197 "program_representation_utils.c"
    *program_representation_utils__wrapper_arg_1 = ((MR_Box) (program_representation_utils__conv0_HeadVar__1_1));
#line 2199 "program_representation_utils.c"
  }
#line 2201 "program_representation_utils.c"
}

#line 2204 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_0_0_10001(
#line 2207 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 2209 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2)
#line 2211 "program_representation_utils.c"
{
#line 2213 "program_representation_utils.c"
  {
#line 2215 "program_representation_utils.c"
    MR_bool program_representation_utils__succeeded;

#line 2218 "program_representation_utils.c"
    {
#line 2220 "program_representation_utils.c"
      program_representation_utils__succeeded = program_representation_utils____Unify____inst_map_0_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2));
    }
#line 2223 "program_representation_utils.c"
    return program_representation_utils__succeeded;
#line 2225 "program_representation_utils.c"
  }
#line 2227 "program_representation_utils.c"
}

#line 2230 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____inst_map_0_0_10001(
#line 2233 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 2235 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 2237 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3)
#line 2239 "program_representation_utils.c"
{
#line 2241 "program_representation_utils.c"
  {
#line 2243 "program_representation_utils.c"
    MR_Word program_representation_utils__conv0_HeadVar__1_1;

#line 2246 "program_representation_utils.c"
    {
#line 2248 "program_representation_utils.c"
      program_representation_utils____Compare____inst_map_0_0(&program_representation_utils__conv0_HeadVar__1_1, ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3));
    }
#line 2251 "program_representation_utils.c"
    *program_representation_utils__wrapper_arg_1 = ((MR_Box) (program_representation_utils__conv0_HeadVar__1_1));
#line 2253 "program_representation_utils.c"
  }
#line 2255 "program_representation_utils.c"
}

#line 2258 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_delta_0_0_10001(
#line 2261 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 2263 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2)
#line 2265 "program_representation_utils.c"
{
#line 2267 "program_representation_utils.c"
  {
#line 2269 "program_representation_utils.c"
    MR_bool program_representation_utils__succeeded;

#line 2272 "program_representation_utils.c"
    {
#line 2274 "program_representation_utils.c"
      program_representation_utils__succeeded = program_representation_utils____Unify____inst_map_delta_0_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2));
    }
#line 2277 "program_representation_utils.c"
    return program_representation_utils__succeeded;
#line 2279 "program_representation_utils.c"
  }
#line 2281 "program_representation_utils.c"
}

#line 2284 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____inst_map_delta_0_0_10001(
#line 2287 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 2289 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 2291 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3)
#line 2293 "program_representation_utils.c"
{
#line 2295 "program_representation_utils.c"
  {
#line 2297 "program_representation_utils.c"
    MR_Word program_representation_utils__conv0_HeadVar__1_1;

#line 2300 "program_representation_utils.c"
    {
#line 2302 "program_representation_utils.c"
      program_representation_utils____Compare____inst_map_delta_0_0(&program_representation_utils__conv0_HeadVar__1_1, ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3));
    }
#line 2305 "program_representation_utils.c"
    *program_representation_utils__wrapper_arg_1 = ((MR_Box) (program_representation_utils__conv0_HeadVar__1_1));
#line 2307 "program_representation_utils.c"
  }
#line 2309 "program_representation_utils.c"
}

#line 2312 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____print_goal_info_2_0_10001(
#line 2315 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 2317 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 2319 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 2321 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_4)
#line 2323 "program_representation_utils.c"
{
#line 2325 "program_representation_utils.c"
  {
#line 2327 "program_representation_utils.c"
    MR_bool program_representation_utils__succeeded;

#line 2330 "program_representation_utils.c"
    {
#line 2332 "program_representation_utils.c"
      program_representation_utils__succeeded = program_representation_utils____Unify____print_goal_info_2_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), ((MR_Word) program_representation_utils__wrapper_arg_4));
    }
#line 2335 "program_representation_utils.c"
    return program_representation_utils__succeeded;
#line 2337 "program_representation_utils.c"
  }
#line 2339 "program_representation_utils.c"
}

#line 2342 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____print_goal_info_2_0_10001(
#line 2345 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 2347 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 2349 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_3,
#line 2351 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_4,
#line 2353 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_5)
#line 2355 "program_representation_utils.c"
{
#line 2357 "program_representation_utils.c"
  {
#line 2359 "program_representation_utils.c"
    MR_Word program_representation_utils__conv0_HeadVar__1_1;

#line 2362 "program_representation_utils.c"
    {
#line 2364 "program_representation_utils.c"
      program_representation_utils____Compare____print_goal_info_2_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv0_HeadVar__1_1, ((MR_Word) program_representation_utils__wrapper_arg_4), ((MR_Word) program_representation_utils__wrapper_arg_5));
    }
#line 2367 "program_representation_utils.c"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_HeadVar__1_1));
#line 2369 "program_representation_utils.c"
  }
#line 2371 "program_representation_utils.c"
}

#line 2374 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____seen_duplicate_instantiation_0_0_10001(
#line 2377 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 2379 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2)
#line 2381 "program_representation_utils.c"
{
#line 2383 "program_representation_utils.c"
  {
#line 2385 "program_representation_utils.c"
    MR_bool program_representation_utils__succeeded;

#line 2388 "program_representation_utils.c"
    {
#line 2390 "program_representation_utils.c"
      program_representation_utils__succeeded = program_representation_utils____Unify____seen_duplicate_instantiation_0_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2));
    }
#line 2393 "program_representation_utils.c"
    return program_representation_utils__succeeded;
#line 2395 "program_representation_utils.c"
  }
#line 2397 "program_representation_utils.c"
}

#line 2400 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____seen_duplicate_instantiation_0_0_10001(
#line 2403 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 2405 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 2407 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3)
#line 2409 "program_representation_utils.c"
{
#line 2411 "program_representation_utils.c"
  {
#line 2413 "program_representation_utils.c"
    MR_Word program_representation_utils__conv0_HeadVar__1_1;

#line 2416 "program_representation_utils.c"
    {
#line 2418 "program_representation_utils.c"
      program_representation_utils____Compare____seen_duplicate_instantiation_0_0(&program_representation_utils__conv0_HeadVar__1_1, ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3));
    }
#line 2421 "program_representation_utils.c"
    *program_representation_utils__wrapper_arg_1 = ((MR_Box) (program_representation_utils__conv0_HeadVar__1_1));
#line 2423 "program_representation_utils.c"
  }
#line 2425 "program_representation_utils.c"
}

#line 2428 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
#line 2431 "program_representation_utils.c"
  MR_Box program_representation_utils__closure_arg,
#line 2433 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 2435 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 2437 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_3)
#line 2439 "program_representation_utils.c"
{
#line 2441 "program_representation_utils.c"
  {
#line 2443 "program_representation_utils.c"
    MR_Box program_representation_utils__closure;
#line 2445 "program_representation_utils.c"
    MR_Word program_representation_utils__conv0_HeadVar__3_3;

#line 2448 "program_representation_utils.c"
    program_representation_utils__closure = program_representation_utils__closure_arg;
#line 2450 "program_representation_utils.c"
    {
#line 2452 "program_representation_utils.c"
      program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv0_HeadVar__3_3);
    }
#line 2455 "program_representation_utils.c"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_HeadVar__3_3));
#line 2457 "program_representation_utils.c"
  }
#line 2459 "program_representation_utils.c"
}

#line 231 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_109_111_100_117_108_101_95_116_111_95_115_116_114_105_110_103_115_95_95_50_51_49_95_95_49_95_95_91_49_93_95_48_4_p_0(
#line 231 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_45,
#line 231 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_46,
#line 231 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__4_47)
#line 231 "program_representation_utils.m"
{
#line 231 "program_representation_utils.m"
  {
#line 231 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 231 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcStrings_59;

#line 383 "program_representation_utils.m"
    {
#line 383 "program_representation_utils.m"
      program_representation_utils__print_proc_to_strings_2_p_0((MR_Word) &program_representation_utils_scalar_common_1[1], program_representation_utils__HeadVar__2_45, &program_representation_utils__ProcStrings_59);
    }
#line 384 "program_representation_utils.m"
    {
#line 384 "program_representation_utils.m"
      *program_representation_utils__HeadVar__4_47 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__HeadVar__3_46, program_representation_utils__ProcStrings_59);
    }
#line 231 "program_representation_utils.m"
  }
#line 231 "program_representation_utils.m"
}

#line 863 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_112_114_105_110_116_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_116_111_95_115_116_114_105_110_103_115_95_51_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 863 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_3)
#line 863 "program_representation_utils.m"
{
#line 869 "program_representation_utils.m"
  {
#line 869 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 869 "program_representation_utils.m"
    {
#line 869 "program_representation_utils.m"
      *program_representation_utils__HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) &program_representation_utils_scalar_common_1[0]);
    }
#line 869 "program_representation_utils.m"
  }
#line 863 "program_representation_utils.m"
}

#line 773 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho8_5_p_0(
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_2,
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3,
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__Prefix_4,
#line 773 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_5)
#line 773 "program_representation_utils.m"
{
#line 776 "program_representation_utils.m"
  {
#line 776 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 776 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "program_representation_utils.m"
      {
#line 776 "program_representation_utils.m"
        {
#line 776 "program_representation_utils.m"
          *program_representation_utils__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 776 "program_representation_utils.m"
      }
#line 776 "program_representation_utils.m"
    else
#line 777 "program_representation_utils.m"
      {
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_22_22;
#line 777 "program_representation_utils.m"
        MR_Integer program_representation_utils__Arg_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 1)));
#line 777 "program_representation_utils.m"
        MR_String program_representation_utils__ArgName_15;
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_16;
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__V_17_17;
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__V_19_19;

#line 778 "program_representation_utils.m"
        {
#line 778 "program_representation_utils.m"
          mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_2, program_representation_utils__Arg_11, &program_representation_utils__ArgName_15);
        }
#line 2570 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__V_17_17 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) ((MR_String) ", ")));
        }
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__print_args_2_to_strings__ho8_5_p_0(program_representation_utils__VarTable_2, program_representation_utils__Args_12, program_representation_utils__V_17_17, &program_representation_utils__ArgsString_16);
        }
#line 781 "program_representation_utils.m"
        {
#line 781 "program_representation_utils.m"
          program_representation_utils__V_19_19 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) (program_representation_utils__ArgName_15)), program_representation_utils__ArgsString_16);
        }
#line 781 "program_representation_utils.m"
        {
#line 781 "program_representation_utils.m"
          *program_representation_utils__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_22, program_representation_utils__Prefix_4, program_representation_utils__V_19_19);
        }
#line 777 "program_representation_utils.m"
      }
#line 776 "program_representation_utils.m"
  }
#line 773 "program_representation_utils.m"
}

#line 773 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho7_5_p_0(
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_2,
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3,
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__Prefix_4,
#line 773 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_5)
#line 773 "program_representation_utils.m"
{
#line 776 "program_representation_utils.m"
  {
#line 776 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 776 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "program_representation_utils.m"
      {
#line 776 "program_representation_utils.m"
        {
#line 776 "program_representation_utils.m"
          *program_representation_utils__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 776 "program_representation_utils.m"
      }
#line 776 "program_representation_utils.m"
    else
#line 777 "program_representation_utils.m"
      {
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_22_22;
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 1)));
#line 777 "program_representation_utils.m"
        MR_String program_representation_utils__ArgName_15;
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_16;
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__V_17_17;
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__V_19_19;

#line 786 "program_representation_utils.m"
        if ((program_representation_utils__Arg_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 786 "program_representation_utils.m"
          program_representation_utils__ArgName_15 = (MR_String) "_";
#line 786 "program_representation_utils.m"
        else
#line 787 "program_representation_utils.m"
          {
#line 787 "program_representation_utils.m"
            MR_Integer program_representation_utils__VarRep_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__Arg_11, (MR_Integer) 0)));

#line 788 "program_representation_utils.m"
            {
#line 788 "program_representation_utils.m"
              mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_2, program_representation_utils__VarRep_25, &program_representation_utils__ArgName_15);
            }
#line 787 "program_representation_utils.m"
          }
#line 2665 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__V_17_17 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) ((MR_String) ", ")));
        }
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__print_args_2_to_strings__ho7_5_p_0(program_representation_utils__VarTable_2, program_representation_utils__Args_12, program_representation_utils__V_17_17, &program_representation_utils__ArgsString_16);
        }
#line 781 "program_representation_utils.m"
        {
#line 781 "program_representation_utils.m"
          program_representation_utils__V_19_19 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) (program_representation_utils__ArgName_15)), program_representation_utils__ArgsString_16);
        }
#line 781 "program_representation_utils.m"
        {
#line 781 "program_representation_utils.m"
          *program_representation_utils__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_22, program_representation_utils__Prefix_4, program_representation_utils__V_19_19);
        }
#line 777 "program_representation_utils.m"
      }
#line 776 "program_representation_utils.m"
  }
#line 773 "program_representation_utils.m"
}

#line 773 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho6_5_p_0(
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_2,
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3,
#line 773 "program_representation_utils.m"
  MR_Word program_representation_utils__Prefix_4,
#line 773 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_5)
#line 773 "program_representation_utils.m"
{
#line 776 "program_representation_utils.m"
  {
#line 776 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 776 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "program_representation_utils.m"
      {
#line 776 "program_representation_utils.m"
        {
#line 776 "program_representation_utils.m"
          *program_representation_utils__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 776 "program_representation_utils.m"
      }
#line 776 "program_representation_utils.m"
    else
#line 777 "program_representation_utils.m"
      {
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_22_22;
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 1)));
#line 777 "program_representation_utils.m"
        MR_String program_representation_utils__ArgName_15;
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_16;
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__V_17_17;
#line 777 "program_representation_utils.m"
        MR_Word program_representation_utils__V_19_19;

#line 778 "program_representation_utils.m"
        {
#line 778 "program_representation_utils.m"
          program_representation_utils__print_head_var_3_p_0(program_representation_utils__VarTable_2, program_representation_utils__Arg_11, &program_representation_utils__ArgName_15);
        }
#line 2747 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__V_17_17 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) ((MR_String) ", ")));
        }
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__print_args_2_to_strings__ho6_5_p_0(program_representation_utils__VarTable_2, program_representation_utils__Args_12, program_representation_utils__V_17_17, &program_representation_utils__ArgsString_16);
        }
#line 781 "program_representation_utils.m"
        {
#line 781 "program_representation_utils.m"
          program_representation_utils__V_19_19 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) (program_representation_utils__ArgName_15)), program_representation_utils__ArgsString_16);
        }
#line 781 "program_representation_utils.m"
        {
#line 781 "program_representation_utils.m"
          *program_representation_utils__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_22, program_representation_utils__Prefix_4, program_representation_utils__V_19_19);
        }
#line 777 "program_representation_utils.m"
      }
#line 776 "program_representation_utils.m"
  }
#line 773 "program_representation_utils.m"
}

#line 759 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_to_strings__ho3_4_p_0(
#line 759 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_6,
#line 759 "program_representation_utils.m"
  MR_Word program_representation_utils__Args_7,
#line 759 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_8)
#line 759 "program_representation_utils.m"
{
#line 765 "program_representation_utils.m"
  {
#line 765 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 765 "program_representation_utils.m"
    if ((program_representation_utils__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "program_representation_utils.m"
      {
#line 764 "program_representation_utils.m"
        {
#line 764 "program_representation_utils.m"
          *program_representation_utils__Strings_8 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 763 "program_representation_utils.m"
      }
#line 765 "program_representation_utils.m"
    else
#line 766 "program_representation_utils.m"
      {
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_22_36;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsStr_11;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_12_12;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_14_14;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__Arg_25;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_26;
#line 766 "program_representation_utils.m"
        MR_String program_representation_utils__ArgName_29;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_30;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_31_31;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_33_33;

#line 767 "program_representation_utils.m"
        {
#line 767 "program_representation_utils.m"
          program_representation_utils__V_12_12 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_18_18);
        }
#line 777 "program_representation_utils.m"
        program_representation_utils__Arg_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__Args_7, (MR_Integer) 0)));
#line 777 "program_representation_utils.m"
        program_representation_utils__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__Args_7, (MR_Integer) 1)));
#line 786 "program_representation_utils.m"
        if ((program_representation_utils__Arg_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 786 "program_representation_utils.m"
          program_representation_utils__ArgName_29 = (MR_String) "_";
#line 786 "program_representation_utils.m"
        else
#line 787 "program_representation_utils.m"
          {
#line 787 "program_representation_utils.m"
            MR_Integer program_representation_utils__VarRep_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__Arg_25, (MR_Integer) 0)));

#line 788 "program_representation_utils.m"
            {
#line 788 "program_representation_utils.m"
              mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_6, program_representation_utils__VarRep_39, &program_representation_utils__ArgName_29);
            }
#line 787 "program_representation_utils.m"
          }
#line 2857 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_22_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__V_31_31 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_36, ((MR_Box) ((MR_String) ", ")));
        }
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__print_args_2_to_strings__ho7_5_p_0(program_representation_utils__VarTable_6, program_representation_utils__Args_26, program_representation_utils__V_31_31, &program_representation_utils__ArgsString_30);
        }
#line 781 "program_representation_utils.m"
        {
#line 781 "program_representation_utils.m"
          program_representation_utils__V_33_33 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_36, ((MR_Box) (program_representation_utils__ArgName_29)), program_representation_utils__ArgsString_30);
        }
#line 781 "program_representation_utils.m"
        {
#line 781 "program_representation_utils.m"
          program_representation_utils__ArgsStr_11 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_36, program_representation_utils__V_12_12, program_representation_utils__V_33_33);
        }
#line 768 "program_representation_utils.m"
        {
#line 768 "program_representation_utils.m"
          program_representation_utils__V_14_14 = mercury__cord__snoc_2_f_0(program_representation_utils__TypeCtorInfo_18_18, program_representation_utils__ArgsStr_11, ((MR_Box) ((MR_String) ")")));
        }
#line 768 "program_representation_utils.m"
        {
#line 768 "program_representation_utils.m"
          *program_representation_utils__Strings_8 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_18_18, ((MR_Box) ((MR_String) "(")), program_representation_utils__V_14_14);
        }
#line 766 "program_representation_utils.m"
      }
#line 765 "program_representation_utils.m"
  }
#line 759 "program_representation_utils.m"
}

#line 759 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_to_strings__ho2_4_p_0(
#line 759 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_6,
#line 759 "program_representation_utils.m"
  MR_Word program_representation_utils__Args_7,
#line 759 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_8)
#line 759 "program_representation_utils.m"
{
#line 765 "program_representation_utils.m"
  {
#line 765 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 765 "program_representation_utils.m"
    if ((program_representation_utils__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "program_representation_utils.m"
      {
#line 764 "program_representation_utils.m"
        {
#line 764 "program_representation_utils.m"
          *program_representation_utils__Strings_8 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 763 "program_representation_utils.m"
      }
#line 765 "program_representation_utils.m"
    else
#line 766 "program_representation_utils.m"
      {
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_22_36;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsStr_11;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_12_12;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_14_14;
#line 766 "program_representation_utils.m"
        MR_Integer program_representation_utils__Arg_25;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_26;
#line 766 "program_representation_utils.m"
        MR_String program_representation_utils__ArgName_29;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_30;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_31_31;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_33_33;

#line 767 "program_representation_utils.m"
        {
#line 767 "program_representation_utils.m"
          program_representation_utils__V_12_12 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_18_18);
        }
#line 777 "program_representation_utils.m"
        program_representation_utils__Arg_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__Args_7, (MR_Integer) 0)));
#line 777 "program_representation_utils.m"
        program_representation_utils__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__Args_7, (MR_Integer) 1)));
#line 778 "program_representation_utils.m"
        {
#line 778 "program_representation_utils.m"
          mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_6, program_representation_utils__Arg_25, &program_representation_utils__ArgName_29);
        }
#line 2964 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_22_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__V_31_31 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_36, ((MR_Box) ((MR_String) ", ")));
        }
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__print_args_2_to_strings__ho8_5_p_0(program_representation_utils__VarTable_6, program_representation_utils__Args_26, program_representation_utils__V_31_31, &program_representation_utils__ArgsString_30);
        }
#line 781 "program_representation_utils.m"
        {
#line 781 "program_representation_utils.m"
          program_representation_utils__V_33_33 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_36, ((MR_Box) (program_representation_utils__ArgName_29)), program_representation_utils__ArgsString_30);
        }
#line 781 "program_representation_utils.m"
        {
#line 781 "program_representation_utils.m"
          program_representation_utils__ArgsStr_11 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_36, program_representation_utils__V_12_12, program_representation_utils__V_33_33);
        }
#line 768 "program_representation_utils.m"
        {
#line 768 "program_representation_utils.m"
          program_representation_utils__V_14_14 = mercury__cord__snoc_2_f_0(program_representation_utils__TypeCtorInfo_18_18, program_representation_utils__ArgsStr_11, ((MR_Box) ((MR_String) ")")));
        }
#line 768 "program_representation_utils.m"
        {
#line 768 "program_representation_utils.m"
          *program_representation_utils__Strings_8 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_18_18, ((MR_Box) ((MR_String) "(")), program_representation_utils__V_14_14);
        }
#line 766 "program_representation_utils.m"
      }
#line 765 "program_representation_utils.m"
  }
#line 759 "program_representation_utils.m"
}

#line 959 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_wrapper__ho1_10_p_0(
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_32,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__ParentGoalId_12,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_17,
#line 959 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_18,
#line 959 "program_representation_utils.m"
  MR_Integer program_representation_utils__STATE_VARIABLE_GoalNum_0_19,
#line 959 "program_representation_utils.m"
  MR_Integer * program_representation_utils__STATE_VARIABLE_GoalNum_20,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_21,
#line 959 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_22,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_23,
#line 959 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_24)
#line 959 "program_representation_utils.m"
{
#line 963 "program_representation_utils.m"
  {
#line 963 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 963 "program_representation_utils.m"
    MR_Word program_representation_utils__V_25_25;
#line 963 "program_representation_utils.m"
    MR_Word program_representation_utils__V_29_29;

#line 974 "program_representation_utils.m"
    {
#line 974 "program_representation_utils.m"
      program_representation_utils__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 974 "program_representation_utils.m"
      MR_hl_field(MR_mktag(3), program_representation_utils__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 974 "program_representation_utils.m"
      MR_hl_field(MR_mktag(3), program_representation_utils__V_29_29, 1) = ((MR_Box) (program_representation_utils__STATE_VARIABLE_GoalNum_0_19));
#line 974 "program_representation_utils.m"
      MR_hl_field(MR_mktag(3), program_representation_utils__V_29_29, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 974 "program_representation_utils.m"
    }
#line 964 "program_representation_utils.m"
    {
#line 964 "program_representation_utils.m"
      program_representation_utils__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_25_25, 0) = ((MR_Box) (program_representation_utils__ParentGoalId_12));
#line 964 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_25_25, 1) = ((MR_Box) (program_representation_utils__V_29_29));
#line 964 "program_representation_utils.m"
    }
#line 964 "program_representation_utils.m"
    {
#line 964 "program_representation_utils.m"
      program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_32, program_representation_utils__V_25_25, program_representation_utils__STATE_VARIABLE_Goal_0_17, program_representation_utils__STATE_VARIABLE_Goal_18, program_representation_utils__STATE_VARIABLE_Counter_0_21, program_representation_utils__STATE_VARIABLE_Counter_22, program_representation_utils__STATE_VARIABLE_Map_0_23, program_representation_utils__STATE_VARIABLE_Map_24);
    }
#line 966 "program_representation_utils.m"
    *program_representation_utils__STATE_VARIABLE_GoalNum_20 = (program_representation_utils__STATE_VARIABLE_GoalNum_0_19 + (MR_Integer) 1);
#line 963 "program_representation_utils.m"
  }
#line 959 "program_representation_utils.m"
}

#line 924 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__924__1_1_f_0(
#line 924 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__1_80)
#line 924 "program_representation_utils.m"
{
#line 924 "program_representation_utils.m"
  {
#line 924 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 924 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVar__2_81;

#line 924 "program_representation_utils.m"
    {
#line 924 "program_representation_utils.m"
      program_representation_utils__HeadVar__2_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 924 "program_representation_utils.m"
      MR_hl_field(MR_mktag(2), program_representation_utils__HeadVar__2_81, 0) = ((MR_Box) (program_representation_utils__HeadVar__1_80));
#line 924 "program_representation_utils.m"
    }
#line 924 "program_representation_utils.m"
    return program_representation_utils__HeadVar__2_81;
#line 924 "program_representation_utils.m"
  }
#line 924 "program_representation_utils.m"
}

#line 919 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__919__1_1_f_0(
#line 919 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__1_87)
#line 919 "program_representation_utils.m"
{
#line 919 "program_representation_utils.m"
  {
#line 919 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 919 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVar__2_88;

#line 919 "program_representation_utils.m"
    {
#line 919 "program_representation_utils.m"
      program_representation_utils__HeadVar__2_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 919 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__2_88, 0) = ((MR_Box) (program_representation_utils__HeadVar__1_87));
#line 919 "program_representation_utils.m"
    }
#line 919 "program_representation_utils.m"
    return program_representation_utils__HeadVar__2_88;
#line 919 "program_representation_utils.m"
  }
#line 919 "program_representation_utils.m"
}

#line 1212 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1212__2_3_p_0(
#line 1212 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_52,
#line 1212 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_53,
#line 1212 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_54)
#line 1212 "program_representation_utils.m"
{
#line 1212 "program_representation_utils.m"
  {
#line 1212 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1212 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__1_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1214 "program_representation_utils.m"
      *program_representation_utils__HeadVar__3_54 = program_representation_utils__HeadVar__2_53;
#line 1212 "program_representation_utils.m"
    else
#line 1210 "program_representation_utils.m"
      {
#line 1210 "program_representation_utils.m"
        MR_Integer program_representation_utils__VarI_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__1_52, (MR_Integer) 0)));

#line 1211 "program_representation_utils.m"
        {
#line 1211 "program_representation_utils.m"
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (program_representation_utils__VarI_55)), program_representation_utils__HeadVar__2_53, program_representation_utils__HeadVar__3_54);
#line 1211 "program_representation_utils.m"
          return;
        }
#line 1210 "program_representation_utils.m"
      }
#line 1212 "program_representation_utils.m"
  }
#line 1212 "program_representation_utils.m"
}

#line 1212 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1212__1_3_p_0(
#line 1212 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_30,
#line 1212 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_31,
#line 1212 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_32)
#line 1212 "program_representation_utils.m"
{
#line 1212 "program_representation_utils.m"
  {
#line 1212 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1212 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__1_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1214 "program_representation_utils.m"
      *program_representation_utils__HeadVar__3_32 = program_representation_utils__HeadVar__2_31;
#line 1212 "program_representation_utils.m"
    else
#line 1210 "program_representation_utils.m"
      {
#line 1210 "program_representation_utils.m"
        MR_Integer program_representation_utils__VarI_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__1_30, (MR_Integer) 0)));

#line 1211 "program_representation_utils.m"
        {
#line 1211 "program_representation_utils.m"
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (program_representation_utils__VarI_17)), program_representation_utils__HeadVar__2_31, program_representation_utils__HeadVar__3_32);
#line 1211 "program_representation_utils.m"
          return;
        }
#line 1210 "program_representation_utils.m"
      }
#line 1212 "program_representation_utils.m"
  }
#line 1212 "program_representation_utils.m"
}

#line 1177 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__calc_inst_map_delta__1177__1_5_p_0(
#line 1177 "program_representation_utils.m"
  MR_Word program_representation_utils__Before_4,
#line 1177 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_15,
#line 1177 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_16,
#line 1177 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__4_17,
#line 1177 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_18)
#line 1177 "program_representation_utils.m"
{
#line 1177 "program_representation_utils.m"
  {
#line 1177 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1177 "program_representation_utils.m"
    MR_Word program_representation_utils__BeforeInst_11;
#line 1138 "program_representation_utils.m"
    MR_Word program_representation_utils__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Before_4, (MR_Integer) 0)));
#line 1138 "program_representation_utils.m"
    MR_Word program_representation_utils__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Before_4, (MR_Integer) 1)));
#line 1138 "program_representation_utils.m"
    MR_Box program_representation_utils__conv0_BeforeInst_11;

#line 1138 "program_representation_utils.m"
    {
#line 1138 "program_representation_utils.m"
      program_representation_utils__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__V_19_19, program_representation_utils__HeadVar__2_15, &program_representation_utils__conv0_BeforeInst_11);
    }
#line 1138 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1138 "program_representation_utils.m"
      {
#line 1138 "program_representation_utils.m"
        program_representation_utils__BeforeInst_11 = ((MR_Word) program_representation_utils__conv0_BeforeInst_11);
#line 1138 "program_representation_utils.m"
        program_representation_utils__succeeded = MR_TRUE;
#line 1138 "program_representation_utils.m"
      }
#line 1177 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1152 "program_representation_utils.m"
      if ((program_representation_utils__BeforeInst_11 == (MR_Integer) 0))
#line 1145 "program_representation_utils.m"
        if ((program_representation_utils__HeadVar__3_16 == (MR_Integer) 0))
#line 1144 "program_representation_utils.m"
          *program_representation_utils__HeadVar__5_18 = program_representation_utils__HeadVar__4_17;
#line 1145 "program_representation_utils.m"
        else
#line 1148 "program_representation_utils.m"
          {
#line 1150 "program_representation_utils.m"
            {
#line 1150 "program_representation_utils.m"
              mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (program_representation_utils__HeadVar__2_15)), program_representation_utils__HeadVar__4_17, program_representation_utils__HeadVar__5_18);
#line 1150 "program_representation_utils.m"
              return;
            }
#line 1148 "program_representation_utils.m"
          }
#line 1152 "program_representation_utils.m"
      else
#line 1152 "program_representation_utils.m"
        if ((program_representation_utils__BeforeInst_11 == (MR_Integer) 1))
#line 1153 "program_representation_utils.m"
          {
#line 1158 "program_representation_utils.m"
            if ((program_representation_utils__HeadVar__3_16 == (MR_Integer) 0))
#line 1155 "program_representation_utils.m"
              {
#line 1156 "program_representation_utils.m"
                {
#line 1156 "program_representation_utils.m"
                  mercury__require__error_1_p_0((MR_String) "calc_inst_map_delta: Variables cannot become less instantiated.");
#line 1156 "program_representation_utils.m"
                  return;
                }
#line 1155 "program_representation_utils.m"
              }
#line 1158 "program_representation_utils.m"
            else
#line 1158 "program_representation_utils.m"
              if ((program_representation_utils__HeadVar__3_16 == (MR_Integer) 1))
#line 1159 "program_representation_utils.m"
                {
#line 1159 "program_representation_utils.m"
                }
#line 1158 "program_representation_utils.m"
              else
#line 1160 "program_representation_utils.m"
                {
#line 1160 "program_representation_utils.m"
                }
#line 1163 "program_representation_utils.m"
            *program_representation_utils__HeadVar__5_18 = program_representation_utils__HeadVar__4_17;
#line 1153 "program_representation_utils.m"
          }
#line 1152 "program_representation_utils.m"
        else
#line 1165 "program_representation_utils.m"
          {
#line 1170 "program_representation_utils.m"
            if ((program_representation_utils__HeadVar__3_16 == (MR_Integer) 0))
#line 1167 "program_representation_utils.m"
              {
#line 1168 "program_representation_utils.m"
                {
#line 1168 "program_representation_utils.m"
                  mercury__require__error_1_p_0((MR_String) "calc_inst_map_delta: Variables cannot become less instantiated.");
#line 1168 "program_representation_utils.m"
                  return;
                }
#line 1167 "program_representation_utils.m"
              }
#line 1170 "program_representation_utils.m"
            else
#line 1170 "program_representation_utils.m"
              if ((program_representation_utils__HeadVar__3_16 == (MR_Integer) 1))
#line 1171 "program_representation_utils.m"
                {
#line 1171 "program_representation_utils.m"
                }
#line 1170 "program_representation_utils.m"
              else
#line 1172 "program_representation_utils.m"
                {
#line 1172 "program_representation_utils.m"
                }
#line 1175 "program_representation_utils.m"
            *program_representation_utils__HeadVar__5_18 = program_representation_utils__HeadVar__4_17;
#line 1165 "program_representation_utils.m"
          }
#line 1177 "program_representation_utils.m"
    else
#line 1183 "program_representation_utils.m"
      if ((program_representation_utils__HeadVar__3_16 == (MR_Integer) 0))
#line 1182 "program_representation_utils.m"
        *program_representation_utils__HeadVar__5_18 = program_representation_utils__HeadVar__4_17;
#line 1183 "program_representation_utils.m"
      else
#line 1186 "program_representation_utils.m"
        {
#line 1188 "program_representation_utils.m"
          {
#line 1188 "program_representation_utils.m"
            mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (program_representation_utils__HeadVar__2_15)), program_representation_utils__HeadVar__4_17, program_representation_utils__HeadVar__5_18);
#line 1188 "program_representation_utils.m"
            return;
          }
#line 1186 "program_representation_utils.m"
        }
#line 1177 "program_representation_utils.m"
  }
#line 1177 "program_representation_utils.m"
}

#line 1043 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__merge_inst_map__1043__1_3_p_0(
#line 1043 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_24,
#line 1043 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_25,
#line 1043 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_26)
#line 1043 "program_representation_utils.m"
{
#line 1043 "program_representation_utils.m"
  {
#line 1043 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1043 "program_representation_utils.m"
    {
#line 1043 "program_representation_utils.m"
      mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__HeadVar__1_24, program_representation_utils__HeadVar__2_25, program_representation_utils__HeadVar__3_26);
#line 1043 "program_representation_utils.m"
      return;
    }
#line 1043 "program_representation_utils.m"
  }
#line 1043 "program_representation_utils.m"
}

#line 547 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__547__1_2_f_0(
#line 547 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_194,
#line 547 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_195)
#line 547 "program_representation_utils.m"
{
#line 547 "program_representation_utils.m"
  {
#line 547 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 547 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVar__3_196;

#line 547 "program_representation_utils.m"
    {
#line 547 "program_representation_utils.m"
      program_representation_utils__HeadVar__3_196 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__HeadVar__1_194, program_representation_utils__HeadVar__2_195);
    }
#line 547 "program_representation_utils.m"
    return program_representation_utils__HeadVar__3_196;
#line 547 "program_representation_utils.m"
  }
#line 547 "program_representation_utils.m"
}

#line 545 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__545__1_2_f_0(
#line 545 "program_representation_utils.m"
  MR_Word program_representation_utils__LinePrefix_46,
#line 545 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_159)
#line 545 "program_representation_utils.m"
{
#line 545 "program_representation_utils.m"
  {
#line 545 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 545 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVar__3_160;
#line 545 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_193_193 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 545 "program_representation_utils.m"
    MR_Word program_representation_utils__V_161_161;
#line 545 "program_representation_utils.m"
    MR_Word program_representation_utils__V_162_162;

#line 545 "program_representation_utils.m"
    {
#line 545 "program_representation_utils.m"
      program_representation_utils__V_162_162 = program_representation_utils__nl_0_f_0();
    }
#line 545 "program_representation_utils.m"
    {
#line 545 "program_representation_utils.m"
      program_representation_utils__V_161_161 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_193_193, program_representation_utils__HeadVar__2_159, program_representation_utils__V_162_162);
    }
#line 545 "program_representation_utils.m"
    {
#line 545 "program_representation_utils.m"
      program_representation_utils__HeadVar__3_160 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_193_193, program_representation_utils__LinePrefix_46, program_representation_utils__V_161_161);
    }
#line 545 "program_representation_utils.m"
    return program_representation_utils__HeadVar__3_160;
#line 545 "program_representation_utils.m"
  }
#line 545 "program_representation_utils.m"
}

#line 390 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__IntroducedFrom__func__print_proc_to_strings__390__1_2_f_0(
#line 390 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_6,
#line 390 "program_representation_utils.m"
  MR_Box program_representation_utils__HeadVar__2_7)
#line 390 "program_representation_utils.m"
{
#line 390 "program_representation_utils.m"
  {
#line 390 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 390 "program_representation_utils.m"
    MR_Box program_representation_utils__HeadVar__3_8;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeInfo_10_10;

#line 3489 "program_representation_utils.c"
    {
#line 3491 "program_representation_utils.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(program_representation_utils__TypeClassInfo_for_goal_annotation_6, (MR_Integer) 1, &program_representation_utils__TypeInfo_10_10);
    }
#line 390 "program_representation_utils.m"
    {
#line 390 "program_representation_utils.m"
      return program_representation_utils__HeadVar__3_8 = mercury__std_util__id_1_f_0(program_representation_utils__TypeInfo_10_10, program_representation_utils__HeadVar__2_7);
    }
#line 390 "program_representation_utils.m"
    return program_representation_utils__HeadVar__3_8;
#line 390 "program_representation_utils.m"
  }
#line 390 "program_representation_utils.m"
}

#line 231 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__print_module_to_strings__231__1_4_p_0(
#line 231 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_44,
#line 231 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_45,
#line 231 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_46,
#line 231 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__4_47)
#line 231 "program_representation_utils.m"
{
#line 231 "program_representation_utils.m"
  {
#line 231 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 231 "program_representation_utils.m"
    {
#line 231 "program_representation_utils.m"
      program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_109_111_100_117_108_101_95_116_111_95_115_116_114_105_110_103_115_95_95_50_51_49_95_95_49_95_95_91_49_93_95_48_4_p_0(program_representation_utils__HeadVar__2_45, program_representation_utils__HeadVar__3_46, program_representation_utils__HeadVar__4_47);
#line 231 "program_representation_utils.m"
      return;
    }
#line 231 "program_representation_utils.m"
  }
#line 231 "program_representation_utils.m"
}

#line 863 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
#line 863 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 863 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_3)
#line 863 "program_representation_utils.m"
{
#line 869 "program_representation_utils.m"
  {
#line 869 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 869 "program_representation_utils.m"
    {
#line 869 "program_representation_utils.m"
      program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_112_114_105_110_116_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_116_111_95_115_116_114_105_110_103_115_95_51_95_95_91_49_44_32_50_93_95_48_3_p_0(program_representation_utils__HeadVar__3_3);
#line 869 "program_representation_utils.m"
      return;
    }
#line 869 "program_representation_utils.m"
  }
#line 863 "program_representation_utils.m"
}

#line 134 "program_representation_utils.m"
void MR_CALL 
program_representation_utils____Compare____seen_duplicate_instantiation_0_0(
#line 134 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__1_1,
#line 134 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 134 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3)
#line 134 "program_representation_utils.m"
{
#line 134 "program_representation_utils.m"
  {
#line 134 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 134 "program_representation_utils.m"
    MR_Integer program_representation_utils__Cast_HeadVar1_4 = (MR_Integer) program_representation_utils__HeadVar__2_2;
#line 134 "program_representation_utils.m"
    MR_Integer program_representation_utils__Cast_HeadVar2_5 = (MR_Integer) program_representation_utils__HeadVar__3_3;

#line 134 "program_representation_utils.m"
    {
#line 134 "program_representation_utils.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(program_representation_utils__HeadVar__1_1, program_representation_utils__Cast_HeadVar1_4, program_representation_utils__Cast_HeadVar2_5);
#line 134 "program_representation_utils.m"
      return;
    }
#line 134 "program_representation_utils.m"
  }
#line 134 "program_representation_utils.m"
}

#line 134 "program_representation_utils.m"
MR_bool MR_CALL 
program_representation_utils____Unify____seen_duplicate_instantiation_0_0(
#line 134 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_1,
#line 134 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2)
#line 134 "program_representation_utils.m"
{
#line 3603 "program_representation_utils.c"
  {
#line 3605 "program_representation_utils.c"
    MR_bool program_representation_utils__succeeded = (program_representation_utils__HeadVar__2_1 == program_representation_utils__HeadVar__2_2);

#line 3608 "program_representation_utils.c"
    return program_representation_utils__succeeded;
#line 3610 "program_representation_utils.c"
  }
#line 134 "program_representation_utils.m"
}

#line 56 "program_representation_utils.m"
void MR_CALL 
program_representation_utils____Compare____print_goal_info_2_0(
#line 56 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_Key_11,
#line 56 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_GoalAnn_12,
#line 56 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__1_1,
#line 56 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 56 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3)
#line 56 "program_representation_utils.m"
{
#line 56 "program_representation_utils.m"
  {
#line 56 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 56 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastX_9 = (MR_Integer) program_representation_utils__HeadVar__2_2;
#line 56 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastY_10 = (MR_Integer) program_representation_utils__HeadVar__3_3;

#line 56 "program_representation_utils.m"
    program_representation_utils__succeeded = (program_representation_utils__CastX_9 == program_representation_utils__CastY_10);
#line 56 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 3643 "program_representation_utils.c"
      *program_representation_utils__HeadVar__1_1 = (MR_Integer) 0;
#line 56 "program_representation_utils.m"
    else
#line 56 "program_representation_utils.m"
      {
#line 56 "program_representation_utils.m"
        MR_Word program_representation_utils__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 56 "program_representation_utils.m"
        MR_Word program_representation_utils__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 56 "program_representation_utils.m"
        MR_Word program_representation_utils__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));
#line 56 "program_representation_utils.m"
        MR_Word program_representation_utils__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__3_3, (MR_Integer) 1)));
#line 56 "program_representation_utils.m"
        MR_Word program_representation_utils__V_8_8;

#line 56 "program_representation_utils.m"
        {
#line 56 "program_representation_utils.m"
          mercury__private_builtin__builtin_compare_pred_3_p_0(&program_representation_utils__V_8_8, (MR_Word) program_representation_utils__V_4_4, (MR_Word) program_representation_utils__V_6_6);
        }
#line 3665 "program_representation_utils.c"
        program_representation_utils__succeeded = (program_representation_utils__V_8_8 == (MR_Integer) 0);
#line 56 "program_representation_utils.m"
        program_representation_utils__succeeded = !(program_representation_utils__succeeded);
#line 56 "program_representation_utils.m"
        if (program_representation_utils__succeeded)
#line 56 "program_representation_utils.m"
          *program_representation_utils__HeadVar__1_1 = program_representation_utils__V_8_8;
#line 56 "program_representation_utils.m"
        else
#line 56 "program_representation_utils.m"
          {
#line 56 "program_representation_utils.m"
            {
#line 56 "program_representation_utils.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_name_table_0, program_representation_utils__HeadVar__1_1, ((MR_Box) (program_representation_utils__V_5_5)), ((MR_Box) (program_representation_utils__V_7_7)));
#line 56 "program_representation_utils.m"
              return;
            }
#line 56 "program_representation_utils.m"
          }
#line 56 "program_representation_utils.m"
      }
#line 56 "program_representation_utils.m"
  }
#line 56 "program_representation_utils.m"
}

#line 56 "program_representation_utils.m"
MR_bool MR_CALL 
program_representation_utils____Unify____print_goal_info_2_0(
#line 56 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_Key_9,
#line 56 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_GoalAnn_10,
#line 56 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 56 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2)
#line 56 "program_representation_utils.m"
{
#line 56 "program_representation_utils.m"
  {
#line 56 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 56 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastX_7 = (MR_Integer) program_representation_utils__HeadVar__1_1;
#line 56 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastY_8 = (MR_Integer) program_representation_utils__HeadVar__2_2;

#line 56 "program_representation_utils.m"
    program_representation_utils__succeeded = (program_representation_utils__CastX_7 == program_representation_utils__CastY_8);
#line 56 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 56 "program_representation_utils.m"
      program_representation_utils__succeeded = MR_TRUE;
#line 56 "program_representation_utils.m"
    else
#line 56 "program_representation_utils.m"
      {
#line 56 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_11_11;
#line 56 "program_representation_utils.m"
        MR_Word program_representation_utils__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));
#line 56 "program_representation_utils.m"
        MR_Word program_representation_utils__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 1)));
#line 56 "program_representation_utils.m"
        MR_Word program_representation_utils__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 56 "program_representation_utils.m"
        MR_Word program_representation_utils__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));

#line 3736 "program_representation_utils.c"
        {
#line 3738 "program_representation_utils.c"
          program_representation_utils__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) program_representation_utils__V_3_3, (MR_Word) program_representation_utils__V_5_5);
        }
#line 56 "program_representation_utils.m"
        if (program_representation_utils__succeeded)
#line 56 "program_representation_utils.m"
          {
#line 3745 "program_representation_utils.c"
            program_representation_utils__TypeCtorInfo_11_11 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_name_table_0;
#line 3747 "program_representation_utils.c"
            {
#line 3749 "program_representation_utils.c"
              return program_representation_utils__succeeded = mercury__builtin__unify_2_p_0(program_representation_utils__TypeCtorInfo_11_11, ((MR_Box) (program_representation_utils__V_4_4)), ((MR_Box) (program_representation_utils__V_6_6)));
            }
#line 56 "program_representation_utils.m"
          }
#line 56 "program_representation_utils.m"
      }
#line 56 "program_representation_utils.m"
    return program_representation_utils__succeeded;
#line 56 "program_representation_utils.m"
  }
#line 56 "program_representation_utils.m"
}

#line 1125 "program_representation_utils.m"
void MR_CALL 
program_representation_utils____Compare____inst_map_delta_0_0(
#line 1125 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__1_1,
#line 1125 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 1125 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3)
#line 1125 "program_representation_utils.m"
{
#line 1125 "program_representation_utils.m"
  {
#line 1125 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1125 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastX_6 = (MR_Integer) program_representation_utils__HeadVar__2_2;
#line 1125 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastY_7 = (MR_Integer) program_representation_utils__HeadVar__3_3;

#line 1125 "program_representation_utils.m"
    program_representation_utils__succeeded = (program_representation_utils__CastX_6 == program_representation_utils__CastY_7);
#line 1125 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 3787 "program_representation_utils.c"
      *program_representation_utils__HeadVar__1_1 = (MR_Integer) 0;
#line 1125 "program_representation_utils.m"
    else
#line 1125 "program_representation_utils.m"
      {
#line 1125 "program_representation_utils.m"
        MR_Word program_representation_utils__V_4_4 = (MR_Word) program_representation_utils__HeadVar__2_2;
#line 1125 "program_representation_utils.m"
        MR_Word program_representation_utils__V_5_5 = (MR_Word) program_representation_utils__HeadVar__3_3;

#line 1125 "program_representation_utils.m"
        {
#line 1125 "program_representation_utils.m"
          mercury__builtin__compare_3_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__HeadVar__1_1, ((MR_Box) (program_representation_utils__V_4_4)), ((MR_Box) (program_representation_utils__V_5_5)));
#line 1125 "program_representation_utils.m"
          return;
        }
#line 1125 "program_representation_utils.m"
      }
#line 1125 "program_representation_utils.m"
  }
#line 1125 "program_representation_utils.m"
}

#line 1125 "program_representation_utils.m"
MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_delta_0_0(
#line 1125 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 1125 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2)
#line 1125 "program_representation_utils.m"
{
#line 1125 "program_representation_utils.m"
  {
#line 1125 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1125 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastX_5 = (MR_Integer) program_representation_utils__HeadVar__1_1;
#line 1125 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastY_6 = (MR_Integer) program_representation_utils__HeadVar__2_2;

#line 1125 "program_representation_utils.m"
    program_representation_utils__succeeded = (program_representation_utils__CastX_5 == program_representation_utils__CastY_6);
#line 1125 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1125 "program_representation_utils.m"
      program_representation_utils__succeeded = MR_TRUE;
#line 1125 "program_representation_utils.m"
    else
#line 1125 "program_representation_utils.m"
      {
#line 1125 "program_representation_utils.m"
        MR_Word program_representation_utils__V_3_3 = (MR_Word) program_representation_utils__HeadVar__1_1;
#line 1125 "program_representation_utils.m"
        MR_Word program_representation_utils__V_4_4 = (MR_Word) program_representation_utils__HeadVar__2_2;

#line 3845 "program_representation_utils.c"
        {
#line 3847 "program_representation_utils.c"
          return program_representation_utils__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], ((MR_Box) (program_representation_utils__V_3_3)), ((MR_Box) (program_representation_utils__V_4_4)));
        }
#line 1125 "program_representation_utils.m"
      }
#line 1125 "program_representation_utils.m"
    return program_representation_utils__succeeded;
#line 1125 "program_representation_utils.m"
  }
#line 1125 "program_representation_utils.m"
}

#line 981 "program_representation_utils.m"
void MR_CALL 
program_representation_utils____Compare____inst_map_0_0(
#line 981 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__1_1,
#line 981 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 981 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3)
#line 981 "program_representation_utils.m"
{
#line 981 "program_representation_utils.m"
  {
#line 981 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 981 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastX_9 = (MR_Integer) program_representation_utils__HeadVar__2_2;
#line 981 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastY_10 = (MR_Integer) program_representation_utils__HeadVar__3_3;

#line 981 "program_representation_utils.m"
    program_representation_utils__succeeded = (program_representation_utils__CastX_9 == program_representation_utils__CastY_10);
#line 981 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 3883 "program_representation_utils.c"
      *program_representation_utils__HeadVar__1_1 = (MR_Integer) 0;
#line 981 "program_representation_utils.m"
    else
#line 981 "program_representation_utils.m"
      {
#line 981 "program_representation_utils.m"
        MR_Word program_representation_utils__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 981 "program_representation_utils.m"
        MR_Word program_representation_utils__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 981 "program_representation_utils.m"
        MR_Word program_representation_utils__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));
#line 981 "program_representation_utils.m"
        MR_Word program_representation_utils__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__3_3, (MR_Integer) 1)));
#line 981 "program_representation_utils.m"
        MR_Word program_representation_utils__V_8_8;

#line 981 "program_representation_utils.m"
        {
#line 981 "program_representation_utils.m"
          mercury__builtin__compare_3_p_0((MR_Word) &program_representation_utils_scalar_common_2[1], &program_representation_utils__V_8_8, ((MR_Box) (program_representation_utils__V_4_4)), ((MR_Box) (program_representation_utils__V_6_6)));
        }
#line 3905 "program_representation_utils.c"
        program_representation_utils__succeeded = (program_representation_utils__V_8_8 == (MR_Integer) 0);
#line 981 "program_representation_utils.m"
        program_representation_utils__succeeded = !(program_representation_utils__succeeded);
#line 981 "program_representation_utils.m"
        if (program_representation_utils__succeeded)
#line 981 "program_representation_utils.m"
          *program_representation_utils__HeadVar__1_1 = program_representation_utils__V_8_8;
#line 981 "program_representation_utils.m"
        else
#line 981 "program_representation_utils.m"
          {
#line 981 "program_representation_utils.m"
            {
#line 981 "program_representation_utils.m"
              mercury__builtin__compare_3_p_0((MR_Word) &program_representation_utils_scalar_common_2[2], program_representation_utils__HeadVar__1_1, ((MR_Box) (program_representation_utils__V_5_5)), ((MR_Box) (program_representation_utils__V_7_7)));
#line 981 "program_representation_utils.m"
              return;
            }
#line 981 "program_representation_utils.m"
          }
#line 981 "program_representation_utils.m"
      }
#line 981 "program_representation_utils.m"
  }
#line 981 "program_representation_utils.m"
}

#line 981 "program_representation_utils.m"
MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_0_0(
#line 981 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 981 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2)
#line 981 "program_representation_utils.m"
{
#line 981 "program_representation_utils.m"
  {
#line 981 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 981 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastX_7 = (MR_Integer) program_representation_utils__HeadVar__1_1;
#line 981 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastY_8 = (MR_Integer) program_representation_utils__HeadVar__2_2;

#line 981 "program_representation_utils.m"
    program_representation_utils__succeeded = (program_representation_utils__CastX_7 == program_representation_utils__CastY_8);
#line 981 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 981 "program_representation_utils.m"
      program_representation_utils__succeeded = MR_TRUE;
#line 981 "program_representation_utils.m"
    else
#line 981 "program_representation_utils.m"
      {
#line 981 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeInfo_10_10;
#line 981 "program_representation_utils.m"
        MR_Word program_representation_utils__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));
#line 981 "program_representation_utils.m"
        MR_Word program_representation_utils__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 1)));
#line 981 "program_representation_utils.m"
        MR_Word program_representation_utils__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 981 "program_representation_utils.m"
        MR_Word program_representation_utils__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));

#line 3972 "program_representation_utils.c"
        {
#line 3974 "program_representation_utils.c"
          program_representation_utils__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &program_representation_utils_scalar_common_2[1], ((MR_Box) (program_representation_utils__V_3_3)), ((MR_Box) (program_representation_utils__V_5_5)));
        }
#line 981 "program_representation_utils.m"
        if (program_representation_utils__succeeded)
#line 981 "program_representation_utils.m"
          {
#line 3981 "program_representation_utils.c"
            program_representation_utils__TypeInfo_10_10 = (MR_Word) &program_representation_utils_scalar_common_2[2];
#line 3983 "program_representation_utils.c"
            {
#line 3985 "program_representation_utils.c"
              return program_representation_utils__succeeded = mercury__builtin__unify_2_p_0(program_representation_utils__TypeInfo_10_10, ((MR_Box) (program_representation_utils__V_4_4)), ((MR_Box) (program_representation_utils__V_6_6)));
            }
#line 981 "program_representation_utils.m"
          }
#line 981 "program_representation_utils.m"
      }
#line 981 "program_representation_utils.m"
    return program_representation_utils__succeeded;
#line 981 "program_representation_utils.m"
  }
#line 981 "program_representation_utils.m"
}

#line 193 "program_representation_utils.m"
void MR_CALL 
program_representation_utils____Compare____atomic_goal_is_call_0_0(
#line 193 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__1_1,
#line 193 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 193 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3)
#line 193 "program_representation_utils.m"
{
#line 193 "program_representation_utils.m"
  {
#line 193 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 193 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastX_8 = (MR_Integer) program_representation_utils__HeadVar__2_2;
#line 193 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastY_9 = (MR_Integer) program_representation_utils__HeadVar__3_3;

#line 193 "program_representation_utils.m"
    program_representation_utils__succeeded = (program_representation_utils__CastX_8 == program_representation_utils__CastY_9);
#line 193 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 4023 "program_representation_utils.c"
      *program_representation_utils__HeadVar__1_1 = (MR_Integer) 0;
#line 193 "program_representation_utils.m"
    else
#line 193 "program_representation_utils.m"
      if ((program_representation_utils__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "program_representation_utils.m"
        if ((program_representation_utils__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "program_representation_utils.m"
          *program_representation_utils__HeadVar__1_1 = (MR_Integer) 0;
#line 193 "program_representation_utils.m"
        else
#line 4035 "program_representation_utils.c"
          *program_representation_utils__HeadVar__1_1 = (MR_Integer) 2;
#line 193 "program_representation_utils.m"
      else
#line 193 "program_representation_utils.m"
        {
#line 193 "program_representation_utils.m"
          MR_Word program_representation_utils__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));

#line 193 "program_representation_utils.m"
          if ((program_representation_utils__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4046 "program_representation_utils.c"
            *program_representation_utils__HeadVar__1_1 = (MR_Integer) 1;
#line 193 "program_representation_utils.m"
          else
#line 193 "program_representation_utils.m"
            {
#line 193 "program_representation_utils.m"
              MR_Word program_representation_utils__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));

#line 193 "program_representation_utils.m"
              {
#line 193 "program_representation_utils.m"
                mercury__builtin__compare_3_p_0((MR_Word) &program_representation_utils_scalar_common_1[8], program_representation_utils__HeadVar__1_1, ((MR_Box) (program_representation_utils__V_11_11)), ((MR_Box) (program_representation_utils__V_5_5)));
#line 193 "program_representation_utils.m"
                return;
              }
#line 193 "program_representation_utils.m"
            }
#line 193 "program_representation_utils.m"
        }
#line 193 "program_representation_utils.m"
  }
#line 193 "program_representation_utils.m"
}

#line 193 "program_representation_utils.m"
MR_bool MR_CALL 
program_representation_utils____Unify____atomic_goal_is_call_0_0(
#line 193 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 193 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2)
#line 193 "program_representation_utils.m"
{
#line 193 "program_representation_utils.m"
  {
#line 193 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 193 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastX_7 = (MR_Integer) program_representation_utils__HeadVar__1_1;
#line 193 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastY_8 = (MR_Integer) program_representation_utils__HeadVar__2_2;

#line 193 "program_representation_utils.m"
    program_representation_utils__succeeded = (program_representation_utils__CastX_7 == program_representation_utils__CastY_8);
#line 193 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 193 "program_representation_utils.m"
      program_representation_utils__succeeded = MR_TRUE;
#line 193 "program_representation_utils.m"
    else
#line 193 "program_representation_utils.m"
      if ((program_representation_utils__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "program_representation_utils.m"
        {
#line 193 "program_representation_utils.m"
          MR_Integer program_representation_utils__CastX_5 = (MR_Integer) program_representation_utils__HeadVar__1_1;
#line 193 "program_representation_utils.m"
          MR_Integer program_representation_utils__CastY_6 = (MR_Integer) program_representation_utils__HeadVar__2_2;

#line 193 "program_representation_utils.m"
          program_representation_utils__succeeded = (program_representation_utils__CastY_6 == program_representation_utils__CastX_5);
#line 193 "program_representation_utils.m"
        }
#line 193 "program_representation_utils.m"
      else
#line 193 "program_representation_utils.m"
        {
#line 193 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeInfo_9_9;
#line 193 "program_representation_utils.m"
          MR_Word program_representation_utils__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));
#line 193 "program_representation_utils.m"
          MR_Word program_representation_utils__V_4_4;

#line 193 "program_representation_utils.m"
          program_representation_utils__succeeded = ((MR_tag((MR_Word) program_representation_utils__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 193 "program_representation_utils.m"
          if (program_representation_utils__succeeded)
#line 193 "program_representation_utils.m"
            {
#line 193 "program_representation_utils.m"
              program_representation_utils__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 4129 "program_representation_utils.c"
              program_representation_utils__TypeInfo_9_9 = (MR_Word) &program_representation_utils_scalar_common_1[8];
#line 4131 "program_representation_utils.c"
              {
#line 4133 "program_representation_utils.c"
                return program_representation_utils__succeeded = mercury__builtin__unify_2_p_0(program_representation_utils__TypeInfo_9_9, ((MR_Box) (program_representation_utils__V_3_3)), ((MR_Box) (program_representation_utils__V_4_4)));
              }
#line 193 "program_representation_utils.m"
            }
#line 193 "program_representation_utils.m"
        }
#line 193 "program_representation_utils.m"
    return program_representation_utils__succeeded;
#line 193 "program_representation_utils.m"
  }
#line 193 "program_representation_utils.m"
}

#line 1117 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0_1(
#line 1117 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1117 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1117 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1117 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3)
#line 1117 "program_representation_utils.m"
{
#line 1117 "program_representation_utils.m"
  {
#line 1117 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 1117 "program_representation_utils.m"
    MR_Word program_representation_utils__conv1_STATE_VARIABLE_Set_10;

#line 1117 "program_representation_utils.m"
    {
#line 1117 "program_representation_utils.m"
      program_representation_utils__inst_map_get_var_deps_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv1_STATE_VARIABLE_Set_10);
    }
#line 1117 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv1_STATE_VARIABLE_Set_10));
#line 1117 "program_representation_utils.m"
  }
#line 1117 "program_representation_utils.m"
}

#line 1105 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0(
#line 1105 "program_representation_utils.m"
  MR_Word program_representation_utils__VarToDepVars_5,
#line 1105 "program_representation_utils.m"
  MR_Integer program_representation_utils__VarRep_6,
#line 1105 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Set_0_9,
#line 1105 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Set_10)
#line 1105 "program_representation_utils.m"
{
#line 1114 "program_representation_utils.m"
  {
#line 1114 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1109 "program_representation_utils.m"
    {
#line 1109 "program_representation_utils.m"
      program_representation_utils__succeeded = mercury__set__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__STATE_VARIABLE_Set_0_9, ((MR_Box) (program_representation_utils__VarRep_6)));
    }
#line 1114 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1109 "program_representation_utils.m"
      *program_representation_utils__STATE_VARIABLE_Set_10 = program_representation_utils__STATE_VARIABLE_Set_0_9;
#line 1114 "program_representation_utils.m"
    else
#line 1118 "program_representation_utils.m"
      {
#line 1118 "program_representation_utils.m"
        MR_Word program_representation_utils__DepVars_8;
#line 1115 "program_representation_utils.m"
        MR_Box program_representation_utils__conv0_DepVars_8;

#line 1115 "program_representation_utils.m"
        {
#line 1115 "program_representation_utils.m"
          program_representation_utils__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__VarToDepVars_5, program_representation_utils__VarRep_6, &program_representation_utils__conv0_DepVars_8);
        }
#line 1115 "program_representation_utils.m"
        if (program_representation_utils__succeeded)
#line 1115 "program_representation_utils.m"
          {
#line 1115 "program_representation_utils.m"
            program_representation_utils__DepVars_8 = ((MR_Word) program_representation_utils__conv0_DepVars_8);
#line 1115 "program_representation_utils.m"
            program_representation_utils__succeeded = MR_TRUE;
#line 1115 "program_representation_utils.m"
          }
#line 1118 "program_representation_utils.m"
        if (program_representation_utils__succeeded)
#line 1116 "program_representation_utils.m"
          {
#line 1116 "program_representation_utils.m"
            MR_Word program_representation_utils__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1116 "program_representation_utils.m"
            MR_Word program_representation_utils__STATE_VARIABLE_Set_11_11;
#line 1116 "program_representation_utils.m"
            MR_Word program_representation_utils__V_12_12;
#line 1117 "program_representation_utils.m"
            MR_Box program_representation_utils__conv2_STATE_VARIABLE_Set_10;

#line 1116 "program_representation_utils.m"
            {
#line 1116 "program_representation_utils.m"
              program_representation_utils__STATE_VARIABLE_Set_11_11 = mercury__set__union_2_f_0(program_representation_utils__TypeCtorInfo_17_17, program_representation_utils__STATE_VARIABLE_Set_0_9, program_representation_utils__DepVars_8);
            }
#line 1117 "program_representation_utils.m"
            {
#line 1117 "program_representation_utils.m"
              program_representation_utils__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 0) = ((MR_Box) (&program_representation_utils_scalar_common_4[2]));
#line 1117 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 1) = ((MR_Box) (program_representation_utils__inst_map_get_var_deps_2_4_p_0_1));
#line 1117 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1117 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 3) = ((MR_Box) (program_representation_utils__VarToDepVars_5));
#line 1117 "program_representation_utils.m"
            }
#line 1117 "program_representation_utils.m"
            {
#line 1117 "program_representation_utils.m"
              mercury__set__fold_4_p_0(program_representation_utils__TypeCtorInfo_17_17, (MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__V_12_12, program_representation_utils__DepVars_8, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Set_11_11)), &program_representation_utils__conv2_STATE_VARIABLE_Set_10);
            }
#line 1117 "program_representation_utils.m"
            *program_representation_utils__STATE_VARIABLE_Set_10 = ((MR_Word) program_representation_utils__conv2_STATE_VARIABLE_Set_10);
#line 1116 "program_representation_utils.m"
          }
#line 1118 "program_representation_utils.m"
        else
#line 1117 "program_representation_utils.m"
          *program_representation_utils__STATE_VARIABLE_Set_10 = program_representation_utils__STATE_VARIABLE_Set_0_9;
#line 1118 "program_representation_utils.m"
      }
#line 1114 "program_representation_utils.m"
  }
#line 1105 "program_representation_utils.m"
}

#line 1064 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_ground_var_6_p_0(
#line 1064 "program_representation_utils.m"
  MR_Word program_representation_utils__DepVars0_7,
#line 1064 "program_representation_utils.m"
  MR_Integer program_representation_utils__Var_8,
#line 1064 "program_representation_utils.m"
  MR_Word program_representation_utils__InstMap0_9,
#line 1064 "program_representation_utils.m"
  MR_Word * program_representation_utils__InstMap_10,
#line 1064 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_0_21,
#line 1064 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_22)
#line 1064 "program_representation_utils.m"
{
#line 1069 "program_representation_utils.m"
  {
#line 1069 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1069 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToInst0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMap0_9, (MR_Integer) 0)));
#line 1069 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToDepVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMap0_9, (MR_Integer) 1)));
#line 1069 "program_representation_utils.m"
    MR_Word program_representation_utils__NewInst_16;
#line 1069 "program_representation_utils.m"
    MR_Word program_representation_utils__DepVars_17;
#line 1069 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToInst_19;
#line 1069 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToDepVars_20;
#line 4315 "program_representation_utils.c"
    MR_Word program_representation_utils__InstPrime_14;
#line 1071 "program_representation_utils.m"
    MR_Box program_representation_utils__conv0_InstPrime_14;

#line 1071 "program_representation_utils.m"
    {
#line 1071 "program_representation_utils.m"
      program_representation_utils__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__VarToInst0_12, program_representation_utils__Var_8, &program_representation_utils__conv0_InstPrime_14);
    }
#line 1071 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1071 "program_representation_utils.m"
      {
#line 1071 "program_representation_utils.m"
        program_representation_utils__InstPrime_14 = ((MR_Word) program_representation_utils__conv0_InstPrime_14);
#line 1071 "program_representation_utils.m"
        program_representation_utils__succeeded = MR_TRUE;
#line 1071 "program_representation_utils.m"
      }
#line 4335 "program_representation_utils.c"
    if (program_representation_utils__succeeded)
#line 1080 "program_representation_utils.m"
      if ((program_representation_utils__InstPrime_14 == (MR_Integer) 0))
#line 1077 "program_representation_utils.m"
        {
#line 1078 "program_representation_utils.m"
          program_representation_utils__NewInst_16 = (MR_Integer) 1;
#line 1079 "program_representation_utils.m"
          program_representation_utils__DepVars_17 = program_representation_utils__DepVars0_7;
#line 1079 "program_representation_utils.m"
          *program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_22 = program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_0_21;
#line 1077 "program_representation_utils.m"
        }
#line 1080 "program_representation_utils.m"
      else
#line 1083 "program_representation_utils.m"
        {
#line 1083 "program_representation_utils.m"
          MR_Word program_representation_utils__DepVarsFromIM_18;
#line 1085 "program_representation_utils.m"
          MR_Box program_representation_utils__conv1_DepVarsFromIM_18;

#line 1084 "program_representation_utils.m"
          program_representation_utils__NewInst_16 = (MR_Integer) 2;
#line 1085 "program_representation_utils.m"
          {
#line 1085 "program_representation_utils.m"
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__VarToDepVars0_13, program_representation_utils__Var_8, &program_representation_utils__conv1_DepVarsFromIM_18);
          }
#line 1085 "program_representation_utils.m"
          program_representation_utils__DepVarsFromIM_18 = ((MR_Word) program_representation_utils__conv1_DepVarsFromIM_18);
#line 1086 "program_representation_utils.m"
          {
#line 1086 "program_representation_utils.m"
            program_representation_utils__DepVars_17 = mercury__set__union_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__DepVars0_7, program_representation_utils__DepVarsFromIM_18);
          }
#line 1087 "program_representation_utils.m"
          *program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_22 = (MR_Integer) 0;
#line 1083 "program_representation_utils.m"
        }
#line 4376 "program_representation_utils.c"
    else
#line 4378 "program_representation_utils.c"
      {
#line 1078 "program_representation_utils.m"
        program_representation_utils__NewInst_16 = (MR_Integer) 1;
#line 1079 "program_representation_utils.m"
        program_representation_utils__DepVars_17 = program_representation_utils__DepVars0_7;
#line 1079 "program_representation_utils.m"
        *program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_22 = program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_0_21;
#line 4386 "program_representation_utils.c"
      }
#line 1089 "program_representation_utils.m"
    {
#line 1089 "program_representation_utils.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__Var_8, ((MR_Box) (program_representation_utils__NewInst_16)), program_representation_utils__VarToInst0_12, &program_representation_utils__VarToInst_19);
    }
#line 1090 "program_representation_utils.m"
    {
#line 1090 "program_representation_utils.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__Var_8, ((MR_Box) (program_representation_utils__DepVars_17)), program_representation_utils__VarToDepVars0_13, &program_representation_utils__VarToDepVars_20);
    }
#line 1091 "program_representation_utils.m"
    {
#line 1091 "program_representation_utils.m"
      MR_Word base;
#line 1091 "program_representation_utils.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1091 "program_representation_utils.m"
      *program_representation_utils__InstMap_10 = base;
#line 1091 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (program_representation_utils__VarToInst_19));
#line 1091 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (program_representation_utils__VarToDepVars_20));
#line 1091 "program_representation_utils.m"
    }
#line 1069 "program_representation_utils.m"
  }
#line 1064 "program_representation_utils.m"
}

#line 1048 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_intersect_3_p_0(
#line 1048 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 1048 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 1048 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_3)
#line 1048 "program_representation_utils.m"
{
#line 1050 "program_representation_utils.m"
  {
#line 1050 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1050 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__1_1 == (MR_Integer) 0))
#line 1050 "program_representation_utils.m"
      if ((program_representation_utils__HeadVar__2_2 == (MR_Integer) 0))
#line 1050 "program_representation_utils.m"
        *program_representation_utils__HeadVar__3_3 = (MR_Integer) 0;
#line 1050 "program_representation_utils.m"
      else
#line 1050 "program_representation_utils.m"
        if ((program_representation_utils__HeadVar__2_2 == (MR_Integer) 1))
#line 1051 "program_representation_utils.m"
          *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
#line 1050 "program_representation_utils.m"
        else
#line 1052 "program_representation_utils.m"
          *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
#line 1050 "program_representation_utils.m"
    else
#line 1050 "program_representation_utils.m"
      if ((program_representation_utils__HeadVar__1_1 == (MR_Integer) 1))
#line 1050 "program_representation_utils.m"
        if ((program_representation_utils__HeadVar__2_2 == (MR_Integer) 0))
#line 1053 "program_representation_utils.m"
          *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
#line 1050 "program_representation_utils.m"
        else
#line 1050 "program_representation_utils.m"
          if ((program_representation_utils__HeadVar__2_2 == (MR_Integer) 1))
#line 1054 "program_representation_utils.m"
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 1;
#line 1050 "program_representation_utils.m"
          else
#line 1055 "program_representation_utils.m"
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
#line 1050 "program_representation_utils.m"
      else
#line 1050 "program_representation_utils.m"
        if ((program_representation_utils__HeadVar__2_2 == (MR_Integer) 0))
#line 1056 "program_representation_utils.m"
          *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
#line 1050 "program_representation_utils.m"
        else
#line 1050 "program_representation_utils.m"
          if ((program_representation_utils__HeadVar__2_2 == (MR_Integer) 1))
#line 1057 "program_representation_utils.m"
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
#line 1050 "program_representation_utils.m"
          else
#line 1058 "program_representation_utils.m"
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
#line 1050 "program_representation_utils.m"
  }
#line 1048 "program_representation_utils.m"
}

#line 995 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__add_head_var_inst_to_map_3_p_0(
#line 995 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 995 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_InstMap_0_9,
#line 995 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_InstMap_10)
#line 995 "program_representation_utils.m"
{
#line 998 "program_representation_utils.m"
  {
#line 998 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 998 "program_representation_utils.m"
    MR_Integer program_representation_utils__VarRep_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));
#line 998 "program_representation_utils.m"
    MR_Word program_representation_utils__ModeRep_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 1)));
#line 998 "program_representation_utils.m"
    MR_Word program_representation_utils__InitialInstRep_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModeRep_5, (MR_Integer) 0)));
#line 998 "program_representation_utils.m"
    MR_Word program_representation_utils__V_11_11;
#line 998 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToInst0_19;
#line 998 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToDepVars0_20;
#line 998 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToInst_21;
#line 998 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToDepVars_22;
#line 999 "program_representation_utils.m"
    MR_Word program_representation_utils__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModeRep_5, (MR_Integer) 1)));

#line 1000 "program_representation_utils.m"
    {
#line 1000 "program_representation_utils.m"
      program_representation_utils__V_11_11 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
#line 1008 "program_representation_utils.m"
    program_representation_utils__VarToInst0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_InstMap_0_9, (MR_Integer) 0)));
#line 1008 "program_representation_utils.m"
    program_representation_utils__VarToDepVars0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_InstMap_0_9, (MR_Integer) 1)));
#line 1009 "program_representation_utils.m"
    {
#line 1009 "program_representation_utils.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__VarRep_4, ((MR_Box) (program_representation_utils__InitialInstRep_7)), program_representation_utils__VarToInst0_19, &program_representation_utils__VarToInst_21);
    }
#line 1010 "program_representation_utils.m"
    {
#line 1010 "program_representation_utils.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__VarRep_4, ((MR_Box) (program_representation_utils__V_11_11)), program_representation_utils__VarToDepVars0_20, &program_representation_utils__VarToDepVars_22);
    }
#line 1011 "program_representation_utils.m"
    {
#line 1011 "program_representation_utils.m"
      MR_Word base;
#line 1011 "program_representation_utils.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1011 "program_representation_utils.m"
      *program_representation_utils__STATE_VARIABLE_InstMap_10 = base;
#line 1011 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (program_representation_utils__VarToInst_21));
#line 1011 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (program_representation_utils__VarToDepVars_22));
#line 1011 "program_representation_utils.m"
    }
#line 998 "program_representation_utils.m"
  }
#line 995 "program_representation_utils.m"
}

#line 968 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_case_9_p_0(
#line 968 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_37,
#line 968 "program_representation_utils.m"
  MR_Word program_representation_utils__ParentGoalId_10,
#line 968 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Case_0_20,
#line 968 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Case_21,
#line 968 "program_representation_utils.m"
  MR_Integer program_representation_utils__STATE_VARIABLE_CaseNum_0_22,
#line 968 "program_representation_utils.m"
  MR_Integer * program_representation_utils__STATE_VARIABLE_CaseNum_23,
#line 968 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_24,
#line 968 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_25,
#line 968 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_26,
#line 968 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_27)
#line 968 "program_representation_utils.m"
{
#line 972 "program_representation_utils.m"
  {
#line 972 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 972 "program_representation_utils.m"
    MR_Word program_representation_utils__MainConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Case_0_20, (MR_Integer) 0)));
#line 972 "program_representation_utils.m"
    MR_Word program_representation_utils__OtherConsIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Case_0_20, (MR_Integer) 1)));
#line 972 "program_representation_utils.m"
    MR_Word program_representation_utils__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Case_0_20, (MR_Integer) 2)));
#line 972 "program_representation_utils.m"
    MR_Word program_representation_utils__Goal_19;

#line 974 "program_representation_utils.m"
    {
#line 974 "program_representation_utils.m"
      program_representation_utils__label_goal_wrapper__ho1_10_p_0(program_representation_utils__TypeInfo_for_T_37, program_representation_utils__ParentGoalId_10, program_representation_utils__Goal0_17, &program_representation_utils__Goal_19, program_representation_utils__STATE_VARIABLE_CaseNum_0_22, program_representation_utils__STATE_VARIABLE_CaseNum_23, program_representation_utils__STATE_VARIABLE_Counter_0_24, program_representation_utils__STATE_VARIABLE_Counter_25, program_representation_utils__STATE_VARIABLE_Map_0_26, program_representation_utils__STATE_VARIABLE_Map_27);
    }
#line 977 "program_representation_utils.m"
    {
#line 977 "program_representation_utils.m"
      MR_Word base;
#line 977 "program_representation_utils.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 977 "program_representation_utils.m"
      *program_representation_utils__STATE_VARIABLE_Case_21 = base;
#line 977 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (program_representation_utils__MainConsId_15));
#line 977 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (program_representation_utils__OtherConsIds_16));
#line 977 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (program_representation_utils__Goal_19));
#line 977 "program_representation_utils.m"
    }
#line 972 "program_representation_utils.m"
  }
#line 968 "program_representation_utils.m"
}

#line 959 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_wrapper_10_p_0(
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_32,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__MakePathStep_11,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__ParentGoalId_12,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_17,
#line 959 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_18,
#line 959 "program_representation_utils.m"
  MR_Integer program_representation_utils__STATE_VARIABLE_GoalNum_0_19,
#line 959 "program_representation_utils.m"
  MR_Integer * program_representation_utils__STATE_VARIABLE_GoalNum_20,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_21,
#line 959 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_22,
#line 959 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_23,
#line 959 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_24)
#line 959 "program_representation_utils.m"
{
#line 963 "program_representation_utils.m"
  {
#line 963 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 963 "program_representation_utils.m"
    MR_Word program_representation_utils__V_25_25;
#line 963 "program_representation_utils.m"
    MR_Word program_representation_utils__V_29_29;
#line 964 "program_representation_utils.m"
    MR_Box MR_CALL (* program_representation_utils__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), program_representation_utils__MakePathStep_11, (MR_Integer) 1)));
#line 964 "program_representation_utils.m"
    MR_Box program_representation_utils__conv1_V_29_29;

#line 964 "program_representation_utils.m"
    {
#line 964 "program_representation_utils.m"
      program_representation_utils__conv1_V_29_29 = program_representation_utils__func_0(((MR_Box) program_representation_utils__MakePathStep_11), ((MR_Box) (program_representation_utils__STATE_VARIABLE_GoalNum_0_19)));
    }
#line 964 "program_representation_utils.m"
    program_representation_utils__V_29_29 = ((MR_Word) program_representation_utils__conv1_V_29_29);
#line 964 "program_representation_utils.m"
    {
#line 964 "program_representation_utils.m"
      program_representation_utils__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_25_25, 0) = ((MR_Box) (program_representation_utils__ParentGoalId_12));
#line 964 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_25_25, 1) = ((MR_Box) (program_representation_utils__V_29_29));
#line 964 "program_representation_utils.m"
    }
#line 964 "program_representation_utils.m"
    {
#line 964 "program_representation_utils.m"
      program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_32, program_representation_utils__V_25_25, program_representation_utils__STATE_VARIABLE_Goal_0_17, program_representation_utils__STATE_VARIABLE_Goal_18, program_representation_utils__STATE_VARIABLE_Counter_0_21, program_representation_utils__STATE_VARIABLE_Counter_22, program_representation_utils__STATE_VARIABLE_Map_0_23, program_representation_utils__STATE_VARIABLE_Map_24);
    }
#line 966 "program_representation_utils.m"
    *program_representation_utils__STATE_VARIABLE_GoalNum_20 = (program_representation_utils__STATE_VARIABLE_GoalNum_0_19 + (MR_Integer) 1);
#line 963 "program_representation_utils.m"
  }
#line 959 "program_representation_utils.m"
}

#line 929 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0_5(
#line 929 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 929 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 929 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2,
#line 929 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 929 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4,
#line 929 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_5,
#line 929 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_6,
#line 929 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_7,
#line 929 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_8)
#line 929 "program_representation_utils.m"
{
#line 929 "program_representation_utils.m"
  {
#line 929 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 929 "program_representation_utils.m"
    MR_Word program_representation_utils__conv19_STATE_VARIABLE_Case_21;
#line 929 "program_representation_utils.m"
    MR_Integer program_representation_utils__conv18_STATE_VARIABLE_CaseNum_23;
#line 929 "program_representation_utils.m"
    MR_Word program_representation_utils__conv17_STATE_VARIABLE_Counter_25;
#line 929 "program_representation_utils.m"
    MR_Word program_representation_utils__conv16_STATE_VARIABLE_Map_27;

#line 929 "program_representation_utils.m"
    {
#line 929 "program_representation_utils.m"
      program_representation_utils__label_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 4))), ((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv19_STATE_VARIABLE_Case_21, ((MR_Integer) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv18_STATE_VARIABLE_CaseNum_23, ((MR_Word) program_representation_utils__wrapper_arg_5), &program_representation_utils__conv17_STATE_VARIABLE_Counter_25, ((MR_Word) program_representation_utils__wrapper_arg_7), &program_representation_utils__conv16_STATE_VARIABLE_Map_27);
    }
#line 929 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv19_STATE_VARIABLE_Case_21));
#line 929 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv18_STATE_VARIABLE_CaseNum_23));
#line 929 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_6 = ((MR_Box) (program_representation_utils__conv17_STATE_VARIABLE_Counter_25));
#line 929 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_8 = ((MR_Box) (program_representation_utils__conv16_STATE_VARIABLE_Map_27));
#line 929 "program_representation_utils.m"
  }
#line 929 "program_representation_utils.m"
}

#line 924 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0_4(
#line 924 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 924 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 924 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2,
#line 924 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 924 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4,
#line 924 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_5,
#line 924 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_6,
#line 924 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_7,
#line 924 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_8)
#line 924 "program_representation_utils.m"
{
#line 924 "program_representation_utils.m"
  {
#line 924 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 924 "program_representation_utils.m"
    MR_Word program_representation_utils__conv12_STATE_VARIABLE_Goal_18;
#line 924 "program_representation_utils.m"
    MR_Integer program_representation_utils__conv11_STATE_VARIABLE_GoalNum_20;
#line 924 "program_representation_utils.m"
    MR_Word program_representation_utils__conv10_STATE_VARIABLE_Counter_22;
#line 924 "program_representation_utils.m"
    MR_Word program_representation_utils__conv9_STATE_VARIABLE_Map_24;

#line 924 "program_representation_utils.m"
    {
#line 924 "program_representation_utils.m"
      program_representation_utils__label_goal_wrapper_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 5))), ((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv12_STATE_VARIABLE_Goal_18, ((MR_Integer) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv11_STATE_VARIABLE_GoalNum_20, ((MR_Word) program_representation_utils__wrapper_arg_5), &program_representation_utils__conv10_STATE_VARIABLE_Counter_22, ((MR_Word) program_representation_utils__wrapper_arg_7), &program_representation_utils__conv9_STATE_VARIABLE_Map_24);
    }
#line 924 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv12_STATE_VARIABLE_Goal_18));
#line 924 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv11_STATE_VARIABLE_GoalNum_20));
#line 924 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_6 = ((MR_Box) (program_representation_utils__conv10_STATE_VARIABLE_Counter_22));
#line 924 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_8 = ((MR_Box) (program_representation_utils__conv9_STATE_VARIABLE_Map_24));
#line 924 "program_representation_utils.m"
  }
#line 924 "program_representation_utils.m"
}

#line 924 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_3(
#line 924 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 924 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1)
#line 924 "program_representation_utils.m"
{
#line 924 "program_representation_utils.m"
  {
#line 924 "program_representation_utils.m"
    MR_Box program_representation_utils__wrapper_arg_2;
#line 924 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 924 "program_representation_utils.m"
    MR_Word program_representation_utils__conv8_HeadVar__2_81;

#line 924 "program_representation_utils.m"
    {
#line 924 "program_representation_utils.m"
      program_representation_utils__conv8_HeadVar__2_81 = program_representation_utils__IntroducedFrom__func__label_goal__924__1_1_f_0(((MR_Integer) program_representation_utils__wrapper_arg_1));
    }
#line 924 "program_representation_utils.m"
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv8_HeadVar__2_81));
#line 924 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_2;
#line 924 "program_representation_utils.m"
  }
#line 924 "program_representation_utils.m"
}

#line 919 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0_2(
#line 919 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 919 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 919 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2,
#line 919 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 919 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4,
#line 919 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_5,
#line 919 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_6,
#line 919 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_7,
#line 919 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_8)
#line 919 "program_representation_utils.m"
{
#line 919 "program_representation_utils.m"
  {
#line 919 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 919 "program_representation_utils.m"
    MR_Word program_representation_utils__conv4_STATE_VARIABLE_Goal_18;
#line 919 "program_representation_utils.m"
    MR_Integer program_representation_utils__conv3_STATE_VARIABLE_GoalNum_20;
#line 919 "program_representation_utils.m"
    MR_Word program_representation_utils__conv2_STATE_VARIABLE_Counter_22;
#line 919 "program_representation_utils.m"
    MR_Word program_representation_utils__conv1_STATE_VARIABLE_Map_24;

#line 919 "program_representation_utils.m"
    {
#line 919 "program_representation_utils.m"
      program_representation_utils__label_goal_wrapper_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 5))), ((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv4_STATE_VARIABLE_Goal_18, ((MR_Integer) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv3_STATE_VARIABLE_GoalNum_20, ((MR_Word) program_representation_utils__wrapper_arg_5), &program_representation_utils__conv2_STATE_VARIABLE_Counter_22, ((MR_Word) program_representation_utils__wrapper_arg_7), &program_representation_utils__conv1_STATE_VARIABLE_Map_24);
    }
#line 919 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv4_STATE_VARIABLE_Goal_18));
#line 919 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv3_STATE_VARIABLE_GoalNum_20));
#line 919 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_6 = ((MR_Box) (program_representation_utils__conv2_STATE_VARIABLE_Counter_22));
#line 919 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_8 = ((MR_Box) (program_representation_utils__conv1_STATE_VARIABLE_Map_24));
#line 919 "program_representation_utils.m"
  }
#line 919 "program_representation_utils.m"
}

#line 919 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_1(
#line 919 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 919 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1)
#line 919 "program_representation_utils.m"
{
#line 919 "program_representation_utils.m"
  {
#line 919 "program_representation_utils.m"
    MR_Box program_representation_utils__wrapper_arg_2;
#line 919 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 919 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_HeadVar__2_88;

#line 919 "program_representation_utils.m"
    {
#line 919 "program_representation_utils.m"
      program_representation_utils__conv0_HeadVar__2_88 = program_representation_utils__IntroducedFrom__func__label_goal__919__1_1_f_0(((MR_Integer) program_representation_utils__wrapper_arg_1));
    }
#line 919 "program_representation_utils.m"
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv0_HeadVar__2_88));
#line 919 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_2;
#line 919 "program_representation_utils.m"
  }
#line 919 "program_representation_utils.m"
}

#line 907 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0(
#line 907 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_94,
#line 907 "program_representation_utils.m"
  MR_Word program_representation_utils__ContainingGoal_8,
#line 907 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_43,
#line 907 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_44,
#line 907 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_45,
#line 907 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_46,
#line 907 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_47,
#line 907 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_48)
#line 907 "program_representation_utils.m"
{
#line 912 "program_representation_utils.m"
  {
#line 912 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 912 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Goal_0_43, (MR_Integer) 0)));
#line 912 "program_representation_utils.m"
    MR_Word program_representation_utils__Detism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Goal_0_43, (MR_Integer) 1)));
#line 912 "program_representation_utils.m"
    MR_Integer program_representation_utils__GoalIdNum_15;
#line 912 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalId_16;
#line 912 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalExpr_21;
#line 912 "program_representation_utils.m"
    MR_Word program_representation_utils__STATE_VARIABLE_Counter_49_49;
#line 912 "program_representation_utils.m"
    MR_Word program_representation_utils__STATE_VARIABLE_Map_50_50;
#line 913 "program_representation_utils.m"
    MR_Box program_representation_utils__V_14_14 = (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Goal_0_43, (MR_Integer) 2));

#line 914 "program_representation_utils.m"
    {
#line 914 "program_representation_utils.m"
      mercury__counter__allocate_3_p_0(&program_representation_utils__GoalIdNum_15, program_representation_utils__STATE_VARIABLE_Counter_0_45, &program_representation_utils__STATE_VARIABLE_Counter_49_49);
    }
#line 915 "program_representation_utils.m"
    program_representation_utils__GoalId_16 = (MR_Word) program_representation_utils__GoalIdNum_15;
#line 916 "program_representation_utils.m"
    {
#line 916 "program_representation_utils.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, ((MR_Box) (program_representation_utils__GoalId_16)), ((MR_Box) (program_representation_utils__ContainingGoal_8)), program_representation_utils__STATE_VARIABLE_Map_0_47, &program_representation_utils__STATE_VARIABLE_Map_50_50);
    }
#line 922 "program_representation_utils.m"
    if (((MR_tag((MR_Word) program_representation_utils__GoalExpr0_12)) == (MR_mktag((MR_Integer) 0))))
#line 918 "program_representation_utils.m"
      {
#line 918 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeInfo_106_106;
#line 918 "program_representation_utils.m"
        MR_Word program_representation_utils__Conjs0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)));
#line 918 "program_representation_utils.m"
        MR_Word program_representation_utils__Conjs_19;
#line 918 "program_representation_utils.m"
        MR_Word program_representation_utils__V_82_82;
#line 919 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_20_20;
#line 919 "program_representation_utils.m"
        MR_Box program_representation_utils__conv7_V_20_20;
#line 919 "program_representation_utils.m"
        MR_Box program_representation_utils__conv6_STATE_VARIABLE_Counter_46;
#line 919 "program_representation_utils.m"
        MR_Box program_representation_utils__conv5_STATE_VARIABLE_Map_48;

#line 919 "program_representation_utils.m"
        {
#line 919 "program_representation_utils.m"
          program_representation_utils__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 919 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_82_82, 0) = ((MR_Box) (&program_representation_utils_scalar_common_9[0]));
#line 919 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_82_82, 1) = ((MR_Box) (program_representation_utils__label_goal_7_p_0_2));
#line 919 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 919 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_82_82, 3) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
#line 919 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_82_82, 4) = ((MR_Box) (&program_representation_utils_scalar_common_2[18]));
#line 919 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_82_82, 5) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 919 "program_representation_utils.m"
        }
#line 5012 "program_representation_utils.c"
        {
#line 5014 "program_representation_utils.c"
          program_representation_utils__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5016 "program_representation_utils.c"
          MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_106_106, 0) = ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1));
#line 5018 "program_representation_utils.c"
          MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_106_106, 1) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
#line 5020 "program_representation_utils.c"
        }
#line 919 "program_representation_utils.m"
        {
#line 919 "program_representation_utils.m"
          mercury__list__map_foldl3_9_p_1(program_representation_utils__TypeInfo_106_106, (MR_Word) &program_representation_utils_scalar_common_1[6], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &program_representation_utils_scalar_common_2[0], (MR_Word) program_representation_utils__V_82_82, (MR_Word) program_representation_utils__Conjs0_17, &program_representation_utils__Conjs_19, ((MR_Box) ((MR_Integer) 1)), &program_representation_utils__conv7_V_20_20, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Counter_49_49)), &program_representation_utils__conv6_STATE_VARIABLE_Counter_46, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Map_50_50)), &program_representation_utils__conv5_STATE_VARIABLE_Map_48);
        }
#line 919 "program_representation_utils.m"
        program_representation_utils__V_20_20 = ((MR_Integer) program_representation_utils__conv7_V_20_20);
#line 919 "program_representation_utils.m"
        *program_representation_utils__STATE_VARIABLE_Counter_46 = ((MR_Word) program_representation_utils__conv6_STATE_VARIABLE_Counter_46);
#line 919 "program_representation_utils.m"
        *program_representation_utils__STATE_VARIABLE_Map_48 = ((MR_Word) program_representation_utils__conv5_STATE_VARIABLE_Map_48);
#line 921 "program_representation_utils.m"
        {
#line 921 "program_representation_utils.m"
          program_representation_utils__GoalExpr_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 921 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (program_representation_utils__Conjs_19));
#line 921 "program_representation_utils.m"
        }
#line 918 "program_representation_utils.m"
      }
#line 922 "program_representation_utils.m"
    else
#line 922 "program_representation_utils.m"
      if (((MR_tag((MR_Word) program_representation_utils__GoalExpr0_12)) == (MR_mktag((MR_Integer) 1))))
#line 923 "program_representation_utils.m"
        {
#line 923 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeInfo_120_120;
#line 923 "program_representation_utils.m"
          MR_Word program_representation_utils__Disjs0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)));
#line 923 "program_representation_utils.m"
          MR_Word program_representation_utils__Disjs_23;
#line 923 "program_representation_utils.m"
          MR_Word program_representation_utils__V_75_75;
#line 924 "program_representation_utils.m"
          MR_Integer program_representation_utils__V_24_24;
#line 924 "program_representation_utils.m"
          MR_Box program_representation_utils__conv15_V_24_24;
#line 924 "program_representation_utils.m"
          MR_Box program_representation_utils__conv14_STATE_VARIABLE_Counter_46;
#line 924 "program_representation_utils.m"
          MR_Box program_representation_utils__conv13_STATE_VARIABLE_Map_48;

#line 924 "program_representation_utils.m"
          {
#line 924 "program_representation_utils.m"
            program_representation_utils__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 924 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__V_75_75, 0) = ((MR_Box) (&program_representation_utils_scalar_common_9[0]));
#line 924 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__V_75_75, 1) = ((MR_Box) (program_representation_utils__label_goal_7_p_0_4));
#line 924 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 924 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__V_75_75, 3) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
#line 924 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__V_75_75, 4) = ((MR_Box) (&program_representation_utils_scalar_common_2[19]));
#line 924 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__V_75_75, 5) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 924 "program_representation_utils.m"
          }
#line 5084 "program_representation_utils.c"
          {
#line 5086 "program_representation_utils.c"
            program_representation_utils__TypeInfo_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5088 "program_representation_utils.c"
            MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_120_120, 0) = ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1));
#line 5090 "program_representation_utils.c"
            MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_120_120, 1) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
#line 5092 "program_representation_utils.c"
          }
#line 924 "program_representation_utils.m"
          {
#line 924 "program_representation_utils.m"
            mercury__list__map_foldl3_9_p_1(program_representation_utils__TypeInfo_120_120, (MR_Word) &program_representation_utils_scalar_common_1[6], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &program_representation_utils_scalar_common_2[0], (MR_Word) program_representation_utils__V_75_75, (MR_Word) program_representation_utils__Disjs0_22, &program_representation_utils__Disjs_23, ((MR_Box) ((MR_Integer) 1)), &program_representation_utils__conv15_V_24_24, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Counter_49_49)), &program_representation_utils__conv14_STATE_VARIABLE_Counter_46, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Map_50_50)), &program_representation_utils__conv13_STATE_VARIABLE_Map_48);
          }
#line 924 "program_representation_utils.m"
          program_representation_utils__V_24_24 = ((MR_Integer) program_representation_utils__conv15_V_24_24);
#line 924 "program_representation_utils.m"
          *program_representation_utils__STATE_VARIABLE_Counter_46 = ((MR_Word) program_representation_utils__conv14_STATE_VARIABLE_Counter_46);
#line 924 "program_representation_utils.m"
          *program_representation_utils__STATE_VARIABLE_Map_48 = ((MR_Word) program_representation_utils__conv13_STATE_VARIABLE_Map_48);
#line 926 "program_representation_utils.m"
          {
#line 926 "program_representation_utils.m"
            program_representation_utils__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 926 "program_representation_utils.m"
            MR_hl_field(MR_mktag(1), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (program_representation_utils__Disjs_23));
#line 926 "program_representation_utils.m"
          }
#line 923 "program_representation_utils.m"
        }
#line 922 "program_representation_utils.m"
      else
#line 922 "program_representation_utils.m"
        if (((MR_tag((MR_Word) program_representation_utils__GoalExpr0_12)) == (MR_mktag((MR_Integer) 2))))
#line 928 "program_representation_utils.m"
          {
#line 928 "program_representation_utils.m"
            MR_Word program_representation_utils__TypeInfo_134_134;
#line 928 "program_representation_utils.m"
            MR_Integer program_representation_utils__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)));
#line 928 "program_representation_utils.m"
            MR_Word program_representation_utils__CanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr0_12, (MR_Integer) 1)));
#line 928 "program_representation_utils.m"
            MR_Word program_representation_utils__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr0_12, (MR_Integer) 2)));
#line 928 "program_representation_utils.m"
            MR_Word program_representation_utils__Cases_28;
#line 928 "program_representation_utils.m"
            MR_Word program_representation_utils__V_71_71;
#line 929 "program_representation_utils.m"
            MR_Integer program_representation_utils__V_29_29;
#line 929 "program_representation_utils.m"
            MR_Box program_representation_utils__conv22_V_29_29;
#line 929 "program_representation_utils.m"
            MR_Box program_representation_utils__conv21_STATE_VARIABLE_Counter_46;
#line 929 "program_representation_utils.m"
            MR_Box program_representation_utils__conv20_STATE_VARIABLE_Map_48;

#line 929 "program_representation_utils.m"
            {
#line 929 "program_representation_utils.m"
              program_representation_utils__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 929 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_71_71, 0) = ((MR_Box) (&program_representation_utils_scalar_common_10[0]));
#line 929 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_71_71, 1) = ((MR_Box) (program_representation_utils__label_goal_7_p_0_5));
#line 929 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 929 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_71_71, 3) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
#line 929 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_71_71, 4) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 929 "program_representation_utils.m"
            }
#line 5158 "program_representation_utils.c"
            {
#line 5160 "program_representation_utils.c"
              program_representation_utils__TypeInfo_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5162 "program_representation_utils.c"
              MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_134_134, 0) = ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1));
#line 5164 "program_representation_utils.c"
              MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_134_134, 1) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
#line 5166 "program_representation_utils.c"
            }
#line 929 "program_representation_utils.m"
            {
#line 929 "program_representation_utils.m"
              mercury__list__map_foldl3_9_p_1(program_representation_utils__TypeInfo_134_134, (MR_Word) &program_representation_utils_scalar_common_1[7], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &program_representation_utils_scalar_common_2[0], (MR_Word) program_representation_utils__V_71_71, (MR_Word) program_representation_utils__Cases0_27, &program_representation_utils__Cases_28, ((MR_Box) ((MR_Integer) 1)), &program_representation_utils__conv22_V_29_29, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Counter_49_49)), &program_representation_utils__conv21_STATE_VARIABLE_Counter_46, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Map_50_50)), &program_representation_utils__conv20_STATE_VARIABLE_Map_48);
            }
#line 929 "program_representation_utils.m"
            program_representation_utils__V_29_29 = ((MR_Integer) program_representation_utils__conv22_V_29_29);
#line 929 "program_representation_utils.m"
            *program_representation_utils__STATE_VARIABLE_Counter_46 = ((MR_Word) program_representation_utils__conv21_STATE_VARIABLE_Counter_46);
#line 929 "program_representation_utils.m"
            *program_representation_utils__STATE_VARIABLE_Map_48 = ((MR_Word) program_representation_utils__conv20_STATE_VARIABLE_Map_48);
#line 930 "program_representation_utils.m"
            {
#line 930 "program_representation_utils.m"
              program_representation_utils__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 930 "program_representation_utils.m"
              MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (program_representation_utils__Var_25));
#line 930 "program_representation_utils.m"
              MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr_21, 1) = ((MR_Box) (program_representation_utils__CanFail_26));
#line 930 "program_representation_utils.m"
              MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr_21, 2) = ((MR_Box) (program_representation_utils__Cases_28));
#line 930 "program_representation_utils.m"
            }
#line 928 "program_representation_utils.m"
          }
#line 922 "program_representation_utils.m"
        else
#line 922 "program_representation_utils.m"
          if (((((MR_tag((MR_Word) program_representation_utils__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 951 "program_representation_utils.m"
            {
#line 952 "program_representation_utils.m"
              program_representation_utils__GoalExpr_21 = program_representation_utils__GoalExpr0_12;
#line 952 "program_representation_utils.m"
              *program_representation_utils__STATE_VARIABLE_Counter_46 = program_representation_utils__STATE_VARIABLE_Counter_49_49;
#line 952 "program_representation_utils.m"
              *program_representation_utils__STATE_VARIABLE_Map_48 = program_representation_utils__STATE_VARIABLE_Map_50_50;
#line 951 "program_representation_utils.m"
            }
#line 922 "program_representation_utils.m"
          else
#line 922 "program_representation_utils.m"
            if (((((MR_tag((MR_Word) program_representation_utils__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 932 "program_representation_utils.m"
              {
#line 932 "program_representation_utils.m"
                MR_Word program_representation_utils__Cond0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 1)));
#line 932 "program_representation_utils.m"
                MR_Word program_representation_utils__Then0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 2)));
#line 932 "program_representation_utils.m"
                MR_Word program_representation_utils__Else0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 3)));
#line 932 "program_representation_utils.m"
                MR_Word program_representation_utils__Cond_33;
#line 932 "program_representation_utils.m"
                MR_Word program_representation_utils__Then_34;
#line 932 "program_representation_utils.m"
                MR_Word program_representation_utils__Else_35;
#line 932 "program_representation_utils.m"
                MR_Word program_representation_utils__V_59_59;
#line 932 "program_representation_utils.m"
                MR_Word program_representation_utils__STATE_VARIABLE_Counter_60_60;
#line 932 "program_representation_utils.m"
                MR_Word program_representation_utils__STATE_VARIABLE_Map_61_61;
#line 932 "program_representation_utils.m"
                MR_Word program_representation_utils__V_63_63;
#line 932 "program_representation_utils.m"
                MR_Word program_representation_utils__STATE_VARIABLE_Counter_64_64;
#line 932 "program_representation_utils.m"
                MR_Word program_representation_utils__STATE_VARIABLE_Map_65_65;
#line 932 "program_representation_utils.m"
                MR_Word program_representation_utils__V_67_67;

#line 933 "program_representation_utils.m"
                {
#line 933 "program_representation_utils.m"
                  program_representation_utils__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_59_59, 0) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 933 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "program_representation_utils.m"
                }
#line 933 "program_representation_utils.m"
                {
#line 933 "program_representation_utils.m"
                  program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_94, program_representation_utils__V_59_59, program_representation_utils__Cond0_30, &program_representation_utils__Cond_33, program_representation_utils__STATE_VARIABLE_Counter_49_49, &program_representation_utils__STATE_VARIABLE_Counter_60_60, program_representation_utils__STATE_VARIABLE_Map_50_50, &program_representation_utils__STATE_VARIABLE_Map_61_61);
                }
#line 935 "program_representation_utils.m"
                {
#line 935 "program_representation_utils.m"
                  program_representation_utils__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_63_63, 0) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 935 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 935 "program_representation_utils.m"
                }
#line 935 "program_representation_utils.m"
                {
#line 935 "program_representation_utils.m"
                  program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_94, program_representation_utils__V_63_63, program_representation_utils__Then0_31, &program_representation_utils__Then_34, program_representation_utils__STATE_VARIABLE_Counter_60_60, &program_representation_utils__STATE_VARIABLE_Counter_64_64, program_representation_utils__STATE_VARIABLE_Map_61_61, &program_representation_utils__STATE_VARIABLE_Map_65_65);
                }
#line 937 "program_representation_utils.m"
                {
#line 937 "program_representation_utils.m"
                  program_representation_utils__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 937 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_67_67, 0) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 937 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 937 "program_representation_utils.m"
                }
#line 937 "program_representation_utils.m"
                {
#line 937 "program_representation_utils.m"
                  program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_94, program_representation_utils__V_67_67, program_representation_utils__Else0_32, &program_representation_utils__Else_35, program_representation_utils__STATE_VARIABLE_Counter_64_64, program_representation_utils__STATE_VARIABLE_Counter_46, program_representation_utils__STATE_VARIABLE_Map_65_65, program_representation_utils__STATE_VARIABLE_Map_48);
                }
#line 939 "program_representation_utils.m"
                {
#line 939 "program_representation_utils.m"
                  program_representation_utils__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 939 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 939 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 1) = ((MR_Box) (program_representation_utils__Cond_33));
#line 939 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 2) = ((MR_Box) (program_representation_utils__Then_34));
#line 939 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 3) = ((MR_Box) (program_representation_utils__Else_35));
#line 939 "program_representation_utils.m"
                }
#line 932 "program_representation_utils.m"
              }
#line 922 "program_representation_utils.m"
            else
#line 922 "program_representation_utils.m"
              if (((((MR_tag((MR_Word) program_representation_utils__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 941 "program_representation_utils.m"
                {
#line 941 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoal0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 1)));
#line 941 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoal_37;
#line 941 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_55_55;

#line 942 "program_representation_utils.m"
                  {
#line 942 "program_representation_utils.m"
                    program_representation_utils__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__V_55_55, 0) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 942 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 942 "program_representation_utils.m"
                  }
#line 942 "program_representation_utils.m"
                  {
#line 942 "program_representation_utils.m"
                    program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_94, program_representation_utils__V_55_55, program_representation_utils__SubGoal0_36, &program_representation_utils__SubGoal_37, program_representation_utils__STATE_VARIABLE_Counter_49_49, program_representation_utils__STATE_VARIABLE_Counter_46, program_representation_utils__STATE_VARIABLE_Map_50_50, program_representation_utils__STATE_VARIABLE_Map_48);
                  }
#line 944 "program_representation_utils.m"
                  {
#line 944 "program_representation_utils.m"
                    program_representation_utils__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 944 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 1) = ((MR_Box) (program_representation_utils__SubGoal_37));
#line 944 "program_representation_utils.m"
                  }
#line 941 "program_representation_utils.m"
                }
#line 922 "program_representation_utils.m"
              else
#line 946 "program_representation_utils.m"
                {
#line 946 "program_representation_utils.m"
                  MR_Word program_representation_utils__ScopeIsCut_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 2)));
#line 946 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_51_51;
#line 946 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_54_54;
#line 946 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoal0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 1)));
#line 946 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoal_93;

#line 947 "program_representation_utils.m"
                  {
#line 947 "program_representation_utils.m"
                    program_representation_utils__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 947 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__V_54_54, 1) = ((MR_Box) (program_representation_utils__ScopeIsCut_38));
#line 947 "program_representation_utils.m"
                  }
#line 947 "program_representation_utils.m"
                  {
#line 947 "program_representation_utils.m"
                    program_representation_utils__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__V_51_51, 0) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 947 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__V_51_51, 1) = ((MR_Box) (program_representation_utils__V_54_54));
#line 947 "program_representation_utils.m"
                  }
#line 947 "program_representation_utils.m"
                  {
#line 947 "program_representation_utils.m"
                    program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_94, program_representation_utils__V_51_51, program_representation_utils__SubGoal0_92, &program_representation_utils__SubGoal_93, program_representation_utils__STATE_VARIABLE_Counter_49_49, program_representation_utils__STATE_VARIABLE_Counter_46, program_representation_utils__STATE_VARIABLE_Map_50_50, program_representation_utils__STATE_VARIABLE_Map_48);
                  }
#line 949 "program_representation_utils.m"
                  {
#line 949 "program_representation_utils.m"
                    program_representation_utils__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 949 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 949 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 1) = ((MR_Box) (program_representation_utils__SubGoal_93));
#line 949 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 2) = ((MR_Box) (program_representation_utils__ScopeIsCut_38));
#line 949 "program_representation_utils.m"
                  }
#line 946 "program_representation_utils.m"
                }
#line 954 "program_representation_utils.m"
    {
#line 954 "program_representation_utils.m"
      MR_Word base;
#line 954 "program_representation_utils.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 954 "program_representation_utils.m"
      *program_representation_utils__STATE_VARIABLE_Goal_44 = base;
#line 954 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (program_representation_utils__GoalExpr_21));
#line 954 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (program_representation_utils__Detism_13));
#line 954 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 954 "program_representation_utils.m"
    }
#line 912 "program_representation_utils.m"
  }
#line 907 "program_representation_utils.m"
}

#line 856 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__add_nl_1_f_0(
#line 856 "program_representation_utils.m"
  MR_String program_representation_utils__Str_3)
#line 856 "program_representation_utils.m"
{
#line 858 "program_representation_utils.m"
  {
#line 858 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 858 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVar__2_2;
#line 858 "program_representation_utils.m"
    MR_Word program_representation_utils__V_4_4;

#line 858 "program_representation_utils.m"
    {
#line 858 "program_representation_utils.m"
      program_representation_utils__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_4_4, 0) = ((MR_Box) (program_representation_utils__Str_3));
#line 858 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &program_representation_utils_scalar_common_1[10])));
#line 858 "program_representation_utils.m"
    }
#line 858 "program_representation_utils.m"
    {
#line 858 "program_representation_utils.m"
      program_representation_utils__HeadVar__2_2 = mercury__cord__from_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__V_4_4);
    }
#line 858 "program_representation_utils.m"
    return program_representation_utils__HeadVar__2_2;
#line 858 "program_representation_utils.m"
  }
#line 856 "program_representation_utils.m"
}

#line 852 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__nl_0_f_0(void)
#line 852 "program_representation_utils.m"
{
#line 854 "program_representation_utils.m"
  {
#line 854 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 854 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVar__1_1;

#line 854 "program_representation_utils.m"
    {
#line 854 "program_representation_utils.m"
      program_representation_utils__HeadVar__1_1 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
#line 854 "program_representation_utils.m"
    return program_representation_utils__HeadVar__1_1;
#line 854 "program_representation_utils.m"
  }
#line 852 "program_representation_utils.m"
}

#line 820 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__detism_to_string_2_p_0(
#line 820 "program_representation_utils.m"
  MR_Word program_representation_utils__Detism_3,
#line 820 "program_representation_utils.m"
  MR_Word * program_representation_utils__DetismStrCord_4)
#line 820 "program_representation_utils.m"
{
#line 822 "program_representation_utils.m"
  {
#line 822 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 822 "program_representation_utils.m"
    MR_String program_representation_utils__DetismStr_5;

#line 826 "program_representation_utils.m"
    if ((program_representation_utils__Detism_3 == (MR_Integer) 5))
#line 840 "program_representation_utils.m"
      program_representation_utils__DetismStr_5 = (MR_String) "cc_multi";
#line 826 "program_representation_utils.m"
    else
#line 826 "program_representation_utils.m"
      if ((program_representation_utils__Detism_3 == (MR_Integer) 4))
#line 837 "program_representation_utils.m"
        program_representation_utils__DetismStr_5 = (MR_String) "cc_nondet";
#line 826 "program_representation_utils.m"
      else
#line 826 "program_representation_utils.m"
        if ((program_representation_utils__Detism_3 == (MR_Integer) 0))
#line 825 "program_representation_utils.m"
          program_representation_utils__DetismStr_5 = (MR_String) "det";
#line 826 "program_representation_utils.m"
        else
#line 826 "program_representation_utils.m"
          if ((program_representation_utils__Detism_3 == (MR_Integer) 6))
#line 843 "program_representation_utils.m"
            program_representation_utils__DetismStr_5 = (MR_String) "erroneous";
#line 826 "program_representation_utils.m"
          else
#line 826 "program_representation_utils.m"
            if ((program_representation_utils__Detism_3 == (MR_Integer) 7))
#line 846 "program_representation_utils.m"
              program_representation_utils__DetismStr_5 = (MR_String) "failure";
#line 826 "program_representation_utils.m"
            else
#line 826 "program_representation_utils.m"
              if ((program_representation_utils__Detism_3 == (MR_Integer) 3))
#line 834 "program_representation_utils.m"
                program_representation_utils__DetismStr_5 = (MR_String) "multi";
#line 826 "program_representation_utils.m"
              else
#line 826 "program_representation_utils.m"
                if ((program_representation_utils__Detism_3 == (MR_Integer) 2))
#line 831 "program_representation_utils.m"
                  program_representation_utils__DetismStr_5 = (MR_String) "nondet";
#line 826 "program_representation_utils.m"
                else
#line 828 "program_representation_utils.m"
                  program_representation_utils__DetismStr_5 = (MR_String) "semidet";
#line 848 "program_representation_utils.m"
    {
#line 848 "program_representation_utils.m"
      *program_representation_utils__DetismStrCord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__DetismStr_5)));
    }
#line 822 "program_representation_utils.m"
  }
#line 820 "program_representation_utils.m"
}

#line 807 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__indent_1_f_0(
#line 807 "program_representation_utils.m"
  MR_Integer program_representation_utils__N_3)
#line 807 "program_representation_utils.m"
{
#line 809 "program_representation_utils.m"
  {
#line 809 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded = (program_representation_utils__N_3 <= (MR_Integer) 0);
#line 809 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVar__2_2;

#line 809 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 809 "program_representation_utils.m"
      {
#line 809 "program_representation_utils.m"
        {
#line 809 "program_representation_utils.m"
          program_representation_utils__HeadVar__2_2 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 809 "program_representation_utils.m"
      }
#line 809 "program_representation_utils.m"
    else
#line 813 "program_representation_utils.m"
      {
#line 813 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 813 "program_representation_utils.m"
        MR_Word program_representation_utils__V_5_5;
#line 813 "program_representation_utils.m"
        MR_Word program_representation_utils__V_7_7;
#line 813 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_8_8;

#line 813 "program_representation_utils.m"
        {
#line 813 "program_representation_utils.m"
          program_representation_utils__V_5_5 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_11_11, ((MR_Box) ((MR_String) "  ")));
        }
#line 813 "program_representation_utils.m"
        program_representation_utils__V_8_8 = (program_representation_utils__N_3 - (MR_Integer) 1);
#line 813 "program_representation_utils.m"
        {
#line 813 "program_representation_utils.m"
          program_representation_utils__V_7_7 = program_representation_utils__indent_1_f_0(program_representation_utils__V_8_8);
        }
#line 809 "program_representation_utils.m"
        {
#line 809 "program_representation_utils.m"
          program_representation_utils__HeadVar__2_2 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_11_11, program_representation_utils__V_5_5, program_representation_utils__V_7_7);
        }
#line 813 "program_representation_utils.m"
      }
#line 809 "program_representation_utils.m"
    return program_representation_utils__HeadVar__2_2;
#line 809 "program_representation_utils.m"
  }
#line 807 "program_representation_utils.m"
}

#line 790 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_head_var_3_p_0(
#line 790 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_4,
#line 790 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 790 "program_representation_utils.m"
  MR_String * program_representation_utils__String_7)
#line 790 "program_representation_utils.m"
{
#line 793 "program_representation_utils.m"
  {
#line 793 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 793 "program_representation_utils.m"
    MR_Integer program_representation_utils__VarRep_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 793 "program_representation_utils.m"
    MR_Word program_representation_utils__VarMode_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 793 "program_representation_utils.m"
    MR_String program_representation_utils__VarName_8;
#line 793 "program_representation_utils.m"
    MR_Word program_representation_utils__InitialInst_9;
#line 793 "program_representation_utils.m"
    MR_Word program_representation_utils__FinalInst_10;
#line 793 "program_representation_utils.m"
    MR_String program_representation_utils__InitialInstStr_11;
#line 793 "program_representation_utils.m"
    MR_String program_representation_utils__FinalInstStr_12;
#line 793 "program_representation_utils.m"
    MR_String program_representation_utils__V_22_22;
#line 793 "program_representation_utils.m"
    MR_String program_representation_utils__V_24_24;
#line 793 "program_representation_utils.m"
    MR_String program_representation_utils__V_25_25;
#line 793 "program_representation_utils.m"
    MR_String program_representation_utils__V_27_27;

#line 794 "program_representation_utils.m"
    {
#line 794 "program_representation_utils.m"
      mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__VarRep_5, &program_representation_utils__VarName_8);
    }
#line 795 "program_representation_utils.m"
    program_representation_utils__InitialInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__VarMode_6, (MR_Integer) 0)));
#line 795 "program_representation_utils.m"
    program_representation_utils__FinalInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__VarMode_6, (MR_Integer) 1)));
#line 803 "program_representation_utils.m"
    if ((program_representation_utils__InitialInst_9 == (MR_Integer) 0))
#line 803 "program_representation_utils.m"
      program_representation_utils__InitialInstStr_11 = (MR_String) "free";
#line 803 "program_representation_utils.m"
    else
#line 803 "program_representation_utils.m"
      if ((program_representation_utils__InitialInst_9 == (MR_Integer) 1))
#line 804 "program_representation_utils.m"
        program_representation_utils__InitialInstStr_11 = (MR_String) "ground";
#line 803 "program_representation_utils.m"
      else
#line 805 "program_representation_utils.m"
        program_representation_utils__InitialInstStr_11 = (MR_String) "other";
#line 803 "program_representation_utils.m"
    if ((program_representation_utils__FinalInst_10 == (MR_Integer) 0))
#line 803 "program_representation_utils.m"
      program_representation_utils__FinalInstStr_12 = (MR_String) "free";
#line 803 "program_representation_utils.m"
    else
#line 803 "program_representation_utils.m"
      if ((program_representation_utils__FinalInst_10 == (MR_Integer) 1))
#line 804 "program_representation_utils.m"
        program_representation_utils__FinalInstStr_12 = (MR_String) "ground";
#line 803 "program_representation_utils.m"
      else
#line 805 "program_representation_utils.m"
        program_representation_utils__FinalInstStr_12 = (MR_String) "other";
#line 5687 "program_representation_utils.c"
    {
#line 5689 "program_representation_utils.c"
      program_representation_utils__V_22_22 = mercury__string__f_43_43_2_f_0(program_representation_utils__FinalInstStr_12, (MR_String) ")");
    }
#line 5692 "program_representation_utils.c"
    {
#line 5694 "program_representation_utils.c"
      program_representation_utils__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) " >> ", program_representation_utils__V_22_22);
    }
#line 5697 "program_representation_utils.c"
    {
#line 5699 "program_representation_utils.c"
      program_representation_utils__V_25_25 = mercury__string__f_43_43_2_f_0(program_representation_utils__InitialInstStr_11, program_representation_utils__V_24_24);
    }
#line 5702 "program_representation_utils.c"
    {
#line 5704 "program_representation_utils.c"
      program_representation_utils__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "::(", program_representation_utils__V_25_25);
    }
#line 5707 "program_representation_utils.c"
    {
#line 5709 "program_representation_utils.c"
      *program_representation_utils__String_7 = mercury__string__f_43_43_2_f_0(program_representation_utils__VarName_8, program_representation_utils__V_27_27);
    }
#line 793 "program_representation_utils.m"
  }
#line 790 "program_representation_utils.m"
}

#line 666 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_atomic_goal_to_strings_3_p_0(
#line 666 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_4,
#line 666 "program_representation_utils.m"
  MR_Word program_representation_utils__AtomicGoalRep_5,
#line 666 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_6)
#line 666 "program_representation_utils.m"
{
#line 669 "program_representation_utils.m"
  {
#line 669 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 669 "program_representation_utils.m"
    MR_Word program_representation_utils__Strings0_14;
#line 669 "program_representation_utils.m"
    MR_Word program_representation_utils__V_112_112;

#line 683 "program_representation_utils.m"
    if (((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 2))))
#line 692 "program_representation_utils.m"
      {
#line 692 "program_representation_utils.m"
        MR_Word program_representation_utils__MaybeArgReps_193 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 692 "program_representation_utils.m"
        MR_Integer program_representation_utils__VarRep_203 = ((MR_Integer) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)));
#line 692 "program_representation_utils.m"
        MR_String program_representation_utils__ConsIdRep_204 = ((MR_String) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 692 "program_representation_utils.m"
        MR_String program_representation_utils__VarName_206;
#line 692 "program_representation_utils.m"
        MR_String program_representation_utils__UnifyString_207;
#line 692 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_208;
#line 692 "program_representation_utils.m"
        MR_String program_representation_utils__V_255_255;
#line 692 "program_representation_utils.m"
        MR_String program_representation_utils__V_256_256;
#line 692 "program_representation_utils.m"
        MR_String program_representation_utils__V_258_258;

#line 693 "program_representation_utils.m"
        {
#line 693 "program_representation_utils.m"
          mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__VarRep_203, &program_representation_utils__VarName_206);
        }
#line 5765 "program_representation_utils.c"
        {
#line 5767 "program_representation_utils.c"
          program_representation_utils__V_255_255 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__ConsIdRep_204);
        }
#line 5770 "program_representation_utils.c"
        {
#line 5772 "program_representation_utils.c"
          program_representation_utils__V_256_256 = mercury__string__f_43_43_2_f_0((MR_String) "=>", program_representation_utils__V_255_255);
        }
#line 5775 "program_representation_utils.c"
        {
#line 5777 "program_representation_utils.c"
          program_representation_utils__V_258_258 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__V_256_256);
        }
#line 5780 "program_representation_utils.c"
        {
#line 5782 "program_representation_utils.c"
          program_representation_utils__UnifyString_207 = mercury__string__f_43_43_2_f_0(program_representation_utils__VarName_206, program_representation_utils__V_258_258);
        }
#line 696 "program_representation_utils.m"
        {
#line 696 "program_representation_utils.m"
          program_representation_utils__print_args_to_strings__ho3_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__MaybeArgReps_193, &program_representation_utils__ArgsString_208);
        }
#line 698 "program_representation_utils.m"
        {
#line 698 "program_representation_utils.m"
          program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__UnifyString_207)), program_representation_utils__ArgsString_208);
        }
#line 692 "program_representation_utils.m"
      }
#line 683 "program_representation_utils.m"
    else
#line 683 "program_representation_utils.m"
      if (((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 0))))
#line 677 "program_representation_utils.m"
        {
#line 677 "program_representation_utils.m"
          MR_Integer program_representation_utils__VarRep_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)));
#line 677 "program_representation_utils.m"
          MR_String program_representation_utils__ConsIdRep_8 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 677 "program_representation_utils.m"
          MR_Word program_representation_utils__ArgReps_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 677 "program_representation_utils.m"
          MR_String program_representation_utils__VarName_11;
#line 677 "program_representation_utils.m"
          MR_String program_representation_utils__UnifyString_12;
#line 677 "program_representation_utils.m"
          MR_Word program_representation_utils__ArgsString_13;
#line 677 "program_representation_utils.m"
          MR_String program_representation_utils__V_264_264;
#line 677 "program_representation_utils.m"
          MR_String program_representation_utils__V_265_265;
#line 677 "program_representation_utils.m"
          MR_String program_representation_utils__V_267_267;

#line 678 "program_representation_utils.m"
          {
#line 678 "program_representation_utils.m"
            mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__VarRep_7, &program_representation_utils__VarName_11);
          }
#line 5827 "program_representation_utils.c"
          {
#line 5829 "program_representation_utils.c"
            program_representation_utils__V_264_264 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__ConsIdRep_8);
          }
#line 5832 "program_representation_utils.c"
          {
#line 5834 "program_representation_utils.c"
            program_representation_utils__V_265_265 = mercury__string__f_43_43_2_f_0((MR_String) "<=", program_representation_utils__V_264_264);
          }
#line 5837 "program_representation_utils.c"
          {
#line 5839 "program_representation_utils.c"
            program_representation_utils__V_267_267 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__V_265_265);
          }
#line 5842 "program_representation_utils.c"
          {
#line 5844 "program_representation_utils.c"
            program_representation_utils__UnifyString_12 = mercury__string__f_43_43_2_f_0(program_representation_utils__VarName_11, program_representation_utils__V_267_267);
          }
#line 681 "program_representation_utils.m"
          {
#line 681 "program_representation_utils.m"
            program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__ArgReps_9, &program_representation_utils__ArgsString_13);
          }
#line 682 "program_representation_utils.m"
          {
#line 682 "program_representation_utils.m"
            program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__UnifyString_12)), program_representation_utils__ArgsString_13);
          }
#line 677 "program_representation_utils.m"
        }
#line 683 "program_representation_utils.m"
      else
#line 683 "program_representation_utils.m"
        if (((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 1))))
#line 677 "program_representation_utils.m"
          {
#line 677 "program_representation_utils.m"
            MR_Integer program_representation_utils__VarRep_214 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)));
#line 677 "program_representation_utils.m"
            MR_String program_representation_utils__ConsIdRep_215 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 677 "program_representation_utils.m"
            MR_Word program_representation_utils__ArgReps_216 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 677 "program_representation_utils.m"
            MR_String program_representation_utils__VarName_218;
#line 677 "program_representation_utils.m"
            MR_String program_representation_utils__UnifyString_219;
#line 677 "program_representation_utils.m"
            MR_Word program_representation_utils__ArgsString_220;
#line 677 "program_representation_utils.m"
            MR_String program_representation_utils__V_269_269;
#line 677 "program_representation_utils.m"
            MR_String program_representation_utils__V_270_270;
#line 677 "program_representation_utils.m"
            MR_String program_representation_utils__V_272_272;

#line 678 "program_representation_utils.m"
            {
#line 678 "program_representation_utils.m"
              mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__VarRep_214, &program_representation_utils__VarName_218);
            }
#line 5889 "program_representation_utils.c"
            {
#line 5891 "program_representation_utils.c"
              program_representation_utils__V_269_269 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__ConsIdRep_215);
            }
#line 5894 "program_representation_utils.c"
            {
#line 5896 "program_representation_utils.c"
              program_representation_utils__V_270_270 = mercury__string__f_43_43_2_f_0((MR_String) "=>", program_representation_utils__V_269_269);
            }
#line 5899 "program_representation_utils.c"
            {
#line 5901 "program_representation_utils.c"
              program_representation_utils__V_272_272 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__V_270_270);
            }
#line 5904 "program_representation_utils.c"
            {
#line 5906 "program_representation_utils.c"
              program_representation_utils__UnifyString_219 = mercury__string__f_43_43_2_f_0(program_representation_utils__VarName_218, program_representation_utils__V_272_272);
            }
#line 681 "program_representation_utils.m"
            {
#line 681 "program_representation_utils.m"
              program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__ArgReps_216, &program_representation_utils__ArgsString_220);
            }
#line 682 "program_representation_utils.m"
            {
#line 682 "program_representation_utils.m"
              program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__UnifyString_219)), program_representation_utils__ArgsString_220);
            }
#line 677 "program_representation_utils.m"
          }
#line 683 "program_representation_utils.m"
        else
#line 683 "program_representation_utils.m"
          if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 743 "program_representation_utils.m"
            {
#line 743 "program_representation_utils.m"
              MR_Word program_representation_utils__ArgsString_138;
#line 743 "program_representation_utils.m"
              MR_Word program_representation_utils__Args_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 3)));
#line 743 "program_representation_utils.m"
              MR_String program_representation_utils__HeadString_140;
#line 743 "program_representation_utils.m"
              MR_String program_representation_utils__Module_141 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 743 "program_representation_utils.m"
              MR_String program_representation_utils__Pred_142 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 743 "program_representation_utils.m"
              MR_String program_representation_utils__V_233_233;
#line 743 "program_representation_utils.m"
              MR_String program_representation_utils__V_234_234;

#line 5942 "program_representation_utils.c"
              {
#line 5944 "program_representation_utils.c"
                program_representation_utils__V_233_233 = mercury__string__f_43_43_2_f_0((MR_String) ".", program_representation_utils__Pred_142);
              }
#line 5947 "program_representation_utils.c"
              {
#line 5949 "program_representation_utils.c"
                program_representation_utils__V_234_234 = mercury__string__f_43_43_2_f_0(program_representation_utils__Module_141, program_representation_utils__V_233_233);
              }
#line 5952 "program_representation_utils.c"
              {
#line 5954 "program_representation_utils.c"
                program_representation_utils__HeadString_140 = mercury__string__f_43_43_2_f_0((MR_String) "builtin ", program_representation_utils__V_234_234);
              }
#line 745 "program_representation_utils.m"
              {
#line 745 "program_representation_utils.m"
                program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_139, &program_representation_utils__ArgsString_138);
              }
#line 746 "program_representation_utils.m"
              {
#line 746 "program_representation_utils.m"
                program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__HeadString_140)), program_representation_utils__ArgsString_138);
              }
#line 743 "program_representation_utils.m"
            }
#line 683 "program_representation_utils.m"
          else
#line 683 "program_representation_utils.m"
            if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 706 "program_representation_utils.m"
              {
#line 706 "program_representation_utils.m"
                MR_Integer program_representation_utils__TargetRep_119 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 706 "program_representation_utils.m"
                MR_Integer program_representation_utils__SourceRep_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 706 "program_representation_utils.m"
                MR_String program_representation_utils__TargetName_121;
#line 706 "program_representation_utils.m"
                MR_String program_representation_utils__SourceName_122;
#line 706 "program_representation_utils.m"
                MR_String program_representation_utils__String_123;
#line 706 "program_representation_utils.m"
                MR_String program_representation_utils__V_237_237;
#line 706 "program_representation_utils.m"
                MR_String program_representation_utils__V_238_238;

#line 707 "program_representation_utils.m"
                {
#line 707 "program_representation_utils.m"
                  mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__TargetRep_119, &program_representation_utils__TargetName_121);
                }
#line 708 "program_representation_utils.m"
                {
#line 708 "program_representation_utils.m"
                  mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__SourceRep_120, &program_representation_utils__SourceName_122);
                }
#line 6000 "program_representation_utils.c"
                {
#line 6002 "program_representation_utils.c"
                  program_representation_utils__V_237_237 = mercury__string__f_43_43_2_f_0((MR_String) " to ", program_representation_utils__TargetName_121);
                }
#line 6005 "program_representation_utils.c"
                {
#line 6007 "program_representation_utils.c"
                  program_representation_utils__V_238_238 = mercury__string__f_43_43_2_f_0(program_representation_utils__SourceName_122, program_representation_utils__V_237_237);
                }
#line 6010 "program_representation_utils.c"
                {
#line 6012 "program_representation_utils.c"
                  program_representation_utils__String_123 = mercury__string__f_43_43_2_f_0((MR_String) "cast ", program_representation_utils__V_238_238);
                }
#line 710 "program_representation_utils.m"
                {
#line 710 "program_representation_utils.m"
                  program_representation_utils__Strings0_14 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__String_123)));
                }
#line 706 "program_representation_utils.m"
              }
#line 683 "program_representation_utils.m"
            else
#line 683 "program_representation_utils.m"
              if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 748 "program_representation_utils.m"
                {
#line 748 "program_representation_utils.m"
                  MR_String program_representation_utils__Event_30 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 748 "program_representation_utils.m"
                  MR_Word program_representation_utils__ArgsString_143;
#line 748 "program_representation_utils.m"
                  MR_Word program_representation_utils__Args_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 748 "program_representation_utils.m"
                  MR_String program_representation_utils__HeadString_145;

#line 6037 "program_representation_utils.c"
                  {
#line 6039 "program_representation_utils.c"
                    program_representation_utils__HeadString_145 = mercury__string__f_43_43_2_f_0((MR_String) "event ", program_representation_utils__Event_30);
                  }
#line 750 "program_representation_utils.m"
                  {
#line 750 "program_representation_utils.m"
                    program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_144, &program_representation_utils__ArgsString_143);
                  }
#line 751 "program_representation_utils.m"
                  {
#line 751 "program_representation_utils.m"
                    program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__HeadString_145)), program_representation_utils__ArgsString_143);
                  }
#line 748 "program_representation_utils.m"
                }
#line 683 "program_representation_utils.m"
              else
#line 683 "program_representation_utils.m"
                if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 723 "program_representation_utils.m"
                  {
#line 723 "program_representation_utils.m"
                    MR_Word program_representation_utils__TypeCtorInfo_168_168;
#line 723 "program_representation_utils.m"
                    MR_Integer program_representation_utils__HOVarRep_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 723 "program_representation_utils.m"
                    MR_String program_representation_utils__HOVarName_23;
#line 723 "program_representation_utils.m"
                    MR_String program_representation_utils__HeadString_24;
#line 723 "program_representation_utils.m"
                    MR_Word program_representation_utils__V_66_66;
#line 723 "program_representation_utils.m"
                    MR_Word program_representation_utils__V_67_67;
#line 723 "program_representation_utils.m"
                    MR_Word program_representation_utils__V_68_68;
#line 723 "program_representation_utils.m"
                    MR_Word program_representation_utils__ArgsString_130;
#line 723 "program_representation_utils.m"
                    MR_Word program_representation_utils__Args_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));

#line 724 "program_representation_utils.m"
                    {
#line 724 "program_representation_utils.m"
                      mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__HOVarRep_22, &program_representation_utils__HOVarName_23);
                    }
#line 6084 "program_representation_utils.c"
                    {
#line 6086 "program_representation_utils.c"
                      program_representation_utils__HeadString_24 = mercury__string__f_43_43_2_f_0(program_representation_utils__HOVarName_23, (MR_String) "(");
                    }
#line 726 "program_representation_utils.m"
                    {
#line 726 "program_representation_utils.m"
                      program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_131, &program_representation_utils__ArgsString_130);
                    }
#line 6094 "program_representation_utils.c"
                    program_representation_utils__TypeCtorInfo_168_168 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 727 "program_representation_utils.m"
                    {
#line 727 "program_representation_utils.m"
                      program_representation_utils__V_66_66 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_168_168, ((MR_Box) (program_representation_utils__HeadString_24)));
                    }
#line 727 "program_representation_utils.m"
                    {
#line 727 "program_representation_utils.m"
                      program_representation_utils__V_68_68 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_168_168, ((MR_Box) ((MR_String) ")")));
                    }
#line 727 "program_representation_utils.m"
                    {
#line 727 "program_representation_utils.m"
                      program_representation_utils__V_67_67 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_168_168, program_representation_utils__ArgsString_130, program_representation_utils__V_68_68);
                    }
#line 727 "program_representation_utils.m"
                    {
#line 727 "program_representation_utils.m"
                      program_representation_utils__Strings0_14 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_168_168, program_representation_utils__V_66_66, program_representation_utils__V_67_67);
                    }
#line 723 "program_representation_utils.m"
                  }
#line 683 "program_representation_utils.m"
                else
#line 683 "program_representation_utils.m"
                  if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 730 "program_representation_utils.m"
                    {
#line 730 "program_representation_utils.m"
                      MR_Word program_representation_utils__TypeCtorInfo_173_173;
#line 730 "program_representation_utils.m"
                      MR_Integer program_representation_utils__TCIVarRep_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 730 "program_representation_utils.m"
                      MR_Integer program_representation_utils__MethodNumber_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 730 "program_representation_utils.m"
                      MR_String program_representation_utils__TCIVarName_27;
#line 730 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_57_57;
#line 730 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_58_58;
#line 730 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_59_59;
#line 730 "program_representation_utils.m"
                      MR_Word program_representation_utils__ArgsString_132;
#line 730 "program_representation_utils.m"
                      MR_Word program_representation_utils__Args_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 3)));
#line 730 "program_representation_utils.m"
                      MR_String program_representation_utils__HeadString_134;
#line 730 "program_representation_utils.m"
                      MR_String program_representation_utils__V_243_243;
#line 730 "program_representation_utils.m"
                      MR_String program_representation_utils__V_245_245;
#line 730 "program_representation_utils.m"
                      MR_String program_representation_utils__V_246_246;
#line 730 "program_representation_utils.m"
                      MR_String program_representation_utils__V_247_247;

#line 731 "program_representation_utils.m"
                      {
#line 731 "program_representation_utils.m"
                        mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__TCIVarRep_25, &program_representation_utils__TCIVarName_27);
                      }
#line 6158 "program_representation_utils.c"
                      {
#line 6160 "program_representation_utils.c"
                        program_representation_utils__V_243_243 = mercury__string__f_43_43_2_f_0(program_representation_utils__TCIVarName_27, (MR_String) "(");
                      }
#line 6163 "program_representation_utils.c"
                      {
#line 6165 "program_representation_utils.c"
                        program_representation_utils__V_245_245 = mercury__string__f_43_43_2_f_0((MR_String) " of ", program_representation_utils__V_243_243);
                      }
#line 6168 "program_representation_utils.c"
                      {
#line 6170 "program_representation_utils.c"
                        program_representation_utils__V_246_246 = mercury__string__int_to_string_1_f_0(program_representation_utils__MethodNumber_26);
                      }
#line 6173 "program_representation_utils.c"
                      {
#line 6175 "program_representation_utils.c"
                        program_representation_utils__V_247_247 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_246_246, program_representation_utils__V_245_245);
                      }
#line 6178 "program_representation_utils.c"
                      {
#line 6180 "program_representation_utils.c"
                        program_representation_utils__HeadString_134 = mercury__string__f_43_43_2_f_0((MR_String) "method ", program_representation_utils__V_247_247);
                      }
#line 734 "program_representation_utils.m"
                      {
#line 734 "program_representation_utils.m"
                        program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_133, &program_representation_utils__ArgsString_132);
                      }
#line 6188 "program_representation_utils.c"
                      program_representation_utils__TypeCtorInfo_173_173 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 735 "program_representation_utils.m"
                      {
#line 735 "program_representation_utils.m"
                        program_representation_utils__V_57_57 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_173_173, ((MR_Box) (program_representation_utils__HeadString_134)));
                      }
#line 735 "program_representation_utils.m"
                      {
#line 735 "program_representation_utils.m"
                        program_representation_utils__V_59_59 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_173_173, ((MR_Box) ((MR_String) ")")));
                      }
#line 735 "program_representation_utils.m"
                      {
#line 735 "program_representation_utils.m"
                        program_representation_utils__V_58_58 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_173_173, program_representation_utils__ArgsString_132, program_representation_utils__V_59_59);
                      }
#line 735 "program_representation_utils.m"
                      {
#line 735 "program_representation_utils.m"
                        program_representation_utils__Strings0_14 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_173_173, program_representation_utils__V_57_57, program_representation_utils__V_58_58);
                      }
#line 730 "program_representation_utils.m"
                    }
#line 683 "program_representation_utils.m"
                  else
#line 683 "program_representation_utils.m"
                    if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 692 "program_representation_utils.m"
                      {
#line 692 "program_representation_utils.m"
                        MR_Word program_representation_utils__MaybeArgReps_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 3)));
#line 692 "program_representation_utils.m"
                        MR_Integer program_representation_utils__VarRep_113 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 692 "program_representation_utils.m"
                        MR_String program_representation_utils__ConsIdRep_114 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 692 "program_representation_utils.m"
                        MR_String program_representation_utils__VarName_116;
#line 692 "program_representation_utils.m"
                        MR_String program_representation_utils__UnifyString_117;
#line 692 "program_representation_utils.m"
                        MR_Word program_representation_utils__ArgsString_118;
#line 692 "program_representation_utils.m"
                        MR_String program_representation_utils__V_250_250;
#line 692 "program_representation_utils.m"
                        MR_String program_representation_utils__V_251_251;
#line 692 "program_representation_utils.m"
                        MR_String program_representation_utils__V_253_253;

#line 693 "program_representation_utils.m"
                        {
#line 693 "program_representation_utils.m"
                          mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__VarRep_113, &program_representation_utils__VarName_116);
                        }
#line 6242 "program_representation_utils.c"
                        {
#line 6244 "program_representation_utils.c"
                          program_representation_utils__V_250_250 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__ConsIdRep_114);
                        }
#line 6247 "program_representation_utils.c"
                        {
#line 6249 "program_representation_utils.c"
                          program_representation_utils__V_251_251 = mercury__string__f_43_43_2_f_0((MR_String) "<=", program_representation_utils__V_250_250);
                        }
#line 6252 "program_representation_utils.c"
                        {
#line 6254 "program_representation_utils.c"
                          program_representation_utils__V_253_253 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__V_251_251);
                        }
#line 6257 "program_representation_utils.c"
                        {
#line 6259 "program_representation_utils.c"
                          program_representation_utils__UnifyString_117 = mercury__string__f_43_43_2_f_0(program_representation_utils__VarName_116, program_representation_utils__V_253_253);
                        }
#line 696 "program_representation_utils.m"
                        {
#line 696 "program_representation_utils.m"
                          program_representation_utils__print_args_to_strings__ho3_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__MaybeArgReps_15, &program_representation_utils__ArgsString_118);
                        }
#line 698 "program_representation_utils.m"
                        {
#line 698 "program_representation_utils.m"
                          program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__UnifyString_117)), program_representation_utils__ArgsString_118);
                        }
#line 692 "program_representation_utils.m"
                      }
#line 683 "program_representation_utils.m"
                    else
#line 683 "program_representation_utils.m"
                      if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 738 "program_representation_utils.m"
                        {
#line 738 "program_representation_utils.m"
                          MR_String program_representation_utils__Module_28 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 738 "program_representation_utils.m"
                          MR_String program_representation_utils__Pred_29 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 738 "program_representation_utils.m"
                          MR_Word program_representation_utils__ArgsString_135;
#line 738 "program_representation_utils.m"
                          MR_Word program_representation_utils__Args_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 3)));
#line 738 "program_representation_utils.m"
                          MR_String program_representation_utils__HeadString_137;
#line 738 "program_representation_utils.m"
                          MR_String program_representation_utils__V_260_260;

#line 6293 "program_representation_utils.c"
                          {
#line 6295 "program_representation_utils.c"
                            program_representation_utils__V_260_260 = mercury__string__f_43_43_2_f_0((MR_String) ".", program_representation_utils__Pred_29);
                          }
#line 6298 "program_representation_utils.c"
                          {
#line 6300 "program_representation_utils.c"
                            program_representation_utils__HeadString_137 = mercury__string__f_43_43_2_f_0(program_representation_utils__Module_28, program_representation_utils__V_260_260);
                          }
#line 740 "program_representation_utils.m"
                          {
#line 740 "program_representation_utils.m"
                            program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_136, &program_representation_utils__ArgsString_135);
                          }
#line 741 "program_representation_utils.m"
                          {
#line 741 "program_representation_utils.m"
                            program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__HeadString_137)), program_representation_utils__ArgsString_135);
                          }
#line 738 "program_representation_utils.m"
                        }
#line 683 "program_representation_utils.m"
                      else
#line 683 "program_representation_utils.m"
                        if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 718 "program_representation_utils.m"
                          {
#line 718 "program_representation_utils.m"
                            MR_Word program_representation_utils__TypeCtorInfo_163_163;
#line 718 "program_representation_utils.m"
                            MR_Word program_representation_utils__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 718 "program_representation_utils.m"
                            MR_Word program_representation_utils__V_71_71;
#line 718 "program_representation_utils.m"
                            MR_Word program_representation_utils__V_73_73;
#line 718 "program_representation_utils.m"
                            MR_Word program_representation_utils__V_74_74;
#line 718 "program_representation_utils.m"
                            MR_Word program_representation_utils__ArgsString_129;

#line 719 "program_representation_utils.m"
                            {
#line 719 "program_representation_utils.m"
                              program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_21, &program_representation_utils__ArgsString_129);
                            }
#line 6339 "program_representation_utils.c"
                            program_representation_utils__TypeCtorInfo_163_163 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 720 "program_representation_utils.m"
                            {
#line 720 "program_representation_utils.m"
                              program_representation_utils__V_71_71 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_163_163, ((MR_Box) ((MR_String) "foreign_proc(")));
                            }
#line 720 "program_representation_utils.m"
                            {
#line 720 "program_representation_utils.m"
                              program_representation_utils__V_74_74 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_163_163, ((MR_Box) ((MR_String) ")")));
                            }
#line 720 "program_representation_utils.m"
                            {
#line 720 "program_representation_utils.m"
                              program_representation_utils__V_73_73 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_163_163, program_representation_utils__ArgsString_129, program_representation_utils__V_74_74);
                            }
#line 720 "program_representation_utils.m"
                            {
#line 720 "program_representation_utils.m"
                              program_representation_utils__Strings0_14 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_163_163, program_representation_utils__V_71_71, program_representation_utils__V_73_73);
                            }
#line 718 "program_representation_utils.m"
                          }
#line 683 "program_representation_utils.m"
                        else
#line 683 "program_representation_utils.m"
                          if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 700 "program_representation_utils.m"
                            {
#line 700 "program_representation_utils.m"
                              MR_Integer program_representation_utils__TargetRep_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 700 "program_representation_utils.m"
                              MR_Integer program_representation_utils__SourceRep_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 700 "program_representation_utils.m"
                              MR_String program_representation_utils__TargetName_18;
#line 700 "program_representation_utils.m"
                              MR_String program_representation_utils__SourceName_19;
#line 700 "program_representation_utils.m"
                              MR_String program_representation_utils__String_20;
#line 700 "program_representation_utils.m"
                              MR_String program_representation_utils__V_262_262;

#line 701 "program_representation_utils.m"
                              {
#line 701 "program_representation_utils.m"
                                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__TargetRep_16, &program_representation_utils__TargetName_18);
                              }
#line 702 "program_representation_utils.m"
                              {
#line 702 "program_representation_utils.m"
                                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__SourceRep_17, &program_representation_utils__SourceName_19);
                              }
#line 6392 "program_representation_utils.c"
                              {
#line 6394 "program_representation_utils.c"
                                program_representation_utils__V_262_262 = mercury__string__f_43_43_2_f_0((MR_String) " := ", program_representation_utils__SourceName_19);
                              }
#line 6397 "program_representation_utils.c"
                              {
#line 6399 "program_representation_utils.c"
                                program_representation_utils__String_20 = mercury__string__f_43_43_2_f_0(program_representation_utils__TargetName_18, program_representation_utils__V_262_262);
                              }
#line 704 "program_representation_utils.m"
                              {
#line 704 "program_representation_utils.m"
                                program_representation_utils__Strings0_14 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__String_20)));
                              }
#line 700 "program_representation_utils.m"
                            }
#line 683 "program_representation_utils.m"
                          else
#line 712 "program_representation_utils.m"
                            {
#line 712 "program_representation_utils.m"
                              MR_Integer program_representation_utils__TargetRep_124 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 712 "program_representation_utils.m"
                              MR_Integer program_representation_utils__SourceRep_125 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 712 "program_representation_utils.m"
                              MR_String program_representation_utils__TargetName_126;
#line 712 "program_representation_utils.m"
                              MR_String program_representation_utils__SourceName_127;
#line 712 "program_representation_utils.m"
                              MR_String program_representation_utils__String_128;
#line 712 "program_representation_utils.m"
                              MR_String program_representation_utils__V_274_274;

#line 713 "program_representation_utils.m"
                              {
#line 713 "program_representation_utils.m"
                                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__TargetRep_124, &program_representation_utils__TargetName_126);
                              }
#line 714 "program_representation_utils.m"
                              {
#line 714 "program_representation_utils.m"
                                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__SourceRep_125, &program_representation_utils__SourceName_127);
                              }
#line 6436 "program_representation_utils.c"
                              {
#line 6438 "program_representation_utils.c"
                                program_representation_utils__V_274_274 = mercury__string__f_43_43_2_f_0((MR_String) " == ", program_representation_utils__TargetName_126);
                              }
#line 6441 "program_representation_utils.c"
                              {
#line 6443 "program_representation_utils.c"
                                program_representation_utils__String_128 = mercury__string__f_43_43_2_f_0(program_representation_utils__SourceName_127, program_representation_utils__V_274_274);
                              }
#line 716 "program_representation_utils.m"
                              {
#line 716 "program_representation_utils.m"
                                program_representation_utils__Strings0_14 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__String_128)));
                              }
#line 712 "program_representation_utils.m"
                            }
#line 753 "program_representation_utils.m"
    {
#line 753 "program_representation_utils.m"
      program_representation_utils__V_112_112 = program_representation_utils__nl_0_f_0();
    }
#line 753 "program_representation_utils.m"
    {
#line 753 "program_representation_utils.m"
      *program_representation_utils__Strings_6 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__Strings0_14, program_representation_utils__V_112_112);
    }
#line 669 "program_representation_utils.m"
  }
#line 666 "program_representation_utils.m"
}

#line 656 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(
#line 656 "program_representation_utils.m"
  MR_Integer program_representation_utils__Indent_4,
#line 656 "program_representation_utils.m"
  MR_Word program_representation_utils__ConsIdArityRep_5,
#line 656 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_6)
#line 656 "program_representation_utils.m"
{
#line 659 "program_representation_utils.m"
  {
#line 659 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 659 "program_representation_utils.m"
    MR_String program_representation_utils__ConsIdRep_7 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ConsIdArityRep_5, (MR_Integer) 0)));
#line 659 "program_representation_utils.m"
    MR_Integer program_representation_utils__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__ConsIdArityRep_5, (MR_Integer) 1)));
#line 659 "program_representation_utils.m"
    MR_String program_representation_utils__String_9;
#line 659 "program_representation_utils.m"
    MR_Word program_representation_utils__V_16_16;
#line 659 "program_representation_utils.m"
    MR_String program_representation_utils__V_19_19;
#line 659 "program_representation_utils.m"
    MR_String program_representation_utils__V_20_20;
#line 659 "program_representation_utils.m"
    MR_String program_representation_utils__V_22_22;
#line 659 "program_representation_utils.m"
    MR_String program_representation_utils__V_23_23;

#line 6500 "program_representation_utils.c"
    {
#line 6502 "program_representation_utils.c"
      program_representation_utils__V_19_19 = mercury__string__int_to_string_1_f_0(program_representation_utils__Arity_8);
    }
#line 6505 "program_representation_utils.c"
    {
#line 6507 "program_representation_utils.c"
      program_representation_utils__V_20_20 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_19_19, (MR_String) "\n");
    }
#line 6510 "program_representation_utils.c"
    {
#line 6512 "program_representation_utils.c"
      program_representation_utils__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "/", program_representation_utils__V_20_20);
    }
#line 6515 "program_representation_utils.c"
    {
#line 6517 "program_representation_utils.c"
      program_representation_utils__V_23_23 = mercury__string__f_43_43_2_f_0(program_representation_utils__ConsIdRep_7, program_representation_utils__V_22_22);
    }
#line 6520 "program_representation_utils.c"
    {
#line 6522 "program_representation_utils.c"
      program_representation_utils__String_9 = mercury__string__f_43_43_2_f_0((MR_String) "% case ", program_representation_utils__V_23_23);
    }
#line 662 "program_representation_utils.m"
    {
#line 662 "program_representation_utils.m"
      program_representation_utils__V_16_16 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_4);
    }
#line 662 "program_representation_utils.m"
    {
#line 662 "program_representation_utils.m"
      *program_representation_utils__Strings_6 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__V_16_16, ((MR_Box) (program_representation_utils__String_9)));
    }
#line 659 "program_representation_utils.m"
  }
#line 656 "program_representation_utils.m"
}

#line 644 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0_1(
#line 644 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 644 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 644 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2)
#line 644 "program_representation_utils.m"
{
#line 644 "program_representation_utils.m"
  {
#line 644 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 644 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_Strings_6;

#line 644 "program_representation_utils.m"
    {
#line 644 "program_representation_utils.m"
      program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv0_Strings_6);
    }
#line 644 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv0_Strings_6));
#line 644 "program_representation_utils.m"
  }
#line 644 "program_representation_utils.m"
}

#line 626 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0(
#line 626 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_50,
#line 626 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_49,
#line 626 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_1,
#line 626 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_2,
#line 626 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_3,
#line 626 "program_representation_utils.m"
  MR_Integer program_representation_utils__CaseNum_4,
#line 626 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__5_5,
#line 626 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__6_6,
#line 626 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__7_7)
#line 626 "program_representation_utils.m"
{
#line 631 "program_representation_utils.m"
  {
#line 631 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 631 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 631 "program_representation_utils.m"
      {
#line 631 "program_representation_utils.m"
        {
#line 631 "program_representation_utils.m"
          *program_representation_utils__HeadVar__7_7 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 631 "program_representation_utils.m"
      }
#line 631 "program_representation_utils.m"
    else
#line 633 "program_representation_utils.m"
      {
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_58_58;
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__CaseRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 0)));
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__CaseReps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 1)));
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__DelimString_21;
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__MainConsIdArityRep_22;
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__OtherConsIdArityRep_23;
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__GoalRep_24;
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__ConsIdArityString_25;
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__OtherConsIdArityStrings_26;
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__RevSubGoalPath_27;
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__HeadGoalString_28;
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__TailCasesStrings_29;
#line 633 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_33_33;
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__V_35_35;
#line 633 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_36_36;
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__V_38_38;
#line 633 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_40_40;
#line 633 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_42_42;
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__V_45_45;
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__V_46_46;
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__V_47_47;
#line 633 "program_representation_utils.m"
        MR_Word program_representation_utils__V_48_48;

#line 637 "program_representation_utils.m"
        if ((program_representation_utils__HeadVar__6_6 == (MR_Integer) 0))
#line 635 "program_representation_utils.m"
          {
#line 636 "program_representation_utils.m"
            {
#line 636 "program_representation_utils.m"
              program_representation_utils__DelimString_21 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 635 "program_representation_utils.m"
          }
#line 637 "program_representation_utils.m"
        else
#line 638 "program_representation_utils.m"
          {
#line 638 "program_representation_utils.m"
            MR_Word program_representation_utils__TypeCtorInfo_53_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 638 "program_representation_utils.m"
            MR_Word program_representation_utils__V_30_30;
#line 638 "program_representation_utils.m"
            MR_Word program_representation_utils__V_31_31;

#line 639 "program_representation_utils.m"
            {
#line 639 "program_representation_utils.m"
              program_representation_utils__V_30_30 = program_representation_utils__indent_1_f_0(program_representation_utils__HeadVar__2_2);
            }
#line 639 "program_representation_utils.m"
            {
#line 639 "program_representation_utils.m"
              program_representation_utils__V_31_31 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_53_53, ((MR_Box) ((MR_String) ";\n")));
            }
#line 639 "program_representation_utils.m"
            {
#line 639 "program_representation_utils.m"
              program_representation_utils__DelimString_21 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_53_53, program_representation_utils__V_30_30, program_representation_utils__V_31_31);
            }
#line 638 "program_representation_utils.m"
          }
#line 641 "program_representation_utils.m"
        program_representation_utils__MainConsIdArityRep_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__CaseRep_17, (MR_Integer) 0)));
#line 641 "program_representation_utils.m"
        program_representation_utils__OtherConsIdArityRep_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__CaseRep_17, (MR_Integer) 1)));
#line 641 "program_representation_utils.m"
        program_representation_utils__GoalRep_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__CaseRep_17, (MR_Integer) 2)));
#line 642 "program_representation_utils.m"
        program_representation_utils__V_33_33 = (program_representation_utils__HeadVar__2_2 + (MR_Integer) 1);
#line 642 "program_representation_utils.m"
        {
#line 642 "program_representation_utils.m"
          program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(program_representation_utils__V_33_33, program_representation_utils__MainConsIdArityRep_22, &program_representation_utils__ConsIdArityString_25);
        }
#line 644 "program_representation_utils.m"
        program_representation_utils__V_36_36 = (program_representation_utils__HeadVar__2_2 + (MR_Integer) 1);
#line 644 "program_representation_utils.m"
        {
#line 644 "program_representation_utils.m"
          program_representation_utils__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 644 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_35_35, 0) = ((MR_Box) (&program_representation_utils_scalar_common_3[7]));
#line 644 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_35_35, 1) = ((MR_Box) (program_representation_utils__print_switch_to_strings_7_p_0_1));
#line 644 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 644 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_35_35, 3) = ((MR_Box) (program_representation_utils__V_36_36));
#line 644 "program_representation_utils.m"
        }
#line 644 "program_representation_utils.m"
        {
#line 644 "program_representation_utils.m"
          mercury__list__map_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0, (MR_Word) &program_representation_utils_scalar_common_1[0], program_representation_utils__V_35_35, program_representation_utils__OtherConsIdArityRep_23, &program_representation_utils__OtherConsIdArityStrings_26);
        }
#line 646 "program_representation_utils.m"
        {
#line 646 "program_representation_utils.m"
          program_representation_utils__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 646 "program_representation_utils.m"
          MR_hl_field(MR_mktag(3), program_representation_utils__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 646 "program_representation_utils.m"
          MR_hl_field(MR_mktag(3), program_representation_utils__V_38_38, 1) = ((MR_Box) (program_representation_utils__CaseNum_4));
#line 646 "program_representation_utils.m"
          MR_hl_field(MR_mktag(3), program_representation_utils__V_38_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 646 "program_representation_utils.m"
        }
#line 646 "program_representation_utils.m"
        {
#line 646 "program_representation_utils.m"
          program_representation_utils__RevSubGoalPath_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_27, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_3));
#line 646 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_27, 1) = ((MR_Box) (program_representation_utils__V_38_38));
#line 646 "program_representation_utils.m"
        }
#line 648 "program_representation_utils.m"
        program_representation_utils__V_40_40 = (program_representation_utils__HeadVar__2_2 + (MR_Integer) 1);
#line 648 "program_representation_utils.m"
        {
#line 648 "program_representation_utils.m"
          program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_50, program_representation_utils__TypeClassInfo_for_goal_annotation_49, program_representation_utils__Info_1, program_representation_utils__V_40_40, program_representation_utils__RevSubGoalPath_27, program_representation_utils__GoalRep_24, &program_representation_utils__HeadGoalString_28);
        }
#line 650 "program_representation_utils.m"
        program_representation_utils__V_42_42 = (program_representation_utils__CaseNum_4 + (MR_Integer) 1);
#line 650 "program_representation_utils.m"
        {
#line 650 "program_representation_utils.m"
          program_representation_utils__print_switch_to_strings_7_p_0(program_representation_utils__TypeInfo_for_T_50, program_representation_utils__TypeClassInfo_for_goal_annotation_49, program_representation_utils__Info_1, program_representation_utils__HeadVar__2_2, program_representation_utils__RevGoalPath_3, program_representation_utils__V_42_42, program_representation_utils__CaseReps_18, (MR_Integer) 1, &program_representation_utils__TailCasesStrings_29);
        }
#line 6767 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 653 "program_representation_utils.m"
        {
#line 653 "program_representation_utils.m"
          program_representation_utils__V_47_47 = mercury__cord__cord_list_to_cord_1_f_0(program_representation_utils__TypeCtorInfo_58_58, program_representation_utils__OtherConsIdArityStrings_26);
        }
#line 653 "program_representation_utils.m"
        {
#line 653 "program_representation_utils.m"
          program_representation_utils__V_48_48 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_58_58, program_representation_utils__HeadGoalString_28, program_representation_utils__TailCasesStrings_29);
        }
#line 652 "program_representation_utils.m"
        {
#line 652 "program_representation_utils.m"
          program_representation_utils__V_46_46 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_58_58, program_representation_utils__V_47_47, program_representation_utils__V_48_48);
        }
#line 652 "program_representation_utils.m"
        {
#line 652 "program_representation_utils.m"
          program_representation_utils__V_45_45 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_58_58, program_representation_utils__ConsIdArityString_25, program_representation_utils__V_46_46);
        }
#line 652 "program_representation_utils.m"
        {
#line 652 "program_representation_utils.m"
          *program_representation_utils__HeadVar__7_7 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_58_58, program_representation_utils__DelimString_21, program_representation_utils__V_45_45);
        }
#line 633 "program_representation_utils.m"
      }
#line 631 "program_representation_utils.m"
  }
#line 626 "program_representation_utils.m"
}

#line 604 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_disj_to_strings_7_p_0(
#line 604 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_36,
#line 604 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_35,
#line 604 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_1,
#line 604 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_2,
#line 604 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_3,
#line 604 "program_representation_utils.m"
  MR_Integer program_representation_utils__DisjNum_4,
#line 604 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__5_5,
#line 604 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__6_6,
#line 604 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__7_7)
#line 604 "program_representation_utils.m"
{
#line 609 "program_representation_utils.m"
  {
#line 609 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 609 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "program_representation_utils.m"
      {
#line 609 "program_representation_utils.m"
        {
#line 609 "program_representation_utils.m"
          *program_representation_utils__HeadVar__7_7 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 609 "program_representation_utils.m"
      }
#line 609 "program_representation_utils.m"
    else
#line 611 "program_representation_utils.m"
      {
#line 611 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_40_40;
#line 611 "program_representation_utils.m"
        MR_Word program_representation_utils__GoalRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 0)));
#line 611 "program_representation_utils.m"
        MR_Word program_representation_utils__GoalReps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 1)));
#line 611 "program_representation_utils.m"
        MR_Word program_representation_utils__DelimString_21;
#line 611 "program_representation_utils.m"
        MR_Word program_representation_utils__RevSubGoalPath_22;
#line 611 "program_representation_utils.m"
        MR_Word program_representation_utils__HeadGoalString_23;
#line 611 "program_representation_utils.m"
        MR_Word program_representation_utils__TailGoalsString_24;
#line 611 "program_representation_utils.m"
        MR_Word program_representation_utils__V_28_28;
#line 611 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_29_29;
#line 611 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_31_31;
#line 611 "program_representation_utils.m"
        MR_Word program_representation_utils__V_34_34;

#line 615 "program_representation_utils.m"
        if ((program_representation_utils__HeadVar__6_6 == (MR_Integer) 0))
#line 613 "program_representation_utils.m"
          {
#line 614 "program_representation_utils.m"
            {
#line 614 "program_representation_utils.m"
              program_representation_utils__DelimString_21 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 613 "program_representation_utils.m"
          }
#line 615 "program_representation_utils.m"
        else
#line 616 "program_representation_utils.m"
          {
#line 616 "program_representation_utils.m"
            MR_Word program_representation_utils__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 616 "program_representation_utils.m"
            MR_Word program_representation_utils__V_25_25;
#line 616 "program_representation_utils.m"
            MR_Word program_representation_utils__V_26_26;

#line 617 "program_representation_utils.m"
            {
#line 617 "program_representation_utils.m"
              program_representation_utils__V_25_25 = program_representation_utils__indent_1_f_0(program_representation_utils__HeadVar__2_2);
            }
#line 617 "program_representation_utils.m"
            {
#line 617 "program_representation_utils.m"
              program_representation_utils__V_26_26 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_39_39, ((MR_Box) ((MR_String) ";\n")));
            }
#line 617 "program_representation_utils.m"
            {
#line 617 "program_representation_utils.m"
              program_representation_utils__DelimString_21 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_39_39, program_representation_utils__V_25_25, program_representation_utils__V_26_26);
            }
#line 616 "program_representation_utils.m"
          }
#line 619 "program_representation_utils.m"
        {
#line 619 "program_representation_utils.m"
          program_representation_utils__V_28_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 619 "program_representation_utils.m"
          MR_hl_field(MR_mktag(2), program_representation_utils__V_28_28, 0) = ((MR_Box) (program_representation_utils__DisjNum_4));
#line 619 "program_representation_utils.m"
        }
#line 619 "program_representation_utils.m"
        {
#line 619 "program_representation_utils.m"
          program_representation_utils__RevSubGoalPath_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_22, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_3));
#line 619 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_22, 1) = ((MR_Box) (program_representation_utils__V_28_28));
#line 619 "program_representation_utils.m"
        }
#line 620 "program_representation_utils.m"
        program_representation_utils__V_29_29 = (program_representation_utils__HeadVar__2_2 + (MR_Integer) 1);
#line 620 "program_representation_utils.m"
        {
#line 620 "program_representation_utils.m"
          program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_36, program_representation_utils__TypeClassInfo_for_goal_annotation_35, program_representation_utils__Info_1, program_representation_utils__V_29_29, program_representation_utils__RevSubGoalPath_22, program_representation_utils__GoalRep_17, &program_representation_utils__HeadGoalString_23);
        }
#line 622 "program_representation_utils.m"
        program_representation_utils__V_31_31 = (program_representation_utils__DisjNum_4 + (MR_Integer) 1);
#line 622 "program_representation_utils.m"
        {
#line 622 "program_representation_utils.m"
          program_representation_utils__print_disj_to_strings_7_p_0(program_representation_utils__TypeInfo_for_T_36, program_representation_utils__TypeClassInfo_for_goal_annotation_35, program_representation_utils__Info_1, program_representation_utils__HeadVar__2_2, program_representation_utils__RevGoalPath_3, program_representation_utils__V_31_31, program_representation_utils__GoalReps_18, (MR_Integer) 1, &program_representation_utils__TailGoalsString_24);
        }
#line 6938 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 624 "program_representation_utils.m"
        {
#line 624 "program_representation_utils.m"
          program_representation_utils__V_34_34 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_40, program_representation_utils__HeadGoalString_23, program_representation_utils__TailGoalsString_24);
        }
#line 624 "program_representation_utils.m"
        {
#line 624 "program_representation_utils.m"
          *program_representation_utils__HeadVar__7_7 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_40, program_representation_utils__DelimString_21, program_representation_utils__V_34_34);
        }
#line 611 "program_representation_utils.m"
      }
#line 609 "program_representation_utils.m"
  }
#line 604 "program_representation_utils.m"
}

#line 578 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_conj_to_strings_2_6_p_0(
#line 578 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_32,
#line 578 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_31,
#line 578 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_1,
#line 578 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_2,
#line 578 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_3,
#line 578 "program_representation_utils.m"
  MR_Integer program_representation_utils__ConjNum_4,
#line 578 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__5_5,
#line 578 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__6_6)
#line 578 "program_representation_utils.m"
{
#line 582 "program_representation_utils.m"
  {
#line 582 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 582 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "program_representation_utils.m"
      {
#line 582 "program_representation_utils.m"
        {
#line 582 "program_representation_utils.m"
          *program_representation_utils__HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 582 "program_representation_utils.m"
      }
#line 582 "program_representation_utils.m"
    else
#line 584 "program_representation_utils.m"
      {
#line 584 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_36_36;
#line 584 "program_representation_utils.m"
        MR_Word program_representation_utils__GoalRep_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 0)));
#line 584 "program_representation_utils.m"
        MR_Word program_representation_utils__GoalReps_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 1)));
#line 584 "program_representation_utils.m"
        MR_Word program_representation_utils__RevSubGoalPath_18;
#line 584 "program_representation_utils.m"
        MR_Word program_representation_utils__HeadGoalString_19;
#line 584 "program_representation_utils.m"
        MR_Word program_representation_utils__TailGoalsString_20;
#line 584 "program_representation_utils.m"
        MR_Word program_representation_utils__Separator_21;
#line 584 "program_representation_utils.m"
        MR_Word program_representation_utils__V_24_24;
#line 584 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_25_25;
#line 584 "program_representation_utils.m"
        MR_Word program_representation_utils__V_30_30;

#line 590 "program_representation_utils.m"
        {
#line 590 "program_representation_utils.m"
          program_representation_utils__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 590 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_24_24, 0) = ((MR_Box) (program_representation_utils__ConjNum_4));
#line 590 "program_representation_utils.m"
        }
#line 590 "program_representation_utils.m"
        {
#line 590 "program_representation_utils.m"
          program_representation_utils__RevSubGoalPath_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_18, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_3));
#line 590 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_18, 1) = ((MR_Box) (program_representation_utils__V_24_24));
#line 590 "program_representation_utils.m"
        }
#line 591 "program_representation_utils.m"
        {
#line 591 "program_representation_utils.m"
          program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_32, program_representation_utils__TypeClassInfo_for_goal_annotation_31, program_representation_utils__Info_1, program_representation_utils__HeadVar__2_2, program_representation_utils__RevSubGoalPath_18, program_representation_utils__GoalRep_15, &program_representation_utils__HeadGoalString_19);
        }
#line 593 "program_representation_utils.m"
        program_representation_utils__V_25_25 = (program_representation_utils__ConjNum_4 + (MR_Integer) 1);
#line 593 "program_representation_utils.m"
        {
#line 593 "program_representation_utils.m"
          program_representation_utils__print_conj_to_strings_2_6_p_0(program_representation_utils__TypeInfo_for_T_32, program_representation_utils__TypeClassInfo_for_goal_annotation_31, program_representation_utils__Info_1, program_representation_utils__HeadVar__2_2, program_representation_utils__RevGoalPath_3, program_representation_utils__V_25_25, program_representation_utils__GoalReps_16, &program_representation_utils__TailGoalsString_20);
        }
#line 598 "program_representation_utils.m"
        if ((program_representation_utils__GoalReps_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 596 "program_representation_utils.m"
          {
#line 597 "program_representation_utils.m"
            {
#line 597 "program_representation_utils.m"
              program_representation_utils__Separator_21 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 596 "program_representation_utils.m"
          }
#line 598 "program_representation_utils.m"
        else
#line 599 "program_representation_utils.m"
          {
#line 599 "program_representation_utils.m"
            MR_Word program_representation_utils__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 599 "program_representation_utils.m"
            MR_Word program_representation_utils__V_27_27;
#line 599 "program_representation_utils.m"
            MR_Word program_representation_utils__V_28_28;

#line 600 "program_representation_utils.m"
            {
#line 600 "program_representation_utils.m"
              program_representation_utils__V_27_27 = program_representation_utils__indent_1_f_0(program_representation_utils__HeadVar__2_2);
            }
#line 600 "program_representation_utils.m"
            {
#line 600 "program_representation_utils.m"
              program_representation_utils__V_28_28 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_35_35, ((MR_Box) ((MR_String) ",\n")));
            }
#line 600 "program_representation_utils.m"
            {
#line 600 "program_representation_utils.m"
              program_representation_utils__Separator_21 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__V_27_27, program_representation_utils__V_28_28);
            }
#line 599 "program_representation_utils.m"
          }
#line 7088 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 602 "program_representation_utils.m"
        {
#line 602 "program_representation_utils.m"
          program_representation_utils__V_30_30 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_36_36, program_representation_utils__Separator_21, program_representation_utils__TailGoalsString_20);
        }
#line 602 "program_representation_utils.m"
        {
#line 602 "program_representation_utils.m"
          *program_representation_utils__HeadVar__6_6 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_36_36, program_representation_utils__HeadGoalString_19, program_representation_utils__V_30_30);
        }
#line 584 "program_representation_utils.m"
      }
#line 582 "program_representation_utils.m"
  }
#line 578 "program_representation_utils.m"
}

#line 564 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_conj_to_strings_5_p_0(
#line 564 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_17,
#line 564 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_16,
#line 564 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_6,
#line 564 "program_representation_utils.m"
  MR_Integer program_representation_utils__Indent_7,
#line 564 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_8,
#line 564 "program_representation_utils.m"
  MR_Word program_representation_utils__GoalReps_9,
#line 564 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_10)
#line 564 "program_representation_utils.m"
{
#line 572 "program_representation_utils.m"
  {
#line 572 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 572 "program_representation_utils.m"
    if ((program_representation_utils__GoalReps_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "program_representation_utils.m"
      {
#line 570 "program_representation_utils.m"
        MR_Word program_representation_utils__V_14_14;

#line 571 "program_representation_utils.m"
        {
#line 571 "program_representation_utils.m"
          program_representation_utils__V_14_14 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
        }
#line 571 "program_representation_utils.m"
        {
#line 571 "program_representation_utils.m"
          *program_representation_utils__Strings_10 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__V_14_14, ((MR_Box) ((MR_String) "true\n")));
        }
#line 570 "program_representation_utils.m"
      }
#line 572 "program_representation_utils.m"
    else
#line 573 "program_representation_utils.m"
      {
#line 574 "program_representation_utils.m"
        {
#line 574 "program_representation_utils.m"
          program_representation_utils__print_conj_to_strings_2_6_p_0(program_representation_utils__TypeInfo_for_T_17, program_representation_utils__TypeClassInfo_for_goal_annotation_16, program_representation_utils__Info_6, program_representation_utils__Indent_7, program_representation_utils__RevGoalPath_8, (MR_Integer) 1, program_representation_utils__GoalReps_9, program_representation_utils__Strings_10);
#line 574 "program_representation_utils.m"
          return;
        }
#line 573 "program_representation_utils.m"
      }
#line 572 "program_representation_utils.m"
  }
#line 564 "program_representation_utils.m"
}

#line 420 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(
#line 420 "program_representation_utils.m"
  MR_Word program_representation_utils__VarNameTable_6,
#line 420 "program_representation_utils.m"
  MR_Integer program_representation_utils__VarNum_7,
#line 420 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeRep_8,
#line 420 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_15,
#line 420 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_16)
#line 420 "program_representation_utils.m"
{
#line 424 "program_representation_utils.m"
  {
#line 424 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 424 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_35_35;
#line 424 "program_representation_utils.m"
    MR_String program_representation_utils__VarNumStr_10;
#line 424 "program_representation_utils.m"
    MR_Word program_representation_utils__VarIdStrs_12;
#line 424 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeRepStrs_13;
#line 424 "program_representation_utils.m"
    MR_Word program_representation_utils__EntryStrs_14;
#line 424 "program_representation_utils.m"
    MR_Word program_representation_utils__V_30_30;
#line 424 "program_representation_utils.m"
    MR_Word program_representation_utils__V_31_31;
#line 431 "program_representation_utils.m"
    MR_String program_representation_utils__VarName_11;

#line 425 "program_representation_utils.m"
    {
#line 425 "program_representation_utils.m"
      mercury__string__int_to_string_2_p_0(program_representation_utils__VarNum_7, &program_representation_utils__VarNumStr_10);
    }
#line 427 "program_representation_utils.m"
    {
#line 427 "program_representation_utils.m"
      program_representation_utils__succeeded = mdbcomp__program_representation__search_var_name_3_p_0(program_representation_utils__VarNameTable_6, program_representation_utils__VarNum_7, &program_representation_utils__VarName_11);
    }
#line 427 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 427 "program_representation_utils.m"
      {
#line 428 "program_representation_utils.m"
        program_representation_utils__succeeded = (strcmp(program_representation_utils__VarName_11, (MR_String) "") == 0);
#line 428 "program_representation_utils.m"
        program_representation_utils__succeeded = !(program_representation_utils__succeeded);
#line 427 "program_representation_utils.m"
      }
#line 431 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 430 "program_representation_utils.m"
      {
#line 430 "program_representation_utils.m"
        MR_Word program_representation_utils__V_17_17;
#line 430 "program_representation_utils.m"
        MR_Word program_representation_utils__V_18_18;
#line 430 "program_representation_utils.m"
        MR_Word program_representation_utils__V_20_20;

#line 430 "program_representation_utils.m"
        {
#line 430 "program_representation_utils.m"
          program_representation_utils__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_20_20, 0) = ((MR_Box) (program_representation_utils__VarNumStr_10));
#line 430 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &program_representation_utils_scalar_common_1[9])));
#line 430 "program_representation_utils.m"
        }
#line 430 "program_representation_utils.m"
        {
#line 430 "program_representation_utils.m"
          program_representation_utils__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_18_18, 0) = ((MR_Box) ((MR_String) " "));
#line 430 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_18_18, 1) = ((MR_Box) (program_representation_utils__V_20_20));
#line 430 "program_representation_utils.m"
        }
#line 430 "program_representation_utils.m"
        {
#line 430 "program_representation_utils.m"
          program_representation_utils__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_17_17, 0) = ((MR_Box) (program_representation_utils__VarName_11));
#line 430 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_17_17, 1) = ((MR_Box) (program_representation_utils__V_18_18));
#line 430 "program_representation_utils.m"
        }
#line 430 "program_representation_utils.m"
        {
#line 430 "program_representation_utils.m"
          program_representation_utils__VarIdStrs_12 = mercury__cord__from_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__V_17_17);
        }
#line 430 "program_representation_utils.m"
      }
#line 431 "program_representation_utils.m"
    else
#line 432 "program_representation_utils.m"
      {
#line 432 "program_representation_utils.m"
        MR_Word program_representation_utils__V_24_24;
#line 432 "program_representation_utils.m"
        MR_Word program_representation_utils__V_26_26;

#line 432 "program_representation_utils.m"
        {
#line 432 "program_representation_utils.m"
          program_representation_utils__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_26_26, 0) = ((MR_Box) (program_representation_utils__VarNumStr_10));
#line 432 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &program_representation_utils_scalar_common_1[9])));
#line 432 "program_representation_utils.m"
        }
#line 432 "program_representation_utils.m"
        {
#line 432 "program_representation_utils.m"
          program_representation_utils__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_24_24, 0) = ((MR_Box) ((MR_String) "unnamed_var "));
#line 432 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_24_24, 1) = ((MR_Box) (program_representation_utils__V_26_26));
#line 432 "program_representation_utils.m"
        }
#line 432 "program_representation_utils.m"
        {
#line 432 "program_representation_utils.m"
          program_representation_utils__VarIdStrs_12 = mercury__cord__from_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__V_24_24);
        }
#line 432 "program_representation_utils.m"
      }
#line 434 "program_representation_utils.m"
    {
#line 434 "program_representation_utils.m"
      program_representation_utils__type_rep_to_strings_2_p_0(program_representation_utils__TypeRep_8, &program_representation_utils__TypeRepStrs_13);
    }
#line 7313 "program_representation_utils.c"
    program_representation_utils__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 854 "program_representation_utils.m"
    {
#line 854 "program_representation_utils.m"
      program_representation_utils__V_31_31 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
#line 435 "program_representation_utils.m"
    {
#line 435 "program_representation_utils.m"
      program_representation_utils__V_30_30 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__TypeRepStrs_13, program_representation_utils__V_31_31);
    }
#line 435 "program_representation_utils.m"
    {
#line 435 "program_representation_utils.m"
      program_representation_utils__EntryStrs_14 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__VarIdStrs_12, program_representation_utils__V_30_30);
    }
#line 436 "program_representation_utils.m"
    {
#line 436 "program_representation_utils.m"
      *program_representation_utils__STATE_VARIABLE_Strings_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__STATE_VARIABLE_Strings_0_15, program_representation_utils__EntryStrs_14);
    }
#line 424 "program_representation_utils.m"
  }
#line 420 "program_representation_utils.m"
}

#line 363 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__arg_type_reps_to_strings_3_p_0(
#line 363 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadTypeRep_1,
#line 363 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 363 "program_representation_utils.m"
  MR_Word * program_representation_utils__Cord_3)
#line 363 "program_representation_utils.m"
{
#line 366 "program_representation_utils.m"
  {
#line 366 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 366 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 367 "program_representation_utils.m"
      {
#line 367 "program_representation_utils.m"
        program_representation_utils__type_rep_to_strings_2_p_0(program_representation_utils__HeadTypeRep_1, program_representation_utils__Cord_3);
#line 367 "program_representation_utils.m"
        return;
      }
#line 366 "program_representation_utils.m"
    else
#line 369 "program_representation_utils.m"
      {
#line 369 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_15_15;
#line 369 "program_representation_utils.m"
        MR_Word program_representation_utils__HeadTailTypeRep_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 369 "program_representation_utils.m"
        MR_Word program_representation_utils__TailTailTypeReps_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 369 "program_representation_utils.m"
        MR_Word program_representation_utils__HeadCord_10;
#line 369 "program_representation_utils.m"
        MR_Word program_representation_utils__TailCord_11;
#line 369 "program_representation_utils.m"
        MR_Word program_representation_utils__V_12_12;
#line 369 "program_representation_utils.m"
        MR_Word program_representation_utils__V_13_13;

#line 370 "program_representation_utils.m"
        {
#line 370 "program_representation_utils.m"
          program_representation_utils__type_rep_to_strings_2_p_0(program_representation_utils__HeadTypeRep_1, &program_representation_utils__HeadCord_10);
        }
#line 371 "program_representation_utils.m"
        {
#line 371 "program_representation_utils.m"
          program_representation_utils__arg_type_reps_to_strings_3_p_0(program_representation_utils__HeadTailTypeRep_7, program_representation_utils__TailTailTypeReps_8, &program_representation_utils__TailCord_11);
        }
#line 7394 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 372 "program_representation_utils.m"
        {
#line 372 "program_representation_utils.m"
          program_representation_utils__V_13_13 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_15_15, ((MR_Box) ((MR_String) ", ")));
        }
#line 372 "program_representation_utils.m"
        {
#line 372 "program_representation_utils.m"
          program_representation_utils__V_12_12 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_15_15, program_representation_utils__V_13_13, program_representation_utils__TailCord_11);
        }
#line 372 "program_representation_utils.m"
        {
#line 372 "program_representation_utils.m"
          *program_representation_utils__Cord_3 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_15_15, program_representation_utils__HeadCord_10, program_representation_utils__V_12_12);
        }
#line 369 "program_representation_utils.m"
      }
#line 366 "program_representation_utils.m"
  }
#line 363 "program_representation_utils.m"
}

#line 279 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__type_rep_to_strings_2_p_0(
#line 279 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeRep_3,
#line 279 "program_representation_utils.m"
  MR_Word * program_representation_utils__Cord_4)
#line 279 "program_representation_utils.m"
{
#line 283 "program_representation_utils.m"
  {
#line 283 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 283 "program_representation_utils.m"
    if (((MR_tag((MR_Word) program_representation_utils__TypeRep_3)) == (MR_mktag((MR_Integer) 1))))
#line 298 "program_representation_utils.m"
      {
#line 298 "program_representation_utils.m"
        MR_Word program_representation_utils__BuiltinTypeRep_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__TypeRep_3, (MR_Integer) 0)));
#line 298 "program_representation_utils.m"
        MR_String program_representation_utils__TypeNameStr_13;

#line 302 "program_representation_utils.m"
        if ((program_representation_utils__BuiltinTypeRep_12 == (MR_Integer) 3))
#line 310 "program_representation_utils.m"
          program_representation_utils__TypeNameStr_13 = (MR_String) "char";
#line 302 "program_representation_utils.m"
        else
#line 302 "program_representation_utils.m"
          if ((program_representation_utils__BuiltinTypeRep_12 == (MR_Integer) 1))
#line 304 "program_representation_utils.m"
            program_representation_utils__TypeNameStr_13 = (MR_String) "float";
#line 302 "program_representation_utils.m"
          else
#line 302 "program_representation_utils.m"
            if ((program_representation_utils__BuiltinTypeRep_12 == (MR_Integer) 0))
#line 301 "program_representation_utils.m"
              program_representation_utils__TypeNameStr_13 = (MR_String) "int";
#line 302 "program_representation_utils.m"
            else
#line 307 "program_representation_utils.m"
              program_representation_utils__TypeNameStr_13 = (MR_String) "string";
#line 312 "program_representation_utils.m"
        {
#line 312 "program_representation_utils.m"
          *program_representation_utils__Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__TypeNameStr_13)));
        }
#line 298 "program_representation_utils.m"
      }
#line 283 "program_representation_utils.m"
    else
#line 283 "program_representation_utils.m"
      if (((MR_tag((MR_Word) program_representation_utils__TypeRep_3)) == (MR_mktag((MR_Integer) 0))))
#line 283 "program_representation_utils.m"
        {
#line 283 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeCtorInfo_82_82;
#line 283 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeCtorSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__TypeRep_3, (MR_Integer) 0)));
#line 283 "program_representation_utils.m"
          MR_Word program_representation_utils__ArgTypes_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__TypeRep_3, (MR_Integer) 1)));
#line 283 "program_representation_utils.m"
          MR_String program_representation_utils__TypeCtorSymNameStr_7;
#line 283 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeCtorSymNameCord_8;

#line 284 "program_representation_utils.m"
          {
#line 284 "program_representation_utils.m"
            program_representation_utils__TypeCtorSymNameStr_7 = mdbcomp__prim_data__sym_name_to_string_1_f_0(program_representation_utils__TypeCtorSymName_5);
          }
#line 7490 "program_representation_utils.c"
          program_representation_utils__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 285 "program_representation_utils.m"
          {
#line 285 "program_representation_utils.m"
            program_representation_utils__TypeCtorSymNameCord_8 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_82_82, ((MR_Box) (program_representation_utils__TypeCtorSymNameStr_7)));
          }
#line 289 "program_representation_utils.m"
          if ((program_representation_utils__ArgTypes_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "program_representation_utils.m"
            *program_representation_utils__Cord_4 = program_representation_utils__TypeCtorSymNameCord_8;
#line 289 "program_representation_utils.m"
          else
#line 290 "program_representation_utils.m"
            {
#line 290 "program_representation_utils.m"
              MR_Word program_representation_utils__HeadTypeRep_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_6, (MR_Integer) 0)));
#line 290 "program_representation_utils.m"
              MR_Word program_representation_utils__TailTypeReps_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_6, (MR_Integer) 1)));
#line 290 "program_representation_utils.m"
              MR_Word program_representation_utils__ArgTypesCord_11;
#line 290 "program_representation_utils.m"
              MR_Word program_representation_utils__V_41_41;
#line 290 "program_representation_utils.m"
              MR_Word program_representation_utils__V_42_42;
#line 290 "program_representation_utils.m"
              MR_Word program_representation_utils__V_44_44;
#line 290 "program_representation_utils.m"
              MR_Word program_representation_utils__V_45_45;

#line 291 "program_representation_utils.m"
              {
#line 291 "program_representation_utils.m"
                program_representation_utils__arg_type_reps_to_strings_3_p_0(program_representation_utils__HeadTypeRep_9, program_representation_utils__TailTypeReps_10, &program_representation_utils__ArgTypesCord_11);
              }
#line 294 "program_representation_utils.m"
              {
#line 294 "program_representation_utils.m"
                program_representation_utils__V_42_42 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_82_82, ((MR_Box) ((MR_String) "(")));
              }
#line 295 "program_representation_utils.m"
              {
#line 295 "program_representation_utils.m"
                program_representation_utils__V_45_45 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_82_82, ((MR_Box) ((MR_String) ")")));
              }
#line 294 "program_representation_utils.m"
              {
#line 294 "program_representation_utils.m"
                program_representation_utils__V_44_44 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_82_82, program_representation_utils__ArgTypesCord_11, program_representation_utils__V_45_45);
              }
#line 293 "program_representation_utils.m"
              {
#line 293 "program_representation_utils.m"
                program_representation_utils__V_41_41 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_82_82, program_representation_utils__V_42_42, program_representation_utils__V_44_44);
              }
#line 292 "program_representation_utils.m"
              {
#line 292 "program_representation_utils.m"
                *program_representation_utils__Cord_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_82_82, program_representation_utils__TypeCtorSymNameCord_8, program_representation_utils__V_41_41);
              }
#line 290 "program_representation_utils.m"
            }
#line 283 "program_representation_utils.m"
        }
#line 283 "program_representation_utils.m"
      else
#line 283 "program_representation_utils.m"
        if (((MR_tag((MR_Word) program_representation_utils__TypeRep_3)) == (MR_mktag((MR_Integer) 2))))
#line 314 "program_representation_utils.m"
          {
#line 314 "program_representation_utils.m"
            MR_Word program_representation_utils__ArgTypes_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__TypeRep_3, (MR_Integer) 0)));

#line 318 "program_representation_utils.m"
            if ((program_representation_utils__ArgTypes_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 316 "program_representation_utils.m"
              {
#line 317 "program_representation_utils.m"
                {
#line 317 "program_representation_utils.m"
                  *program_representation_utils__Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "{}")));
                }
#line 316 "program_representation_utils.m"
              }
#line 318 "program_representation_utils.m"
            else
#line 319 "program_representation_utils.m"
              {
#line 319 "program_representation_utils.m"
                MR_Word program_representation_utils__TypeCtorInfo_85_85;
#line 319 "program_representation_utils.m"
                MR_Word program_representation_utils__V_35_35;
#line 319 "program_representation_utils.m"
                MR_Word program_representation_utils__V_37_37;
#line 319 "program_representation_utils.m"
                MR_Word program_representation_utils__V_38_38;
#line 319 "program_representation_utils.m"
                MR_Word program_representation_utils__HeadTypeRep_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_53, (MR_Integer) 0)));
#line 319 "program_representation_utils.m"
                MR_Word program_representation_utils__TailTypeReps_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_53, (MR_Integer) 1)));
#line 319 "program_representation_utils.m"
                MR_Word program_representation_utils__ArgTypesCord_49;

#line 320 "program_representation_utils.m"
                {
#line 320 "program_representation_utils.m"
                  program_representation_utils__arg_type_reps_to_strings_3_p_0(program_representation_utils__HeadTypeRep_47, program_representation_utils__TailTypeReps_48, &program_representation_utils__ArgTypesCord_49);
                }
#line 7598 "program_representation_utils.c"
                program_representation_utils__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 323 "program_representation_utils.m"
                {
#line 323 "program_representation_utils.m"
                  program_representation_utils__V_35_35 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_85_85, ((MR_Box) ((MR_String) "{")));
                }
#line 324 "program_representation_utils.m"
                {
#line 324 "program_representation_utils.m"
                  program_representation_utils__V_38_38 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_85_85, ((MR_Box) ((MR_String) "}")));
                }
#line 323 "program_representation_utils.m"
                {
#line 323 "program_representation_utils.m"
                  program_representation_utils__V_37_37 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_85_85, program_representation_utils__ArgTypesCord_49, program_representation_utils__V_38_38);
                }
#line 321 "program_representation_utils.m"
                {
#line 321 "program_representation_utils.m"
                  *program_representation_utils__Cord_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_85_85, program_representation_utils__V_35_35, program_representation_utils__V_37_37);
                }
#line 319 "program_representation_utils.m"
              }
#line 314 "program_representation_utils.m"
          }
#line 283 "program_representation_utils.m"
        else
#line 283 "program_representation_utils.m"
          if (((((MR_tag((MR_Word) program_representation_utils__TypeRep_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__TypeRep_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 327 "program_representation_utils.m"
            {
#line 327 "program_representation_utils.m"
              MR_Word program_representation_utils__MaybeResultType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__TypeRep_3, (MR_Integer) 2)));
#line 327 "program_representation_utils.m"
              MR_Word program_representation_utils__ArgTypes_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__TypeRep_3, (MR_Integer) 1)));

#line 341 "program_representation_utils.m"
              if ((program_representation_utils__MaybeResultType_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "program_representation_utils.m"
                if ((program_representation_utils__ArgTypes_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "program_representation_utils.m"
                  {
#line 332 "program_representation_utils.m"
                    {
#line 332 "program_representation_utils.m"
                      *program_representation_utils__Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "pred ()")));
                    }
#line 331 "program_representation_utils.m"
                  }
#line 333 "program_representation_utils.m"
                else
#line 334 "program_representation_utils.m"
                  {
#line 334 "program_representation_utils.m"
                    MR_Word program_representation_utils__TypeCtorInfo_87_87;
#line 334 "program_representation_utils.m"
                    MR_Word program_representation_utils__V_29_29;
#line 334 "program_representation_utils.m"
                    MR_Word program_representation_utils__V_31_31;
#line 334 "program_representation_utils.m"
                    MR_Word program_representation_utils__V_32_32;
#line 334 "program_representation_utils.m"
                    MR_Word program_representation_utils__HeadTypeRep_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_78, (MR_Integer) 0)));
#line 334 "program_representation_utils.m"
                    MR_Word program_representation_utils__TailTypeReps_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_78, (MR_Integer) 1)));
#line 334 "program_representation_utils.m"
                    MR_Word program_representation_utils__ArgTypesCord_59;

#line 335 "program_representation_utils.m"
                    {
#line 335 "program_representation_utils.m"
                      program_representation_utils__arg_type_reps_to_strings_3_p_0(program_representation_utils__HeadTypeRep_57, program_representation_utils__TailTypeReps_58, &program_representation_utils__ArgTypesCord_59);
                    }
#line 7672 "program_representation_utils.c"
                    program_representation_utils__TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 338 "program_representation_utils.m"
                    {
#line 338 "program_representation_utils.m"
                      program_representation_utils__V_29_29 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_87_87, ((MR_Box) ((MR_String) "pred(")));
                    }
#line 339 "program_representation_utils.m"
                    {
#line 339 "program_representation_utils.m"
                      program_representation_utils__V_32_32 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_87_87, ((MR_Box) ((MR_String) ")")));
                    }
#line 338 "program_representation_utils.m"
                    {
#line 338 "program_representation_utils.m"
                      program_representation_utils__V_31_31 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_87_87, program_representation_utils__ArgTypesCord_59, program_representation_utils__V_32_32);
                    }
#line 337 "program_representation_utils.m"
                    {
#line 337 "program_representation_utils.m"
                      *program_representation_utils__Cord_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_87_87, program_representation_utils__V_29_29, program_representation_utils__V_31_31);
                    }
#line 334 "program_representation_utils.m"
                  }
#line 341 "program_representation_utils.m"
              else
#line 342 "program_representation_utils.m"
                {
#line 342 "program_representation_utils.m"
                  MR_Word program_representation_utils__ResultType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__MaybeResultType_14, (MR_Integer) 0)));
#line 342 "program_representation_utils.m"
                  MR_Word program_representation_utils__ResultTypeCord_16;

#line 343 "program_representation_utils.m"
                  {
#line 343 "program_representation_utils.m"
                    program_representation_utils__type_rep_to_strings_2_p_0(program_representation_utils__ResultType_15, &program_representation_utils__ResultTypeCord_16);
                  }
#line 347 "program_representation_utils.m"
                  if ((program_representation_utils__ArgTypes_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 345 "program_representation_utils.m"
                    {
#line 345 "program_representation_utils.m"
                      MR_Word program_representation_utils__TypeCtorInfo_88_88 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 345 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_27_27;

#line 346 "program_representation_utils.m"
                      {
#line 346 "program_representation_utils.m"
                        program_representation_utils__V_27_27 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_88_88, ((MR_Box) ((MR_String) "func = ")));
                      }
#line 346 "program_representation_utils.m"
                      {
#line 346 "program_representation_utils.m"
                        *program_representation_utils__Cord_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_88_88, program_representation_utils__V_27_27, program_representation_utils__ResultTypeCord_16);
                      }
#line 345 "program_representation_utils.m"
                    }
#line 347 "program_representation_utils.m"
                  else
#line 348 "program_representation_utils.m"
                    {
#line 348 "program_representation_utils.m"
                      MR_Word program_representation_utils__TypeCtorInfo_89_89;
#line 348 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_21_21;
#line 348 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_23_23;
#line 348 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_24_24;
#line 348 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_25_25;
#line 348 "program_representation_utils.m"
                      MR_Word program_representation_utils__HeadTypeRep_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_78, (MR_Integer) 0)));
#line 348 "program_representation_utils.m"
                      MR_Word program_representation_utils__TailTypeReps_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_78, (MR_Integer) 1)));
#line 348 "program_representation_utils.m"
                      MR_Word program_representation_utils__ArgTypesCord_68;

#line 349 "program_representation_utils.m"
                      {
#line 349 "program_representation_utils.m"
                        program_representation_utils__arg_type_reps_to_strings_3_p_0(program_representation_utils__HeadTypeRep_66, program_representation_utils__TailTypeReps_67, &program_representation_utils__ArgTypesCord_68);
                      }
#line 7757 "program_representation_utils.c"
                      program_representation_utils__TypeCtorInfo_89_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 352 "program_representation_utils.m"
                      {
#line 352 "program_representation_utils.m"
                        program_representation_utils__V_21_21 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_89_89, ((MR_Box) ((MR_String) "func(")));
                      }
#line 354 "program_representation_utils.m"
                      {
#line 354 "program_representation_utils.m"
                        program_representation_utils__V_25_25 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_89_89, ((MR_Box) ((MR_String) ") = ")));
                      }
#line 353 "program_representation_utils.m"
                      {
#line 353 "program_representation_utils.m"
                        program_representation_utils__V_24_24 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_89_89, program_representation_utils__V_25_25, program_representation_utils__ResultTypeCord_16);
                      }
#line 352 "program_representation_utils.m"
                      {
#line 352 "program_representation_utils.m"
                        program_representation_utils__V_23_23 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_89_89, program_representation_utils__ArgTypesCord_68, program_representation_utils__V_24_24);
                      }
#line 351 "program_representation_utils.m"
                      {
#line 351 "program_representation_utils.m"
                        *program_representation_utils__Cord_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_89_89, program_representation_utils__V_21_21, program_representation_utils__V_23_23);
                      }
#line 348 "program_representation_utils.m"
                    }
#line 342 "program_representation_utils.m"
                }
#line 327 "program_representation_utils.m"
            }
#line 283 "program_representation_utils.m"
          else
#line 358 "program_representation_utils.m"
            {
#line 358 "program_representation_utils.m"
              MR_Integer program_representation_utils__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__TypeRep_3, (MR_Integer) 1)));
#line 358 "program_representation_utils.m"
              MR_String program_representation_utils__NStr_18;
#line 358 "program_representation_utils.m"
              MR_String program_representation_utils__V_19_19;

#line 359 "program_representation_utils.m"
              {
#line 359 "program_representation_utils.m"
                mercury__string__int_to_string_2_p_0(program_representation_utils__N_17, &program_representation_utils__NStr_18);
              }
#line 360 "program_representation_utils.m"
              {
#line 360 "program_representation_utils.m"
                program_representation_utils__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "T", program_representation_utils__NStr_18);
              }
#line 360 "program_representation_utils.m"
              {
#line 360 "program_representation_utils.m"
                *program_representation_utils__Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__V_19_19)));
              }
#line 358 "program_representation_utils.m"
            }
#line 283 "program_representation_utils.m"
  }
#line 279 "program_representation_utils.m"
}

#line 267 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_type_table_entries_to_strings_4_p_0(
#line 267 "program_representation_utils.m"
  MR_Integer program_representation_utils__TypeNum_5,
#line 267 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeRep_6,
#line 267 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_11,
#line 267 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_12)
#line 267 "program_representation_utils.m"
{
#line 270 "program_representation_utils.m"
  {
#line 270 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 270 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_21_21;
#line 270 "program_representation_utils.m"
    MR_String program_representation_utils__TypeNumStr_8;
#line 270 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeRepStrCord_9;
#line 270 "program_representation_utils.m"
    MR_Word program_representation_utils__Str_10;
#line 270 "program_representation_utils.m"
    MR_Word program_representation_utils__V_13_13;
#line 270 "program_representation_utils.m"
    MR_Word program_representation_utils__V_14_14;
#line 270 "program_representation_utils.m"
    MR_Word program_representation_utils__V_15_15;
#line 270 "program_representation_utils.m"
    MR_Word program_representation_utils__V_17_17;
#line 270 "program_representation_utils.m"
    MR_Word program_representation_utils__V_18_18;

#line 271 "program_representation_utils.m"
    {
#line 271 "program_representation_utils.m"
      mercury__string__int_to_string_2_p_0(program_representation_utils__TypeNum_5, &program_representation_utils__TypeNumStr_8);
    }
#line 272 "program_representation_utils.m"
    {
#line 272 "program_representation_utils.m"
      program_representation_utils__type_rep_to_strings_2_p_0(program_representation_utils__TypeRep_6, &program_representation_utils__TypeRepStrCord_9);
    }
#line 7869 "program_representation_utils.c"
    program_representation_utils__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 274 "program_representation_utils.m"
    {
#line 274 "program_representation_utils.m"
      program_representation_utils__V_13_13 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_21_21, ((MR_Box) (program_representation_utils__TypeNumStr_8)));
    }
#line 275 "program_representation_utils.m"
    {
#line 275 "program_representation_utils.m"
      program_representation_utils__V_15_15 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_21_21, ((MR_Box) ((MR_String) " -> ")));
    }
#line 276 "program_representation_utils.m"
    {
#line 276 "program_representation_utils.m"
      program_representation_utils__V_18_18 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_21_21, ((MR_Box) ((MR_String) "\n")));
    }
#line 275 "program_representation_utils.m"
    {
#line 275 "program_representation_utils.m"
      program_representation_utils__V_17_17 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_21_21, program_representation_utils__TypeRepStrCord_9, program_representation_utils__V_18_18);
    }
#line 274 "program_representation_utils.m"
    {
#line 274 "program_representation_utils.m"
      program_representation_utils__V_14_14 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_21_21, program_representation_utils__V_15_15, program_representation_utils__V_17_17);
    }
#line 273 "program_representation_utils.m"
    {
#line 273 "program_representation_utils.m"
      program_representation_utils__Str_10 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_21_21, program_representation_utils__V_13_13, program_representation_utils__V_14_14);
    }
#line 277 "program_representation_utils.m"
    {
#line 277 "program_representation_utils.m"
      *program_representation_utils__STATE_VARIABLE_Strings_12 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_21_21, program_representation_utils__STATE_VARIABLE_Strings_0_11, program_representation_utils__Str_10);
    }
#line 270 "program_representation_utils.m"
  }
#line 267 "program_representation_utils.m"
}

#line 256 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_6(
#line 256 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 256 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1)
#line 256 "program_representation_utils.m"
{
#line 256 "program_representation_utils.m"
  {
#line 256 "program_representation_utils.m"
    MR_Box program_representation_utils__wrapper_arg_2;
#line 256 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 256 "program_representation_utils.m"
    MR_Word program_representation_utils__conv5_HeadVar__2_2;

#line 256 "program_representation_utils.m"
    {
#line 256 "program_representation_utils.m"
      program_representation_utils__conv5_HeadVar__2_2 = program_representation_utils__add_nl_1_f_0(((MR_String) program_representation_utils__wrapper_arg_1));
    }
#line 256 "program_representation_utils.m"
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv5_HeadVar__2_2));
#line 256 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_2;
#line 256 "program_representation_utils.m"
  }
#line 256 "program_representation_utils.m"
}

#line 255 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_5(
#line 255 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 255 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1)
#line 255 "program_representation_utils.m"
{
#line 255 "program_representation_utils.m"
  {
#line 255 "program_representation_utils.m"
    MR_Box program_representation_utils__wrapper_arg_2;
#line 255 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 255 "program_representation_utils.m"
    MR_Word program_representation_utils__conv4_HeadVar__2_2;

#line 255 "program_representation_utils.m"
    {
#line 255 "program_representation_utils.m"
      program_representation_utils__conv4_HeadVar__2_2 = program_representation_utils__add_nl_1_f_0(((MR_String) program_representation_utils__wrapper_arg_1));
    }
#line 255 "program_representation_utils.m"
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv4_HeadVar__2_2));
#line 255 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_2;
#line 255 "program_representation_utils.m"
  }
#line 255 "program_representation_utils.m"
}

#line 254 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_4(
#line 254 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 254 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1)
#line 254 "program_representation_utils.m"
{
#line 254 "program_representation_utils.m"
  {
#line 254 "program_representation_utils.m"
    MR_Box program_representation_utils__wrapper_arg_2;
#line 254 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 254 "program_representation_utils.m"
    MR_Word program_representation_utils__conv3_HeadVar__2_2;

#line 254 "program_representation_utils.m"
    {
#line 254 "program_representation_utils.m"
      program_representation_utils__conv3_HeadVar__2_2 = program_representation_utils__add_nl_1_f_0(((MR_String) program_representation_utils__wrapper_arg_1));
    }
#line 254 "program_representation_utils.m"
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv3_HeadVar__2_2));
#line 254 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_2;
#line 254 "program_representation_utils.m"
  }
#line 254 "program_representation_utils.m"
}

#line 253 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_3(
#line 253 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 253 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 253 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2)
#line 253 "program_representation_utils.m"
{
#line 253 "program_representation_utils.m"
  {
#line 253 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 253 "program_representation_utils.m"
    MR_String program_representation_utils__conv2_String_4;

#line 253 "program_representation_utils.m"
    {
#line 253 "program_representation_utils.m"
      program_representation_utils__print_proc_label_to_string_2_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv2_String_4);
    }
#line 253 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv2_String_4));
#line 253 "program_representation_utils.m"
  }
#line 253 "program_representation_utils.m"
}

#line 252 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_2(
#line 252 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 252 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 252 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2)
#line 252 "program_representation_utils.m"
{
#line 252 "program_representation_utils.m"
  {
#line 252 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 252 "program_representation_utils.m"
    MR_String program_representation_utils__conv1_String_4;

#line 252 "program_representation_utils.m"
    {
#line 252 "program_representation_utils.m"
      program_representation_utils__print_proc_label_to_string_2_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv1_String_4);
    }
#line 252 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv1_String_4));
#line 252 "program_representation_utils.m"
  }
#line 252 "program_representation_utils.m"
}

#line 251 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_1(
#line 251 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 251 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 251 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2)
#line 251 "program_representation_utils.m"
{
#line 251 "program_representation_utils.m"
  {
#line 251 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 251 "program_representation_utils.m"
    MR_String program_representation_utils__conv0_String_4;

#line 251 "program_representation_utils.m"
    {
#line 251 "program_representation_utils.m"
      program_representation_utils__print_proc_label_to_string_2_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv0_String_4);
    }
#line 251 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv0_String_4));
#line 251 "program_representation_utils.m"
  }
#line 251 "program_representation_utils.m"
}

#line 238 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0(
#line 238 "program_representation_utils.m"
  MR_Word program_representation_utils__OISUTypeProcs_4,
#line 238 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_7,
#line 238 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_8)
#line 238 "program_representation_utils.m"
{
#line 241 "program_representation_utils.m"
  {
#line 241 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_39_47 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_40_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeInfo_45_53;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__OISUStr_6;
#line 241 "program_representation_utils.m"
    MR_String program_representation_utils__TypeCtor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__OISUTypeProcs_4, (MR_Integer) 0)));
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__CreatorProcLabels_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__OISUTypeProcs_4, (MR_Integer) 1)));
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__MutatorProcLabels_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__OISUTypeProcs_4, (MR_Integer) 2)));
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__DestructorProcLabels_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__OISUTypeProcs_4, (MR_Integer) 3)));
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__CreatorStrs_17;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__MutatorStrs_18;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__DestructorStrs_19;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__CreatorNlCords_20;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__MutatorNlCords_21;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__DestructorNlCords_22;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__V_29_29;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__V_30_30;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__V_32_32;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__V_34_34;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__V_35_35;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__V_37_37;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__V_38_38;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__V_39_39;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__V_41_41;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__V_42_42;
#line 241 "program_representation_utils.m"
    MR_Word program_representation_utils__V_44_44;

#line 251 "program_representation_utils.m"
    {
#line 251 "program_representation_utils.m"
      mercury__list__map_3_p_0(program_representation_utils__TypeCtorInfo_39_47, program_representation_utils__TypeCtorInfo_40_48, (MR_Word) &program_representation_utils_scalar_common_2[12], program_representation_utils__CreatorProcLabels_14, &program_representation_utils__CreatorStrs_17);
    }
#line 252 "program_representation_utils.m"
    {
#line 252 "program_representation_utils.m"
      mercury__list__map_3_p_0(program_representation_utils__TypeCtorInfo_39_47, program_representation_utils__TypeCtorInfo_40_48, (MR_Word) &program_representation_utils_scalar_common_2[13], program_representation_utils__MutatorProcLabels_15, &program_representation_utils__MutatorStrs_18);
    }
#line 253 "program_representation_utils.m"
    {
#line 253 "program_representation_utils.m"
      mercury__list__map_3_p_0(program_representation_utils__TypeCtorInfo_39_47, program_representation_utils__TypeCtorInfo_40_48, (MR_Word) &program_representation_utils_scalar_common_2[14], program_representation_utils__DestructorProcLabels_16, &program_representation_utils__DestructorStrs_19);
    }
#line 8178 "program_representation_utils.c"
    program_representation_utils__TypeInfo_45_53 = (MR_Word) &program_representation_utils_scalar_common_1[0];
#line 254 "program_representation_utils.m"
    {
#line 254 "program_representation_utils.m"
      program_representation_utils__CreatorNlCords_20 = mercury__list__map_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__TypeInfo_45_53, (MR_Word) &program_representation_utils_scalar_common_2[15], program_representation_utils__CreatorStrs_17);
    }
#line 255 "program_representation_utils.m"
    {
#line 255 "program_representation_utils.m"
      program_representation_utils__MutatorNlCords_21 = mercury__list__map_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__TypeInfo_45_53, (MR_Word) &program_representation_utils_scalar_common_2[16], program_representation_utils__MutatorStrs_18);
    }
#line 256 "program_representation_utils.m"
    {
#line 256 "program_representation_utils.m"
      program_representation_utils__DestructorNlCords_22 = mercury__list__map_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__TypeInfo_45_53, (MR_Word) &program_representation_utils_scalar_common_2[17], program_representation_utils__DestructorStrs_19);
    }
#line 257 "program_representation_utils.m"
    {
#line 257 "program_representation_utils.m"
      program_representation_utils__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_32_32, 0) = ((MR_Box) (program_representation_utils__TypeCtor_13));
#line 257 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "program_representation_utils.m"
    }
#line 257 "program_representation_utils.m"
    {
#line 257 "program_representation_utils.m"
      program_representation_utils__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_30_30, 0) = ((MR_Box) ((MR_String) "\nOISU type constructor "));
#line 257 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_30_30, 1) = ((MR_Box) (program_representation_utils__V_32_32));
#line 257 "program_representation_utils.m"
    }
#line 258 "program_representation_utils.m"
    {
#line 258 "program_representation_utils.m"
      program_representation_utils__V_29_29 = mercury__cord__from_list_1_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__V_30_30);
    }
#line 258 "program_representation_utils.m"
    {
#line 258 "program_representation_utils.m"
      program_representation_utils__V_37_37 = mercury__cord__cord_list_to_cord_1_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__CreatorNlCords_20);
    }
#line 260 "program_representation_utils.m"
    {
#line 260 "program_representation_utils.m"
      program_representation_utils__V_35_35 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_40_48, ((MR_Box) ((MR_String) "\nCreator procs:\n")), program_representation_utils__V_37_37);
    }
#line 260 "program_representation_utils.m"
    {
#line 260 "program_representation_utils.m"
      program_representation_utils__V_41_41 = mercury__cord__cord_list_to_cord_1_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__MutatorNlCords_21);
    }
#line 262 "program_representation_utils.m"
    {
#line 262 "program_representation_utils.m"
      program_representation_utils__V_39_39 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_40_48, ((MR_Box) ((MR_String) "\nMutator procs:\n")), program_representation_utils__V_41_41);
    }
#line 262 "program_representation_utils.m"
    {
#line 262 "program_representation_utils.m"
      program_representation_utils__V_44_44 = mercury__cord__cord_list_to_cord_1_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__DestructorNlCords_22);
    }
#line 262 "program_representation_utils.m"
    {
#line 262 "program_representation_utils.m"
      program_representation_utils__V_42_42 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_40_48, ((MR_Box) ((MR_String) "\nDestructor procs:\n")), program_representation_utils__V_44_44);
    }
#line 260 "program_representation_utils.m"
    {
#line 260 "program_representation_utils.m"
      program_representation_utils__V_38_38 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__V_39_39, program_representation_utils__V_42_42);
    }
#line 258 "program_representation_utils.m"
    {
#line 258 "program_representation_utils.m"
      program_representation_utils__V_34_34 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__V_35_35, program_representation_utils__V_38_38);
    }
#line 257 "program_representation_utils.m"
    {
#line 257 "program_representation_utils.m"
      program_representation_utils__OISUStr_6 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__V_29_29, program_representation_utils__V_34_34);
    }
#line 243 "program_representation_utils.m"
    {
#line 243 "program_representation_utils.m"
      *program_representation_utils__STATE_VARIABLE_Strings_8 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__STATE_VARIABLE_Strings_0_7, program_representation_utils__OISUStr_6);
    }
#line 241 "program_representation_utils.m"
  }
#line 238 "program_representation_utils.m"
}

#line 197 "program_representation_utils.m"
void MR_CALL 
program_representation_utils__atomic_goal_is_call_2_p_0(
#line 197 "program_representation_utils.m"
  MR_Word program_representation_utils__AtomicGoal_3,
#line 197 "program_representation_utils.m"
  MR_Word * program_representation_utils__IsCall_4)
#line 197 "program_representation_utils.m"
{
#line 1256 "program_representation_utils.m"
  {
#line 1256 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1256 "program_representation_utils.m"
    if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1262 "program_representation_utils.m"
      {
#line 1262 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1259 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));

#line 1263 "program_representation_utils.m"
        {
#line 1263 "program_representation_utils.m"
          MR_Word base;
#line 1263 "program_representation_utils.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "program_representation_utils.m"
          *program_representation_utils__IsCall_4 = base;
#line 1263 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (program_representation_utils__Args_30));
#line 1263 "program_representation_utils.m"
        }
#line 1262 "program_representation_utils.m"
      }
#line 1256 "program_representation_utils.m"
    else
#line 1256 "program_representation_utils.m"
      if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1262 "program_representation_utils.m"
        {
#line 1262 "program_representation_utils.m"
          MR_Word program_representation_utils__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
#line 1260 "program_representation_utils.m"
          MR_Integer program_representation_utils__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1260 "program_representation_utils.m"
          MR_Integer program_representation_utils__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));

#line 1263 "program_representation_utils.m"
          {
#line 1263 "program_representation_utils.m"
            MR_Word base;
#line 1263 "program_representation_utils.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "program_representation_utils.m"
            *program_representation_utils__IsCall_4 = base;
#line 1263 "program_representation_utils.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (program_representation_utils__Args_35));
#line 1263 "program_representation_utils.m"
          }
#line 1262 "program_representation_utils.m"
        }
#line 1256 "program_representation_utils.m"
      else
#line 1256 "program_representation_utils.m"
        if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1262 "program_representation_utils.m"
          {
#line 1262 "program_representation_utils.m"
            MR_Word program_representation_utils__Args_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
#line 1261 "program_representation_utils.m"
            MR_String program_representation_utils__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1261 "program_representation_utils.m"
            MR_String program_representation_utils__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));

#line 1263 "program_representation_utils.m"
            {
#line 1263 "program_representation_utils.m"
              MR_Word base;
#line 1263 "program_representation_utils.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "program_representation_utils.m"
              *program_representation_utils__IsCall_4 = base;
#line 1263 "program_representation_utils.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (program_representation_utils__Args_36));
#line 1263 "program_representation_utils.m"
            }
#line 1262 "program_representation_utils.m"
          }
#line 1256 "program_representation_utils.m"
        else
#line 1257 "program_representation_utils.m"
          *program_representation_utils__IsCall_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1256 "program_representation_utils.m"
  }
#line 197 "program_representation_utils.m"
}

#line 1208 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_2(
#line 1208 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1208 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1208 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1208 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3)
#line 1208 "program_representation_utils.m"
{
#line 1208 "program_representation_utils.m"
  {
#line 1208 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 1208 "program_representation_utils.m"
    MR_Word program_representation_utils__conv2_HeadVar__3_32;

#line 1208 "program_representation_utils.m"
    {
#line 1208 "program_representation_utils.m"
      program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1212__1_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv2_HeadVar__3_32);
    }
#line 1208 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv2_HeadVar__3_32));
#line 1208 "program_representation_utils.m"
  }
#line 1208 "program_representation_utils.m"
}

#line 1208 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_1(
#line 1208 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1208 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1208 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1208 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3)
#line 1208 "program_representation_utils.m"
{
#line 1208 "program_representation_utils.m"
  {
#line 1208 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 1208 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_HeadVar__3_54;

#line 1208 "program_representation_utils.m"
    {
#line 1208 "program_representation_utils.m"
      program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1212__2_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv0_HeadVar__3_54);
    }
#line 1208 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_HeadVar__3_54));
#line 1208 "program_representation_utils.m"
  }
#line 1208 "program_representation_utils.m"
}

#line 189 "program_representation_utils.m"
void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0(
#line 189 "program_representation_utils.m"
  MR_Word program_representation_utils__AtomicGoal_3,
#line 189 "program_representation_utils.m"
  MR_Word * program_representation_utils__Vars_4)
#line 189 "program_representation_utils.m"
{
#line 1201 "program_representation_utils.m"
  {
#line 1201 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1201 "program_representation_utils.m"
    if (((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 2))))
#line 1207 "program_representation_utils.m"
      {
#line 1207 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_41_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1207 "program_representation_utils.m"
        MR_Word program_representation_utils__MaybeVars_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1207 "program_representation_utils.m"
        MR_Word program_representation_utils__V_77_77;
#line 1207 "program_representation_utils.m"
        MR_Integer program_representation_utils__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)));
#line 1207 "program_representation_utils.m"
        MR_Word program_representation_utils__Vars0_82;
#line 1206 "program_representation_utils.m"
        MR_String program_representation_utils__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1208 "program_representation_utils.m"
        MR_Box program_representation_utils__conv1_Vars0_82;

#line 1208 "program_representation_utils.m"
        {
#line 1208 "program_representation_utils.m"
          program_representation_utils__V_77_77 = mercury__set__init_0_f_0(program_representation_utils__TypeCtorInfo_41_84);
        }
#line 1208 "program_representation_utils.m"
        {
#line 1208 "program_representation_utils.m"
          mercury__list__foldl_4_p_0((MR_Word) &program_representation_utils_scalar_common_1[4], (MR_Word) &program_representation_utils_scalar_common_1[3], (MR_Word) &program_representation_utils_scalar_common_2[10], program_representation_utils__MaybeVars_74, ((MR_Box) (program_representation_utils__V_77_77)), &program_representation_utils__conv1_Vars0_82);
        }
#line 1208 "program_representation_utils.m"
        program_representation_utils__Vars0_82 = ((MR_Word) program_representation_utils__conv1_Vars0_82);
#line 1216 "program_representation_utils.m"
        {
#line 1216 "program_representation_utils.m"
          mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_41_84, ((MR_Box) (program_representation_utils__Var_81)), program_representation_utils__Vars0_82, program_representation_utils__Vars_4);
#line 1216 "program_representation_utils.m"
          return;
        }
#line 1207 "program_representation_utils.m"
      }
#line 1201 "program_representation_utils.m"
    else
#line 1201 "program_representation_utils.m"
      if (((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 0))))
#line 1201 "program_representation_utils.m"
        {
#line 1201 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeCtorInfo_39_100 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1201 "program_representation_utils.m"
          MR_Integer program_representation_utils__Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)));
#line 1201 "program_representation_utils.m"
          MR_Word program_representation_utils__VarsL_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1201 "program_representation_utils.m"
          MR_Word program_representation_utils__Vars0_99;
#line 1197 "program_representation_utils.m"
          MR_String program_representation_utils__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));

#line 1202 "program_representation_utils.m"
          {
#line 1202 "program_representation_utils.m"
            program_representation_utils__Vars0_99 = mercury__set__list_to_set_1_f_0(program_representation_utils__TypeCtorInfo_39_100, program_representation_utils__VarsL_98);
          }
#line 1203 "program_representation_utils.m"
          {
#line 1203 "program_representation_utils.m"
            mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_39_100, ((MR_Box) (program_representation_utils__Var_97)), program_representation_utils__Vars0_99, program_representation_utils__Vars_4);
#line 1203 "program_representation_utils.m"
            return;
          }
#line 1201 "program_representation_utils.m"
        }
#line 1201 "program_representation_utils.m"
      else
#line 1201 "program_representation_utils.m"
        if (((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 1))))
#line 1201 "program_representation_utils.m"
          {
#line 1201 "program_representation_utils.m"
            MR_Word program_representation_utils__TypeCtorInfo_39_104 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1201 "program_representation_utils.m"
            MR_Integer program_representation_utils__Var_101 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)));
#line 1201 "program_representation_utils.m"
            MR_Word program_representation_utils__VarsL_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1201 "program_representation_utils.m"
            MR_Word program_representation_utils__Vars0_103;
#line 1198 "program_representation_utils.m"
            MR_String program_representation_utils__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));

#line 1202 "program_representation_utils.m"
            {
#line 1202 "program_representation_utils.m"
              program_representation_utils__Vars0_103 = mercury__set__list_to_set_1_f_0(program_representation_utils__TypeCtorInfo_39_104, program_representation_utils__VarsL_102);
            }
#line 1203 "program_representation_utils.m"
            {
#line 1203 "program_representation_utils.m"
              mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_39_104, ((MR_Box) (program_representation_utils__Var_101)), program_representation_utils__Vars0_103, program_representation_utils__Vars_4);
#line 1203 "program_representation_utils.m"
              return;
            }
#line 1201 "program_representation_utils.m"
          }
#line 1201 "program_representation_utils.m"
        else
#line 1201 "program_representation_utils.m"
          if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1228 "program_representation_utils.m"
            {
#line 1228 "program_representation_utils.m"
              MR_Word program_representation_utils__VarsL_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
#line 1226 "program_representation_utils.m"
              MR_String program_representation_utils__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1226 "program_representation_utils.m"
              MR_String program_representation_utils__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));

#line 1229 "program_representation_utils.m"
              {
#line 1229 "program_representation_utils.m"
                *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__VarsL_38);
              }
#line 1228 "program_representation_utils.m"
            }
#line 1201 "program_representation_utils.m"
          else
#line 1201 "program_representation_utils.m"
            if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1221 "program_representation_utils.m"
              {
#line 1221 "program_representation_utils.m"
                MR_Integer program_representation_utils__VarA_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1221 "program_representation_utils.m"
                MR_Integer program_representation_utils__VarB_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1221 "program_representation_utils.m"
                MR_Word program_representation_utils__V_25_25;
#line 1221 "program_representation_utils.m"
                MR_Word program_representation_utils__V_26_26;

#line 1222 "program_representation_utils.m"
                {
#line 1222 "program_representation_utils.m"
                  program_representation_utils__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_26_26, 0) = ((MR_Box) (program_representation_utils__VarB_19));
#line 1222 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1222 "program_representation_utils.m"
                }
#line 1222 "program_representation_utils.m"
                {
#line 1222 "program_representation_utils.m"
                  program_representation_utils__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_25_25, 0) = ((MR_Box) (program_representation_utils__VarA_18));
#line 1222 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_25_25, 1) = ((MR_Box) (program_representation_utils__V_26_26));
#line 1222 "program_representation_utils.m"
                }
#line 1222 "program_representation_utils.m"
                {
#line 1222 "program_representation_utils.m"
                  *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__V_25_25);
                }
#line 1221 "program_representation_utils.m"
              }
#line 1201 "program_representation_utils.m"
            else
#line 1201 "program_representation_utils.m"
              if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1228 "program_representation_utils.m"
                {
#line 1228 "program_representation_utils.m"
                  MR_Word program_representation_utils__VarsL_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1225 "program_representation_utils.m"
                  MR_String program_representation_utils__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));

#line 1229 "program_representation_utils.m"
                  {
#line 1229 "program_representation_utils.m"
                    *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__VarsL_46);
                  }
#line 1228 "program_representation_utils.m"
                }
#line 1201 "program_representation_utils.m"
              else
#line 1201 "program_representation_utils.m"
                if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1201 "program_representation_utils.m"
                  {
#line 1201 "program_representation_utils.m"
                    MR_Word program_representation_utils__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1201 "program_representation_utils.m"
                    MR_Integer program_representation_utils__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1201 "program_representation_utils.m"
                    MR_Word program_representation_utils__VarsL_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1201 "program_representation_utils.m"
                    MR_Word program_representation_utils__Vars0_10;

#line 1202 "program_representation_utils.m"
                    {
#line 1202 "program_representation_utils.m"
                      program_representation_utils__Vars0_10 = mercury__set__list_to_set_1_f_0(program_representation_utils__TypeCtorInfo_39_39, program_representation_utils__VarsL_7);
                    }
#line 1203 "program_representation_utils.m"
                    {
#line 1203 "program_representation_utils.m"
                      mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_39_39, ((MR_Box) (program_representation_utils__Var_5)), program_representation_utils__Vars0_10, program_representation_utils__Vars_4);
#line 1203 "program_representation_utils.m"
                      return;
                    }
#line 1201 "program_representation_utils.m"
                  }
#line 1201 "program_representation_utils.m"
                else
#line 1201 "program_representation_utils.m"
                  if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1201 "program_representation_utils.m"
                    {
#line 1201 "program_representation_utils.m"
                      MR_Word program_representation_utils__TypeCtorInfo_39_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1201 "program_representation_utils.m"
                      MR_Integer program_representation_utils__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1201 "program_representation_utils.m"
                      MR_Word program_representation_utils__VarsL_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
#line 1201 "program_representation_utils.m"
                      MR_Word program_representation_utils__Vars0_50;
#line 1200 "program_representation_utils.m"
                      MR_Integer program_representation_utils__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));

#line 1202 "program_representation_utils.m"
                      {
#line 1202 "program_representation_utils.m"
                        program_representation_utils__Vars0_50 = mercury__set__list_to_set_1_f_0(program_representation_utils__TypeCtorInfo_39_51, program_representation_utils__VarsL_49);
                      }
#line 1203 "program_representation_utils.m"
                      {
#line 1203 "program_representation_utils.m"
                        mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_39_51, ((MR_Box) (program_representation_utils__Var_48)), program_representation_utils__Vars0_50, program_representation_utils__Vars_4);
#line 1203 "program_representation_utils.m"
                        return;
                      }
#line 1201 "program_representation_utils.m"
                    }
#line 1201 "program_representation_utils.m"
                  else
#line 1201 "program_representation_utils.m"
                    if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1207 "program_representation_utils.m"
                      {
#line 1207 "program_representation_utils.m"
                        MR_Word program_representation_utils__TypeCtorInfo_41_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1207 "program_representation_utils.m"
                        MR_Word program_representation_utils__MaybeVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
#line 1207 "program_representation_utils.m"
                        MR_Word program_representation_utils__V_29_29;
#line 1207 "program_representation_utils.m"
                        MR_Integer program_representation_utils__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1207 "program_representation_utils.m"
                        MR_Word program_representation_utils__Vars0_37;
#line 1205 "program_representation_utils.m"
                        MR_String program_representation_utils__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1208 "program_representation_utils.m"
                        MR_Box program_representation_utils__conv3_Vars0_37;

#line 1208 "program_representation_utils.m"
                        {
#line 1208 "program_representation_utils.m"
                          program_representation_utils__V_29_29 = mercury__set__init_0_f_0(program_representation_utils__TypeCtorInfo_41_41);
                        }
#line 1208 "program_representation_utils.m"
                        {
#line 1208 "program_representation_utils.m"
                          mercury__list__foldl_4_p_0((MR_Word) &program_representation_utils_scalar_common_1[4], (MR_Word) &program_representation_utils_scalar_common_1[3], (MR_Word) &program_representation_utils_scalar_common_2[11], program_representation_utils__MaybeVars_12, ((MR_Box) (program_representation_utils__V_29_29)), &program_representation_utils__conv3_Vars0_37);
                        }
#line 1208 "program_representation_utils.m"
                        program_representation_utils__Vars0_37 = ((MR_Word) program_representation_utils__conv3_Vars0_37);
#line 1216 "program_representation_utils.m"
                        {
#line 1216 "program_representation_utils.m"
                          mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_41_41, ((MR_Box) (program_representation_utils__Var_36)), program_representation_utils__Vars0_37, program_representation_utils__Vars_4);
#line 1216 "program_representation_utils.m"
                          return;
                        }
#line 1207 "program_representation_utils.m"
                      }
#line 1201 "program_representation_utils.m"
                    else
#line 1201 "program_representation_utils.m"
                      if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1228 "program_representation_utils.m"
                        {
#line 1228 "program_representation_utils.m"
                          MR_Word program_representation_utils__VarsL_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
#line 1227 "program_representation_utils.m"
                          MR_String program_representation_utils__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1227 "program_representation_utils.m"
                          MR_String program_representation_utils__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));

#line 1229 "program_representation_utils.m"
                          {
#line 1229 "program_representation_utils.m"
                            *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__VarsL_87);
                          }
#line 1228 "program_representation_utils.m"
                        }
#line 1201 "program_representation_utils.m"
                      else
#line 1201 "program_representation_utils.m"
                        if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1228 "program_representation_utils.m"
                          {
#line 1228 "program_representation_utils.m"
                            MR_Word program_representation_utils__VarsL_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));

#line 1229 "program_representation_utils.m"
                            {
#line 1229 "program_representation_utils.m"
                              *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__VarsL_89);
                            }
#line 1228 "program_representation_utils.m"
                          }
#line 1201 "program_representation_utils.m"
                        else
#line 1201 "program_representation_utils.m"
                          if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1221 "program_representation_utils.m"
                            {
#line 1221 "program_representation_utils.m"
                              MR_Integer program_representation_utils__VarA_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1221 "program_representation_utils.m"
                              MR_Integer program_representation_utils__VarB_92 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1221 "program_representation_utils.m"
                              MR_Word program_representation_utils__V_93_93;
#line 1221 "program_representation_utils.m"
                              MR_Word program_representation_utils__V_94_94;

#line 1222 "program_representation_utils.m"
                              {
#line 1222 "program_representation_utils.m"
                                program_representation_utils__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_94_94, 0) = ((MR_Box) (program_representation_utils__VarB_92));
#line 1222 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1222 "program_representation_utils.m"
                              }
#line 1222 "program_representation_utils.m"
                              {
#line 1222 "program_representation_utils.m"
                                program_representation_utils__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_93_93, 0) = ((MR_Box) (program_representation_utils__VarA_91));
#line 1222 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_93_93, 1) = ((MR_Box) (program_representation_utils__V_94_94));
#line 1222 "program_representation_utils.m"
                              }
#line 1222 "program_representation_utils.m"
                              {
#line 1222 "program_representation_utils.m"
                                *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__V_93_93);
                              }
#line 1221 "program_representation_utils.m"
                            }
#line 1201 "program_representation_utils.m"
                          else
#line 1221 "program_representation_utils.m"
                            {
#line 1221 "program_representation_utils.m"
                              MR_Integer program_representation_utils__VarA_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1221 "program_representation_utils.m"
                              MR_Integer program_representation_utils__VarB_106 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1221 "program_representation_utils.m"
                              MR_Word program_representation_utils__V_107_107;
#line 1221 "program_representation_utils.m"
                              MR_Word program_representation_utils__V_108_108;

#line 1222 "program_representation_utils.m"
                              {
#line 1222 "program_representation_utils.m"
                                program_representation_utils__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_108_108, 0) = ((MR_Box) (program_representation_utils__VarB_106));
#line 1222 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1222 "program_representation_utils.m"
                              }
#line 1222 "program_representation_utils.m"
                              {
#line 1222 "program_representation_utils.m"
                                program_representation_utils__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_107_107, 0) = ((MR_Box) (program_representation_utils__VarA_105));
#line 1222 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_107_107, 1) = ((MR_Box) (program_representation_utils__V_108_108));
#line 1222 "program_representation_utils.m"
                              }
#line 1222 "program_representation_utils.m"
                              {
#line 1222 "program_representation_utils.m"
                                *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__V_107_107);
                              }
#line 1221 "program_representation_utils.m"
                            }
#line 1201 "program_representation_utils.m"
  }
#line 189 "program_representation_utils.m"
}

#line 1136 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__calc_inst_map_delta_3_p_0_1(
#line 1136 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1136 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1136 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1136 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 1136 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4)
#line 1136 "program_representation_utils.m"
{
#line 1136 "program_representation_utils.m"
  {
#line 1136 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 1136 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_HeadVar__5_18;

#line 1136 "program_representation_utils.m"
    {
#line 1136 "program_representation_utils.m"
      program_representation_utils__IntroducedFrom__pred__calc_inst_map_delta__1177__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv0_HeadVar__5_18);
    }
#line 1136 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv0_HeadVar__5_18));
#line 1136 "program_representation_utils.m"
  }
#line 1136 "program_representation_utils.m"
}

#line 182 "program_representation_utils.m"
void MR_CALL 
program_representation_utils__calc_inst_map_delta_3_p_0(
#line 182 "program_representation_utils.m"
  MR_Word program_representation_utils__Before_4,
#line 182 "program_representation_utils.m"
  MR_Word program_representation_utils__After_5,
#line 182 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_3)
#line 182 "program_representation_utils.m"
{
#line 1135 "program_representation_utils.m"
  {
#line 1135 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1135 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_36_36;
#line 1135 "program_representation_utils.m"
    MR_Word program_representation_utils__DeltaVars_6;
#line 1135 "program_representation_utils.m"
    MR_Word program_representation_utils__V_12_12;
#line 1135 "program_representation_utils.m"
    MR_Word program_representation_utils__V_13_13;
#line 1135 "program_representation_utils.m"
    MR_Word program_representation_utils__V_14_14;
#line 1136 "program_representation_utils.m"
    MR_Word program_representation_utils__V_31_31;
#line 1136 "program_representation_utils.m"
    MR_Box program_representation_utils__conv1_DeltaVars_6;

#line 1136 "program_representation_utils.m"
    {
#line 1136 "program_representation_utils.m"
      program_representation_utils__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1136 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 0) = ((MR_Box) (&program_representation_utils_scalar_common_5[1]));
#line 1136 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 1) = ((MR_Box) (program_representation_utils__calc_inst_map_delta_3_p_0_1));
#line 1136 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1136 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 3) = ((MR_Box) (program_representation_utils__Before_4));
#line 1136 "program_representation_utils.m"
    }
#line 1136 "program_representation_utils.m"
    program_representation_utils__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__After_5, (MR_Integer) 0)));
#line 1136 "program_representation_utils.m"
    program_representation_utils__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__After_5, (MR_Integer) 1)));
#line 8942 "program_representation_utils.c"
    program_representation_utils__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1136 "program_representation_utils.m"
    {
#line 1136 "program_representation_utils.m"
      program_representation_utils__V_14_14 = mercury__set__init_0_f_0(program_representation_utils__TypeCtorInfo_36_36);
    }
#line 1136 "program_representation_utils.m"
    {
#line 1136 "program_representation_utils.m"
      mercury__map__foldl_4_p_0(program_representation_utils__TypeCtorInfo_36_36, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, (MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__V_12_12, program_representation_utils__V_13_13, ((MR_Box) (program_representation_utils__V_14_14)), &program_representation_utils__conv1_DeltaVars_6);
    }
#line 1136 "program_representation_utils.m"
    program_representation_utils__DeltaVars_6 = ((MR_Word) program_representation_utils__conv1_DeltaVars_6);
#line 1135 "program_representation_utils.m"
    *program_representation_utils__HeadVar__3_3 = (MR_Word) program_representation_utils__DeltaVars_6;
#line 1135 "program_representation_utils.m"
  }
#line 182 "program_representation_utils.m"
}

#line 173 "program_representation_utils.m"
MR_Word MR_CALL 
program_representation_utils__empty_inst_map_delta_0_f_0(void)
#line 173 "program_representation_utils.m"
{
#line 1130 "program_representation_utils.m"
  {
#line 1130 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1130 "program_representation_utils.m"
    MR_Word program_representation_utils__InstMap_2;
#line 1130 "program_representation_utils.m"
    MR_Word program_representation_utils__Vars_3;

#line 1131 "program_representation_utils.m"
    {
#line 1131 "program_representation_utils.m"
      mercury__set__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &program_representation_utils__Vars_3);
    }
#line 1130 "program_representation_utils.m"
    program_representation_utils__InstMap_2 = (MR_Word) program_representation_utils__Vars_3;
#line 1130 "program_representation_utils.m"
    return program_representation_utils__InstMap_2;
#line 1130 "program_representation_utils.m"
  }
#line 173 "program_representation_utils.m"
}

#line 172 "program_representation_utils.m"
void MR_CALL 
program_representation_utils__empty_inst_map_delta_1_p_0(
#line 172 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__1_1)
#line 172 "program_representation_utils.m"
{
#line 1130 "program_representation_utils.m"
  {
#line 1130 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1130 "program_representation_utils.m"
    MR_Word program_representation_utils__Vars_2;

#line 1131 "program_representation_utils.m"
    {
#line 1131 "program_representation_utils.m"
      mercury__set__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &program_representation_utils__Vars_2);
    }
#line 1130 "program_representation_utils.m"
    *program_representation_utils__HeadVar__1_1 = (MR_Word) program_representation_utils__Vars_2;
#line 1130 "program_representation_utils.m"
  }
#line 172 "program_representation_utils.m"
}

#line 167 "program_representation_utils.m"
void MR_CALL 
program_representation_utils__inst_map_delta_get_var_set_2_p_0(
#line 167 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 167 "program_representation_utils.m"
  MR_Word * program_representation_utils__Vars_3)
#line 167 "program_representation_utils.m"
{
#line 1128 "program_representation_utils.m"
  {
#line 1128 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1128 "program_representation_utils.m"
    *program_representation_utils__Vars_3 = (MR_Word) program_representation_utils__HeadVar__1_1;
#line 1128 "program_representation_utils.m"
  }
#line 167 "program_representation_utils.m"
}

#line 155 "program_representation_utils.m"
void MR_CALL 
program_representation_utils__inst_map_get_var_deps_3_p_0(
#line 155 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 155 "program_representation_utils.m"
  MR_Integer program_representation_utils__VarRep_6,
#line 155 "program_representation_utils.m"
  MR_Word * program_representation_utils__DepVars_7)
#line 155 "program_representation_utils.m"
{
#line 1102 "program_representation_utils.m"
  {
#line 1102 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1102 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToDepVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 1)));
#line 1102 "program_representation_utils.m"
    MR_Word program_representation_utils__V_8_8;
#line 1102 "program_representation_utils.m"
    MR_Word program_representation_utils__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));

#line 1103 "program_representation_utils.m"
    {
#line 1103 "program_representation_utils.m"
      program_representation_utils__V_8_8 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
#line 1103 "program_representation_utils.m"
    {
#line 1103 "program_representation_utils.m"
      program_representation_utils__inst_map_get_var_deps_2_4_p_0(program_representation_utils__VarToDepVars_5, program_representation_utils__VarRep_6, program_representation_utils__V_8_8, program_representation_utils__DepVars_7);
#line 1103 "program_representation_utils.m"
      return;
    }
#line 1102 "program_representation_utils.m"
  }
#line 155 "program_representation_utils.m"
}

#line 1043 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_2(
#line 1043 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1043 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1043 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1043 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3)
#line 1043 "program_representation_utils.m"
{
#line 1043 "program_representation_utils.m"
  {
#line 1043 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 1043 "program_representation_utils.m"
    MR_Word program_representation_utils__conv1_HeadVar__3_26;

#line 1043 "program_representation_utils.m"
    {
#line 1043 "program_representation_utils.m"
      program_representation_utils__IntroducedFrom__pred__merge_inst_map__1043__1_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv1_HeadVar__3_26);
    }
#line 1043 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv1_HeadVar__3_26));
#line 1043 "program_representation_utils.m"
  }
#line 1043 "program_representation_utils.m"
}

#line 1042 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_1(
#line 1042 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1042 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1042 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1042 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3)
#line 1042 "program_representation_utils.m"
{
#line 1042 "program_representation_utils.m"
  {
#line 1042 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 1042 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_HeadVar__3_3;

#line 1042 "program_representation_utils.m"
    {
#line 1042 "program_representation_utils.m"
      program_representation_utils__inst_intersect_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv0_HeadVar__3_3);
    }
#line 1042 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_HeadVar__3_3));
#line 1042 "program_representation_utils.m"
  }
#line 1042 "program_representation_utils.m"
}

#line 150 "program_representation_utils.m"
MR_Word MR_CALL 
program_representation_utils__merge_inst_map_4_f_0(
#line 150 "program_representation_utils.m"
  MR_Word program_representation_utils__InstMapA_6,
#line 150 "program_representation_utils.m"
  MR_Word program_representation_utils__DetismA_7,
#line 150 "program_representation_utils.m"
  MR_Word program_representation_utils__InstMapB_8,
#line 150 "program_representation_utils.m"
  MR_Word program_representation_utils__DetismB_9)
#line 150 "program_representation_utils.m"
{
#line 1017 "program_representation_utils.m"
  {
#line 1017 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1017 "program_representation_utils.m"
    MR_Word program_representation_utils__InstMap_10;

#line 1017 "program_representation_utils.m"
    if ((((program_representation_utils__DetismA_7 == (MR_Integer) 6)) || ((program_representation_utils__DetismA_7 == (MR_Integer) 7))))
#line 1018 "program_representation_utils.m"
      program_representation_utils__InstMap_10 = program_representation_utils__InstMapB_8;
#line 1017 "program_representation_utils.m"
    else
#line 1032 "program_representation_utils.m"
      if ((((program_representation_utils__DetismB_9 == (MR_Integer) 6)) || ((program_representation_utils__DetismB_9 == (MR_Integer) 7))))
#line 1031 "program_representation_utils.m"
        program_representation_utils__InstMap_10 = program_representation_utils__InstMapA_6;
#line 1032 "program_representation_utils.m"
      else
#line 1039 "program_representation_utils.m"
        {
#line 1039 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1039 "program_representation_utils.m"
          MR_Word program_representation_utils__VarToInstA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMapA_6, (MR_Integer) 0)));
#line 1039 "program_representation_utils.m"
          MR_Word program_representation_utils__VarToDepVarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMapA_6, (MR_Integer) 1)));
#line 1039 "program_representation_utils.m"
          MR_Word program_representation_utils__VarToInstB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMapB_8, (MR_Integer) 0)));
#line 1039 "program_representation_utils.m"
          MR_Word program_representation_utils__VarToDepVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMapB_8, (MR_Integer) 1)));
#line 1039 "program_representation_utils.m"
          MR_Word program_representation_utils__VarToInst_15;
#line 1039 "program_representation_utils.m"
          MR_Word program_representation_utils__VarToDepVars_16;

#line 1042 "program_representation_utils.m"
          {
#line 1042 "program_representation_utils.m"
            mercury__map__union_4_p_1((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__TypeCtorInfo_23_23, (MR_Word) &program_representation_utils_scalar_common_2[8], program_representation_utils__VarToInstA_11, program_representation_utils__VarToInstB_13, &program_representation_utils__VarToInst_15);
          }
#line 1043 "program_representation_utils.m"
          {
#line 1043 "program_representation_utils.m"
            mercury__map__union_4_p_1((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__TypeCtorInfo_23_23, (MR_Word) &program_representation_utils_scalar_common_2[9], program_representation_utils__VarToDepVarsA_12, program_representation_utils__VarToDepVarsB_14, &program_representation_utils__VarToDepVars_16);
          }
#line 1044 "program_representation_utils.m"
          {
#line 1044 "program_representation_utils.m"
            program_representation_utils__InstMap_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1044 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__InstMap_10, 0) = ((MR_Box) (program_representation_utils__VarToInst_15));
#line 1044 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__InstMap_10, 1) = ((MR_Box) (program_representation_utils__VarToDepVars_16));
#line 1044 "program_representation_utils.m"
          }
#line 1039 "program_representation_utils.m"
        }
#line 1017 "program_representation_utils.m"
    return program_representation_utils__InstMap_10;
#line 1017 "program_representation_utils.m"
  }
#line 150 "program_representation_utils.m"
}

#line 145 "program_representation_utils.m"
void MR_CALL 
program_representation_utils__inst_map_get_4_p_0(
#line 145 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 145 "program_representation_utils.m"
  MR_Integer program_representation_utils__Var_7,
#line 145 "program_representation_utils.m"
  MR_Word * program_representation_utils__Inst_8,
#line 145 "program_representation_utils.m"
  MR_Word * program_representation_utils__DepVars_9)
#line 145 "program_representation_utils.m"
{
#line 1093 "program_representation_utils.m"
  {
#line 1093 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1093 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));
#line 1093 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToDepVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 1)));
#line 1097 "program_representation_utils.m"
    MR_Word program_representation_utils__InstPrime_10;
#line 1094 "program_representation_utils.m"
    MR_Box program_representation_utils__conv0_InstPrime_10;

#line 1094 "program_representation_utils.m"
    {
#line 1094 "program_representation_utils.m"
      program_representation_utils__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__VarToInst_5, program_representation_utils__Var_7, &program_representation_utils__conv0_InstPrime_10);
    }
#line 1094 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1094 "program_representation_utils.m"
      {
#line 1094 "program_representation_utils.m"
        program_representation_utils__InstPrime_10 = ((MR_Word) program_representation_utils__conv0_InstPrime_10);
#line 1094 "program_representation_utils.m"
        program_representation_utils__succeeded = MR_TRUE;
#line 1094 "program_representation_utils.m"
      }
#line 1097 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1095 "program_representation_utils.m"
      {
#line 1096 "program_representation_utils.m"
        MR_Box program_representation_utils__conv1_DepVars_9;

#line 1095 "program_representation_utils.m"
        *program_representation_utils__Inst_8 = program_representation_utils__InstPrime_10;
#line 1096 "program_representation_utils.m"
        {
#line 1096 "program_representation_utils.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__VarToDepVars_6, program_representation_utils__Var_7, &program_representation_utils__conv1_DepVars_9);
        }
#line 1096 "program_representation_utils.m"
        *program_representation_utils__DepVars_9 = ((MR_Word) program_representation_utils__conv1_DepVars_9);
#line 1095 "program_representation_utils.m"
      }
#line 1097 "program_representation_utils.m"
    else
#line 1098 "program_representation_utils.m"
      {
#line 1098 "program_representation_utils.m"
        *program_representation_utils__Inst_8 = (MR_Integer) 0;
#line 1099 "program_representation_utils.m"
        {
#line 1099 "program_representation_utils.m"
          *program_representation_utils__DepVars_9 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
        }
#line 1098 "program_representation_utils.m"
      }
#line 1093 "program_representation_utils.m"
  }
#line 145 "program_representation_utils.m"
}

#line 138 "program_representation_utils.m"
MR_Word MR_CALL 
program_representation_utils__merge_seen_duplicate_instantiation_2_f_0(
#line 138 "program_representation_utils.m"
  MR_Word program_representation_utils__A_4,
#line 138 "program_representation_utils.m"
  MR_Word program_representation_utils__B_5)
#line 138 "program_representation_utils.m"
{
#line 1238 "program_representation_utils.m"
  {
#line 1238 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded = (program_representation_utils__A_4 == (MR_Integer) 1);
#line 1238 "program_representation_utils.m"
    MR_Word program_representation_utils__R_6;

#line 1234 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1235 "program_representation_utils.m"
      program_representation_utils__succeeded = (program_representation_utils__B_5 == (MR_Integer) 1);
#line 1238 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1237 "program_representation_utils.m"
      program_representation_utils__R_6 = (MR_Integer) 1;
#line 1238 "program_representation_utils.m"
    else
#line 1239 "program_representation_utils.m"
      program_representation_utils__R_6 = (MR_Integer) 0;
#line 1238 "program_representation_utils.m"
    return program_representation_utils__R_6;
#line 1238 "program_representation_utils.m"
  }
#line 138 "program_representation_utils.m"
}

#line 1061 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_ground_vars_5_p_0_1(
#line 1061 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1061 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1061 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1061 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3,
#line 1061 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_4,
#line 1061 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_5)
#line 1061 "program_representation_utils.m"
{
#line 1061 "program_representation_utils.m"
  {
#line 1061 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 1061 "program_representation_utils.m"
    MR_Word program_representation_utils__conv1_InstMap_10;
#line 1061 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_STATE_VARIABLE_SeenDuplicateInstantiation_22;

#line 1061 "program_representation_utils.m"
    {
#line 1061 "program_representation_utils.m"
      program_representation_utils__inst_map_ground_var_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv1_InstMap_10, ((MR_Word) program_representation_utils__wrapper_arg_4), &program_representation_utils__conv0_STATE_VARIABLE_SeenDuplicateInstantiation_22);
    }
#line 1061 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv1_InstMap_10));
#line 1061 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_5 = ((MR_Box) (program_representation_utils__conv0_STATE_VARIABLE_SeenDuplicateInstantiation_22));
#line 1061 "program_representation_utils.m"
  }
#line 1061 "program_representation_utils.m"
}

#line 125 "program_representation_utils.m"
void MR_CALL 
program_representation_utils__inst_map_ground_vars_5_p_0(
#line 125 "program_representation_utils.m"
  MR_Word program_representation_utils__Vars_6,
#line 125 "program_representation_utils.m"
  MR_Word program_representation_utils__DepVars_7,
#line 125 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_InstMap_0_10,
#line 125 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_InstMap_11,
#line 125 "program_representation_utils.m"
  MR_Word * program_representation_utils__SeenDuplicateInstantiation_9)
#line 125 "program_representation_utils.m"
{
#line 1060 "program_representation_utils.m"
  {
#line 1060 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1060 "program_representation_utils.m"
    MR_Word program_representation_utils__V_12_12;
#line 1061 "program_representation_utils.m"
    MR_Box program_representation_utils__conv3_STATE_VARIABLE_InstMap_11;
#line 1061 "program_representation_utils.m"
    MR_Box program_representation_utils__conv2_SeenDuplicateInstantiation_9;

#line 1061 "program_representation_utils.m"
    {
#line 1061 "program_representation_utils.m"
      program_representation_utils__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1061 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 0) = ((MR_Box) (&program_representation_utils_scalar_common_7[0]));
#line 1061 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 1) = ((MR_Box) (program_representation_utils__inst_map_ground_vars_5_p_0_1));
#line 1061 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1061 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 3) = ((MR_Box) (program_representation_utils__DepVars_7));
#line 1061 "program_representation_utils.m"
    }
#line 1061 "program_representation_utils.m"
    {
#line 1061 "program_representation_utils.m"
      mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0, (MR_Word) &program_representation_utils__program_representation_utils__type_ctor_info_seen_duplicate_instantiation_0, program_representation_utils__V_12_12, program_representation_utils__Vars_6, ((MR_Box) (program_representation_utils__STATE_VARIABLE_InstMap_0_10)), &program_representation_utils__conv3_STATE_VARIABLE_InstMap_11, ((MR_Box) ((MR_Integer) 1)), &program_representation_utils__conv2_SeenDuplicateInstantiation_9);
    }
#line 1061 "program_representation_utils.m"
    *program_representation_utils__STATE_VARIABLE_InstMap_11 = ((MR_Word) program_representation_utils__conv3_STATE_VARIABLE_InstMap_11);
#line 1061 "program_representation_utils.m"
    *program_representation_utils__SeenDuplicateInstantiation_9 = ((MR_Word) program_representation_utils__conv2_SeenDuplicateInstantiation_9);
#line 1060 "program_representation_utils.m"
  }
#line 125 "program_representation_utils.m"
}

#line 992 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__initial_inst_map_1_f_0_1(
#line 992 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 992 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 992 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 992 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3)
#line 992 "program_representation_utils.m"
{
#line 992 "program_representation_utils.m"
  {
#line 992 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 992 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_STATE_VARIABLE_InstMap_10;

#line 992 "program_representation_utils.m"
    {
#line 992 "program_representation_utils.m"
      program_representation_utils__add_head_var_inst_to_map_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv0_STATE_VARIABLE_InstMap_10);
    }
#line 992 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_STATE_VARIABLE_InstMap_10));
#line 992 "program_representation_utils.m"
  }
#line 992 "program_representation_utils.m"
}

#line 112 "program_representation_utils.m"
MR_Word MR_CALL 
program_representation_utils__initial_inst_map_1_f_0(
#line 112 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_14,
#line 112 "program_representation_utils.m"
  MR_Word program_representation_utils__ProcDefn_3)
#line 112 "program_representation_utils.m"
{
#line 990 "program_representation_utils.m"
  {
#line 990 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 990 "program_representation_utils.m"
    MR_Word program_representation_utils__InstMap_4;
#line 990 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 990 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefn_3, (MR_Integer) 0)));
#line 990 "program_representation_utils.m"
    MR_Word program_representation_utils__V_7_7;
#line 990 "program_representation_utils.m"
    MR_Word program_representation_utils__V_8_8;
#line 990 "program_representation_utils.m"
    MR_Word program_representation_utils__V_9_9;
#line 991 "program_representation_utils.m"
    MR_Word program_representation_utils__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefn_3, (MR_Integer) 1)));
#line 991 "program_representation_utils.m"
    MR_Word program_representation_utils__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefn_3, (MR_Integer) 2)));
#line 991 "program_representation_utils.m"
    MR_Word program_representation_utils__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefn_3, (MR_Integer) 3)));
#line 991 "program_representation_utils.m"
    MR_Word program_representation_utils__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefn_3, (MR_Integer) 4)));
#line 992 "program_representation_utils.m"
    MR_Box program_representation_utils__conv1_InstMap_4;

#line 993 "program_representation_utils.m"
    {
#line 993 "program_representation_utils.m"
      program_representation_utils__V_8_8 = mercury__map__init_0_f_0(program_representation_utils__TypeCtorInfo_18_18, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0);
    }
#line 993 "program_representation_utils.m"
    {
#line 993 "program_representation_utils.m"
      program_representation_utils__V_9_9 = mercury__map__init_0_f_0(program_representation_utils__TypeCtorInfo_18_18, (MR_Word) &program_representation_utils_scalar_common_1[3]);
    }
#line 992 "program_representation_utils.m"
    {
#line 992 "program_representation_utils.m"
      program_representation_utils__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 992 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_7_7, 0) = ((MR_Box) (program_representation_utils__V_8_8));
#line 992 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_7_7, 1) = ((MR_Box) (program_representation_utils__V_9_9));
#line 992 "program_representation_utils.m"
    }
#line 992 "program_representation_utils.m"
    {
#line 992 "program_representation_utils.m"
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0, (MR_Word) &program_representation_utils_scalar_common_2[7], program_representation_utils__HeadVars_5, ((MR_Box) (program_representation_utils__V_7_7)), &program_representation_utils__conv1_InstMap_4);
    }
#line 992 "program_representation_utils.m"
    program_representation_utils__InstMap_4 = ((MR_Word) program_representation_utils__conv1_InstMap_4);
#line 990 "program_representation_utils.m"
    return program_representation_utils__InstMap_4;
#line 990 "program_representation_utils.m"
  }
#line 112 "program_representation_utils.m"
}

#line 100 "program_representation_utils.m"
MR_bool MR_CALL 
program_representation_utils__progrep_search_proc_3_p_0(
#line 100 "program_representation_utils.m"
  MR_Word program_representation_utils__ProgRep_4,
#line 100 "program_representation_utils.m"
  MR_Word program_representation_utils__ProcLabel_5,
#line 100 "program_representation_utils.m"
  MR_Word * program_representation_utils__ProcRep_6)
#line 100 "program_representation_utils.m"
{
#line 873 "program_representation_utils.m"
  {
#line 873 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 873 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_12_33;
#line 873 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeInfo_13_34;
#line 873 "program_representation_utils.m"
    MR_String program_representation_utils__DefModule_9;
#line 873 "program_representation_utils.m"
    MR_Word program_representation_utils__ModuleRep_17;
#line 873 "program_representation_utils.m"
    MR_Word program_representation_utils__ModuleReps_22;
#line 873 "program_representation_utils.m"
    MR_Word program_representation_utils__V_28_28;
#line 887 "program_representation_utils.m"
    MR_Box program_representation_utils__conv0_ModuleRep_17;
#line 895 "program_representation_utils.m"
    MR_String program_representation_utils__V_29_29;
#line 895 "program_representation_utils.m"
    MR_Word program_representation_utils__V_30_30;
#line 895 "program_representation_utils.m"
    MR_Word program_representation_utils__V_31_31;
#line 895 "program_representation_utils.m"
    MR_Word program_representation_utils__V_32_32;
#line 895 "program_representation_utils.m"
    MR_Box program_representation_utils__conv1_ProcRep_6;

#line 875 "program_representation_utils.m"
    if (((MR_tag((MR_Word) program_representation_utils__ProcLabel_5)) == (MR_mktag((MR_Integer) 0))))
#line 874 "program_representation_utils.m"
      {
#line 874 "program_representation_utils.m"
        MR_Word program_representation_utils__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 0)));
#line 874 "program_representation_utils.m"
        MR_String program_representation_utils___DeclModule_8 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 1)));
#line 874 "program_representation_utils.m"
        MR_String program_representation_utils__V_10_10;
#line 874 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_11_11;
#line 874 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_12_12;

#line 874 "program_representation_utils.m"
        program_representation_utils__DefModule_9 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 2)));
#line 874 "program_representation_utils.m"
        program_representation_utils__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 3)));
#line 874 "program_representation_utils.m"
        program_representation_utils__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 4)));
#line 874 "program_representation_utils.m"
        program_representation_utils__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 5)));
#line 874 "program_representation_utils.m"
      }
#line 875 "program_representation_utils.m"
    else
#line 875 "program_representation_utils.m"
      {
#line 875 "program_representation_utils.m"
        MR_String program_representation_utils__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 0)));
#line 875 "program_representation_utils.m"
        MR_String program_representation_utils__V_14_14;
#line 875 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_15_15;
#line 875 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_16_16;
#line 875 "program_representation_utils.m"
        MR_String program_representation_utils___DeclModule_18 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 1)));

#line 875 "program_representation_utils.m"
        program_representation_utils__DefModule_9 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 2)));
#line 875 "program_representation_utils.m"
        program_representation_utils__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 3)));
#line 875 "program_representation_utils.m"
        program_representation_utils__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 4)));
#line 875 "program_representation_utils.m"
        program_representation_utils__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 5)));
#line 875 "program_representation_utils.m"
      }
#line 886 "program_representation_utils.m"
    program_representation_utils__ModuleReps_22 = (MR_Word) program_representation_utils__ProgRep_4;
#line 887 "program_representation_utils.m"
    {
#line 887 "program_representation_utils.m"
      program_representation_utils__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &program_representation_utils_scalar_common_1[5], program_representation_utils__ModuleReps_22, ((MR_Box) (program_representation_utils__DefModule_9)), &program_representation_utils__conv0_ModuleRep_17);
    }
#line 887 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 887 "program_representation_utils.m"
      {
#line 887 "program_representation_utils.m"
        program_representation_utils__ModuleRep_17 = ((MR_Word) program_representation_utils__conv0_ModuleRep_17);
#line 887 "program_representation_utils.m"
        program_representation_utils__succeeded = MR_TRUE;
#line 887 "program_representation_utils.m"
      }
#line 873 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 873 "program_representation_utils.m"
      {
#line 895 "program_representation_utils.m"
        program_representation_utils__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_17, (MR_Integer) 0)));
#line 895 "program_representation_utils.m"
        program_representation_utils__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_17, (MR_Integer) 1)));
#line 895 "program_representation_utils.m"
        program_representation_utils__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_17, (MR_Integer) 2)));
#line 895 "program_representation_utils.m"
        program_representation_utils__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_17, (MR_Integer) 3)));
#line 895 "program_representation_utils.m"
        program_representation_utils__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_17, (MR_Integer) 4)));
#line 9648 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_12_33 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
#line 9650 "program_representation_utils.c"
        program_representation_utils__TypeInfo_13_34 = (MR_Word) &program_representation_utils_scalar_common_1[2];
#line 895 "program_representation_utils.m"
        {
#line 895 "program_representation_utils.m"
          program_representation_utils__succeeded = mercury__map__search_3_p_0(program_representation_utils__TypeCtorInfo_12_33, program_representation_utils__TypeInfo_13_34, program_representation_utils__V_28_28, ((MR_Box) (program_representation_utils__ProcLabel_5)), &program_representation_utils__conv1_ProcRep_6);
        }
#line 895 "program_representation_utils.m"
        if (program_representation_utils__succeeded)
#line 895 "program_representation_utils.m"
          {
#line 895 "program_representation_utils.m"
            *program_representation_utils__ProcRep_6 = ((MR_Word) program_representation_utils__conv1_ProcRep_6);
#line 895 "program_representation_utils.m"
            program_representation_utils__succeeded = MR_TRUE;
#line 895 "program_representation_utils.m"
          }
#line 873 "program_representation_utils.m"
      }
#line 873 "program_representation_utils.m"
    return program_representation_utils__succeeded;
#line 873 "program_representation_utils.m"
  }
#line 100 "program_representation_utils.m"
}

#line 92 "program_representation_utils.m"
void MR_CALL 
program_representation_utils__label_goals_4_p_0(
#line 92 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_19,
#line 92 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__1_1,
#line 92 "program_representation_utils.m"
  MR_Word * program_representation_utils__Map_6,
#line 92 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_10,
#line 92 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_11)
#line 92 "program_representation_utils.m"
{
#line 902 "program_representation_utils.m"
  {
#line 902 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 902 "program_representation_utils.m"
    MR_Integer program_representation_utils__LastIdPlus1_5;
#line 902 "program_representation_utils.m"
    MR_Word program_representation_utils__Counter_8;
#line 902 "program_representation_utils.m"
    MR_Integer program_representation_utils__V_12_12;
#line 902 "program_representation_utils.m"
    MR_Word program_representation_utils__V_16_16;
#line 902 "program_representation_utils.m"
    MR_Word program_representation_utils__V_17_17;
#line 905 "program_representation_utils.m"
    MR_Word program_representation_utils__V_9_9;

#line 903 "program_representation_utils.m"
    {
#line 903 "program_representation_utils.m"
      program_representation_utils__V_16_16 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 903 "program_representation_utils.m"
    {
#line 903 "program_representation_utils.m"
      program_representation_utils__V_17_17 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0);
    }
#line 903 "program_representation_utils.m"
    {
#line 903 "program_representation_utils.m"
      program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), program_representation_utils__STATE_VARIABLE_Goal_0_10, program_representation_utils__STATE_VARIABLE_Goal_11, program_representation_utils__V_16_16, &program_representation_utils__Counter_8, program_representation_utils__V_17_17, program_representation_utils__Map_6);
    }
#line 905 "program_representation_utils.m"
    {
#line 905 "program_representation_utils.m"
      mercury__counter__allocate_3_p_0(&program_representation_utils__LastIdPlus1_5, program_representation_utils__Counter_8, &program_representation_utils__V_9_9);
    }
#line 902 "program_representation_utils.m"
    program_representation_utils__V_12_12 = (program_representation_utils__LastIdPlus1_5 - (MR_Integer) 1);
#line 902 "program_representation_utils.m"
    *program_representation_utils__HeadVar__1_1 = (MR_Word) program_representation_utils__V_12_12;
#line 902 "program_representation_utils.m"
  }
#line 92 "program_representation_utils.m"
}

#line 77 "program_representation_utils.m"
void MR_CALL 
program_representation_utils__print_goal_annotation_to_strings_3_p_0(
#line 77 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_4,
#line 77 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 77 "program_representation_utils.m"
  MR_Box program_representation_utils__HeadVar__2_2,
#line 77 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_3)
#line 77 "program_representation_utils.m"
{
#line 9750 "program_representation_utils.c"
  {
#line 9752 "program_representation_utils.c"
    MR_bool program_representation_utils__succeeded;
#line 9754 "program_representation_utils.c"
    void MR_CALL (* program_representation_utils__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), program_representation_utils__TypeClassInfo_for_goal_annotation_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9756 "program_representation_utils.c"
    MR_Box program_representation_utils__conv1_HeadVar__3_3;

#line 9759 "program_representation_utils.c"
    {
#line 9761 "program_representation_utils.c"
      program_representation_utils__func_0(((MR_Box) program_representation_utils__TypeClassInfo_for_goal_annotation_4), ((MR_Box) (program_representation_utils__HeadVar__1_1)), program_representation_utils__HeadVar__2_2, &program_representation_utils__conv1_HeadVar__3_3);
    }
#line 9764 "program_representation_utils.c"
    *program_representation_utils__HeadVar__3_3 = ((MR_Word) program_representation_utils__conv1_HeadVar__3_3);
#line 9766 "program_representation_utils.c"
  }
#line 77 "program_representation_utils.m"
}

#line 547 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_2(
#line 547 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 547 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 547 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2)
#line 547 "program_representation_utils.m"
{
#line 547 "program_representation_utils.m"
  {
#line 547 "program_representation_utils.m"
    MR_Box program_representation_utils__wrapper_arg_3;
#line 547 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 547 "program_representation_utils.m"
    MR_Word program_representation_utils__conv2_HeadVar__3_196;

#line 547 "program_representation_utils.m"
    {
#line 547 "program_representation_utils.m"
      program_representation_utils__conv2_HeadVar__3_196 = program_representation_utils__IntroducedFrom__func__print_goal_to_strings__547__1_2_f_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2));
    }
#line 547 "program_representation_utils.m"
    program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv2_HeadVar__3_196));
#line 547 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_3;
#line 547 "program_representation_utils.m"
  }
#line 547 "program_representation_utils.m"
}

#line 545 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_1(
#line 545 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 545 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1)
#line 545 "program_representation_utils.m"
{
#line 545 "program_representation_utils.m"
  {
#line 545 "program_representation_utils.m"
    MR_Box program_representation_utils__wrapper_arg_2;
#line 545 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 545 "program_representation_utils.m"
    MR_Word program_representation_utils__conv1_HeadVar__3_160;

#line 545 "program_representation_utils.m"
    {
#line 545 "program_representation_utils.m"
      program_representation_utils__conv1_HeadVar__3_160 = program_representation_utils__IntroducedFrom__func__print_goal_to_strings__545__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Word) program_representation_utils__wrapper_arg_1));
    }
#line 545 "program_representation_utils.m"
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv1_HeadVar__3_160));
#line 545 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_2;
#line 545 "program_representation_utils.m"
  }
#line 545 "program_representation_utils.m"
}

#line 67 "program_representation_utils.m"
void MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0(
#line 67 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_178,
#line 67 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_177,
#line 67 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_6,
#line 67 "program_representation_utils.m"
  MR_Integer program_representation_utils__Indent_7,
#line 67 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_8,
#line 67 "program_representation_utils.m"
  MR_Word program_representation_utils__GoalRep_9,
#line 67 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_10)
#line 67 "program_representation_utils.m"
{
#line 460 "program_representation_utils.m"
  {
#line 460 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_190_190;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalExprRep_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__GoalRep_9, (MR_Integer) 0)));
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__DetismRep_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__GoalRep_9, (MR_Integer) 1)));
#line 460 "program_representation_utils.m"
    MR_Box program_representation_utils__AnnotationKey_13 = (MR_hl_field(MR_mktag(0), program_representation_utils__GoalRep_9, (MR_Integer) 2));
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__VarTable_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Info_6, (MR_Integer) 1)));
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__ExprString_16;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__LinePrefix_46;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__ExtraLineForConjunctions_47;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__DetismString_48;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__DetismLine_49;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__LookupAnnotation_50;
#line 460 "program_representation_utils.m"
    MR_Box program_representation_utils__GoalAnnotation_51;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalAnnotationLines0_52;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalAnnotationLines_53;
#line 460 "program_representation_utils.m"
    MR_String program_representation_utils__GoalPathString0_56;
#line 460 "program_representation_utils.m"
    MR_String program_representation_utils__GoalPathString_57;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalPathLine_58;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__V_156_156;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__V_157_157;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__V_165_165;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__V_166_166;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__V_167_167;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__V_168_168;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__V_169_169;
#line 460 "program_representation_utils.m"
    MR_Word program_representation_utils__V_170_170;
#line 462 "program_representation_utils.m"
    MR_Word program_representation_utils__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Info_6, (MR_Integer) 0)));
#line 529 "program_representation_utils.m"
    MR_Word program_representation_utils__V_45_45;
#line 538 "program_representation_utils.m"
    MR_Word program_representation_utils__V_176_176;
#line 539 "program_representation_utils.m"
    MR_Box MR_CALL (* program_representation_utils__func_0)(MR_Box, MR_Box);

#line 467 "program_representation_utils.m"
    if (((MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) == (MR_mktag((MR_Integer) 0))))
#line 464 "program_representation_utils.m"
      {
#line 464 "program_representation_utils.m"
        MR_Word program_representation_utils__ConjGoalReps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)));

#line 465 "program_representation_utils.m"
        {
#line 465 "program_representation_utils.m"
          program_representation_utils__print_conj_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__Indent_7, program_representation_utils__RevGoalPath_8, program_representation_utils__ConjGoalReps_15, &program_representation_utils__ExprString_16);
        }
#line 464 "program_representation_utils.m"
      }
#line 467 "program_representation_utils.m"
    else
#line 467 "program_representation_utils.m"
      if (((MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) == (MR_mktag((MR_Integer) 1))))
#line 468 "program_representation_utils.m"
        {
#line 468 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeCtorInfo_179_179;
#line 468 "program_representation_utils.m"
          MR_Word program_representation_utils__DisjGoalReps_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)));
#line 468 "program_representation_utils.m"
          MR_Word program_representation_utils__DisjString_18;
#line 468 "program_representation_utils.m"
          MR_Word program_representation_utils__V_141_141;
#line 468 "program_representation_utils.m"
          MR_Word program_representation_utils__V_142_142;
#line 468 "program_representation_utils.m"
          MR_Word program_representation_utils__V_143_143;
#line 468 "program_representation_utils.m"
          MR_Word program_representation_utils__V_145_145;
#line 468 "program_representation_utils.m"
          MR_Word program_representation_utils__V_146_146;
#line 468 "program_representation_utils.m"
          MR_Word program_representation_utils__V_147_147;
#line 468 "program_representation_utils.m"
          MR_Word program_representation_utils__V_148_148;

#line 469 "program_representation_utils.m"
          {
#line 469 "program_representation_utils.m"
            program_representation_utils__print_disj_to_strings_7_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__Indent_7, program_representation_utils__RevGoalPath_8, (MR_Integer) 1, program_representation_utils__DisjGoalReps_17, (MR_Integer) 0, &program_representation_utils__DisjString_18);
          }
#line 9965 "program_representation_utils.c"
          program_representation_utils__TypeCtorInfo_179_179 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 471 "program_representation_utils.m"
          {
#line 471 "program_representation_utils.m"
            program_representation_utils__V_141_141 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
          }
#line 472 "program_representation_utils.m"
          {
#line 472 "program_representation_utils.m"
            program_representation_utils__V_143_143 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_179_179, ((MR_Box) ((MR_String) "(\n")));
          }
#line 472 "program_representation_utils.m"
          {
#line 472 "program_representation_utils.m"
            program_representation_utils__V_147_147 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
          }
#line 472 "program_representation_utils.m"
          {
#line 472 "program_representation_utils.m"
            program_representation_utils__V_148_148 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_179_179, ((MR_Box) ((MR_String) ")\n")));
          }
#line 472 "program_representation_utils.m"
          {
#line 472 "program_representation_utils.m"
            program_representation_utils__V_146_146 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_179_179, program_representation_utils__V_147_147, program_representation_utils__V_148_148);
          }
#line 472 "program_representation_utils.m"
          {
#line 472 "program_representation_utils.m"
            program_representation_utils__V_145_145 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_179_179, program_representation_utils__DisjString_18, program_representation_utils__V_146_146);
          }
#line 471 "program_representation_utils.m"
          {
#line 471 "program_representation_utils.m"
            program_representation_utils__V_142_142 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_179_179, program_representation_utils__V_143_143, program_representation_utils__V_145_145);
          }
#line 471 "program_representation_utils.m"
          {
#line 471 "program_representation_utils.m"
            program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_179_179, program_representation_utils__V_141_141, program_representation_utils__V_142_142);
          }
#line 468 "program_representation_utils.m"
        }
#line 467 "program_representation_utils.m"
      else
#line 467 "program_representation_utils.m"
        if (((MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) == (MR_mktag((MR_Integer) 2))))
#line 475 "program_representation_utils.m"
          {
#line 475 "program_representation_utils.m"
            MR_Word program_representation_utils__TypeCtorInfo_181_181;
#line 475 "program_representation_utils.m"
            MR_Integer program_representation_utils__SwitchVarRep_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)));
#line 475 "program_representation_utils.m"
            MR_Word program_representation_utils__CanFail_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExprRep_11, (MR_Integer) 1)));
#line 475 "program_representation_utils.m"
            MR_Word program_representation_utils__CasesRep_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExprRep_11, (MR_Integer) 2)));
#line 475 "program_representation_utils.m"
            MR_String program_representation_utils__SwitchVarName_22;
#line 475 "program_representation_utils.m"
            MR_String program_representation_utils__SwitchOnString_23;
#line 475 "program_representation_utils.m"
            MR_Word program_representation_utils__SwitchString_24;
#line 475 "program_representation_utils.m"
            MR_String program_representation_utils__V_118_118;
#line 475 "program_representation_utils.m"
            MR_Integer program_representation_utils__V_122_122;
#line 475 "program_representation_utils.m"
            MR_Word program_representation_utils__V_126_126;
#line 475 "program_representation_utils.m"
            MR_Word program_representation_utils__V_127_127;
#line 475 "program_representation_utils.m"
            MR_Word program_representation_utils__V_128_128;
#line 475 "program_representation_utils.m"
            MR_Word program_representation_utils__V_129_129;
#line 475 "program_representation_utils.m"
            MR_Word program_representation_utils__V_130_130;
#line 475 "program_representation_utils.m"
            MR_Word program_representation_utils__V_131_131;
#line 475 "program_representation_utils.m"
            MR_Word program_representation_utils__V_132_132;
#line 475 "program_representation_utils.m"
            MR_Word program_representation_utils__V_134_134;
#line 475 "program_representation_utils.m"
            MR_Word program_representation_utils__V_135_135;
#line 475 "program_representation_utils.m"
            MR_Word program_representation_utils__V_136_136;
#line 475 "program_representation_utils.m"
            MR_Word program_representation_utils__V_137_137;
#line 475 "program_representation_utils.m"
            MR_String program_representation_utils__V_199_199;
#line 475 "program_representation_utils.m"
            MR_String program_representation_utils__V_201_201;

#line 476 "program_representation_utils.m"
            {
#line 476 "program_representation_utils.m"
              mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_14, program_representation_utils__SwitchVarRep_19, &program_representation_utils__SwitchVarName_22);
            }
#line 478 "program_representation_utils.m"
            {
#line 478 "program_representation_utils.m"
              program_representation_utils__V_118_118 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_switch_can_fail_rep_0, ((MR_Box) (program_representation_utils__CanFail_20)));
            }
#line 10070 "program_representation_utils.c"
            {
#line 10072 "program_representation_utils.c"
              program_representation_utils__V_199_199 = mercury__string__f_43_43_2_f_0(program_representation_utils__SwitchVarName_22, (MR_String) "\n");
            }
#line 10075 "program_representation_utils.c"
            {
#line 10077 "program_representation_utils.c"
              program_representation_utils__V_201_201 = mercury__string__f_43_43_2_f_0((MR_String) " switch on ", program_representation_utils__V_199_199);
            }
#line 10080 "program_representation_utils.c"
            {
#line 10082 "program_representation_utils.c"
              program_representation_utils__SwitchOnString_23 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_118_118, program_representation_utils__V_201_201);
            }
#line 479 "program_representation_utils.m"
            program_representation_utils__V_122_122 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
#line 479 "program_representation_utils.m"
            {
#line 479 "program_representation_utils.m"
              program_representation_utils__print_switch_to_strings_7_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__V_122_122, program_representation_utils__RevGoalPath_8, (MR_Integer) 1, program_representation_utils__CasesRep_21, (MR_Integer) 0, &program_representation_utils__SwitchString_24);
            }
#line 10092 "program_representation_utils.c"
            program_representation_utils__TypeCtorInfo_181_181 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 481 "program_representation_utils.m"
            {
#line 481 "program_representation_utils.m"
              program_representation_utils__V_126_126 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
            }
#line 481 "program_representation_utils.m"
            {
#line 481 "program_representation_utils.m"
              program_representation_utils__V_128_128 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_181_181, ((MR_Box) (program_representation_utils__SwitchOnString_23)));
            }
#line 482 "program_representation_utils.m"
            {
#line 482 "program_representation_utils.m"
              program_representation_utils__V_130_130 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
            }
#line 482 "program_representation_utils.m"
            {
#line 482 "program_representation_utils.m"
              program_representation_utils__V_132_132 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_181_181, ((MR_Box) ((MR_String) "(\n")));
            }
#line 483 "program_representation_utils.m"
            {
#line 483 "program_representation_utils.m"
              program_representation_utils__V_136_136 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
            }
#line 483 "program_representation_utils.m"
            {
#line 483 "program_representation_utils.m"
              program_representation_utils__V_137_137 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_181_181, ((MR_Box) ((MR_String) ")\n")));
            }
#line 482 "program_representation_utils.m"
            {
#line 482 "program_representation_utils.m"
              program_representation_utils__V_135_135 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__V_136_136, program_representation_utils__V_137_137);
            }
#line 482 "program_representation_utils.m"
            {
#line 482 "program_representation_utils.m"
              program_representation_utils__V_134_134 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__SwitchString_24, program_representation_utils__V_135_135);
            }
#line 482 "program_representation_utils.m"
            {
#line 482 "program_representation_utils.m"
              program_representation_utils__V_131_131 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__V_132_132, program_representation_utils__V_134_134);
            }
#line 481 "program_representation_utils.m"
            {
#line 481 "program_representation_utils.m"
              program_representation_utils__V_129_129 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__V_130_130, program_representation_utils__V_131_131);
            }
#line 481 "program_representation_utils.m"
            {
#line 481 "program_representation_utils.m"
              program_representation_utils__V_127_127 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__V_128_128, program_representation_utils__V_129_129);
            }
#line 481 "program_representation_utils.m"
            {
#line 481 "program_representation_utils.m"
              program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__V_126_126, program_representation_utils__V_127_127);
            }
#line 475 "program_representation_utils.m"
          }
#line 467 "program_representation_utils.m"
        else
#line 467 "program_representation_utils.m"
          if (((((MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 524 "program_representation_utils.m"
            {
#line 524 "program_representation_utils.m"
              MR_Word program_representation_utils__AtomicGoalRep_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 4)));
#line 524 "program_representation_utils.m"
              MR_Word program_representation_utils__ExprString0_44;
#line 524 "program_representation_utils.m"
              MR_Word program_representation_utils__V_59_59;
#line 523 "program_representation_utils.m"
              MR_String program_representation_utils___FileName_40 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 1)));
#line 523 "program_representation_utils.m"
              MR_Integer program_representation_utils___LineNumber_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 2)));
#line 523 "program_representation_utils.m"
              MR_Word program_representation_utils___BoundVars_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 3)));

#line 525 "program_representation_utils.m"
              {
#line 525 "program_representation_utils.m"
                program_representation_utils__print_atomic_goal_to_strings_3_p_0(program_representation_utils__VarTable_14, program_representation_utils__AtomicGoalRep_43, &program_representation_utils__ExprString0_44);
              }
#line 526 "program_representation_utils.m"
              {
#line 526 "program_representation_utils.m"
                program_representation_utils__V_59_59 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
              }
#line 526 "program_representation_utils.m"
              {
#line 526 "program_representation_utils.m"
                program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__V_59_59, program_representation_utils__ExprString0_44);
              }
#line 524 "program_representation_utils.m"
            }
#line 467 "program_representation_utils.m"
          else
#line 467 "program_representation_utils.m"
            if (((((MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 485 "program_representation_utils.m"
              {
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__TypeCtorInfo_182_182;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__CondRep_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 1)));
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__ThenRep_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 2)));
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__ElseRep_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 3)));
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__RevGoalPathCond_28;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__RevGoalPathThen_29;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__RevGoalPathElse_30;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__CondString_31;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__ThenString_32;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__ElseString_33;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__IndentString_34;
#line 485 "program_representation_utils.m"
                MR_Integer program_representation_utils__V_92_92;
#line 485 "program_representation_utils.m"
                MR_Integer program_representation_utils__V_94_94;
#line 485 "program_representation_utils.m"
                MR_Integer program_representation_utils__V_96_96;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__V_98_98;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__V_99_99;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__V_101_101;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__V_102_102;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__V_103_103;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__V_104_104;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__V_106_106;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__V_107_107;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__V_108_108;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__V_109_109;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__V_111_111;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__V_112_112;
#line 485 "program_representation_utils.m"
                MR_Word program_representation_utils__V_113_113;

#line 486 "program_representation_utils.m"
                {
#line 486 "program_representation_utils.m"
                  program_representation_utils__RevGoalPathCond_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathCond_28, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_8));
#line 486 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathCond_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 486 "program_representation_utils.m"
                }
#line 487 "program_representation_utils.m"
                {
#line 487 "program_representation_utils.m"
                  program_representation_utils__RevGoalPathThen_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathThen_29, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_8));
#line 487 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathThen_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 487 "program_representation_utils.m"
                }
#line 488 "program_representation_utils.m"
                {
#line 488 "program_representation_utils.m"
                  program_representation_utils__RevGoalPathElse_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathElse_30, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_8));
#line 488 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathElse_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 488 "program_representation_utils.m"
                }
#line 489 "program_representation_utils.m"
                program_representation_utils__V_92_92 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
#line 489 "program_representation_utils.m"
                {
#line 489 "program_representation_utils.m"
                  program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__V_92_92, program_representation_utils__RevGoalPathCond_28, program_representation_utils__CondRep_25, &program_representation_utils__CondString_31);
                }
#line 491 "program_representation_utils.m"
                program_representation_utils__V_94_94 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
#line 491 "program_representation_utils.m"
                {
#line 491 "program_representation_utils.m"
                  program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__V_94_94, program_representation_utils__RevGoalPathThen_29, program_representation_utils__ThenRep_26, &program_representation_utils__ThenString_32);
                }
#line 493 "program_representation_utils.m"
                program_representation_utils__V_96_96 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
#line 493 "program_representation_utils.m"
                {
#line 493 "program_representation_utils.m"
                  program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__V_96_96, program_representation_utils__RevGoalPathElse_30, program_representation_utils__ElseRep_27, &program_representation_utils__ElseString_33);
                }
#line 495 "program_representation_utils.m"
                {
#line 495 "program_representation_utils.m"
                  program_representation_utils__IndentString_34 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
                }
#line 10309 "program_representation_utils.c"
                program_representation_utils__TypeCtorInfo_182_182 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 496 "program_representation_utils.m"
                {
#line 496 "program_representation_utils.m"
                  program_representation_utils__V_99_99 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_182_182, ((MR_Box) ((MR_String) "(\n")));
                }
#line 497 "program_representation_utils.m"
                {
#line 497 "program_representation_utils.m"
                  program_representation_utils__V_104_104 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_182_182, ((MR_Box) ((MR_String) "->\n")));
                }
#line 498 "program_representation_utils.m"
                {
#line 498 "program_representation_utils.m"
                  program_representation_utils__V_109_109 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_182_182, ((MR_Box) ((MR_String) ";\n")));
                }
#line 499 "program_representation_utils.m"
                {
#line 499 "program_representation_utils.m"
                  program_representation_utils__V_113_113 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_182_182, ((MR_Box) ((MR_String) ")\n")));
                }
#line 498 "program_representation_utils.m"
                {
#line 498 "program_representation_utils.m"
                  program_representation_utils__V_112_112 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__IndentString_34, program_representation_utils__V_113_113);
                }
#line 498 "program_representation_utils.m"
                {
#line 498 "program_representation_utils.m"
                  program_representation_utils__V_111_111 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__ElseString_33, program_representation_utils__V_112_112);
                }
#line 498 "program_representation_utils.m"
                {
#line 498 "program_representation_utils.m"
                  program_representation_utils__V_108_108 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__V_109_109, program_representation_utils__V_111_111);
                }
#line 497 "program_representation_utils.m"
                {
#line 497 "program_representation_utils.m"
                  program_representation_utils__V_107_107 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__IndentString_34, program_representation_utils__V_108_108);
                }
#line 497 "program_representation_utils.m"
                {
#line 497 "program_representation_utils.m"
                  program_representation_utils__V_106_106 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__ThenString_32, program_representation_utils__V_107_107);
                }
#line 497 "program_representation_utils.m"
                {
#line 497 "program_representation_utils.m"
                  program_representation_utils__V_103_103 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__V_104_104, program_representation_utils__V_106_106);
                }
#line 496 "program_representation_utils.m"
                {
#line 496 "program_representation_utils.m"
                  program_representation_utils__V_102_102 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__IndentString_34, program_representation_utils__V_103_103);
                }
#line 496 "program_representation_utils.m"
                {
#line 496 "program_representation_utils.m"
                  program_representation_utils__V_101_101 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__CondString_31, program_representation_utils__V_102_102);
                }
#line 496 "program_representation_utils.m"
                {
#line 496 "program_representation_utils.m"
                  program_representation_utils__V_98_98 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__V_99_99, program_representation_utils__V_101_101);
                }
#line 496 "program_representation_utils.m"
                {
#line 496 "program_representation_utils.m"
                  program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__IndentString_34, program_representation_utils__V_98_98);
                }
#line 485 "program_representation_utils.m"
              }
#line 467 "program_representation_utils.m"
            else
#line 467 "program_representation_utils.m"
              if (((((MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 501 "program_representation_utils.m"
                {
#line 501 "program_representation_utils.m"
                  MR_Word program_representation_utils__TypeCtorInfo_183_183;
#line 501 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoalRep_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 1)));
#line 501 "program_representation_utils.m"
                  MR_Word program_representation_utils__RevSubGoalPath_36;
#line 501 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoalString_37;
#line 501 "program_representation_utils.m"
                  MR_Integer program_representation_utils__V_78_78;
#line 501 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_80_80;
#line 501 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_81_81;
#line 501 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_82_82;
#line 501 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_84_84;
#line 501 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_85_85;
#line 501 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_86_86;
#line 501 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_87_87;

#line 502 "program_representation_utils.m"
                  {
#line 502 "program_representation_utils.m"
                    program_representation_utils__RevSubGoalPath_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_36, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_8));
#line 502 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 502 "program_representation_utils.m"
                  }
#line 503 "program_representation_utils.m"
                  program_representation_utils__V_78_78 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
#line 503 "program_representation_utils.m"
                  {
#line 503 "program_representation_utils.m"
                    program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__V_78_78, program_representation_utils__RevSubGoalPath_36, program_representation_utils__SubGoalRep_35, &program_representation_utils__SubGoalString_37);
                  }
#line 10431 "program_representation_utils.c"
                  program_representation_utils__TypeCtorInfo_183_183 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 505 "program_representation_utils.m"
                  {
#line 505 "program_representation_utils.m"
                    program_representation_utils__V_80_80 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
                  }
#line 505 "program_representation_utils.m"
                  {
#line 505 "program_representation_utils.m"
                    program_representation_utils__V_82_82 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_183_183, ((MR_Box) ((MR_String) "not (\n")));
                  }
#line 506 "program_representation_utils.m"
                  {
#line 506 "program_representation_utils.m"
                    program_representation_utils__V_86_86 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
                  }
#line 506 "program_representation_utils.m"
                  {
#line 506 "program_representation_utils.m"
                    program_representation_utils__V_87_87 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_183_183, ((MR_Box) ((MR_String) ")\n")));
                  }
#line 506 "program_representation_utils.m"
                  {
#line 506 "program_representation_utils.m"
                    program_representation_utils__V_85_85 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_183_183, program_representation_utils__V_86_86, program_representation_utils__V_87_87);
                  }
#line 505 "program_representation_utils.m"
                  {
#line 505 "program_representation_utils.m"
                    program_representation_utils__V_84_84 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_183_183, program_representation_utils__SubGoalString_37, program_representation_utils__V_85_85);
                  }
#line 505 "program_representation_utils.m"
                  {
#line 505 "program_representation_utils.m"
                    program_representation_utils__V_81_81 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_183_183, program_representation_utils__V_82_82, program_representation_utils__V_84_84);
                  }
#line 505 "program_representation_utils.m"
                  {
#line 505 "program_representation_utils.m"
                    program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_183_183, program_representation_utils__V_80_80, program_representation_utils__V_81_81);
                  }
#line 501 "program_representation_utils.m"
                }
#line 467 "program_representation_utils.m"
              else
#line 508 "program_representation_utils.m"
                {
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__TypeCtorInfo_186_186;
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__MaybeCut_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 2)));
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__CutString_39;
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_61_61;
#line 508 "program_representation_utils.m"
                  MR_Integer program_representation_utils__V_62_62;
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_64_64;
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_65_65;
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_66_66;
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_68_68;
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_69_69;
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_70_70;
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_72_72;
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_73_73;
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_74_74;
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_75_75;
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoalRep_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 1)));
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__RevSubGoalPath_172;
#line 508 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoalString_173;

#line 512 "program_representation_utils.m"
                  if ((program_representation_utils__MaybeCut_38 == (MR_Integer) 0))
#line 510 "program_representation_utils.m"
                    {
#line 511 "program_representation_utils.m"
                      {
#line 511 "program_representation_utils.m"
                        program_representation_utils__CutString_39 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) " cut")));
                      }
#line 510 "program_representation_utils.m"
                    }
#line 512 "program_representation_utils.m"
                  else
#line 513 "program_representation_utils.m"
                    {
#line 514 "program_representation_utils.m"
                      {
#line 514 "program_representation_utils.m"
                        program_representation_utils__CutString_39 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
                      }
#line 513 "program_representation_utils.m"
                    }
#line 516 "program_representation_utils.m"
                  {
#line 516 "program_representation_utils.m"
                    program_representation_utils__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 516 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__V_61_61, 1) = ((MR_Box) (program_representation_utils__MaybeCut_38));
#line 516 "program_representation_utils.m"
                  }
#line 516 "program_representation_utils.m"
                  {
#line 516 "program_representation_utils.m"
                    program_representation_utils__RevSubGoalPath_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_172, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_8));
#line 516 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_172, 1) = ((MR_Box) (program_representation_utils__V_61_61));
#line 516 "program_representation_utils.m"
                  }
#line 517 "program_representation_utils.m"
                  program_representation_utils__V_62_62 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
#line 517 "program_representation_utils.m"
                  {
#line 517 "program_representation_utils.m"
                    program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__V_62_62, program_representation_utils__RevSubGoalPath_172, program_representation_utils__SubGoalRep_171, &program_representation_utils__SubGoalString_173);
                  }
#line 10565 "program_representation_utils.c"
                  program_representation_utils__TypeCtorInfo_186_186 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 519 "program_representation_utils.m"
                  {
#line 519 "program_representation_utils.m"
                    program_representation_utils__V_64_64 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
                  }
#line 519 "program_representation_utils.m"
                  {
#line 519 "program_representation_utils.m"
                    program_representation_utils__V_66_66 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_186_186, ((MR_Box) ((MR_String) "scope")));
                  }
#line 520 "program_representation_utils.m"
                  {
#line 520 "program_representation_utils.m"
                    program_representation_utils__V_70_70 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_186_186, ((MR_Box) ((MR_String) " (\n")));
                  }
#line 521 "program_representation_utils.m"
                  {
#line 521 "program_representation_utils.m"
                    program_representation_utils__V_74_74 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
                  }
#line 521 "program_representation_utils.m"
                  {
#line 521 "program_representation_utils.m"
                    program_representation_utils__V_75_75 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_186_186, ((MR_Box) ((MR_String) ")\n")));
                  }
#line 521 "program_representation_utils.m"
                  {
#line 521 "program_representation_utils.m"
                    program_representation_utils__V_73_73 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__V_74_74, program_representation_utils__V_75_75);
                  }
#line 520 "program_representation_utils.m"
                  {
#line 520 "program_representation_utils.m"
                    program_representation_utils__V_72_72 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__SubGoalString_173, program_representation_utils__V_73_73);
                  }
#line 519 "program_representation_utils.m"
                  {
#line 519 "program_representation_utils.m"
                    program_representation_utils__V_69_69 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__V_70_70, program_representation_utils__V_72_72);
                  }
#line 519 "program_representation_utils.m"
                  {
#line 519 "program_representation_utils.m"
                    program_representation_utils__V_68_68 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__CutString_39, program_representation_utils__V_69_69);
                  }
#line 519 "program_representation_utils.m"
                  {
#line 519 "program_representation_utils.m"
                    program_representation_utils__V_65_65 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__V_66_66, program_representation_utils__V_68_68);
                  }
#line 519 "program_representation_utils.m"
                  {
#line 519 "program_representation_utils.m"
                    program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__V_64_64, program_representation_utils__V_65_65);
                  }
#line 508 "program_representation_utils.m"
                }
#line 529 "program_representation_utils.m"
    program_representation_utils__succeeded = ((MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) == (MR_mktag((MR_Integer) 0)));
#line 529 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 529 "program_representation_utils.m"
      {
#line 529 "program_representation_utils.m"
        program_representation_utils__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)));
#line 530 "program_representation_utils.m"
        {
#line 530 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeCtorInfo_188_188 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 530 "program_representation_utils.m"
          MR_Word program_representation_utils__V_150_150;
#line 530 "program_representation_utils.m"
          MR_Word program_representation_utils__V_151_151;

#line 530 "program_representation_utils.m"
          {
#line 530 "program_representation_utils.m"
            program_representation_utils__V_150_150 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
          }
#line 530 "program_representation_utils.m"
          {
#line 530 "program_representation_utils.m"
            program_representation_utils__V_151_151 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_188_188, ((MR_Box) ((MR_String) "% conjunction: ")));
          }
#line 530 "program_representation_utils.m"
          {
#line 530 "program_representation_utils.m"
            program_representation_utils__LinePrefix_46 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_188_188, program_representation_utils__V_150_150, program_representation_utils__V_151_151);
          }
#line 531 "program_representation_utils.m"
          {
#line 531 "program_representation_utils.m"
            program_representation_utils__ExtraLineForConjunctions_47 = program_representation_utils__nl_0_f_0();
          }
#line 530 "program_representation_utils.m"
        }
#line 529 "program_representation_utils.m"
      }
#line 529 "program_representation_utils.m"
    else
#line 533 "program_representation_utils.m"
      {
#line 533 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_189_189 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 533 "program_representation_utils.m"
        MR_Word program_representation_utils__V_153_153;
#line 533 "program_representation_utils.m"
        MR_Word program_representation_utils__V_154_154;

#line 533 "program_representation_utils.m"
        {
#line 533 "program_representation_utils.m"
          program_representation_utils__V_153_153 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
        }
#line 533 "program_representation_utils.m"
        {
#line 533 "program_representation_utils.m"
          program_representation_utils__V_154_154 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_189_189, ((MR_Box) ((MR_String) "% ")));
        }
#line 533 "program_representation_utils.m"
        {
#line 533 "program_representation_utils.m"
          program_representation_utils__LinePrefix_46 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_189_189, program_representation_utils__V_153_153, program_representation_utils__V_154_154);
        }
#line 534 "program_representation_utils.m"
        {
#line 534 "program_representation_utils.m"
          program_representation_utils__ExtraLineForConjunctions_47 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_189_189);
        }
#line 533 "program_representation_utils.m"
      }
#line 536 "program_representation_utils.m"
    {
#line 536 "program_representation_utils.m"
      program_representation_utils__detism_to_string_2_p_0(program_representation_utils__DetismRep_12, &program_representation_utils__DetismString_48);
    }
#line 10703 "program_representation_utils.c"
    program_representation_utils__TypeCtorInfo_190_190 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 537 "program_representation_utils.m"
    {
#line 537 "program_representation_utils.m"
      program_representation_utils__V_157_157 = program_representation_utils__nl_0_f_0();
    }
#line 537 "program_representation_utils.m"
    {
#line 537 "program_representation_utils.m"
      program_representation_utils__V_156_156 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__DetismString_48, program_representation_utils__V_157_157);
    }
#line 537 "program_representation_utils.m"
    {
#line 537 "program_representation_utils.m"
      program_representation_utils__DetismLine_49 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__LinePrefix_46, program_representation_utils__V_156_156);
    }
#line 538 "program_representation_utils.m"
    program_representation_utils__LookupAnnotation_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Info_6, (MR_Integer) 0)));
#line 538 "program_representation_utils.m"
    program_representation_utils__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Info_6, (MR_Integer) 1)));
#line 539 "program_representation_utils.m"
    program_representation_utils__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), program_representation_utils__LookupAnnotation_50, (MR_Integer) 1)));
#line 539 "program_representation_utils.m"
    {
#line 539 "program_representation_utils.m"
      program_representation_utils__GoalAnnotation_51 = program_representation_utils__func_0(((MR_Box) program_representation_utils__LookupAnnotation_50), program_representation_utils__AnnotationKey_13);
    }
#line 540 "program_representation_utils.m"
    {
#line 540 "program_representation_utils.m"
      program_representation_utils__print_goal_annotation_to_strings_3_p_0(program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__VarTable_14, program_representation_utils__GoalAnnotation_51, &program_representation_utils__GoalAnnotationLines0_52);
    }
#line 542 "program_representation_utils.m"
    {
#line 542 "program_representation_utils.m"
      program_representation_utils__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &program_representation_utils_scalar_common_1[0], program_representation_utils__GoalAnnotationLines0_52);
    }
#line 544 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 543 "program_representation_utils.m"
      {
#line 543 "program_representation_utils.m"
        program_representation_utils__GoalAnnotationLines_53 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_190_190);
      }
#line 544 "program_representation_utils.m"
    else
#line 546 "program_representation_utils.m"
      {
#line 546 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeInfo_192_192 = (MR_Word) &program_representation_utils_scalar_common_1[0];
#line 546 "program_representation_utils.m"
        MR_Word program_representation_utils__GoalAnnotationLines1_54;
#line 546 "program_representation_utils.m"
        MR_Word program_representation_utils__V_158_158;
#line 546 "program_representation_utils.m"
        MR_Word program_representation_utils__V_164_164;
#line 547 "program_representation_utils.m"
        MR_Box program_representation_utils__conv3_GoalAnnotationLines_53;

#line 545 "program_representation_utils.m"
        {
#line 545 "program_representation_utils.m"
          program_representation_utils__V_158_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 545 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_158_158, 0) = ((MR_Box) (&program_representation_utils_scalar_common_3[2]));
#line 545 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_158_158, 1) = ((MR_Box) (program_representation_utils__print_goal_to_strings_5_p_0_1));
#line 545 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_158_158, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 545 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_158_158, 3) = ((MR_Box) (program_representation_utils__LinePrefix_46));
#line 545 "program_representation_utils.m"
        }
#line 545 "program_representation_utils.m"
        {
#line 545 "program_representation_utils.m"
          program_representation_utils__GoalAnnotationLines1_54 = mercury__cord__map_2_f_0(program_representation_utils__TypeInfo_192_192, program_representation_utils__TypeInfo_192_192, program_representation_utils__V_158_158, program_representation_utils__GoalAnnotationLines0_52);
        }
#line 547 "program_representation_utils.m"
        {
#line 547 "program_representation_utils.m"
          program_representation_utils__V_164_164 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_190_190);
        }
#line 547 "program_representation_utils.m"
        {
#line 547 "program_representation_utils.m"
          program_representation_utils__conv3_GoalAnnotationLines_53 = mercury__cord__foldr_3_f_0(program_representation_utils__TypeInfo_192_192, program_representation_utils__TypeInfo_192_192, (MR_Word) &program_representation_utils_scalar_common_2[6], program_representation_utils__GoalAnnotationLines1_54, ((MR_Box) (program_representation_utils__V_164_164)));
        }
#line 547 "program_representation_utils.m"
        program_representation_utils__GoalAnnotationLines_53 = ((MR_Word) program_representation_utils__conv3_GoalAnnotationLines_53);
#line 546 "program_representation_utils.m"
      }
#line 550 "program_representation_utils.m"
    {
#line 550 "program_representation_utils.m"
      program_representation_utils__GoalPathString0_56 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(program_representation_utils__RevGoalPath_8);
    }
#line 551 "program_representation_utils.m"
    program_representation_utils__succeeded = (strcmp(program_representation_utils__GoalPathString0_56, (MR_String) "") == 0);
#line 553 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 552 "program_representation_utils.m"
      program_representation_utils__GoalPathString_57 = (MR_String) "root goal";
#line 553 "program_representation_utils.m"
    else
#line 554 "program_representation_utils.m"
      program_representation_utils__GoalPathString_57 = program_representation_utils__GoalPathString0_56;
#line 556 "program_representation_utils.m"
    {
#line 556 "program_representation_utils.m"
      program_representation_utils__V_166_166 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_190_190, ((MR_Box) (program_representation_utils__GoalPathString_57)));
    }
#line 556 "program_representation_utils.m"
    {
#line 556 "program_representation_utils.m"
      program_representation_utils__V_167_167 = program_representation_utils__nl_0_f_0();
    }
#line 556 "program_representation_utils.m"
    {
#line 556 "program_representation_utils.m"
      program_representation_utils__V_165_165 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__V_166_166, program_representation_utils__V_167_167);
    }
#line 556 "program_representation_utils.m"
    {
#line 556 "program_representation_utils.m"
      program_representation_utils__GoalPathLine_58 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__LinePrefix_46, program_representation_utils__V_165_165);
    }
#line 561 "program_representation_utils.m"
    {
#line 561 "program_representation_utils.m"
      program_representation_utils__V_170_170 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__ExtraLineForConjunctions_47, program_representation_utils__ExprString_16);
    }
#line 560 "program_representation_utils.m"
    {
#line 560 "program_representation_utils.m"
      program_representation_utils__V_169_169 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__GoalAnnotationLines_53, program_representation_utils__V_170_170);
    }
#line 559 "program_representation_utils.m"
    {
#line 559 "program_representation_utils.m"
      program_representation_utils__V_168_168 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__DetismLine_49, program_representation_utils__V_169_169);
    }
#line 558 "program_representation_utils.m"
    {
#line 558 "program_representation_utils.m"
      *program_representation_utils__Strings_10 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__GoalPathLine_58, program_representation_utils__V_168_168);
    }
#line 460 "program_representation_utils.m"
  }
#line 67 "program_representation_utils.m"
}

#line 54 "program_representation_utils.m"
void MR_CALL 
program_representation_utils__print_proc_label_to_string_2_p_0(
#line 54 "program_representation_utils.m"
  MR_Word program_representation_utils__ProcLabel_3,
#line 54 "program_representation_utils.m"
  MR_String * program_representation_utils__String_4)
#line 54 "program_representation_utils.m"
{
#line 441 "program_representation_utils.m"
  {
#line 441 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 441 "program_representation_utils.m"
    if (((MR_tag((MR_Word) program_representation_utils__ProcLabel_3)) == (MR_mktag((MR_Integer) 0))))
#line 441 "program_representation_utils.m"
      {
#line 441 "program_representation_utils.m"
        MR_Word program_representation_utils__PredFunc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 0)));
#line 441 "program_representation_utils.m"
        MR_String program_representation_utils__DeclModule_6 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 1)));
#line 441 "program_representation_utils.m"
        MR_String program_representation_utils__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 3)));
#line 441 "program_representation_utils.m"
        MR_Integer program_representation_utils__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 4)));
#line 441 "program_representation_utils.m"
        MR_Integer program_representation_utils__Mode_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 5)));
#line 441 "program_representation_utils.m"
        MR_String program_representation_utils__PF_11;
#line 441 "program_representation_utils.m"
        MR_String program_representation_utils__V_43_43;
#line 441 "program_representation_utils.m"
        MR_String program_representation_utils__V_45_45;
#line 441 "program_representation_utils.m"
        MR_String program_representation_utils__V_46_46;
#line 441 "program_representation_utils.m"
        MR_String program_representation_utils__V_47_47;
#line 441 "program_representation_utils.m"
        MR_String program_representation_utils__V_49_49;
#line 441 "program_representation_utils.m"
        MR_String program_representation_utils__V_50_50;
#line 441 "program_representation_utils.m"
        MR_String program_representation_utils__V_52_52;
#line 441 "program_representation_utils.m"
        MR_String program_representation_utils__V_53_53;
#line 441 "program_representation_utils.m"
        MR_String program_representation_utils__V_55_55;
#line 440 "program_representation_utils.m"
        MR_String program_representation_utils___DefModule_7 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 2)));

#line 445 "program_representation_utils.m"
        if ((program_representation_utils__PredFunc_5 == (MR_Integer) 1))
#line 447 "program_representation_utils.m"
          program_representation_utils__PF_11 = (MR_String) "func";
#line 445 "program_representation_utils.m"
        else
#line 444 "program_representation_utils.m"
          program_representation_utils__PF_11 = (MR_String) "pred";
#line 10915 "program_representation_utils.c"
        {
#line 10917 "program_representation_utils.c"
          program_representation_utils__V_43_43 = mercury__string__int_to_string_1_f_0(program_representation_utils__Mode_10);
        }
#line 10920 "program_representation_utils.c"
        {
#line 10922 "program_representation_utils.c"
          program_representation_utils__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) "-", program_representation_utils__V_43_43);
        }
#line 10925 "program_representation_utils.c"
        {
#line 10927 "program_representation_utils.c"
          program_representation_utils__V_46_46 = mercury__string__int_to_string_1_f_0(program_representation_utils__Arity_9);
        }
#line 10930 "program_representation_utils.c"
        {
#line 10932 "program_representation_utils.c"
          program_representation_utils__V_47_47 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_46_46, program_representation_utils__V_45_45);
        }
#line 10935 "program_representation_utils.c"
        {
#line 10937 "program_representation_utils.c"
          program_representation_utils__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) "/", program_representation_utils__V_47_47);
        }
#line 10940 "program_representation_utils.c"
        {
#line 10942 "program_representation_utils.c"
          program_representation_utils__V_50_50 = mercury__string__f_43_43_2_f_0(program_representation_utils__Name_8, program_representation_utils__V_49_49);
        }
#line 10945 "program_representation_utils.c"
        {
#line 10947 "program_representation_utils.c"
          program_representation_utils__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) ".", program_representation_utils__V_50_50);
        }
#line 10950 "program_representation_utils.c"
        {
#line 10952 "program_representation_utils.c"
          program_representation_utils__V_53_53 = mercury__string__f_43_43_2_f_0(program_representation_utils__DeclModule_6, program_representation_utils__V_52_52);
        }
#line 10955 "program_representation_utils.c"
        {
#line 10957 "program_representation_utils.c"
          program_representation_utils__V_55_55 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__V_53_53);
        }
#line 10960 "program_representation_utils.c"
        {
#line 10962 "program_representation_utils.c"
          *program_representation_utils__String_4 = mercury__string__f_43_43_2_f_0(program_representation_utils__PF_11, program_representation_utils__V_55_55);
        }
#line 441 "program_representation_utils.m"
      }
#line 441 "program_representation_utils.m"
    else
#line 453 "program_representation_utils.m"
      {
#line 453 "program_representation_utils.m"
        MR_String program_representation_utils__TypeName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 0)));
#line 453 "program_representation_utils.m"
        MR_String program_representation_utils__TypeModule_13 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 1)));
#line 453 "program_representation_utils.m"
        MR_String program_representation_utils__Name_40 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 3)));
#line 453 "program_representation_utils.m"
        MR_Integer program_representation_utils__Arity_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 4)));
#line 453 "program_representation_utils.m"
        MR_Integer program_representation_utils__Mode_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 5)));
#line 453 "program_representation_utils.m"
        MR_String program_representation_utils__V_56_56;
#line 453 "program_representation_utils.m"
        MR_String program_representation_utils__V_58_58;
#line 453 "program_representation_utils.m"
        MR_String program_representation_utils__V_59_59;
#line 453 "program_representation_utils.m"
        MR_String program_representation_utils__V_60_60;
#line 453 "program_representation_utils.m"
        MR_String program_representation_utils__V_62_62;
#line 453 "program_representation_utils.m"
        MR_String program_representation_utils__V_63_63;
#line 453 "program_representation_utils.m"
        MR_String program_representation_utils__V_65_65;
#line 453 "program_representation_utils.m"
        MR_String program_representation_utils__V_66_66;
#line 453 "program_representation_utils.m"
        MR_String program_representation_utils__V_68_68;
#line 452 "program_representation_utils.m"
        MR_String program_representation_utils___DefModule_38 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 2)));

#line 11002 "program_representation_utils.c"
        {
#line 11004 "program_representation_utils.c"
          program_representation_utils__V_56_56 = mercury__string__int_to_string_1_f_0(program_representation_utils__Mode_42);
        }
#line 11007 "program_representation_utils.c"
        {
#line 11009 "program_representation_utils.c"
          program_representation_utils__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) "-", program_representation_utils__V_56_56);
        }
#line 11012 "program_representation_utils.c"
        {
#line 11014 "program_representation_utils.c"
          program_representation_utils__V_59_59 = mercury__string__int_to_string_1_f_0(program_representation_utils__Arity_41);
        }
#line 11017 "program_representation_utils.c"
        {
#line 11019 "program_representation_utils.c"
          program_representation_utils__V_60_60 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_59_59, program_representation_utils__V_58_58);
        }
#line 11022 "program_representation_utils.c"
        {
#line 11024 "program_representation_utils.c"
          program_representation_utils__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "/", program_representation_utils__V_60_60);
        }
#line 11027 "program_representation_utils.c"
        {
#line 11029 "program_representation_utils.c"
          program_representation_utils__V_63_63 = mercury__string__f_43_43_2_f_0(program_representation_utils__TypeName_12, program_representation_utils__V_62_62);
        }
#line 11032 "program_representation_utils.c"
        {
#line 11034 "program_representation_utils.c"
          program_representation_utils__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) ".", program_representation_utils__V_63_63);
        }
#line 11037 "program_representation_utils.c"
        {
#line 11039 "program_representation_utils.c"
          program_representation_utils__V_66_66 = mercury__string__f_43_43_2_f_0(program_representation_utils__TypeModule_13, program_representation_utils__V_65_65);
        }
#line 11042 "program_representation_utils.c"
        {
#line 11044 "program_representation_utils.c"
          program_representation_utils__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) " for ", program_representation_utils__V_66_66);
        }
#line 11047 "program_representation_utils.c"
        {
#line 11049 "program_representation_utils.c"
          *program_representation_utils__String_4 = mercury__string__f_43_43_2_f_0(program_representation_utils__Name_40, program_representation_utils__V_68_68);
        }
#line 453 "program_representation_utils.m"
      }
#line 441 "program_representation_utils.m"
  }
#line 54 "program_representation_utils.m"
}

#line 415 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_2(
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 415 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4)
#line 415 "program_representation_utils.m"
{
#line 415 "program_representation_utils.m"
  {
#line 415 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 415 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_STATE_VARIABLE_Strings_16;

#line 415 "program_representation_utils.m"
    {
#line 415 "program_representation_utils.m"
      program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv0_STATE_VARIABLE_Strings_16);
    }
#line 415 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv0_STATE_VARIABLE_Strings_16));
#line 415 "program_representation_utils.m"
  }
#line 415 "program_representation_utils.m"
}

#line 390 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_1(
#line 390 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 390 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1)
#line 390 "program_representation_utils.m"
{
#line 390 "program_representation_utils.m"
  {
#line 390 "program_representation_utils.m"
    MR_Box program_representation_utils__wrapper_arg_2;
#line 390 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;

#line 390 "program_representation_utils.m"
    {
#line 390 "program_representation_utils.m"
      program_representation_utils__wrapper_arg_2 = program_representation_utils__IntroducedFrom__func__print_proc_to_strings__390__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), program_representation_utils__wrapper_arg_1);
    }
#line 390 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_2;
#line 390 "program_representation_utils.m"
  }
#line 390 "program_representation_utils.m"
}

#line 49 "program_representation_utils.m"
void MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0(
#line 49 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_6,
#line 49 "program_representation_utils.m"
  MR_Word program_representation_utils__ProcRep_3,
#line 49 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_4)
#line 49 "program_representation_utils.m"
{
#line 389 "program_representation_utils.m"
  {
#line 389 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeInfo_12_12;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_40_47;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__V_5_5;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcLabel_16;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcDefnRep_17;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__ArgVarReps_18;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalRep_19;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__VarNameTable_20;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__MaybeVarTypeTable_21;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__Detism_22;
#line 389 "program_representation_utils.m"
    MR_String program_representation_utils__ProcLabelString0_23;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__DetismString_24;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcLabelString_25;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__ArgsString_26;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalString_27;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__MainStrings_28;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__V_31_31;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__V_32_32;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__V_34_34;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__V_36_36;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__V_39_39;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__V_40_40;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__V_41_41;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__V_43_43;
#line 389 "program_representation_utils.m"
    MR_Word program_representation_utils__V_44_44;
#line 389 "program_representation_utils.m"
    MR_String program_representation_utils__DetismStr_61;

#line 390 "program_representation_utils.m"
    {
#line 390 "program_representation_utils.m"
      program_representation_utils__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 390 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_5_5, 0) = ((MR_Box) (&program_representation_utils_scalar_common_3[1]));
#line 390 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_5_5, 1) = ((MR_Box) (program_representation_utils__print_proc_to_strings_2_p_0_1));
#line 390 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_5_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 390 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_5_5, 3) = ((MR_Box) (program_representation_utils__TypeClassInfo_for_goal_annotation_6));
#line 390 "program_representation_utils.m"
    }
#line 11203 "program_representation_utils.c"
    {
#line 11205 "program_representation_utils.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(program_representation_utils__TypeClassInfo_for_goal_annotation_6, (MR_Integer) 1, &program_representation_utils__TypeInfo_12_12);
    }
#line 397 "program_representation_utils.m"
    program_representation_utils__ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcRep_3, (MR_Integer) 0)));
#line 397 "program_representation_utils.m"
    program_representation_utils__ProcDefnRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcRep_3, (MR_Integer) 1)));
#line 398 "program_representation_utils.m"
    program_representation_utils__ArgVarReps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_17, (MR_Integer) 0)));
#line 398 "program_representation_utils.m"
    program_representation_utils__GoalRep_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_17, (MR_Integer) 1)));
#line 398 "program_representation_utils.m"
    program_representation_utils__VarNameTable_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_17, (MR_Integer) 2)));
#line 398 "program_representation_utils.m"
    program_representation_utils__MaybeVarTypeTable_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_17, (MR_Integer) 3)));
#line 398 "program_representation_utils.m"
    program_representation_utils__Detism_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_17, (MR_Integer) 4)));
#line 400 "program_representation_utils.m"
    {
#line 400 "program_representation_utils.m"
      program_representation_utils__print_proc_label_to_string_2_p_0(program_representation_utils__ProcLabel_16, &program_representation_utils__ProcLabelString0_23);
    }
#line 826 "program_representation_utils.m"
    if ((program_representation_utils__Detism_22 == (MR_Integer) 5))
#line 840 "program_representation_utils.m"
      program_representation_utils__DetismStr_61 = (MR_String) "cc_multi";
#line 826 "program_representation_utils.m"
    else
#line 826 "program_representation_utils.m"
      if ((program_representation_utils__Detism_22 == (MR_Integer) 4))
#line 837 "program_representation_utils.m"
        program_representation_utils__DetismStr_61 = (MR_String) "cc_nondet";
#line 826 "program_representation_utils.m"
      else
#line 826 "program_representation_utils.m"
        if ((program_representation_utils__Detism_22 == (MR_Integer) 0))
#line 825 "program_representation_utils.m"
          program_representation_utils__DetismStr_61 = (MR_String) "det";
#line 826 "program_representation_utils.m"
        else
#line 826 "program_representation_utils.m"
          if ((program_representation_utils__Detism_22 == (MR_Integer) 6))
#line 843 "program_representation_utils.m"
            program_representation_utils__DetismStr_61 = (MR_String) "erroneous";
#line 826 "program_representation_utils.m"
          else
#line 826 "program_representation_utils.m"
            if ((program_representation_utils__Detism_22 == (MR_Integer) 7))
#line 846 "program_representation_utils.m"
              program_representation_utils__DetismStr_61 = (MR_String) "failure";
#line 826 "program_representation_utils.m"
            else
#line 826 "program_representation_utils.m"
              if ((program_representation_utils__Detism_22 == (MR_Integer) 3))
#line 834 "program_representation_utils.m"
                program_representation_utils__DetismStr_61 = (MR_String) "multi";
#line 826 "program_representation_utils.m"
              else
#line 826 "program_representation_utils.m"
                if ((program_representation_utils__Detism_22 == (MR_Integer) 2))
#line 831 "program_representation_utils.m"
                  program_representation_utils__DetismStr_61 = (MR_String) "nondet";
#line 826 "program_representation_utils.m"
                else
#line 828 "program_representation_utils.m"
                  program_representation_utils__DetismStr_61 = (MR_String) "semidet";
#line 848 "program_representation_utils.m"
    {
#line 848 "program_representation_utils.m"
      program_representation_utils__DetismString_24 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__DetismStr_61)));
    }
#line 11276 "program_representation_utils.c"
    program_representation_utils__TypeCtorInfo_40_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 402 "program_representation_utils.m"
    {
#line 402 "program_representation_utils.m"
      program_representation_utils__V_32_32 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_47, ((MR_Box) ((MR_String) " ")));
    }
#line 402 "program_representation_utils.m"
    {
#line 402 "program_representation_utils.m"
      program_representation_utils__V_34_34 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_47, ((MR_Box) (program_representation_utils__ProcLabelString0_23)));
    }
#line 402 "program_representation_utils.m"
    {
#line 402 "program_representation_utils.m"
      program_representation_utils__V_31_31 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__V_32_32, program_representation_utils__V_34_34);
    }
#line 402 "program_representation_utils.m"
    {
#line 402 "program_representation_utils.m"
      program_representation_utils__ProcLabelString_25 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__DetismString_24, program_representation_utils__V_31_31);
    }
#line 765 "program_representation_utils.m"
    if ((program_representation_utils__ArgVarReps_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "program_representation_utils.m"
      {
#line 764 "program_representation_utils.m"
        {
#line 764 "program_representation_utils.m"
          program_representation_utils__ArgsString_26 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 763 "program_representation_utils.m"
      }
#line 765 "program_representation_utils.m"
    else
#line 766 "program_representation_utils.m"
      {
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_18_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_22_97;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsStr_70;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_71_71;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_73_73;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__Arg_86;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_87;
#line 766 "program_representation_utils.m"
        MR_String program_representation_utils__ArgName_90;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_91;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_92_92;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_94_94;

#line 767 "program_representation_utils.m"
        {
#line 767 "program_representation_utils.m"
          program_representation_utils__V_71_71 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_18_77);
        }
#line 777 "program_representation_utils.m"
        program_representation_utils__Arg_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgVarReps_18, (MR_Integer) 0)));
#line 777 "program_representation_utils.m"
        program_representation_utils__Args_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgVarReps_18, (MR_Integer) 1)));
#line 778 "program_representation_utils.m"
        {
#line 778 "program_representation_utils.m"
          program_representation_utils__print_head_var_3_p_0(program_representation_utils__VarNameTable_20, program_representation_utils__Arg_86, &program_representation_utils__ArgName_90);
        }
#line 11350 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_22_97 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__V_92_92 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_97, ((MR_Box) ((MR_String) ", ")));
        }
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__print_args_2_to_strings__ho6_5_p_0(program_representation_utils__VarNameTable_20, program_representation_utils__Args_87, program_representation_utils__V_92_92, &program_representation_utils__ArgsString_91);
        }
#line 781 "program_representation_utils.m"
        {
#line 781 "program_representation_utils.m"
          program_representation_utils__V_94_94 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_97, ((MR_Box) (program_representation_utils__ArgName_90)), program_representation_utils__ArgsString_91);
        }
#line 781 "program_representation_utils.m"
        {
#line 781 "program_representation_utils.m"
          program_representation_utils__ArgsStr_70 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_97, program_representation_utils__V_71_71, program_representation_utils__V_94_94);
        }
#line 768 "program_representation_utils.m"
        {
#line 768 "program_representation_utils.m"
          program_representation_utils__V_73_73 = mercury__cord__snoc_2_f_0(program_representation_utils__TypeCtorInfo_18_77, program_representation_utils__ArgsStr_70, ((MR_Box) ((MR_String) ")")));
        }
#line 768 "program_representation_utils.m"
        {
#line 768 "program_representation_utils.m"
          program_representation_utils__ArgsString_26 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_18_77, ((MR_Box) ((MR_String) "(")), program_representation_utils__V_73_73);
        }
#line 766 "program_representation_utils.m"
      }
#line 406 "program_representation_utils.m"
    {
#line 406 "program_representation_utils.m"
      program_representation_utils__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_36_36, 0) = ((MR_Box) (program_representation_utils__V_5_5));
#line 406 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_36_36, 1) = ((MR_Box) (program_representation_utils__VarNameTable_20));
#line 406 "program_representation_utils.m"
    }
#line 406 "program_representation_utils.m"
    {
#line 406 "program_representation_utils.m"
      program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_12_12, program_representation_utils__TypeClassInfo_for_goal_annotation_6, program_representation_utils__V_36_36, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), program_representation_utils__GoalRep_19, &program_representation_utils__GoalString_27);
    }
#line 408 "program_representation_utils.m"
    {
#line 408 "program_representation_utils.m"
      program_representation_utils__V_41_41 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_47, ((MR_Box) ((MR_String) " :-\n")));
    }
#line 854 "program_representation_utils.m"
    {
#line 854 "program_representation_utils.m"
      program_representation_utils__V_44_44 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
#line 408 "program_representation_utils.m"
    {
#line 408 "program_representation_utils.m"
      program_representation_utils__V_43_43 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__GoalString_27, program_representation_utils__V_44_44);
    }
#line 408 "program_representation_utils.m"
    {
#line 408 "program_representation_utils.m"
      program_representation_utils__V_40_40 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__V_41_41, program_representation_utils__V_43_43);
    }
#line 408 "program_representation_utils.m"
    {
#line 408 "program_representation_utils.m"
      program_representation_utils__V_39_39 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__ArgsString_26, program_representation_utils__V_40_40);
    }
#line 408 "program_representation_utils.m"
    {
#line 408 "program_representation_utils.m"
      program_representation_utils__MainStrings_28 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__ProcLabelString_25, program_representation_utils__V_39_39);
    }
#line 413 "program_representation_utils.m"
    if ((program_representation_utils__MaybeVarTypeTable_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 412 "program_representation_utils.m"
      *program_representation_utils__Strings_4 = program_representation_utils__MainStrings_28;
#line 413 "program_representation_utils.m"
    else
#line 414 "program_representation_utils.m"
      {
#line 414 "program_representation_utils.m"
        MR_Word program_representation_utils__VarTypeTable_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__MaybeVarTypeTable_21, (MR_Integer) 0)));
#line 414 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeTableStrings_30;
#line 414 "program_representation_utils.m"
        MR_Word program_representation_utils__V_45_45;
#line 414 "program_representation_utils.m"
        MR_Word program_representation_utils__V_46_46;
#line 415 "program_representation_utils.m"
        MR_Box program_representation_utils__conv1_TypeTableStrings_30;

#line 415 "program_representation_utils.m"
        {
#line 415 "program_representation_utils.m"
          program_representation_utils__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 415 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_45_45, 0) = ((MR_Box) (&program_representation_utils_scalar_common_5[0]));
#line 415 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_45_45, 1) = ((MR_Box) (program_representation_utils__print_proc_to_strings_2_p_0_2));
#line 415 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 415 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_45_45, 3) = ((MR_Box) (program_representation_utils__VarNameTable_20));
#line 415 "program_representation_utils.m"
        }
#line 415 "program_representation_utils.m"
        {
#line 415 "program_representation_utils.m"
          program_representation_utils__V_46_46 = mercury__cord__init_0_f_0(program_representation_utils__TypeCtorInfo_40_47);
        }
#line 415 "program_representation_utils.m"
        {
#line 415 "program_representation_utils.m"
          mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0, (MR_Word) &program_representation_utils_scalar_common_1[0], program_representation_utils__V_45_45, program_representation_utils__VarTypeTable_29, ((MR_Box) (program_representation_utils__V_46_46)), &program_representation_utils__conv1_TypeTableStrings_30);
        }
#line 415 "program_representation_utils.m"
        program_representation_utils__TypeTableStrings_30 = ((MR_Word) program_representation_utils__conv1_TypeTableStrings_30);
#line 417 "program_representation_utils.m"
        {
#line 417 "program_representation_utils.m"
          *program_representation_utils__Strings_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__TypeTableStrings_30, program_representation_utils__MainStrings_28);
        }
#line 414 "program_representation_utils.m"
      }
#line 389 "program_representation_utils.m"
  }
#line 49 "program_representation_utils.m"
}

#line 415 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_proc_to_strings_3_p_0_1(
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 415 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 415 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4)
#line 415 "program_representation_utils.m"
{
#line 415 "program_representation_utils.m"
  {
#line 415 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 415 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_STATE_VARIABLE_Strings_16;

#line 415 "program_representation_utils.m"
    {
#line 415 "program_representation_utils.m"
      program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv0_STATE_VARIABLE_Strings_16);
    }
#line 415 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv0_STATE_VARIABLE_Strings_16));
#line 415 "program_representation_utils.m"
  }
#line 415 "program_representation_utils.m"
}

#line 45 "program_representation_utils.m"
void MR_CALL 
program_representation_utils__print_proc_to_strings_3_p_0(
#line 45 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_7,
#line 45 "program_representation_utils.m"
  MR_Word program_representation_utils__Lookup_4,
#line 45 "program_representation_utils.m"
  MR_Word program_representation_utils__ProcRep_5,
#line 45 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_6)
#line 45 "program_representation_utils.m"
{
#line 387 "program_representation_utils.m"
  {
#line 387 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_40_43;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcRep_5, (MR_Integer) 0)));
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcDefnRep_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcRep_5, (MR_Integer) 1)));
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__ArgVarReps_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_13, (MR_Integer) 0)));
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalRep_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_13, (MR_Integer) 1)));
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__VarNameTable_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_13, (MR_Integer) 2)));
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__MaybeVarTypeTable_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_13, (MR_Integer) 3)));
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__Detism_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_13, (MR_Integer) 4)));
#line 387 "program_representation_utils.m"
    MR_String program_representation_utils__ProcLabelString0_19;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__DetismString_20;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcLabelString_21;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__ArgsString_22;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalString_23;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__MainStrings_24;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__V_27_27;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__V_28_28;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__V_30_30;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__V_32_32;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__V_35_35;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__V_36_36;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__V_37_37;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__V_39_39;
#line 387 "program_representation_utils.m"
    MR_Word program_representation_utils__V_40_40;
#line 387 "program_representation_utils.m"
    MR_String program_representation_utils__DetismStr_57;

#line 400 "program_representation_utils.m"
    {
#line 400 "program_representation_utils.m"
      program_representation_utils__print_proc_label_to_string_2_p_0(program_representation_utils__ProcLabel_12, &program_representation_utils__ProcLabelString0_19);
    }
#line 826 "program_representation_utils.m"
    if ((program_representation_utils__Detism_18 == (MR_Integer) 5))
#line 840 "program_representation_utils.m"
      program_representation_utils__DetismStr_57 = (MR_String) "cc_multi";
#line 826 "program_representation_utils.m"
    else
#line 826 "program_representation_utils.m"
      if ((program_representation_utils__Detism_18 == (MR_Integer) 4))
#line 837 "program_representation_utils.m"
        program_representation_utils__DetismStr_57 = (MR_String) "cc_nondet";
#line 826 "program_representation_utils.m"
      else
#line 826 "program_representation_utils.m"
        if ((program_representation_utils__Detism_18 == (MR_Integer) 0))
#line 825 "program_representation_utils.m"
          program_representation_utils__DetismStr_57 = (MR_String) "det";
#line 826 "program_representation_utils.m"
        else
#line 826 "program_representation_utils.m"
          if ((program_representation_utils__Detism_18 == (MR_Integer) 6))
#line 843 "program_representation_utils.m"
            program_representation_utils__DetismStr_57 = (MR_String) "erroneous";
#line 826 "program_representation_utils.m"
          else
#line 826 "program_representation_utils.m"
            if ((program_representation_utils__Detism_18 == (MR_Integer) 7))
#line 846 "program_representation_utils.m"
              program_representation_utils__DetismStr_57 = (MR_String) "failure";
#line 826 "program_representation_utils.m"
            else
#line 826 "program_representation_utils.m"
              if ((program_representation_utils__Detism_18 == (MR_Integer) 3))
#line 834 "program_representation_utils.m"
                program_representation_utils__DetismStr_57 = (MR_String) "multi";
#line 826 "program_representation_utils.m"
              else
#line 826 "program_representation_utils.m"
                if ((program_representation_utils__Detism_18 == (MR_Integer) 2))
#line 831 "program_representation_utils.m"
                  program_representation_utils__DetismStr_57 = (MR_String) "nondet";
#line 826 "program_representation_utils.m"
                else
#line 828 "program_representation_utils.m"
                  program_representation_utils__DetismStr_57 = (MR_String) "semidet";
#line 848 "program_representation_utils.m"
    {
#line 848 "program_representation_utils.m"
      program_representation_utils__DetismString_20 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__DetismStr_57)));
    }
#line 11640 "program_representation_utils.c"
    program_representation_utils__TypeCtorInfo_40_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 402 "program_representation_utils.m"
    {
#line 402 "program_representation_utils.m"
      program_representation_utils__V_28_28 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_43, ((MR_Box) ((MR_String) " ")));
    }
#line 402 "program_representation_utils.m"
    {
#line 402 "program_representation_utils.m"
      program_representation_utils__V_30_30 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_43, ((MR_Box) (program_representation_utils__ProcLabelString0_19)));
    }
#line 402 "program_representation_utils.m"
    {
#line 402 "program_representation_utils.m"
      program_representation_utils__V_27_27 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__V_28_28, program_representation_utils__V_30_30);
    }
#line 402 "program_representation_utils.m"
    {
#line 402 "program_representation_utils.m"
      program_representation_utils__ProcLabelString_21 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__DetismString_20, program_representation_utils__V_27_27);
    }
#line 765 "program_representation_utils.m"
    if ((program_representation_utils__ArgVarReps_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "program_representation_utils.m"
      {
#line 764 "program_representation_utils.m"
        {
#line 764 "program_representation_utils.m"
          program_representation_utils__ArgsString_22 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 763 "program_representation_utils.m"
      }
#line 765 "program_representation_utils.m"
    else
#line 766 "program_representation_utils.m"
      {
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_18_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_22_93;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsStr_66;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_67_67;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_69_69;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__Arg_82;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_83;
#line 766 "program_representation_utils.m"
        MR_String program_representation_utils__ArgName_86;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_87;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_88_88;
#line 766 "program_representation_utils.m"
        MR_Word program_representation_utils__V_90_90;

#line 767 "program_representation_utils.m"
        {
#line 767 "program_representation_utils.m"
          program_representation_utils__V_67_67 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_18_73);
        }
#line 777 "program_representation_utils.m"
        program_representation_utils__Arg_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgVarReps_14, (MR_Integer) 0)));
#line 777 "program_representation_utils.m"
        program_representation_utils__Args_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgVarReps_14, (MR_Integer) 1)));
#line 778 "program_representation_utils.m"
        {
#line 778 "program_representation_utils.m"
          program_representation_utils__print_head_var_3_p_0(program_representation_utils__VarNameTable_16, program_representation_utils__Arg_82, &program_representation_utils__ArgName_86);
        }
#line 11714 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_22_93 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__V_88_88 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_93, ((MR_Box) ((MR_String) ", ")));
        }
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__print_args_2_to_strings__ho6_5_p_0(program_representation_utils__VarNameTable_16, program_representation_utils__Args_83, program_representation_utils__V_88_88, &program_representation_utils__ArgsString_87);
        }
#line 781 "program_representation_utils.m"
        {
#line 781 "program_representation_utils.m"
          program_representation_utils__V_90_90 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_93, ((MR_Box) (program_representation_utils__ArgName_86)), program_representation_utils__ArgsString_87);
        }
#line 781 "program_representation_utils.m"
        {
#line 781 "program_representation_utils.m"
          program_representation_utils__ArgsStr_66 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_93, program_representation_utils__V_67_67, program_representation_utils__V_90_90);
        }
#line 768 "program_representation_utils.m"
        {
#line 768 "program_representation_utils.m"
          program_representation_utils__V_69_69 = mercury__cord__snoc_2_f_0(program_representation_utils__TypeCtorInfo_18_73, program_representation_utils__ArgsStr_66, ((MR_Box) ((MR_String) ")")));
        }
#line 768 "program_representation_utils.m"
        {
#line 768 "program_representation_utils.m"
          program_representation_utils__ArgsString_22 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_18_73, ((MR_Box) ((MR_String) "(")), program_representation_utils__V_69_69);
        }
#line 766 "program_representation_utils.m"
      }
#line 406 "program_representation_utils.m"
    {
#line 406 "program_representation_utils.m"
      program_representation_utils__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_32_32, 0) = ((MR_Box) (program_representation_utils__Lookup_4));
#line 406 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_32_32, 1) = ((MR_Box) (program_representation_utils__VarNameTable_16));
#line 406 "program_representation_utils.m"
    }
#line 406 "program_representation_utils.m"
    {
#line 406 "program_representation_utils.m"
      program_representation_utils__print_goal_to_strings_5_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, program_representation_utils__TypeClassInfo_for_goal_annotation_7, program_representation_utils__V_32_32, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), program_representation_utils__GoalRep_15, &program_representation_utils__GoalString_23);
    }
#line 408 "program_representation_utils.m"
    {
#line 408 "program_representation_utils.m"
      program_representation_utils__V_37_37 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_43, ((MR_Box) ((MR_String) " :-\n")));
    }
#line 854 "program_representation_utils.m"
    {
#line 854 "program_representation_utils.m"
      program_representation_utils__V_40_40 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
#line 408 "program_representation_utils.m"
    {
#line 408 "program_representation_utils.m"
      program_representation_utils__V_39_39 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__GoalString_23, program_representation_utils__V_40_40);
    }
#line 408 "program_representation_utils.m"
    {
#line 408 "program_representation_utils.m"
      program_representation_utils__V_36_36 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__V_37_37, program_representation_utils__V_39_39);
    }
#line 408 "program_representation_utils.m"
    {
#line 408 "program_representation_utils.m"
      program_representation_utils__V_35_35 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__ArgsString_22, program_representation_utils__V_36_36);
    }
#line 408 "program_representation_utils.m"
    {
#line 408 "program_representation_utils.m"
      program_representation_utils__MainStrings_24 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__ProcLabelString_21, program_representation_utils__V_35_35);
    }
#line 413 "program_representation_utils.m"
    if ((program_representation_utils__MaybeVarTypeTable_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 412 "program_representation_utils.m"
      *program_representation_utils__Strings_6 = program_representation_utils__MainStrings_24;
#line 413 "program_representation_utils.m"
    else
#line 414 "program_representation_utils.m"
      {
#line 414 "program_representation_utils.m"
        MR_Word program_representation_utils__VarTypeTable_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__MaybeVarTypeTable_17, (MR_Integer) 0)));
#line 414 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeTableStrings_26;
#line 414 "program_representation_utils.m"
        MR_Word program_representation_utils__V_41_41;
#line 414 "program_representation_utils.m"
        MR_Word program_representation_utils__V_42_42;
#line 415 "program_representation_utils.m"
        MR_Box program_representation_utils__conv1_TypeTableStrings_26;

#line 415 "program_representation_utils.m"
        {
#line 415 "program_representation_utils.m"
          program_representation_utils__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 415 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_41_41, 0) = ((MR_Box) (&program_representation_utils_scalar_common_5[0]));
#line 415 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_41_41, 1) = ((MR_Box) (program_representation_utils__print_proc_to_strings_3_p_0_1));
#line 415 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 415 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_41_41, 3) = ((MR_Box) (program_representation_utils__VarNameTable_16));
#line 415 "program_representation_utils.m"
        }
#line 415 "program_representation_utils.m"
        {
#line 415 "program_representation_utils.m"
          program_representation_utils__V_42_42 = mercury__cord__init_0_f_0(program_representation_utils__TypeCtorInfo_40_43);
        }
#line 415 "program_representation_utils.m"
        {
#line 415 "program_representation_utils.m"
          mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0, (MR_Word) &program_representation_utils_scalar_common_1[0], program_representation_utils__V_41_41, program_representation_utils__VarTypeTable_25, ((MR_Box) (program_representation_utils__V_42_42)), &program_representation_utils__conv1_TypeTableStrings_26);
        }
#line 415 "program_representation_utils.m"
        program_representation_utils__TypeTableStrings_26 = ((MR_Word) program_representation_utils__conv1_TypeTableStrings_26);
#line 417 "program_representation_utils.m"
        {
#line 417 "program_representation_utils.m"
          *program_representation_utils__Strings_6 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__TypeTableStrings_26, program_representation_utils__MainStrings_24);
        }
#line 414 "program_representation_utils.m"
      }
#line 387 "program_representation_utils.m"
  }
#line 45 "program_representation_utils.m"
}

#line 231 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_3(
#line 231 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 231 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 231 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 231 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 231 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4)
#line 231 "program_representation_utils.m"
{
#line 231 "program_representation_utils.m"
  {
#line 231 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 231 "program_representation_utils.m"
    MR_Word program_representation_utils__conv4_HeadVar__4_47;

#line 231 "program_representation_utils.m"
    {
#line 231 "program_representation_utils.m"
      program_representation_utils__IntroducedFrom__pred__print_module_to_strings__231__1_4_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv4_HeadVar__4_47);
    }
#line 231 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv4_HeadVar__4_47));
#line 231 "program_representation_utils.m"
  }
#line 231 "program_representation_utils.m"
}

#line 223 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_2(
#line 223 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 223 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 223 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 223 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 223 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4)
#line 223 "program_representation_utils.m"
{
#line 223 "program_representation_utils.m"
  {
#line 223 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 223 "program_representation_utils.m"
    MR_Word program_representation_utils__conv2_STATE_VARIABLE_Strings_12;

#line 223 "program_representation_utils.m"
    {
#line 223 "program_representation_utils.m"
      program_representation_utils__accumulate_print_type_table_entries_to_strings_4_p_0(((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv2_STATE_VARIABLE_Strings_12);
    }
#line 223 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv2_STATE_VARIABLE_Strings_12));
#line 223 "program_representation_utils.m"
  }
#line 223 "program_representation_utils.m"
}

#line 221 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_1(
#line 221 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 221 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 221 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 221 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3)
#line 221 "program_representation_utils.m"
{
#line 221 "program_representation_utils.m"
  {
#line 221 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 221 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_STATE_VARIABLE_Strings_8;

#line 221 "program_representation_utils.m"
    {
#line 221 "program_representation_utils.m"
      program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv0_STATE_VARIABLE_Strings_8);
    }
#line 221 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_STATE_VARIABLE_Strings_8));
#line 221 "program_representation_utils.m"
  }
#line 221 "program_representation_utils.m"
}

#line 38 "program_representation_utils.m"
void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0(
#line 38 "program_representation_utils.m"
  MR_Word program_representation_utils__ModuleRep_3,
#line 38 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_4)
#line 38 "program_representation_utils.m"
{
#line 217 "program_representation_utils.m"
  {
#line 217 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 217 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_35_35;
#line 217 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeInfo_37_37;
#line 217 "program_representation_utils.m"
    MR_String program_representation_utils__ModuleName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_3, (MR_Integer) 0)));
#line 217 "program_representation_utils.m"
    MR_Word program_representation_utils__OISUTypesProcs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_3, (MR_Integer) 2)));
#line 217 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeTableMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_3, (MR_Integer) 3)));
#line 217 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcReps_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_3, (MR_Integer) 4)));
#line 217 "program_representation_utils.m"
    MR_String program_representation_utils__HeaderString_10;
#line 217 "program_representation_utils.m"
    MR_Word program_representation_utils__OISUStrs_11;
#line 217 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeTableStrs0_12;
#line 217 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeTableStrs_13;
#line 217 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcRepStrs_14;
#line 217 "program_representation_utils.m"
    MR_Word program_representation_utils__V_20_20;
#line 217 "program_representation_utils.m"
    MR_Word program_representation_utils__V_22_22;
#line 217 "program_representation_utils.m"
    MR_Word program_representation_utils__V_28_28;
#line 217 "program_representation_utils.m"
    MR_Word program_representation_utils__V_29_29;
#line 217 "program_representation_utils.m"
    MR_Word program_representation_utils__V_30_30;
#line 217 "program_representation_utils.m"
    MR_Word program_representation_utils__V_31_31;
#line 217 "program_representation_utils.m"
    MR_String program_representation_utils__V_52_52;
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils___StringTable_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_3, (MR_Integer) 1)));
#line 221 "program_representation_utils.m"
    MR_Box program_representation_utils__conv1_OISUStrs_11;
#line 223 "program_representation_utils.m"
    MR_Box program_representation_utils__conv3_TypeTableStrs0_12;
#line 231 "program_representation_utils.m"
    MR_Box program_representation_utils__conv5_ProcRepStrs_14;

#line 12008 "program_representation_utils.c"
    {
#line 12010 "program_representation_utils.c"
      program_representation_utils__V_52_52 = mercury__string__f_43_43_2_f_0(program_representation_utils__ModuleName_5, (MR_String) "\n");
    }
#line 12013 "program_representation_utils.c"
    {
#line 12015 "program_representation_utils.c"
      program_representation_utils__HeaderString_10 = mercury__string__f_43_43_2_f_0((MR_String) "Module ", program_representation_utils__V_52_52);
    }
#line 12018 "program_representation_utils.c"
    program_representation_utils__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 221 "program_representation_utils.m"
    {
#line 221 "program_representation_utils.m"
      program_representation_utils__V_20_20 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_35_35);
    }
#line 12025 "program_representation_utils.c"
    program_representation_utils__TypeInfo_37_37 = (MR_Word) &program_representation_utils_scalar_common_1[0];
#line 221 "program_representation_utils.m"
    {
#line 221 "program_representation_utils.m"
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_oisu_type_procs_0, program_representation_utils__TypeInfo_37_37, (MR_Word) &program_representation_utils_scalar_common_2[3], program_representation_utils__OISUTypesProcs_7, ((MR_Box) (program_representation_utils__V_20_20)), &program_representation_utils__conv1_OISUStrs_11);
    }
#line 221 "program_representation_utils.m"
    program_representation_utils__OISUStrs_11 = ((MR_Word) program_representation_utils__conv1_OISUStrs_11);
#line 223 "program_representation_utils.m"
    {
#line 223 "program_representation_utils.m"
      program_representation_utils__V_22_22 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_35_35);
    }
#line 223 "program_representation_utils.m"
    {
#line 223 "program_representation_utils.m"
      mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0, program_representation_utils__TypeInfo_37_37, (MR_Word) &program_representation_utils_scalar_common_2[4], program_representation_utils__TypeTableMap_8, ((MR_Box) (program_representation_utils__V_22_22)), &program_representation_utils__conv3_TypeTableStrs0_12);
    }
#line 223 "program_representation_utils.m"
    program_representation_utils__TypeTableStrs0_12 = ((MR_Word) program_representation_utils__conv3_TypeTableStrs0_12);
#line 225 "program_representation_utils.m"
    {
#line 225 "program_representation_utils.m"
      program_representation_utils__succeeded = mercury__cord__is_empty_1_p_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__TypeTableStrs0_12);
    }
#line 227 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 226 "program_representation_utils.m"
      program_representation_utils__TypeTableStrs_13 = program_representation_utils__TypeTableStrs0_12;
#line 227 "program_representation_utils.m"
    else
#line 228 "program_representation_utils.m"
      {
#line 228 "program_representation_utils.m"
        MR_Word program_representation_utils__V_23_23;
#line 228 "program_representation_utils.m"
        MR_Word program_representation_utils__V_25_25;
#line 228 "program_representation_utils.m"
        MR_Word program_representation_utils__V_26_26;

#line 228 "program_representation_utils.m"
        {
#line 228 "program_representation_utils.m"
          program_representation_utils__V_23_23 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_35_35, ((MR_Box) ((MR_String) "\nType table:\n")));
        }
#line 854 "program_representation_utils.m"
        {
#line 854 "program_representation_utils.m"
          program_representation_utils__V_26_26 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
        }
#line 228 "program_representation_utils.m"
        {
#line 228 "program_representation_utils.m"
          program_representation_utils__V_25_25 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__TypeTableStrs0_12, program_representation_utils__V_26_26);
        }
#line 228 "program_representation_utils.m"
        {
#line 228 "program_representation_utils.m"
          program_representation_utils__TypeTableStrs_13 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__V_23_23, program_representation_utils__V_25_25);
        }
#line 228 "program_representation_utils.m"
      }
#line 231 "program_representation_utils.m"
    {
#line 231 "program_representation_utils.m"
      program_representation_utils__V_28_28 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_35_35);
    }
#line 231 "program_representation_utils.m"
    {
#line 231 "program_representation_utils.m"
      mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0, (MR_Word) &program_representation_utils_scalar_common_1[2], program_representation_utils__TypeInfo_37_37, (MR_Word) &program_representation_utils_scalar_common_2[5], program_representation_utils__ProcReps_9, ((MR_Box) (program_representation_utils__V_28_28)), &program_representation_utils__conv5_ProcRepStrs_14);
    }
#line 231 "program_representation_utils.m"
    program_representation_utils__ProcRepStrs_14 = ((MR_Word) program_representation_utils__conv5_ProcRepStrs_14);
#line 233 "program_representation_utils.m"
    {
#line 233 "program_representation_utils.m"
      program_representation_utils__V_29_29 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_35_35, ((MR_Box) (program_representation_utils__HeaderString_10)));
    }
#line 233 "program_representation_utils.m"
    {
#line 233 "program_representation_utils.m"
      program_representation_utils__V_31_31 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__TypeTableStrs_13, program_representation_utils__ProcRepStrs_14);
    }
#line 233 "program_representation_utils.m"
    {
#line 233 "program_representation_utils.m"
      program_representation_utils__V_30_30 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__OISUStrs_11, program_representation_utils__V_31_31);
    }
#line 233 "program_representation_utils.m"
    {
#line 233 "program_representation_utils.m"
      *program_representation_utils__Strings_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__V_29_29, program_representation_utils__V_30_30);
    }
#line 217 "program_representation_utils.m"
  }
#line 38 "program_representation_utils.m"
}

void mercury__program_representation_utils__init(void)
{
}

void mercury__program_representation_utils__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&program_representation_utils__program_representation_utils__type_ctor_info_atomic_goal_is_call_0);
	MR_register_type_ctor_info(&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0);
	MR_register_type_ctor_info(&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_delta_0);
	MR_register_type_ctor_info(&program_representation_utils__program_representation_utils__type_ctor_info_print_goal_info_2);
	MR_register_type_ctor_info(&program_representation_utils__program_representation_utils__type_ctor_info_seen_duplicate_instantiation_0);
}

void mercury__program_representation_utils__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module program_representation_utils. */
